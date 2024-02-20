#include "decompile_angr.h"
int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern unsigned int g_40db92;

int sub_4043e0()
{
    char v0;  // [bp-0xb8]
    unsigned int v1;  // [bp-0xa0]
    unsigned int v3;  // esi
    unsigned long|unsigned long long v4;  // rax
    unsigned long v5;  // rdi
    unsigned int|unsigned long v8;  // rbx
    unsigned int|unsigned long v9;  // rbp
    unsigned int v10;  // ebx
    unsigned int v11;  // cc_dep1

    if ((v3 & -131329) != 0)
    {
        v4 = sub_4095d0();
        v9 = v4;
        v8 = v3 & -131329 | (unsigned int)v4;
        if ((unsigned int)v4 >= 0)
        {
            if ((unsigned int)v4 != v8 && (v8 & 0x10000) != 0 && __fxstat(0x1, v5, (unsigned int)&v0) == 0)
            {
                v4 = v1 & 0xf000;
                if (((unsigned short)v1 & 0xf000) != 0x4000)
                {
                    *(__errno_location()) = 20;
                }
            }
            while (true)
            {
                v10 = v8 & -65537;
                v11 = sub_4095d0();
                v4 = (unsigned long long)v11 + 1;
                if (v10 == v9 || !((char)(v11 + 1 == 0)))
                {
                    break;
                }
                v9 = sub_4083e0();
                v8 = dcgettext(0x0, 0x40db92, 0x5);
                __errno_location();
                v4 = sub_4041e0();
            }
        }
    }
    return v4;
}

int sub_408d20()
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
            sub_408f10(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_40a500()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40a480();
}

int sub_405ab0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_409550();
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

extern unsigned long long g_614678;

int sub_405b10()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_614678 = v1;
    return v2;
}

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_409390()
{
    unsigned int|void v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    struct_0 *v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r13
    struct_0 *v7;  // r12
    unsigned long long v8;  // rax
    unsigned long long v10;  // rdx
    unsigned long|unsigned long long v11;  // rbx
    unsigned long long v12;  // rbp
    char *|void * v13;  // rbx
    unsigned long long *v14;  // rdx
    void *v15;  // r15
    unsigned long v16;  // r14

    *((int128_t *)&v0) = *((int128_t *)&v4->field_0);
    v2 = v4->field_10;
    if (v5 != 0)
    {
        v6 = v5;
        v7 = v4;
        v12 = v5;
        v11 = 0;
        do
        {
            v8 = (unsigned int)(int)v0;
            if ((int)v0 <= 47)
            {
                v0 = (unsigned int)v8 + 8;
                v10 = v8 + v4->field_10;
            }
            else
            {
                v10 = (long long)(&v0)[8];
                v1 = (long long)(&v0)[8] + 8;
            }
            v11 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rbx<8>, Call (target: 0x401c30<64>, prototype: (char*) -> unsigned long (64 bits), args: [Load(addr=rdx<8>, size=8, endness=Iend_LE)]), cc_ndep<8>)? -1 : rbx<8> + strlen(*((long long *)rdx<8>)));
            v12 -= 1;
        }
        while (v12 != 1);
        if (v11 <= 2147483647)
        {
            v13 = (unsigned long long)(unsigned int)sub_408cc0();
            while (true)
            {
                if (*((int *)&v4->field_0) <= 47)
                {
                    v14 = (unsigned int)*((int *)&v4->field_0) + v7->field_10;
                    *((int *)&v7->field_0) = *((int *)&v4->field_0) + 8;
                }
                else
                {
                    v14 = v7->field_8;
                    v7->field_8 = v7->field_8 + 8;
                }
                v15 = *(v14);
                v16 = strlen(*(v14));
                memcpy(v13, v15, v16);
                v13 += v16;
                v6 -= 1;
                if (v6 == 1)
                {
                    break;
                }
            }
        }
        else
        {
            *(__errno_location()) = 75;
        }
    }
    else
    {
        v13 = (unsigned long long)(unsigned int)sub_408cc0();
    }
    if (v11 <= 2147483647 || v5 == 0)
    {
        *(v13) = 0;
    }
    return stack_base + 0;
}

extern unsigned int g_6145c0;
extern unsigned long long stderr[7];

int sub_4041e0()
{
    unsigned long v0;  // [bp-0xf0]
    unsigned int v1;  // [bp-0xe0]
    unsigned int v2;  // [bp-0xdc]
    unsigned long v3;  // [bp-0xd8]
    unsigned long v4;  // [bp-0xd0]
    unsigned long v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    void v8;  // [bp-0x98]
    void v9;  // [bp-0x88]
    void v10;  // [bp-0x78]
    void v11;  // [bp-0x68]
    void v12;  // [bp-0x58]
    void v13;  // [bp-0x48]
    void v14;  // [bp-0x38]
    void v15;  // [bp-0x28]
    unsigned long v17;  // rcx
    unsigned long v18;  // r8
    unsigned long v19;  // r9
    char v20;  // al
    void v21;  // xmm0
    void v22;  // xmm1
    void v23;  // xmm2
    void v24;  // xmm3
    void v25;  // xmm4
    void v26;  // xmm5
    void v27;  // xmm6
    void v28;  // xmm7
    char *v29;  // rax
    unsigned long v30;  // rdx

    v5 = v17;
    v6 = v18;
    v7 = v19;
    if (v20 != 0)
    {
        v8 = v21;
        v9 = v22;
        v10 = v23;
        v11 = v24;
        v12 = v25;
        v13 = v26;
        v14 = v27;
        v15 = v28;
    }
    if (g_6145c0 > 0)
    {
        v29 = stderr[5];
        if (stderr[5] < stderr[6])
        {
            stderr[5] = stderr[5] + 1;
            *(v29) = 10;
        }
        else
        {
            v0 = v30;
            __overflow();
        }
        g_6145c0 = 0;
    }
    v3 = stack_base + 8;
    v1 = 24;
    v2 = 48;
    v4 = stack_base + -200;
    return sub_408710();
}

int sub_4082e0()
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

extern unsigned int g_410d60;
extern unsigned int g_410d94;

int sub_409eb0()
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
    unsigned long v15;  // r12
    char v16[2];  // rdx
    unsigned int|unsigned long v17;  // eax
    unsigned long long v18;  // rax
    char [2]|unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned int|unsigned long long v24;  // r9d
    unsigned long|unsigned long long * v26;  // rax
    unsigned int|unsigned long v27;  // rdx
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
                        v5 = v5;
                        sub_4097b0();
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
                            sub_4097b0();
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
        v45 = (unsigned int)sub_409890();
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
                        dcgettext(0x0, 0x410d60, 0x5);
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
            dcgettext(0x0, 0x410d94, 0x5);
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
                    dcgettext(0x0, 0x410d60, 0x5);
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
        v45 = (unsigned int)sub_409890();
    }
    v63 = v45;
    return v63;
}

extern unsigned int g_410db4;
extern unsigned int g_410dcf;

int sub_40a790()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x410db4, 0x5);
    }
    dcgettext(0x0, 0x410dcf, 0x5);
    sub_408610();
    sub_408300();
}

int sub_408710()
{
}

extern int512_t g_6147a0;

int sub_407fe0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6147a0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6147a0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_408610()
{
}

int sub_4094c0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    if (*((char *)v2) == 37 && *((char *)(v2 + 1)) == 115)
    {
        v3 = 0;
        do
        {
            v3 += 1;
            v4 = (char)*((char *)(v2 + v3 * 2));
        }
        while (*((char *)(v2 + (v3 << 1) + 1)) == 115 && v4 == 37 && (char)v4 != 0);
        if (true)
        {
            return sub_409390();
        }
    }
    if (*((char *)v2) == 0 || *((char *)v2) == 37 && *((char *)(v2 + 1)) == 115)
    {
        return sub_409390();
    }
    if (*((char *)v2) == 37 || *((char *)v2) != 0)
    {
        if (sub_40a600() >= 0)
        {
            return v0;
        }
        else if (*(__errno_location()) != 12)
        {
            return 0;
        }
        sub_408f10(); /* do not return */
    }
}

int sub_40a930()
{
    unsigned long long v1;  // rax

    v1 = sub_40a670();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_40a790();
        sub_40a810();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

int sub_409710()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_409750();
    }
}

extern uint128_t g_6147a0;
extern uint128_t g_6147b0;
extern uint128_t g_6147c0;
extern unsigned long long g_6147d0;

int sub_408520()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6147a0;
    *((uint128_t *)&v1) = g_6147b0;
    *((uint128_t *)&v2) = g_6147c0;
    v4 = g_6147d0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_407de0();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

extern unsigned int g_6144f0;

int sub_403d30()
{
    unsigned int v1;  // edi
    unsigned long v2;  // rax

    g_6144f0 = v1;
    return v2;
}

int sub_408d60()
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
        sub_408f10(); /* do not return */
    }
}

extern unsigned int g_410dec;
extern unsigned long long stderr[7];

int sub_40a810()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x410dec, 0x5), stderr);
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
                    sub_408630();
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
                sub_408630();
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

int sub_405c70()
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

int sub_4083f0()
{
}

extern unsigned int g_614334;
extern unsigned int g_614338;
extern unsigned int g_61433c;
extern unsigned int g_6147e0;
extern unsigned int g_6147e4;
extern unsigned int g_6147e8;
extern unsigned long long g_6147f0;
extern unsigned long long g_614820;

int sub_40a480()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6147e0 = g_61433c;
    g_6147e4 = g_614338;
    v1 = (unsigned int)v2;
    v0 = &g_6147e0;
    g_61433c = g_6147e0;
    g_614820 = g_6147f0;
    g_614334 = g_6147e8;
    return sub_409eb0();
}

int sub_40a600()
{
    unsigned long long v0;  // [bp-0x10]
    void *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long *v4;  // rdi

    v2 = sub_40afc0();
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

extern unsigned int g_40dbd4;
extern unsigned long long g_614588;
extern unsigned long long g_6145d8;
extern unsigned long long g_6145f0;
extern unsigned long long g_6145f8;
extern unsigned long long g_614648;

int sub_404e50()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v3;  // rbx
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbp

    g_6145d8 = g_6145d8 + v3;
    if (g_614648 == v3)
    {
        g_614588 = 0;
        g_6145f0 = g_6145f0 + 1;
        return v0;
    }
    v3 = sub_404c30();
    v5 = (unsigned int)sub_4083e0();
    v6 = dcgettext(0x0, 0x40dbd4, 0x5);
    __errno_location();
    sub_4041e0();
    if (v4 != 0)
    {
        g_6145f8 = g_6145f8 + 1;
    }
    sub_404e30(); /* do not return */
}

int sub_40810b()
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
    v7 = (unsigned int)sub_406bb0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_408cc0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_406bb0();
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

    v10 = sub_401a60();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6372912 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern unsigned int g_40dba7;
extern unsigned int g_40dbbd;

int sub_404760()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rbx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rbx

    v1 = close(0x0);
    if (v1 >= 0)
    {
        v2 = close(0x1);
        if ((unsigned int)v2 >= 0)
        {
            return v2;
        }
    }
    else
    {
        v3 = (unsigned int)sub_4083e0();
        v4 = dcgettext(0x0, 0x40dba7, 0x5);
        __errno_location();
        sub_4041e0();
    }
    if (v1 < 0 || (unsigned int)v2 < 0)
    {
        v7 = (unsigned int)sub_4083e0();
        v8 = dcgettext(0x0, 0x40dbbd, 0x5);
        __errno_location();
        sub_4041e0();
    }
}

int sub_4082b0()
{
}

int sub_408630()
{
}

extern char g_6142b9;
extern char g_6142ba;
extern unsigned long long g_614580;
extern unsigned long long g_614588;
extern unsigned long long g_614590;
extern unsigned long long g_6145a0;
extern unsigned long long g_614640;
extern unsigned long long g_614648;

int sub_404ef0()
{
    unsigned long v1;  // rsi
    unsigned long long v2;  // rdi
    char *v3;  // rdx
    unsigned long long v4;  // rbx
    unsigned long|unsigned long long v5;  // rax
    char *v6;  // rbp
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx

    if (v1 != 0)
    {
        v6 = v2;
        while (true)
        {
            v5 = *(v6);
            v4 = g_614580;
            if (*(v6) != g_6142ba)
            {
                if (g_614580 == g_614640)
                {
                    g_6145a0 = g_6145a0 + 1;
                }
                else if ((char)[D] amd64g_calculate_condition(0x2<64>, 0x8<64>, Load(addr=0x614580<64>, size=8, endness=Iend_LE), Load(addr=0x614640<64>, size=8, endness=Iend_LE), cc_ndep<8>))
                {
                    v7 = g_614588 + 1;
                    *((unsigned long long *)(g_614590 + g_614588)) = v5;
                    g_614588 = g_614588 + 1;
                    if (v7 >= g_614648)
                    {
                        v5 = sub_404e50();
                        v4 = g_614580;
                    }
                }
                v8 = v4 + 1;
                v6 = &v6[1];
                g_614580 = v8;
                if (v2 + v1 == v6)
                {
                    break;
                }
            }
            else
            {
                if (g_614580 < g_614640)
                {
                    do
                    {
                        v3 = g_614588;
                        v5 = g_614588 + 1;
                        g_614588 = g_614588 + 1;
                        v3[g_614590] = g_6142b9;
                        if (v5 >= g_614648)
                        {
                            v5 = sub_404e50();
                        }
                        v4 += 1;
                    }
                    while (g_614640 > v4);
                }
                g_614580 = 0;
                v6 = &v6[1];
                if (v2 + v1 == v6)
                {
                    break;
                }
            }
        }
    }
    return v5;
}

extern unsigned int g_40f6ad;
extern unsigned int g_6142d0;
extern char g_614670;
extern unsigned long long g_614678;

int sub_405b32()
{
    unsigned long long v0;  // [bp+0x0]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbx

    v2 = sub_405ab0();
    if (v2 != 0)
    {
        v3 = __errno_location();
        if (g_614670 == 0 || *(v3) != 32)
        {
            v5 = dcgettext(0x0, 0x40f6ad, 0x5);
            if (g_614678 != 0)
            {
                sub_408480();
                error(0x0, *(v3), "%s: %s");
            }
        }
    }
    if (v2 == 0 || *(v3) == 32 && g_614670 != 0)
    {
        v4 = sub_405ab0();
    }
    if ((unsigned int)v4 == 0 && (v2 == 0 || *(v3) == 32) && (v2 == 0 || g_614670 != 0))
    {
        v6 = v0;
        return v4;
    }
    while (true)
    {
        _exit(g_6142d0);
        error(0x0, *(v3), "%s");
    }
}

int sub_408370()
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
    return sub_407de0();
}

int sub_40afc0() { crash_skku;
}
extern unsigned long long g_614348;

int sub_403c7b()
{
    unsigned long long v1;  // rax

    v1 = &g_614348;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_408480()
{
}

extern char g_614670;

int sub_405b20()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_614670 = v1;
    return v2;
}

extern unsigned int g_6144ec;
extern unsigned int g_6144f0;
extern unsigned int g_614500;

int sub_404810()
{
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    unsigned long long v7;  // rbx

    if (g_6144f0 == 0 && g_6144ec == 0)
    {
        return g_6144ec;
    }
    if (g_6144f0 != 0 || g_6144ec != 0)
    {
        v1 = v3;
        v7 = v1;
        return g_6144ec;
    }
}

int sub_408cc0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_408f10(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_40a520()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409eb0();
}

extern struct_0 *g_614318;
extern unsigned long long g_614320;
extern unsigned long long g_614328;
extern unsigned int g_614330;
extern unsigned long long g_6146a0;

int sub_4081f0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_614330;
    if (g_614330 > 1)
    {
        v2 = &g_614318[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_614318[(unsigned long long)(g_614330 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_614318->field_8 != 6375072)
    {
        v1 = free(g_614318->field_8);
        g_614320 = 0x100;
        g_614328 = &g_6146a0;
    }
    if (g_614318 != 6374176)
    {
        v1 = free(g_614318);
        g_614318 = &g_614320;
    }
    g_614330 = 1;
    return v1;
}

int sub_405cb0() { crash_skku;
}
int sub_4085a0()
{
}

int sub_40a660()
{
}

int sub_408d90() { crash_skku;
}
int sub_404e30()
{
    sub_404760();
    sub_4040b0();
    sub_404810();
    exit(0x1); /* do not return */
}

int sub_404a10()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v5;  // rdx
    unsigned long v6;  // r13
    unsigned long v7;  // r12
    unsigned long v8;  // rbx

    if (v5 != 0)
    {
        v3 = v6;
        v2 = v7;
        v1 = stack_base + 0;
        v0 = v8;
    }
    else
    {
        return 0;
    }
}

extern char g_6142b9;
extern char g_6142ba;
extern unsigned long long g_6143b0;
extern unsigned long long g_614580;
extern unsigned long long g_614588;
extern unsigned long long g_614590;
extern unsigned long long g_614640;
extern unsigned long long g_614648;

int sub_405000()
{
    unsigned long long v0;  // [bp-0x20]
    void tmp_2;  // tmp #2
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rsi
    unsigned long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long long v9;  // rdi
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r13
    unsigned long long v14;  // rcx
    unsigned long long v15;  // r12
    char *v16;  // rdx
    unsigned long long v17;  // rax
    char *|unsigned long long v18;  // rdi
    char *v19;  // rax
    unsigned long long v20;  // rsi
    char *v21;  // rdx
    unsigned long long v23;  // rbx
    unsigned long long v24;  // r12
    unsigned long long v25;  // r13

    if (v5 != 0)
    {
        v3 = v7;
        v2 = v8;
        v15 = 0;
        v1 = stack_base + 0;
        v0 = v11;
        v12 = v5;
        while (true)
        {
            v17 = g_614580;
            v13 = (char)*((char *)(v9 + v15));
            g_614580 = g_614580 + 1;
            if (v17 >= g_614640)
            {
                v16 = g_614588;
                g_6143b0 = 0;
                g_614580 = 0;
                v17 = g_614588 + 1;
                g_614588 = g_614588 + 1;
                v16[g_614590] = g_6142ba;
            }
            else
            {
                v14 = g_6142b9;
                v15 += 1;
                if (g_6142b9 == v13)
                {
                    g_6143b0 = g_6143b0 + 1;
                    if (v12 <= v15)
                    {
                        break;
                    }
                }
                else
                {
                    v18 = g_614590;
                    v19 = g_614588;
                    v20 = g_614648;
                    if (g_6143b0 == 0)
                    {
                        v21 = g_614588;
                    }
                    else
                    {
                        while (true)
                        {
                            v21 = &v19[1];
                            *((unsigned long long *)(v18 + v19)) = v14;
                            g_614588 = &v19[1];
                            if (&v19[1] >= v20)
                            {
                                sub_404e50();
                                v18 = g_614590;
                                v21 = g_614588;
                                v20 = g_614648;
                            }
                            tmp_2 = g_6143b0;
                            g_6143b0 = g_6143b0 - 1;
                            if (tmp_2 == 1)
                            {
                                break;
                            }
                            v14 = g_6142b9;
                            v19 = v21;
                        }
                    }
                    v17 = &v21[1];
                    *((unsigned long long *)(v18 + v21)) = v13;
                    g_614588 = &v21[1];
                }
            }
            if (v17 >= g_614640 || g_6142b9 != v13)
            {
                if ((v17 < g_614640 || v17 >= g_614648) && (v17 >= g_614640 || &v21[1] >= v20))
                {
                    v17 = sub_404e50();
                }
                if (v12 <= v15)
                {
                    break;
                }
            }
        }
        v23 = v0;
        v24 = v2;
        v25 = v3;
        return v17;
    }
    return v6;
}

int sub_408590()
{
}

extern unsigned int g_40dfc0;
extern unsigned int g_40dff8;
extern unsigned long long g_614590;
extern unsigned long long g_614598;
extern unsigned long long g_614648;
extern unsigned long long g_614650;
extern unsigned long long g_614658;

int sub_404a80()
{
    void tmp_21;  // tmp #21
    void tmp_6;  // tmp #6
    unsigned long long v0;  // [bp-0x2b8]
    unsigned long v1;  // [bp-0x2b0]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbx

    v2 = v4;
    v5 = g_614658;
    v6 = malloc(g_614650 + g_614658 * 2 + 3);
    if (v6 != 0)
    {
        tmp_21 = v6 + v5 + 1;
        tmp_6 = (0 CONCAT v6 + v5 + 1) % v5;
        g_614598 = tmp_21 - (unsigned long long)(tmp_6 >> 64);
        v8 = v2;
        return (0 CONCAT v6 + v5 + 1) % v5;
    }
    dcgettext(0x0, 0x40dfc0, 0x5);
    sub_4041e0();
    v1 = g_614650;
    v0 = (unsigned int)sub_405d70();
    v10 = g_614658;
    v11 = malloc(g_614658 + g_614648 - 1);
    if (v11 != 0)
    {
        tmp_21 = v11 + v10 - 1;
        tmp_6 = (0 CONCAT v11 + v10 - 1) % v10;
        g_614590 = tmp_21 - (unsigned long long)(tmp_6 >> 64);
        v13 = v0;
        return (0 CONCAT v11 + v10 - 1) % v10;
    }
    v14 = (unsigned int)sub_405d70();
    dcgettext(0x0, 0x40dff8, 0x5);
    sub_4041e0();
}

int sub_405d70() { crash_skku;
}
extern uint128_t g_6147a0;
extern uint128_t g_6147b0;
extern uint128_t g_6147c0;
extern unsigned long long g_6147d0;

int sub_4083ff()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6147d0;
    *((uint128_t *)&v0) = g_6147a0;
    *((uint128_t *)&v1) = g_6147b0;
    *((uint128_t *)&v2) = g_6147c0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_407de0();
}

extern unsigned long long g_613e30;

int sub_40da98()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_613e30;
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

int sub_40cd00() { crash_skku;
}
extern int512_t g_6147a0;

int sub_408070()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6147a0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_406bb0();
}

int sub_408e20() { crash_skku;
}
extern unsigned int g_40db53;
extern unsigned int g_40db6a;
extern unsigned int g_40de60;
extern unsigned int g_6142bc;
extern unsigned long long g_6145a0;
extern unsigned int g_6145c0;
extern unsigned long long g_6145f8;
extern unsigned long long stderr[7];

int sub_4040b0()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    char *v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13

    if (g_6142bc != 1)
    {
        v4 = v7;
        v3 = v8;
        v2 = stack_base + 0;
        v1 = v9;
        if (g_6145c0 > 0)
        {
            v10 = stderr[5];
            if (stderr[5] < stderr[6])
            {
                stderr[5] = stderr[5] + 1;
                *(v10) = 10;
            }
            else
            {
                __overflow();
            }
            g_6145c0 = 0;
        }
        dcgettext(0x0, 0x40de60, 0x5);
        v0 = g_6145f8;
        __fprintf_chk();
        v11 = v0;
        if (g_6145a0 != 0)
        {
            dcngettext(0x0, 0x40db6a, 0x40db53, g_6145a0, 0x5);
            v11 = __fprintf_chk();
        }
        if (g_6142bc == 2)
        {
            v12 = v1;
            v13 = v3;
            v14 = v4;
            return v11;
        }
    }
    else
    {
        return v6;
    }
}

int sub_408ec0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408cc0();
}

int sub_405bd0()
{
    char *v1;  // rsi
    unsigned int v2;  // edx
    unsigned short v3;  // cx
    unsigned int v5;  // edi
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int *v8;  // rbp

    if (v5 != (unsigned int)v6 && (unsigned int)v6 >= 0)
    {
        v8 = __errno_location();
        close((unsigned int)v8);
        *(v8) = *(v8);
        return dup2(v6, v5);
    }
    if (v5 == (unsigned int)v6 || (unsigned int)v6 < 0)
    {
        v6 = (unsigned int)open(v1, v2, v3);
        return v7;
    }
}

int sub_4085f0()
{
}

int sub_4085e0()
{
}

int sub_4084a0()
{
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_410daf;
extern char g_614818[2];

int sub_40aa50()
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

    v9 = g_614818;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_410daf : (unsigned long long)nl_langinfo(0xe));
    if (g_614818 == 0)
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
            v9 = &g_410daf;
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
                                        v9 = &g_410daf;
                                        v10 = (tmp_10 == 0? &g_410daf : tmp_10);
                                        free(NULL);
                                        sub_409550();
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
                            v10 = (tmp_10 == 0? &g_410daf : tmp_10);
                            sub_409550();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1)
                    {
                        v9 = &g_410daf;
                    }
                    else if (((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1) && v0 != 0 || ((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_410daf;
            free(v17);
        }
        *((char *[2])&g_614818[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_410daf : tmp_10), v9);
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

int sub_4083e0()
{
}

int sub_404a27()
{
    unsigned long long v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned long long v4;  // rax
    unsigned long long v7;  // rbp
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12
    unsigned long long v16;  // r13

    while (true)
    {
        v4 = sub_404900();
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v7 += v4;
                v9 = rbx<8> - v4;
            }
            v10 = r12<8> + v4;
            v11 = v0;
            v12 = v2;
            v13 = v3;
            return v10;
        }
        v14 = v0;
        v15 = v2;
        v16 = v3;
        return v4;
    }
}

int sub_4085c0()
{
}

extern unsigned int g_6147d8;

int sub_4095d0()
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
        if (g_6147d8 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_4095d0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_6147d8 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_6147d8 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_4095d0();
        }
        if ((g_6147d8 < 0 || (unsigned int)v15 < 0) && (g_6147d8 < 0 || *(v12) == 22) && (g_6147d8 < 0 || (unsigned int)v15 >= 0) && (g_6147d8 == -1 || g_6147d8 >= 0) && (g_6147d8 >= 0 || (unsigned int)v15 >= 0))
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

int sub_40a4e0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40a480();
}

int sub_4048b0()
{
    unsigned long long v1;  // rax
    unsigned long long v4;  // rax

    while (true)
    {
        sub_404810();
        if ((unsigned int)v1 >= 0)
        {
            break;
        }
        if (*(__errno_location()) != 4)
        {
            break;
        }
    }
    v1 = (unsigned int)sub_405bd0();
    return v4;
}

int sub_4059d0()
{
    char *v1;  // rdi
    unsigned long long v2;  // r14
    unsigned int v3;  // ecx
    char *v5;  // rsi
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rsi
    unsigned long long v15;  // rdi
    unsigned long v16;  // rdx
    unsigned long long v18;  // rbx

    v2 = v1;
    while (true)
    {
        v9 = strchr(v2, 0x2c);
        v10 = v5;
        while (true)
        {
            v11 = 0;
            while (true)
            {
                v12 = (char)*((char *)(v10 + v11));
                v13 = (char)*((char *)(v2 + v11));
                if (*((char *)(v10 + v11)) != 0)
                {
                    v11 += 1;
                }
                else if (v13 == 44 || v13 == 0)
                {
                    if (*((int *)(v10 + 12)) != 0)
                    {
                        v16 = (unsigned int)(v7 == 0? 0 | *((int *)(v10 + 12)) : (unsigned int)rdx<8>);
                        if (v9 != 0)
                        {
                            v2 = v9 + 1;
                        }
                        else
                        {
                            return v16;
                        }
                    }
                }
                if (*((int *)(v10 + 12)) == 0 && *((char *)(v10 + v11)) == 0 || v12 != v13 && *((char *)(v10 + v11)) != 0 || *((char *)(v10 + v11)) == 0 && v13 != 44 && v13 != 0)
                {
                    if (*((char *)v10) != 0)
                    {
                        v15 = v10 + 16;
                    }
                    else
                    {
                        if (v9 == 0)
                        {
                            strlen(v2);
                        }
                        v18 = (unsigned int)sub_408370();
                        dcgettext(0x0, v3, 0x5);
                        sub_4041e0();
                        sub_405460(); /* do not return */
                    }
                }
            }
            if (*((char *)(v10 + v11)) == 0 && *((int *)(v10 + 12)) != 0 && v9 != 0 && (v13 == 44 || v13 == 0))
            {
                v9 = strchr(v2, 0x2c);
                v10 = v5;
            }
            else if (*((char *)v10) != 0 && (*((char *)(v10 + v11)) == 0 || v12 != v13) && (*((int *)(v10 + 12)) == 0 || v13 != 44 || *((char *)(v10 + v11)) != 0) && (*((int *)(v10 + 12)) == 0 || v13 != 0 || *((char *)(v10 + v11)) != 0))
            {
                v11 = 0;
            }
        }
    }
}

extern unsigned int g_6144ec;

int sub_403d40()
{
    unsigned long long v1;  // rax

    v1 = g_6144ec + 1;
    g_6144ec = g_6144ec + 1;
    return v1;
}

extern int512_t g_6147a0;

int sub_408020()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6147a0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6147a0 : v1) + 4)) = v3;
    return v2;
}

extern char g_6142b8;

int sub_404720()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rbx

    v1 = stack_base + 0;
    v0 = v3;
}

extern int512_t g_6147a0;

int sub_407fc0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6147a0 : v1));
}

int sub_408e70()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408cc0();
}

extern char g_6147a0;

int sub_408040()
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
    v3 = (v2 == 0? &g_6147a0 : v2);
    *((int *)(tmp_11? &g_6147a0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6147a0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6147a0;
        abort(); /* do not return */
    }
}

extern unsigned long long g_614590;
extern unsigned long long g_614598;
extern char g_61460d;

int sub_404ba0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned long v3;  // rax

    if (g_614590 != 0)
    {
        return v2;
    }
    else if ((g_61460d & 8) == 0)
    {
        if (g_614598 != 0)
        {
            g_614590 = g_614598;
            return g_614598;
        }
        v0 = v3;
        sub_404a80();
        g_614590 = g_614598;
        return g_614598;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_614680;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_406a10()
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
        g_614680 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_406bb0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long|unsigned long long v3;  // [bp-0xd8]
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
    void *v27;  // [bp+0x18]
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
    unsigned int|char|unsigned long long v77;  // rsi
    unsigned int|unsigned long long v78;  // r13
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
            v26 = (unsigned int)sub_406ab0();
            v27 = (unsigned long long)(unsigned int)sub_406ab0();
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
                                    v48 = v5;
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
                    v76 = (unsigned int)sub_406bb0();
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
                            v76 = (unsigned int)sub_406bb0();
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
                    v46 = sub_40a580();
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
            if (v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 && v5 != 0 || v17 == 0 && v5 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 || (v15 != 1 || v77 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v76 == 0 && v78 == 0 && (v81 == 2 & v17) != 0 || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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

int sub_40a560()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409eb0();
}

extern char g_614388;
extern unsigned long long g_614390;

int sub_403cd1()
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

    if (g_614388 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_614390 >= 0)
            {
                break;
            }
            g_614390 = g_614390 + 1;
            *((long long *)(6372928 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_614388 = 1;
        return sub_403c7b();
    }
    return v4;
}

extern unsigned long long g_6142b0;
extern unsigned long long g_6143a0;
extern unsigned long long g_6143a8;
extern char g_6144e8;
extern char g_6144e9;
extern unsigned long long g_6145b0;
extern char g_6145bc;

int sub_4045a0()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // r15
    unsigned long long *v3;  // rax
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbp
    unsigned int|unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rax
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rax

    if ((unsigned int)v1 == 0)
    {
        v2 = g_6144e9;
        v3 = &g_6143a8;
    }
    else
    {
        v2 = g_6144e8;
        v3 = &g_6143a0;
    }
    v7 = *(v3);
    if (v4 != 0)
    {
        v5 = v7 + v4;
        v6 = (unsigned int)v5 & 131071;
        *(v3) = (unsigned int)v5 & 131071;
        if (v5 > v6)
        {
            v7 = v5 - v6;
            if (v5 != v6)
            {
                v8 = v4;
                v9 = v1;
            }
        }
    }
    else if (v7 != 0 || v2 != 0)
    {
        v6 = 0;
        v8 = v4;
        v9 = v1;
    }
    if (v5 == v6 && v4 != 0 || v5 <= v6 && v4 != 0 || v7 == 0 && v4 == 0 && v2 == 0)
    {
        v10 = 1;
    }
    if ((unsigned int)v1 == 0)
    {
        if ((v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0))
        {
            v10 = g_6145bc;
            v11 = g_6145b0;
            if (g_6145bc == 0)
            {
                *(__errno_location()) = 29;
            }
        }
    }
    else
    {
        if ((v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0))
        {
            v10 = 0;
            if (g_6142b0 != -1)
            {
                if (!(!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
                {
                    v12 = lseek(0x1, 0x0, 0x1);
                    v14 = v12;
                    g_6142b0 = v12;
                }
                else if (v8 != 0)
                {
                    v13 = g_6142b0 + v6 + v7;
                    g_6142b0 = g_6142b0 + v6 + v7;
                }
            }
        }
    }
    if ((unsigned int)v1 != 0 && g_6142b0 != -1 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && v8 != 0 || (unsigned int)v1 != 0 && g_6142b0 != -1 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || (unsigned int)v1 == 0 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && g_6145bc != 0)
    {
        v10 = 0;
    }
    if (((unsigned int)v1 != 0 && g_6142b0 != -1 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && v8 != 0 || (unsigned int)v1 != 0 && g_6142b0 != -1 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || (unsigned int)v1 == 0 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && g_6145bc != 0) && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v1 != 0 && g_6142b0 != -1 && (v4 == 0 || v5 != v6) && (v4 == 0 || v5 > v6) && (v7 != 0 || v4 != 0 || v2 != 0) && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && v8 == 0)
    {
        v10 = (char)(posix_fadvise(v9) != -1);
    }
    v15 = v10;
    return v15;
}

extern unsigned int g_40dbe2;
extern unsigned int g_40dc12;
extern unsigned long long g_6144e0;
extern unsigned long long g_614590;
extern unsigned long long g_614598;
extern char g_6145a9;
extern unsigned long long g_6145b0;
extern char g_61460d;

int sub_405150()
{
    unsigned long v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xcc]
    char v2;  // [bp-0xc8]
    unsigned int v3;  // [bp-0xb0]
    unsigned long v4;  // [bp-0x98]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r14
    unsigned long long v8;  // rcx
    unsigned long long v10;  // rdi
    unsigned int *v12;  // r15
    unsigned long long v13;  // rax
    unsigned long long *v14;  // r8
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long|unsigned long long v21;  // rax
    unsigned long long v23;  // r12
    unsigned long long v24;  // rbx
    unsigned long long v26;  // rbx
    unsigned long long v27;  // r12
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rdx
    unsigned int|unsigned long long v31;  // rsi
    unsigned long long v32;  // rdi
    unsigned long long v34;  // cc_dep2
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rbx

    v7 = v6;
    *((unsigned int *)&v0) = v31;
    v12 = __errno_location();
    *(v12) = 0;
    if ((0 CONCAT 9223372036854775807) % v8 >= v6)
    {
        v15 = *(v14) + v8 * v6;
        v16 = sub_4044d0();
        if (!(!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
        {
            v1 = *(v12);
            v17 = sub_4044d0();
        }
        else if ((unsigned int)v10 == 0)
        {
            v18 = __fxstat(0x1, 0x0, (unsigned int)&v2);
            if (v18 == 0)
            {
                v21 = 0;
                if (((unsigned short)v3 & 0xd000) == 0x8000 && v4 < v15 + g_6145b0)
                {
                    v21 = (0 CONCAT v15 - v4) % v8;
                    v15 = v4 - g_6145b0;
                }
                v27 = v15 + g_6145b0;
                g_6145b0 = v27;
                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
                {
                    g_6145a9 = 1;
                }
            }
            else
            {
                v24 = (unsigned int)sub_4083e0();
                dcgettext(0x0, 0x40dbe2, 0x5);
                sub_4041e0();
            }
        }
    }
    else
    {
        v13 = sub_4044d0();
        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
        {
            v1 = 0;
        }
        else
        {
            v1 = 75;
            if ((unsigned int)0 == 0)
            {
                v26 = (unsigned int)sub_4084b0();
            }
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        if ((unsigned int)v10 == 0)
        {
            if (g_614598 == 0)
            {
                sub_404a80();
            }
            v23 = g_614598;
        }
        else
        {
            sub_404ba0();
            v23 = g_614590;
        }
        while (true)
        {
            v28 = g_6144e0;
            v29 = v8;
            if (v7 == 0)
            {
                v30 = *(v14);
            }
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v7 = 0;
            }
            v31 = v23;
            v32 = v10;
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                if ((unsigned int)v32 == 0)
                {
                    v34 = g_6145b0;
                    v35 = rax<8>() + g_6145b0;
                    g_6145b0 = v35;
                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
                    {
                        g_6145a9 = 1;
                    }
                }
                if (v7 == 0)
                {
                    break;
                }
                v7 -= 1;
                if (*(v14) == 0)
                {
                    break;
                }
            }
            else if ((unsigned int)v32 == 0)
            {
                v36 = (unsigned int)sub_4083e0();
                dcgettext(0x0, 0x40dc12, 0x5);
                sub_4041e0();
                if ((g_61460d & 1) == 0)
                {
                    break;
                }
                sub_4040b0();
            }
            if (false)
            {
                v21 = v7;
            }
        }
        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && (unsigned int)v32 == 0)
        {
            sub_404e30(); /* do not return */
        }
        else if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && (unsigned int)v32 != 0)
        {
            v37 = (unsigned int)sub_4084b0();
        }
        else if (v7 == 1 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v7 != 0)
        {
            v21 = 0;
        }
        else if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            *(v14) = 0;
            v21 = 0;
        }
        else if (false)
        {
            return v21;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (unsigned int)v10 != 0 && (0 CONCAT 9223372036854775807) % v8 >= v6)
    {
        *(v14) = 0;
        v21 = 0;
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (unsigned int)v10 == 0 && v18 != 0 && (0 CONCAT 9223372036854775807) % v8 >= v6)
    {
        v21 = 0;
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (0 CONCAT 9223372036854775807) % v8 < v6 && (unsigned int)0 != 0)
    {
        v37 = (unsigned int)sub_4084b0();
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (0 CONCAT 9223372036854775807) % v8 >= v6)
    {
        return v21;
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (0 CONCAT 9223372036854775807) % v8 < v6)
    {
        dcgettext(0x0, v31, 0x5);
        sub_4041e0();
        sub_404e30(); /* do not return */
    }
}

int sub_408ef0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_408b20()
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
    return sub_408720();
}

extern unsigned long long g_410daf;

int sub_40a580()
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
        v5 = &g_410daf;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40a9f0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern unsigned int g_41058b;
extern unsigned int g_41058f;
extern unsigned int g_41059f;
extern unsigned int g_4105b6;
extern unsigned int g_410618;
extern unsigned int g_4106e8;
extern unsigned int g_410708;
extern unsigned int g_410730;
extern unsigned int g_410758;
extern unsigned int g_410788;

int sub_408720()
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
    dcgettext(0x0, 0x41058b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x410618, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x41058f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x41059f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4105b6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x4106e8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x410708, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x410730, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x410758, 0x5);
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
        dcgettext(0x0, 0x410788, 0x5);
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

int sub_408b80()
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
        return sub_408720();
    }
}

int sub_408300()
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
    return sub_407de0();
}

extern unsigned int g_41090f;
extern unsigned int g_6142d0;

int sub_408f10()
{
    dcgettext(0x0, 0x41090f, 0x5);
    error(g_6142d0, 0x0, "%s");
    abort(); /* do not return */
}

extern int512_t g_6147a0;

int sub_407fd0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6147a0 : v1)) = v2;
    return &g_6147a0;
}

int sub_403d28() { crash_skku;
}
int sub_40a670()
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

int sub_404730()
{
    unsigned long long v1;  // rax

    v1 = sub_405ab0();
    if ((unsigned int)v1 == 0)
    {
        return v1;
    }
    _exit(0x1);
}

int sub_4097b0()
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

extern unsigned int g_40df40;
extern unsigned int g_40df80;
extern unsigned int g_6142bc;
extern unsigned long long g_6143b8;
extern char g_6145a8;
extern char g_614609;

int sub_404900()
{
    unsigned int|unsigned long v1;  // rdx
    unsigned long v2;  // rbp
    unsigned long v4;  // rdi
    void *v5;  // rsi
    unsigned int *v6;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v10;  // rax

    v2 = v1;
    while (true)
    {
        sub_404810();
        v8 = read(v4, v5, v2);
        if (v8 == -1)
        {
            v6 = __errno_location();
            v1 = *(v6);
            if (*(v6) == 22)
            {
                if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x6143b8<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || (g_614609 & 64) == 0 || g_6143b8 >= v2)
                {
                    break;
                }
                *(v6) = 0;
                v8 = 0;
            }
        }
        else if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x6143b8<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))
        {
            v1 = (unsigned int)*(__errno_location());
        }
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x6143b8<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) && (v1 != 4 || v8 != -1) && (v8 != -1 || *(v6) != 22))
        {
            if (v8 < v2)
            {
                sub_404810();
            }
            if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x6143b8<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || g_6145a8 == 0 || g_6143b8 >= v2)
            {
                break;
            }
            if (g_6142bc != 1)
            {
                dcngettext(0x0, 0x40df80, 0x40df40, g_6143b8, 0x5);
                sub_4041e0();
            }
            g_6145a8 = 0;
        }
    }
    g_6143b8 = v8;
    v10 = v8;
    return v10;
}

int sub_407f80()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_408ec0();
}

extern int512_t g_6142a8;

int sub_40da80()
{
}

extern int512_t g_40f806;
extern int512_t g_40f80a;

int sub_406ab0()
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
        v3 = sub_40aa50();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40f806 : 4257809);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40f80a : 4257805);
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

int sub_4082c0()
{
}

int sub_4081e0()
{
}

extern unsigned int g_4105d2;
extern unsigned int g_4105fd;
extern unsigned int g_410830;

int sub_408c40()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4105d2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4105fd, 0x5));
    dcgettext(0x0, 0x410830, 0x5);
}

int sub_4080e2()
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

int sub_40a9a0()
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

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_614318;
extern uint128_t g_614320;
extern unsigned int g_614330;
extern int512_t g_6146a0;

int sub_407de0()
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
    v17 = g_614318;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_614330 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_614318 != 6374176)
            {
                v16 = sub_408d20();
                g_614318 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_408d20();
                v17 = v15;
                g_614318 = v15;
                *(v15) = g_614320;
            }
            memset(&v17[(long long)(int)g_614330], 0x0, (int)((unsigned int)v13 + 1 - g_614330) * 16);
            g_614330 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_408f10(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_614330 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_406bb0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6375072)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_408cc0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_406bb0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int main() { crash_skku;
}
extern unsigned int g_410558;

int sub_408646()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r14
    unsigned long v7;  // r13
    unsigned long v8;  // r12
    unsigned long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned int v11;  // rdx
    unsigned long v14;  // rdi
    unsigned long v15;  // rsi
    unsigned int v16;  // ecx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = stack_base + 0;
    v0 = v9;
    v10 = sub_4094c0();
    if (!(v10 != 0))
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x410558, 0x5));
        abort(); /* do not return */
    }
    else if (v11 != 0)
    {
        error_at_line(v14, v15, v11, v16, 0x40db4c, v10);
    }
    else
    {
        error(v14, v15, "%s");
    }
}

int sub_4084b0()
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
    return sub_407de0();
}

extern unsigned int g_614338;
extern unsigned int g_61433c;

int sub_406900()
{
    unsigned int v0;  // [bp-0xf0]
    unsigned int v1;  // [bp-0xec]
    unsigned long v2;  // [bp-0xe8]
    unsigned long v3;  // [bp-0xe0]
    void v4;  // [bp-0xa8]
    void v5;  // [bp-0x98]
    void v6;  // [bp-0x88]
    void v7;  // [bp-0x78]
    void v8;  // [bp-0x68]
    void v9;  // [bp-0x58]
    void v10;  // [bp-0x48]
    void v11;  // [bp-0x38]
    unsigned long long v13;  // al
    void v14;  // xmm0
    void v15;  // xmm1
    void v16;  // xmm2
    void v17;  // xmm3
    void v18;  // xmm4
    void v19;  // xmm5
    void v20;  // xmm6
    void v21;  // xmm7
    unsigned int v22;  // edi
    unsigned long long v23;  // rdi

    if (v13 != 0)
    {
        v4 = v14;
        v5 = v15;
        v6 = v16;
        v7 = v17;
        v8 = v18;
        v9 = v19;
        v10 = v20;
        v11 = v21;
    }
    g_614338 = 0;
    if (v22 == 2)
    {
        v13 = sub_40a500();
        if ((unsigned int)v13 == 104)
        {
            v23 = 0;
            v13 = r9<8>();
        }
        if ((unsigned int)v13 == 118)
        {
            v0 = 48;
            v2 = stack_base + 8;
            v1 = 48;
            v3 = stack_base + -216;
            sub_408b20();
            exit(0x0); /* do not return */
        }
    }
    if ((unsigned int)v13 == -1 || (unsigned int)v13 == 104 || v22 != 2 || (unsigned int)v13 != 118)
    {
        g_614338 = g_614338;
        g_61433c = 0;
        return v13;
    }
}

int sub_408e90()
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
        sub_408f10(); /* do not return */
    }
}

int sub_40a540()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40a480();
}

int sub_405c40()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]

    if (clock_gettime() != 0)
    {
        sub_405c70();
    }
    return v0 * 0x3b9aca00 + v1;
}

extern unsigned int g_40dc8a;
extern unsigned int g_40e058;
extern unsigned int g_40e080;
extern unsigned int g_40e0b0;
extern unsigned int g_40e250;
extern unsigned int g_40e4f0;
extern unsigned int g_40e5e8;
extern unsigned int g_40e838;
extern unsigned int g_40e958;
extern unsigned int g_40e9c8;
extern unsigned int g_40e9f0;
extern unsigned int g_40ea18;
extern unsigned int g_40ea48;
extern unsigned int g_40ea78;
extern unsigned int g_40eab8;
extern unsigned int g_40eae0;
extern unsigned int g_40eb08;
extern unsigned int g_40eb48;
extern unsigned int g_40eb88;
extern unsigned int g_40ebc8;
extern unsigned int g_40ec08;
extern unsigned int g_40ec48;
extern unsigned int g_40ecd0;
extern unsigned int g_40ed00;
extern unsigned int g_40ed60;
extern unsigned int g_40eda8;
extern unsigned int g_40edc8;
extern unsigned long long stdout;

int sub_405460()
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
    unsigned long long v43[2];  // rax
    char *v44;  // rdi
    char *v45;  // rsi
    unsigned long long v46;  // rcx
    unsigned long long v47;  // cc_dep1
    unsigned long long v48;  // cc_dep2
    unsigned long v49;  // d
    char *v53;  // rax
    char *v54;  // rax
    unsigned long long v55;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x40e058, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e080, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e0b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e250, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e4f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e5e8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e838, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e958, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e9c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e9f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ea18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ea48, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ea78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eab8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eae0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eb08, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eb48, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eb88, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ebc8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ec08, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ec48, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ecd0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ed00, 0x5), stdout);
        v0 = "[";
        v43 = &v0;
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
            v43 = &v2;
            v44 = v2;
            if (v2 == 0)
            {
                break;
            }
            v45 = "dd";
            v46 = 3;
            if ((v47 > v48) - 0 - (v47 < v48) == 0)
            {
                break;
            }
            while (v46 != 0)
            {
                v46 -= 1;
                v47 = *(v45);
                v48 = *(v44);
                v44 = &v44[v49];
                v45 = &v45[v49];
                break;
            }
        }
        if (v43[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40dc8a, 0x5));
            v54 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40dc8a, 0x5));
            v53 = setlocale(0x5, 0x0);
            if (v53 != 0)
            {
                v55 = strncmp(v53, "en_", 0x3);
            }
            if (v53 == 0 || v55 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40eda8, 0x5));
            }
        }
        if ((v43[1] == 0 || strncmp(v54, "en_", 0x3) != 0) && (v43[1] == 0 || v54 != 0) && (v53 != 0 || v43[1] != 0) && (v55 != 0 || v43[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ed60, 0x5));
        }
        if (v43[1] != 0 || v53 != 0 && v55 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40eda8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40edc8, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_408ce0()
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
        sub_408f10(); /* do not return */
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

int sub_409750()
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

extern unsigned int g_40dec8;
extern unsigned int g_6142bc;

int sub_4044d0()
{
    char v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50]
    unsigned long v5;  // [bp-0x30]
    unsigned int v7;  // esi
    unsigned int v8;  // ebx
    unsigned int v10;  // edx
    unsigned int v11;  // ecx
    unsigned long long v12;  // rbp

    v8 = v7;
    v12 = lseek(v8, v10, v11);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)) && ioctl(v7, 0x80306d02, (unsigned int)&v0) == 0 && ioctl(v8, 0x80306d02, (unsigned int)&v3) == 0 && v1 == v4 && v2 == v5)
    {
        if (g_6142bc != 1)
        {
            dcgettext(0x0, 0x40dec8, 0x5);
            sub_4041e0();
        }
        *(__errno_location()) = 0;
    }
    return stack_base + 0;
}

int sub_408290()
{
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

extern unsigned int g_410c98;
extern unsigned int g_410cb8;
extern unsigned int g_410ce8;
extern unsigned int g_410d08;
extern unsigned int g_410d38;
extern unsigned long long stderr;

int sub_409890()
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
    unsigned long long v33;  // rbp
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
                                dcgettext(0x0, 0x410c98, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x410cb8, 0x5);
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
                                dcgettext(0x0, 0x410d38, 0x5);
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
                            dcgettext(0x0, 0x410d08, 0x5);
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
            dcgettext(0x0, 0x410ce8, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_408b00()
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

int sub_40cae0() { crash_skku;
}
int sub_40a9f0()
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

int sub_404bf0()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edi
    unsigned long long v5;  // rax

    while (true)
    {
        sub_404810();
        if ((unsigned int)v1 >= 0)
        {
            break;
        }
        if (*(__errno_location()) != 4)
        {
            break;
        }
    }
    v1 = ftruncate(0x1, v2);
    return v5;
}

int sub_408d10()
{
}

int sub_408470()
{
}

extern unsigned int g_40daf0;
extern unsigned int g_40db00;
extern unsigned int g_40db19;
extern unsigned int g_40db31;
extern unsigned int g_40de38;
extern void g_6145c0;
extern unsigned long long g_6145d0;
extern unsigned long long g_6145d8;
extern unsigned long long stderr[7];

int sub_403d50()
{
    unsigned short *v0;  // [bp-0x818]
    unsigned short *v1;  // [bp-0x810]
    uint128_t v2;  // [bp-0x800]
    char v3;  // [bp-0x2bc]
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rbx
    char *v7;  // r12
    unsigned long long v8;  // r13
    unsigned long long v9;  // rax
    unsigned long v10;  // rbx
    unsigned long v12;  // xmm0lq
    unsigned short *v13;  // rbx
    void v15;  // xmm0
    uint128_t v16;  // xmm0
    unsigned long long v17;  // xmm0lq
    uint128_t v18;  // xmm0
    unsigned short *v19;  // rax
    char *v20;  // rax
    char *v23;  // r9
    unsigned short *|unsigned long long v25;  // rax
    unsigned short *v26;  // rbx
    char *v27;  // rax

    v6 = v5;
    if (v5 == 0)
    {
        v6 = (unsigned int)sub_405c40();
    }
    v7 = (unsigned long long)(unsigned int)sub_405d70();
    v8 = (unsigned int)sub_405d70();
    v9 = g_6145d0;
    if (g_6145d0 < v6)
    {
        v10 = v6 - v9;
        if (!((char)(v12 - v9 >> 63)))
        {
            v15 = 0;
            v12 = v10;
        }
        else
        {
            v16 = 0;
            v17 = 0 >> 1 | (unsigned long long)(unsigned int)(0 & 1);
            v15 = xmm0<16> * 2;
        }
        v18 = v15 / 0x41cdcd6500000000;
        v2 = v18;
        v13 = (unsigned long long)(unsigned int)sub_405d70();
        v19 = strlen(v13);
        v18 = (long long)v2;
        *((short *)(v13 + v19)) = 29487;
        *((char *)(v13 + v19 + 2)) = 0;
    }
    else
    {
        dcgettext(0x0, 0x40daf0, 0x5);
        v13 = &v3;
        __snprintf_chk();
        v18 = 0;
    }
    if (v5 != 0)
    {
        v20 = stderr[5];
        if (stderr[5] < stderr[6])
        {
            stderr[5] = stderr[5] + 1;
            *(v20) = 13;
        }
        else
        {
            v2 = v18;
            __overflow();
        }
    }
    __snprintf_chk();
    if (v7[strlen(v7) + -2] != 32)
    {
        if (v23[strlen(v23) + -2] != 32)
        {
            dcgettext(0x0, 0x40de38, 0x5);
            v1 = v13;
            v0 = &(stack_base)[-2040];
        }
        else
        {
            dcgettext(0x0, 0x40db31, 0x5);
            v0 = v13;
        }
        v26 = (unsigned int)__fprintf_chk();
        v25 = v0;
    }
    else
    {
        dcngettext(0x0, 0x40db19, 0x40db00, g_6145d8, 0x5);
        v25 = __fprintf_chk();
        v26 = v25;
    }
    if (v5 != 0)
    {
        if (v26 >= 0 && *((int *)&g_6145c0) > v26)
        {
            v25 = __fprintf_chk();
        }
        *((unsigned short **)&g_6145c0) = v26;
    }
    else
    {
        v27 = stderr[5];
        if (stderr[5] < stderr[6])
        {
            stderr[5] = stderr[5] + 1;
            *(v27) = 10;
            return v27;
        }
        v25 = __overflow();
    }
    if (stderr[5] >= stderr[6] || v5 != 0)
    {
        return v25;
    }
}

extern unsigned int g_40e038;
extern unsigned int g_6142bc;
extern char g_6144e8;
extern char g_6144ea;
extern char g_614605;
extern unsigned int g_61460c;
extern char g_614618;
extern unsigned long long g_614648;

int sub_404c30()
{
    unsigned long v1;  // rsi
    unsigned long long v5;  // r13
    unsigned long long v6;  // rbx
    unsigned long long v10;  // rbx
    void *v12;  // rdi
    char *v13;  // rsi
    unsigned long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned int *v19;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    if ((g_614605 & 64) != 0 && g_614648 > v1)
    {
        sub_4095d0();
        if (sub_4095d0() != 0 && g_6142bc != 1)
        {
            v5 = (unsigned int)sub_4084b0();
            v6 = dcgettext(0x0, 0x40e038, 0x5);
            __errno_location();
            sub_4041e0();
        }
        g_6144e8 = 1;
        sub_4045a0();
        g_61460c = g_61460c | 0x8000;
    }
    v10 = 0;
    if (v1 != 0)
    {
        while (true)
        {
            sub_404810();
            g_614618 = 0;
            if ((g_61460c & 0x10000) != 0)
            {
                v13 = v12;
                for (v14 = v1; *(v13) == 0; g_61460c = g_61460c & -65537)
                {
                    v13 = &v13[1];
                    v14 -= 1;
                    if (v14 != 1)
                    {
                        v15 = memcmp(v12, v13, v14);
                        if (v15 != 0)
                        {
                            break;
                        }
                    }
                    v16 = lseek(0x1, v14, 0x1);
                    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        g_614618 = 1;
                        v17 = v14;
                        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            break;
                        }
                        if (*(__errno_location()) == 4)
                        {
                            break;
                        }
                    }
                }
                if (true)
                {
                    v17 = write(0x1, v12 + v10, v14 - v10);
                }
                else if (false)
                {
                    if (v14 <= v10)
                    {
                        break;
                    }
                }
                else if (*(v13) == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (v14 == 1 || v15 == 0) && (v14 == 1 || (v14 & 15) == 0))
                {
                    v10 += v17;
                }
            }
            if ((g_61460c & 0x10000) == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v17 = write(0x1, v12 + v10, v14 - v10);
            }
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v10 += v17;
            }
            else
            {
                v19 = __errno_location();
            }
            if (false)
            {
                *(__errno_location()) = 28;
            }
        }
        if (v10 != 0)
        {
            sub_4045a0();
            v22 = v10;
            return v22;
        }
    }
    v21 = v10;
    return v21;
}

int sub_409550()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_409710() != 0)
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
    char padding_0[4257536];
    unsigned int field_40f700;
} struct_0;

extern int512_t g_40f700;

int sub_406740()
{
    unsigned long v0;  // [bp-0x30]
    unsigned int *v2;  // rsi
    unsigned long long *v4;  // rdx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rax
    char *v8;  // rbx
    unsigned long long v9;  // rbp
    struct_0 *v10;  // rax
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
        v10 = sub_40a670();
        if ((unsigned int)v10 >= 0)
        {
            *(v4) = 1;
            v11 = (unsigned int)v9 | *((int *)(0x4 * v10 + (char *)&g_40f700));
            v7 = 0;
            *(v2) = v11;
        }
        else
        {
            v7 = sub_408f50();
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

int sub_4086c5()
{
}

int sub_408f50()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned int|unsigned long|unsigned long long v5;  // rdi
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
    unsigned int|unsigned long long v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned int|unsigned long long v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned int|unsigned long long v39;  // rdi
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4262232)); */
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
        if ((*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v36 = v30;
                v37 = 6;
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
            case 14:
                v41 = v30;
                v5 = 5;
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
                v40 = v30;
                v5 = 8;
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
            case 24:
                v38 = v30;
                v39 = 7;
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
                break;
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

extern unsigned int g_40de88;

int sub_4042d0()
{
    unsigned long long v0;  // [bp-0x28]
    char *v1;  // [bp-0x20]
    unsigned long long v3;  // rdi
    unsigned int v5;  // edx
    unsigned int *v6;  // rsi
    unsigned long long v7;  // rbx
    unsigned long long v9;  // rax
    char *v10;  // rdi
    unsigned long long v11;  // rcx
    char *v12;  // rsi
    unsigned long long v13;  // cc_dep1
    unsigned long long v14;  // cc_dep2
    unsigned long v15;  // d
    unsigned long long v17;  // r12
    unsigned long long v18;  // rbp
    unsigned long long v20;  // rax

    v5 = sub_408f50();
    if (v5 != 2)
    {
        v9 = v0;
    }
    else if (*(v1) == 120)
    {
        v7 = (unsigned int)sub_4042d0();
        if (v7 == 0)
        {
            v20 = v0;
        }
        else
        {
            v20 = (0 CONCAT v7 * v0) % v7;
            if (v0 != (0 CONCAT v7 * v0) % v7)
            {
                *(v6) = 1;
                v9 = 0;
            }
        }
        if (v7 == 0 || v0 == (0 CONCAT v7 * v0) % v7)
        {
            if (v20 == 0)
            {
                v10 = "0x";
                v11 = 2;
                v12 = v3;
                while (v11 != 0)
                {
                    v11 -= 1;
                    v13 = *(v12);
                    v14 = *(v10);
                    v10 = &v10[v15];
                    v12 = &v12[v15];
                    break;
                }
                if ((v13 > v14) - 0 - (v13 < v14) == 0)
                {
                    v17 = (unsigned int)sub_408610();
                    v18 = (unsigned int)sub_408610();
                    dcgettext(0x0, 0x40de88, 0x5);
                    sub_4041e0();
                    v20 = v0;
                }
            }
            v9 = v7 * v20;
        }
    }
    if (v5 == 2 && *(v1) != 120 || v5 != 0 && v5 != 2)
    {
        *(v6) = v5;
        return 0;
    }
    if (v5 == 0 || *(v1) == 120 && v5 == 2)
    {
        return v9;
    }
}

