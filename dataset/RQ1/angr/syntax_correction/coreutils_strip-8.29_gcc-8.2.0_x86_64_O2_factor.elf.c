
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_406a02()
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

int sub_4091b0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40b800();
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

extern unsigned int g_410680[4];

int sub_404820()
{
    char *v0;  // [bp-0xc0]
    char v1;  // [bp-0xb8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0xb4]
    char v3;  // [bp-0xac]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0xa8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xa0]
    char v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x94]
    char v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x74]
    char v10;  // [bp-0x6c]
    char *v11;  // [bp-0x68]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x60]
    char v13;  // [bp-0x58]
    unsigned int v14;  // [bp-0x54]
    char *v16;  // rdi
    char *v17;  // rbx
    unsigned long long v19;  // rax
    char *v20;  // r13
    unsigned long long v22;  // cc_dep1
    unsigned long long v25;  // cc_dep1
    char *v26;  // rbx
    unsigned int v27;  // eax
    char v28;  // al
    /*INVALID_EQUAL_UNDEFINED*/
undefined v29;  // r15
    unsigned long long v30;  // rax
    char *v32;  // rbx
    char *v34;  // rbx
    unsigned long long v35;  // rax
    char *v36;  // rdx
    unsigned int v37;  // eax
    char v38;  // al
    unsigned long long v39;  // rax
    unsigned long long v41;  // rax
    char *v42;  // rdx
    unsigned int v43;  // eax
    char v44;  // al
    char *v48;  // rdx
    unsigned int v49;  // eax
    char v50;  // al
    unsigned long long v51;  // rax
    unsigned long long v53;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v54;  // rbx
    unsigned long long v55;  // rax
    unsigned int v56;  // eax
    char v57;  // al
    unsigned long long v58;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // r13
    unsigned long long v63;  // rax

    v17 = v16;
    v0 = (unsigned long long)(unsigned int)sub_4073a0();
    while (true)
    {
        while (true)
        {
            if (v4 == 0)
            {
                break;
            }
            v19 = __ctype_get_mb_cur_max();
            if (v19 <= 1)
            {
                v20 = &v4[strlen(v0)];
                if (v17 < v4)
                {
                    v22 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)v4[-1 + 7] * 2)) & 8);
                }
                if (((char)v22 == 0 || v17 >= v4) && *(v20) != 0)
                {
                    v25 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)*(v20) * 2)) & 8);
                }
                if ((v17 < v4 || (char)v25 != 0) && (v17 < v4 || *(v20) != 0) && ((char)v25 != 0 || (char)v22 != 0) && ((char)v22 != 0 || *(v20) != 0))
                {
                    if (v4[0] == 0)
                    {
                        break;
                    }
                    v17 = &v4[1];
                    if (v4[1] == 0)
                    {
                        break;
                    }
                }
                else
                {
                    v61 = 1;
                }
            }
            else
            {
                v4 = v17;
                v61 = &v2;
                v1 = 0;
                v2 = 0;
                v3 = 0;
                if (v17 < v4)
                {
                    while (true)
                    {
                        if (v1 == 0)
                        {
                            v26 = v4;
                            v27 = *(v4);
                            v28 = (unsigned long long)*(v4) >> 5;
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0)
                            {
                                v5 = 1;
                                v29 = *(v26);
                                v6 = 1;
                                v7 = *(v26);
                                v3 = 1;
                            }
                            else
                            {
                                v30 = mbsinit((unsigned int)&v2);
                                if (v30 == 0)
                                {
                                    break;
                                }
                                v1 = 1;
                            }
                        }
                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) == 0 || v1 != 0)
                        {
                            __ctype_get_mb_cur_max();
                            sub_407340();
                            v5 = (unsigned int)sub_408fc0();
                            if (v5 == -1)
                            {
                                v29 = v7;
                                v32 = v4;
                                v6 = 0;
                                v5 = 1;
                            }
                            else if (v5 != -2)
                            {
                                if (v5 == 0)
                                {
                                    v5 = 1;
                                    v29 = v7;
                                    if (*(v4) != 0 || v7 != 0)
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    v29 = v7;
                                }
                                v6 = 1;
                                if (mbsinit((unsigned int)&v2) != 0)
                                {
                                    v1 = 0;
                                }
                                v3 = 1;
                            }
                            if (v5 == -2)
                            {
                                v32 = v4;
                                v6 = 0;
                                v29 = v7;
                                v5 = strlen(v4);
                            }
                        }
                        if ((v1 == 0 || v5 != -2) && (v1 == 0 || v5 != -1) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0 || v5 != -2) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0 || v5 != -1))
                        {
                            if (v29 == 0)
                            {
                                break;
                            }
                            v32 = v4;
                        }
                        v34 = &v32[v5];
                        v35 = v6;
                        v3 = 0;
                        v4 = v34;
                        if (v35 == 0)
                        {
                            break;
                        }
                        v61 = (char)(iswalnum(v29) == 0);
                    }
                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) == 0 && v1 == 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (true)
                    {
                        abort(); /* do not return */
                    }
                    else if (v4 >= v4)
                    {
                        v61 = 1;
                    }
                    else if (v5 == 0 && v5 != -2 && v5 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) == 0 || v1 != 0) && (v1 != 0 || v30 != 0))
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (v35 != 0 && v4 >= v4)
                    {
                        v4 = (unsigned long long)(unsigned int)sub_40a420();
                        v1 = 0;
                        v2 = 0;
                        v3 = 0;
                        v11 = v0;
                        v8 = 0;
                        v9 = 0;
                        v10 = 0;
                    }
                    else if (v4[0] == 0 && v5 == 0 && v5 != -2 && v5 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) == 0 || v1 != 0) && (v1 != 0 || v30 != 0))
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                v61 = 1;
                v4 = (unsigned long long)(unsigned int)sub_40a420();
                v1 = 0;
                v2 = 0;
                v3 = 0;
                v11 = v0;
                v8 = 0;
                v9 = 0;
                v10 = 0;
                while (true)
                {
                    if (v8 == 0)
                    {
                        v36 = v11;
                        v37 = *(v11);
                        v38 = (unsigned long long)*(v11) >> 5;
                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v11) & 31)) & 1) != 0)
                        {
                            v12 = 1;
                            v13 = 1;
                            v14 = *(v36);
                            v10 = 1;
                        }
                        else
                        {
                            v39 = mbsinit((unsigned int)&v9);
                            if (v39 == 0)
                            {
                                break;
                            }
                            v8 = 1;
                        }
                    }
                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v11) & 31)) & 1) == 0 || v8 != 0)
                    {
                        __ctype_get_mb_cur_max();
                        sub_407340();
                        v12 = (unsigned int)sub_408fc0();
                        if (v12 == -1)
                        {
                            v12 = 1;
                            v13 = 0;
                            v10 = 1;
                        }
                        else if (v12 != -2)
                        {
                            if (v12 == 0)
                            {
                                v12 = 1;
                                if (*(v11) != 0 || v14 != 0)
                                {
                                    break;
                                }
                            }
                            v13 = 1;
                            v41 = mbsinit((unsigned int)&v9);
                            if (v41 != 0)
                            {
                                v8 = 0;
                            }
                            v10 = 1;
                        }
                        if (v12 == -2)
                        {
                            v13 = 0;
                            v12 = strlen(v11);
                            v10 = 1;
                        }
                    }
                    if (v14 != 0 || v12 == -2 && ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v11) & 31)) & 1) == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v11) & 31)) & 1) == 0 && v12 == -1 || v12 == -2 && v8 != 0 || v12 == -1 && v8 != 0)
                    {
                        if (v3 == 0)
                        {
                            if (v1 == 0)
                            {
                                v42 = v4;
                                v43 = *(v4);
                                v44 = (unsigned long long)*(v4) >> 5;
                                if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0)
                                {
                                    v5 = 1;
                                    v6 = 1;
                                    v7 = *(v42);
                                    v3 = 1;
                                }
                                else
                                {
                                    if (mbsinit((unsigned int)&v2) == 0)
                                    {
                                        break;
                                    }
                                    v1 = 1;
                                }
                            }
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) == 0 || v1 != 0)
                            {
                                __ctype_get_mb_cur_max();
                                sub_407340();
                                v5 = (unsigned int)sub_408fc0();
                                if (v5 == -1)
                                {
                                    v5 = 1;
                                    v6 = 0;
                                }
                                else if (v5 != -2)
                                {
                                    if (v5 == 0)
                                    {
                                        v5 = 1;
                                        if (*(v4) != 0 || v7 != 0)
                                        {
                                            break;
                                        }
                                    }
                                    v6 = 1;
                                    if (mbsinit((unsigned int)&v2) != 0)
                                    {
                                        v1 = 0;
                                    }
                                    v3 = 1;
                                }
                                if (v5 == -2)
                                {
                                    v6 = 0;
                                    v5 = strlen(v4);
                                }
                            }
                        }
                        if (v7 == 0 && (v3 == 0 || v6 != 0) && (v1 == 0 || v5 != -2 || v3 != 0) && (v1 == 0 || v3 != 0 || v5 != -1) && (v5 != -2 || v3 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0) && (v3 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0 || v5 != -1))
                        {
                            break;
                        }
                        v4 = &v4[v5];
                        v11 = &v11[v12];
                        v3 = 0;
                        v10 = 0;
                    }
                    else
                    {
                        if (v3 == 0)
                        {
                            if (v1 == 0)
                            {
                                v48 = v4;
                                v49 = *(v4);
                                v50 = (unsigned long long)*(v4) >> 5;
                                if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) != 0)
                                {
                                    v5 = 1;
                                    v54 = *(v48);
                                    v6 = 1;
                                    v7 = *(v48);
                                    v3 = 1;
                                }
                                else
                                {
                                    v51 = mbsinit((unsigned int)&v2);
                                    if (v51 == 0)
                                    {
                                        break;
                                    }
                                    v1 = 1;
                                }
                            }
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v4) & 31)) & 1) == 0 || v1 != 0)
                            {
                                __ctype_get_mb_cur_max();
                                sub_407340();
                                v5 = (unsigned int)sub_408fc0();
                                if (v5 == -1)
                                {
                                    v5 = 1;
                                    v54 = v7;
                                    v6 = 0;
                                    v3 = 1;
                                }
                                else if (v5 != -2)
                                {
                                    if (v5 != 0)
                                    {
                                        v54 = v7;
                                    }
                                    if (v5 == 0 && v4[0] == 0)
                                    {
                                        v54 = v7;
                                    }
                                    if ((v4[0] == 0 || v5 != 0) && (v7 == 0 || v5 != 0))
                                    {
                                        v6 = 1;
                                        v53 = mbsinit((unsigned int)&v2);
                                        if (v53 != 0)
                                        {
                                            v1 = 0;
                                        }
                                        v3 = 1;
                                    }
                                }
                                if (v5 == -2)
                                {
                                    v6 = 0;
                                    v54 = v7;
                                    v5 = strlen(v4);
                                    v3 = 1;
                                }
                                if (v5 == 0)
                                {
                                    v5 = 1;
                                    if (*(v4) != 0)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            v54 = v7;
                        }
                        if (unknown)
                        {
                            v55 = iswalnum(v54);
                        }
                        if (unknown)
                        {
                            break;
                        }
                        if (unknown)
                        {
                            v4 = &v4[0];
                            v1 = 0;
                            v2 = 0;
                            v3 = 0;
                            v56 = v4[0];
                            v57 = (unsigned long long)v4[0] >> 5;
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v4[0] & 31)) & 1) != 0)
                            {
                                v5 = 1;
                                v6 = 1;
                                v7 = v4[0];
                                v3 = 1;
                            }
                            else
                            {
                                v58 = mbsinit((unsigned int)&v2);
                                if (v58 == 0)
                                {
                                    break;
                                }
                                if (v58 != 0)
                                {
                                    v1 = 1;
                                    __ctype_get_mb_cur_max();
                                    sub_407340();
                                    v5 = (unsigned int)sub_408fc0();
                                    if (v5 == -1)
                                    {
                                        v5 = 1;
                                    }
                                    if (v5 == -2)
                                    {
                                        v5 = strlen(v4);
                                    }
                                    if (v5 == 0)
                                    {
                                        v5 = 1;
                                        if (*(v4) != 0)
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        if (unknown)
                        {
                            sub_404800(); /* do not return */
                        }
                        if (unknown)
                        {
                            v6 = 1;
                            v60 = mbsinit((unsigned int)&v2);
                            if (v60 != 0)
                            {
                                v1 = 0;
                            }
                            v3 = 1;
                        }
                        if (unknown)
                        {
                            break;
                        }
                        if (unknown)
                        {
                            v17 = &v4[v5];
                        }
                    }
                }
                if (unknown)
                {
                    v61 = 0;
                }
                else if (true)
                {
                    abort(); /* do not return */
                }
                else if (unknown)
                {
                    __assert_fail(); /* do not return */
                }
                else if (unknown)
                {
                    if (*(v17) == 0)
                    {
                        break;
                    }
                }
                else if (unknown)
                {
                    __assert_fail(); /* do not return */
                }
                else if (v4[0] == 0 && v5 == 0 || *(v11) == 0 && v12 == 0 && v12 != -2 && v12 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v11) & 31)) & 1) == 0 || v8 != 0) && (v39 != 0 || v8 != 0))
                {
                    __assert_fail(); /* do not return */
                }
                else if (unknown)
                {
                    free(v0);
                    v63 = v61;
                    return v63;
                }
                __assert_fail(); /* do not return */
                __assert_fail(); /* do not return */
                __assert_fail(); /* do not return */
                abort(); /* do not return */
            }
        }
        if (v19 <= 1 || v4 == 0)
        {
            if (true)
            {
                v61 = 0;
            }
            else if (v4 != 0 && ((char)v25 == 0 || *(v20) == 0 || v19 > 1) && ((char)v22 == 0 || v17 >= v4 || v19 > 1))
            {
                free(v0);
                v63 = v61;
                return v63;
            }
        }
        v61 = 0;
    }
    free(v0);
    v63 = v61;
    return v63;
}

int sub_4080b0()
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
        sub_408130(); /* do not return */
    }
}

extern unsigned int g_40be88;
extern int512_t g_40efa1;
extern int512_t g_40f23c;

int sub_403840()
{
    unsigned long long v0;  // [bp-0x160]
    void tmp_2;  // tmp #2
    unsigned long v1;  // [bp-0x158]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x14c]
    unsigned long v3;  // [bp-0x148]
    unsigned int v4;  // [bp-0x140]
    char v5;  // [bp-0x139]
    char v6;  // [bp-0x3e]
    unsigned long long v8;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // r14
    unsigned long long v10;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // esi
    unsigned long long v12;  // r15
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rcx
    unsigned int v17;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // rax
    unsigned long v20;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v21;  // rdx
    unsigned long long v22;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v23;  // rsi
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rdi
    unsigned int v26;  // cc_dep1

    v9 = v8 - 1;
    v0 = v8 - 1;
    if (((char)(v8 - 1) & 1) == 0)
    {
        v10 = 0;
        do
        {
            v9 = v9 % 2;
            v10 += 1;
        }
        while ((v9 & 1) == 0);
        v2 = v10;
    }
    else
    {
        v9 = v0;
        v2 = 0;
    }
    v16 = v8;
    v11 = 64;
    v12 = 0;
    v13 = 0;
    v14 = 1;
    do
    {
        v15 = v16 * 0x8000000000000000;
        v16 = v16 % 2;
        v13 = v13 % 2 | v15;
        if (v16 < v14 || v16 == v14 && v13 <= v12)
        {
            tmp_2 = v12;
            v12 -= v13;
            v14 = v14 - rcx - (char)(tmp_2 < v13);
        }
        v17 = v11;
        v11 = (unsigned long long)v11 - 1;
    }
    while (v17 != 1);
    v5 = sub_401ed0();
    if (v5 != 0)
    {
        sub_403210();
        v3 = v9;
        v4 = v6;
        v1 = stack_base + -360 + (unsigned long long)((unsigned int)v6 - 1) * 8 + 64;
        while (v4 != 0)
        {
            while (true)
            {
                v19 = sub_401e60();
                if (v1 == v20 && v19 != v12)
                {
                    break;
                }
                v21 = v12 * 288797732808819203 >> 64;
                v22 = v12 * 288797732808819203;
                if (v12 * 288797732808819203 >> 64 != 0)
                {
                    if (v16 > v21)
                    {
                        v23 = v16;
                        v19 = 64;
                        v24 = 0;
                        do
                        {
                            v25 = v23 * 0x8000000000000000;
                            v23 = v23 % 2;
                            v24 = v24 % 2 | v25;
                            if (v23 < v21 || v24 <= v22 && v23 == v21)
                            {
                                tmp_2 = v22;
                                v22 -= v24;
                                v21 = v21 - rsi - (unsigned long long)(char)(tmp_2 < v24);
                            }
                            v26 = v19;
                            v19 = (unsigned long long)v19 - 1;
                        }
                        while (v26 != 1);
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                if (v12 * 288797732808819203 >> 64 == 0 || v16 > v21)
                {
                    if (sub_401ed0() == 0)
                    {
                        break;
                    }
                    if (true)
                    {
                        break;
                    }
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40be88, 0x5));
                    abort(); /* do not return */
                }
            }
            if (v19 == v12 && (v12 * 288797732808819203 >> 64 == 0 || v16 > v21))
            {
                v5 = 0;
            }
            else if (v1 == v20)
            {
                return (unsigned long long)v5;
            }
        }
        if (v4 != 0)
        {
            v5 = 0;
        }
        else
        {
            return (unsigned long long)v5;
        }
    }
    v5 = 0;
    return (unsigned long long)v5;
}

// int sub_406d00()

int sub_402490()
{
    void tmp_2;  // tmp #2
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // r8b
    unsigned long long v3;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // r9
    unsigned long v5;  // rdx
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long *v8;  // rdi
    unsigned long v9;  // rcx
    unsigned long v10;  // r8
    unsigned long long v11;  // rcx
    char v12;  // al
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long *v16;  // rdi
    unsigned long long *v17;  // rdi

    if ((v2 & 1) != 0)
    {
        v4 = v3;
        if (v3 == 0 && v5 == 0)
        {
            *(v8) = v9;
            return v10;
        }
        for (; (v5 & 1) == 0; v5 = v5 % 2 | v7)
        {
            v7 = v4 * 0x8000000000000000;
            v4 = v4 % 2;
        }
        for (; v4 != 0 || v11 != 0; *(v16) = 0)
        {
            while (true)
            {
                if (v4 <= v11)
                {
                    v12 = v4 == v11;
                    if (v12 == 0 || v5 <= v2)
                    {
                        if (v4 >= v11 && (v12 == 0 || v5 >= v2))
                        {
                            *(v17) = v4;
                            return v5;
                        }
                        if (v4 < v11 || v5 < v2 && v12 != 0)
                        {
                            tmp_2 = v2;
                            v2 -= v5;
                            v11 = v11 - v4 - (unsigned long long)(char)(tmp_2 < v5);
                            do
                            {
                                v13 = v11 * 0x8000000000000000;
                                v11 = v11 % 2;
                                v2 = v2 % 2 | v13;
                            }
                            while ((v2 & 1) == 0);
                            if (v4 == 0 && v11 == 0)
                            {
                                break;
                            }
                        }
                    }
                }
                if (v4 > v11 || v12 != 0 && v5 > v2)
                {
                    tmp_2 = v5;
                    v14 = v5 - v2;
                    v4 = v4 - v11 - (char)(tmp_2 < v2);
                    do
                    {
                        v15 = v4 * 0x8000000000000000;
                        v4 = v4 % 2;
                        v14 = v14 % 2 | v15;
                    }
                    while ((v14 & 1) == 0);
                }
            }
        }
    }
    else
    {
        v0 = v6;
        __assert_fail(); /* do not return */
    }
}

extern unsigned int g_40bcd1;
extern unsigned int g_613240;
extern char g_613318;
extern unsigned long long g_613320;

int sub_4045f0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4091b0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_613318 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40bcd1, 0x5);
            if (g_613320 != 0)
            {
                sub_406da0();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_613318 != 0)
    {
        v3 = sub_4091b0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_613318 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_613240);
        error(0x0, *(v2), "%s");
    }
}

int sub_407da0()
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
        return sub_407940();
    }
}

extern int512_t g_40c220;

int sub_402bf0()
{
    void tmp_19;  // tmp #19
    void tmp_2;  // tmp #2
    void tmp_14;  // tmp #14
    unsigned long v0;  // [bp-0xb8]
    void tmp_3;  // tmp #3
    void tmp_90;  // tmp #90
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xb0]
    unsigned long v2;  // [bp-0xa8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xa0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x98]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x80]
    unsigned long v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x70]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x60]
    unsigned long v11;  // [bp-0x58]
    unsigned long v12;  // [bp-0x50]
    unsigned long v13;  // [bp-0x48]
    unsigned long v14;  // [bp-0x40]
    unsigned long long v16;  // rsi
    unsigned long long v17;  // r12
    unsigned long long v18;  // rdi
    unsigned long long v19;  // rbp
    unsigned long v20;  // rcx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rbx
    unsigned long long v27;  // rsi
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // r14
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long v32;  // rdx
    unsigned long long v33;  // rbx
    unsigned long v34;  // rsi
    unsigned long v35;  // cc_dep2
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rsi
    unsigned long long v38;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // rsi
    unsigned long long v40;  // rax
    unsigned long long v41;  // r15
    unsigned long long v42;  // r13
    unsigned long long v43;  // rax
    unsigned long v45;  // rcx
    unsigned long long v46;  // rdx
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    unsigned long long v50;  // r13
    unsigned long long v52;  // r14
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    unsigned long v55;  // rdx
    unsigned long long v56;  // r15
    unsigned long v57;  // rcx
    unsigned long v58;  // cc_dep2
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rcx
    unsigned long long v61;  // rdx
    unsigned long long v64;  // rbp
    unsigned long long v65;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbx
    unsigned long long v71;  // r8
    unsigned long long v72;  // rax
    unsigned long long v76;  // rax

    v17 = v16;
    v19 = v18;
    v8 = v20;
    v5 = v21;
    v22 = 0;
    v24 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(v18 < 2)) & 64) + 63;
    v22 = (char)(v18 < 2);
    v23 = 0 - (unsigned long long)(char)(v18 < 2) + 1;
    do
    {
        tmp_19 = v22;
        v22 *= 2;
        v23 = v23 * 2 | tmp_19 >> 63;
        if (v18 < v23 || v18 == v23 && v22 >= v16)
        {
            tmp_2 = v22;
            v22 -= v17;
            v23 = v23 - v18 - (char)(tmp_2 < v17);
        }
        v24 -= 1;
    }
    while (v24 != -1);
    tmp_14 = v22;
    v2 = v23;
    v3 = v22;
    v25 = v22 * 2;
    v72 = v23 * 2 + ((tmp_14 + tmp_14 <= tmp_14? 1 : 0) & 1);
    v10 = v72;
    v26 = v25;
    v27 = v72;
    v28 = v72;
    if (v72 > v18 || v17 <= v26 && v28 == v18)
    {
        v72 = v72 - v18 - (char)(v26 < v17);
        v10 = v72;
        v26 -= v17;
        v27 = v72;
    }
    v11 = v27;
    v12 = v27;
    if (v18 != 0 || v17 != 1)
    {
        v4 = v26;
        v50 = 1;
        v6 = 1;
        while (true)
        {
            v29 = (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]))) * 2 - v17 * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]))) * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])));
            while (true)
            {
                v1 = v29;
                v0 = v17;
                v30 = sub_401f60();
                tmp_3 = v30;
                v31 = v30 + v5;
                v32 = v14 + ((tmp_3 + v5 <= tmp_3? 1 : 0) & 1);
                v10 = v14 + ((tmp_3 + v5 <= tmp_3? 1 : 0) & 1);
                v33 = v31;
                v34 = v14 + ((v33 + v5 <= v33? 1 : 0) & 1);
                v35 = v14 + ((v33 + v5 <= v33? 1 : 0) & 1);
                if (v18 < v14 + ((v33 + v5 <= v33? 1 : 0) & 1) || v18 == v35 && v17 <= v33)
                {
                    v36 = v32 - v18 - (char)(v33 < v17);
                    v10 = v36;
                    v33 -= v17;
                    v37 = v36;
                }
                v38 = v4 - v33;
                if (INVALID_IR)
                {
                    tmp_2 = v38;
                }
                v1 = v1;
                v0 = v17;
                v3 = (unsigned int)sub_401f60();
                v2 = v14;
                if (((char)v50 & 31) != 1)
                {
                    v39 = v10;
                }
                else
                {
                    v40 = sub_402490();
                    if (v13 == 0 && v40 == 1)
                    {
                        v39 = v10;
                        v12 = v10;
                    }
                    if (v13 != 0 || v40 != 1)
                    {
                        v7 = v50;
                        v9 = v33;
                        v52 = v4;
                        while (true)
                        {
                            v1 = v1;
                            v0 = v17;
                            v53 = sub_401f60();
                            tmp_3 = v53;
                            v54 = v53 + v5;
                            v55 = v14 + ((tmp_3 + v5 <= tmp_3? 1 : 0) & 1);
                            v12 = v14 + ((tmp_3 + v5 <= tmp_3? 1 : 0) & 1);
                            v56 = v54;
                            v57 = v14 + ((v56 + v5 <= v56? 1 : 0) & 1);
                            v58 = v14 + ((v56 + v5 <= v56? 1 : 0) & 1);
                            if (v19 < v14 + ((v56 + v5 <= v56? 1 : 0) & 1) || v19 == v58 && v17 <= v56)
                            {
                                v59 = v55 - v19 - (char)(v56 < v17);
                                v12 = v59;
                                v56 -= v17;
                                v60 = v59;
                            }
                            v61 = v4 - v56;
                            if (INVALID_IR)
                            {
                                tmp_2 = v61;
                            }
                            if (v13 == 0)
                            {
                                v5 = v5;
                                v4 = v52;
                                v17 = unknown;
                                if (v19 >= v7)
                                {
                                    v64 = unknown;
                                }
                                else
                                {
                                    v64 = 0;
                                }
                                if (v7 > 1)
                                {
                                    if (v7 > 25030008)
                                    {
                                        v7 = v38;
                                        v65 = sub_403840();
                                    }
                                    if (v7 <= 25030008 || v65 != 0)
                                    {
                                        sub_401d80();
                                    }
                                }
                                if (v7 <= 1 || v65 == 0 && v7 > 25030008)
                                {
                                    sub_4027d0();
                                }
                                if (v64 != 0)
                                {
                                    v68 = sub_404050();
                                    if (v68 == 0)
                                    {
                                        v69 = (unsigned int)sub_402590();
                                        v4 = (unsigned int)sub_402590();
                                        sub_402590();
                                    }
                                    else
                                    {
                                        return sub_402440();
                                    }
                                }
                            }
                            else
                            {
                                v71 = sub_402490();
                                v5 = v5;
                                if (v19 == v13 && v17 == v2)
                                {
                                    v72 = sub_402bf0();
                                }
                                if (v19 != v13 || v17 != v2)
                                {
                                    v2 = v71;
                                    v17 = unknown;
                                    if (sub_404050() == 0)
                                    {
                                        sub_402bf0();
                                    }
                                    else
                                    {
                                        sub_402440();
                                    }
                                }
                            }
                            if (v13 == 0 && v64 == 0 || v19 != v13 && v13 != 0 || v13 != 0 && v17 != v2)
                            {
                                if (v17 > 1)
                                {
                                    if (v17 > 25030008)
                                    {
                                        v76 = sub_403840();
                                    }
                                    if (v17 <= 25030008 || v76 != 0)
                                    {
                                        v72 = sub_401d80();
                                    }
                                }
                                if (v17 <= 1 || v76 == 0 && v17 > 25030008)
                                {
                                    return sub_4027d0();
                                }
                            }
                        }
                        if (v13 == 0 && v68 == 0 && v71 != 1 && v64 != 0)
                        {
                            v29 = (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]))) * 2 - v17 * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]))) * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])));
                        }
                        else if ((v19 == v13 || v17 > 1) && (v17 == v2 || v17 > 1) && (v64 == 0 || v13 != 0) && (v13 != 0 || v17 > 1) && (v13 != 0 || v71 != 1) && (v19 == v13 || v17 <= 25030008 || v76 != 0) && (v17 <= 25030008 || v17 == v2 || v76 != 0) && (v17 <= 25030008 || v13 != 0 || v76 != 0))
                        {
                            return v72;
                        }
                    }
                }
                if (((char)v50 & 31) != 1 || v13 == 0 && v40 == 1)
                {
                    v50 -= 1;
                    v11 = v39;
                    v4 = v6 * 2;
                    if (v6 != 0)
                    {
                        v41 = v50;
                        v42 = v5;
                        v7 = v33;
                        do
                        {
                            v1 = v1;
                            v0 = v17;
                            v43 = sub_401f60();
                            tmp_3 = v43;
                            v45 = v14 + ((tmp_3 + v42 <= tmp_3? 1 : 0) & 1);
                            v10 = v14 + ((tmp_3 + v42 <= tmp_3? 1 : 0) & 1);
                            v46 = v43 + v42;
                            v39 = v14 + ((v46 + v42 <= v46? 1 : 0) & 1);
                            if (v18 < v14 + ((v46 + v42 <= v46? 1 : 0) & 1) || v17 <= v46 && v18 == v14 + ((v46 + v42 <= v46? 1 : 0) & 1))
                            {
                                v48 = v45 - v18 - (char)(v46 < v17);
                                v10 = v48;
                                v39 = v48;
                            }
                            v41 += 1;
                        }
                        while (v41 != 1);
                        v33 = v7;
                    }
                    v49 = v4;
                    v50 = v6;
                    v4 = v33;
                    v12 = v39;
                    v6 = v49;
                }
            }
            if (true)
            {
                v29 = (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]))) * 2 - v17 * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]))) * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * 2 - v17 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * 2 - v17 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v17 % 2 & 127)])));
            }
            else
            {
                return v72;
            }
        }
    }
    return v72;
}

extern unsigned int g_410680[4];

int sub_4073a0()
{
    void tmp_12;  // tmp #12
    void *v0;  // [bp-0x88]
    void tmp_14;  // tmp #14
    char v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x7c]
    char v3;  // [bp-0x74]
    void *v4;  // [bp-0x70]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x68]
    char v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x5c]
    char *v9;  // rdi
    unsigned long v11;  // r12
    void *v13;  // r12
    unsigned long v16;  // rsi
    unsigned int *v18;  // rbx
    void *v19;  // r13
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    void *v22;  // r14
    unsigned long v23;  // rax
    unsigned long long v24;  // rdx
    unsigned int v25;  // eax
    char v26;  // al
    unsigned int v27;  // eax
    unsigned long long v28;  // rax
    void *v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long v35;  // rax
    unsigned long long v36;  // rcx
    void *v37;  // rbp
    unsigned long long v38;  // rax
    unsigned long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned int v42;  // eax
    char v43;  // al
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rbx
    unsigned long long v47;  // rax
    void *v48;  // rbp
    void *v49;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v50;  // r14
    unsigned int v51;  // cc_dep1
    char *v53;  // r13
    void *v54;  // rbx
    void *v56;  // rax

    if (v11 != 0)
    {
        v11 = strdup(v9);
        if ((unsigned long long)__ctype_get_mb_cur_max() > 1)
        {
            if ((unsigned int)v16 != 0)
            {
                v4 = v18;
                do
                {
                    tmp_12 = *(v18);
                    v18 = &v18[1];
                    v20 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                }
                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                v1 = 0;
                v22 = v18;
                v3 = 0;
                v2 = 0;
                v23 = (unsigned int)(((unsigned int)v20 & 32896) == 0? (unsigned int)(v20 >> 16) : (unsigned int)v20);
                v24 = (char *)v18 + 2;
                v54 = (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v18 + 2) : v18) - 3 - ((v23 + v23 <= v23? 1 : 0) & 1);
                v0 = (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? v24 : v22) - 3 - ((v23 + v23 <= v23? 1 : 0) & 1);
                if ((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? v24 : v22) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) > v18)
                {
                    while (true)
                    {
                        if (v1 == 0)
                        {
                            v25 = (char)*((char *)v22);
                            v26 = (unsigned long long)(char)*((char *)v22) >> 5;
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v22) & 31)) & 1) != 0)
                            {
                                v5 = 1;
                                v27 = (char)*((char *)v22);
                                v6 = 1;
                                v22 = v4;
                                v7 = v27;
                                v3 = 1;
                            }
                            else
                            {
                                v28 = mbsinit((unsigned int)&v2);
                                if (v28 == 0)
                                {
                                    break;
                                }
                                v1 = 1;
                            }
                        }
                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v22) & 31)) & 1) == 0 || v1 != 0)
                        {
                            v5 = (unsigned int)sub_408fc0();
                            if (v5 != -1)
                            {
                                v22 = v4;
                                if (v5 != -2)
                                {
                                    if (v5 == 0)
                                    {
                                        v5 = 1;
                                        if (*((char *)v22) != 0 || v7 != 0)
                                        {
                                            break;
                                        }
                                    }
                                    v6 = 1;
                                    if (mbsinit((unsigned int)&v2) != 0)
                                    {
                                        v1 = 0;
                                    }
                                    v3 = 1;
                                }
                            }
                            else
                            {
                                v5 = 1;
                                v22 = v4;
                                v6 = 0;
                                v3 = 1;
                            }
                            if (v5 == -2)
                            {
                                v6 = 0;
                                v3 = 1;
                                v5 = v0 - v22;
                            }
                        }
                        if ((v1 == 0 || v5 != -1) && (v1 == 0 || v5 != -2) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v22) & 31)) & 1) != 0 || v5 != -1) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v22) & 31)) & 1) != 0 || v5 != -2))
                        {
                            if (iswspace(v7) == 0)
                            {
                                break;
                            }
                            v54 = v0;
                            v22 += v5;
                            v3 = 0;
                            v4 = v22;
                            if (v22 >= v0)
                            {
                                break;
                            }
                        }
                    }
                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v22) & 31)) & 1) == 0 && v1 == 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (true)
                    {
                        memmove(v18, v22, strlen(v22) + 1);
                    }
                    else if (v5 == 0 && *((char *)v22) == 0 && v5 != -1 && v5 != -2 && (v1 != 0 || v28 != 0))
                    {
                        sub_407380(); /* do not return */
                    }
                    else if (v5 == 0 && v5 != -1 && v5 != -2 && (v1 != 0 || v28 != 0))
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                memmove(v18, v22, strlen(v22) + 1);
            }
            if ((unsigned int)v16 == 0 || (unsigned int)v16 != 1)
            {
                v4 = v18;
                v37 = v18;
                do
                {
                    tmp_14 = (unsigned int)*((int *)v37);
                    v37 += 4;
                    v38 = (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152;
                }
                while (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) == 0);
                v1 = 0;
                v18 = v13;
                v3 = 0;
                v2 = 0;
                v40 = (unsigned int)(((unsigned int)v38 & 32896) == 0? (unsigned int)(v38 >> 16) : (unsigned int)v38);
                v41 = v37 + 2;
                v50 = 0;
                v0 = (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? v41 : v37) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1);
                if ((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? v41 : v37) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) > v13)
                {
                    while (true)
                    {
                        if (v1 == 0)
                        {
                            v42 = (char)*((char *)v54);
                            v43 = (unsigned long long)(char)*((char *)v54) >> 5;
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v54) & 31)) & 1) != 0)
                            {
                                v5 = 1;
                                v49 = v4;
                                v48 = v0;
                                v6 = 1;
                                v7 = (char)*((char *)v54);
                                v54 = v4 + 1;
                            }
                            else
                            {
                                v44 = mbsinit((unsigned int)&v2);
                                if (v44 == 0)
                                {
                                    break;
                                }
                                v1 = 1;
                            }
                        }
                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v54) & 31)) & 1) == 0 || v1 != 0)
                        {
                            v45 = sub_408fc0();
                            v46 = v45;
                            v5 = v45;
                            if (v45 != -1)
                            {
                                v49 = v4;
                                if (v45 != -2)
                                {
                                    if (v45 == 0)
                                    {
                                        v5 = 1;
                                        if (*((char *)v49) != 0 || v7 != 0)
                                        {
                                            break;
                                        }
                                        v46 = 1;
                                    }
                                    v6 = 1;
                                    v54 = v46 + v49;
                                    v47 = mbsinit((unsigned int)&v2);
                                    v48 = v0;
                                    if (v47 != 0)
                                    {
                                        v1 = 0;
                                    }
                                }
                                else
                                {
                                    v54 = v0;
                                    v6 = 0;
                                    v48 = v0;
                                    v5 = v0 - v49;
                                }
                            }
                            else
                            {
                                v49 = v4;
                                v48 = v0;
                                v6 = 0;
                                v5 = 1;
                                v54 = v4 + 1;
                            }
                        }
                        v3 = 1;
                        if (v50 == 0)
                        {
                            v50 = 1;
                            if (v6 != 0)
                            {
                                v50 = 0;
                                v50 = iswspace(v7) == 0;
                            }
                        }
                        if (v50 == 1 && v6 != 0)
                        {
                            v51 = iswspace(v7);
                            v53 = (v51 != 0? v49 : r13);
                            v50 = (unsigned int)(v51 != 0? 2 : (unsigned int)r14);
                        }
                        if (v50 == 2 && v6 != 0)
                        {
                            v4 = v54;
                            v3 = 0;
                            v50 = (iswspace(v7) == 0? 1 : (unsigned int)r14);
                        }
                        if ((v6 == 0 || v50 != 2) && (v50 == 2 || v50 != 1) && (v50 == 2 || v50 != 0))
                        {
                            v50 = 1;
                        }
                        if (v6 == 0 || v50 == 1 || v50 == 0 || v50 != 2)
                        {
                            v4 = v54;
                            v3 = 0;
                        }
                        if (v50 != 2)
                        {
                            break;
                        }
                        *(v53) = 0;
                    }
                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v54) & 31)) & 1) == 0 && v1 == 0)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (*((char *)v49) == 0 && v45 == 0 && v45 != -2 && v45 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v54) & 31)) & 1) == 0 || v1 != 0) && (v44 != 0 || v1 != 0))
                    {
                        sub_407380(); /* do not return */
                    }
                    else if (v45 == 0 && v45 != -2 && v45 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*((char *)v54) & 31)) & 1) == 0 || v1 != 0) && (v44 != 0 || v1 != 0))
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (unknown)
                    {
                        v56 = v18;
                        return v56;
                    }
                }
            }
            if (((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? v41 : v37) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) > v13 || (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? v24 : v22) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) > v18) && ((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? v41 : v37) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) > v13 || (unsigned int)v16 != 0) && ((unsigned int)v16 == 0 || (unsigned int)v16 != 1 || (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? v24 : v22) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) > v18))
            {
                __assert_fail(); /* do not return */
                sub_407380(); /* do not return */
                __assert_fail(); /* do not return */
            }
        }
        else
        {
            if ((unsigned int)v16 != 0)
            {
                v54 = (unsigned long long)(char)*((char *)v18);
                if (*((char *)v18) != 0)
                {
                    v19 = v18;
                    v21 = *((long long *)(unsigned long long)__ctype_b_loc());
                    while ((*((char *)(v21 + (v54 << 1) + 1)) & 32) != 0)
                    {
                        v19 += 1;
                        v54 = (unsigned long long)(char)*((char *)v19);
                        if ((char)v54 == 0)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    v19 = v18;
                }
                memmove(v18, v19, strlen(v19) + 1);
            }
            if ((unsigned int)v16 == 0 || (unsigned int)v16 != 1)
            {
                v33 = v18;
                do
                {
                    tmp_12 = (unsigned int)*((int *)v33);
                    v33 += 4;
                    v34 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                }
                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                v35 = (unsigned int)(((unsigned int)v34 & 32896) == 0? (unsigned int)(v34 >> 16) : (unsigned int)v34);
                v36 = v33 + 2;
                v54 = (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? v36 : v33) - 3 - ((v35 + v35 <= v35? 1 : 0) & 1) - 1;
                if (v18 <= (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? v36 : v33) - 3 - ((v40 + v40 <= v40? 1 : 0) & 1) - 1)
                {
                    while (true)
                    {
                        if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)(char)*((char *)v54) << 1) + 1)) & 32) != 0)
                        {
                            *((char *)v54) = 0;
                            v54 -= 1;
                            if (v54 > v54)
                            {
                                break;
                            }
                        }
                    }
                }
            }
        }
        v56 = v18;
        return v56;
    }
    sub_408130(); /* do not return */
}

int sub_408f80()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408ec0();
}

extern char g_40997c;

int sub_409890()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v3;  // rdi
    char *v4;  // rbx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r9
    unsigned long long v11;  // rax
    unsigned long long v12;  // r8
    unsigned long long *v13;  // rcx
    unsigned long long v14;  // r8
    char v15[2];  // r9
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    v4 = v3;
    v6 = v5 * 8;
    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x5, 0x24, Shr(rdx, 0x3d), Shr(rdx, 0x3c), cc_ndep) == 0)
    {
        if (v5 << 3 <= 4015)
        {
            rsp = stack_base + -56 - (v6 + 39 & -0x10);
            v7 = (stack_base + -56 - (v6 + 39 & -0x10) + 15 & -0x10) + 16;
        }
        else
        {
            v1 = v8;
            rsp = stack_base + -64;
            v7 = (unsigned int)sub_40b920();
            v9 = v1;
        }
    }
  if(INVALID_IR == 0 && !(INVALID_IR) && v5 << 3 > 4015 && v7 == 0 ||  amd64g_calculate_condition(0x5, 0x24, Shr(rdx, 0x3d), Shr(rdx, 0x3c), cc_ndep) == 0 && v5 << 3 <= 4015 && !(INVALID_IR) && (stack_base + -56 - ((v5 << 3) + 39 & -0x10) + 15 & -0x10) + 16 == 0 || !(INVALID_IR) &&  amd64g_calculate_condition(0x5, 0x24, Shr(rdx, 0x3d), Shr(rdx, 0x3c), cc_ndep) != 0 || INVALID_IR)
    {
        return 0;
    }
  if(INVALID_IR == 0 && !(INVALID_IR) && v5 << 3 > 4015 && v7 != 0 ||  amd64g_calculate_condition(0x5, 0x24, Shr(rdx, 0x3d), Shr(rdx, 0x3c), cc_ndep) == 0 && v5 << 3 <= 4015 && !(INVALID_IR) && (stack_base + -56 - ((v5 << 3) + 39 & -0x10) + 15 & -0x10) + 16 != 0)
    {
        *((long long *)(v7 + 8)) = 1;
        v12 = 0;
        v10 = 2;
        if (v5 > 2)
        {
            while (true)
            {
                v11 = (char)*((char *)(v9 + v10 - 1));
                if (*((char *)(v9 + v10 - 1)) != *((char *)(v9 + v12)))
                {
                    while (true)
                    {
                        if (v12 != 0)
                        {
                            v12 -= *((long long *)(v7 + v12 * 8));
                            if (*((char *)(v9 + v12)) == v11)
                            {
                                break;
                            }
                        }
                        else
                        {
                            *((long long *)(v7 + 2 * 8)) = 2;
                            v12 = 0;
                        }
                    }
                    if (v12 != 0)
                    {
                        v12 += 1;
                        *((unsigned long long *)(v7 + v10 * 8)) = v10 - v12;
                    }
                    else if (v12 == 0)
                    {
                        v10 += 1;
                        if (v5 == v10)
                        {
                            break;
                        }
                    }
                }
                v12 += 1;
                *((unsigned long long *)(v7 + v10 * 8)) = v10 - v12;
            }
        }
        *(v13) = 0;
        v14 = *(v4);
        v15 = v4;
        v16 = 0;
        while (v14 != 0)
        {
            while (true)
            {
                if (*((char *)(v1 + v16)) == v14)
                {
                    v17 = v16 + 1;
                    if (v5 != v17)
                    {
                        v14 = v15[1];
                    }
                    else
                    {
                        *(v13) = v4;
                    }
                }
                else if (v16 != 0)
                {
                    v4 = &v4[*((long long *)(v7 + v16 * 8))];
                    v16 -= *((long long *)(v7 + v16 * 8));
                    if (v14 == 0)
                    {
                        break;
                    }
                }
                else
                {
                    v14 = v15[1];
                }
            }
            if (v5 == v17 && *((char *)(v1 + v16)) == v14 || v16 != 0 && *((char *)(v1 + v16)) != v14)
            {
                rsp = rsp - 8;
                v0 = &g_40997c;
                sub_40b990();
                return 1;
            }
        }
        rsp = rsp - 8;
        v0 = &g_40997c;
        sub_40b990();
        return 1;
    }
}

extern int512_t g_613440;

int sub_406900()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_613440 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_613440 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_406c00()

// int sub_406f50()

int sub_408190()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_408130(); /* do not return */
        }
    }
    if (*(v3) != 12 || v2 != 0)
    {
        v2 = (unsigned int)sub_40b540();
        return v5;
    }
}

int sub_4081c0()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_408130(); /* do not return */
        }
    }
    if (*(v3) != 12 || v2 != 0)
    {
        v2 = (unsigned int)sub_40b710();
        return v5;
    }
}

int sub_406f70()
{
    unsigned long long v1[2];  // rdi
    unsigned long v2;  // rax

    v1[0] = 0;
    v1[1] = 0;
    return v2;
}

int sub_4054d0()
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
            v26 = (unsigned int)sub_4053d0();
            v27 = (unsigned int)sub_4053d0();
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
                                    }
                                    if ((((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0 || v77 > v76))
                                    {
                                        *((char *)(v28 + v47)) = 92;
                                        v33 = v78;
                                    }
                                case 7:
                                    v40 = 97;
                                    v78 = 0;
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
                                    v49 = v5;
                                    v89 = 0;
                                    v5 = v42;
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
                        case 8:
                            v40 = 98;
                        case 9:
                            v40 = 116;
                            v89 = 0;
                            v78 = 0;
                            if (v17 == 0)
                            {
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
                            else
                            {
                                v87 = v89;
                                *((unsigned long long *)&v4) = v4 & v87;
                            }
                        case 10:
                            v40 = 110;
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
                            v89 = (char)((unsigned int)v39 == 2);
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
                    case 10:
                        v40 = 10;
                        v45 = 110;
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                        if ((v17 & (unsigned int)v39 == 2) == 0)
                        {
                            v40 = v45;
                            v78 = 0;
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
                        }
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
                            v78 = v78;
                            v78 = 0;
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
                            v76 = (unsigned int)sub_4054d0();
                        }
                    }
                }
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
            {
                v88 = v13;
                if (v86 != 0 && v13 != 0)
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
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_408fc0();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
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
                    if ((v80 < v64 || v89 == 0) && (v89 == 0 || v63 == 0) && (v80 < v64 || v89 != 0))
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
            if ((v78 == 0 || v17 != 0) && (v76 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_4054d0();
            }
            if (v17 == 0 || v17 == 0 && (v17 & (unsigned int)v39 == 2) == 0 && v4 == 0 && v5 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v89 != 0 && v46 == 0)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v18 != 0 && v6 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v17 != 0) && (v76 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
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

// int sub_406ec0()

int sub_401f60()
{
    unsigned long long v0;  // [bp+0x8]
    void tmp_50;  // tmp #50
    void tmp_191;  // tmp #191
    void tmp_194;  // tmp #194
    void tmp_195;  // tmp #195
    void tmp_196;  // tmp #196
    void tmp_108;  // tmp #108
    void tmp_111;  // tmp #111
    void tmp_119;  // tmp #119
    unsigned long v1;  // [bp+0x10]
    unsigned long long v2;  // r10
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    unsigned long v5;  // rcx
    unsigned long v6;  // r8
    unsigned long v7;  // r9
    unsigned long v8;  // rsi
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r12
    unsigned long long v12;  // rbx
    char v13;  // sil
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    unsigned long long v18;  // cc_dep2
    unsigned long long v19;  // rcx
    unsigned long long *v20;  // rdi

    v2 = v0;
    v3 = 0 - v1;
    if (!(!(INVALID_IR)))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(!(INVALID_IR)))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(INVALID_IR))
    {
        tmp_50 = v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64) + (unsigned long long)(v4 * v6 >> 64) + (unsigned long long)((v4 * v6 * v3) * v7);
        tmp_191 = (unsigned long long)(v4 * v5 >> 64) + ((v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * (0 - v1)) * v0 >> 64) <= v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0)? 1 : 0) & 1) + ((v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64) + (unsigned long long)(v4 * v6 >> 64) <= v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64)? 1 : 0) & 1) + (unsigned long long)((v4 * v6 * v3) * v7 >> 64) + ((v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64) + (unsigned long long)(v4 * v6 >> 64) + (unsigned long long)((v4 * v6 * v3) * v7) <= v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64) + (unsigned long long)(v4 * v6 >> 64)? 1 : 0) & 1);
        tmp_194 = v8;
        tmp_195 = v8 * v6 >> 64;
        tmp_196 = v8 * v6;
        v9 = 0;
        v10 = tmp_196 + v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64) + (unsigned long long)(v4 * v6 >> 64) + (unsigned long long)((v4 * v6 * v3) * v7);
        v12 = v10 * v3;
        v13 = v10 != 0;
        tmp_108 = rsi + (unsigned long long)(tmp_194 * v5) + tmp_191;
        tmp_111 = rsi + (unsigned long long)(tmp_194 * v5) + tmp_191 + (v12 * v2 >> 64);
        tmp_119 = rsi + (unsigned long long)(tmp_194 * v5) + tmp_191 + (v12 * v2 >> 64) + tmp_195 + ((tmp_196 + tmp_50 <= tmp_196? 1 : 0) & 1);
        v15 = (unsigned long long)(tmp_194 * v5 >> 64) + (((unsigned long long)(tmp_194 * v5) + tmp_191 <= (unsigned long long)(tmp_194 * v5)? 1 : 0) & 1) + ((tmp_108 + ((v10 * (0 - v1)) * v0 >> 64) <= tmp_108? 1 : 0) & 1) + ((tmp_111 + tmp_195 + ((tmp_196 + v4 * v5 + (unsigned long long)(char)((unsigned long long)(v4 * v6) != 0) + ((v4 * v6 * v3) * v2 >> 64) + (unsigned long long)(v4 * v6 >> 64) + (unsigned long long)((v4 * v6 * v3) * v7) <= tmp_196? 1 : 0) & 1) <= tmp_111? 1 : 0) & 1) + (unsigned long long)(v12 * v7 >> 64) + ((tmp_119 + (unsigned long long)(v12 * v7) <= tmp_119? 1 : 0) & 1);
        v16 = v15;
        v17 = rsi + (unsigned long long)(tmp_194 * v5) + tmp_191 + (v12 * v2 >> 64) + tmp_195 + ((tmp_196 + tmp_50 <= tmp_196? 1 : 0) & 1) + (unsigned long long)(v12 * v7);
        v18 = v15;
        if (v7 < v15 || v2 <= v17 && v7 == v18)
        {
            v19 = v15 - v7 - (unsigned long long)(char)(v17 < v2);
            v16 = v19;
            v17 -= v2;
        }
        *(v20) = v16;
        return v17;
    }
    __assert_fail(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[234];
    char field_fa;
} struct_0;

typedef struct struct_1 {
    char padding_0[4255648];
    char field_40efa0;
} struct_1;

extern int512_t g_40c290;
extern int512_t g_40c298;
extern int512_t g_40c2a0;
extern unsigned long long g_40c2a8[4];
extern int512_t g_40ece0;
extern int512_t g_40efa0;

int sub_403210()
{
    unsigned long long v0;  // [bp-0x50]
    void tmp_6;  // tmp #6
    void tmp_19;  // tmp #19
    void tmp_27;  // tmp #27
    void tmp_5;  // tmp #5
    void tmp_1;  // tmp #1
    void tmp_45;  // tmp #45
    void tmp_12;  // tmp #12
    void tmp_10;  // tmp #10
    struct v1;  // [bp-0x48]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x40]
    unsigned long long v4;  // rsi
    unsigned long long v5;  // r14
    struct v6;  // rdx
    unsigned long long v7;  // rdi
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r13
    unsigned long long v11;  // r15
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r15
    unsigned long long v17;  // r8
    unsigned long long v18;  // rsi
    unsigned long v19;  // rdx
    unsigned long v21;  // rdx
    unsigned long long v22;  // rdx
    unsigned long long v23[16];  // rbx
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdx
    unsigned long long v29;  // r15
    unsigned int v30;  // r8d
    struct v31;  // rdx
    unsigned long long v32;  // rsi
    unsigned long long v33;  // r8
    unsigned long long v34;  // rdx
    unsigned long long v35;  // r15
    unsigned int v36;  // r8d
    struct v37;  // rdx
    unsigned long long v38;  // rsi
    unsigned long long v39;  // r8
    unsigned long long v40;  // rdx
    unsigned long long v41;  // r15
    unsigned long long v42;  // r8
    struct v43;  // rdx
    unsigned long long v44;  // rsi
    unsigned int v45;  // r8d
    unsigned long long v46;  // rdx
    unsigned long long v47;  // r15
    unsigned long long v48;  // r8
    struct v49;  // rdx
    unsigned long long v50;  // rsi
    unsigned int v51;  // r8d
    unsigned long long v52;  // r12
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax

    v5 = v4;
    v6->field_fa = 0;
    v0 = v7;
    v1 = v6;
    v6->field_8 = 0;
    if (v7 != 0 || v4 > 1)
    {
        if (((char)v4 & 1) == 0)
        {
            if (v4 == 0)
            {
                tmp_6 = /*INVALID_IR*/ ExpCmpNE;
                tmp_27 = INVALID_IR;;
                v5 = v0 >> ((char)(tmp_6? tmp_27 : rcx) & 63);
                v26 = sub_401d80();
                v0 = 0;
            }
            else
            {
                tmp_5 = /*INVALID_IR*/ ExpCmpNE;
                tmp_45 = INVALID_IR;;
                tmp_12 = v0 << ((char)(64 - (unsigned int)(tmp_5? tmp_45 : rdx)) & 63);
                v0 >>= (char)(tmp_5? tmp_45 : rdx) & 63;
                v5 = v4 >> ((char)(tmp_5? tmp_45 : rdx) & 63) | tmp_12;
                v26 = sub_401d80();
            }
        }
        if ((v4 != 0 || ((char)v4 & 1) != 0) && v0 != 0)
        {
            v9 = 1;
            v10 = 2;
            v11 = 12297829382473034411;
            v12 = 3;
            while (true)
            {
                v18 = v5 * v11;
                v19 = (v5 * v11) * v12 >> 64;
                v26 = (v5 * v11) * v12;
                if (v0 >= (v5 * v11) * v12 >> 64)
                {
                    v26 = v11 * (v0 - v19);
                    if (v11 * (v0 - v19) <= (&g_40c298)[2 * v9])
                    {
                        do
                        {
                            v5 = v18;
                            v0 = v26;
                            sub_401d80();
                            v18 = v5 * 12297829382473034411;
                            v21 = (v5 * 12297829382473034411) * 3 >> 64;
                            v26 = (v5 * 12297829382473034411) * 3;
                            if ((v5 * 12297829382473034411) * 3 >> 64 > v0)
                            {
                                break;
                            }
                            v26 = 12297829382473034411 * (v0 - v21);
                        }
                        while (12297829382473034411 * (v0 - v21) <= (&g_40c298)[2]);
                    }
                }
                v14 = v9;
                v12 += v10;
                v9 += 1;
                if (v0 == 0 || (unsigned int)v14 > 667)
                {
                    break;
                }
                v10 = (char)*(&((char *)&g_40efa0)[v9]);
                v11 = (&g_40c290)[2 * v9];
            }
        }
        if (v0 == 0 || v4 == 0 && ((char)v4 & 1) == 0)
        {
            v13 = 26;
            v12 = 3;
            v14 = 0;
            v15 = 0;
            v16 = 6148914691236517205;
            v17 = 12297829382473034411;
        }
        if ((unsigned int)v14 <= 667 || v0 == 0 || v4 == 0 && ((char)v4 & 1) == 0)
        {
            do
            {
                v15 = v14;
                v13 = (char)*(&((char *)&g_40ece0)[v14]);
                v17 = (&g_40c2a0)[2 * v14];
                v16 = g_40c2a8[2 * v14];
                v22 = v17 * v5;
                v23 = &(&g_40c2a0)[2 * v15];
                if (v17 * v5 > v16)
                {
                    v24 = v5 * v23[2];
                }
                else
                {
                    while (true)
                    {
                        v5 = v22;
                        v2 = v17;
                        v26 = sub_401d80();
                        v17 = v2;
                        v22 = v2 * v5;
                        if (v2 * v5 > v16)
                        {
                            break;
                        }
                    }
                    v24 = v5 * v23[2];
                }
                if (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16)
                {
                    v25 = v5 * v23[4];
                }
                if (v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16)
                {
                    while (true)
                    {
                        v5 = v24;
                        v26 = sub_401d80();
                        v24 = v5 * v23[2];
                        if (v5 * v23[2] > v23[3])
                        {
                            break;
                        }
                    }
                    v25 = v5 * v23[4];
                }
                if ((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5])
                {
                    v27 = v5 * v23[6];
                }
                if ((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5])
                {
                    while (true)
                    {
                        v5 = v25;
                        v26 = sub_401d80();
                        v25 = v5 * v23[4];
                        if (v5 * v23[4] > v23[5])
                        {
                            break;
                        }
                    }
                    v27 = v5 * v23[6];
                }
                if (((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5]) && v23[7] < v5 * v23[6] || ((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5]) && v23[7] < v5 * v23[6])
                {
                    v28 = v5 * v23[8];
                }
                if (((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5]) && v23[7] >= v5 * v23[6] || ((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5]) && v23[7] >= v5 * v23[6])
                {
                    while (true)
                    {
                        v5 = v27;
                        v26 = sub_401d80();
                        v27 = v5 * v23[6];
                        if (v5 * v23[6] > v23[7])
                        {
                            break;
                        }
                    }
                    v28 = v5 * v23[8];
                }
                if ((((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5]) && v23[7] >= v5 * v23[6] || ((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5]) && v23[7] >= v5 * v23[6]) && v23[9] >= v5 * v23[8] || (((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] <= v23[5]) && v23[7] < v5 * v23[6] || ((v17 * v5 <= v16 && v5 * v23[2] <= v23[3] || v5 * v23[2] <= v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5] || (v17 * v5 <= v16 && v5 * v23[2] > v23[3] || v5 * v23[2] > v23[3] && v17 * v5 > v16) && v5 * v23[4] > v23[5]) && v23[7] < v5 * v23[6]) && v23[9] >= v5 * v23[8])
                {
                    v5 = v28;
                    v29 = v14 + 1;
                    v30 = (unsigned int)v14 + 5;
                    while (true)
                    {
                        v31 = v29;
                        v32 = v12;
                        do
                        {
                            tmp_10 = v31;
                            v31 = (unsigned long long)((unsigned int)v31 + 1);
                            v32 += (char)*(&((char *)&g_40efa0)[tmp_10]);
                        }
                        while (v30 != (unsigned int)v31);
                        v2 = v30;
                        v26 = sub_401d80();
                        v33 = v2;
                        if (v5 * v23[8] > v23[9])
                        {
                            break;
                        }
                    }
                }
                v34 = v5 * v23[10];
                if (v5 * v23[10] <= v23[11])
                {
                    v5 = v34;
                    v35 = v14 + 1;
                    v36 = (unsigned int)v14 + 6;
                    while (true)
                    {
                        v37 = v35;
                        v38 = v12;
                        do
                        {
                            tmp_10 = v37;
                            v37 = (unsigned long long)((unsigned int)v37 + 1);
                            v38 += (char)*(&((char *)&g_40efa0)[tmp_10]);
                        }
                        while (v36 != (unsigned int)v37);
                        v2 = v36;
                        v26 = sub_401d80();
                        v39 = v2;
                        if (v5 * v23[10] > v23[11])
                        {
                            break;
                        }
                    }
                }
                v40 = v5 * v23[12];
                if (v23[13] >= v5 * v23[12])
                {
                    v5 = v40;
                    v41 = v14 + 1;
                    v42 = v14 + 7;
                    while (true)
                    {
                        v43 = v41;
                        v44 = v12;
                        do
                        {
                            tmp_10 = v43;
                            v43 = (unsigned long long)((unsigned int)v43 + 1);
                            v44 += (char)*(&((char *)&g_40efa0)[tmp_10]);
                        }
                        while (v42 != (unsigned int)v43);
                        v2 = v42;
                        v26 = sub_401d80();
                        v45 = v2;
                        if (v5 * v23[12] > v23[13])
                        {
                            break;
                        }
                    }
                }
                v46 = v5 * v23[14];
                if (v5 * v23[14] <= v23[15])
                {
                    v5 = v46;
                    v47 = v14 + 1;
                    v48 = v14 + 8;
                    while (true)
                    {
                        v49 = v47;
                        v50 = v12;
                        do
                        {
                            tmp_10 = v49;
                            v49 = (unsigned long long)((unsigned int)v49 + 1);
                            v50 += (char)*(&((char *)&g_40efa0)[tmp_10]);
                        }
                        while (v48 != (unsigned int)v49);
                        v2 = v48;
                        v26 = sub_401d80();
                        v51 = v2;
                        if (v5 * v23[14] > v23[15])
                        {
                            break;
                        }
                    }
                }
                v52 = v12 + v13;
                v14 = (unsigned int)v14 + 8;
            }
            while ((unsigned int)v14 <= 667 && v5 >= v52 * v52);
        }
        if (!(v0 == 0))
        {
            v53 = sub_404050();
        }
        else if (v5 > 1)
        {
            v54 = sub_404050();
        }
    }
    if ((v7 == 0 || v0 == 0) && (v7 == 0 || v5 <= 1) && (v4 <= 1 || v0 == 0) && (v4 <= 1 || v5 <= 1))
    {
        return v26;
    }
}

int sub_408170()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if ((unsigned int)v2 < 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_408130(); /* do not return */
        }
    }
    if ((unsigned int)v2 >= 0 || *(v3) != 12)
    {
        v2 = (unsigned int)sub_40b2f0();
        return v5;
    }
}

int sub_406c90()
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
    return sub_406700();
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

extern unsigned int g_410588;
extern unsigned int g_4105cc;
extern unsigned long long stderr;

int sub_4088f0()
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
    char *v15[3];  // r12
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
        if (*(v19) == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || ((char)(v18 - 43) & 253) == 0 && v8->field_20 == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_4081f0();
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
                if (v13 > (unsigned int)v27)
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
                            if (v13 <= (unsigned int)v29)
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
            if (v13 != (unsigned int)v26)
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
                            sub_4081f0();
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
    if ((v13 != (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if ((v13 != (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 != (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_4082d0();
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
                if (v0->field_0 != v46)
                {
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410588, 0x5), *(v15), v45);
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
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4105cc, 0x5), *(v15), v45);
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
                v60 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v60;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410588, 0x5), *(v15), v45);
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
        v45 = (unsigned int)sub_4082d0();
    }
    v66 = v45;
    return v66;
}

extern int512_t g_613228;

// int sub_40bc60()

extern int512_t g_40c220;

int sub_4027d0()
{
    unsigned long v0;  // [bp-0x68]
    void tmp_2;  // tmp #2
    void tmp_15;  // tmp #15
    void tmp_95;  // tmp #95
    void tmp_100;  // tmp #100
    unsigned long v1;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long v7;  // rsi
    unsigned long v8;  // rdx
    unsigned long long v9;  // rdi
    unsigned long long v10;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdi
    unsigned long long v14;  // rax
    unsigned long long v15;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // esi
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r13
    char v19;  // bpl
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r15
    unsigned long long v23;  // r14
    unsigned long long v24;  // r11
    unsigned long long v25;  // r8
    unsigned long long v26;  // r10
    unsigned long long v27;  // r9
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33;  // r11
    unsigned long long v34;  // rax
    unsigned long long v35;  // r8
    unsigned long long v36;  // rax
    unsigned long long v37;  // cc_dep1
    unsigned long long v38;  // r8
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rax
    unsigned long long v41;  // r15
    unsigned long long v42;  // rbp
    unsigned long long v43;  // rax
    unsigned long v44;  // rbp
    unsigned long v45;  // r15
    unsigned long long v46;  // r12

    v0 = v7;
    v1 = v8;
    if (v9 > 1)
    {
        v46 = v9;
        v5 = v0 + 1;
        while (true)
        {
            v11 = v46;
            v16 = 64;
            v14 = 1;
            v12 = 0;
            v13 = 0;
            do
            {
                v10 = v11 * 0x8000000000000000;
                v11 = v11 % 2;
                v12 = v12 % 2 | v10;
                if (v11 < v14 || v12 <= v13 && v11 == v14)
                {
                    tmp_2 = v13;
                    v13 -= v12;
                    v14 = v14 - rcx - (char)(tmp_2 < v12);
                }
                v15 = v16;
                v16 -= 1;
            }
            while (v15 != 1);
            v17 = 0;
            v18 = v13;
            v19 = !(v46 - v13 <= v13);
            v20 = (0 - rbp & v46) + v13 * 2 - v46;
            if (v46 > v0)
            {
                v21 = v20;
                v22 = v20;
                v39 = 1;
                v23 = 1;
                while (true)
                {
                    v24 = v39;
                    v25 = (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * 2 - v46 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]))) * 2 - v46 * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * 2 - v46 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]))) * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * 2 - v46 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])));
                    v26 = v46 - v0;
                    v27 = v0 - v46;
                    while (true)
                    {
                        tmp_15 = (v20 * v20 >> 64) - ((v25 * v20 * v20) * v46 >> 64);
                        tmp_95 = (v20 * v20 >> 64) - ((v25 * v20 * v20) * v46 >> 64) + v46;
                        tmp_100 = v20 * v20 >> 64 < (v25 * v20 * v20) * v46 >> 64;
                        v20 = (0 - (unsigned long long)(char)((v20 * v20 >> 64 < (v25 * v20 * v20) * v46 >> 64? (v20 * v20 >> 64) - ((v25 * v20 * v20) * v46 >> 64) + v46 : (unsigned long long)((v20 * v20 >> 64) - ((v25 * v20 * v20) * v46 >> 64))) < v26) & v46) + (v20 * v20 >> 64 < (v25 * v20 * v20) * v46 >> 64? (v20 * v20 >> 64) - ((v25 * v20 * v20) * v46 >> 64) + v46 : (unsigned long long)((v20 * v20 >> 64) - ((v25 * v20 * v20) * v46 >> 64))) + v27;
                        v18 = (unknown? unknown : (unsigned long long)(unknown));
                        if (((char)v23 & 31) == 1)
                        {
                            v28 = sub_401d20();
                            if (v28 == 1)
                            {
                                v21 = v20;
                            }
                            else
                            {
                                while (true)
                                {
                                    v21 = (0 - (unsigned long long)(char)((v21 * v21 >> 64 < (v25 * v21 * v21) * v46 >> 64? (v21 * v21 >> 64) - ((v25 * v21 * v21) * v46 >> 64) + v46 : (unsigned long long)((v21 * v21 >> 64) - ((v25 * v21 * v21) * v46 >> 64))) < v26) & v46) + (v21 * v21 >> 64 < (v25 * v21 * v21) * v46 >> 64? (v21 * v21 >> 64) - ((v25 * v21 * v21) * v46 >> 64) + v46 : (unsigned long long)((v21 * v21 >> 64) - ((v25 * v21 * v21) * v46 >> 64))) + v27;
                                    if (v24 != 1)
                                    {
                                        break;
                                    }
                                }
                                v32 = v24;
                                v24 = sub_401d20();
                                if (v46 != v2)
                                {
                                    v34 = (0 | v46) % v2;
                                    v35 = (0 | v46) % v2;
                                    v46 = (0 | v46) % v2;
                                    if (v2 > 1)
                                    {
                                        if (v2 > 25030008)
                                        {
                                            v3 = v32;
                                            v2 = v33;
                                            v4 = v34;
                                            v36 = sub_403840();
                                            v32 = v3;
                                            v35 = v4;
                                        }
                                        if (v2 <= 25030008 || v36 != 0)
                                        {
                                            v3 = v35;
                                            v2 = v32;
                                            v40 = sub_401d80();
                                            v38 = v3;
                                            v39 = v2;
                                            v37 = v3;
                                        }
                                    }
                                    if (v2 <= 1 || v36 == 0 && v2 > 25030008)
                                    {
                                        v3 = v35;
                                        v2 = v32;
                                        v40 = sub_4027d0();
                                        v38 = v3;
                                        v39 = v2;
                                        v37 = v3;
                                    }
                                    if (v3 > 1)
                                    {
                                        if (v38 > 25030008)
                                        {
                                            v3 = v39;
                                            v2 = v38;
                                            v43 = sub_403840();
                                            v38 = v2;
                                            v39 = v3;
                                            if (v43 == 0)
                                            {
                                                v44 = (0 | v20) % v38 >> 64;
                                                v45 = (0 | v22) % v38 >> 64;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        if (v37 != 1)
                                        {
                                            v41 = 0;
                                            v42 = 0;
                                        }
                                        else
                                        {
                                            return v40;
                                        }
                                    }
                                    if ((v3 <= 1 || v43 == 0) && (v3 <= 1 || v38 > 25030008) && (v37 != 1 || v3 > 1))
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    v0 += 1;
                                    v5 += 1;
                                    break;
                                }
                            }
                        }
                        if (v28 == 1 || ((char)v23 & 31) != 1)
                        {
                            v23 -= 1;
                            v29 = v24 * 2;
                            if (v24 != 0)
                            {
                                v30 = v20;
                                do
                                {
                                    v23 += 1;
                                    v30 = (0 - (unsigned long long)(char)((v30 * v30 >> 64 < (v25 * v30 * v30) * v46 >> 64? (v30 * v30 >> 64) - ((v25 * v30 * v30) * v46 >> 64) + v46 : (unsigned long long)((v30 * v30 >> 64) - ((v25 * v30 * v30) * v46 >> 64))) < v26) & v46) + (v30 * v30 >> 64 < (v25 * v30 * v30) * v46 >> 64? (v30 * v30 >> 64) - ((v25 * v30 * v30) * v46 >> 64) + v46 : (unsigned long long)((v30 * v30 >> 64) - ((v25 * v30 * v30) * v46 >> 64))) + v27;
                                }
                                while (v23 != 1);
                                v22 = v20;
                                v21 = v30;
                                v24 = 1 * 2;
                                v20 = v30;
                            }
                            else
                            {
                                v23 = v24;
                                v21 = v20;
                                v24 = v29;
                                v22 = v20;
                            }
                        }
                    }
                    if (v46 == v2)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (v46 != v2 && (v3 <= 1 || v43 == 0) && (v3 <= 1 || v38 > 25030008) && (v37 != 1 || v3 > 1))
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (v46 == v2)
                    {
                        v11 = v46;
                        v16 = 64;
                        v14 = 1;
                        v12 = 0;
                        v13 = 0;
                    }
                    else if (v46 != v2 && (v3 <= 1 || v43 == 0) && (v3 <= 1 || v38 > 25030008) && (v37 != 1 || v3 > 1))
                    {
                        v24 = v39;
                        v25 = (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * 2 - v46 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]))) * 2 - v46 * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * 2 - v46 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]))) * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * 2 - v46 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * 2 - v46 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v46 % 2 & 127)])));
                        v26 = v46 - v0;
                        v27 = v0 - v46;
                    }
                }
                if (true)
                {
                    __assert_fail(); /* do not return */
                }
                else if (true)
                {
                    v11 = v46;
                    v16 = 64;
                    v14 = 1;
                    v12 = 0;
                    v13 = 0;
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            __assert_fail(); /* do not return */
        }
    }
    __assert_fail(); /* do not return */
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_0;

int sub_409810()
{
    struct v1;  // rdi
    struct v2;  // rbp
    struct v3;  // rsi
    struct v4;  // rbx
    void *v6;  // rsi
    unsigned long long v8;  // rax

    v2 = v1;
    v4 = v3;
    v6 = v3->field_0;
    if (v6 != &v3[1])
    {
        v1->field_0 = v6;
    }
    else
    {
        v2->field_0 = memcpy(&v1[1], v6, v4->field_8);
    }
    v8 = v4->field_10;
    v2->field_8 = v4->field_8;
    *((unsigned long long *)&v2->field_10) = v8;
    if (v8 != 0)
    {
        v8 = v4->field_14;
        v2->field_14 = v4->field_14;
    }
    return v8;
}

int sub_404800()
{
    __assert_fail(); /* do not return */
}

extern unsigned int g_410680[4];

int sub_40ba20()
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x54]
    char v2;  // [bp-0x4c]
    char *v3;  // [bp-0x48]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    unsigned int v6;  // [bp-0x34]
    char *v9;  // rdi
    char *v10;  // rdx
    unsigned int v11;  // eax
    char v12;  // al
    unsigned long long v13;  // rax
    unsigned long long v16;  // rbx
    char *v17;  // rdi
    unsigned long long v18;  // rax

    if ((unsigned long long)__ctype_get_mb_cur_max() <= 1)
    {
        v16 = strlen(v17);
    }
    else
    {
        v3 = v9;
        v16 = 0;
        v0 = 0;
        v1 = 0;
        v2 = 0;
        while (true)
        {
            if (v0 == 0)
            {
                v10 = v3;
                v11 = *(v3);
                v12 = (unsigned long long)*(v3) >> 5;
                if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) != 0)
                {
                    v4 = 1;
                    v5 = 1;
                    v6 = *(v10);
                }
                else
                {
                    v13 = mbsinit((unsigned int)&v1);
                    if (v13 != 0)
                    {
                        v0 = 1;
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            if (v0 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) == 0 && v13 != 0)
            {
                __ctype_get_mb_cur_max();
                sub_407340();
                v4 = (unsigned int)sub_408fc0();
            }
            if (v4 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) == 0 || v0 != 0) && (v0 != 0 || v13 != 0))
            {
                if (v4 != -2)
                {
                    if (v4 == 0)
                    {
                        if (*(v3) != 0)
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (v6 != 0)
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if ((*(v3) == 0 || v4 != 0) && (v6 == 0 || v4 != 0))
                    {
                        v5 = 1;
                        if (mbsinit((unsigned int)&v1) != 0)
                        {
                            v0 = 0;
                        }
                    }
                }
                else
                {
                    v5 = 0;
                    v4 = strlen(v3);
                }
                if (v4 == 0)
                {
                    v4 = 1;
                }
            }
            if (v4 == -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) == 0 || v0 != 0) && (v0 != 0 || v13 != 0))
            {
                v4 = 1;
                v5 = 0;
            }
            if (v6 == 0 && (v0 == 0 || v4 != -1) && (v0 == 0 || v4 != -2) && (v4 != -1 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) != 0 || v4 != -2) && (*(v3) == 0 || v0 == 0 || v4 != 0) && (*(v3) == 0 || v4 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) != 0) && (v0 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v3) & 31)) & 1) != 0 || v13 != 0))
            {
                break;
            }
            if (unknown)
            {
                v3 = &v3[v4];
                v16 = 1;
                v2 = 0;
            }
        }
    }
    v18 = v16;
    return v18;
}

extern unsigned long long g_4105e7;

int sub_408fc0()
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
        v5 = &g_4105e7;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_409210() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
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

    v10 = sub_401610();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6368816 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_40b710()
{
    char *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned int v3;  // r12d
    unsigned long long v4;  // rax
    unsigned int v5;  // edx
    unsigned long long v6;  // rax
    unsigned int *v7;  // ebp
    unsigned long long v8;  // rax
    unsigned int *v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax

    if (*(v1) != 0)
    {
        v3 = v2;
        v4 = sub_409150();
        if (v4 != 0)
        {
            v6 = iconv_open(v5, v2);
            v7 = (unsigned int)v6;
            if (v6 != -1)
            {
                v11 = (unsigned int)sub_40b540();
                if (!(v11 != 0))
                {
                    iconv_close(v7);
                    *(__errno_location()) = *(v10);
                }
                else if (iconv_close(v7) < 0)
                {
                    v11 = 0;
                    free(v1);
                    *(__errno_location()) = *(v7);
                }
            }
            else
            {
                v11 = 0;
            }
        }
    }
    if (v4 == 0 || *(v1) == 0)
    {
        v11 = strdup(v1);
        if (v11 == 0)
        {
            *(__errno_location()) = 12;
            v8 = v11;
            return v8;
        }
    }
    if (v11 != 0 || v4 != 0 && *(v1) != 0)
    {
        v12 = v11;
        return v12;
    }
}

extern struct g_613298;
extern unsigned long long g_6132a0;
extern unsigned long long g_6132a8;
extern unsigned int g_6132b0;
extern unsigned long long g_613340;

int sub_406b10()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_6132b0;
    if (g_6132b0 > 1)
    {
        v2 = &g_613298[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_613298[(unsigned long long)(g_6132b0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_613298->field_8 != 6370112)
    {
        v1 = free(g_613298->field_8);
        g_6132a0 = 0x100;
        g_6132a8 = &g_613340;
    }
    if (g_613298 != 6369952)
    {
        v1 = free(g_613298);
        g_613298 = &g_6132a0;
    }
    g_6132b0 = 1;
    return v1;
}

int sub_408f40()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408ec0();
}

// int sub_407f30()

int sub_4040a0()
{
    char v0;  // [bp-0x128]
    char v1;  // [bp-0x127]
    unsigned long v2;  // [bp-0x120]
    char v3;  // [bp-0x118]
    char v4;  // [bp-0x110]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x2e]
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbp

    sub_402640();
    sub_4026f0();
    sub_403210();
    if (v6 != 0)
    {
        v13 = &v3;
        v14 = &v0;
        do
        {
            if (v5 != 0)
            {
                while (true)
                {
                    sub_4026f0();
                    sub_402340();
                    if (v5 <= 1)
                    {
                        break;
                    }
                }
            }
            v14 = &v1;
            v13 = &v4;
        }
        while (v6 > (unsigned int)(char *)(v14 + -0x1 * &v0));
    }
    if (v2 != 0)
    {
        sub_4026f0();
        sub_402640();
    }
    return sub_4026f0();
}

int sub_402240()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    char v3;  // [bp-0x49]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v6;  // rdi
    unsigned long long v7[2];  // r14
    unsigned long long v8;  // rsi
    unsigned long long v10[2];  // r9
    unsigned long long v11[2];  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rbp
    char v18;  // cl
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // r15d
    unsigned long v20;  // r8
    unsigned long long v21;  // rax

    v7 = v6;
    v11 = v10;
    v12 = sub_4020d0();
    v13 = *(v11);
    v14 = v4;
    v15 = v11[1];
    if (*(v11) != v12 || v10[1] != v4)
    {
        v16 = *(v7);
        v17 = *(v7) - v13;
        *((unsigned long long [2])&v2) = v7[1] - v15 - (unsigned long long)(char)(*(v7) < v13);
        v18 = v14 == v7[1] - v15 - (unsigned long long)(char)(*(v7) < v13);
        v3 = v12 == *(v7) - v13 & v14 == v7[1] - v15 - (unsigned long long)(char)(*(v7) < v13);
        if ((v12 == *(v7) - v13 & v14 == v7[1] - v15 - (unsigned long long)(char)(*(v7) < v13)) == 0)
        {
            v19 = 1;
            if ((unsigned int)v20 > 1)
            {
                while (true)
                {
                    v1 = v8;
                    v0 = v16;
                    v21 = sub_401f60();
                    if ((v11[1] == v4 || v2 == v4) && (v11[1] == v4 || v17 == v21) && (v2 == v4 || *(v11) == v21) && (*(v11) == v21 || v17 == v21))
                    {
                        break;
                    }
                    v19 = (unsigned long long)v19 + 1;
                    if ((unsigned int)v20 == (unsigned int)v19)
                    {
                        break;
                    }
                    v16 = *(v7);
                }
                if (v17 == v21)
                {
                    v3 = 1;
                }
                else if (v11[1] != v4 || v2 != v4 || *(v11) != v21 || v17 != v21)
                {
                    return (unsigned long long)v3;
                }
            }
        }
    }
    if ((v12 == *(v7) - v13 & v14 == v7[1] - v15 - (unsigned long long)(char)(*(v7) < v13)) != 0 || (unsigned int)v20 > 1 || *(v11) == v12 && v10[1] == v4)
    {
        v3 = 1;
    }
    return (unsigned long long)v3;
}

int sub_407f00()
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
        sub_408130(); /* do not return */
    }
}

int sub_4020d0()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50]
    unsigned long v5;  // [bp-0x48]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // ebp
    unsigned long long v8[2];  // rsi
    unsigned long long v9[2];  // rdx
    unsigned long long v10[2];  // r9
    unsigned long v11;  // r8
    unsigned long long *v12;  // rcx
    unsigned long long *v13;  // rdi
    unsigned long long v14;  // r10
    unsigned int v15;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // rbp

    v7 = 64;
    v14 = *(v8);
    v16 = *(v9);
    *((unsigned long long [2])&v3) = *(v10);
    *((unsigned long long [2])&v2) = v10[1];
    while (true)
    {
        if ((v16 & 1) != 0)
        {
            v1 = v11;
            v0 = *(v12);
            *((unsigned long long [2])&v4) = v8[1];
            v5 = v14;
            v3 = (unsigned int)sub_401f60();
            v2 = *(v13);
        }
        v1 = v11;
        v0 = *(v12);
        v16 = v16 % 2;
        v14 = (unsigned int)sub_401f60();
        v15 = v7;
        v7 = (unsigned long long)v7 - 1;
        if (v15 == 1)
        {
            break;
        }
    }
    v17 = v9[1];
    if (v9[1] != 0)
    {
        while (true)
        {
            if ((v17 & 1) != 0)
            {
                v1 = v1;
                v0 = v0;
                v5 = v14;
                *((unsigned long long [2])&v4) = v8[1];
                v3 = (unsigned int)sub_401f60();
                v2 = *(v13);
            }
            v1 = v11;
            v0 = *(v12);
            v17 = v17 % 2;
            v14 = (unsigned int)sub_401f60();
            if (INVALID_IR)
            {
                break;
            }
        }
    }
    *(v13) = v2;
    return v3;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_407d40()
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
    return sub_407940();
}

int sub_408090()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_407ee0();
}

extern uint128_t g_613440;
extern uint128_t g_613450;
extern uint128_t g_613460;
extern unsigned long long g_613470;

int sub_406e40()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_613440;
    *((uint128_t *)&v1) = g_613450;
    *((uint128_t *)&v2) = g_613460;
    v4 = g_613470;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_406700();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern char g_6132e8;
extern unsigned long long g_6132f0;

int sub_401cc1()
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

    if (g_6132e8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_6132f0 >= 0)
            {
                break;
            }
            g_6132f0 = g_6132f0 + 1;
            *((long long *)(6368832 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_6132e8 = 1;
        return sub_401c6b();
    }
    return v4;
}

extern unsigned int g_40be88;
extern int512_t g_40c220;
extern unsigned long long g_40efa0;
extern unsigned long long g_40efa1;
extern int512_t g_40f23c;

int sub_403ade()
{
    void tmp_4;  // tmp #4
    void tmp_0;  // tmp #0
    void tmp_19;  // tmp #19
    void tmp_6;  // tmp #6
    void tmp_43;  // tmp #43
    void tmp_47;  // tmp #47
    void tmp_2;  // tmp #2
    unsigned long long v0;  // [bp-0x1e0]
    unsigned long v1;  // [bp-0x1d8]
    unsigned long v2;  // [bp-0x1d0]
    unsigned long long v3;  // [bp-0x1c8]
    unsigned long long v4;  // [bp-0x1c0]
    unsigned long long v5;  // [bp-0x1b8]
    unsigned long long v6;  // [bp-0x1b0]
    unsigned int v7;  // [bp-0x1a8]
    char v8;  // [bp-0x1a1]
    unsigned long v9;  // [bp-0x1a0]
    unsigned long v10;  // [bp-0x198]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x190]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x188]
    unsigned long v13;  // [bp-0x180]
    unsigned long long v14;  // [bp-0x178]
    unsigned long v15;  // [bp-0x170]
    unsigned long v16;  // [bp-0x168]
    unsigned long v17;  // [bp-0x160]
    unsigned long v18;  // [bp-0x158]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // [bp-0x150]
    unsigned long v20;  // [bp-0x148]
    unsigned long v21;  // [bp-0x140]
    unsigned long v22;  // [bp-0x138]
    unsigned long v23;  // [bp-0x130]
    unsigned long long v24;  // [bp-0x128]
    char v25;  // [bp-0x3e]
    unsigned long long v26;  // [bp-0x30]
    unsigned long v27;  // [bp-0x28]
    unsigned long long v28;  // [bp-0x20]
    unsigned long long v29;  // [bp-0x18]
    unsigned long long v30;  // [bp-0x10]
    unsigned long long v31;  // [bp-0x8]
    unsigned long long v33;  // r15
    unsigned long long v34;  // rax
    unsigned long long v35;  // r14
    unsigned long long v36;  // r13
    unsigned long long v37;  // r12
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rdi
    unsigned long v40;  // rsi
    char v41;  // al
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdi
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // cc_dep2
    unsigned long long v51;  // rax
    unsigned long long v52;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v53;  // r12
    unsigned long long v55;  // rbp
    char v56;  // al
    unsigned long long v57;  // r12
    unsigned long long v58;  // rdx
    unsigned long long v59;  // rcx
    unsigned long long v62;  // rbp
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rcx
    unsigned long long v65;  // rax
    unsigned long long v67;  // r12
    unsigned long long v68;  // rbx
    unsigned long long v69;  // rbx
    unsigned long long v70;  // r12
    unsigned long long v71;  // r13
    unsigned long long v72;  // r14
    unsigned long long v73;  // r15

    v31 = v33;
    v34 = 0;
    v30 = v35;
    v29 = v36;
    v28 = v37;
    v27 = stack_base + 0;
    v26 = v38;
    v68 = v39;
    v41 = v40 == 0;
    v3 = v39 - rax;
    v2 = v40 - 1;
    if (v40 == 1)
    {
        tmp_4 = /*INVALID_IR*/ ExpCmpNE;
        tmp_19 = INVALID_IR;;
        v11 = 0;
        v10 = v3 >> ((char)(tmp_4? tmp_19 : rcx) & 63);
        v7 = (tmp_4? tmp_19 : rcx) + 64;
    }
    else
    {
        tmp_6 = /*INVALID_IR*/ ExpCmpNE;
        tmp_47 = INVALID_IR;;
        v7 = (tmp_6? tmp_47 : v3);
        v10 = v3 << ((char)(64 - (unsigned int)(tmp_6? tmp_47 : v3)) & 63) | v2 >> ((char)(tmp_6? tmp_47 : v3) & 63);
        v11 = v3 >> ((char)(tmp_6? tmp_47 : v3) & 63);
    }
    v44 = 0;
    v45 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(v68 < 2)) & 64) + 63;
    v44 = (char)(v68 < 2);
    v46 = 0 - (unsigned long long)(char)(v68 < 2) + 1;
    do
    {
        tmp_19 = v44;
        v44 *= 2;
        v46 = v46 * 2 | tmp_19 >> 63;
        if (v68 < v46 || v39 == v46 && v16 <= v44)
        {
            tmp_2 = v44;
            v44 -= v16;
            v46 = v46 - v68 - (char)(tmp_2 < v16);
        }
        v45 -= 1;
    }
    while (v45 != -1);
    v15 = v46;
    v47 = v44;
    v14 = v44;
    v48 = v44 * 2;
    v49 = v46 * 2 + ((v47 + v47 <= v47? 1 : 0) & 1);
    v13 = v49;
    v12 = v48;
    v50 = v49;
    if (v68 < v49 || v68 == v50 && v16 <= v12)
    {
        v51 = v49 - v68 - (char)(v12 < v16);
        v13 = v51;
        v12 -= v16;
    }
    v16 = v40;
    v17 = v68;
    v8 = sub_402240();
    if (v8 != 0)
    {
        v52 = v3;
        v53 = &g_40efa0;
        sub_403210();
        v55 = 2;
        v0 = v52 * 0x8000000000000000 | v2 >> 1;
        *((unsigned long long *)&(stack_base)[-472]) = v52 % 2;
        v9 = stack_base + -320;
        while (true)
        {
            if (v23 != 0)
            {
                v19 = 0;
                v18 = unknown;
                v20 = (unsigned int)sub_4020d0();
                if (v20 == v14)
                {
                    v56 = v21 != v15;
                }
            }
            if (v25 == 0 && (v23 == 0 || v20 != v14))
            {
                break;
            }
            if (v25 != 0 && (v23 == 0 || v20 != v14 || v21 != v15))
            {
                v4 = 2;
                v5 = &g_40efa0;
                v57 = 1;
                v6 = v68;
                while (true)
                {
                    v58 = v24;
                    if (v24 != 2)
                    {
                        v59 = (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])) * 2 - v58 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]))) * 2 - v58 * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])) * 2 - v58 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]))) * (((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])) * 2 - v58 * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])) * ((unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * 2 - v58 * (char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)]) * (unsigned long long)(char)*(&((char *)&g_40c220)[(unsigned long long)((unsigned int)v58 % 2 & 127)])));
                        if (v3 >= v58)
                        {
                            v18 = unknown;
                            v19 = (v3 - (v18 * v58 >> 64)) * v59;
                        }
                        else
                        {
                            v18 = v18;
                            v19 = 0;
                        }
                    }
                    else
                    {
                        v18 = v0;
                        v19 = v1;
                    }
                    v20 = (unsigned int)sub_4020d0();
                    if (v20 != v14)
                    {
                        if (v25 <= (unsigned int)v57)
                        {
                            break;
                        }
                    }
                    else if (v25 <= (unsigned int)v57)
                    {
                        v55 = v4;
                        v53 = v5;
                        v68 = v6;
                        v56 = v21 != v15;
                    }
                    else if (v21 == v15)
                    {
                        v55 = v4;
                        v53 = v5;
                        v68 = v6;
                    }
                    if (v25 > (unsigned int)v57 && (v20 != v14 || v21 != v15))
                    {
                        v57 = 2;
                    }
                }
                if (v20 == v14 && v21 == v15 && v25 > (unsigned int)v57)
                {
                    v62 = v55 + *(v53);
                    v63 = (v68 <= v62? v62 : 0);
                    v64 = (0 - (unsigned long long)(char)(v62 < v68) & -64) + 127;
                    v65 = (!(v68 <= v62)? v62 : 0);
                }
                else if (v20 != v14)
                {
                    v69 = v26;
                    v70 = v28;
                    v71 = v29;
                    v72 = v30;
                    v73 = v31;
                    return (unsigned long long)v8;
                }
            }
            if ((v56 == 0 || v20 == v14) && (v56 == 0 || v21 == v15) && (v56 == 0 || v25 != 0) && (v56 == 0 || v23 != 0) && (v20 == v14 || v25 != 0) && (v25 != 0 || v23 != 0))
            {
                v62 = v55 + *(v53);
                v63 = (v68 <= v62? v62 : 0);
                v64 = (0 - (unsigned long long)(char)(v62 < v68) & -64) + 127;
                v65 = (!(v68 <= v62)? v62 : 0);
                do
                {
                    tmp_19 = v63;
                    v63 *= 2;
                    v65 = v65 * 2 | tmp_19 >> 63;
                    if (v68 < v65 || v68 == v65 && v16 <= v63)
                    {
                        tmp_2 = v63;
                        v63 -= v16;
                        v65 = v65 - v68 - (char)(tmp_2 < v16);
                    }
                    v64 -= 1;
                }
                while (v64 != -1);
                v12 = v63;
                v13 = v65;
                if (sub_402240() != 0)
                {
                    v67 = &g_40efa1;
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40be88, 0x5));
                    abort(); /* do not return */
                }
                v8 = 0;
            }
        }
    }
    v69 = v26;
    v70 = v28;
    v71 = v29;
    v72 = v30;
    v73 = v31;
    return (unsigned long long)v8;
}

int sub_40815c()
{
    abort(); /* do not return */
}

// int sub_406d10()

int sub_407340()
{
    unsigned long v1;  // rdi

    return (sub_409040() != 0? (unsigned int)sub_409040() - v1 + 1 : rsi);
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

int sub_40b8c0()
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

int sub_404050()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    if (v1 == 0)
    {
        if (!(v2 > 1))
        {
            return 0;
        }
        else if (v2 <= 25030008)
        {
            return 1;
        }
    }
}

extern unsigned long long g_6134c0[4];

int sub_40b990()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long *v4;  // rcx

    if (v1 != 0 && *((int *)(v1 - 4)) == 336984906)
    {
        v2 = v1 - ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) * 257;
        v3 = g_6134c0[v1 + -257 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)];
        if (g_6134c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] != 0)
        {
            if (g_6134c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] != v1)
            {
                while (true)
                {
                    v2 = *((long long *)(v3 - 16));
                    if (*((long long *)(v3 - 16)) != 0)
                    {
                        if (v1 != v2)
                        {
                            v3 = v2;
                        }
                        else
                        {
                            v4 = v3 - 16;
                        }
                    }
                }
                if (v1 == v2 && *((long long *)(v3 - 16)) != 0)
                {
                    *(v4) = *((long long *)(v1 - 16));
                }
                else if (*((long long *)(v3 - 16)) == 0)
                {
                    return v2;
                }
            }
            else
            {
                v4 = &g_6134c0[v1 + -257 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)];
            }
            *(v4) = *((long long *)(v1 - 16));
        }
    }
    if (g_6134c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] == 0 || v1 == 0 || *((int *)(v1 - 4)) != 336984906 || g_6134c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] != v1)
    {
        return v2;
    }
}

int sub_409a20()
{
    __assert_fail(); /* do not return */
}

int sub_401ed0()
{
    void tmp_15;  // tmp #15
    void tmp_33;  // tmp #33
    void tmp_38;  // tmp #38
    unsigned long long v1;  // r9
    unsigned long long v2;  // r12
    unsigned int v3;  // rbx
    unsigned long v4;  // r11
    unsigned int v5;  // rsi
    unsigned long long v6;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // r8

    v2 = v1;
    v3 = v5;
    v6 = sub_401e60();
    v7 = v2 == v6 | v6 == v4 - v2;
    if (v6 != v4 - v2 && v2 != v6 && v7 > 1)
    {
        v5 = 1;
        while (true)
        {
            tmp_15 = (v6 * v6 >> 64) - ((v3 * v6 * v6) * v4 >> 64);
            tmp_33 = (v6 * v6 >> 64) - ((v3 * v6 * v6) * v4 >> 64) + v4;
            tmp_38 = v6 * v6 >> 64 < (unsigned long long)((v3 * v6 * v6) * v4 >> 64);
            v6 = (v6 * v6 >> 64 < (unsigned long long)((v3 * v6 * v6) * v4 >> 64)? (v6 * v6 >> 64) - ((v3 * v6 * v6) * v4 >> 64) + v4 : (unsigned long long)((v6 * v6 >> 64) - ((v3 * v6 * v6) * v4 >> 64)));
            if (v4 - v1 != (tmp_38? tmp_33 : tmp_15))
            {
                if (v2 == v6)
                {
                    break;
                }
                v5 = (unsigned long long)v5 + 1;
                if (v7 == v5)
                {
                    break;
                }
            }
            else
            {
                v7 = 1;
            }
        }
    }
    return v7;
}

extern unsigned int g_6132b4;
extern unsigned int g_6132b8;
extern unsigned int g_6132bc;
extern unsigned int g_613480;
extern unsigned int g_613484;
extern unsigned int g_613488;
extern unsigned long long g_613490;
extern unsigned long long g_613cc8;

int sub_408ec0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_613480 = g_6132bc;
    g_613484 = g_6132b8;
    v1 = (unsigned int)v2;
    v0 = &g_613480;
    g_6132bc = g_613480;
    g_613cc8 = g_613490;
    g_6132b4 = g_613488;
    return sub_4088f0();
}

// int sub_406b00()

// int sub_406bd0()

extern int512_t g_613440;

int sub_406990()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_613440 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4054d0();
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4];
    unsigned int field_c;
} struct_1;

extern int512_t g_6134c0;

int sub_40b920()
{
    unsigned long v1;  // rdi
    struct v3;  // rsi
    unsigned long long v5;  // rax

    if (!(INVALID_IR))
    {
        v3 = malloc(v1 + 16);
        if (v3 != 0)
        {
            v3->field_c = 336984906;
            v5 = *((long long *)&((char *)(0x8 * v3 + -2056 * ((unsigned long long)(&v3[1] * -71777214294589695 >> 64) >> 8) + (char *)&g_6134c0))[128]);
            *((struct_1 **)&((char *)(0x8 * v3 + -2056 * ((unsigned long long)(&v3[1] * -71777214294589695 >> 64) >> 8) + (char *)&g_6134c0))[128]) = &v3[1];
            v3->field_0 = v5;
        }
        return &v3[1];
    }
    return 0;
}

// int sub_406ee0()

// int sub_406da0()

int sub_4081f0()
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

extern int512_t g_613440;

int sub_4068f0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_613440 : v1)) = v2;
    return &g_613440;
}

// int sub_406dc0()

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_4105e7;
extern char g_6134b8[2];

int sub_409270()
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
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_6134b8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_4105e7 : (unsigned long long)nl_langinfo(0xe));
    if (g_6134b8 == 0)
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
        if (*(v15) == 0 || v15 == 0)
        {
            v13 = 115;
            v14 = 101;
            v16 = 100;
            v15 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (*(v15) == 0 || v15 == 0 || v11 != 0 && v15[v11 + -1] != 47)
        {
            v17 = malloc(v13);
        }
        if (v17 == 0 || v17 == 0)
        {
            v9 = &g_4105e7;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v11 != 0) && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v11 != 0 && v15[v11 + -1] != 47 && v17 != 0 || v11 == 0 && *(v15) != 0 && v17 != 0 && v15 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v17 != 0 && v15 != 0)
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
                            if ((unsigned int)v59 != 35 && (unsigned int)v59 != 32)
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
                                        v62 = v39 + 1;
                                        v48 = v36 + v41 - 1;
                                        if ((unsigned int)v42 >= 8)
                                        {
                                            *((long long *)v48) = *((long long *)&v5);
                                            v42 = v62;
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
                                        v9 = &g_4105e7;
                                        v10 = (tmp_10 == 0? &g_4105e7 : tmp_10);
                                        free(NULL);
                                        sub_40b800();
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
                                        v61 = *(v60);
                                        v62 = 1;
                                    }
                                    else
                                    {
                                        v61 = __uflow(v10);
                                        v62 = (char)(v61 != -1);
                                    }
                                }
                                while (v62 != 0 && v61 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v36 != 0 && v27 > 1 && (unsigned int)v59 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v59 != 32)
                        {
                            v59 = __uflow(v10);
                        }
                        if ((unsigned int)v59 == 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v61 == -1 || (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v36 != 0 && v27 > 1 && (unsigned int)v59 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v59 != 32) && (unsigned int)v59 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_4105e7 : tmp_10);
                            sub_40b800();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1)
                    {
                        v9 = &g_4105e7;
                    }
                    else if ((v27 > 1 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v0 != 0 || v27 > 1 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v0 == 0) && v36 == 0 || ((unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_4105e7;
            free(v17);
        }
        *((char *[2])&g_6134b8[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_4105e7 : tmp_10), v9);
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

// int sub_406eb0()

extern unsigned long long g_612e30;

int sub_40bc78()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_612e30;
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

extern unsigned int g_4104af;
extern unsigned int g_613240;

int sub_408130()
{
    dcgettext(0x0, 0x4104af, 0x5);
    error(g_613240, 0x0, "%s");
}

extern int512_t g_40f3a5;
extern int512_t g_40f3a9;

int sub_4053d0()
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
        v3 = sub_409270();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40f3a5 : 4256688);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40f3a9 : 4256684);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[4] == 56 && (v3[2] & 223) == 70 && (v3[1] & 223) == 84 && v1 == v2 && v3[5] == 0 && (v3[0] & 223) == 85 || (v3[1] & 223) == 66 && v4 == 71 && v1 == v2 && v3[3] == 56 && v3[2] == 49 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

int sub_408110()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern char g_613440;

int sub_406960()
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
    v3 = (v2 == 0? &g_613440 : v2);
    *((int *)(tmp_11? &g_613440 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_613440;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_613440;
        abort(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned short field_8;
    char field_a;
} struct_0;

extern unsigned int g_40f382;

int sub_405150()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x40]
    void *v2;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // rbx
    void *v4;  // rdi
    void *v6;  // r14
    unsigned long long v7;  // rax
    void *v8;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // r14
    struct v10;  // r15
    unsigned long long v11;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // r15
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbx
    unsigned long long v24;  // rax

    v3 = v2;
    v6 = (unsigned long long)(unsigned int)sub_409270();
    v7 = sub_409150();
    if (!(v7 == 0))
    {
        v8 = (unsigned long long)(unsigned int)sub_4081c0();
        v10 = strlen(v6) + v0;
        v10->field_0 = 5499825612410597167;
        v10->field_8 = 21577;
        v10->field_a = 0;
        v0 = memcpy((unsigned long long)(unsigned int)sub_407ee0(), v6, v10);
        v9 = (unsigned long long)(unsigned int)sub_4081c0();
        free(v0);
        if (v9 != 0)
        {
            v11 = strchr(v9, 0x3f);
            if (v11 != 0)
            {
                free(v9);
            }
            else
            {
                if (v8 != 0)
                {
                    v12 = v9;
                    v13 = strcmp(v8, v4);
                    if (v13 == 0 && v8 != v9)
                    {
                        free(v9);
                    }
                }
                else
                {
                    v12 = v9;
                    v3 = 0;
                    v8 = v9;
                }
            }
        }
        if (v9 == 0 || v11 != 0)
        {
            if (v8 != 0)
            {
                v14 = strcmp(v8, v4);
                if (v14 != 0)
                {
                    v12 = 0;
                    v9 = 0;
                }
            }
            else
            {
                v8 = v4;
                v12 = 0;
                v3 = 0;
                v9 = 0;
            }
        }
        if (v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0))
        {
            v18 = sub_404820();
            if (v18 == 0)
            {
                v3 = v8;
                v16 = v8;
            }
            else
            {
                v16 = v8;
            }
        }
    }
    else if (v2 != 0)
    {
        v12 = v3;
        v8 = v3;
        v9 = 0;
    }
    else
    {
        v12 = 0;
        v8 = v4;
        v9 = 0;
    }
    if (v7 == 0 || v8 == 0)
    {
        v15 = strcmp(v8, v4);
        if (v15 != 0)
        {
            v16 = 0;
            v17 = sub_404820();
        }
    }
    if ((v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 != 0)
    {
        v19 = sub_404820();
    }
    if (((v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 != 0 && v19 == 0 || (v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 == 0) && v12 != 0)
    {
        v20 = sub_404820();
    }
    if (((v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 != 0 && v19 == 0 || (v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 == 0) && v12 != 0 && v20 == 0 || ((v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 != 0 && v19 == 0 || (v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 == 0) && v12 == 0)
    {
        v21 = strlen(v8);
        strlen(v8);
        __sprintf_chk((unsigned int)v8, 0x1, 0xffffffff, 0x40f382, (unsigned int)v8, (unsigned int)v8);
        if (v16 != 0)
        {
            free(v16);
        }
        v8 = (unsigned long long)(unsigned int)sub_407ee0();
    }
    if (v7 != 0 && v8 != 0 && v18 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || (((v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 != 0 && v19 == 0 || (v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 == 0) && v12 != 0 && v20 != 0 || (v18 == 0 && v7 != 0 && v8 != 0 && (v11 == 0 || v14 != 0) && (v14 != 0 || v9 != 0) && (v9 == 0 || v11 != 0 || v13 != 0) || v15 != 0 && (v7 == 0 || v8 == 0) && v17 == 0) && v3 != 0 && v19 != 0) && v16 != 0)
    {
        free(v16);
    }
    if (unknown)
    {
        v8 = (unsigned long long)dcgettext(0x0, (unsigned int)v4, 0x5);
    }
    if (unknown)
    {
        free(v9);
    }
    v24 = v8;
    return v24;
}

int sub_409210()
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

int sub_4080e0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_407ee0();
}

extern unsigned int g_41017c;
extern unsigned int g_4101a7;
extern unsigned int g_4103d8;

int sub_407e60()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41017c, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4101a7, 0x5));
    dcgettext(0x0, 0x4103d8, 0x5);
}

extern unsigned int g_40bdb0;
extern unsigned int g_40c118;
extern unsigned int g_4105e7;
extern unsigned int g_6132bc;
extern unsigned long long g_613300;
extern unsigned long long g_613308;
extern char g_613310;

int main()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long long v8;  // rax
    unsigned int v9;  // edi
    unsigned int v11;  // r13d
    unsigned long long v15;  // r12
    unsigned long long v19;  // r13

    sub_404760();
    setlocale(0x6, 0x4105e7);
    bindtextdomain(0x40bdb0, 0x40c118);
    textdomain(0x40bdb0);
    if (g_613300 == 0)
    {
        v5 = sub_407ee0();
        g_613300 = v5;
        g_613308 = v5;
    }
    sub_40bc60();
    sub_40bc60();
    while (true)
    {
        v8 = sub_408f40();
        if (v8 == -1)
        {
            v15 = (int)g_6132bc;
            if (g_6132bc < v9)
            {
                v11 = 1;
                do
                {
                    v11 = ((char)sub_404170() == 0? 0 : (unsigned int)r13);
                    v15 += 1;
                }
                while (v9 > (unsigned int)v15);
            }
            else
            {
                v11 = 1;
                sub_406f70();
                while (true)
                {
                    if (sub_406f80() + 1 == 0)
                    {
                        break;
                    }
                    v11 &= sub_404170();
                }
                free(*((long long *)&v2));
            }
        }
        else if (v8 == -130)
        {
            sub_4042e0(); /* do not return */
        }
        else if (v8 == 128)
        {
            g_613310 = 1;
        }
        else if (v8 != -131)
        {
            sub_4042e0(); /* do not return */
        }
        else
        {
            sub_405150();
            v1 = 0;
            v0 = (unsigned int)sub_405150();
            sub_407da0();
            exit(0x0); /* do not return */
        }
    }
    v19 = v11 ^ 1;
    return v19;
}

extern uint128_t g_613440;
extern uint128_t g_613450;
extern uint128_t g_613460;
extern unsigned long long g_613470;

int sub_406d1f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_613470;
    *((uint128_t *)&v0) = g_613440;
    *((uint128_t *)&v1) = g_613450;
    *((uint128_t *)&v2) = g_613460;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_406700();
}

int sub_409150()
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
    char padding_0[20];
    char field_14;
} struct_0;

int sub_404710()
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

extern int512_t g_613440;

int sub_4068e0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_613440 : v1));
}

// int sub_406bb0()

int sub_401e60()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r9
    unsigned long v3;  // rcx
    unsigned long long v4;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // rsi
    unsigned long long v6;  // rdi

    v2 = v1;
    if ((v5 & 1) != 0)
    {
        v4 = v6;
    }
    while (true)
    {
        v6 = (v6 * v6 >> 64 < (v3 * v6 * v6) * v2 >> 64? (v6 * v6 >> 64) - ((v3 * v6 * v6) * v2 >> 64) + v2 : (unsigned long long)((v6 * v6 >> 64) - ((v3 * v6 * v6) * v2 >> 64)));
        v5 = v5 % 2;
        if ((v5 & 1) != 0)
        {
            v4 = (v4 * v6 >> 64 < (v3 * v4 * v6) * v2 >> 64? (v4 * v6 >> 64) - ((v3 * v4 * v6) * v2 >> 64) + v2 : (unsigned long long)((v4 * v6 >> 64) - ((v3 * v4 * v6) * v2 >> 64)));
        }
        else
        {
            if (v5 == 0)
            {
                break;
            }
        }
    }
    return v4;
}

// int sub_406f00()

int sub_407d20()
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

// int sub_406f10()

int sub_406a2b()
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
    v7 = (unsigned int)sub_4054d0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_407ee0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4054d0();
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

extern unsigned long long g_613308;

int sub_402340()
{
    char v0;  // [bp-0x14]
    void *v2;  // rax
    unsigned long long v3;  // r8
    unsigned long v4;  // rbx
    unsigned long v5;  // rsi
    unsigned long long v6;  // r8
    char *v7;  // rdx
    unsigned long long v8;  // rcx
    void *v9;  // r8
    unsigned long long v10;  // rax

    v2 = sub_404710();
    v3 = v2 - (stack_base + -56);
    v4 = 20 - (v2 - (stack_base + -56));
    if (20 - (v2 - (stack_base + -56)) < v5)
    {
        v6 = &v0;
        v7 = g_613308;
        v8 = v5 + g_613308 + v6;
        do
        {
            *(v7) = 48;
            v7 = &v7[1];
        }
        while (v7 != v8);
        v9 = v6 + v5 + g_613308;
    }
    else
    {
        v9 = g_613308;
    }
    v10 = memcpy(v9, v2, v4);
    g_613308 = v10 + v4;
    return v10;
}

int sub_40b2f0()
{
    unsigned int v0;  // [bp-0x1078]
    unsigned long v1;  // [bp-0x1060]
    unsigned long v2;  // [bp-0x1058]
    unsigned long v3;  // [bp-0x1050]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x1048]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x1040]
    unsigned long v6;  // [bp-0x1038]
    unsigned int v8;  // [bp+0x100008]
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r13
    unsigned int v11;  // edx
    unsigned int v12;  // ebx
    unsigned long v13;  // rdi
    unsigned long long v14;  // rax
    unsigned int v15;  // eax
    unsigned long long v16;  // r14
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbx
    unsigned long long *v20;  // rcx
    void *v21;  // r14
    unsigned long long *v22;  // r8
    unsigned long long v23;  // rax
    unsigned int *v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v10 = v9;
    v12 = v11;
    v1 = v13;
    iconv(v11, 0x0, 0x0, 0x0, 0x0);
    v2 = v13;
    v16 = 0;
    v3 = v10;
    if (v10 != 0)
    {
        while (true)
        {
            v4 = stack_base + -4152;
            v5 = 0x1000;
            v14 = iconv(v12, (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v4, (unsigned int)&v5);
            if (v14 == -1)
            {
                v15 = *(__errno_location());
                if (v15 != 7)
                {
                    break;
                }
            }
            if (v15 == 7 || v14 != -1)
            {
                v16 += v4 - (stack_base + -4152);
                if (v3 == 0)
                {
                    break;
                }
            }
        }
        if (true)
        {
            v4 = stack_base + -4152;
            v5 = 0x1000;
            v17 = iconv(v12, 0x0, 0x0, (unsigned int)&v4, (unsigned int)&v5);
        }
        else if (v14 == -1 && v15 != 7)
        {
            v18 = -18446744069414584321;
        }
    }
    if (v10 == 0 || v17 != -1)
    {
        v4 = stack_base + -4152;
        v5 = 0x1000;
        v17 = iconv(v12, 0x0, 0x0, (unsigned int)&v4, (unsigned int)&v5);
    }
    if (v17 != -1)
    {
        *((void **)&v0) = v4 - (stack_base + -4152) + v16;
        if (v4 - (stack_base + -4152) + v16 != 0)
        {
            v21 = *(v20);
            if (*(v22) < *((long long *)&v0) || *(v20) == 0)
            {
                v21 = malloc(*((long long *)&v0));
                if (v21 == 0)
                {
                    *(__errno_location()) = 12;
                }
            }
            if ((*(v22) >= *((long long *)&v0) || v21 != 0) && (*(v20) != 0 || v21 != 0))
            {
                iconv(v12, 0x0, 0x0, 0x0, 0x0);
                v4 = v10;
                v5 = v21;
                v3 = v1;
                v6 = *((long long *)&v0);
                while (true)
                {
                    if (v10 != 0)
                    {
                        v23 = iconv(v12, (unsigned int)&v3, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)(stack_base + -4152));
                        if (v23 != -1)
                        {
                            v10 = v4;
                        }
                        else
                        {
                            v24 = __errno_location();
                        }
                    }
                    if (v10 == 0 || *(v24) == 22 && v23 == -1)
                    {
                        v25 = iconv(v12, 0x0, 0x0, (unsigned int)&v5, (unsigned int)(stack_base + -4152));
                    }
                    if (v10 == 0 || v23 == -1)
                    {
                        if (v25 != -1 && (v10 == 0 || *(v24) == 22))
                        {
                            if (v6 != 0)
                            {
                                abort(); /* do not return */
                            }
                            v18 = 0;
                            *(v20) = v21;
                            *(v22) = *((long long *)&v0);
                        }
                        if ((v25 == -1 || v10 != 0) && (v25 == -1 || *(v24) != 22))
                        {
                            v18 = -18446744069414584321;
                            if (*(v20) == v21)
                            {
                                break;
                            }
                            free(v21);
                            *(__errno_location()) = v8;
                        }
                    }
                }
            }
        }
        else
        {
            v18 = 0;
            *(v22) = 0;
        }
    }
    if (v21 == 0 && v17 != -1 && v4 - (stack_base + -4152) + v16 != 0 && (*(v22) < *((long long *)&v0) || *(v20) == 0) || (v10 == 0 || v17 != -1) && v17 == -1 || v10 != 0 && v17 == -1)
    {
        v18 = -18446744069414584321;
    }
    v26 = v18;
    return v26;
}

int sub_407f40()
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
            sub_408130(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_407380()
{
    __assert_fail(); /* do not return */
}

int sub_406c20()
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
    return sub_406700();
}

int sub_406dd0()
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
    return sub_406700();
}

extern unsigned long long program_invocation_short_name;

int sub_401c6b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern unsigned long long g_613320;

int sub_4045d0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_613320 = v1;
    return v2;
}

// int sub_406f30()

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_613298;
extern uint128_t g_6132a0;
extern unsigned int g_6132b0;
extern int512_t g_613340;

int sub_406700()
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
    v17 = g_613298;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_6132b0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_613298 != 6369952)
            {
                v16 = sub_407f40();
                g_613298 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_407f40();
                v17 = v15;
                g_613298 = v15;
                *(v15) = g_6132a0;
            }
            memset(&v17[(long long)(int)g_6132b0], 0x0, (int)((unsigned int)v13 + 1 - g_6132b0) * 16);
            g_6132b0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_408130(); /* do not return */
        }
    }
    if (g_6132b0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4054d0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6370112)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_407ee0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4054d0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_409040()
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2))
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 == *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 || v3 == *((char *)v2) && v1 != 0 && (v2 & 7) != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v3 == *((char *)v2))
    {
        return v5;
    }
}

extern unsigned int g_40bd95;
extern unsigned int g_40bf10;
extern unsigned int g_40bf38;
extern unsigned int g_40bf60;
extern unsigned int g_40bfe8;
extern unsigned int g_40c018;
extern unsigned int g_40c078;
extern unsigned int g_40c0c0;
extern unsigned int g_40c0e0;
extern unsigned long long g_613328;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_4042e0()
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
    unsigned int v22;  // r8d
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
    if (v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40bf10, 0x5), g_613328, v22);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bf38, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40bf60, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40bfe8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c018, 0x5), stdout);
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
            v28 = "factor";
            v29 = 7;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bd95, 0x5));
            v37 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bd95, 0x5));
            v36 = setlocale(0x5, 0x0);
            if (v36 != 0)
            {
                v38 = strncmp(v36, "en_", 0x3);
            }
            if (v36 == 0 || v38 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c0c0, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v37, "en_", 0x3) != 0) && (v3 == 0 || v37 != 0) && (v3 != 0 || v36 != 0) && (v3 != 0 || v38 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c078, 0x5));
        }
        if (v3 != 0 || v36 != 0 && v38 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c0c0, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c0e0, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned int g_40f382;

int sub_4050c0()
{
    char *v1;  // rdi
    unsigned long v3;  // rax
    char *v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12
    unsigned long v8;  // r8

    if (v1 != v3)
    {
        v4 = sub_404820();
        if (v4 == 0)
        {
            v6 = strlen(v3);
            strlen(v1);
            v8 = (unsigned int)sub_407ee0();
            __sprintf_chk(v8, 0x1, 0xffffffff, 0x40f382, v8, (unsigned int)v1);
            return v8;
        }
    }
    if (v1 == v3 || v4 != 0)
    {
        v3 = dcgettext(0x0, (unsigned int)v1, 0x5);
        return v5;
    }
}

int sub_404690()
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
            v4 = sub_4072e0();
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

int sub_40b800()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40b880() != 0)
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

int sub_408f20()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_408ec0();
}

int sub_408f60()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4088f0();
}

extern unsigned int g_410680[4];

int sub_40a420()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x180]
    char v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x174]
    char v4;  // [bp-0x16c]
    char *v5;  // [bp-0x168]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x160]
    char v7;  // [bp-0x158]
    unsigned int v8;  // [bp-0x154]
    char v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x134]
    char v11;  // [bp-0x12c]
    char *v12;  // [bp-0x128]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // [bp-0x120]
    char v14;  // [bp-0x118]
    unsigned int v15;  // [bp-0x114]
    char v16;  // [bp-0xf8]
    unsigned long v17;  // [bp-0xf4]
    char v18;  // [bp-0xec]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // [bp-0xe8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // [bp-0xe0]
    char v21;  // [bp-0xd8]
    unsigned int v22;  // [bp-0xd4]
    void v23;  // [bp-0xc8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v24;  // [bp-0xb8]
    char v25;  // [bp-0xac]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // [bp-0xa8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // [bp-0xa0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // [bp-0x98]
    unsigned int v29;  // [bp-0x94]
    void v30;  // [bp-0x88]
    char v31;  // [bp-0x78]
    unsigned long long v32;  // [bp-0x74]
    char v33;  // [bp-0x6c]
    char *v34;  // [bp-0x68]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // [bp-0x60]
    char v36;  // [bp-0x58]
    unsigned int v37;  // [bp-0x54]
    void *v39;  // rdi
    char v40[2];  // rbp
    unsigned long long v41;  // rax
    char *v42;  // r9
    unsigned int v45;  // eax
    char v46;  // al
    unsigned long long v48;  // rax
    char *v49;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v50;  // r9
    unsigned long long v51;  // r12
    unsigned long long v52;  // rdx
    unsigned long long v53;  // r8
    unsigned long long v54;  // rax
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r14
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdi
    unsigned long long v60;  // rcx
    unsigned long long v61;  // rsi
    unsigned long long v62;  // rbp
    char v63[2];  // rax
    unsigned long long v65;  // rcx
    char v68[2];  // rdx
    unsigned int v69;  // eax
    char v70;  // al
    unsigned long long v71;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v73;  // rax
    unsigned long long v74;  // al
    /*INVALID_EQUAL_UNDEFINED*/
undefined v75;  // rbx
    unsigned long long v76;  // r14
    unsigned long long v77;  // rax
    char v78;  // al
    unsigned long long v79;  // rax
    unsigned long long v80;  // r14
    char *v81;  // rdx
    unsigned int v82;  // eax
    char v83;  // al
    unsigned long long v84;  // rax
    char *v87;  // rdx
    unsigned int v88;  // eax
    char v89;  // al
    unsigned long long v90;  // rax
    unsigned long long v93;  // rdx
    unsigned long v94;  // r15
    unsigned long long v95;  // rax
    unsigned int v96;  // eax
    char v97;  // al
    unsigned long long v98;  // rax
    unsigned long long v100;  // rax
    char *v101;  // rdx
    unsigned int v102;  // eax
    char v103;  // al
    char *v107;  // rdx
    unsigned int v108;  // eax
    char v109;  // al
    unsigned long long v110;  // rax
    unsigned int v111;  // rax
    char v114;  // al
    unsigned long long v115;  // rdx
    unsigned long long v116;  // r12
    unsigned long long v118;  // rax

    v40 = v39;
    v41 = __ctype_get_mb_cur_max();
    if (v41 <= 1)
    {
        v118 = v39;
        if (*(v42) != 0)
        {
            v65 = v40[0];
            if (v40[0] != 0)
            {
                v42 = v49;
                v51 = 0;
                v52 = 0;
                v53 = 0;
                v54 = 1;
                while (true)
                {
                    v51 += 1;
                    v55 = v52 + 1;
                    v56 = &v40[1];
                    if (*(v42) != v65)
                    {
                        if (v40[1] == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v57 = v42[1];
                        v58 = v40[0];
                        if (v42[1] == 0 || v40[0] == 0)
                        {
                            break;
                        }
                        v55 = v52 + 2;
                        if (v57 == v58)
                        {
                            v59 = &v42[-1 * v52];
                            v52 = &v40[-1 * v52];
                            while (true)
                            {
                                v60 = (char)*((char *)(v59 + v55));
                                if (*((char *)(v59 + v55)) != 0)
                                {
                                    v61 = (char)*((char *)(v52 + v55));
                                    v55 += 1;
                                    if (*((char *)(v52 + v55)) == 0 || v60 != v61)
                                    {
                                        break;
                                    }
                                }
                            }
                            if (*((char *)(v52 + v55)) != 0 && *((char *)(v59 + v55)) != 0)
                            {
                                v62 = v52;
                            }
                            else if (*((char *)(v59 + v55)) != 0)
                            {
                                v118 = 0;
                            }
                            else if (*((char *)(v59 + v55)) == 0)
                            {
                                v118 = v40;
                            }
                        }
                    }
                    v62 = v52;
                    if (((char)!(r12 <= 9) & v54) != 0)
                    {
                        if (v55 >= v51 + (v51 << 2))
                        {
                            if (v50 != 0)
                            {
                                *((char *[2])&v0[0]) = v50;
                                v63 = strnlen(v50, v55 - v53);
                                v53 = v55;
                                v50 = v0 + v63;
                            }
                            if (v50 == 0 || *((char *)(v0 + v63)) == 0)
                            {
                                v0 = v53;
                                strlen(v42);
                                v54 = sub_409890();
                                v53 = v0;
                                if (v54 != 0)
                                {
                                    break;
                                }
                                v50 = 0;
                            }
                        }
                        if (v55 < v51 + (v51 << 2) || v50 != 0 && *((char *)(v0 + v63)) != 0)
                        {
                            v54 = v62;
                        }
                    }
                    v65 = (char)*((char *)v54);
                    v40 = v56;
                    v52 = v55;
                }
                if (true)
                {
                    v118 = v40;
                }
                else if (v55 >= v51 + (v51 << 2) && ((char)!(r12 <= 9) & v54) != 0 && (v50 == 0 || *((char *)(v0 + v63)) == 0))
                {
                    v118 = *((long long *)&v31);
                }
                else
                {
                    v118 = 0;
                }
            }
        }
    }
    else
    {
        v5 = v42;
        v2 = 0;
        v45 = *(v42);
        v4 = 0;
        v3 = 0;
        v46 = (unsigned long long)*(v42) >> 5;
        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0)
        {
            v6 = 1;
            v8 = *(v49);
            v7 = 1;
            v4 = 1;
        }
        else
        {
            v48 = mbsinit((unsigned int)&v3);
            if (v48 != 0)
            {
                v2 = 1;
                __ctype_get_mb_cur_max();
                sub_407340();
                v6 = (unsigned int)sub_408fc0();
                if (v6 == -1)
                {
                    v6 = 1;
                    v7 = 0;
                    v4 = 1;
                }
                else if (v6 != -2)
                {
                    if ((*(v5) == 0 || v6 != 0) && (v8 == 0 || v6 != 0))
                    {
                        v7 = 1;
                        if (mbsinit((unsigned int)&v3) != 0)
                        {
                            v2 = 0;
                        }
                        v4 = 1;
                    }
                }
                if (v6 == -2)
                {
                    v7 = 0;
                    v6 = strlen(v5);
                    v4 = 1;
                }
                if (v6 == 0)
                {
                    v6 = 1;
                }
            }
        }
        if ((((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0 || v48 != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0))
        {
            if (v6 == -2 || v6 == -1 || v8 != 0)
            {
                if (v6 == -2 || v6 == -1 || v6 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0)
                {
                    v12 = v42;
                    v116 = 0;
                    v75 = 0;
                    v76 = 1;
                    v9 = 0;
                    v10 = 0;
                    v11 = 0;
                    *((void **)&v19[0]) = v39;
                    v16 = 0;
                    v17 = 0;
                    v18 = 0;
                    v1 = 0;
                    while (true)
                    {
                        if (v16 == 0)
                        {
                            v68 = v19;
                            v69 = v19[0];
                            v70 = (unsigned long long)v19[0] >> 5;
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) != 0)
                            {
                                v20 = 1;
                                v77 = v68[0];
                                v21 = 1;
                                v22 = v68[0];
                                v18 = 1;
                            }
                            else
                            {
                                v71 = mbsinit((unsigned int)&v17);
                                if (v71 == 0)
                                {
                                    break;
                                }
                                v16 = 1;
                            }
                        }
                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) == 0 || v16 != 0)
                        {
                            __ctype_get_mb_cur_max();
                            *((char *[2])&v0[0]) = v19;
                            sub_407340();
                            v73 = sub_408fc0();
                            v20 = v73;
                            if (v73 == -1)
                            {
                                v20 = 1;
                                v21 = 0;
                                v18 = 1;
                            }
                            else if (v73 != -2)
                            {
                                if (v73 == 0)
                                {
                                    v20 = 1;
                                    if (v22 != 0 || v19[0] != 0)
                                    {
                                        break;
                                    }
                                }
                                v21 = 1;
                                v77 = mbsinit((unsigned int)&v17);
                                if ((unsigned int)v77 != 0)
                                {
                                    v16 = 0;
                                }
                                v18 = 1;
                            }
                            if (v73 == -2)
                            {
                                v73 = strlen(v19);
                                v21 = 0;
                                v20 = v73;
                                v18 = 1;
                            }
                            if (v73 == -1 || v73 == -2)
                            {
                                if (((char)!(r12 <= 9) & v76) == 0)
                                {
                                    v75 += 1;
                                }
                                else if (v75 < v116 + (v116 << 2))
                                {
                                    v75 += 1;
                                    v76 = v73;
                                }
                            }
                        }
                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) == 0 || v73 == -2)
                        {
                            v74 = (char)!(r12 <= 9) & v76;
                        }
                        if ((v16 == 0 || v73 != -1) && (v16 == 0 || v73 != -2) && (v73 != -1 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) != 0 || v73 != -2))
                        {
                            if (v22 == 0)
                            {
                                break;
                            }
                            if (v22 != 0)
                            {
                                v78 = (char)!(r12 <= 9) & v76;
                                if (((char)!(r12 <= 9) & v76) == 0)
                                {
                                    v75 += 1;
                                }
                                else if (v75 < v116 + (v116 << 2))
                                {
                                    v75 += 1;
                                    v76 = v77;
                                }
                            }
                        }
                        if (v22 != 0 && ((char)!(r12 <= 9) & v76) != 0 && (v16 == 0 || v73 != -1) && (v16 == 0 || v73 != -2) && (v73 != -1 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) != 0 || v73 != -2) && v75 >= v116 + (v116 << 2) || ((char)!(r12 <= 9) & v76) != 0 && (v73 == -1 || v73 == -2) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (v19[0] & 31)) & 1) == 0 || v16 != 0) && v75 >= v116 + (v116 << 2))
                        {
                            v79 = v11;
                            v80 = v75 - v1;
                            v11 = 0;
                            v12 = &v12[v13];
                            v80 -= 1;
                            if (v9 == 0)
                            {
                                if (v80 != 1 || v79 == 0 && v75 != v1)
                                {
                                    v81 = v12;
                                    v82 = *(v12);
                                    v83 = (unsigned long long)*(v12) >> 5;
                                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v12) & 31)) & 1) != 0)
                                    {
                                        v13 = 1;
                                        v14 = 1;
                                        v15 = *(v81);
                                        v11 = 1;
                                    }
                                    else
                                    {
                                        v84 = mbsinit((unsigned int)&v10);
                                        if (v84 == 0)
                                        {
                                            break;
                                        }
                                        v9 = 1;
                                    }
                                }
                                if (v80 == 1 || v15 == 0 && v11 == 0 || v75 == v1 && v79 == 0)
                                {
                                    v87 = v12;
                                    v88 = *(v12);
                                    v89 = (unsigned long long)*(v12) >> 5;
                                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v12) & 31)) & 1) != 0)
                                    {
                                        v13 = 1;
                                        v14 = 1;
                                        v15 = *(v87);
                                        v11 = 1;
                                    }
                                    else
                                    {
                                        v90 = mbsinit((unsigned int)&v10);
                                        if (v90 == 0)
                                        {
                                            break;
                                        }
                                        v9 = 1;
                                    }
                                }
                            }
                            if ((v79 == 0 || v80 != 1) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v12) & 31)) & 1) == 0 || v9 != 0) && (v80 != 1 || v75 != v1))
                            {
                                __ctype_get_mb_cur_max();
                                sub_407340();
                                v13 = (unsigned int)sub_408fc0();
                                if (v13 == -1)
                                {
                                    v13 = 1;
                                    v14 = 0;
                                }
                                else if (v13 != -2)
                                {
                                    if (v13 == 0)
                                    {
                                        v13 = 1;
                                        if (v15 != 0 || *(v12) != 0)
                                        {
                                            break;
                                        }
                                    }
                                    v14 = 1;
                                    if (mbsinit((unsigned int)&v10) != 0)
                                    {
                                        v9 = 0;
                                    }
                                    v11 = 1;
                                }
                                if (v13 == -2)
                                {
                                    v14 = 0;
                                    v13 = strlen(v12);
                                }
                            }
                            if (v80 == 1 && ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v12) & 31)) & 1) == 0 || v80 == 1 && v9 != 0 || v15 == 0 && v11 == 0 && ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v12) & 31)) & 1) == 0 || v75 == v1 && v79 == 0 && ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v12) & 31)) & 1) == 0 || v15 == 0 && v11 == 0 && v9 != 0 || v75 == v1 && v79 == 0 && v9 != 0)
                            {
                                __ctype_get_mb_cur_max();
                                sub_407340();
                                v13 = (unsigned int)sub_408fc0();
                                if (v13 == -1)
                                {
                                    v13 = 1;
                                    v14 = 0;
                                    v11 = 1;
                                }
                                else if (v13 != -2)
                                {
                                    if (v13 == 0)
                                    {
                                        v13 = 1;
                                        if (*(v12) != 0 || v15 != 0)
                                        {
                                            break;
                                        }
                                    }
                                    v14 = 1;
                                    if (mbsinit((unsigned int)&v10) != 0)
                                    {
                                        v9 = 0;
                                    }
                                    v11 = 1;
                                }
                                if (v13 == -2)
                                {
                                    v14 = 0;
                                    v13 = strlen(v12);
                                    v11 = 1;
                                }
                            }
                            if (unknown)
                            {
                                v93 = v21;
                                v76 = 1;
                            }
                            if (unknown)
                            {
                                v76 = (unsigned int)sub_409a40();
                                if ((char)v76 != 0)
                                {
                                    break;
                                }
                                v93 = v21;
                            }
                            v1 = v75;
                            v75 += 1;
                        }
                        if (unknown)
                        {
                            v94 = v20;
                            if (v20 == v6)
                            {
                                v95 = memcmp(v19, v5, v94);
                            }
                        }
                        if (unknown)
                        {
                            v34 = v42;
                            v31 = 0;
                            v26 = *((int128_t *)&v19);
                            v26 = (long long)v26 + *((long long *)&((char *)&v26)[8]);
                            v96 = *(v42);
                            v97 = (unsigned long long)*(v42) >> 5;
                            v24 = *((int128_t *)&v16);
                            v28 = *((int128_t *)&(&v22)[-1]);
                            *((int128_t *)&v30) = (int128_t)v23;
                            v25 = 0;
                            v33 = 0;
                            v32 = 0;
                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0)
                            {
                                v35 = 1;
                                v37 = *(v42);
                                v36 = 1;
                                v33 = 1;
                            }
                            else
                            {
                                v98 = mbsinit((unsigned int)&v32);
                                if (v98 == 0)
                                {
                                    break;
                                }
                                if (v98 != 0)
                                {
                                    v31 = 1;
                                    __ctype_get_mb_cur_max();
                                    v0 = v34;
                                    sub_407340();
                                    v35 = (unsigned int)sub_408fc0();
                                    if (v35 == -1)
                                    {
                                        v35 = 1;
                                        v36 = 0;
                                    }
                                    else if (v35 != -2)
                                    {
                                        if (v35 == 0)
                                        {
                                            v35 = 1;
                                            if (*(v34) != 0 || v37 != 0)
                                            {
                                                break;
                                            }
                                        }
                                        v36 = 1;
                                        v100 = mbsinit((unsigned int)&v32);
                                        if (v100 != 0)
                                        {
                                            v31 = 0;
                                        }
                                        v33 = 1;
                                    }
                                    if (v35 == -2)
                                    {
                                        v36 = 0;
                                        v35 = strlen(v34);
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
                            v33 = 0;
                            v75 += 1;
                            v34 = &v34[v35];
                            while (true)
                            {
                                if (v31 == 0)
                                {
                                    v101 = v34;
                                    v102 = *(v34);
                                    v103 = (unsigned long long)*(v34) >> 5;
                                    if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) != 0)
                                    {
                                        v35 = 1;
                                        v36 = 1;
                                        v37 = *(v101);
                                        v33 = 1;
                                    }
                                    else
                                    {
                                        if (mbsinit((unsigned int)&v32) == 0)
                                        {
                                            break;
                                        }
                                        v31 = 1;
                                    }
                                }
                                if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) == 0 || v31 != 0)
                                {
                                    __ctype_get_mb_cur_max();
                                    sub_407340();
                                    v35 = (unsigned int)sub_408fc0();
                                    if (v35 == -1)
                                    {
                                        v35 = 1;
                                        v36 = 0;
                                        v33 = 1;
                                    }
                                    else if (v35 != -2)
                                    {
                                        if (v35 == 0)
                                        {
                                            v35 = 1;
                                            if (*(v34) != 0 || v37 != 0)
                                            {
                                                break;
                                            }
                                        }
                                        v36 = 1;
                                        if (mbsinit((unsigned int)&v32) != 0)
                                        {
                                            v31 = 0;
                                        }
                                        v33 = 1;
                                    }
                                    if (v35 == -2)
                                    {
                                        v36 = 0;
                                        v35 = strlen(v34);
                                        v33 = 1;
                                    }
                                }
                                if (v37 != 0 || v35 == -2 && ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) == 0 && v35 == -1 || v35 == -2 && v31 != 0 || v35 == -1 && v31 != 0)
                                {
                                    if (v25 == 0)
                                    {
                                        if ((char)v24 == 0)
                                        {
                                            v107 = v26;
                                            v108 = *(v26);
                                            v109 = (unsigned long long)*(v26) >> 5;
                                            if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) != 0)
                                            {
                                                v27 = 1;
                                                v28 = 1;
                                                v29 = *(v107);
                                                v25 = 1;
                                            }
                                            else
                                            {
                                                v110 = mbsinit((unsigned int)&v24);
                                                if (v110 == 0)
                                                {
                                                    break;
                                                }
                                                v24 = 1;
                                            }
                                        }
                                        if (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 || (char)v24 != 0)
                                        {
                                            __ctype_get_mb_cur_max();
                                            sub_407340();
                                            v27 = (unsigned int)sub_408fc0();
                                            if (v27 == -1)
                                            {
                                                v27 = 1;
                                                v28 = 0;
                                                v25 = 1;
                                            }
                                            else if (v27 != -2)
                                            {
                                                if (v27 == 0)
                                                {
                                                    v27 = 1;
                                                    if ((int)(&v28)[4] != 0 || *(v26) != 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                                v28 = 1;
                                                v111 = mbsinit((unsigned int)&v24);
                                                if (v111 != 0)
                                                {
                                                    v24 = 0;
                                                }
                                                v111 = *((int *)&((char *)&v28)[4]);
                                                v25 = 1;
                                            }
                                            if (v27 == -2)
                                            {
                                                v28 = 0;
                                                v27 = strlen(v26);
                                                v25 = 1;
                                            }
                                        }
                                    }
                                    if (v25 == 0 || (char)v28 != 0)
                                    {
                                        if (((char)v24 == 0 || v25 != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) != 0 || v25 != 0))
                                        {
                                            v111 = (int)(&v28)[4];
                                            if ((int)(&v28)[4] == 0)
                                            {
                                                break;
                                            }
                                        }
                                        if ((int)(&v28)[4] != 0 && v36 != 0 && ((char)v24 == 0 || v27 != -2 || v25 != 0) && ((char)v24 == 0 || v25 != 0 || v27 != -1) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) != 0 || v27 != -2 || v25 != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) != 0 || v25 != 0 || v27 != -1))
                                        {
                                            v114 = v37 != v111;
                                        }
                                    }
                                    if (v36 == 0 && (int)(&v28)[4] != 0 || (char)v28 == 0 && v25 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 && v27 == -2 && v25 == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 && v25 == 0 && v27 == -1 || v27 == -2 && v25 == 0 && (char)v24 != 0 || v25 == 0 && v27 == -1 && (char)v24 != 0)
                                    {
                                        if ((long long)(&v26)[8] != v35)
                                        {
                                            break;
                                        }
                                        v114 = memcmp(v26, v34, (long long)(&v26)[8]) != 0;
                                    }
                                    if ((int)(&v28)[4] != 0 || (char)v28 == 0 && v25 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 && v27 == -2 && v25 == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 && v25 == 0 && v27 == -1 || v27 == -2 && v25 == 0 && (char)v24 != 0 || v25 == 0 && v27 == -1 && (char)v24 != 0)
                                    {
                                        v115 = v75 + 1;
                                        if (v114 != 0)
                                        {
                                            break;
                                        }
                                        v26 = (long long)v26 + *((long long *)&((char *)&v26)[8]);
                                        v75 = v115;
                                        v34 = &v34[v35];
                                        v25 = 0;
                                        v33 = 0;
                                    }
                                }
                                else
                                {
                                    v118 = v19;
                                }
                            }
                            if (unknown)
                            {
                                v94 = v20;
                            }
                            else if (unknown)
                            {
                                v118 = 0;
                            }
                            else if ((((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) == 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 || v31 == 0) && (v25 == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) == 0) && (v25 == 0 || v31 == 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) == 0 || (char)v24 == 0) && ((char)v24 == 0 || v31 == 0))
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (v35 == 0 || v25 == 0 && v27 == 0 && v27 != -2 && (char)v24 != 0 && v27 != -1 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 && v25 == 0 && v27 == 0 && v110 != 0 && v27 != -2 && v27 != -1)
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (*(v34) == 0 && v35 == 0 || v25 == 0 && *(v26) == 0 && v27 == 0 && v27 != -2 && v27 != -1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v26) & 31)) & 1) == 0 || (char)v24 != 0) && (v110 != 0 || (char)v24 != 0))
                            {
                                sub_409a20(); /* do not return */
                            }
                            else if (v37 == 0 && (*(v34) == 0 || v31 == 0 || v35 != 0) && (v35 == 0 || v31 == 0 || v35 != -2) && (*(v34) == 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) != 0 || v35 != 0) && (v35 == 0 || v35 != -2 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v34) & 31)) & 1) != 0))
                            {
                                return v118;
                            }
                        }
                        if (v20 == v6 || v95 == 0 || v37 != 0)
                        {
                            v94 = v20;
                        }
                        if (unknown)
                        {
                            *((char *[2])&v19[0]) = &v19[v94];
                            v116 = 1;
                            v18 = 0;
                        }
                    }
                    if (unknown)
                    {
                        v118 = 0;
                    }
                    else if (unknown)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (unknown)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (unknown)
                    {
                        sub_409a20(); /* do not return */
                    }
                    else if (v15 == 0)
                    {
                        v118 = *((long long *)&v31);
                    }
                    else if (unknown)
                    {
                        return v118;
                    }
                }
                if (v6 == -2 || *(v5) == 0 || v6 == -1 || v6 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0)
                {
                    sub_409a20(); /* do not return */
                }
            }
            if ((v6 == -2 || v6 == 0 || v6 == -1 || v8 != 0) && (v6 == -2 || v6 == -1 || v6 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0 || *(v5) != 0))
            {
                __assert_fail(); /* do not return */
            }
        }
        if ((((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0) && (v6 == -2 || v48 == 0 || v6 == -1 || v8 != 0) && (v6 == -2 || v48 == 0 || v6 == -1 || v6 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0))
        {
            __assert_fail(); /* do not return */
        }
    }
    if (unknown)
    {
        v118 = v40;
    }
    if (v41 <= 1 && v40[0] != 0 && *(v42) != 0 || v41 > 1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0 || v48 != 0) && (v6 == -2 || v6 == -1 || v8 != 0) && (v6 == -2 || v6 == -1 || v6 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0))
    {
        v118 = *((long long *)&v31);
    }
    if (v40[0] == 0 && v41 <= 1 && *(v42) != 0 || v41 <= 1 && v40[0] != 0 && *(v42) != 0 || v41 > 1 && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0) && (((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0 || v48 != 0) && (v6 == -2 || v6 == -1 || v8 != 0) && (v6 == -2 || v6 == -1 || v6 != 0 || ((char)((unsigned long long)g_410680[(unsigned long long)(unsigned int)(rax & 7)] >> (*(v42) & 31)) & 1) != 0))
    {
        v118 = 0;
    }
    if (unknown)
    {
        return v118;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_613328;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_404760()
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
        g_613328 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[250];
    char field_fa;
} struct_0;

int sub_401d80()
{
    struct v1;  // rdi
    void *v2;  // r13
    unsigned long v3;  // rsi
    void *v4;  // rax
    unsigned long long v5;  // r9
    unsigned long long v6;  // cc_dep1
    void *v7;  // r10
    void *v8;  // r12
    unsigned long long v9;  // r10
    char v10;  // dl
    void *v11;  // r8
    unsigned long long v12;  // r11
    void *v13;  // rcx
    unsigned long long v14;  // rbp
    char v15;  // dl

    v2 = &v1->padding_0[224];
    v8 = &v1->padding_0[16];
    if ((unsigned int)v1->field_fa - 1 != -1)
    {
        v11 = (unsigned long long)((unsigned int)v1->field_fa - 1);
        v12 = *((long long *)((char *)v8 + 0x8 * v11));
        v4 = v11 * 8;
        if (v3 < *((long long *)((char *)v8 + 0x8 * v11)))
        {
            v13 = v11 - 1;
            v4 = (unsigned int)v11;
            v7 = v11 - 1;
            while (true)
            {
                v4 = (unsigned long long)v4 - 1;
                if ((unsigned int)v4 != -1)
                {
                    v5 = v7 - 1;
                    v6 = *((long long *)&((char *)((char *)v1 + 0x8 * v7))[16]);
                    if (*((long long *)&((char *)((char *)v1 + 0x8 * v7))[16]) > v3)
                    {
                        v7 = v5;
                    }
                    else
                    {
                        if (v6 == v3)
                        {
                            break;
                        }
                        if (v6 != v3)
                        {
                            v9 = v7 + 1;
                            v8 += v9 * 8;
                            v2 = &(struct struct_0 *)&v1->padding_0[224]->padding_0[v9];
                        }
                    }
                }
                if ((unsigned int)v4 == -1 || *((long long *)&((char *)((char *)v1 + 0x8 * v7))[16]) <= v3 && v6 != v3 && (unsigned int)v11 > (unsigned int)v4)
                {
                    while (true)
                    {
                        *((unsigned long long *)&((char *)((char *)v1 + 0x8 * v11))[24]) = v12;
                        *((char *)(v1 + v11 + 225)) = *((char *)(v1 + v11 + 224));
                        v11 = v13;
                        if ((unsigned int)v4 >= (unsigned int)v13)
                        {
                            break;
                        }
                        v12 = *((long long *)&((char *)((char *)v1 + 0x8 * v13))[16]);
                        v13 -= 1;
                    }
                }
            }
            if (*((long long *)&((char *)((char *)v1 + 0x8 * v7))[16]) <= v3 && (unsigned int)v4 != -1)
            {
                *((char *)(v2 + v7)) = *((char *)(v2 + v7)) + v10;
                return v4;
            }
            else if ((unsigned int)v4 == -1 || *((long long *)&((char *)((char *)v1 + 0x8 * v7))[16]) <= v3 && v6 != v3)
            {
                v14 = (unsigned int)v1->field_fa + 1;
                *((unsigned long *)v8) = v3;
                *((char *)v2) = v15;
                *((unsigned long long *)&v1->field_fa) = v14;
                return v4;
            }
        }
        else if (v3 == *((long long *)&((char *)((char *)v1 + 0x8 * v11))[16]))
        {
            v7 = v11;
        }
        else
        {
            v8 = v8 + v11 * 8 + 8;
            v2 = &v1->padding_0[224] + v11 + 1;
        }
        if (v3 < *((long long *)((char *)v8 + 0x8 * v11)) || v3 == *((long long *)&((char *)((char *)v1 + 0x8 * v11))[16]))
        {
            *((char *)(v2 + v7)) = *((char *)(v2 + v7)) + v10;
            return v4;
        }
    }
    if ((unsigned int)v1->field_fa - 1 == -1 || v3 < *((long long *)((char *)v8 + 0x8 * v11)) || v3 != *((long long *)&((char *)((char *)v1 + 0x8 * v11))[16]))
    {
        v14 = (unsigned int)v1->field_fa + 1;
        *((unsigned long *)v8) = v3;
        *((char *)v2) = v15;
        *((unsigned long long *)&v1->field_fa) = v14;
        return v4;
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

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
} struct_3;

extern unsigned int g_4104c0;
extern unsigned int g_4104e0;
extern unsigned int g_410510;
extern unsigned int g_410530;
extern unsigned int g_410560;
extern unsigned int g_4105b1;
extern unsigned long long stderr;

int sub_4082d0()
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
    struct v40;  // rbx
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
            if (v23 != v17 || v22 != 0)
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
                            else if (v29 != 0 || *((int *)(v19 + 24)) != *((int *)(v27 + 24)) || *((int *)(v19 + 8)) != *((int *)(v27 + 8)) || *((long long *)(v19 + 16)) != *((long long *)(v27 + 16)))
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
                    if (v1 != 0 || v4 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4104c0, 0x5), *(v34), *((long long *)&v11));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4104e0, 0x5), *(v34), *((long long *)&v11));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x4105b1, *((long long *)&v11), v40->field_0);
                                        v39 = stderr;
                                    }
                                    v43 += 1;
                                    v40 = (char *)&v40[1].field_0 + 4;
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
            if ((v1 == 0 || v23 == v17) && (v1 == 0 || v22 == 0) && (*(v19) == 0 || v23 == v17) && (*(v19) == 0 || v22 == 0) && (v23 == v17 || v4 == 0) && (v4 == 0 || v22 == 0))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410560, 0x5), *(v34), *((long long *)&v11));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410530, 0x5), *(v34), *((long long *)&v11));
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
    if (v29 == 0 && *((long long *)v18) == 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0 || v36 == 0 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410510, 0x5), *(v34), *((long long *)&v11));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern unsigned int g_40bcd1;
extern unsigned long long g_613300;
extern unsigned long long g_613308;

int sub_4023d0()
{
    unsigned long long v2;  // rbx

    if (sub_404690() == g_613308 - g_613300)
    {
        g_613308 = g_613300;
        return g_613300;
    }
    v2 = dcgettext(0x0, 0x40bcd1, 0x5);
    error(0x1, *(__errno_location()), "%s");
}

int sub_4068a0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4080e0();
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4097e0()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edi

    v1 = wcwidth();
    if ((unsigned int)v1 >= 0)
    {
        return v1;
    }
    return (unsigned long long)(char)(iswcntrl(v2) == 0);
}

int sub_401d20()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rdi

    v2 = v1;
    if ((v1 & 1) == 0)
    {
        v2 = v3;
        v8 = v1;
    }
    if (v1 != 0)
    {
        v6 = v2 % 2;
        while (true)
        {
            v7 = v8 % 2;
            if ((v8 & 1) != 0)
            {
                v5 = v8 - v6;
                if (v8 == v6)
                {
                    break;
                }
                v6 += v5 & v5 >> 63;
                v7 = (v5 ^ v5 >> 63) - (v5 >> 63);
            }
            v8 = v7;
        }
        return v8 | 1;
    }
    return v2;
}

int sub_40b880()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40b8c0();
    }
}

extern int512_t g_410680;

int sub_409870()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al

    v2 = v1;
    v3 = (char)v1 % 32;
    return (unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)&g_410680)[4 * (unsigned long long)(unsigned int)(rax & 7)]) >> ((char)v1 & 31)) & 1;
}

int sub_407ee0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_408130(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern unsigned int g_410122;
extern unsigned int g_41012e;
extern unsigned int g_410135;
extern unsigned int g_410139;
extern unsigned int g_410149;
extern unsigned int g_410160;
extern unsigned int g_4101c0;
extern unsigned int g_410290;
extern unsigned int g_4102b0;
extern unsigned int g_4102d8;
extern unsigned int g_410300;
extern unsigned int g_410330;
extern unsigned int g_410480;

int sub_407940()
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
    unsigned int v17;  // ecx
    unsigned int v18;  // edi
    unsigned int v19;  // edx
    void *v20;  // rdi
    unsigned long v22;  // r9
    unsigned long v23;  // rsi
    unsigned long long v24;  // r8
    unsigned long long v25;  // r13
    unsigned long long v26;  // r12
    unsigned long long v27;  // r15
    unsigned long long v28;  // r14
    unsigned long long v29;  // r14
    unsigned long v30;  // r12
    unsigned long v31;  // rbx
    unsigned long v32;  // rax
    unsigned long long v33;  // r8
    unsigned long v34;  // rax
    unsigned long v35;  // rax

    v13 = v12;
    if (v14 != 0)
    {
        __fprintf_chk(v18, 0x1, 0x410122, v14, v19);
    }
    else
    {
        __fprintf_chk(v15, 0x1, 0x41012e, v19, v17);
    }
    __fprintf_chk((unsigned int)v20, 0x1, 0x410480, dcgettext(0x0, 0x410135, 0x5), 0x7e1);
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4101c0, 0x5), v20);
    switch (v22)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x410139, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x410149, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x410160, 0x5);
        break;
    case 4:
        v29 = v13[3];
        v30 = v13[1];
        v31 = *(v13);
        v32 = dcgettext(0x0, 0x410290, 0x5);
    case 5:
        v29 = v13[3];
        v30 = v13[1];
        v31 = *(v13);
        v32 = dcgettext(0x0, 0x4102b0, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v34 = dcgettext(0x0, 0x4102d8, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v34 = dcgettext(0x0, 0x410300, 0x5);
        *((unsigned long long [9])&v5) = v12[6];
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 8:
        v25 = v13[6];
        v26 = v13[5];
        v27 = v13[4];
        *((unsigned long long [9])&v8) = v13[7];
        v28 = v13[3];
        *((unsigned long long [9])&v6) = v13[2];
        *((unsigned long long [9])&v7) = v13[1];
        v35 = dcgettext(0x0, 0x410330, 0x5);
    case 9:
        v23 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v33 = v12[1];
        v25 = v13[6];
        v26 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v27 = v13[4];
        v28 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v33;
    default:
        v23 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v24 = v12[1];
        v25 = v13[6];
        v26 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v27 = v13[4];
        v28 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v24;
    }
    v35 = dcgettext(0x0, v23, 0x5);
    v5 = v9;
    v4 = v29;
    __fprintf_chk((unsigned int)v20, 0x1, v32, v31, v30);
    return v4;
    return __fprintf_chk((unsigned int)v20, 0x1, v32, *((long long *)&v10), v6);
    v4 = v8;
    v3 = v25;
    v2 = v26;
    v1 = v27;
    v0 = v28;
    return __fprintf_chk((unsigned int)v20, 0x1, v32, *((long long *)&v10), v7);
}

int sub_40b540()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    unsigned long v5;  // rsi
    unsigned int v6;  // r14d
    char *v7;  // rdi
    unsigned long long v8;  // rax
    unsigned int v9;  // eax
    unsigned long v10;  // rbp
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // r12
    unsigned long v14;  // r13
    unsigned long long v15;  // rax
    unsigned int *v16;  // r15
    unsigned long v17;  // rbp
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long v21;  // rsi
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rax

    v6 = v5;
    v0 = v7;
    v1 = strlen(v7);
    v14 = (0x10000000 <= v1? v1 : v1 << 4) + 1;
    v13 = malloc((0x10000000 <= v1? v1 : v1 << 4) + 1);
    if (v13 != 0)
    {
        iconv(v6, 0x0, 0x0, 0x0, 0x0);
        v2 = v13;
        *((int *)&v3) = (0x10000000 <= v1? v1 : v1 << 4);
        while (true)
        {
            v8 = iconv(v6, (unsigned int)&v0, (unsigned int)&v1, (unsigned int)&v2, (unsigned int)&v3);
            if (v8 == -1)
            {
                v16 = __errno_location();
                v9 = *(v16);
                if (v9 == 7 && v14 < v14 << 1)
                {
                    v12 = realloc(v13, v14);
                    if (v13 != 0)
                    {
                        v13 = v12;
                        v14 = v10;
                        v2 = v12 + v11;
                        v3 = v10 - 1 - v11;
                    }
                }
                if (v9 == 7)
                {
                    v10 = v14 * 2;
                    v11 = v2 - v13;
                }
            }
            if (v9 == 22 || v8 != -1)
            {
                while (true)
                {
                    v15 = iconv(v6, 0x0, 0x0, (unsigned int)&v2, (unsigned int)&v3);
                    if (v15 == -1)
                    {
                        v16 = __errno_location();
                        v17 = v14 * 2;
                        v18 = v2 - v13;
                        if (v14 >= v14 << 1 || *(v16) != 7)
                        {
                            break;
                        }
                        v19 = realloc(v13, v14);
                        if (v13 == 0)
                        {
                            break;
                        }
                        v14 = v17;
                        v13 = v19;
                        v2 = v19 + v18;
                        v3 = v17 - 1 - v18;
                    }
                    else
                    {
                        v20 = v2;
                        v2 += 1;
                        *((char *)v20) = 0;
                        v21 = v2 - v13;
                        if (v14 <= v2 - v13)
                        {
                            break;
                        }
                        v13 = (realloc(v13, v21) != 0? v20 : r12);
                    }
                }
                if (v14 < v14 << 1 || v15 == -1 && *(v16) == 7)
                {
                    *(v16) = 12;
                }
                else if (v15 == -1)
                {
                    v22 = v13;
                    v13 = 0;
                    free(v22);
                }
                else if (v15 != -1)
                {
                    v23 = v13;
                    return v23;
                }
            }
            if (v9 == 22 || v8 != -1 || v13 == 0 && v9 == 7 || v9 == 7 && v14 >= v14 << 1)
            {
                *(v16) = 12;
            }
            if (v13 == 0 || v9 == 22 || v9 != 7 || v14 >= v14 << 1 || v8 != -1)
            {
                v22 = v13;
                v13 = 0;
                free(v22);
            }
        }
    }
    else
    {
        *(__errno_location()) = 12;
    }
    v23 = v13;
    return v23;
}

extern char g_613318;

int sub_4045e0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_613318 = v1;
    return v2;
}

int sub_402440()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long long v3[2];  // rdi
    unsigned long v4;  // rdx
    unsigned long v5;  // rdx

    if (v2 != 0)
    {
        if (v3[1] == 0)
        {
            v3[0] = v4;
            v3[1] = v2;
            return v5;
        }
        v0 = v5;
        __assert_fail(); /* do not return */
    }
}

int sub_407f80()
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
        sub_408130(); /* do not return */
    }
}

// int sub_406d90()

extern unsigned int g_613230;
extern unsigned long long g_613300;
extern char *g_613308;

int sub_4026f0()
{
    char v1;  // dil
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // eax
    char *v3;  // rbx
    char *v4;  // rax
    unsigned long v5;  // rbp
    unsigned long long v7;  // rax

    *(g_613308) = v1;
    g_613308 = &g_613308[1];
    if (v1 != 10)
    {
        return g_613308;
    }
    v2 = g_613230;
    if (g_613230 == -1)
    {
        v2 = isatty(0x0);
        g_613230 = v2;
    }
    if (v2 == 0)
    {
        v3 = g_613300 + 0x200;
        if (&g_613308[1 + -1 * g_613300] <= 511)
        {
            return &g_613308[1 + -1 * g_613300];
        }
        while (true)
        {
            v4 = &v3[-1];
            if (v3[-1] == 10)
            {
                break;
            }
            v3 = v4;
        }
        g_613308 = v3;
        v5 = &g_613308[1] - v3;
        sub_4023d0();
        v7 = memcpy(g_613300, v3, v5);
        g_613308 = v5 + v7;
        return v7;
    }
}

// int sub_406be0()

int sub_408fa0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4088f0();
}

extern int512_t g_613440;

int sub_406940()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_613440 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_613440 : v1) + 4)) = v3;
    return v2;
}

