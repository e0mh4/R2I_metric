#include "decompile_angr.h"
int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4051b0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_4057e0();
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

int sub_405110()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_404a60();
}

int sub_404100()
{
}

extern unsigned long long __progname_full;
extern unsigned long long g_609288;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_401ed0()
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
        g_609288 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_404110()
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
            sub_404300(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_4037c0()
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
    return sub_4032a0();
}

extern struct_0 *g_609218;
extern unsigned long long g_609220;
extern unsigned long long g_609228;
extern unsigned int g_609230;
extern unsigned long long g_6092a0;

int sub_4036b0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_609230;
    if (g_609230 > 1)
    {
        v2 = &g_609218[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_609218[(unsigned long long)(g_609230 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_609218->field_8 != 6328992)
    {
        v1 = free(g_609218->field_8);
        g_609220 = 0x100;
        g_609228 = &g_6092a0;
    }
    if (g_609218 != 6328864)
    {
        v1 = free(g_609218);
        g_609218 = &g_609220;
    }
    g_609230 = 1;
    return v1;
}

int sub_4035a2()
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

int sub_403a60()
{
}

int sub_401898() { crash_skku;
}
int sub_403770()
{
}

int sub_4050d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_404a60();
}

extern unsigned long long g_407227;

int sub_405130()
{
    char v0;  // [bp-0x1c]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    char *|unsigned long long v5;  // rbp
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
        v5 = &g_407227;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_405210() == 0)
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

    v10 = sub_401270();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6327856 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_4042e0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern char g_609278;

int sub_401cf0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_609278 = v1;
    return v2;
}

int sub_401e00()
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

int sub_403af0()
{
}

int sub_403a80()
{
}

int sub_401e90()
{
    void tmp_19;  // tmp #19
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char *v3;  // rax
    char v4;  // al

    v2 = (*((char *)(unsigned long long)(unsigned int)sub_401e00()) == 0? v1 : (unsigned long long)(unsigned int)sub_401e00());
    v3 = sub_401e60();
    tmp_19 = (char)*((char *)(v2 + v3));
    *((char *)(v2 + v3)) = 0;
    v4 = (char)tmp_19 != 0;
    return rax<8>;
}

extern int512_t g_40601e;
extern int512_t g_406022;

int sub_401f70()
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
        v3 = sub_405270();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40601e : 4218921);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_406022 : 4218917);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[5] == 0 && v1 == v2 && (v3[1] & 223) == 84 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 && v3[4] == 56 || v4 == 71 && v3[3] == 56 && (v3[1] & 223) == 66 && v1 == v2 && v3[4] == 48 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

extern uint128_t g_6093a0;
extern uint128_t g_6093b0;
extern uint128_t g_6093c0;
extern unsigned long long g_6093d0;

int sub_4039e0()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6093a0;
    *((uint128_t *)&v1) = g_6093b0;
    *((uint128_t *)&v2) = g_6093c0;
    v4 = g_6093d0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4032a0();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_403970()
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
    return sub_4032a0();
}

extern int512_t g_6093a0;

int sub_403490()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6093a0 : v1)) = v2;
    return &g_6093a0;
}

int sub_4037a0()
{
}

int sub_4050b0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_405030();
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_609218;
extern uint128_t g_609220;
extern unsigned int g_609230;
extern int512_t g_6092a0;

int sub_4032a0()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    unsigned long|unsigned long long v4;  // [bp-0x48]
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
    v17 = g_609218;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_609230 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_609218 != 6328864)
            {
                v16 = sub_404110();
                g_609218 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_404110();
                v17 = v15;
                g_609218 = v15;
                *(v15) = g_609220;
            }
            memset(&v17[(long long)(int)g_609230], 0x0, (int)((unsigned int)v13 + 1 - g_609230) * 16);
            g_609230 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_404300(); /* do not return */
        }
    }
    if (g_609230 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_402070();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6328992)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4040b0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_402070();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
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

extern unsigned int g_407100;
extern unsigned int g_407120;
extern unsigned int g_407150;
extern unsigned int g_407170;
extern unsigned int g_4071a0;
extern unsigned long long stderr;

int sub_404440()
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
    unsigned long long *|unsigned long long v18;  // rbx
    unsigned int|unsigned long|unsigned long long v19;  // r12
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
        while ((char)v15 != 0 && v15 != 61);
        v16 = v14 - v11;
    }
    if (*(v9->field_20) == 0 || *(v9->field_20) == 61)
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
                            else if (*((int *)(v18 + 24)) != *((int *)(v26 + 24)) || *((int *)(v18 + 8)) != *((int *)(v26 + 8)) || v28 != 0 || *((long long *)(v18 + 16)) != *((long long *)(v26 + 16)))
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
                                dcgettext(0x0, 0x407100, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x407120, 0x5);
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
            if ((*(v18) == 0 || v21 == 0) && (*(v18) == 0 || v22 == v16) && (v21 == 0 || v4 == 0) && (v21 == 0 || v1 == 0) && (v4 == 0 || v22 == v16) && (v1 == 0 || v22 == v16))
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
                                dcgettext(0x0, 0x4071a0, 0x5);
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
                            dcgettext(0x0, 0x407170, 0x5);
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
            dcgettext(0x0, 0x407150, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_404280()
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
        sub_404300(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_403f10()
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
    return sub_403b10();
}

int sub_403440()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4042b0();
}

int sub_4040b0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_404300(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_4038a0()
{
}

extern int512_t g_6093a0;

int sub_403480()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6093a0 : v1));
}

int sub_4042b0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4040b0();
}

int sub_404210() { crash_skku;
}
int sub_4035cb()
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
    v7 = (unsigned int)sub_402070();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4040b0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_402070();
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

int sub_404150()
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
        sub_404300(); /* do not return */
    }
}

extern int512_t g_6093a0;

int sub_4034a0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6093a0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6093a0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_401da0()
{
    char *v0;  // [bp-0x10]
    char *v2;  // rbx
    char *v4;  // rbx
    char *v5;  // rbx
    unsigned long long v6;  // rsi
    char v7;  // dl
    char *v8;  // rbx
    unsigned long long v9;  // rax

    v0 = v2;
    if (*(v2) != 0)
    {
        v2 = sub_401e00();
        v7 = v4[(unsigned long long)(unsigned int)sub_401e60()] == 47;
        v8 = v0;
    }
    else
    {
        v5 = v0;
        v6 = (unsigned int)sub_401e60();
    }
    v9 = strndup();
    if (v9 != 0)
    {
        return v9;
    }
    sub_404300(); /* do not return */
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

int sub_4058a0()
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

int sub_4057e0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_405860() != 0)
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

extern unsigned long long g_608e30;

int sub_405988()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_608e30;
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

extern char g_6093a0;

int sub_403500()
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
    v3 = (v2 == 0? &g_6093a0 : v2);
    *((int *)(tmp_11? &g_6093a0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6093a0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6093a0;
        abort(); /* do not return */
    }
}

extern unsigned int g_405a2c;
extern unsigned int g_405ab0;
extern unsigned int g_405ad8;
extern unsigned int g_405b10;
extern unsigned int g_405b78;
extern unsigned int g_405bc8;
extern unsigned int g_405c98;
extern unsigned int g_405cc8;
extern unsigned int g_405d00;
extern unsigned int g_405de8;
extern unsigned int g_405e30;
extern unsigned int g_405e50;
extern unsigned long long stdout;

int sub_401970()
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
        dcgettext(0x0, 0x405ab0, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405ad8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405b10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405b78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405bc8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405c98, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405cc8, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405d00, 0x5));
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
            v30 = "basename";
            v31 = 9;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405a2c, 0x5));
            v39 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405a2c, 0x5));
            v38 = setlocale(0x5, 0x0);
            if (v38 != 0)
            {
                v40 = strncmp(v38, "en_", 0x3);
            }
            if (v38 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405e30, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v39, "en_", 0x3) != 0) && (v3 == 0 || v39 != 0) && (v3 != 0 || v38 != 0) && (v3 != 0 || v40 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405de8, 0x5));
        }
        if (v3 != 0 || v38 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405e30, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405e50, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_403780()
{
}

extern int512_t g_6093a0;

int sub_4034e0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6093a0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6093a0 : v1) + 4)) = v3;
    return v2;
}

int sub_403830()
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
    return sub_4032a0();
}

int sub_405860()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4058a0();
    }
}

int sub_403ad0()
{
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

extern unsigned int g_4071c8;
extern unsigned int g_40720c;

int sub_404a60()
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
    unsigned int v13;  // edi
    unsigned long v14;  // rsi
    unsigned long v15;  // r12
    char v16[2];  // rdx
    unsigned int|unsigned long v17;  // eax
    unsigned long long v18;  // rax
    char [2]|unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned int|unsigned long long v24;  // r9
    unsigned long|unsigned long long * v26;  // rax
    unsigned int|unsigned long v27;  // rdx
    unsigned long v29;  // rax
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
    unsigned int|unsigned long long v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned int|unsigned long v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char [2]|char * v50;  // r15
    char v51[3];  // rax
    unsigned int v52;  // ecx
    char v53[3];  // r8
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char v58[2];  // rax
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
                v49 = (unsigned int)(v20 == 58? 0 : (unsigned int)r13<8>);
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
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13<8>);
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
                        v5 = v24;
                        sub_404360();
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
                            sub_404360();
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
    if ((v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if ((v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_404440();
        if ((unsigned int)v45 == -1)
        {
            v48 = *((long long *)(v15 + (int)v0->field_0 * 8));
        }
    }
    if (...)
    {
        v19 = &v48[1];
    }
    if (...)
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
                        dcgettext(0x0, 0x4071c8, 0x5);
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
            dcgettext(0x0, 0x40720c, 0x5);
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
                    dcgettext(0x0, 0x4071c8, 0x5);
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
        v45 = (unsigned int)sub_404440();
    }
    v63 = v45;
    return v63;
}

extern unsigned int g_609234;
extern unsigned int g_609238;
extern unsigned int g_60923c;
extern unsigned int g_6093e0;
extern unsigned int g_6093e4;
extern unsigned int g_6093e8;
extern unsigned long long g_6093f0;
extern unsigned long long g_609420;

int sub_405030()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6093e0 = g_60923c;
    g_6093e4 = g_609238;
    v1 = (unsigned int)v2;
    v0 = &g_6093e0;
    g_60923c = g_6093e0;
    g_609420 = g_6093f0;
    g_609234 = g_6093e8;
    return sub_404a60();
}

extern unsigned long long program_invocation_short_name;

int sub_4017eb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_403a50()
{
}

extern unsigned long long stdout[7];

int sub_4018a0()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // r13
    unsigned long v5;  // r12
    unsigned long v6;  // rbx
    char *v7;  // rbx
    char *v9;  // rsi
    char *v10;  // rax
    char *v11;  // rbp
    char *v13;  // rax
    char v14;  // dl

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = (unsigned long long)(unsigned int)sub_401da0();
    sub_401e90();
    if (v9 != 0 && *(v7) != 47)
    {
        v11 = &v7[strlen(v7)];
        v10 = &v9[strlen(v9)];
        while (true)
        {
            if (v9 < v10 && v7 < v11)
            {
                v10 = &v10[-1];
                v11 = &v11[-1];
            }
            if (v9 >= v10 || v7 >= v11)
            {
                if (v7 >= v11)
                {
                    break;
                }
                *(v11) = 0;
            }
        }
    }
    fputs_unlocked(v7, stdout);
    v13 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v13) = 0 - (unsigned int)(char)(v14 < 1) & 10;
    }
    else
    {
        __overflow();
    }
}

extern unsigned int g_406db2;
extern unsigned int g_406ddd;
extern unsigned int g_407010;

int sub_404030()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x406db2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x406ddd, 0x5));
    dcgettext(0x0, 0x407010, 0x5);
}

extern unsigned long long g_609280;

int sub_401ce0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_609280 = v1;
    return v2;
}

extern unsigned int g_4070ef;
extern unsigned int g_6091d8;

int sub_404300()
{
    dcgettext(0x0, 0x4070ef, 0x5);
    error(g_6091d8, 0x0, "%s");
    abort(); /* do not return */
}

int sub_404260()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4040b0();
}

extern int512_t g_6091c8;

int sub_405970()
{
}

extern uint128_t g_6093a0;
extern uint128_t g_6093b0;
extern uint128_t g_6093c0;
extern unsigned long long g_6093d0;

int sub_4038bf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6093d0;
    *((uint128_t *)&v0) = g_6093a0;
    *((uint128_t *)&v1) = g_6093b0;
    *((uint128_t *)&v2) = g_6093c0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4032a0();
}

int sub_4038b0()
{
}

int sub_404180() { crash_skku;
}
int sub_403ab0()
{
}

int sub_403ef0()
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

int sub_405090()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_405030();
}

int sub_403940()
{
}

int sub_402070()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    char|unsigned long|unsigned long long v4;  // [bp-0xc0]
    char|unsigned long|unsigned long long v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    char|unsigned long long v9;  // [bp-0x98]
    unsigned long|unsigned long long v10;  // [bp-0x90]
    unsigned int|unsigned long long v11;  // [bp-0x88]
    unsigned int|unsigned long long v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    unsigned int v16;  // [bp-0x60]
    char v17;  // [bp-0x5c]
    char|unsigned long long v18;  // [bp-0x5b]
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
    char|unsigned long|unsigned long long v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // r11
    unsigned long|unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned short|unsigned long|unsigned long long v46;  // rax
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
    unsigned int|unsigned long long v77;  // rsi
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
    char|unsigned long long v89;  // rdx
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
            v26 = (unsigned int)sub_401f70();
            v27 = (unsigned int)sub_401f70();
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
                                    v33 = rax<8>;
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
                            v48 = v5;
                            v5 = v41;
                            v78 = 0;
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
                    case 11:
                        v40 = 11;
                        v45 = 118;
                        v89 = (unsigned int)v39 == 2;
                        if (v4 == 0)
                        {
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
                        v89 = (char)((unsigned int)v39 == 2);
                        if (v17 != 0)
                        {
                            break;
                        }
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
                            v76 = (unsigned int)sub_402070();
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
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_405130();
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
                    if (v46 == 0 || (unsigned int)v46 != 0 && v46 != -1 && v46 != -2)
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
                    if ((v89 == 0 || v80 < v64) && (v89 == 0 || v63 == 0) && (v80 < v64 || v89 != 0))
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
            if ((v76 == 0 || v17 != 0) && (v78 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_402070();
            }
            if (v17 == 0 || v17 == 0 && v5 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v4 == 0 || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v76 == 0 || v17 != 0) && (v78 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
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

extern unsigned int g_405fc5;
extern unsigned int g_6091d8;
extern char g_609278;
extern unsigned long long g_609280;

int sub_401d00()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4051b0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_609278 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x405fc5, 0x5);
            if (g_609280 != 0)
            {
                sub_403940();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_609278 != 0)
    {
        v3 = sub_4051b0();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_609278 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6091d8);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_407227;
extern char g_609418[2];

int sub_405270()
{
    unsigned long|unsigned long long v0;  // [bp-0xd0]
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
    char [2]|unsigned long long v9;  // r15
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

    v9 = g_609418;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_407227 : (unsigned long long)nl_langinfo(0xe));
    if (g_609418 == 0)
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
            v9 = &g_407227;
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v61 = __uflow(v10);
                        }
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
                                v32 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax<8> >> 16) : (unsigned int)rax<8>);
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
                                    v9 = &g_407227;
                                    v10 = (tmp_10 == 0? &g_407227 : tmp_10);
                                    free(NULL);
                                    sub_4057e0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v38 != 0 && (unsigned int)v27 != 32 && v29 > 1 && (unsigned int)v27 != 35)
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
                        if (v62 == -1 && (unsigned int)v27 == 35 || (unsigned int)v61 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v61 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v29 <= 1 && (unsigned int)v27 != 32 && (unsigned int)v27 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_407227 : tmp_10);
                            sub_4057e0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0 && v29 > 1) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v29 > 1) && (unsigned int)v27 != 32 && (unsigned int)v27 == 35 && v62 == -1 || (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v29 > 1) && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v29 <= 1)
                    {
                        v9 = &g_407227;
                    }
                    else if (((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0 && v29 > 1) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v29 > 1) && (unsigned int)v27 != 32 && (unsigned int)v27 == 35 && v62 == -1 || (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v29 > 1) && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v29 <= 1) && v0 != 0 || v38 == 0 && v29 > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_407227;
            free(v17);
        }
        *((char *[2])&g_609418[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_407227 : tmp_10), v9);
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

extern unsigned int g_405a47;
extern unsigned int g_405a6b;
extern unsigned int g_405a7b;
extern unsigned int g_405e88;
extern unsigned int g_407227;
extern unsigned int g_60923c;

int main()
{
    unsigned long long v1;  // r13
    unsigned long long v4;  // rax
    unsigned long v5;  // rdi
    unsigned int v8;  // eax
    unsigned long long v11;  // rbx

    v1 = 0;
    sub_401ed0();
    setlocale(0x6, 0x407227);
    bindtextdomain(0x405a47, 0x405e88);
    textdomain(0x405a47);
    sub_405970();
    while (true)
    {
        v4 = sub_4050b0();
        if ((unsigned int)v4 != -1)
        {
            if ((unsigned int)v4 != 97 && v4 <= 97)
            {
                if ((unsigned int)v4 == -131)
                {
                    sub_403f70();
                    exit(0x0); /* do not return */
                }
                if ((unsigned int)v4 == -130)
                {
                    sub_401970(); /* do not return */
                }
            }
        }
        else
        {
            if (g_60923c >= (unsigned int)v5)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x405a6b, 0x5));
            }
            else if (v1 != 0)
            {
                while (true)
                {
                    sub_4018a0();
                    v8 = g_60923c + 1;
                    g_60923c = g_60923c + 1;
                    if (v8 >= (unsigned int)v5)
                    {
                        break;
                    }
                }
            }
            else if (g_60923c + 2 >= (unsigned int)v5)
            {
                sub_4018a0();
            }
            else
            {
                v11 = (unsigned int)sub_403af0();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x405a7b, 0x5));
                sub_401970(); /* do not return */
            }
        }
        if (((unsigned int)v4 == -1 || (unsigned int)v4 != 97) && (g_60923c >= (unsigned int)v5 || (unsigned int)v4 != -1) && ((unsigned int)v4 == -1 || v4 <= 97 || (unsigned int)v4 != 115) && ((unsigned int)v4 == -1 || v4 <= 97 || (unsigned int)v4 != 122) && ((unsigned int)v4 == -1 || (unsigned int)v4 != -131 || v4 > 97) && ((unsigned int)v4 == -1 || (unsigned int)v4 != -130 || v4 > 97))
        {
            sub_401970(); /* do not return */
        }
        if ((unsigned int)v4 == 97 || (unsigned int)v4 == 115 && (unsigned int)v4 != -1 && v4 > 97)
        {
            v1 = 1;
        }
    }
    return 0;
}

int sub_405210()
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

int sub_403aa0()
{
}

extern unsigned int g_406d6b;
extern unsigned int g_406d6f;
extern unsigned int g_406d7f;
extern unsigned int g_406d96;
extern unsigned int g_406df8;
extern unsigned int g_406ec8;
extern unsigned int g_406ee8;
extern unsigned int g_406f10;
extern unsigned int g_406f38;
extern unsigned int g_406f68;

int sub_403b10()
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
    dcgettext(0x0, 0x406d6b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x406df8, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x406d6f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x406d7f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x406d96, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x406ec8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x406ee8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x406f10, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x406f38, 0x5);
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
        dcgettext(0x0, 0x406f68, 0x5);
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

int sub_403960()
{
}

int sub_403f70()
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
        if ((unsigned int)v13 <= 47 && v11 != 0 || (unsigned int)v13 > 47 && v12 != 0)
        {
            v15 += 1;
        }
        if (v8 != 0)
        {
            v0 = v13;
        }
        return sub_403b10();
    }
}

int sub_4036a0()
{
}

extern char g_609268;
extern unsigned long long g_609270;

int sub_401841()
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

    if (g_609268 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_609270 >= 0)
            {
                break;
            }
            g_609270 = g_609270 + 1;
            *((long long *)(6327872 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_609268 = 1;
        return sub_4017eb();
    }
    return v4;
}

extern int512_t g_6093a0;

int sub_403530()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6093a0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_402070();
}

int sub_401e60()
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

int sub_4040d0()
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
        sub_404300(); /* do not return */
    }
}

int sub_404360()
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

int sub_4050f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_405030();
}

int sub_403930()
{
}

int sub_403750()
{
}
