#include "decompile_angr.h"
int sub_404a10()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rdi
    unsigned int *v3;  // rsi

    v1 = -18446744069414584321;
    if (*(v2) >= *(v3))
    {
        v1 = [D] amd64g_calculate_condition(0xf<64>, 0x7<64>, Conv(32->64, Load(addr=rdi<8>, size=4, endness=Iend_LE)), Conv(32->64, Load(addr=rsi<8>, size=4, endness=Iend_LE)), cc_ndep<8>);
    }
    return v1;
}

int sub_407042()
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

extern int512_t g_6104e0;

int sub_406f40()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6104e0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6104e0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_403d60()
{
    [D] PutI(904:F64x8)[t8,0] = t12
    [D] PutI(968:I8x8)[t8,0] = 0x01
    [D] PutI(904:F64x8)[t8,2] = t5
    [D] PutI(968:I8x8)[t8,2] = 0x01
}

int sub_40706b()
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
    v7 = (unsigned int)sub_405b10();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_407b50();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_405b10();
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

int sub_4036f6() { crash_skku;
}
extern struct_0 *g_6102d8;
extern unsigned long long g_6102e0;
extern unsigned long long g_6102e8;
extern unsigned int g_6102f0;
extern unsigned long long g_6103e0;

int sub_407150()
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
    if (g_6102d8->field_8 != 6357984)
    {
        v1 = free(g_6102d8->field_8);
        g_6102e0 = 0x100;
        g_6102e8 = &g_6103e0;
    }
    if (g_6102d8 != 6357728)
    {
        v1 = free(g_6102d8);
        g_6102d8 = &g_6102e0;
    }
    g_6102f0 = 1;
    return v1;
}

int sub_409700()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409090();
}

int sub_407500()
{
}

int sub_407540()
{
}

int sub_409e90()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_409ed0();
    }
}

int sub_407b50()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_407da0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_6103d8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_405970()
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
        g_6103d8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern char g_6104e0;

int sub_406fa0()
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
    v3 = (v2 == 0? &g_6104e0 : v2);
    *((int *)(tmp_11? &g_6104e0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6104e0;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_6104e0;
        abort(); /* do not return */
    }
}

int sub_408990()
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
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40db70;
extern unsigned int g_40db90;
extern unsigned int g_40dbc0;
extern unsigned int g_40dbe0;
extern unsigned int g_40dc10;
extern unsigned long long stderr;

int sub_408a70()
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
                                dcgettext(0x0, 0x40db70, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40db90, 0x5);
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
                                dcgettext(0x0, 0x40dc10, 0x5);
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
                            dcgettext(0x0, 0x40dbe0, 0x5);
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
            dcgettext(0x0, 0x40dbc0, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern int512_t g_6104e0;

int sub_406f80()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6104e0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6104e0 : v1) + 4)) = v3;
    return v2;
}

int sub_407140()
{
}

int sub_407b70()
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
        sub_407da0(); /* do not return */
    }
}

int sub_407220()
{
}

int sub_407990()
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

int sub_402c00() { crash_skku;
}
int sub_409740()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409090();
}

extern unsigned long long g_6103c0;
extern unsigned long long g_610560;
extern unsigned long long g_610568;

int sub_4050a0()
{
    g_610568 = 0;
    g_6103c0 = 0;
    g_610560 = 0;
    return (unsigned long long)free(g_610560);
}

int sub_403fc5()
{
}

int sub_405530() { crash_skku;
}
int sub_403c47() { crash_skku;
}
extern unsigned long long g_60fe30;

int sub_409fb8()
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
        rax<8>();
        v1 = &v1[-1];
    }
    return v4;
}

extern uint128_t g_6104e0;
extern uint128_t g_6104f0;
extern uint128_t g_610500;
extern unsigned long long g_610510;

int sub_407480()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6104e0;
    *((uint128_t *)&v1) = g_6104f0;
    *((uint128_t *)&v2) = g_610500;
    v4 = g_610510;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_406d40();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_409e10()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_409e90() != 0)
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

int sub_407c20() { crash_skku;
}
int sub_403529()
{
}

int sub_40328a()
{
}

extern unsigned int g_40d172;
extern unsigned int g_40d19d;
extern unsigned int g_40d3d0;

int sub_407ad0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d172, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d19d, 0x5));
    dcgettext(0x0, 0x40d3d0, 0x5);
}

int sub_407de0()
{
    unsigned long long v1;  // rax

    v1 = strndup();
    if (v1 != 0)
    {
        return v1;
    }
    sub_407da0(); /* do not return */
}

int sub_403d69()
{
}

extern int512_t g_6104e0;

int sub_406fd0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6104e0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_405b10();
}

int sub_407d80()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern char g_610328;
extern unsigned long long g_610330;

int sub_402951()
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
        return sub_4028fb();
    }
    return v4;
}

int sub_4096e0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409660();
}

extern unsigned long long g_40dc97;

int sub_409760()
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
        v5 = &g_40dc97;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_409840() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern unsigned long long program_invocation_short_name;

int sub_4028fb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_4074f0()
{
}

int sub_407dcc()
{
    abort(); /* do not return */
}

int sub_4053b0()
{
    unsigned long long v1;  // rax

    v1 = sub_4050f0();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_405210();
        sub_405290();
        r9<8>();
        v1 = -1;
    }
    return v1;
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

    v10 = sub_4016e8();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6356528 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern unsigned long long g_6103d0;

int sub_405470()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6103d0 = v1;
    return v2;
}

int sub_403d70() { crash_skku;
}
int sub_403bc7() { crash_skku;
}
int sub_4050f0()
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

int sub_407410()
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
    return sub_406d40();
}

int sub_403c0a()
{
    [D] PutI(904:F64x8)[t4,2] = t5
    [D] PutI(968:I8x8)[t4,2] = 0x01
    [D] PutI(968:I8x8)[t4,0] = 0x00
    [D] PutI(904:F64x8)[t14,0] = t23
    [D] PutI(968:I8x8)[t14,0] = 0x01
    [D] PutI(904:F64x8)[t14,1] = t16
    [D] PutI(968:I8x8)[t14,1] = 0x01
    [D] PutI(904:F64x8)[t14,0] = t41
    [D] PutI(968:I8x8)[t14,0] = 0x01
    [D] PutI(904:F64x8)[t14,2] = t34
    [D] PutI(968:I8x8)[t14,2] = 0x01
}

int sub_407520()
{
}

int sub_403949() { crash_skku;
}
int sub_407bb0()
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
            sub_407da0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_407e00()
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long *v1;  // [bp-0x58]
    char v2;  // [bp-0x49]
    char v3;  // [bp-0x40]
    unsigned long v5;  // rcx
    unsigned int v6;  // edx
    char **v7;  // rsi
    unsigned long long *v8;  // rbx
    unsigned int *v9;  // r13
    unsigned int *v10;  // r13
    char v11[3];  // r15
    unsigned int v12;  // eax
    unsigned long long v13;  // r13
    unsigned long long|unsigned long v14;  // r12
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rax
    char *v17;  // r8
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rsi
    char v23;  // sil
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13
    unsigned long long v26;  // r13
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rax
    unsigned long long v34;  // r9
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rax
    unsigned long long v37;  // r9
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r9
    unsigned long long|unsigned int v41;  // rdi
    unsigned long long|unsigned int|unsigned long v42;  // r10
    unsigned long long v43;  // rcx
    unsigned long long v44;  // r9
    unsigned long long|unsigned int v45;  // edi
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r9
    unsigned long long|unsigned int v48;  // rdi
    unsigned long long v49;  // rax
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rdi
    unsigned long long v52;  // rcx
    unsigned long long v53;  // r9
    unsigned long long|unsigned int v54;  // rdi
    unsigned long long|unsigned int v55;  // rdi
    unsigned long long v56;  // cc_dep1
    unsigned int v57;  // cc_dep1
    unsigned long long v58;  // cc_dep1
    unsigned long v59;  // rax
    unsigned long long v60;  // cc_dep1
    unsigned long long v61;  // cc_dep1
    unsigned int v62;  // cc_dep1
    char *v63;  // rsi
    unsigned long long v64;  // rax

    v1 = v5;
    if (v6 <= 36)
    {
        v8 = (v7 == 0? &v3 : v7);
        *(v9) = 0;
        v9 = __errno_location();
        v11 = *(v8);
        v15 = strtol(v45, v7, v6);
        if (*(v8) != v45)
        {
            v12 = *(v10);
            if (*(v10) == 0)
            {
                v14 = 0;
            }
            else
            {
                v14 = 4;
                if (v12 == 34)
                {
                    v14 = 1;
                }
            }
            if ((*(v10) == 0 || v12 == 34) && v17 != 0)
            {
                v13 = v11[0];
                if (v11[0] != 0)
                {
                    v18 = strchr(v17, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
        }
        else
        {
            if (v17 != 0)
            {
                v13 = v11[0];
                v14 = 4;
                if (v11[0] != 0)
                {
                    v15 = 1;
                    v14 = 0;
                    v16 = strchr(v17, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
            if ((v17 == 0 || v16 == 0) && (v17 == 0 || v11[0] != 0))
            {
                v14 = 4;
            }
        }
        if (*(v8) == v45 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v45 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0)
        {
            v19 = v13 - 69;
            if ((v13 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v2) = v19;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0)
                {
                    v20 = strchr(v17, 0x30);
                    if (v20 != 0 && v11[1] != 68)
                    {
                        if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 105)
                        {
                            v24 = v2;
                            if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 66)
                            {
                                /* goto *((long long *)(rdx<8> * 8 + 4249256)); */
                            }
                        }
                        else
                        {
                            v22 = 0;
                            v21 = 0x400;
                            v23 = v11[2] == 66;
                            v38 = rsi<8> * 2 + 1;
                        }
                    }
                }
            }
        }
        if ((*(v8) == v45 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v45 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0) && (v13 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0 && v20 == 0 || (*(v8) == v45 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v45 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0) && (v13 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) == 0 || (*(v8) == v45 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v45 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0) && (v13 - 69 & 255) > 47)
        {
            v38 = 1;
            v21 = 0x400;
        }
        if (...)
        {
            v38 = 2;
            v21 = 1000;
        }
        if (...)
        {
            v25 = (unsigned int)v13 - 66;
            switch (v25)
            {
            case 0:
                if (v15 >= -0x20000000000000 && v15 <= 9007199254740991)
                {
                    v15 *= 0x400;
                    break;
                }
            case 3:
                v39 = v21;
                v27 = (-1 CONCAT 0x8000000000000000) % v21;
                v40 = v27;
            case 5: case 37:
                v46 = v21;
                v29 = (-1 CONCAT 0x8000000000000000) % v21;
                v47 = v29;
                v48 = 3;
                v42 = 0;
                do
                {
                    if (v15 < v47)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v46 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v58 = v48;
                    v48 -= 1;
                }
                while (v58 != 1);
            case 9: case 41:
                v50 = v21;
                v49 = (-1 CONCAT 0x8000000000000000) % v21;
            case 11: case 43:
                v50 = v21;
                v30 = (-1 CONCAT 0x8000000000000000) % v21;
                v51 = v30;
            case 14:
                v52 = v21;
                v31 = (-1 CONCAT 0x8000000000000000) % v21;
                v53 = v31;
                v54 = 5;
                v42 = 0;
                do
                {
                    if (v53 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v52 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v60 = v54;
                    v54 -= 1;
                }
                while (v60 != 1);
            case 18: case 50:
                v43 = v21;
                v28 = (-1 CONCAT 0x8000000000000000) % v21;
                v44 = v28;
            case 23:
                v32 = v21;
                v33 = (-1 CONCAT 0x8000000000000000) % v21;
                v34 = v33;
                v55 = 8;
                v42 = 0;
                do
                {
                    if (v34 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v32 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v61 = v55;
                    v55 -= 1;
                }
                while (v61 != 1);
            case 24:
                v35 = v21;
                v36 = (-1 CONCAT 0x8000000000000000) % v21;
                v37 = v36;
            case 33:
                break;
            case 53:
                if (v15 >= 0xc000000000000000 && v15 <= 4611686018427387903)
                {
                    v15 *= 2;
                    break;
                }
            default:
                v14 = (unsigned int)v14 | 2;
                *(v1) = v15;
            }
            if (v25 <= 53)
            {
                v26 = v25;
            }
        }
        v38 = 1;
        v50 = 0x400;
        v49 = -0x20000000000000;
        if (v15 >= v49)
        {
            v59 = (0 CONCAT 9223372036854775807) % v50;
        }
        v38 = 1;
        v35 = 0x400;
        v37 = -0x20000000000000;
        v45 = 7;
        v42 = 0;
        do
        {
            if (v37 > v15)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
            {
                v15 = v35 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v62 = v45;
            v45 = (unsigned long long)v45 - 1;
        }
        while (v62 != 1);
        v38 = 1;
        v50 = 0x400;
        v51 = -0x20000000000000;
        if (v15 >= v51)
        {
            v59 = (0 CONCAT 9223372036854775807) % v50;
            if (v15 <= (0 CONCAT 9223372036854775807) % v50)
            {
                v15 = v50 * v15;
                if (v15 >= v51 && v59 >= v15)
                {
                    v15 = v50 * v15;
                }
            }
            else
            {
                v15 = 9223372036854775807;
                v14 = 1;
            }
        }
        else
        {
            v15 = 0x8000000000000000;
            v14 = 1;
        }
        v38 = 1;
        if (v15 >= -0x40000000000000 && v15 <= 18014398509481983)
        {
            v15 *= 0x200;
        }
        v38 = 1;
        v38 = 1;
        v52 = 0x400;
        v53 = -0x20000000000000;
        v38 = 1;
        v39 = 0x400;
        v40 = -0x20000000000000;
        v41 = 6;
        v42 = 0;
        do
        {
            if (v15 < v40)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
            {
                v15 = v39 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v56 = v41;
            v41 -= 1;
        }
        while (v56 != 1);
        v38 = 1;
        v43 = 0x400;
        v44 = -0x20000000000000;
        v45 = 4;
        v42 = 0;
        do
        {
            if (v44 > v15)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
            {
                v15 = v43 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v57 = v45;
            v45 = (unsigned long long)v45 - 1;
        }
        while (v57 != 1);
        v14 = (unsigned int)v14 | v42;
        v63 = &v11[v38];
        *(v8) = v63;
        v14 = (unsigned int)(*(v63) != 0? v14 | 2 : (unsigned int)r12<8>);
        v38 = 1;
        v46 = 0x400;
        v47 = -0x20000000000000;
        v38 = 1;
        v32 = 0x400;
        v34 = -0x20000000000000;
        *(v1) = v15;
        v64 = v14;
        return v64;
    }
    __assert_fail(); /* do not return */
}

int sub_407350()
{
}

int sub_403a08() { crash_skku;
}
int sub_408550()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char|char [3] v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long long|unsigned int|unsigned long v5;  // rdi
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
    unsigned long long|unsigned int v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned long long|unsigned int v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned long long|unsigned int v39;  // rdi
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rcx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned int v48;  // cc_dep1
    unsigned long long v49;  // rax
    unsigned long long v50;  // r8

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
        if (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4249648)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi<8> * 2 + 1;
                            }
                        }
                    }
                }
            }
        }
        if ((*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
        {
            v31 = 1;
            v30 = 0x400;
        }
        if (...)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (...)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v38 = v30;
                v39 = 6;
                do
                {
                    v33 = v33 * v38;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v39;
                    v39 -= 1;
                }
                while (v46 != 1);
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v49 = tmp_11 * v28 * v28;
                    v33 = v49;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
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
                v40 = v30;
                v5 = 5;
                do
                {
                    v33 = v33 * v40;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
                break;
            case 18: case 50:
                v34 = v30;
                v35 = 4;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v35;
                    v35 -= 1;
                }
                while (v44 != 1);
            case 23:
                v36 = v30;
                v37 = 8;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v37;
                    v37 -= 1;
                }
                while (v45 != 1);
            case 24:
                v41 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v41;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v48 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v48 != 1);
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v50 = &v32[v31];
                *(v12) = v50;
            case 53:
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
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

int sub_4039c0() { crash_skku;
}
int sub_407cb0() { crash_skku;
}
extern int512_t g_6104e0;

int sub_406f30()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6104e0 : v1)) = v2;
    return &g_6104e0;
}

int sub_4050e0()
{
}

int sub_4029a8() { crash_skku;
}
int sub_403d50()
{
}

extern unsigned int g_40a19d;
extern unsigned int g_40a1d7;
extern unsigned int g_40a1f0;
extern unsigned int g_40a20e;
extern unsigned int g_40a23d;
extern unsigned int g_40a252;
extern unsigned int g_40a270;
extern unsigned int g_40a285;
extern unsigned int g_40b8e8;
extern unsigned int g_40b958;
extern unsigned int g_40b988;
extern unsigned int g_40b9b8;
extern unsigned int g_40b9d8;
extern unsigned int g_40ba00;
extern unsigned int g_40ba28;
extern unsigned int g_40ba48;
extern unsigned int g_40ba88;
extern unsigned int g_40bb20;
extern unsigned int g_40bb48;
extern unsigned int g_40bb70;
extern unsigned int g_40bba0;
extern int512_t g_40bfe0;
extern int512_t g_40c030;
extern int512_t g_40c090;
extern int512_t g_40c0d0;
extern unsigned int g_40dc97;
extern unsigned int g_40dc9a;
extern char g_610250;
extern unsigned int g_610254;
extern unsigned int g_610258;
extern unsigned int g_61025c;
extern unsigned long long g_610260;
extern unsigned long long g_610268;
extern unsigned long long g_610270;
extern unsigned int g_610278;
extern unsigned int g_6102fc;
extern char g_610338;
extern unsigned int g_61033c;
extern char *g_610340;
extern char g_610348;
extern unsigned long long g_610350;
extern unsigned int g_610358;
extern unsigned long long g_610360;
extern unsigned long long g_610368;
extern char g_610370[2];
extern unsigned long long g_610378;
extern unsigned long long g_610380;
extern unsigned long long g_610388;
extern unsigned int g_610398;
extern char g_6103a0[2];
extern unsigned int g_6103a8;
extern unsigned int g_6103ac;
extern unsigned int g_6103b0;
extern unsigned long long g_610568;
extern char g_610570[2];
extern char *stdin;
extern unsigned long long stdout;

int main()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    unsigned int *|unsigned long v4;  // [bp-0x58]
    unsigned long long|unsigned int * v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v21;  // rbx
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rbx
    unsigned long long v26;  // r14
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // r13
    unsigned long long v30;  // rdx
    unsigned long long v31;  // r15
    unsigned int|unsigned long v32;  // rcx
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // r9
    unsigned long long v37;  // rbx
    unsigned int *v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v40;  // rax
    char *v41;  // r15
    unsigned long long v42;  // rbx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rbx
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rbx
    unsigned int|char|unsigned long v56;  // rax
    unsigned long v57;  // rdi
    unsigned long long v58;  // rax
    unsigned long long v59;  // rax
    unsigned long long v61;  // rax
    unsigned int|unsigned long v62;  // rbx
    unsigned long long v63;  // rax
    unsigned int v65;  // eax
    unsigned long long v66;  // rax

    sub_405970();
    bindtextdomain(0x40a19d, 0x40b8e8);
    textdomain(0x40a19d);
    g_610340 = (unsigned long long)nl_langinfo(0x10000);
    if (*(g_610340) == 0 || g_610340 == 0)
    {
        g_610340 = ".";
    }
    g_61033c = strlen(g_610340);
    sub_409fa0();
    while (true)
    {
        v12 = sub_4096e0();
        if ((unsigned int)v12 == -1)
        {
            if (g_610398 != 0 && g_610370 != 0)
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40b988, 0x5));
            }
            if (g_610398 == 0 || g_610370 == 0)
            {
                if ((unsigned long long)setlocale(0x6, 0x40dc97) == 0 && g_610348 != 0)
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a23d, 0x5));
                }
                if (g_6103b0 == 0 && g_6103ac == 0 && g_610348 != 0)
                {
                    v25 = g_610370;
                    if (g_610398 == 0 && g_610370 == 0 && g_610380 == 0)
                    {
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b9b8, 0x5));
                    }
                }
                if (g_610348 == 0 || g_6103b0 != 0 || g_6103ac != 0 || g_610398 == 0 && g_610370 == 0 && g_610380 == 0)
                {
                    v25 = g_610370;
                }
                if (g_610370 != 0)
                {
                    v7 = 0;
                    v26 = 0;
                    v27 = 0;
                    while (true)
                    {
                        v28 = (char)*((char *)(v25 + v27));
                        if (*((char *)(v25 + v27)) == 37)
                        {
                            v29 = v27 + 1;
                            if (*((char *)(v25 + v27 + 1)) == 37)
                            {
                                v30 = 2;
                            }
                            else
                            {
                                v31 = 0;
                                v32 = v25 + v29;
                            }
                        }
                        else if (v28 != 0)
                        {
                            v30 = 1;
                        }
                        else
                        {
                            v33 = (unsigned int)sub_407590();
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a252, 0x5));
                        }
                        if (*((char *)(v25 + v27 + 1)) == 37 && *((char *)(v25 + v27)) == 37 || v28 != 0 && *((char *)(v25 + v27)) != 37)
                        {
                            v27 += v30;
                            v26 += 1;
                        }
                    }
                    while (true)
                    {
                        v34 = strspn(v32, 0x40dc9a);
                        v29 += v34;
                        v32 = v25 + v29;
                        v35 = (char)*((char *)(v25 + v29));
                        if (*((char *)(v25 + v29)) == 39)
                        {
                            g_610398 = 1;
                            v29 += 1;
                            v32 = v25 + v29;
                        }
                        else if (v35 != 48)
                        {
                            if (v34 == 0)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v29 += 1;
                            v31 = 1;
                            v32 = v25 + v29;
                        }
                    }
                    v4 = v32;
                    *(v5) = 0;
                    v5 = __errno_location();
                    v36 = strtol(v4, &v7, 0xa);
                    if (*(v5) != 34)
                    {
                        if (v7 != v4 && v36 != 0)
                        {
                            if (g_610348 != 0 && g_610380 != 0 && ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v31 == 0))
                            {
                                v4 = v5;
                                v5 = v36;
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40ba00, 0x5));
                                v36 = v5;
                                v38 = v4;
                            }
                            if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
                            {
                                g_610258 = 0;
                                v39 = 0 - v36;
                                g_610380 = v39;
                            }
                            else if (v31 != 0)
                            {
                                g_610378 = v36;
                            }
                            else
                            {
                                g_610380 = v36;
                            }
                        }
                        v40 = v7 - v25;
                        if (*((char *)v7) != 0)
                        {
                            if (*((char *)0) == 46)
                            {
                                *(v4) = 0;
                                v41 = v25 + v40 + 1;
                                v4 = v38;
                                g_610260 = strtol(v25 + v40 + 1, &v7, 0xa);
                                if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && *(v4) != 34)
                                {
                                    v44 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (char)*(v41) * 2)) & 1);
                                    if ((char)v44 == 0 && v32 != 43)
                                    {
                                        v40 = v7 - v25;
                                    }
                                }
                                if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || *(v4) == 34 || v32 == 43 || (char)v44 != 0)
                                {
                                    v45 = (unsigned int)sub_407590();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40ba28, 0x5));
                                }
                            }
                            if (*((char *)0) != 46 || (char)v44 == 0 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && *(v4) != 34 && v32 != 43)
                            {
                                if (*((char *)(v25 + v40)) == 102)
                                {
                                    v46 = v40 + 1;
                                    v47 = (char)*((char *)(v25 + v46));
                                    if ((char)v47 != 0)
                                    {
                                        while (true)
                                        {
                                            v49 = v46 + 1;
                                            v50 = (char)*((char *)(v25 + v46 + 1));
                                            if (v47 != 37)
                                            {
                                                v47 = v50;
                                            }
                                            else if ((char)v47 == 37)
                                            {
                                                v49 = v46 + 2;
                                                v47 = (char)*((char *)(v25 + v46 + 2));
                                            }
                                            else
                                            {
                                                v51 = (unsigned int)sub_407590();
                                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40ba88, 0x5));
                                            }
                                            if ((char)v47 == 37 || v47 != 37)
                                            {
                                                v46 = v49;
                                                break;
                                            }
                                        }
                                        if (v47 == 0)
                                        {
                                            g_610368 = (unsigned int)sub_407de0();
                                        }
                                        else if (v47 == 0)
                                        {
                                            g_610360 = (unsigned int)sub_407d80();
                                        }
                                    }
                                    if ((char)v47 == 0 && v26 != 0 || v44 != 0 && (char)v47 != 0)
                                    {
                                        g_610368 = (unsigned int)sub_407de0();
                                    }
                                    if (v44 != 0 && ((char)v47 != 0 || v26 != 0))
                                    {
                                        g_610360 = (unsigned int)sub_407d80();
                                    }
                                    if (g_610338 != 0)
                                    {
                                        v5 = (unsigned int)sub_407570();
                                        v4 = g_610380;
                                        sub_407570();
                                        v3 = v47;
                                        v2 = v5;
                                        v1 = (unsigned int)sub_407570();
                                        *((int *)&v0) = (g_610258 != 0? "Right" : "Left");
                                        __fprintf_chk();
                                    }
                                }
                                else
                                {
                                    v48 = (unsigned int)sub_407590();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40ba48, 0x5));
                                }
                            }
                        }
                        else
                        {
                            v42 = (unsigned int)sub_407590();
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a270, 0x5));
                        }
                    }
                    else
                    {
                        v37 = (unsigned int)sub_407590();
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40b9d8, 0x5));
                    }
                }
                if ((*(v5) != 34 && g_610370 != 0 && *((char *)v7) != 0 && ((char)v44 == 0 || *((char *)0) != 46) && (*((char *)0) != 46 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (*((char *)0) != 46 || *(v4) != 34) && (*((char *)0) != 46 || v32 != 43) && *((char *)(v25 + v40)) == 102 || (g_610348 == 0 || g_6103b0 != 0 || g_6103ac != 0 || g_610398 == 0 && g_610370 == 0 && g_610380 == 0) && g_610370 == 0) && g_610398 != 0 && g_6103ac != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40bb20, 0x5));
                }
                if (...)
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bb48, 0x5));
                }
                if (...)
                {
                    if (g_610380 < g_610388)
                    {
                        break;
                    }
                    sub_402bd0();
                }
            }
        }
        else if ((unsigned int)v12 != 132)
        {
            if (v12 > 132)
            {
                if ((unsigned int)v12 != 137)
                {
                    if (v12 <= 137)
                    {
                        if ((unsigned int)v12 == 134)
                        {
                            g_610398 = 1;
                        }
                        else if (v12 >= 134)
                        {
                            if ((unsigned int)v12 == 135)
                            {
                                v15 = sub_407e00();
                                if (v15 == 0 && g_610380 != 0)
                                {
                                    g_610258 = 0;
                                    g_610380 = 0 - g_610380;
                                }
                                if (g_610380 == 0 || v15 != 0)
                                {
                                    v24 = (unsigned int)sub_407590();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a1d7, 0x5));
                                }
                            }
                            if ((unsigned int)v12 == 136)
                            {
                                if (g_610568 == 0)
                                {
                                    sub_404b00();
                                }
                                else
                                {
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a1f0, 0x5));
                                }
                            }
                        }
                        else
                        {
                            *((char *[2])&g_6103a0[0]) = g_610570;
                        }
                    }
                    else
                    {
                        if ((unsigned int)v12 != 139)
                        {
                            if (v12 >= 139)
                            {
                                if ((unsigned int)v12 == 140)
                                {
                                    *((char *[2])&g_610370[0]) = g_610570;
                                }
                                if ((unsigned int)v12 == 141)
                                {
                                    g_6103a8 = *((int *)&((char *)&g_40bfe0)[4 * (unsigned long long)(unsigned int)sub_4053b0()]);
                                }
                            }
                            else
                            {
                                g_610338 = 1;
                            }
                        }
                        else
                        {
                            if (g_610570 != 0)
                            {
                                v14 = sub_408550();
                                v21 = (unsigned int)sub_407590();
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a20e, 0x5));
                            }
                            else
                            {
                                g_610350 = 1;
                            }
                        }
                    }
                }
                if ((v12 < 139 || (unsigned int)v12 == 137) && ((unsigned int)v12 == 137 || (unsigned int)v12 != 139) && ((unsigned int)v12 == 137 || v12 > 137))
                {
                    g_610348 = 1;
                }
            }
            else if ((unsigned int)v12 == 122)
            {
                g_610250 = 0;
            }
            else if (v12 <= 122)
            {
                if ((unsigned int)v12 == -130)
                {
                    sub_404360(); /* do not return */
                }
                if ((unsigned int)v12 == 100)
                {
                    if (g_610570[1] != 0 && g_610570[0] != 0)
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40b958, 0x5));
                    }
                    if (g_610570[1] == 0 || g_610570[0] == 0)
                    {
                        g_610254 = g_610570[0];
                    }
                }
                if ((unsigned int)v12 == -131)
                {
                    sub_407a10();
                    exit(0x0); /* do not return */
                }
            }
            else if ((unsigned int)v12 == 129)
            {
                g_610270 = (unsigned int)sub_4029b0();
            }
            else if (v12 > 129)
            {
                if ((unsigned int)v12 == 130)
                {
                    g_6103ac = *((int *)&((char *)&g_40c090)[4 * (unsigned long long)(unsigned int)sub_4053b0()]);
                }
                if ((unsigned int)v12 == 131)
                {
                    g_610268 = (unsigned int)sub_4029b0();
                }
            }
            else if ((unsigned int)v12 == 128)
            {
                g_6103b0 = *((int *)&((char *)&g_40c0d0)[4 * (unsigned long long)(unsigned int)sub_4053b0()]);
            }
            if (v12 <= 132 && v12 <= 129 && (unsigned int)v12 != 128 && (unsigned int)v12 != 129 && v12 > 122 && (unsigned int)v12 != 122 || v12 <= 132 && v12 <= 122 && (unsigned int)v12 != -130 && (unsigned int)v12 != 100 && (unsigned int)v12 != -131 && (unsigned int)v12 != 122 || v12 <= 132 && v12 > 129 && (unsigned int)v12 != 129 && (unsigned int)v12 != 131 && (unsigned int)v12 != 130 && v12 > 122 && (unsigned int)v12 != 122 || v12 <= 137 && v12 > 132 && (unsigned int)v12 != 137 && v12 >= 134 && (unsigned int)v12 != 135 && (unsigned int)v12 != 136 && (unsigned int)v12 != 134 || v12 > 132 && v12 >= 139 && (unsigned int)v12 != 141 && (unsigned int)v12 != 139 && (unsigned int)v12 != 137 && v12 > 137 && (unsigned int)v12 != 140)
            {
                sub_404360(); /* do not return */
            }
        }
        else
        {
            g_610278 = *((int *)&((char *)&g_40c030)[4 * (unsigned long long)(unsigned int)sub_4053b0()]);
        }
    }
    v56 = 0;
    if (g_610380 == 0)
    {
        v56 = 0;
        v56 = g_610254 == 128;
    }
    *((unsigned long *)&g_610358) = v56;
    if (g_6103a8 != 0)
    {
        g_61025c = 0;
    }
    if (g_6102fc >= (unsigned int)v57)
    {
        v58 = g_610350;
        v6 = 0;
        v7 = 0;
        g_610350 = g_610350 - 1;
        if (v58 != 0)
        {
            while (true)
            {
                v59 = getdelim((unsigned int)&v6, (unsigned int)&v7, g_610250, (unsigned int)stdin);
                if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
                {
                    break;
                }
                fputs_unlocked(v6, stdout);
                v61 = g_610350;
                g_610350 = g_610350 - 1;
                if (v61 == 0)
                {
                    break;
                }
            }
        }
        v62 = 1;
        while (true)
        {
            v63 = getdelim((unsigned int)&v6, (unsigned int)&v7, g_610250, (unsigned int)stdin);
            if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
            {
                break;
            }
            if ((char)*((char *)(v6 + v63 - 1)) == (unsigned int)g_610250)
            {
                *((char *)(v6 + v63 - 1)) = 0;
            }
            v62 &= sub_4041a0();
        }
        if ((*(stdin) & 32) != 0)
        {
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a285, 0x5));
        }
    }
    else
    {
        if (g_610348 != 0 && g_610350 != 0)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bb70, 0x5));
        }
        if (g_610348 == 0 || g_610350 == 0 || (unsigned int)v57 > g_6102fc)
        {
            v62 = 1;
            do
            {
                v62 &= sub_4041a0();
                v65 = g_6102fc + 1;
                g_6102fc = g_6102fc + 1;
            }
            while (v65 < (unsigned int)v57);
        }
    }
    if ((g_610348 == 0 || g_610350 == 0 || g_6102fc >= (unsigned int)v57 || (unsigned int)v57 > g_6102fc) && v62 == 0 && g_6103a8 - 2 > 1)
    {
        v66 = 2;
    }
    if (g_610350 == 0 || g_6102fc >= (unsigned int)v57 || (unsigned int)v57 > g_6102fc)
    {
        if (v62 == 0)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bba0, 0x5));
        }
    }
    if (g_6103a8 - 2 <= 1 || v62 != 0 || g_6102fc < (unsigned int)v57 && (unsigned int)v57 <= g_6102fc && g_610348 != 0 && g_610350 != 0)
    {
        v66 = 0;
    }
    return v66;
}

int sub_407ba0()
{
}

int sub_407400()
{
}

extern int512_t g_6104e0;

int sub_406f20()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6104e0 : v1));
}

int sub_403985() { crash_skku;
}
extern int512_t g_40c3ce;
extern int512_t g_40c3d2;

int sub_405a10()
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
        v3 = sub_4098a0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40c3ce : 4244441);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40c3d2 : 4244437);
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40dc97;
extern char g_610558[2];

int sub_4098a0()
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

    v9 = g_610558;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40dc97 : (unsigned long long)nl_langinfo(0xe));
    if (g_610558 == 0)
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
            v9 = &g_40dc97;
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
                                        v9 = &g_40dc97;
                                        v10 = (tmp_10 == 0? &g_40dc97 : tmp_10);
                                        free(NULL);
                                        sub_409e10();
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
                            v10 = (tmp_10 == 0? &g_40dc97 : tmp_10);
                            sub_409e10();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v38 != 0 || (unsigned int)v61 != -1) && v29 <= 1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v38 != 0 || (unsigned int)v61 != -1) && v62 == -1)
                    {
                        v9 = &g_40dc97;
                    }
                    else if (v38 == 0 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v38 != 0 || (unsigned int)v61 != -1) && v29 <= 1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v38 != 0 || (unsigned int)v61 != -1) && v62 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40dc97;
            free(v17);
        }
        *((char *[2])&g_610558[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40dc97 : tmp_10), v9);
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

int sub_404b00() { crash_skku_timeout;
}
int sub_409720()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409660();
}

extern char g_6103c8;

int sub_405480()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_6103c8 = v1;
    return v2;
}

extern unsigned int g_40c316;
extern unsigned int g_40c331;

int sub_405210()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40c316, 0x5);
    }
    dcgettext(0x0, 0x40c331, 0x5);
    sub_407570();
    sub_407260();
}

int sub_403b7a()
{
    [D] PutI(904:F64x8)[t2,2] = t3
    [D] PutI(968:I8x8)[t2,2] = 0x01
    [D] PutI(968:I8x8)[t2,0] = 0x00
    [D] PutI(904:F64x8)[t12,0] = t21
    [D] PutI(968:I8x8)[t12,0] = 0x01
    [D] PutI(904:F64x8)[t12,1] = t14
    [D] PutI(968:I8x8)[t12,1] = 0x01
}

int sub_407d50()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_407b50();
}

int sub_4058d0()
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
            v7 = sub_405530();
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

int sub_4072d0()
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
    return sub_406d40();
}

int sub_403a1d()
{
    [D] PutI(904:F64x8)[t5,0] = t9
    [D] PutI(968:I8x8)[t5,0] = 0x01
    [D] PutI(904:F64x8)[t5,2] = t2
    [D] PutI(968:I8x8)[t5,2] = 0x01
}

int sub_404a30() { crash_skku;
}
extern unsigned int g_40d4af;
extern unsigned int g_610290;

int sub_407da0()
{
    dcgettext(0x0, 0x40d4af, 0x5);
    error(g_610290, 0x0, "%s");
}

int sub_4096c0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_409660();
}

int sub_407340()
{
}

int sub_407d20()
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
        sub_407da0(); /* do not return */
    }
}

int sub_403bd2()
{
    [D] PutI(904:F64x8)[t2,2] = t3
    [D] PutI(968:I8x8)[t2,2] = 0x01
    [D] PutI(968:I8x8)[t2,0] = 0x00
    [D] PutI(904:F64x8)[t12,0] = t21
    [D] PutI(968:I8x8)[t12,0] = 0x01
    [D] PutI(904:F64x8)[t12,1] = t14
    [D] PutI(968:I8x8)[t12,1] = 0x01
}

int sub_4039e5() { crash_skku;
}
int sub_407570()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4079b0()
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
    return sub_4075b0();
}

extern unsigned int g_40a113;
extern unsigned int g_40a182;
extern unsigned int g_40a738;
extern unsigned int g_40a760;
extern unsigned int g_40a788;
extern unsigned int g_40a7d8;
extern unsigned int g_40a828;
extern unsigned int g_40a868;
extern unsigned int g_40a8b0;
extern unsigned int g_40a928;
extern unsigned int g_40a9a0;
extern unsigned int g_40aa18;
extern unsigned int g_40aa68;
extern unsigned int g_40ab08;
extern unsigned int g_40ab90;
extern unsigned int g_40ac18;
extern unsigned int g_40ad60;
extern unsigned int g_40ae00;
extern unsigned int g_40ae80;
extern unsigned int g_40aed0;
extern unsigned int g_40af18;
extern unsigned int g_40af58;
extern unsigned int g_40af88;
extern unsigned int g_40afc0;
extern unsigned int g_40b008;
extern unsigned int g_40b0b0;
extern unsigned int g_40b130;
extern unsigned int g_40b1b0;
extern unsigned int g_40b230;
extern unsigned int g_40b348;
extern unsigned int g_40b4c0;
extern unsigned int g_40b660;
extern unsigned int g_40b848;
extern unsigned int g_40b890;
extern unsigned int g_40b8b0;
extern unsigned long long g_6103d8;
extern unsigned long long stdout;

int sub_404360()
{
    unsigned long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned long v2;  // [bp-0xa8]
    unsigned long v3;  // [bp-0xa0]
    unsigned long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long v6;  // [bp-0x88]
    unsigned long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x70]
    unsigned long v10;  // [bp-0x68]
    unsigned long v11;  // [bp-0x60]
    unsigned long v12;  // [bp-0x58]
    unsigned long v13;  // [bp-0x50]
    unsigned long v14;  // [bp-0x48]
    unsigned long v15;  // [bp-0x40]
    unsigned long v16;  // [bp-0x38]
    unsigned long v17;  // [bp-0x30]
    unsigned long long v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x20]
    unsigned long v20;  // [bp-0x18]
    unsigned long v21;  // [bp-0x8]
    unsigned long v23;  // r12
    unsigned long v24;  // rdi
    unsigned long v26;  // rbx
    unsigned long long v56;  // rbx
    unsigned long long *v58;  // rax
    char *v59;  // rdi
    char *v60;  // rsi
    unsigned long long v61;  // rcx
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep2
    unsigned long v64;  // d
    char *v68;  // rax
    char *v69;  // rax
    unsigned long long v70;  // rax

    v21 = v23;
    v20 = v26;
    if ((unsigned int)v24 != 0)
    {
        dcgettext(0x0, 0x40a738, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a760, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a788, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a7d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a828, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a868, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a8b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a928, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a9a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40aa18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40aa68, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ab08, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ab90, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ac18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ad60, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae00, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae80, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40aed0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40af18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40af58, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40af88, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a113, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40afc0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b008, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b0b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b130, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b1b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b230, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b348, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b4c0, 0x5));
        v56 = g_6103d8;
        v5 = 5;
        v4 = v56;
        v3 = v56;
        v2 = v56;
        v1 = v56;
        v0 = v56;
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b660, 0x5));
        v6 = "[";
        v7 = "test invocation";
        v8 = "coreutils";
        v9 = "Multi-call";
        v10 = "sha224sum";
        v11 = "sha2 utilities";
        v12 = "sha256sum";
        v13 = "sha2 utilities";
        v14 = "sha384sum";
        v15 = "sha2 utilities";
        v16 = "sha512sum";
        v17 = "sha2 utilities";
        v18 = 0;
        v19 = 0;
        v58 = &v6;
        while (true)
        {
            v58 = &v8;
            v59 = v8;
            if (v8 == 0)
            {
                break;
            }
            v60 = "numfmt";
            v61 = 7;
            if ((v62 > v63) - 0 - (v62 < v63) == 0)
            {
                break;
            }
            while (v61 != 0)
            {
                v61 -= 1;
                v62 = *(v60);
                v63 = *(v59);
                v59 = &v59[v64];
                v60 = &v60[v64];
                break;
            }
        }
        if (v9 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a182, 0x5));
            v69 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a182, 0x5));
            v68 = setlocale(0x5, 0x0);
            if (v68 != 0)
            {
                v70 = strncmp(v68, "en_", 0x3);
            }
            if (v70 == 0 || v68 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b890, 0x5));
            }
        }
        if ((v9 == 0 || strncmp(v69, "en_", 0x3) != 0) && (v9 == 0 || v69 != 0) && (v70 != 0 || v9 != 0) && (v68 != 0 || v9 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b848, 0x5));
        }
        if (v9 != 0 || v70 != 0 && v68 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b890, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b8b0, 0x5));
    }
    exit(v24); /* do not return */
}

int sub_4097e0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_409e10();
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

int sub_409840()
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

int sub_407240()
{
}

extern uint128_t g_6104e0;
extern uint128_t g_6104f0;
extern uint128_t g_610500;
extern unsigned long long g_610510;

int sub_40735f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_610510;
    *((uint128_t *)&v0) = g_6104e0;
    *((uint128_t *)&v1) = g_6104f0;
    *((uint128_t *)&v2) = g_610500;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_406d40();
}

int sub_407260()
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
    return sub_406d40();
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
extern int512_t g_6103e0;

int sub_406d40()
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
                v16 = sub_407bb0();
                g_6102d8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_407bb0();
                v17 = v15;
                g_6102d8 = v15;
                *(v15) = g_6102e0;
            }
            memset(&v17[(long long)(int)g_6102f0], 0x0, (int)((unsigned int)v13 + 1 - g_6102f0) * 16);
            g_6102f0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_407da0(); /* do not return */
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
        v21 = sub_405b10();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6357984)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_407b50();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_405b10();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned int g_40d12b;
extern unsigned int g_40d12f;
extern unsigned int g_40d13f;
extern unsigned int g_40d156;
extern unsigned int g_40d1b8;
extern unsigned int g_40d288;
extern unsigned int g_40d2a8;
extern unsigned int g_40d2d0;
extern unsigned int g_40d2f8;
extern unsigned int g_40d328;

int sub_4075b0()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d1b8, 0x5), v14);
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
        dcgettext(0x0, 0x40d288, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40d2a8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40d2d0, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40d2f8, 0x5);
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
        dcgettext(0x0, 0x40d328, 0x5);
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

int sub_406ee0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_407d50();
}

extern int512_t g_610248;

int sub_409fa0()
{
}

int sub_405420()
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

int sub_402af0() { crash_skku;
}
extern unsigned int g_40a017;

int sub_4029b0()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    void *v3;  // rdi
    unsigned long v4;  // rax
    unsigned long v5;  // rbx
    unsigned long v6;  // rbx
    void *v7;  // rax
    unsigned long long v9;  // r12
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx

    v4 = strlen(v3);
    v0 = 0;
    if (v5 != 0)
    {
        v5 = v4;
        if ((unsigned int)(char)*(&((char *)v3)[v4 + -1]) - 48 > 9)
        {
            v7 = sub_407b50();
            v0 = v5 - 1 + v7;
            if (*((char *)v0) == 105 && v6 != 1 && (unsigned int)(char)*((char *)(v0 - 1)) - 48 > 9)
            {
                *((char *)v0) = 0;
                v9 = memcpy(v7, v3, v6);
            }
            if (v6 == 1 || (unsigned int)(char)*((char *)(v0 - 1)) - 48 <= 9 || *((char *)v0) != 105)
            {
                v0 += 2;
                *((short *)(v0 + 1)) = 66;
                v9 = v0;
            }
        }
    }
    if (v5 == 0 || (unsigned int)(char)*(&((char *)v3)[v4 + -1]) - 48 <= 9)
    {
        v9 = 0;
    }
    v10 = sub_408550();
    if (v10 == 0 && *((char *)v0) == 0 && v1 != 0)
    {
        free(v9);
        return v1;
    }
    if (v1 == 0 || *((char *)v0) != 0 || v10 != 0)
    {
        free(v9);
        v11 = (unsigned int)sub_407590();
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a017, 0x5));
    }
}

int sub_403d57()
{
    [D] PutI(904:F64x8)[t8,0] = t12
    [D] PutI(968:I8x8)[t8,0] = 0x01
    [D] PutI(904:F64x8)[t8,2] = t5
    [D] PutI(968:I8x8)[t8,2] = 0x01
}

int sub_4036dc()
{
}

extern char g_610250;
extern unsigned int g_610254;
extern unsigned long long stdout[7];

int sub_4041a0()
{
    unsigned int v0;  // [bp-0x3c]
    void tmp_19;  // tmp #19
    unsigned long long v2;  // rdi
    char *v3;  // r15
    unsigned long long v4;  // r14
    unsigned int v5;  // r12d
    unsigned long v6;  // rsi
    char *v7;  // rax
    char *v8;  // rbx
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rdx
    unsigned long long|unsigned int v12;  // rax
    char *v14;  // rdx
    char *v16;  // rax
    unsigned long long v17;  // rax

    v3 = v2;
    v4 = 0;
    v5 = 1;
    v12 = g_610254;
    v0 = v6;
    while (true)
    {
        v4 += 1;
        v9 = *(v3);
        if (v12 == 128)
        {
            if (v9 == 0)
            {
                break;
            }
            v8 = v3;
            v7 = *((long long *)(unsigned long long)__ctype_b_loc());
            while (true)
            {
                if ((v7[2 * v9] & 1) == 0 && v9 != 10)
                {
                    v11 = *(v8);
                    if (*(v8) == 0)
                    {
                        break;
                    }
                    while (true)
                    {
                        if ((v7[2 * v11] & 1) == 0 && v11 != 10)
                        {
                            v8 = &v8[1];
                            v11 = *(v8);
                        }
                        if (v11 == 10 || (v7[2 * v11] & 1) != 0)
                        {
                            v9 = *(v8);
                        }
                    }
                    if (v11 == 10 || (v7[2 * v11] & 1) != 0)
                    {
                        if (v9 == 0)
                        {
                            break;
                        }
                    }
                }
                if (v9 == 10 || (v7[2 * v9] & 1) != 0)
                {
                    v8 = &v8[1];
                    v9 = *(v8);
                }
            }
        }
        else if ((unsigned int)v9 != v12)
        {
            if (v9 == 0)
            {
                break;
            }
            v8 = v3;
            do
            {
                v8 = &v8[1];
                v10 = *(v8);
            }
            while ((char)v10 != 0 && (unsigned int)v10 != g_610254);
            if ((char)v10 != 0)
            {
                *(v8) = 0;
                v12 = sub_402c00();
                tmp_19 = v12;
                v12 = g_610254;
                v5 = ((tmp_19 & 255) == 0? 0 : (unsigned int)r12<8>);
                v14 = stdout[5];
            }
        }
        else
        {
            v8 = v3;
        }
        *(v8) = 0;
        v12 = sub_402c00();
        tmp_19 = v12;
        v12 = g_610254;
        v5 = ((tmp_19 & 255) == 0? 0 : (unsigned int)r12<8>);
        v14 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v14) = (g_610254 != 128? g_610254 : 32);
        }
        else
        {
            __overflow();
            v12 = g_610254;
        }
        v3 = &v8[1];
    }
    v16 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v16) = g_610250;
    }
    else
    {
        __overflow();
    }
    v17 = (unsigned int)((char)sub_402c00() == 0? 0 : (unsigned int)r12<8>);
    return v17;
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

int sub_409ed0()
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

int sub_4073e0()
{
}

int sub_4071f0()
{
}

int sub_403c25() { crash_skku;
}
int sub_403bfd() { crash_skku;
}
int sub_403a15()
{
    [D] PutI(904:F64x8)[t4,2] = t5
    [D] PutI(968:I8x8)[t4,2] = 0x01
    [D] PutI(968:I8x8)[t4,0] = 0x00
    [D] PutI(904:F64x8)[t14,0] = t23
    [D] PutI(968:I8x8)[t14,0] = 0x01
    [D] PutI(904:F64x8)[t14,1] = t16
    [D] PutI(968:I8x8)[t14,1] = 0x01
    [D] PutI(904:F64x8)[t14,0] = t41
    [D] PutI(968:I8x8)[t14,0] = 0x01
    [D] PutI(904:F64x8)[t14,2] = t34
    [D] PutI(968:I8x8)[t14,2] = 0x01
}

int sub_407bf0()
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
        sub_407da0(); /* do not return */
    }
}

int sub_403b6f() { crash_skku;
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

extern unsigned int g_40dc38;
extern unsigned int g_40dc7c;

int sub_409090()
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
    unsigned int|unsigned long v17;  // eax
    unsigned long long v18;  // rax
    unsigned long long|char [2] v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9d
    unsigned long long *|char *[3] v26;  // rax
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
    unsigned long long|unsigned long long * v42;  // rdx
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
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13<8>);
        }
        if (v19[0] == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || ((char)(v18 - 43) & 253) == 0 && v8->field_20 == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        v5 = v5;
                        sub_408990();
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
                v42 = v26;
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
                    v39 = v0->field_30;
                    v40 = (unsigned int)v26 + 1;
                    v0->field_0 = (unsigned int)v42;
                    if (v42 != v39)
                    {
                        if ((unsigned int)v42 != v8->field_30)
                        {
                            sub_408990();
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_408a70();
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
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40dc38, 0x5);
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
            dcgettext(0x0, 0x40dc7c, 0x5);
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
                    dcgettext(0x0, 0x40dc38, 0x5);
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
        v2 = "-W";
        v1 = v49;
        v0 = v0;
    }
    if (...)
    {
        v45 = (unsigned int)sub_408a70();
    }
    v63 = v45;
    return v63;
}

int sub_4073d0()
{
}

int sub_405b10()
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
    unsigned long long v23;  // [bp-0x40]
    unsigned int *v24;  // [bp+0x8]
    unsigned long long v25;  // [bp+0x10]
    unsigned long long v26;  // [bp+0x18]
    unsigned long long v27;  // rdi
    unsigned long long v28;  // r15
    unsigned long v29;  // r8
    unsigned long long v30;  // rcx
    unsigned long v31;  // r9
    unsigned long long|unsigned long v32;  // r10
    unsigned long long v33;  // rbp
    unsigned long long v34;  // r13
    unsigned long long v35;  // r13
    unsigned long long v36;  // r8
    unsigned long long v37;  // r9
    unsigned long long|unsigned long v38;  // r11
    unsigned long long|unsigned long v39;  // rbp
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    char v42;  // al
    unsigned long v43;  // rdx
    unsigned long long v44;  // rcx
    unsigned long long|unsigned short|unsigned long v45;  // rax
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r13
    unsigned long long v48;  // r13
    unsigned long long v49;  // r13
    char v50;  // r13b
    unsigned long long v51;  // r13
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rbx
    unsigned long long v54;  // r13
    unsigned long long v55;  // r15
    unsigned long long v56;  // rbp
    unsigned long long v57;  // r14
    char *v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v61;  // r13
    unsigned long v62;  // r13
    unsigned long long v63;  // rcx
    char v64;  // al
    char v65;  // al
    unsigned int v66;  // eax
    char v67;  // al
    unsigned int v69;  // eax
    char v70;  // al
    unsigned long v71;  // rdx
    unsigned long long v72;  // rax
    char v73;  // al
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rbx
    unsigned long long|unsigned int|unsigned long v76;  // rsi
    unsigned long long|unsigned int|char|unsigned long v77;  // r13
    unsigned long long v78;  // r14
    unsigned long long|unsigned long v79;  // r12
    unsigned int v80;  // r13d
    unsigned long long v81;  // r11
    char v82;  // dl
    char|unsigned long v83;  // rax
    unsigned long long v84;  // cc_dep1
    char|unsigned long v85;  // dl
    unsigned long long v86;  // rax
    unsigned long long v87;  // rax
    unsigned long long|char|unsigned long v88;  // rdx
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax

    v28 = v27;
    v78 = v76;
    v77 = v29;
    v7 = v88;
    v4 = v30;
    v16 = v31;
    v15 = __ctype_get_mb_cur_max();
    v17 = ((unsigned int)v31 & 2) != 0;
    switch ((unsigned int)v29)
    {
    case 0:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 0;
        v8 = 0;
        v13 = 0;
    case 1:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v77 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 0;
        v8 = 1;
        v13 = "'";
    case 2:
        if (((char)v31 & 2) == 0)
        {
            v4 = 0;
            if (v76 == 0)
            {
                v6 = 1;
                v32 = 0;
                v75 = 1;
                v77 = 2;
                v14 = 0;
                v18 = 0;
                v17 = 0;
                v8 = 1;
                v13 = "'";
            }
            else
            {
                v83 = 0;
                v6 = 1;
                v14 = 0;
            }
        }
        else
        {
            v6 = 1;
            v32 = 0;
            v75 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 0;
            v8 = 1;
            v13 = "'";
        }
    case 3:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v77 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "'";
    case 4:
        if (((char)v31 & 2) == 0)
        {
            v4 = 1;
        }
    case 5:
        if (((char)v31 & 2) == 0)
        {
            if (v76 != 0)
            {
                *((char *)v27) = 34;
                v32 = 0;
                v6 = 1;
                v18 = 0;
                v14 = 0;
            }
            else
            {
                v14 = 0;
                v32 = 0;
                v6 = 1;
                v18 = 0;
            }
            v17 = 0;
            v75 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
        else
        {
            v6 = 1;
            v32 = 0;
            v75 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
    case 6:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v77 = 5;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "\"";
    case 7:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 1;
        v8 = 0;
        v13 = 0;
    case 8: case 9: case 10:
        if (v29 != 10)
        {
            v4 = v4;
            v25 = (unsigned int)sub_405a10();
            v26 = (unsigned int)sub_405a10();
        }
        v75 = 0;
        if (((char)v31 & 2) == 0)
        {
            v77 = (char)*((char *)v25);
            if (*((char *)v25) != 0)
            {
                do
                {
                    if (v76 > v75)
                    {
                        *((unsigned long long *)(v27 + v75)) = v77;
                    }
                    v75 += 1;
                    v77 = (char)*((char *)(v25 + v75));
                }
                while ((char)v77 != 0);
            }
        }
        v5 = v81;
        v6 = 1;
        v8 = strlen(v26);
        v18 = 0;
        v13 = v26;
        v14 = 0;
        v4 = 1;
    default:
        abort(); /* do not return */
    }
    v81 = v4;
    while (true)
    {
        v37 = v81;
        v79 = 0;
        v38 = v77;
        while (true)
        {
            v77 = v37 != v79;
            if (v37 == -1)
            {
                v77 = *((char *)(v7 + v79)) != 0;
            }
            if (v77 != 0)
            {
                v36 = v7 + v79;
                v5 = (unsigned int)v38 != 2 & v4;
                if (((unsigned int)v38 != 2 & v4) != 0)
                {
                    v77 = v8;
                    if (v8 != 0)
                    {
                        v33 = v79 + v77;
                        if (v37 == -1 && v77 > 1)
                        {
                            v11 = v38;
                            v10 = v32;
                            v9 = v36;
                            v37 = strlen(v7);
                        }
                        if (v33 <= v37)
                        {
                            v12 = v38;
                            v11 = v37;
                            v10 = v32;
                            v9 = v36;
                            v77 = memcmp(v36, v13, v8);
                            v36 = v9;
                            v32 = (char)v10;
                            v37 = v11;
                            v38 = v12;
                            if (v17 == 0 && v77 == 0)
                            {
                                v39 = (char)*((char *)v36);
                                switch (*((char *)v36))
                                {
                                case 0:
                                    v88 = (unsigned int)v38 == 2;
                                    v77 = (unsigned int)(0 ^ 1);
                                    v77 = (char)(0 ^ 1) & (unsigned int)v38 == 2;
                                    if (((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) != 0)
                                    {
                                        if (v76 > v75)
                                        {
                                            *((char *)(v27 + v75)) = 39;
                                        }
                                        if (v76 > v75 + 1)
                                        {
                                            *((char *)(v27 + v75 + 1)) = 36;
                                        }
                                        if (v76 > v75 + 2)
                                        {
                                            *((char *)(v27 + v75 + 2)) = 39;
                                        }
                                        v46 = v75 + 3;
                                        v75 += 4;
                                        v32 = rax<8>;
                                        v77 = 0;
                                        v39 = 48;
                                    }
                                    else
                                    {
                                        v46 = v75;
                                        v77 = 0;
                                        v75 = v46 + 1;
                                        v77 = v77;
                                        v39 = 48;
                                        v77 = 0;
                                        v39 = 48;
                                        if (1 < v37)
                                        {
                                            v9 = *((char *)(v7 + 0 + 1));
                                            if (((unsigned int)(char)*((char *)(v7 + 0 + 1)) - 48 & 255) <= 9)
                                            {
                                                if (v76 > v75)
                                                {
                                                    *((char *)(v27 + v75)) = 48;
                                                }
                                                if (v76 > v46 + 2)
                                                {
                                                    *((char *)(v27 + v46 + 2)) = 48;
                                                }
                                                v75 = v46 + 3;
                                                v39 = 48;
                                            }
                                        }
                                    }
                                    if ((v76 > v75 || ((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) != 0) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) == 0 || v76 > v75 + 3))
                                    {
                                        *((char *)(v27 + v46)) = 92;
                                        v32 = v77;
                                    }
                                case 7:
                                    v39 = 97;
                                case 8:
                                    v88 = 0;
                                    v77 = 0;
                                    v39 = 98;
                                case 13:
                                    v39 = 13;
                                    v44 = 114;
                                    v88 = (unsigned int)v38 == 2;
                                case 32:
                                    v40 = v5;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v88 = 0;
                                case 35: case 126:
                                    v41 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v40 = v5;
                                case 92:
                                    v43 = v4;
                                    v39 = 92;
                                    v44 = 92;
                                    v88 = v4 & v17 & v8 != 0;
                                    if ((v4 & v17 & v8 != 0) != 0)
                                    {
                                        v79 = 1;
                                        v45 = 0;
                                        v77 = 0;
                                    }
                                }
                            }
                        }
                    }
                    if (v8 == 0 || v33 > v37 || v77 != 0)
                    {
                        v39 = (char)*((char *)v36);
                        switch (*((char *)v36))
                        {
                        case 0:
                            if (v17 == 0)
                            {
                                v5 = 0;
                            }
                            else
                            {
                                v4 = (unsigned int)v38 == 2;
                            }
                        case 7:
                            v39 = 97;
                            break;
                            if (v17 == 0)
                            {
                                v77 = 0;
                                if (v78 > v75)
                                {
                                    *((char *)(v28 + v75)) = 92;
                                }
                                v75 += 1;
                                v79 += 1;
                            }
                            else
                            {
                                v86 = 0;
                                *((unsigned long long *)&v4) = v4 & v86;
                            }
                        case 8:
                            v39 = 98;
                        case 9:
                            v39 = 116;
                        case 10:
                            v39 = 110;
                            v88 = 0;
                            v77 = 0;
                        case 11:
                            v39 = 118;
                            break;
                        case 12:
                            v39 = 102;
                            break;
                        case 13:
                            v5 = 0;
                        case 32:
                            v40 = 0;
                            v39 = 32;
                            v47 = v5;
                            v5 = v40;
                            v77 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v41 = 0;
                            v48 = v5;
                            v88 = 0;
                            v5 = v41;
                            v77 = ((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1;
                            v77 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1) | v17;
                            if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1) != 0)
                            {
                                v77 = 0;
                                v71 = (unsigned int)((unsigned long long)v24[v39 % 32] >> ((char)v39 & 31)) & 1;
                                v88 = (unsigned int)v38 == 2;
                            }
                            if (v17 == 0)
                            {
                                v88 = (unsigned int)v38 == 2;
                                v79 += 1;
                                v45 = (v77 ^ 1) & (unsigned int)v32;
                                if (v45 != 0)
                                {
                                    if (v78 > v75)
                                    {
                                        *((char *)(v28 + v75)) = 39;
                                    }
                                    if (v78 > v75 + 1)
                                    {
                                        *((char *)(v28 + v75 + 1)) = 39;
                                    }
                                    v75 += 2;
                                    v32 = 0;
                                }
                                v72 = (unsigned int)v32 ^ 1;
                                v73 = (char)((unsigned int)v32 ^ 1) & v88;
                                if (((char)((unsigned int)v32 ^ 1) & v88) != 0)
                                {
                                    if (v78 > v75)
                                    {
                                        *((char *)(v28 + v75)) = 39;
                                    }
                                    if (v75 + 1 < v78)
                                    {
                                        *((char *)(v28 + v75 + 1)) = 36;
                                    }
                                    v74 = v75 + 2;
                                    if (v75 + 2 < v78)
                                    {
                                        *((char *)(v28 + v75 + 2)) = 39;
                                    }
                                    v75 += 3;
                                    v32 = rax<8>;
                                }
                            }
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v40 = 0;
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
                    v39 = (char)*((char *)v36);
                    switch (*((char *)v36))
                    {
                    case 0:
                        if (v4 == 0)
                        {
                            v5 = 0;
                            v88 = (unsigned int)v38 == 2;
                            v35 = 0;
                            v39 = 0;
                            break;
                            v79 += 1;
                        }
                    case 7:
                        v39 = 7;
                        v44 = 97;
                        v88 = (unsigned int)v38 == 2;
                        if (v4 == 0)
                        {
                            v54 = 0;
                            break;
                        }
                        else
                        {
                            v39 = v44;
                            v77 = 0;
                        }
                    case 8:
                        v39 = 8;
                        v44 = 98;
                        v88 = (unsigned int)v38 == 2;
                    case 9:
                        v39 = 9;
                        v44 = 116;
                    case 10:
                        v39 = 10;
                        v44 = 110;
                        v88 = (unsigned int)v38 == 2;
                        v5 = v17 & (unsigned int)v38 == 2;
                    case 11:
                        v39 = 11;
                        v44 = 118;
                        v88 = (unsigned int)v38 == 2;
                    case 12:
                        v39 = 12;
                        v44 = 102;
                        v88 = (unsigned int)v38 == 2;
                    case 13:
                        v39 = 13;
                        v44 = 114;
                    case 32:
                        v39 = 32;
                        v88 = (unsigned int)v38 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v88 = (unsigned int)v38 == 2;
                        v34 = 0;
                    case 35: case 126:
                        v88 = (unsigned int)v38 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v88 = (unsigned int)v38 == 2;
                        break;
                    case 39:
                        if ((unsigned int)v38 == 2)
                        {
                            if (v76 != 0)
                            {
                                v52 = 0;
                            }
                            if (v76 == 0 || v14 != 0)
                            {
                                if (v76 > v75)
                                {
                                    *((char *)(v27 + v75)) = 39;
                                }
                                if (v76 > v75 + 1)
                                {
                                    *((char *)(v27 + v75 + 1)) = 92;
                                }
                                if (v76 > v75 + 2)
                                {
                                    v52 = v76;
                                    *((char *)(v27 + v75 + 2)) = 39;
                                    v78 = v14;
                                }
                                else
                                {
                                    v52 = v76;
                                    v78 = v14;
                                }
                            }
                            v18 = v77;
                            v75 += 3;
                            v77 = 0;
                            v32 = 0;
                            v14 = v78;
                            v39 = 39;
                            v78 = v52;
                        }
                        else
                        {
                            v18 = v77;
                            v88 = 0;
                            v39 = 39;
                            break;
                        }
                    case 63:
                        if ((unsigned int)v38 != 2)
                        {
                            v39 = 63;
                            v88 = (unsigned int)v38 == 2;
                            v51 = 0;
                            break;
                            v76 = v7;
                            v39 = (char)*((char *)(v76 + 2));
                            v76 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v88 = 0;
                            v61 = 0;
                            v39 = 63;
                            break;
                            if (v78 > v75)
                            {
                                *((char *)(v27 + v75)) = 63;
                            }
                            if (v78 > v75 + 1)
                            {
                                *((char *)(v27 + v75 + 1)) = 34;
                            }
                            if (v78 > v75 + 2)
                            {
                                *((char *)(v27 + v75 + 2)) = 34;
                            }
                            if (v78 > v75 + 3)
                            {
                                *((char *)(v27 + v75 + 3)) = 63;
                            }
                            v75 += 4;
                            v88 = 0;
                            v77 = 0;
                            v79 = 2;
                            v77 = v77;
                            v77 = 0;
                        }
                        else
                        {
                            v77 = 0;
                            v77 = 0;
                            v39 = 63;
                        }
                    case 92:
                        if ((unsigned int)v38 == 2)
                        {
                            v79 += 1;
                            v45 = v32;
                            v77 = 0;
                            v39 = 92;
                        }
                    case 123: case 125:
                        v42 = v37 != 1;
                        if (v37 == -1)
                        {
                            v42 = *((char *)(v7 + 1)) != 0;
                        }
                        v88 = (unsigned int)v38 == 2;
                    }
                }
            }
            else
            {
                v80 = v38;
                v81 = v37;
                v82 = v80 == 2;
                if ((v80 == 2 & v17) == 0 || v75 != 0)
                {
                    v83 = (unsigned int)v17 ^ 1;
                    v84 = v82 & (char)((unsigned int)v17 ^ 1);
                    v85 = v82 & (char)((unsigned int)v17 ^ 1);
                    if ((char)v84 == 0)
                    {
                        v85 = v83;
                    }
                    else if (v18 != 0)
                    {
                        if (v6 == 0)
                        {
                            v83 = v78 == 0 & v14 != 0;
                            if ((v78 == 0 & v14 != 0) == 0)
                            {
                                v85 = v18;
                            }
                        }
                        else
                        {
                            v3 = v26;
                            v2 = v25;
                            v1 = v24;
                            v75 = (unsigned int)sub_405b10();
                        }
                    }
                }
            }
            if (v6 == 0 && v77 == 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && (v78 == 0 & v14 != 0) == 0 || v77 == 0 && (char)v84 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && v18 == 0 || (char)v84 == 0 && v77 == 0 && ((v80 == 2 & v17) == 0 || v75 != 0))
            {
                v87 = v13;
                if (v13 != 0 && v85 != 0)
                {
                    v89 = (char)*((char *)v87);
                    if (*((char *)v87) != 0)
                    {
                        v90 = v87 - v75;
                        do
                        {
                            if (v78 > v75)
                            {
                                *((unsigned long long *)(v28 + v75)) = v89;
                            }
                            v75 += 1;
                            v89 = (char)*((char *)(v90 + v75));
                        }
                        while ((char)v89 != 0);
                    }
                }
                if (v78 > v75)
                {
                    *((char *)(v28 + v75)) = 0;
                }
            }
            if (v15 == 1)
            {
                v11 = v38;
                v10 = v37;
                v9 = v32;
                v45 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v39 * 2));
                tmp_38 = v45 & 0x4000;
                v45 &= 0x4000;
                v50 = (tmp_38 & 65535) != 0;
                v88 = (tmp_38 & 65535) == 0 & v4;
                if (v88 != 0)
                {
                    v88 = v4;
                    v77 = 0;
                }
            }
            else
            {
                v23 = 0;
                if (v37 == -1)
                {
                    v11 = v38;
                    v10 = v32;
                    v9 = v36;
                    v37 = strlen(v7);
                }
                v21 = v75;
                v22 = v36;
                v53 = 0;
                v19 = v32;
                *((unsigned long long *)&v20) = v39;
                v11 = v28;
                v12 = v78;
                v9 = v37;
                *((unsigned long *)&v10) = v38;
                do
                {
                    v55 = v79 + v53;
                    v56 = v7 + v79 + v53;
                    v45 = sub_409760();
                    v57 = v45;
                    if (v45 != -2 && v45 != 0 && v45 != -1)
                    {
                        if (v10 == 2 && v17 != 0 && v45 != 1)
                        {
                            v58 = v7 + v76 + 1;
                            v76 = v7 + v57 + v76;
                            while (true)
                            {
                                v59 = (unsigned int)*(v58) - 91;
                                if ((8589934635 & 1 << (v59 & 63)) == 0 || ((unsigned int)*(v58) - 91 & 255) > 33)
                                {
                                    v58 = &v58[1];
                                    if (v76 == v58)
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((8589934635 & 1 << (v59 & 63)) == 0 || ((unsigned int)*(v58) - 91 & 255) > 33)
                            {
                                v77 = (unsigned int)(iswprint() == 0? 0 : (unsigned int)r13<8>);
                                v53 += v57;
                                v45 = mbsinit((unsigned int)&v23);
                            }
                        }
                        v77 = (unsigned int)(iswprint() == 0? 0 : (unsigned int)r13<8>);
                        v53 += v57;
                        v45 = mbsinit((unsigned int)&v23);
                    }
                    if (v45 == -1)
                    {
                        v27 = v53;
                        v39 = v20;
                        v75 = v21;
                        v77 = 0;
                        v32 = (char)v19;
                        v28 = v11;
                        v78 = v12;
                        v37 = v9;
                        v38 = v10;
                        v88 = v4;
                    }
                    if (v45 == -2)
                    {
                        v37 = v9;
                        v76 = v55;
                        v45 = v53;
                        v27 = v53;
                        v32 = (char)v19;
                        v39 = v20;
                        v75 = v21;
                        v28 = v11;
                        v78 = v12;
                        v38 = v10;
                        if (v76 < v9 && *((char *)v56) != 0)
                        {
                            do
                            {
                                v45 += 1;
                            }
                            while (v45 < v9 && *((char *)(v22 + v45)) != 0);
                            v27 = v45;
                        }
                        v88 = v4;
                        v77 = 0;
                    }
                    if (v45 == 0 || v45 != -2 && v45 != -1 && (unsigned int)v45 != 0)
                    {
                        v27 = v53;
                        v39 = v20;
                        v75 = v21;
                        v32 = (char)v19;
                        v28 = v11;
                        v88 = (unsigned int)v77 ^ 1;
                        v78 = v12;
                        v37 = v9;
                        v38 = v10;
                        v88 = (char)((unsigned int)v77 ^ 1) & v4;
                    }
                }
                while (v27 <= 1);
                if (v45 == -2 || v45 == 0 || v45 == -1 || (unsigned int)v45 != 0)
                {
                    v9 = v77;
                    v76 = 0;
                    v62 = v17;
                    v63 = v27 + v79;
                    v27 = v5;
                }
            }
            if (false)
            {
                v5 = v41;
                v49 = 0;
                v86 = v88;
            }
            if (v15 != 1 || v88 != 0)
            {
                v9 = v77;
                v76 = 0;
                v62 = v17;
                v63 = v27 + v79;
                v27 = v5;
                while (true)
                {
                    if (v88 != 0)
                    {
                        v64 = (unsigned int)v38 == 2;
                        if (v62 == 0)
                        {
                            v76 = (unsigned int)v32 ^ 1;
                            v65 = v4 & (char)((unsigned int)v32 ^ 1);
                            if ((v4 & (char)((unsigned int)v32 ^ 1)) != 0)
                            {
                                if (v78 > v75)
                                {
                                    *((char *)(v28 + v75)) = 39;
                                }
                                if (v78 > v75 + 1)
                                {
                                    *((char *)(v28 + v75 + 1)) = 36;
                                }
                                v76 = v75 + 2;
                                if (v78 > v75 + 2)
                                {
                                    *((char *)(v28 + v75 + 2)) = 39;
                                }
                                v75 += 3;
                                v32 = v45;
                            }
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 92;
                            }
                            if (v78 > v75 + 1)
                            {
                                v66 = v39;
                                v67 = (char)v39 % 64;
                                *((unsigned long long *)(v28 + v75 + 1)) = (unsigned long long)(unsigned int)rax<4> + 48;
                            }
                            v45 = v75 + 2;
                            if (v78 > v75 + 2)
                            {
                                v69 = v39;
                                v70 = (char)v39 % 8;
                                v45 = (unsigned int)((rax<4> & 7) + 48);
                                *((unsigned long long *)(v28 + v75 + 2)) = v45;
                            }
                            v79 += 1;
                            v75 += 3;
                            v39 = ((unsigned int)v39 & 7) + 48;
                            if (v79 < v63)
                            {
                                v76 = v88;
                            }
                            else
                            {
                                v77 = (char)v9;
                            }
                        }
                        else
                        {
                            v4 = v64;
                        }
                    }
                    else
                    {
                        v45 = (v76 ^ 1) & (unsigned int)v32;
                        if (v27 != 0)
                        {
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 92;
                            }
                            v75 += 1;
                        }
                        v79 += 1;
                        if (v79 >= v63)
                        {
                            v77 = (char)v9;
                        }
                        else if (v45 != 0)
                        {
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 39;
                            }
                            v45 = v75 + 1;
                            if (v78 > v75 + 1)
                            {
                                *((char *)(v28 + v75 + 1)) = 39;
                            }
                            v75 += 2;
                            v27 = 0;
                            v32 = 0;
                        }
                        else
                        {
                            v27 = 0;
                        }
                    }
                    if ((v79 < v63 || v88 == 0) && (v62 == 0 || v88 == 0) && (v79 < v63 || v88 != 0))
                    {
                        if (v78 > v75)
                        {
                            *((unsigned long long *)(v28 + v75)) = v39;
                        }
                        v39 = (char)*((char *)(v7 + v79));
                        v75 += 1;
                    }
                }
            }
            if ((v77 == 0 || v17 != 0) && (v75 == 0 || v17 != 0) && ((v80 == 2 & v17) != 0 || v17 != 0))
            {
                v3 = v26;
                v2 = v25;
                v1 = 0;
                v75 = (unsigned int)sub_405b10();
            }
            if (v17 == 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1) == 0 && v5 == 0 || (v15 != 1 || v88 != 0) && v75 >= v78)
            {
                if (v75 < v78)
                {
                    *((unsigned long long *)(v28 + v75)) = v39;
                }
                v75 += 1;
                v6 = (v77 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v77 == 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && (v78 == 0 & v14 != 0) == 0 || v77 == 0 && (char)v84 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && v18 == 0 || (char)v84 == 0 && v77 == 0 && ((v80 == 2 & v17) == 0 || v75 != 0) || v77 == 0 && (char)v84 != 0 && v6 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) || (v77 == 0 || v17 != 0) && (v75 == 0 || v17 != 0) && ((v80 == 2 & v17) != 0 || v17 != 0))
            {
                v91 = v75;
                return v91;
            }
        }
        *((char *)v28) = 39;
        v77 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        *((unsigned long *)&v18) = v83;
    }
}

int sub_407550()
{
}

extern unsigned long long g_610388;
extern unsigned long long g_610390;

int sub_402bd0()
{
    unsigned long v1;  // rdi

    g_610388 = v1 + 1;
    g_610390 = (unsigned int)sub_407bb0();
    return g_610390;
}

int sub_407210()
{
}

extern unsigned int g_6102f4;
extern unsigned int g_6102f8;
extern unsigned int g_6102fc;
extern unsigned int g_610520;
extern unsigned int g_610524;
extern unsigned int g_610528;
extern unsigned long long g_610530;
extern unsigned long long g_610570;

int sub_409660()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_610520 = g_6102fc;
    g_610524 = g_6102f8;
    v1 = (unsigned int)v2;
    v0 = &g_610520;
    g_6102fc = g_610520;
    g_610570 = g_610530;
    g_6102f4 = g_610528;
    return sub_409090();
}

extern unsigned int g_40c34e;
extern unsigned long long stderr[7];

int sub_405290()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c34e, 0x5), stderr);
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
                    sub_407590();
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
                sub_407590();
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

int sub_407590()
{
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_407a10()
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
        return sub_4075b0();
    }
}

int sub_407d00()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_407b50();
}

extern unsigned int g_40c370;
extern unsigned int g_610290;
extern char g_6103c8;
extern unsigned long long g_6103d0;

int sub_405490()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4097e0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_6103c8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40c370, 0x5);
            if (g_6103d0 != 0)
            {
                sub_4073e0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_6103c8 != 0)
    {
        v3 = sub_4097e0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_6103c8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_610290);
        error(0x0, *(v2), "%s");
    }
}

