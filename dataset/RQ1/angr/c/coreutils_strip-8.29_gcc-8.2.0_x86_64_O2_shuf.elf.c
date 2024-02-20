#include "decompile_angr.h"
int sub_404b2b()
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
    v7 = (unsigned int)sub_4035d0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_406790();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4035d0();
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

int sub_4082e0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408220();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_405900()
{
    void tmp_20;  // tmp #20
    unsigned long long v1[4];  // rdi
    struct_0 *v2;  // r12
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
                    sub_405ab0();
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
                            return sub_405ab0();
                        }
                    }
                    sub_405ab0();
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

extern int512_t g_40c1a0;

int sub_408820()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4243872)
    {
        v3 = v2[1];
        if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
        {
            v4 = 0;
            v5 = v2[0];
            if (((char)(BinaryOp CmpF & 69) & 1) == 0)
            {
                v6 = (unsigned long long)(unsigned int)xmm1<16> + 4568451461323476173;
            }
        }
        if (...)
        {
            *(v1) = &g_40c1a0;
            return 0;
        }
    }
    if (...)
    {
        return 1;
    }
}

int sub_404c00()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4090e0()
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
    struct_0 *v13;  // rdi
    void *v14;  // rbx
    struct_0 *v15;  // rdi
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
                    *((long long *)(r12<8> + 64))();
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

int sub_4084b0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_407390();
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

int sub_4082a0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408220();
}

int sub_403130()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v2;  // rdi
    void *v3;  // rdx
    unsigned int *v4;  // r14
    unsigned long long|unsigned int|char v5;  // bl
    unsigned long|unsigned long long v6;  // bpl
    unsigned long long v7;  // rax
    unsigned long|unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    unsigned long|unsigned long long|unsigned int v10;  // r15
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
    if (v5 == 2 || v5 != 0 && v5 != 1)
    {
        v6 = (char)(dup2(0x1, 0x1) != 1);
    }
    if (v5 == 1 || v5 == 2 || v5 != 0)
    {
        v7 = dup2(0x0, 0x0);
        if (v7 != 0)
        {
            v8 = (unsigned int)sub_4030e0();
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
            v6 = (unsigned int)sub_4030e0();
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
        if ((v6 == 0 && v7 == 0 || v6 == 0 && (char)v8 != 0 || v7 == 0 && (char)v6 != 0 || (char)v6 != 0 && (char)v8 != 0) && v5 != 0)
        {
            v5 = (unsigned int)sub_4030e0();
            if ((char)v5 == 0)
            {
                v10 = *(v4);
                v9 = 0;
            }
        }
    }
    if (v5 == 0 || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))
    {
        v9 = (unsigned int)sub_407450();
    }
    if ((char)v6 != 0 || (char)v5 != 0)
    {
        v10 = *(v4);
    }
    if ((char)v5 == 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)))
    {
        close(0x2);
    }
    if ((char)v6 == 0 && v6 != 0 && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || ((char)v5 == 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))) && v6 != 0)
    {
        close(0x1);
    }
    if (((char)v5 == 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))) && v6 == 0 && v8 != 0 || ((char)v6 == 0 && v6 != 0 && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || ((char)v5 == 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v6 == 0 || (char)v6 != 0) && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))) && v6 != 0) && v8 != 0)
    {
        close(0x0);
    }
    if (...)
    {
        *((unsigned long *)&v4) = v10;
    }
    v15 = v9;
    return v15;
}

int sub_409030()
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
                            rax<8>();
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
                    v9 = rax<8>();
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

int sub_406940()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406790();
}

extern unsigned int g_40a048;
extern unsigned int g_40a178;
extern unsigned int g_40a1a0;
extern unsigned int g_40a200;
extern unsigned int g_40a248;
extern unsigned int g_40a280;
extern unsigned int g_40a2d0;
extern unsigned int g_40a450;
extern unsigned int g_40a490;
extern unsigned int g_40a4c0;
extern unsigned int g_40a520;
extern unsigned int g_40a568;
extern unsigned int g_40a588;
extern unsigned long long stdout;

int sub_402c60()
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
    unsigned long long *v29;  // rax
    char *v30;  // rdi
    char *v31;  // rsi
    unsigned long long v32;  // rcx
    unsigned long long v33;  // cc_dep1
    unsigned long long v34;  // cc_dep2
    unsigned long v35;  // d
    char *v39;  // rax
    char *v40;  // rax
    unsigned long long v41;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x40a178, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a1a0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a200, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a248, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a280, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a2d0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a450, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a490, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a4c0, 0x5), stdout);
        v0 = "[";
        v29 = &v0;
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
            v29 = &v2;
            v30 = v2;
            if (v2 == 0)
            {
                break;
            }
            v31 = "shuf";
            v32 = 5;
            if ((v33 > v34) - 0 - (v33 < v34) == 0)
            {
                break;
            }
            while (v32 != 0)
            {
                v32 -= 1;
                v33 = *(v31);
                v34 = *(v30);
                v30 = &v30[v35];
                v31 = &v31[v35];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a048, 0x5));
            v40 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a048, 0x5));
            v39 = setlocale(0x5, 0x0);
            if (v39 != 0)
            {
                v41 = strncmp(v39, "en_", 0x3);
            }
            if (v41 == 0 || v39 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a568, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v40, "en_", 0x3) != 0) && (v3 == 0 || v40 != 0) && (v3 != 0 || v41 != 0) && (v3 != 0 || v39 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a520, 0x5));
        }
        if (v3 != 0 || v41 != 0 && v39 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a568, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a588, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned long long g_60f320;

int sub_402fe0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60f320 = v1;
    return v2;
}

int sub_404e00()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_408ce0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_4086d0();
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4058e0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

extern unsigned int g_40b578;
extern unsigned int g_40b588;
extern unsigned int g_60f278;

int sub_405590()
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
    v4 = (unsigned int)sub_405050();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x40b588, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x40b578, 0x5);
    }
    error(g_60f278, *(v5), v6);
}

int sub_405fa0()
{
    unsigned long long *v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    unsigned int v2;  // [bp-0xb0]
    unsigned long v3;  // [bp-0x98]
    unsigned long v5;  // rsi
    void *v6;  // rdi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbp
    unsigned int *v10;  // r14
    unsigned long long v11;  // rax
    unsigned int v12;  // rsi
    unsigned long long v13;  // rbx
    void *v14;  // rax
    unsigned long long v15;  // r12
    unsigned int *v16;  // r14
    unsigned long|unsigned int v17;  // r15d
    unsigned long long v18;  // rax
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rdi
    unsigned long long v21;  // rax

    v0 = v5;
    v7 = __fxstat(0x1, fileno(v6), (unsigned int)&v1);
    if (v7 >= 0 && ((unsigned short)v2 & 0xf000) == 0x8000)
    {
        v8 = ftello(v6);
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 > v8)
        {
            v13 = v3 - v8 + 1;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v7 < 0 || v3 <= v8 || ((unsigned short)v2 & 0xf000) != 0x8000)
    {
        v13 = 0x2000;
    }
    v15 = malloc(v13);
    if (v15 != 0)
    {
        v9 = 0;
        while (true)
        {
            v10 = v13 - v9;
            v11 = fread(v15 + v9, 0x1, v13 - v9, v6);
            v9 += v11;
            if (v10 != v11)
            {
                v16 = __errno_location();
                v17 = *(v16);
                v18 = ferror((unsigned int)v6);
                if (v18 == 0)
                {
                    v19 = v13 - 1;
                    if (v19 > v9)
                    {
                        v15 = (realloc(v15, v9 + 1) != 0? v18 : r12<8>);
                    }
                    *((char *)(v15 + v9)) = 0;
                    *(v0) = v9;
                }
            }
            else if (v13 != -1)
            {
                v12 = (!(v13 >> 1) <= v13? -1 : (v13 >> 1) + v13);
                v13 = (!(v13 >> 1) <= v13? -1 : (v13 >> 1) + v13);
                v14 = realloc(v15, v12);
                if (v15 != 0)
                {
                    v15 = v14;
                }
                else
                {
                    v17 = *(v10);
                    v10 = __errno_location();
                }
            }
            else
            {
                v15 = 0;
                free(v6);
                *(__errno_location()) = 12;
            }
            if ((v15 == 0 || v10 != v11) && (v10 == v11 || v18 != 0) && (v13 != -1 || v10 != v11))
            {
                v20 = v15;
                v15 = 0;
                free(v20);
                *((unsigned long *)&v16) = v17;
            }
        }
    }
    v21 = v15;
    return v21;
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

extern unsigned int g_40bff8;
extern unsigned int g_40c018;
extern unsigned int g_40c048;
extern unsigned int g_40c068;
extern unsigned int g_40c098;
extern unsigned long long stderr;

int sub_407630()
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
    unsigned long|unsigned long long|unsigned int v19;  // r12
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
                                dcgettext(0x0, 0x40bff8, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40c018, 0x5);
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
                                dcgettext(0x0, 0x40c098, 0x5);
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
                            dcgettext(0x0, 0x40c068, 0x5);
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
        if ((*((long long *)v17) != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45) && (*((long long *)v17) != 0 || v34 != 0))
        {
            return v42;
        }
    }
    if (*((long long *)v17) == 0 && v28 == 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0 || v34 == 0 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x40c048, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_406790()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4069e0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern int512_t g_60f440;

int sub_404a40()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60f440 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60f440 : v1) + 4)) = v3;
    return v2;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_40a063;
extern unsigned int g_40a071;
extern unsigned int g_40a08f;
extern unsigned int g_40a0aa;
extern unsigned int g_40a0d7;
extern unsigned int g_40a0e8;
extern unsigned int g_40a0fd;
extern unsigned int g_40a116;
extern unsigned int g_40a5c0;
extern unsigned int g_40a630;
extern unsigned int g_40a650;
extern unsigned int g_40a678;
extern unsigned int g_40b58c;
extern unsigned int g_40c11f;
extern unsigned int g_60f2dc;
extern unsigned long long g_60f4c8;
extern int512_t g_800000;
extern char *stdin;
extern unsigned long long stdout;

int main()
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long|unsigned int|char|unsigned long long * v3;  // [bp-0xe8]
    char *|unsigned long long|char v4;  // [bp-0xe0]
    unsigned long|unsigned long long v5;  // [bp-0xd8]
    char v6;  // [bp-0xcf]
    char v7;  // [bp-0xce]
    unsigned long long|char v8;  // [bp-0xcd]
    unsigned int v9;  // [bp-0xcc]
    unsigned long long v10;  // [bp-0xc8]
    unsigned int v11;  // [bp-0xb0]
    unsigned long v12;  // [bp-0x98]
    unsigned long|unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v18;  // rax
    unsigned long long v21;  // rax
    char *v22;  // r15
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rax
    unsigned int v27;  // cc_dep1
    unsigned long v28;  // rdi
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rbp
    unsigned long long v35;  // rbx
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rax
    char *v39;  // rdi
    unsigned long long v40;  // rcx
    char v41;  // cc_dep2
    unsigned long v42;  // d
    unsigned long long v45;  // rbp
    unsigned long long v46;  // r14
    char *v47;  // r13
    unsigned long long v49;  // rax
    char *v50;  // rax
    unsigned long v51;  // rsi
    unsigned long long v53;  // rbx
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    char *v56;  // rcx
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rbp
    unsigned long long v59;  // r8
    unsigned long long v60;  // r15
    unsigned long long v61;  // rbx
    unsigned long v62;  // rax
    unsigned long v63;  // rdx
    unsigned long long v64;  // r13
    char *v66;  // rbx
    unsigned long long v67;  // rbx
    char *v68;  // rdi
    unsigned long long v69;  // rax
    unsigned long long v71;  // r12
    unsigned long long v73;  // rbp
    char *v74;  // rcx
    unsigned long long v75;  // r15
    unsigned long long v76;  // r12
    unsigned long long v77;  // r13
    unsigned long long v78;  // rbx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long *v82;  // rbp
    unsigned long long v83;  // r12
    unsigned long long v85;  // r12
    unsigned long long|unsigned long long * v86;  // rbp
    unsigned long long v87;  // rax
    unsigned long long v89;  // rcx
    char v90;  // cl
    unsigned long long v91;  // rax
    unsigned long long v92;  // rbx
    unsigned long long v93;  // rax
    unsigned long long v94;  // rbx
    unsigned long long v95;  // rax
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // r12
    struct_0 *v99;  // rbp
    unsigned long long v100;  // rax
    unsigned long long v101;  // rbx
    unsigned long long v102;  // r13
    unsigned long long v105;  // r12
    unsigned long long v107;  // r13
    unsigned long long v108;  // r14
    unsigned long long v110;  // rbp
    unsigned long long v111;  // r13
    unsigned long long v112;  // rax
    unsigned long long v113;  // rbx
    unsigned long long v114;  // rax
    unsigned long long v115;  // rax
    unsigned long long v116;  // r12
    unsigned long long v117;  // rax
    unsigned long long v118;  // rax

    v14 = -1;
    v15 = 0;
    v85 = 0;
    sub_403430();
    setlocale(0x6, 0x40c11f);
    bindtextdomain(0x40a063, 0x40a5c0);
    textdomain(0x40a063);
    sub_409f90();
    v8 = 0;
    v6 = 10;
    v1 = 0;
    v0 = -1;
    v2 = 0;
    v7 = 0;
    while (true)
    {
        v18 = sub_4082a0();
        if ((unsigned int)v18 == -1)
        {
            v59 = (unsigned int)v28 - g_60f2dc;
            if (!(v85 != 0))
            {
                if (v7 == 0)
                {
                    if (v9 <= 1)
                    {
                        if ((unsigned int)v28 - g_60f2dc == 1)
                        {
                            v38 = strcmp(*((long long *)v85), "-");
                            if (v38 != 0)
                            {
                                if (v0 == 0)
                                {
                                    sub_4030b0();
                                }
                                else
                                {
                                    v49 = sub_403130();
                                    if (v49 != 0)
                                    {
                                        sub_4030b0();
                                    }
                                    else
                                    {
                                        v53 = (unsigned int)sub_404ed0();
                                        error(0x1, *(__errno_location()), "%s");
                                    }
                                }
                            }
                        }
                        if (v38 == 0 || (unsigned int)v28 - g_60f2dc != 1)
                        {
                            sub_4030b0();
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v28 - g_60f2dc <= 0)
                    {
                        v86 = 0;
                        v75 = v2 + 1 - v14;
                    }
                }
                if ((v7 == 0 || (unsigned int)v28 - g_60f2dc > 0) && (v9 > 1 || v7 != 0))
                {
                    v37 = (unsigned int)sub_405050();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a0d7, 0x5));
                    sub_402c60(); /* do not return */
                }
            }
            else if (v7 == 0)
            {
                v75 = v9;
                v36 = 0;
                while (v9 > (unsigned int)v36)
                {
                    v39 = *((long long *)(v85 + v36 * 8));
                    v40 = -1;
                    v36 += 1;
                    while (v40 != 0)
                    {
                        v40 -= 1;
                        v41 = *(v39);
                        v39 = &v39[v42];
                        break;
                    }
                }
                v9 = v59;
                v3 = v85;
                v4 = v14;
                v45 = v6;
                v46 = 0;
                v5 = v15;
                for (v47 = (unsigned long long)(unsigned int)sub_406790(); v9 > (unsigned int)v46; v47 = &v50[1])
                {
                    v50 = stpcpy(v47, *((long long *)(v45 + v46 * 8)));
                    *((char **)(v45 + v46 * 8)) = v47;
                    v46 += 1;
                    *((unsigned long long *)&v50) = v45;
                }
                v45 = v51 + (int)g_60f2dc * 8;
                v14 = v4;
                v85 = (char)v3;
                *((char **)(v51 + (int)g_60f2dc * 8 + v75 * 8)) = v47;
            }
            else
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a678, 0x5));
            }
        }
        else if ((unsigned int)v18 != 110)
        {
            if (v18 > 110)
            {
                if ((unsigned int)v18 == 114)
                {
                    v8 = 1;
                }
                else if (v18 > 114)
                {
                    if ((unsigned int)v18 == 122)
                    {
                        v6 = 0;
                    }
                    if ((unsigned int)v18 == 128)
                    {
                        if (v15 != 0)
                        {
                            v23 = strcmp(v15, g_60f4c8);
                            if (v23 != 0)
                            {
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a650, 0x5));
                            }
                        }
                        if (v15 == 0 || v23 == 0)
                        {
                            v15 = g_60f4c8;
                        }
                    }
                }
                else if ((unsigned int)v18 == 111)
                {
                    if (v1 != 0)
                    {
                        v21 = strcmp(v1, g_60f4c8);
                        if (v21 != 0)
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a630, 0x5));
                        }
                    }
                    if (v1 == 0 || v21 == 0)
                    {
                        v1 = g_60f4c8;
                    }
                }
            }
            else
            {
                if ((unsigned int)v18 == -130)
                {
                    sub_402c60(); /* do not return */
                }
                else if (v18 > -18446744069414584450)
                {
                    if ((unsigned int)v18 == 101)
                    {
                        v85 = 1;
                    }
                    if ((unsigned int)v18 == 105)
                    {
                        v22 = strchr(g_60f4c8, 0x2d);
                        v3 = v22 == 0;
                        if (v7 == 0)
                        {
                            if (v22 != 0)
                            {
                                *(v22) = 0;
                                dcgettext(0x0, 0x40a08f, 0x5);
                                *(v22) = 45;
                                v14 = (unsigned int)sub_406af0();
                                dcgettext(0x0, 0x40a08f, 0x5);
                                v24 = sub_406af0();
                                v25 = v24;
                                v2 = v24;
                                v26 = v24 - v14;
                                if (v26 == -1 == !(v14 <= v25) && v3 == 0)
                                {
                                    v7 = 1;
                                }
                            }
                            else
                            {
                                dcgettext(0x0, 0x40a08f, 0x5);
                                sub_406af0();
                            }
                            if (v22 == 0 || v26 == -1 != !(v14 <= v25) || v3 != 0)
                            {
                                v33 = (unsigned int)sub_405050();
                                v35 = dcgettext(0x0, 0x40a08f, 0x5);
                                error(0x1, *(__errno_location()), "%s: ");
                            }
                        }
                        else
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a071, 0x5));
                        }
                    }
                }
                else if ((unsigned int)v18 == -131)
                {
                    sub_406650();
                    exit(0x0); /* do not return */
                }
            }
        }
        if ((unsigned int)v18 == 110)
        {
            if (v27 == 0)
            {
                *((int *)&v0) = (v0 <= v10? v0 : v10);
            }
            else
            {
                v27 = sub_406b20();
                v32 = (unsigned int)sub_405050();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a0aa, 0x5));
            }
        }
        if ((unsigned int)v18 == -1 && v85 != 0 && v7 != 0 || v18 <= -18446744069414584450 && v18 <= 110 && (unsigned int)v18 != -1 && (unsigned int)v18 != -131 && (unsigned int)v18 != 110 && (unsigned int)v18 != -130 || v18 <= 114 && (unsigned int)v18 != 114 && (unsigned int)v18 != -1 && (unsigned int)v18 != 111 && (unsigned int)v18 != 110 && v18 > 110 || v18 <= 110 && (unsigned int)v18 != -1 && v18 > -18446744069414584450 && (unsigned int)v18 != 110 && (unsigned int)v18 != -130 && (unsigned int)v18 != 105 && (unsigned int)v18 != 101 || (unsigned int)v18 != 114 && (unsigned int)v18 != -1 && (unsigned int)v18 != 122 && (unsigned int)v18 != 110 && (unsigned int)v18 != 128 && v18 > 110 && v18 > 114)
        {
            sub_402c60(); /* do not return */
        }
        if ((unsigned int)v18 == -1 && v85 == 0 && (unsigned int)v28 - g_60f2dc == 1 && v9 <= 1 && v7 == 0 && v38 != 0 && v0 != 0 && v49 != 0 && v8 == 0 && v0 != -1 || (unsigned int)v18 == -1 && v85 == 0 && v8 == 0 && v9 <= 1 && v7 == 0 && (v38 == 0 || (unsigned int)v28 - g_60f2dc != 1) && v0 != -1 && v0 != 0)
        {
            v54 = __fxstat(0x1, 0x0, (unsigned int)&v10);
            if (v54 == 0 && ((unsigned short)v11 & 0xd000) == 0x8000)
            {
                v55 = lseek(0x0, 0x0, 0x1);
            }
        }
        if (...)
        {
            v5 = (unsigned int)sub_4050a0();
            if (v5 != 0)
            {
                v3 = v6;
                v61 = (v0 <= 0x400? v0 : 0x400);
                v60 = 0;
                v64 = (unsigned int)sub_406960();
                while (true)
                {
                    if (v0 != v60)
                    {
                        v58 = v60 * 24;
                        v59 = (unsigned int)sub_4032f0();
                        if (v59 != 0)
                        {
                            v60 += 1;
                            v61 += 0x400;
                            v4 = v59;
                            v62 = 24 * v61;
                            v63 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x18<64>, rbx<8>, cc_ndep<8>);
                            if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v63 != 0)
                            {
                                break;
                            }
                            v64 = (unsigned int)sub_4067f0();
                            memset(v64 + v58 + 24, 0x0, 0x6000);
                            v59 = v4;
                        }
                    }
                    else if (v59 != 0)
                    {
                        sub_4032e0();
                        v4 = v14;
                        v3 = v64;
                        v77 = v0;
                        while (true)
                        {
                            v78 = v60 + 1;
                            v79 = sub_4050e0();
                            v80 = sub_4032f0();
                            if (v80 == 0)
                            {
                                v14 = v4;
                                v64 = v3;
                                if (v60 == 0)
                                {
                                    error(0x1, 0x4b, (unsigned long long)dcgettext(0x0, 0x40a0e8, 0x5));
                                }
                            }
                            else if (v60 != 0)
                            {
                                v60 = v78;
                            }
                            else
                            {
                                v14 = v4;
                                v64 = v3;
                                v60 = 1;
                            }
                            if (v60 == 0 && v80 != 0 || v80 == 0 && v60 != 0)
                            {
                                sub_403420();
                            }
                        }
                    }
                    if (v59 == 0 || v0 == v60)
                    {
                        if ((*(stdin) & 32) == 0)
                        {
                            *((int *)&v0) = (v0 <= v60? v0 : v60);
                            v87 = sub_407390();
                            if (v87 != 0)
                            {
                                break;
                            }
                            v86 = 0;
                            v75 = v0;
                            if (v8 != 0)
                            {
                                break;
                            }
                            v89 = 1;
                        }
                        else
                        {
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40b58c, 0x5));
                        }
                    }
                }
                if ((*(stdin) & 32) == 0 && (v59 == 0 || v0 == v60))
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40b58c, 0x5));
                }
                else if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v59 != 0 && v0 != v60 && v60 >= v61)
                {
                    sub_4069e0(); /* do not return */
                }
                else if (v8 == 0 && v87 == 0 && (*(stdin) & 32) == 0 && (v59 == 0 || v0 == v60))
                {
                    v8 = v89;
                    v94 = (unsigned int)sub_4052b0();
                }
            }
        }
        if (...)
        {
            v3 = v6;
            v56 = (unsigned long long)(unsigned int)sub_405fa0();
            if (v56 != 0)
            {
                v66 = v10;
                if (v10 != 0)
                {
                    v57 = v6;
                    if (v6 != v56[v10 + -1])
                    {
                        v10 += 1;
                        *((unsigned long long *)(v56 + v66)) = v57;
                        v66 = v10;
                    }
                }
                v67 = v66 + v56;
                v68 = v56;
                v69 = 0;
                v4 = v85;
                while (true)
                {
                    v71 = v69 + 1;
                    if (v67 <= v68)
                    {
                        break;
                    }
                    v68 = (unsigned long long)(unsigned int)sub_4083a0() + 1;
                    v69 = v71;
                }
                v73 = v69;
                v74 = v56;
                v75 = v69;
                v76 = (char)v4;
                if ([D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x8<64>, rbp<8>, cc_ndep<8>) == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v4 = v74;
                    v5 = v14;
                    v82 = (unsigned long long)(unsigned int)sub_406790();
                    *((unsigned long long *)&v4) = v76;
                    *(v82) = v68;
                    v3 = v82;
                    for (v83 = &v82[v75]; v82 != v83; *(v82) = (unsigned long long)(unsigned int)sub_4083a0() + 1)
                    {
                        v82 = &v82[1];
                    }
                    v85 = v4;
                    v14 = v5;
                    v86 = v3;
                }
            }
        }
        if (...)
        {
            sub_4069e0(); /* do not return */
        }
        if (...)
        {
            if (v8 != 0)
            {
                v5 = (unsigned int)sub_4050a0();
                if (v7 == 0 && v85 == 0 && v5 != 0)
                {
                    v93 = sub_407390();
                }
            }
            else
            {
                *((int *)&v0) = (!((long long)(stack_base)[-0x100] <= r15<8>)? r15<8> : (long long)(stack_base)[-0x100]);
                sub_405280();
                v5 = (unsigned int)sub_4050a0();
                if (v5 != 0)
                {
                    v90 = (char)v85 | v7;
                    if (!((char)v85 == 0 && v7 == 0))
                    {
                        v94 = (unsigned int)sub_4052b0();
                        if (v1 != 0)
                        {
                            v95 = sub_403130();
                        }
                    }
                    else
                    {
                        v8 = v90;
                        v64 = 0;
                        v91 = sub_407390();
                        v89 = v8;
                    }
                }
            }
        }
        if (...)
        {
            v92 = (unsigned int)sub_404ed0();
            error(0x1, *(__errno_location()), "%s");
        }
        if (...)
        {
            v8 = v89;
            v94 = (unsigned int)sub_4052b0();
            if (v1 != 0)
            {
                *((char *)&v8) = v8;
                v97 = sub_403130();
                v89 = (char)v8;
            }
        }
        if (...)
        {
            v96 = sub_403130();
        }
        if (...)
        {
            v98 = 0;
            if (v89 != 0)
            {
                while (true)
                {
                    if (v75 != v98)
                    {
                        v99 = *((long long *)(v94 + v98 * 8)) * 24 + v64;
                        v100 = fwrite_unlocked(*((long long *)(*((long long *)(v94 + v98 * 8)) * 24 + v64 + 16)), 0x1, *((long long *)(*((long long *)(v94 + v98 * 8)) * 24 + v64 + 8)), stdout);
                        if (v100 != v99->field_8)
                        {
                            break;
                        }
                        v98 += 1;
                    }
                }
                if (v75 != v98)
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a116, 0x5));
                }
                else if (v75 == v98)
                {
                    return 0;
                }
            }
        }
        if (...)
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40b58c, 0x5));
        }
        if (...)
        {
            if (v75 == 0)
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a0fd, 0x5));
            }
            else if (v7 != 0)
            {
                v105 = 0;
                while (true)
                {
                    v115 = __printf_chk(0x1, "%lu%c", (unsigned int)(v14 + (unsigned long long)(unsigned int)sub_4050e0()), (unsigned int)v6);
                    if (v115 < 0)
                    {
                        break;
                    }
                    v105 += 1;
                }
                if (true)
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a116, 0x5));
                }
                else if (v105 == v0 && v115 >= 0)
                {
                    return 0;
                }
            }
            else
            {
                v102 = 0;
                do
                {
                    v112 = sub_4050e0();
                    v113 = *((long long *)(v86 + v112 * 8 + 8)) - *((long long *)(v86 + v112 * 8));
                    v114 = fwrite_unlocked(*((long long *)(v86 + v112 * 8)), 0x1, *((long long *)(v86 + v112 * 8 + 8)) - *((long long *)(v86 + v112 * 8)), stdout);
                    if (v113 != v114)
                    {
                        break;
                    }
                    v102 += 1;
                }
                while (v0 != v102);
                if (true)
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a116, 0x5));
                }
                else if (v113 == v114)
                {
                    return 0;
                }
            }
        }
        if (...)
        {
            v101 = (unsigned int)sub_404ed0();
            error(0x1, *(__errno_location()), "%s");
        }
        if (...)
        {
            if (v7 != 0)
            {
                v110 = 0;
                for (v111 = v0; v110 != v111; v110 += 1)
                {
                    v118 = __printf_chk(0x1, "%lu%c", (unsigned int)(*((long long *)(v94 + v110 * 8)) + v14), (unsigned int)v6);
                    if (v118 < 0)
                    {
                        break;
                    }
                }
                if (v110 != v111)
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a116, 0x5));
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                v107 = 0;
                for (v108 = v0; v107 != v108; v107 += 1)
                {
                    v116 = *((long long *)(v86 + *((long long *)(v94 + v107 * 8)) * 8 + 8)) - *((long long *)(v86 + *((long long *)(v94 + v107 * 8)) * 8));
                    v117 = fwrite_unlocked(*((long long *)(v86 + *((long long *)(v94 + v107 * 8)) * 8)), 0x1, *((long long *)(v86 + *((long long *)(v94 + v107 * 8)) * 8 + 8)) - *((long long *)(v86 + *((long long *)(v94 + v107 * 8)) * 8)), stdout);
                }
                if (v116 != v117 && v107 != v108)
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a116, 0x5));
                }
                else
                {
                    return 0;
                }
            }
        }
        if (...)
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40b58c, 0x5));
        }
        if (...)
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a116, 0x5));
        }
        if (...)
        {
            return 0;
        }
    }
}

int sub_4050a0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = (unsigned int)sub_4055f0();
    v2 = 0;
    if (v1 != 0)
    {
        v2 = sub_406790();
        *((unsigned long long *)v2) = v1;
        *((long long *)(v2 + 16)) = 0;
        *((long long *)(v2 + 8)) = 0;
    }
    return v2;
}

int sub_407390()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_407410() != 0)
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

int sub_405030()
{
}

int sub_405a60()
{
    unsigned long long *v1;  // rdi

    __explicit_bzero_chk();
    free(v1);
    if (*(v1) == 0)
    {
        return 0;
    }
}

int sub_406a20()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    v2 = sub_406f50();
    if ((unsigned int)v2 == 0)
    {
        if (v0 >= v3 && v0 <= v5)
        {
            return v0;
        }
        if (v0 < v3 || v0 > v5)
        {
            v6 = __errno_location();
            *(v6) = (0 - (unsigned int)(char)(v0 < 0x40000000) & -41) + 75;
        }
    }
    else
    {
        v4 = v2;
        v6 = __errno_location();
        if (!(v4 != 1))
        {
            *(v6) = 75;
        }
        else if (v4 == 3)
        {
            *(v6) = 0;
        }
    }
    if (v0 < v3 || (unsigned int)v2 != 0 || v0 > v5)
    {
        sub_405050();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

int sub_4067f0()
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
            sub_4069e0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned long long g_60ee30;

int sub_409fa8()
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
        rax<8>();
        v1 = &v1[-1];
    }
    return v4;
}

int sub_404ea0()
{
}

int sub_404e10()
{
}

int sub_4067b0()
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
        sub_4069e0(); /* do not return */
    }
}

int sub_404cb0()
{
}

extern uint128_t g_60f440;
extern uint128_t g_60f450;
extern uint128_t g_60f460;
extern unsigned long long g_60f470;

int sub_404e1f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60f470;
    *((uint128_t *)&v0) = g_60f440;
    *((uint128_t *)&v1) = g_60f450;
    *((uint128_t *)&v2) = g_60f460;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_404800();
}

int sub_404b02()
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

extern uint128_t g_60f440;
extern uint128_t g_60f450;
extern uint128_t g_60f460;
extern unsigned long long g_60f470;

int sub_404f40()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60f440;
    *((uint128_t *)&v1) = g_60f450;
    *((uint128_t *)&v2) = g_60f460;
    v4 = g_60f470;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_404800();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_4051e0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __explicit_bzero_chk();
}

int sub_405260()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

extern unsigned int g_40a116;
extern unsigned int g_60f278;
extern char g_60f318;
extern unsigned long long g_60f320;

int sub_403000()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4084b0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60f318 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40a116, 0x5);
            if (g_60f320 != 0)
            {
                sub_404ea0();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60f318 != 0)
    {
        v3 = sub_4084b0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60f318 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60f278);
        error(0x0, *(v2), "%s");
    }
}

int sub_4067e0()
{
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

int sub_409680()
{
    unsigned long long *v0;  // [bp-0x20]
    void tmp_10;  // tmp #10
    void tmp_15;  // tmp #15
    struct_0 *v2;  // rdi
    unsigned long long v3[10];  // rbx
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // rax
    uint128_t v7;  // xmm0
    unsigned long long v8;  // rax
    unsigned int v9;  // ymm0
    unsigned long long v10;  // rdx
    unsigned long|uint128_t|unsigned long long|unsigned int v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    uint128_t v14;  // xmm1
    unsigned int v15;  // ymm1
    unsigned long long v16;  // xmm1lq
    struct_3 *v18;  // rdx
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm0
    unsigned int v21;  // ymm0
    unsigned long|uint128_t|unsigned int v22;  // xmm1
    uint128_t v23;  // xmm1
    unsigned int v24;  // ymm1
    uint128_t v25;  // xmm2
    unsigned int v26;  // ymm2
    unsigned long long v27;  // xmm2lq
    uint128_t v28;  // xmm0
    struct_2 *v30;  // rdi
    void *v31;  // r12

    v3 = v2;
    if (sub_408700() != 0)
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
                v11 = (unsigned long long)(unsigned int)xmm0<16> * 2;
            }
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
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
                v12 = xmm1<16> * 2;
            }
            xmm1<8> = Conv(128->64, (xmm1<16> * Conv(32->128, Load(addr=rdx<8>, size=4, endness=Iend_LE))))
            if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
            {
                sub_408820();
                v18 = v3[5];
                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    v19 = 0;
                    v19 = (unsigned int)v2->field_10;
                }
                else
                {
                    v20 = 0;
                    v21 = v2->field_10 >> 1 | (unsigned int)v2->field_10 & 1;
                    v19 = xmm0<16> * 2;
                }
                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    v22 = 0;
                    v22 = v2->field_18;
                }
                else
                {
                    v23 = 0;
                    v24 = v2->field_18 >> 1 | (unsigned int)v2->field_18 & 1;
                    v22 = (unsigned long long)(unsigned int)xmm1<16> * 2;
                }
                v25 = 0;
                v26 = *(v2->field_28);
                v27 = xmm2<16> * v19;
                if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
                {
                    xmm0<16> = (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0x4<64>), size=4, endness=Iend_LE)))
                    if (v18->field_10 == 0)
                    {
                        xmm0<16> = (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0x8<64>), size=4, endness=Iend_LE)))
                    }
                    if (sub_4091c0() == 0)
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

int sub_408c90()
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

int sub_4030e0()
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
    if (v3 < 0 || v4 == v3)
    {
        v6 = v1;
        return v6;
    }
}

int sub_4086d0()
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

int sub_407550()
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

int sub_4065d0()
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

int sub_406860() { crash_skku;
}
int sub_405280()
{
    unsigned long v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi
    unsigned long v4;  // cc_dep1
    unsigned long v5;  // rdi
    unsigned long long v6;  // rdi

    v2 = v1 - 1;
    if (v1 != 1)
    {
        v3 = 0;
        do
        {
            v3 += 1;
            v4 = v2 % 2;
            v2 = v2 % 2;
        }
        while (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, cc_dep1<8>, rax<8>, cc_ndep<8>)));
        v6 = v3 * v5;
        v2 = v6 + 7 >> 3;
    }
    return v2;
}

int sub_405070()
{
    unsigned long long v1[3];  // rax
    unsigned long v2;  // rdi

    v1 = sub_406790();
    v1[0] = v2;
    v1[2] = 0;
    v1[1] = 0;
    return v1;
}

int sub_4052b0()
{
    unsigned int v0;  // [bp-0x74]
    void tmp_9;  // tmp #9
    unsigned long|unsigned long long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long long v3[2];  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbp
    unsigned long v14;  // rax
    unsigned long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r15
    unsigned long long v19;  // rsi
    unsigned long long v20[2];  // r14
    unsigned long long v21[2];  // r8
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long v25;  // rax
    unsigned long long v27;  // rax

    if (v9 != 0)
    {
        v12 = v11;
        if (v9 != 1)
        {
            if (!(v11 > 131071))
            {
                v10 = (unsigned int)sub_406790();
            }
            else if ((0 CONCAT v11) % v9 <= 31)
            {
                v14 = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(rbp<8>, 0x3d<8>), Shr(rbp<8>, 0x3c<8>), cc_ndep<8>);
                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>)) && v14 == 0)
                {
                    v10 = (unsigned int)sub_406790();
                }
            }
            else
            {
                v1 = (unsigned int)sub_408ea0();
                if (v1 != 0)
                {
                    v15 = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(r12<8>, 0x3d<8>), Shr(r12<8>, 0x3c<8>), cc_ndep<8>);
                    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>)) && v15 == 0)
                    {
                        v0 = 1;
                        v10 = (unsigned int)sub_406790();
                    }
                }
            }
            if (((0 CONCAT v11) % v9 <= 31 || v11 <= 131071) && (v11 <= 131071 || v14 == 0) && (v11 <= 131071 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>))))
            {
                if (v11 != 0 || v11 > 131071)
                {
                    v16 = 0;
                    do
                    {
                        *((unsigned long long *)(v10 + v16 * 8)) = v16;
                        v16 += 1;
                    }
                    while (v11 > v16);
                }
                v0 = 0;
                v1 = 0;
            }
            if ((v11 <= 131071 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>))) && ((0 CONCAT v11) % v9 <= 31 || v11 <= 131071 || v15 == 0) && ((0 CONCAT v11) % v9 <= 31 || v11 <= 131071 || v1 != 0) && (v11 <= 131071 || v14 == 0 || (0 CONCAT v11) % v9 > 31))
            {
                v17 = 0;
                v2 = v11 - 1;
                while (true)
                {
                    v18 = (unsigned int)sub_4050e0() + v17;
                    if (v0 == 0)
                    {
                        v19 = *((long long *)(v10 + v17 * 8));
                        *((long long *)(v10 + v17 * 8)) = *((long long *)(v10 + v18 * 8));
                        v17 += 1;
                        *((unsigned long long *)(v10 + v18 * 8)) = v19;
                    }
                    else
                    {
                        v6 = v17;
                        v7 = 0;
                        v4 = v18;
                        v5 = 0;
                        v20 = (unsigned long long)(unsigned int)sub_409680();
                        v21 = (unsigned long long)(unsigned int)sub_409680();
                        if (v20 == 0)
                        {
                            v3[0] = v21;
                            v20 = (unsigned long long)(unsigned int)sub_406790();
                            v20[1] = v17;
                            v20[0] = v17;
                        }
                        if (v21 != 0)
                        {
                            v18 = v21[1];
                        }
                        else
                        {
                            v21 = (unsigned long long)(unsigned int)sub_406790();
                            v21[1] = v18;
                            v21[0] = v18;
                        }
                        tmp_9 = v20[1];
                        v20[1] = v18;
                        v3[0] = v21;
                        v21[1] = tmp_9;
                        v22 = sub_409640();
                        if (v22 == 0)
                        {
                            break;
                        }
                        v23 = sub_409640();
                        if (v23 == 0)
                        {
                            break;
                        }
                        *((unsigned long long [2])(v10 + v17 * 8)) = v20[1];
                        v17 += 1;
                    }
                    if (v0 == 0)
                    {
                        v25 = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(r12<8>, 0x3d<8>), Shr(r12<8>, 0x3c<8>), cc_ndep<8>);
                        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>) || v25 != 0)
                        {
                            break;
                        }
                        v10 = (unsigned int)sub_4067f0();
                    }
                    else
                    {
                        sub_4090e0();
                    }
                }
                if ((v9 <= v17 || v0 == 0) && (v9 <= v17 || v9 <= v17) && (v25 == 0 || v0 != 0) && (v0 == 0 || v22 != 0) && (v0 == 0 || v23 != 0) && (v9 <= v17 || v22 != 0) && (v9 <= v17 || v23 != 0) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>)) || v0 != 0))
                {
                    v27 = v10;
                    return v27;
                }
                sub_4069e0(); /* do not return */
            }
            sub_4069e0(); /* do not return */
        }
    }
    else
    {
        v10 = 0;
    }
    if (v9 == 1)
    {
        v10 = (unsigned int)sub_406790();
        *((unsigned long long *)v10) = (unsigned int)sub_4050e0();
    }
    if (v9 == 1 || v11 <= 131071 || v9 == 0 || (0 CONCAT v11) % v9 <= 31 && v14 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>)) || v15 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(r12<8>, 0x3<8>), Shl(r12<8>, 0x2<8>), cc_ndep<8>)) && (0 CONCAT v11) % v9 > 31 && v1 != 0)
    {
        v27 = v10;
        return v27;
    }
}

int sub_4049a0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_406990();
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_408a00()
{
    struct_0 *v1;  // rdi

    return v1->field_18;
}

int sub_4061e0()
{
}

int sub_4030b0()
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

typedef struct struct_0 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_0;

int sub_4032e0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rax

    v1->field_10 = 0;
    v1->field_0 = 0;
    return v2;
}

int sub_406f50()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long|unsigned long long|unsigned int v5;  // rdi
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
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep1
    unsigned int v45;  // cc_dep1
    unsigned int v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned long long v48;  // rax
    unsigned long long v49;  // r8

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
        if (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4242616)); */
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
        if ((*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v40 = v30;
                v5 = 6;
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
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v48 = tmp_11 * v28 * v28;
                    v33 = v48;
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
            case 14:
                v39 = v30;
                v5 = 5;
                do
                {
                    v33 = v33 * v39;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
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
                    v43 = v35;
                    v35 -= 1;
                }
                while (v43 != 1);
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
                    v44 = v37;
                    v37 -= 1;
                }
                while (v44 != 1);
            case 24:
                v38 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v38;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v45 != 1);
            case 32:
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = -1;
                    break;
                }
                else
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v49 = &v32[v31];
                *(v12) = v49;
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

extern char g_60f318;

int sub_402ff0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60f318 = v1;
    return v2;
}

int sub_4055da()
{
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

int sub_4074f0()
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

int sub_404d90()
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
    return sub_404800();
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
    struct struct_4 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_4;

int sub_4093c0()
{
    void tmp_10;  // tmp #10
    void tmp_19;  // tmp #19
    unsigned long long v0[2];  // [bp-0x20]
    unsigned long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long *v4;  // r12
    struct_0 *v5;  // rdi
    struct_3 *v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rax
    uint128_t v10;  // xmm1
    unsigned int v11;  // ymm1
    struct_2 *v12;  // rdx
    unsigned long|uint128_t|unsigned int v13;  // xmm1lq
    uint128_t v14;  // xmm0
    unsigned int v15;  // ymm0
    unsigned long long v16;  // xmm0lq
    unsigned long long v17;  // rax
    uint128_t v18;  // xmm0
    unsigned int v19;  // ymm0
    unsigned long long v20;  // xmm0lq
    struct_4 *v22;  // rdx
    uint128_t v23;  // xmm2
    unsigned int v24;  // ymm2
    uint128_t v25;  // xmm0
    uint128_t v26;  // xmm0
    unsigned int v27;  // ymm0
    unsigned long|uint128_t|unsigned int v28;  // xmm1
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
        v7 = sub_408700();
        if (v7 != 0)
        {
            if (v4 != 0)
            {
                *(v4) = v7;
            }
            return 0;
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v13 = 0;
            v12 = v6->field_28;
            v13 = v5->field_18;
            v9 = v6->field_10;
            v14 = 0;
            v15 = v9;
            xmm0<8> = Conv(128->64, (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0x8<64>), size=4, endness=Iend_LE))))
        }
        else
        {
            v10 = 0;
            tmp_10 = v6->field_18 % 2 | (unsigned int)v6->field_18 & 1;
            v9 = v6->field_10;
            v11 = tmp_10;
            v12 = v6->field_28;
            v13 = (unsigned long long)(unsigned int)xmm1<16> * 2;
            tmp_19 = v9;
            v17 = (unsigned int)v9 & 1;
            v18 = 0;
            v19 = tmp_19 >> 1 | v17;
            xmm0<8> = Conv(128->64, ((xmm0<16> * 0x2<8>) * Conv(32->128, Load(addr=(rdx<8> + 0x8<64>), size=4, endness=Iend_LE))))
        }
        if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
        {
            sub_408820();
            v22 = v6->field_28;
            v23 = 0;
            v24 = v6->field_28->field_8;
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                v25 = 0;
                v25 = (unsigned int)v5->field_10;
            }
            else
            {
                v26 = 0;
                v27 = v5->field_10 >> 1 | (unsigned int)v5->field_10 & 1;
                v25 = xmm0<16> * 2;
            }
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                v28 = 0;
                v28 = v5->field_18;
            }
            else
            {
                v29 = 0;
                v30 = v5->field_18 >> 1 | (unsigned int)v5->field_18 & 1;
                v28 = (unsigned long long)(unsigned int)xmm1<16> * 2;
            }
            if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
            {
                xmm0<16> = (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0xc<64>), size=4, endness=Iend_LE)))
                if (v22->field_10 == 0)
                {
                    v31 *= xmm2<16>;
                }
                if (((char)(BinaryOp CmpF & 69) & 1) != 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0)
                {
                    v32 = sub_4091c0();
                    if (v32 != 0)
                    {
                        v33 = sub_408700();
                    }
                }
            }
        }
    }
    if (...)
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
    if (v2 == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && v7 == 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v32 != 0 && ((char)(BinaryOp CmpF & 69) & 1) != 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v33 != 0)
    {
        abort(); /* do not return */
    }
    if (...)
    {
        return -18446744069414584321;
    }
    if (...)
    {
        v36 = v34[1];
        v35[0] = v2;
        v35[1] = v36;
        v34[1] = v35;
        v6->field_20 = v6->field_20 + 1;
        return 1;
    }
}

int sub_4050d0()
{
    unsigned long long *v1;  // rdi

    return *(v1);
}

int sub_408510()
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
            v5 = sub_409dd0();
            if (v5 >= 0)
            {
                v6 = sub_407390();
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
                sub_407390();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
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

double sub_408700()
{
    unsigned long long v1;  // rdi
    struct_1 *v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long *v6;  // rdx
    unsigned long long *v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long v10;  // rax
    unsigned long long v11[2];  // rax
    unsigned long long v12;  // rsi
    unsigned long long v14;  // rax
    struct_0 *v15;  // rbx
    unsigned long long v16;  // rsi
    struct_0 *v17;  // rax
    void v18;  // xmm0
    uint128_t v19;  // xmm0
    unsigned long v20;  // rcx
    void v21;  // xmm0

    v2 = v1;
    *(v6) = v7;
    v8 = *(v7);
    if (*(v7) != 0)
    {
        v7 = sub_4086d0();
        if (v8 != v1)
        {
            v1 = v3;
            v10 = *((long long *)(r12<8> + 56))();
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
                            v14 = *((long long *)(r12<8> + 56))();
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
        if ((v10 == 0 || (char)v20 == 0 || v15->field_8 == 0) && ((char)v20 == 0 || v15->field_8 == 0 || v8 != v1) && (v8 == v1 || v10 != 0 || v15->field_8 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v10 == 0 && v15->field_8 == 0 && v8 != v1 || v10 == 0 && v1 != *(v11) && v8 != v1)
    {
        return v18;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_4086b0;
extern int512_t g_4086c0;
extern int512_t g_40c1a0;

int sub_408ea0()
{
    unsigned long long v1;  // rbx
    struct_0 *v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    void|uint128_t v5;  // xmm1
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
            v4 = sub_408820();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_40c1a0;
            v3 = sub_408820();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2 == 0 || v2->field_10 == 0) && (v2 == 0 || v4 != 0) && (v2 != 0 || v3 != 0))
        {
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
            {
                v6 = 0;
                v6 = (unsigned int)v10;
            }
            else
            {
                v9 = 0;
                v11 = v10 % 2 | (unsigned long long)((unsigned int)v10 & 1);
                v6 = xmm0<16> * 2;
            }
            v12 = v6 / v5;
        }
        if ((v2 == 0 || v4 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2->field_10 != 0) && (v2 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0) && (v2 != 0 || v3 != 0) && (((char)(BinaryOp CmpF & 69) & 1) != 0 || v2->field_10 != 0))
        {
            v13 = (unsigned int)sub_408610();
            if (((char)(v13 >> 60) & 1) == 0 && [D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>) == 0)
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_4086b0 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_4086c0 : v17);
                        *((unsigned long *)(v1 + 64)) = v18;
                        *((long long *)(v1 + 72)) = 0;
                    }
                }
            }
        }
        if (...)
        {
            v19 = v1;
            v1 = 0;
            free(v19);
        }
    }
    v20 = v1;
    return v20;
}

int sub_4030a0()
{
}

int sub_405270()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax<8>;
}

typedef struct struct_2 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_2;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_1;

int sub_4032f0()
{
    unsigned long|char v0;  // [bp-0x48]
    void tmp_7;  // tmp #7
    char v1;  // [bp-0x3d]
    unsigned int v2;  // [bp-0x3c]
    unsigned long long v5;  // r13
    unsigned long long v6;  // rsi
    struct_2 *v7;  // rbx
    unsigned long long v8[3];  // rdi
    unsigned long v9;  // rdx
    char *v10;  // rdx
    unsigned long long|unsigned int v11;  // rbp
    unsigned long long v12;  // rdx
    struct_1 *v13;  // rax
    unsigned long long *v14;  // r14
    unsigned long long v15;  // rsi
    struct_1 *v16;  // r15
    struct_1 *v17;  // rax

    v5 = v9;
    v7 = v6;
    v14 = v8[2];
    v2 = v9;
    *((unsigned long *)&v1) = v9;
    v15 = *(v8) + v8[2];
    v16 = v8[2];
    if ((v7->field_0 & 16) == 0)
    {
        while (true)
        {
            v10 = v7->field_8;
            if (v7->field_8 < v7->field_10)
            {
                v7->field_8 = &v10[1];
                v11 = *(v10);
            }
            else
            {
                v0 = v15;
                v11 = __uflow((unsigned int)v7);
                if ((unsigned int)v11 == -1)
                {
                    if (v14 == v16 || (v7->field_0 & 32) != 0)
                    {
                        break;
                    }
                    if ((v7->field_0 & 32) == 0 && *(&((char *)&v16[-1].field_8)[7]) != v1)
                    {
                        v11 = v5;
                        if (v16 == v0)
                        {
                            v12 = v1;
                        }
                        else
                        {
                            v17 = &v16->padding_1;
                            v16->field_0 = v2;
                        }
                    }
                }
            }
            if (v7->field_8 < v7->field_10 || (unsigned int)v11 != -1)
            {
                v12 = v11;
                if (v16 != v15)
                {
                    v13 = v16;
                }
            }
            if ((unsigned int)v11 == -1 && (v7->field_0 & 32) == 0 && v16 == v0 && *(&((char *)&v16[-1].field_8)[7]) != v1 && v7->field_8 >= v7->field_10 || (v7->field_8 < v7->field_10 || (unsigned int)v11 != -1) && v16 == v15)
            {
                *((unsigned long long *)&v0) = v12;
                tmp_7 = *(v14);
                v14 = (unsigned long long)(unsigned int)sub_4068f0();
                v13 = (char *)v14 + *(v8);
                *((unsigned long long **)&((char *)v14)[16 + *(v8)]) = v14;
                v15 = tmp_7 + (char *)v14;
            }
            if ((unsigned int)v11 == -1 && (v7->field_0 & 32) == 0 && v16 == v0 && *(&((char *)&v16[-1].field_8)[7]) != v1 && v7->field_8 >= v7->field_10 || (v7->field_8 < v7->field_10 || (unsigned int)v11 != -1) && v16 == v15 || v16 != v15 && (v7->field_8 < v7->field_10 || (unsigned int)v11 != -1))
            {
                v16 = &v13->padding_1;
                *((unsigned long long *)&v13->field_0) = v12;
            }
            if (((unsigned int)v11 == -1 && (v7->field_0 & 32) == 0 && v16 == v0 && *(&((char *)&v16[-1].field_8)[7]) != v1 && v7->field_8 >= v7->field_10 || (v7->field_8 < v7->field_10 || (unsigned int)v11 != -1) && v16 == v15 || v16 != v15 && (v7->field_8 < v7->field_10 || (unsigned int)v11 != -1)) && v11 == (unsigned int)v5 || (unsigned int)v11 == -1 && (v7->field_0 & 32) == 0 && v7->field_8 >= v7->field_10 && *(&((char *)&v16[-1].field_8)[7]) == v1)
            {
                v17 = v16;
            }
            v17->field_8 = v17 - v14;
            return v8;
        }
    }
    return 0;
}

int sub_406aad()
{
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40c11f;
extern char g_60f4b8[2];

int sub_409860()
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
    unsigned long long|char [2] v9;  // r15
    unsigned long|char * v10;  // rbx
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
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_60f4b8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40c11f : (unsigned long long)nl_langinfo(0xe));
    if (g_60f4b8 == 0)
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
            v9 = &g_40c11f;
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
                            if ((unsigned int)v26 != 35 && (unsigned int)v26 != 32)
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
                                        v9 = &g_40c11f;
                                        v10 = (tmp_10 == 0? &g_40c11f : tmp_10);
                                        free(NULL);
                                        sub_407390();
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && (unsigned int)v26 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v28 > 1 && (unsigned int)v26 != 32)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && (unsigned int)v26 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v28 > 1 && (unsigned int)v26 != 32) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40c11f : tmp_10);
                            sub_407390();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1)
                    {
                        v9 = &g_40c11f;
                    }
                    else if (((unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40c11f;
            free(v17);
        }
        *((char *[2])&g_60f4b8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40c11f : tmp_10), v9);
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

int sub_40614c()
{
    unsigned long long v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    char *v4;  // rdi
    char *v5;  // rsi
    unsigned long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r12
    unsigned long long v10;  // r13
    unsigned long long v11;  // rbp
    unsigned int *v12;  // r12
    void *v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long|unsigned int v18;  // r13
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13

    fopen(v4, v5);
    if (v7 != 0)
    {
        v11 = (unsigned int)sub_405fa0();
        v12 = __errno_location();
        v18 = *(v12);
        v13 = sub_407390();
        if (v13 == 0)
        {
            v14 = v11;
            v15 = v0;
            v16 = v2;
            v17 = v3;
            return v11;
        }
        if (v14 != 0)
        {
            v18 = *(v12);
            free(v14);
        }
        *((unsigned long *)&v12) = v18;
        v19 = v0;
        v20 = v2;
        v21 = v3;
        return 0;
    }
    v8 = v0;
    v9 = v2;
    v10 = v3;
    return 0;
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

extern unsigned int g_40c0c0;
extern unsigned int g_40c104;

int sub_407c50()
{
    struct_1 *|struct_0 * v0;  // [bp-0x88]
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
    unsigned long v15;  // r12
    char v16[2];  // rdx
    unsigned long|unsigned int v17;  // eax
    unsigned long long v18;  // rax
    char *|unsigned long long|char [2] v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9d
    unsigned long|unsigned long long * v26;  // rax
    unsigned long|unsigned int v27;  // rdx
    unsigned long v29;  // rax
    char v30[3];  // rcx
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
    unsigned long|unsigned long long v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long|unsigned int v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char *|char [2] v50;  // r15
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
                        sub_407550();
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
                    v0->field_0 = v42;
                    if (v42 != v39)
                    {
                        if ((unsigned int)v42 != v8->field_30)
                        {
                            sub_407550();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v42;
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
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_407630();
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
                if (v0->field_0 != (unsigned int)v46)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40c0c0, 0x5);
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
            dcgettext(0x0, 0x40c104, 0x5);
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
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40c0c0, 0x5);
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
        v45 = (unsigned int)sub_407630();
    }
    v63 = v45;
    return v63;
}

int sub_408300()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_407c50();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_408ae0()
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
    struct_0 *v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long|unsigned long long v11;  // rbx
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
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, xmm1lq<8>, 0x0<64>, cc_ndep<8>)))
    {
    }
    else
    {
        tmp_14 = v13;
    }
    __fprintf_chk();
}

int sub_4061d0()
{
}

int sub_404e90()
{
}

int sub_4069c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60f2b8;
extern uint128_t g_60f2c0;
extern unsigned int g_60f2d0;
extern int512_t g_60f340;

int sub_404800()
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
    v17 = g_60f2b8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60f2d0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60f2b8 != 6353600)
            {
                v16 = sub_4067f0();
                g_60f2b8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4067f0();
                v17 = v15;
                g_60f2b8 = v15;
                *(v15) = g_60f2c0;
            }
            memset(&v17[(long long)(int)g_60f2d0], 0x0, (int)((unsigned int)v13 + 1 - g_60f2d0) * 16);
            g_60f2d0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4069e0(); /* do not return */
        }
    }
    if (g_60f2d0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4035d0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6353728)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_406790();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4035d0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_406133()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v5;  // r13
    unsigned long v6;  // r12
    unsigned long v7;  // rbx

    v3 = v5;
    v2 = v6;
    v1 = stack_base + 0;
    v0 = v7;
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

int sub_4091c0()
{
    void tmp_15;  // tmp #15
    void *v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long|unsigned int v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    struct_1 *v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    struct_0 *v11;  // rdi
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
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
        {
            v18 = 0;
            v18 = (unsigned int)v13;
        }
        else
        {
            tmp_15 = v14;
            v16 = 0;
            v17 = tmp_15 >> 1 | (unsigned long long)((unsigned int)v14 & 1);
            v18 = xmm0<16> * 2;
        }
        xmm0<16> = (xmm0<16> / Conv(32->128, Load(addr=(Load(addr=(rdi<8> + 0x28<64>), size=8, endness=Iend_LE) + 0x8<64>), size=4, endness=Iend_LE)))
    }
    if (*((long long *)&v2) != 0 && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v11->field_28->field_10 != 0) && (v11->field_28->field_10 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0) && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) == 0)
    {
        if (v11->field_10 != *((long long *)&v2))
        {
            v0 = calloc(*((long long *)&v2), 0x10);
            if (v0 != 0)
            {
                v2 = (unsigned int)sub_408610();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_4088a0();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_4088a0();
                    if (v22 != 0)
                    {
                        v23 = sub_4088a0();
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
    if (((char)(BinaryOp CmpF & 69) & 1) == 0 && *((long long *)&v2) == 0 || v11->field_28->field_10 == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || v11->field_28->field_10 != 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && v0 == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if ((char)v21 != 0 || v11->field_10 != *((long long *)&v2))
    {
        v24 = v21;
        return v24;
    }
}

extern char g_60f440;

int sub_404a60()
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
    v3 = (v2 == 0? &g_60f440 : v2);
    *((int *)(tmp_11? &g_60f440 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60f440;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60f440;
        abort(); /* do not return */
    }
}

int sub_4035d0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long|unsigned long long|char v4;  // [bp-0xc0]
    unsigned long|unsigned long long|char v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char v9;  // [bp-0x98]
    unsigned long|unsigned long long|unsigned int v10;  // [bp-0x90]
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
    unsigned long long v27;  // [bp+0x18]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r15
    unsigned long v30;  // r8
    unsigned long long v31;  // rcx
    unsigned long v32;  // r9
    unsigned long|unsigned long long|char v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long|unsigned long long v39;  // r11
    unsigned long|unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long|unsigned long long|unsigned short v46;  // rax
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
    unsigned long|unsigned long long|unsigned int v77;  // rsi
    unsigned long|unsigned long long|unsigned int|char v78;  // r13
    unsigned long long v79;  // r14
    unsigned long|unsigned long long v80;  // r12
    unsigned int v81;  // r13d
    unsigned long long v82;  // r11
    char v83;  // dl
    unsigned long|char v84;  // rax
    unsigned long long v85;  // cc_dep1
    unsigned long|char v86;  // dl
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    unsigned long|unsigned long long|char v89;  // rdx
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
            v26 = (unsigned int)sub_4034d0();
            v27 = (unsigned int)sub_4034d0();
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
                            v89 = 0;
                            v78 = 0;
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
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                    case 32:
                        v40 = 32;
                        v89 = (unsigned int)v39 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (unsigned int)v39 == 2;
                        v35 = 0;
                    case 35: case 126:
                        v89 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v89 = (unsigned int)v39 == 2;
                        break;
                        v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                        v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                        if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) != 0)
                        {
                            v78 = 0;
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v89 = (unsigned int)v39 == 2;
                        }
                        if ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0)
                        {
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
                    v76 = (unsigned int)sub_4035d0();
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
                            v76 = (unsigned int)sub_4035d0();
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
                    v46 = sub_408320();
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
                v87 = v89;
                *((unsigned long long *)&v4) = v4 & v87;
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
            if (v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v5 != 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v5 == 0 || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && v6 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v76 == 0 && (v81 == 2 & v17) != 0)
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

extern unsigned int g_60f2d4;
extern unsigned int g_60f2d8;
extern unsigned int g_60f2dc;
extern unsigned int g_60f480;
extern unsigned int g_60f484;
extern unsigned int g_60f488;
extern unsigned long long g_60f490;
extern unsigned long long g_60f4c8;

int sub_408220()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60f480 = g_60f2dc;
    g_60f484 = g_60f2d8;
    v1 = (unsigned int)v2;
    v0 = &g_60f480;
    g_60f2dc = g_60f480;
    g_60f4c8 = g_60f490;
    g_60f2d4 = g_60f488;
    return sub_407c50();
}

int sub_404d00()
{
}

int sub_404ec0()
{
}

extern struct_0 *g_60f2b8;
extern unsigned long long g_60f2c0;
extern unsigned long long g_60f2c8;
extern unsigned int g_60f2d0;
extern unsigned long long g_60f340;

int sub_404c10()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60f2d0;
    if (g_60f2d0 > 1)
    {
        v2 = &g_60f2b8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60f2b8[(unsigned long long)(g_60f2d0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60f2b8->field_8 != 6353728)
    {
        v1 = free(g_60f2b8->field_8);
        g_60f2c0 = 0x100;
        g_60f2c8 = &g_60f340;
    }
    if (g_60f2b8 != 6353600)
    {
        v1 = free(g_60f2b8);
        g_60f2b8 = &g_60f2c0;
    }
    g_60f2d0 = 1;
    return v1;
}

extern int512_t g_60f268;

int sub_409f90()
{
}

int sub_406af0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_406a20();
}

int sub_404ce0()
{
}

extern char g_60f308;
extern unsigned long long g_60f310;

int sub_402c01()
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
        return sub_402bab();
    }
    return v4;
}

extern int512_t g_60f440;

int sub_4049f0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60f440 : v1)) = v2;
    return &g_60f440;
}

extern unsigned long long g_40c11f;

int sub_408320()
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
        v5 = &g_40c11f;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4085b0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4065f0()
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
    return sub_4061f0();
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4058f0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_4088a0()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r14
    unsigned long long v3[4];  // rsi
    unsigned long long v4[4];  // r13
    struct_0 *v5;  // rdi
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
                        v8 = sub_4086d0();
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
                    v13 = (unsigned long long)(unsigned int)sub_4086d0();
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
                        if (v14 != 0 || v6[9] != 0)
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

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_408e80()
{
    struct_0 *v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

extern int512_t g_40a836;
extern int512_t g_40a83a;

int sub_4034d0()
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
        v3 = sub_409860();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40a836 : 4237377);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40a83a : 4237373);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[5] == 0 && v3[3] == 45 && (v3[0] & 223) == 85 && v3[4] == 56 && (v3[1] & 223) == 84 && v1 == v2 && (v3[2] & 223) == 70 || (v3[1] & 223) == 66 && v3[3] == 56 && v4 == 71 && v3[2] == 49 && v1 == v2 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

int sub_408280()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_408220();
}

int sub_403410()
{
}

int sub_408c30()
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
        v6 = sub_4086d0();
        while (true)
        {
            if (v9 != v1)
            {
                v1 = v3;
                v7 = *((long long *)(r12<8> + 56))();
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

int sub_408e40()
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
            v4 = (0 CONCAT tmp_16) % v3 >> 64;
        }
        while ((char)v2 != 0);
    }
    return v4;
}

int sub_408610()
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
                    v4 = (0 CONCAT v2) % v7 >> 64;
                    v5 = (0 CONCAT v2) % v7 >> 64;
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

extern int512_t g_60f440;

int sub_404a90()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60f440 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4035d0();
}

int sub_402c58() { crash_skku;
}
int sub_405200()
{
    unsigned int v1;  // [bp+0x100008]
    void *v2;  // rdi

    __explicit_bzero_chk();
    free(v2);
    *(__errno_location()) = v1;
    return sub_405a60();
}

int sub_4082c0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_407c50();
}

int sub_406830()
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
        sub_4069e0(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_408a70()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2[2];  // rcx
    struct_0 *v3;  // rax
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

int sub_409640()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_4093c0();
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

int sub_405010()
{
}

int fini()
{
    unsigned long v1;  // rax

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

    v10 = sub_4018a0();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6352432 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern char g_405590;

int sub_4055f0()
{
    void tmp_2;  // tmp #2
    void tmp_27;  // tmp #27
    unsigned long long v0;  // [bp-0x50]
    unsigned int|char v1;  // [bp-0x48]
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbp
    unsigned long v5;  // rdi
    unsigned long long *v6;  // rbx
    unsigned short v7;  // dx
    unsigned long long v8;  // rax
    void *v9;  // r13
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r14
    unsigned long long v14[2];  // rbx
    unsigned long long v16;  // rbp
    unsigned long long v18;  // r15
    unsigned long v19;  // rbp
    char *v21;  // rdi
    char *v22;  // rsi
    unsigned long long v23;  // rcx
    unsigned long v24;  // d
    unsigned long long v25;  // r14
    char *v27;  // rsi
    unsigned long long v28;  // rcx
    char *v29;  // rdi
    unsigned long v30;  // rbp
    unsigned long long v32;  // rsi
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rbp
    unsigned long v37;  // r14
    unsigned long long v39;  // rsi
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rbp
    unsigned long long v45;  // rsi
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v50;  // rax

    if (v3 != 0)
    {
        v4 = v3;
        if (v5 != 0)
        {
            v9 = (unsigned long long)(unsigned int)sub_408510();
            if (v9 != 0)
            {
                v14[0] = v9;
                v14[1] = &g_405590;
                v14 = (unsigned long long)(unsigned int)sub_406790();
                v14[2] = v5;
                setvbuf(v9, &v14[3], 0x0, (v4 <= 0x1000? v4 : 0x1000));
            }
            else
            {
                v11 = 0;
            }
        }
        else
        {
            *(v6) = 0;
            v6 = (unsigned long long)(unsigned int)sub_406790();
            v6[1] = &g_405590;
            v6[2] = 0;
            v6[3] = 0;
            v8 = open("/dev/urandom", 0x0, v7);
            if ((unsigned int)v8 >= 0)
            {
                v16 = __read_chk(v8, (unsigned int)v6 + 32, (!(rbp<8> <= 0x800)? 0x800 : rbp<8>), 0x1018);
                close(v8);
                if (v16 <= 2047)
                {
                    tmp_2 = v16;
                    tmp_27 = (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>);
                    v18 = (char *)&v6[4] + ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16);
                    v19 = ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16) + (!(0x800 - ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16) <= 16)? 16 : 0x800 - ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16));
                    *((int *)&v0) = (!(0x800 - (tmp_27? 0 : tmp_2) <= 16)? 16 : 0x800 - (tmp_27? 0 : tmp_2));
                    gettimeofday(&v1, NULL);
                    v21 = v18;
                    v22 = &v1;
                    for (v23 = v0; v23 != 0; v22 = &v22[v24])
                    {
                        v23 -= 1;
                        *(v21) = v1;
                        v21 = &v21[v24];
                    }
                    if (v19 <= 2047)
                    {
                        v25 = (!(0x800 - rbp<8> <= 4)? 4 : 0x800 - rbp<8>);
                        v27 = &v1;
                        v1 = getpid();
                        v28 = v25;
                        v12 = v25 + v19;
                        for (v29 = (char *)&v6[4] + v19; v28 != 0; v27 = &v27[v24])
                        {
                            v28 -= 1;
                            *(v29) = v1;
                            v29 = &v29[v24];
                        }
                    }
                }
            }
            else
            {
                v12 = 20;
                gettimeofday(&v1, NULL);
                *((int128_t *)(v11 + 32)) = *((int128_t *)&v1);
                v1 = getpid();
                *((unsigned int *)(v11 + 48)) = v1;
            }
            if ((unsigned int)v8 < 0 || v16 <= 2047 && v12 <= 2047 && v19 <= 2047)
            {
                v30 = (!(0x800 - r14<8> <= 4)? 4 : 0x800 - r14<8>);
                v32 = (char *)&v6[4] + v12;
                v1 = getppid();
                if ((unsigned int)v30 != 0)
                {
                    v34 = 0;
                    do
                    {
                        v35 = v34;
                        v34 = (unsigned int)v34 + 1;
                        *((char *)(v32 + v35)) = v1;
                    }
                    while ((unsigned int)v34 < (unsigned int)v30);
                }
                v36 = v30 + v12;
                if (v36 <= 2047)
                {
                    v37 = (!(0x800 - rbp<8> <= 4)? 4 : 0x800 - rbp<8>);
                    v39 = (char *)&v6[4] + v36;
                    v1 = getuid();
                    if ((unsigned int)v37 != 0)
                    {
                        v41 = 0;
                        do
                        {
                            v42 = v41;
                            v41 = (unsigned int)v41 + 1;
                            *((char *)(v39 + v42)) = v1;
                        }
                        while ((unsigned int)v41 < (unsigned int)v37);
                    }
                    v43 = v36 + v37;
                    if (v43 <= 2047)
                    {
                        v45 = (char *)&v6[4] + v43;
                        v1 = getgid();
                        if ((unsigned int)(!(0x800 - v43 <= 4)? 4 : 0x800 - v43) != 0)
                        {
                            v47 = 0;
                            do
                            {
                                v48 = v47;
                                v47 = (unsigned int)v47 + 1;
                                *((char *)(v45 + v48)) = v1;
                            }
                            while ((unsigned int)v47 < (!(0x800 - v43 <= 4)? 4 : 0x800 - v43));
                        }
                    }
                }
            }
            sub_405d60();
        }
    }
    else
    {
        v11 = (unsigned int)sub_406790();
        *((long long *)v11) = 0;
        *((char **)(v11 + 8)) = &g_405590;
        *((long long *)(v11 + 16)) = 0;
    }
    v50 = v11;
    return v50;
}

int sub_407450()
{
    void *v2;  // rax
    unsigned long v3;  // rdi
    unsigned long long v4;  // rax
    unsigned int v5;  // r13d
    unsigned long long v6;  // rax
    unsigned int *v7;  // rax
    unsigned short v8;  // dx
    unsigned long long v10;  // rax
    unsigned long v11;  // rdi
    unsigned long long v14;  // rax

    if (v2 != 0 && v3 != 0)
    {
        v4 = fileno(v2);
        v5 = v4;
        v6 = dup2(v4, v4);
        if (v6 < 0)
        {
            v7 = __errno_location();
            if (*(v7) == 9 && v5 != (unsigned int)v3)
            {
                v10 = dup2(v3, v5);
                v3 = (unsigned int)open("/dev/null", 0x80000, v8);
                if (v10 >= 0)
                {
                    close(v11);
                }
                else
                {
                    close(v11);
                }
            }
        }
    }
    if (v2 == 0 || v3 == 0 || v6 >= 0 || *(v7) != 9 || v10 < 0 && v5 != (unsigned int)v3)
    {
        v2 = (unsigned long long)freopen();
        return v14;
    }
}

int sub_404fc0()
{
}

int sub_4083a0()
{
    unsigned long long v1;  // rdx
    void *|char v2;  // dil
    unsigned long|char v3;  // rsi
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
            while ((v2 & 7) != 0 && v1 != 1 && *((char *)v2) != (char)v3);
            if (true)
            {
                return 0;
            }
            else if (v1 != 1)
            {
                v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
            }
            else if ((v2 & 7) != 0 && v1 != 1)
            {
                v5 = v2;
            }
        }
        if ((v2 & 7) == 0 || v3 != *((char *)v2))
        {
            v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2))
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 == *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 || v3 == *((char *)v2) && v1 != 0 && (v2 & 7) != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v3 == *((char *)v2))
    {
        return v5;
    }
}

int sub_408dc0()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_408a20()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rdi
    struct_0 *v4;  // rdx
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

int sub_403420()
{
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_408a10()
{
    struct_0 *v1;  // rdi

    return v1->field_20;
}

int sub_405ab0() { crash_skku_timeout;
}
int sub_406b20()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long|unsigned long long|unsigned int v5;  // rdi
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
            v33 = strtoul();
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
        if (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4241784)); */
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
        if ((*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v34 = v30;
                v35 = 6;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v42 = v35;
                    v35 -= 1;
                }
                while (v42 != 1);
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
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
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
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
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v45 != 1);
            case 18: case 50:
                v39 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v39;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
            case 23:
                v36 = v30;
                v5 = 8;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v43 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v43 != 1);
            case 24:
                v37 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v37;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v44 != 1);
                break;
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v48 = &v32[v31];
                *(v12) = v48;
            case 53:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 = -1;
                    break;
                }
                else
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
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

extern unsigned int g_60f4c0;

int sub_409de0()
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
        if (g_60f4c0 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_409de0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60f4c0 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_60f4c0 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_409de0();
        }
        if ((g_60f4c0 < 0 || *(v12) == 22) && (g_60f4c0 < 0 || (unsigned int)v15 < 0) && (g_60f4c0 < 0 || (unsigned int)v15 >= 0) && (g_60f4c0 == -1 || g_60f4c0 >= 0) && (g_60f4c0 >= 0 || (unsigned int)v15 >= 0))
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

int sub_4068f0() { crash_skku;
}
int sub_404cd0()
{
}

int sub_406990()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406790();
}

extern unsigned int g_40b5ba;
extern unsigned int g_40b5be;
extern unsigned int g_40b5ce;
extern unsigned int g_40b5e5;
extern unsigned int g_40b640;
extern unsigned int g_40b710;
extern unsigned int g_40b730;
extern unsigned int g_40b758;
extern unsigned int g_40b780;
extern unsigned int g_40b7b0;

int sub_4061f0()
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
    dcgettext(0x0, 0x40b5ba, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b640, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40b5be, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40b5ce, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40b5e5, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40b710, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40b730, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40b758, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40b780, 0x5);
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
        dcgettext(0x0, 0x40b7b0, 0x5);
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

int sub_405050()
{
}

extern int512_t g_60f440;

int sub_4049e0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60f440 : v1));
}

int sub_404d20()
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
    return sub_404800();
}

int sub_4050e0()
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
            sub_405900();
            v11 = &v0;
            do
            {
                v11 = &v1;
                v13 = v13 * 0x100 + 255;
                v14 = v14 * 0x100 + v0;
            }
            while (v7 > v13);
        }
        if (v13 == v7 && v13 < v7 || v13 == v7 && v13 >= v7)
        {
            v4[2] = 0;
            v4[1] = 0;
        }
        if (v13 < v7 && v13 != v7 || v13 != v7 && v13 >= v7)
        {
            v15 = (0 CONCAT v13 - v7) % v6 >> 64;
            v16 = (0 CONCAT v13 - v7) % v6;
            v17 = v13 - ((0 CONCAT v13 - v7) % v6 >> 64);
            v18 = (0 CONCAT v14) % v6;
            v19 = (0 CONCAT v14) % v6 >> 64;
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

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4089f0()
{
    struct_0 *v1;  // rdi

    return v1->field_10;
}

extern unsigned long long __progname_full;
extern unsigned long long g_60f328;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403430()
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
        g_60f328 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_405000()
{
}

extern unsigned int g_40b601;
extern unsigned int g_40b62c;
extern unsigned int g_40b858;

int sub_406710()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b601, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b62c, 0x5));
    dcgettext(0x0, 0x40b858, 0x5);
}

int sub_4085b0()
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

int sub_4086c0()
{
    unsigned long v1;  // rax

    return v1;
}

extern unsigned int g_40b92f;
extern unsigned int g_60f278;

int sub_4069e0()
{
    dcgettext(0x0, 0x40b92f, 0x5);
    error(g_60f278, 0x0, "%s");
}

int sub_407410()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4074f0();
    }
}

int sub_404fb0()
{
}

int sub_404ed0()
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
    return sub_404800();
}

extern int512_t g_60f440;

int sub_404a00()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60f440 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60f440 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern unsigned long long program_invocation_short_name;

int sub_402bab()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_408d50()
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

int sub_409dd0()
{
}

int sub_404fe0()
{
}

int sub_4086b0()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_406650()
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
        return sub_4061f0();
    }
}

int sub_406a0c()
{
    abort(); /* do not return */
}

int sub_405d60()
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

int sub_406960()
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
        sub_4069e0(); /* do not return */
    }
}

