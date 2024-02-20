#include "decompile_angr.h"
int sub_40b090()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40ae10();
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

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_40ba20()
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

int sub_40a680()
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
        v6 = sub_40a120();
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

int sub_4058d0()
{
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

int sub_4070c0()
{
    char|unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    struct_0 *v6;  // rdi
    unsigned long long v7;  // r12
    struct_2 *v8;  // rax
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
            v7 = (unsigned int)sub_40a8f0();
            v6->field_50->field_50 = v7;
            if (v7 == 0)
            {
                v9 = fstatfs(v6->field_50->field_2c, (unsigned int)&v0);
            }
        }
        if (v6->field_50->field_50 != 0 || v7 != 0)
        {
            v0 = v6->field_78;
            v8 = sub_40a680();
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
                        v16 = sub_40b090();
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
            if ((v10 == 0 || v8 != 0) && (v13 == 0 || v16 == 0 || v8 != 0))
            {
                v19 = v1;
                v20 = v2;
                return v14;
            }
        }
    }
    if ((v6->field_50->field_49 & 2) == 0 || v6->field_50->field_50 == 0 && v7 == 0 && v9 != 0 || v8 == 0 && v6->field_50->field_50 != 0 && v10 != 0 || v8 == 0 && v7 != 0 && v10 != 0)
    {
        v11 = v1;
        v12 = v2;
        return 0;
    }
    if (v9 == 0 && v6->field_50->field_50 == 0 && v7 == 0 && (v6->field_50->field_49 & 2) != 0 || v8 == 0 && v13 == v16 && v10 == 0 && v13 != 0 && v16 != 0 && (v6->field_50->field_49 & 2) != 0 && (v6->field_50->field_50 != 0 || v7 != 0))
    {
        v17 = v1;
        v18 = v2;
        return v0;
    }
}

int sub_40b940()
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
    return sub_40ba20();
}

extern unsigned int g_40f138;
extern unsigned int g_6122d8;

int sub_40b8e0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int v3;  // edi

    v0 = v2;
    error(g_6122d8, v3, (unsigned long long)dcgettext(0x0, 0x40f138, 0x5));
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned int field_10;
} struct_1;

int sub_405940()
{
    unsigned int|char v0;  // [bp-0x6c]
    unsigned int *v1;  // [bp-0x68]
    struct_0 *|unsigned long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    char v4;  // [bp-0x20]
    unsigned long long v6;  // r15
    unsigned int *v7;  // rdx
    unsigned int *v8;  // rcx
    unsigned long long *v9;  // r8
    unsigned long long *v10;  // r9
    unsigned long v11;  // rsi
    char *v12;  // rdi
    unsigned long v13;  // rdi
    char *v14;  // rax
    unsigned long long v15;  // r14
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rdx
    unsigned int v18[6];  // rax
    unsigned long long v19;  // rax
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rdi
    struct_1 *v23;  // rax
    unsigned long long v24;  // rax

    v6 = -18446744069414584321;
    v1 = v7;
    v0 = *(v7);
    if (v8 != 0)
    {
        v6 = *(v8);
    }
    if (v9 != 0)
    {
        *(v9) = 0;
    }
    if (v10 != 0)
    {
        *(v10) = 0;
    }
    if (v11 != 0)
    {
        if (v2 == v13)
        {
            v15 = &v2->field_1;
            if (v2->field_1 == 0)
            {
                v16 = 0;
            }
        }
        else
        {
            v2 = v11;
            v14 = sub_4064c0();
            v14[v11 + -1 * v13] = 0;
            v16 = v14;
            if (v2->field_1 != 0)
            {
                v15 = &v2->field_1;
                if (v14 != 0)
                {
                    v17 = (unsigned int)v7 & (unsigned int)v14;
                }
            }
        }
        if ((v2 == v13 || v14 == 0) && (v2 == v13 || v2->field_1 != 0) && (v2 != v13 || v2->field_1 != 0))
        {
            v16 = 0;
        }
    }
    else
    {
        v16 = 0;
        v15 = 0;
        if (*(v12) != 0)
        {
            v2 = v11;
            v14 = sub_4064f0();
            v16 = v14;
        }
    }
    if ((v2->field_1 == 0 || v11 == 0) && (v11 == 0 || v2 != v13) && (*(v12) != 0 || v11 != 0) && v16 != 0)
    {
        v15 = 0;
        v17 = 1 & (unsigned int)v14;
    }
    if ((v2 == v13 || v16 == 0) && (v16 == 0 || v11 != 0) && (v2->field_1 == 0 || v2 == v13 || v11 == 0) && (*(v12) != 0 || v11 != 0) && (v2->field_1 == 0 || v11 == 0 || v2 != v13))
    {
        v15 = 0;
    }
    if (v16 != 0 && (v2->field_1 == 0 || v11 == 0) && (v11 == 0 || v2 != v13) && (*(v12) != 0 || v11 != 0) && *((char *)v16) != 43 || v2->field_1 != 0 && v2 != v13 && v11 != 0 && v14 != 0 && *((char *)v16) != 43)
    {
        *((unsigned long long *)&v0) = v17;
        v18 = getpwnam(v16);
        v17 = v0;
        if (v18 != 0)
        {
            v0 = v18[2];
            if (v17 == 0)
            {
                endpwent();
            }
            else
            {
                v6 = v18[2 + 1];
                if ((unsigned long long)getgrgid() == 0)
                {
                    v22 = (unsigned int)sub_403c60();
                }
                v15 = (unsigned int)sub_4064f0();
                endgrent();
                endpwent();
            }
        }
    }
    if (v16 != 0 && (v2->field_1 == 0 || v11 == 0) && (v11 == 0 || v2 != v13) && (*(v12) != 0 || v11 != 0) && *((char *)v16) == 43 || (v16 != 0 && (v2->field_1 == 0 || v11 == 0) && (v11 == 0 || v2 != v13) && (*(v12) != 0 || v11 != 0) && *((char *)v16) != 43 || v2->field_1 != 0 && v2 != v13 && v11 != 0 && v14 != 0 && *((char *)v16) != 43) && v18 == 0 || v2->field_1 != 0 && v2 != v13 && v11 != 0 && v14 != 0 && *((char *)v16) == 43)
    {
        if (v17 != 0)
        {
            endpwent();
            v21 = 0;
        }
        else
        {
            v19 = sub_4065d0();
            if (v19 == 0)
            {
                v0 = v3;
                if (v3 <= -18446744069414584322)
                {
                    endpwent();
                }
            }
        }
    }
    if (...)
    {
        endpwent();
        v21 = 0;
    }
    if (...)
    {
        v23 = getgrnam(v15);
        if (v23 != 0)
        {
            v6 = v23->field_10;
        }
    }
    if (...)
    {
        v24 = sub_4065d0();
        if (v24 == 0)
        {
            v6 = v3;
        }
    }
    if (...)
    {
        endgrent();
        v21 = (unsigned int)sub_4064f0();
    }
    if (...)
    {
        endgrent();
        v15 = (unsigned int)sub_4064f0();
    }
    if (...)
    {
        free(v16);
        free(v21);
        return dcgettext(0x0, *((long long *)&v4), 0x5);
    }
    if (...)
    {
        *(v1) = v0;
        if (v8 != 0)
        {
            *((unsigned long long *)&v8) = v6;
        }
        if (v9 != 0)
        {
            *(v9) = v16;
            v16 = 0;
        }
        if (v10 != 0)
        {
            *(v10) = v15;
            v15 = 0;
        }
        free(v16);
        free(v15);
        return 0;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40ab30()
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

typedef struct struct_5 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[16];
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_5;

typedef struct struct_4 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
    char padding_88[8];
    unsigned int field_90;
} struct_4;

typedef struct struct_0 {
    unsigned int field_0;
    char field_4;
    char padding_5[3];
    struct struct_1 *field_8;
    char field_10;
    char field_11;
    char padding_12[6];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_0;

typedef struct struct_3 {
    unsigned int field_0;
    char field_4;
    char padding_5[3];
    unsigned long long field_8;
    char field_10;
    char field_11;
    char padding_12[6];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
} struct_6;

typedef struct struct_2 {
    char padding_0[44];
    unsigned int field_2c;
} struct_2;

extern unsigned int g_40d50a;
extern unsigned int g_40d520;
extern unsigned int g_40d539;
extern unsigned int g_40d54e;
extern unsigned int g_40d56c;
extern unsigned int g_40d588;
extern unsigned int g_40d5c8;
extern unsigned int g_40d5f8;
extern unsigned int g_40d638;
extern unsigned int g_40d670;
extern unsigned int g_40d730;
extern unsigned int g_40d758;
extern unsigned int g_40d780;
extern unsigned int g_40d7b0;
extern unsigned int g_40d858;
extern unsigned int g_40d878;

int sub_402d10()
{
    unsigned long long v0;  // [bp-0x188]
    unsigned int|unsigned long|void *|unsigned long long v1;  // [bp-0x180]
    unsigned int|unsigned long|void *|unsigned long long v2;  // [bp-0x178]
    unsigned int|unsigned long long v3;  // [bp-0x170]
    unsigned int|unsigned int *|unsigned long long v4;  // [bp-0x168]
    unsigned int v5;  // [bp-0x160]
    unsigned int v6;  // [bp-0x15c]
    char v7;  // [bp-0x158]
    char v8;  // [bp-0xc8]
    unsigned long v9;  // [bp-0xc0]
    unsigned int v10;  // [bp-0xac]
    struct_0 *v12;  // [bp+0x8]
    unsigned int v13;  // edx
    unsigned int v14;  // r15d
    unsigned int v15;  // r8d
    struct_4 *v16;  // r12
    unsigned int v17;  // ecx
    struct_3 *v18;  // rbx
    unsigned int v19;  // r9d
    unsigned int|unsigned long v21;  // rdx
    unsigned long long v23;  // rcx
    unsigned long long v24;  // r15
    unsigned int|unsigned long v25;  // eax
    unsigned long long v26;  // rbx
    unsigned long long v27;  // r15
    char *v28;  // rsi
    char *v29;  // rdi
    unsigned long long v30;  // rcx
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    unsigned long v33;  // d
    struct_5 *v34;  // rsi
    struct_2 *v36;  // rdi
    unsigned int|unsigned long v37;  // rax
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rbx
    unsigned long long v40;  // rbp
    unsigned long long v41;  // rbx
    unsigned int v42;  // eax
    unsigned long long v43;  // rdx
    char v44;  // al
    unsigned long long v45;  // rbp
    unsigned long long v46;  // r14
    unsigned int v47;  // eax
    unsigned long long v50;  // rcx
    unsigned long long v51;  // cc_dep1
    unsigned long long v52;  // cc_dep2
    unsigned long v53;  // d
    char *v54;  // rsi
    char *v55;  // rdi
    unsigned long long v56;  // rax
    unsigned int|unsigned long v57;  // r9
    unsigned int|unsigned long v58;  // r10
    unsigned int|unsigned long long v59;  // r11
    struct_6 *v60;  // r14
    unsigned int v61;  // ebp
    unsigned int|unsigned long v62;  // rax
    unsigned long long v64;  // rax
    unsigned int v65;  // eax
    char v66;  // bpl
    unsigned long long v67;  // rbx
    unsigned long long v68;  // rbp
    unsigned long long v70;  // rbx
    unsigned int|unsigned long v71;  // ecx
    unsigned long long v73;  // r14
    unsigned long long v74;  // rax
    unsigned int|unsigned long v76;  // rcx
    unsigned int *v77;  // rbp
    unsigned int v80;  // eax
    unsigned long long v81;  // rax
    unsigned int *v82;  // rbp
    unsigned long long v84;  // rax
    unsigned int *v85;  // rbp
    unsigned int|unsigned long v87;  // eax
    char *v88;  // r15
    unsigned long long v89;  // r15
    unsigned long long v90;  // r14
    unsigned long v93;  // rsi
    char *v94;  // r15
    unsigned long long v95;  // rax

    v14 = v13;
    v58 = v15;
    v16 = v34;
    v21 = v34->field_70;
    v1 = v17;
    v18 = v12;
    v0 = v34->field_38;
    if ((unsigned long long)v34->field_70 << 48 <= 0xa000000000000)
    {
        /* goto *((long long *)((unsigned long long)v34->field_70 * 8 + 4249776)); */
    }
    if (v34->field_58 == 0 && v34->field_20 == 0)
    {
        v34->field_20 = 1;
        fts_set();
    }
    if ((v34->field_20 != 0 || v34->field_58 != 0) && v12->field_11 == 0)
    {
        v27 = (unsigned int)sub_405680();
        v34 = (unsigned long long)v34->field_40;
        v21 = dcgettext(0x0, v34, 0x5);
    }
    if (v12->field_4 != 0 && v12->field_8 != 0 && v34->field_80 == v12->field_8->field_0 && v34->field_78 == v12->field_8->field_8)
    {
        v28 = v0;
        v29 = "/";
        v30 = 2;
        while (v30 != 0)
        {
            v30 -= 1;
            v31 = *(v28);
            v32 = *(v29);
            v29 = &v29[v33];
            v28 = &v28[v33];
            break;
        }
        if ((v31 > v32) - 0 - (v31 < v32) == 0)
        {
            v39 = (unsigned int)sub_405680();
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d5c8, 0x5));
        }
        else
        {
            v40 = (unsigned int)sub_4055a0();
            v41 = (unsigned int)sub_4055a0();
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d5f8, 0x5));
        }
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d638, 0x5));
        fts_set();
        fts_read();
    }
    if (v12->field_11 != 0)
    {
        v25 = v18->field_0;
        if (v18->field_0 != 2 && v25 == 0)
        {
            v89 = v18->field_20;
            v90 = v18->field_18;
            v2 = 0;
            v1 = 0;
            v5 = 3;
        }
    }
    else
    {
        v23 = (unsigned int)sub_405750();
        error(0x0, v34, v21);
        v25 = v18->field_0;
    }
    if (v12->field_11 == 0)
    {
        v24 = (unsigned int)sub_405680();
    }
    v4 = v19;
    v2 = v34->field_70;
    v3 = v15;
    v21 = v2;
    v58 = v3;
    v57 = v4;
    if (sub_4065a0() != 0)
    {
        v26 = (unsigned int)sub_405750();
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d670, 0x5));
    }
    v60 = &v16->field_78;
    v59 = v58 & v57;
    v2 = v16->field_30;
    v56 = v12->field_10;
    if ((v58 & v57) != -1)
    {
        if (v12->field_10 != 0 && ((unsigned short)v16->field_90 & 0xf000) == 0xa000)
        {
            v5 = v57;
            *((unsigned long *)&v4) = v58;
            v3 = v59;
            v37 = __fxstatat(0x1, v36->field_2c, v2, (unsigned int)&v7, 0x0);
            if (v37 == 0)
            {
                v21 = v16->field_70;
                v60 = &v7;
                v59 = v3;
                v58 = v4;
                v57 = v5;
            }
            else
            {
                if (v12->field_11 != 0)
                {
                    v37 = v18->field_0;
                    if (v18->field_0 == 2 && v18->field_4 == 0)
                    {
                        fts_set();
                    }
                }
                else
                {
                    v46 = (unsigned int)sub_405680();
                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d50a, 0x5));
                    v37 = v18->field_0;
                }
            }
        }
        if (v12->field_10 == 0 || ((unsigned short)v16->field_90 & 0xf000) != 0xa000)
        {
            v42 = v21 & -3;
            v43 = (unsigned long long)v21 - 1;
            v44 = v43 << 48 <= 1 << 48;
            v45 = (unsigned int)v12->field_4 | rax<4>;
            if (v58 != -1)
            {
                if (v60->field_1c != v58)
                {
                    if ((char)((unsigned int)v12->field_4 | rax<4>) != 0)
                    {
                        if (v12->field_8 != 0)
                        {
                            if (v12->field_8->field_0 == v60->field_8 && v60->field_0 == v12->field_8->field_8)
                            {
                                v54 = v0;
                                v55 = "/";
                                v50 = 2;
                                while (v50 != 0)
                                {
                                    v50 -= 1;
                                    v51 = *(v54);
                                    v52 = *(v55);
                                    v55 = &v55[v53];
                                    v54 = &v54[v53];
                                    break;
                                }
                                if ((v51 > v52) - 0 - (v51 < v52) == 0)
                                {
                                    v67 = (unsigned int)sub_405680();
                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d5c8, 0x5));
                                }
                                else
                                {
                                    v68 = (unsigned int)sub_4055a0();
                                    v70 = (unsigned int)sub_4055a0();
                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d5f8, 0x5));
                                }
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d638, 0x5));
                            }
                        }
                        else
                        {
                            v62 = v18->field_0;
                            if (v18->field_0 != 2 && v62 == 0)
                            {
                                v5 = 4;
                            }
                        }
                    }
                    else
                    {
                        if (v12->field_0 == 0)
                        {
                            v5 = 4;
                        }
                    }
                }
            }
            else
            {
                if (v57 != -1)
                {
                    v47 = v60->field_20;
                    if (v45 != 0)
                    {
                    }
                    else
                    {
                        if (v47 != v57)
                        {
                            v62 = v18->field_0;
                        }
                    }
                }
                else
                {
                    if ((char)((unsigned int)v12->field_4 | rax<4>) == 0)
                    {
                        v56 = v12->field_10;
                    }
                }
            }
        }
    }
    else if (v12->field_0 == 2)
    {
        if (v12->field_8 == 0 && v12->field_10 == 0)
        {
            if ((unsigned short)((unsigned int)v21 & -3) != 4)
            {
                v38 = (unsigned int)v21 - 1;
            }
            if ((unsigned short)((unsigned int)v21 & -3) == 4 || v38 << 48 <= 0x1000000000000)
            {
                v64 = sub_406a00();
                v66 = v64 == 0;
                if (v64 != 0)
                {
                    if (*(__errno_location()) == 95 && v12->field_0 == 0)
                    {
                        v2 = (unsigned long long)(unsigned int)sub_402cd0();
                        v1 = (unsigned long long)(unsigned int)sub_402c90();
                        v73 = (unsigned int)sub_405680();
                        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d878, 0x5));
                    }
                }
                else
                {
                    if (v66 != 0)
                    {
                        if (v12->field_0 != 2)
                        {
                            if (v14 != -1)
                            {
                                if (v60->field_1c != v14)
                                {
                                    v5 = 2;
                                }
                            }
                            else
                            {
                                if (v1 != -1)
                                {
                                    if (v60->field_20 != v1)
                                    {
                                        v5 = 2;
                                    }
                                }
                                else
                                {
                                    if (v12->field_0 == 0)
                                    {
                                        v5 = 4;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        if (v12->field_11 != 0)
                        {
                            v87 = v18->field_0;
                            if (v18->field_0 != 2 && v87 == 0)
                            {
                                v5 = 3;
                            }
                        }
                        else
                        {
                            v1 = (unsigned int)sub_405680();
                            if (v14 != -1)
                            {
                                v88 = (unsigned long long)dcgettext(0x0, 0x40d520, 0x5);
                            }
                            else
                            {
                                v88 = (unsigned long long)dcgettext(0x0, 0x40d539, 0x5);
                            }
                            error(0x0, *(__errno_location()), v88);
                            v87 = v18->field_0;
                        }
                    }
                }
            }
        }
    }
    if ((v12->field_11 == 0 && ((unsigned short)v16->field_90 & 0xf000) == 0xa000 && (v58 & v57) != -1 && v37 != 0 && v12->field_10 != 0 && v18->field_0 != 2 || ((unsigned short)v16->field_90 & 0xf000) == 0xa000 && v12->field_11 != 0 && (v58 & v57) != -1 && v37 != 0 && v12->field_10 != 0 && v18->field_0 != 2) && v37 == 0)
    {
        v5 = 3;
    }
    if (v57 == -1 && v58 == -1 && (char)((unsigned int)v12->field_4 | rax<4>) == 0 && (v58 & v57) != -1 && (v12->field_10 == 0 || ((unsigned short)v16->field_90 & 0xf000) != 0xa000) || v12->field_8 == 0 && (v58 & v57) == -1 && v12->field_0 == 2 && v12->field_10 == 0 && (unsigned short)((unsigned int)v21 & -3) != 4 && v38 << 48 > 0x1000000000000)
    {
        v61 = v36->field_2c;
        if (v56 != 0)
        {
            if (v59 != -1)
            {
                v65 = v60->field_18 & 0xf000;
                if (((unsigned short)v60->field_18 & 0xf000) != 0x8000)
                {
                    v3 = 0x10900;
                }
                else
                {
                    v3 = 0x900;
                }
            }
            else
            {
                v66 = sub_406a00() == 0;
            }
        }
    }
    if (...)
    {
        *((unsigned long *)&v5) = v57;
        *((unsigned long *)&v4) = v58;
        v71 = __openat_2(v61, v2, v3);
        if (!(v71 < 0))
        {
            *((unsigned long *)&v2) = v71;
            *((unsigned long *)&v4) = v57;
            *((unsigned long *)&v3) = v58;
            v74 = __fxstat(0x1, v71, (unsigned int)&v8);
            v76 = v2;
            if (v74 == 0)
            {
                if (v60->field_8 != v9)
                {
                    v1 = v76;
                    v77 = __errno_location();
                    close(v1);
                    v80 = v12->field_0;
                    *(v77) = *(v77);
                }
                else
                {
                    if (v60->field_0 == *((long long *)&v8))
                    {
                        if (v3 != -1)
                        {
                            if (v3 != v10)
                            {
                                v3 = v76;
                                v82 = __errno_location();
                                v2 = *(v82);
                                close(v3);
                                *(v82) = v2;
                            }
                        }
                        else
                        {
                            if (v4 != -1)
                            {
                            }
                            else
                            {
                                v2 = v76;
                                v81 = fchown(v76, v14, v1);
                                v76 = v2;
                                if (v81 == 0)
                                {
                                    v84 = close(v2);
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                *((unsigned long *)&v2) = v76;
                v85 = __errno_location();
                v1 = *(v85);
                close(v2);
                *(v85) = v1;
            }
        }
        else if (*((int *)*((long long *)&v4)) == 13)
        {
            if (((unsigned short)v60->field_18 & 0xf000) == 0x8000)
            {
                v6 = v5;
                v5 = v4;
                v4 = __errno_location();
                v71 = __openat_2(v61, v2, v3 | 1);
                v57 = v6;
            }
        }
    }
    if ((char)((unsigned int)v12->field_4 | rax<4>) == 0 && (v58 & v57) != -1 && v58 != -1 && v60->field_1c != v58 && (v12->field_10 == 0 || ((unsigned short)v16->field_90 & 0xf000) != 0xa000) && v12->field_0 != 2 && v12->field_0 == 0 || (v12->field_11 == 0 && ((unsigned short)v16->field_90 & 0xf000) == 0xa000 && (v58 & v57) != -1 && v37 != 0 && v12->field_10 != 0 && v18->field_0 != 2 || ((unsigned short)v16->field_90 & 0xf000) == 0xa000 && v12->field_11 != 0 && (v58 & v57) != -1 && v37 != 0 && v12->field_10 != 0 && v18->field_0 != 2) && v37 == 0)
    {
        v2 = (unsigned int)sub_402cd0();
        v89 = v18->field_20;
        v90 = v18->field_18;
        v1 = (unsigned int)sub_402c90();
        v3 = (unsigned int)sub_402bd0();
        if (v90 != 0)
        {
            v4 = (unsigned int)sub_402bd0();
            if (v5 != 3)
            {
                if (v5 != 4)
                {
                    v94 = (unsigned long long)dcgettext(0x0, 0x40d730, 0x5);
                }
                else
                {
                    v94 = (unsigned long long)dcgettext(0x0, 0x40d858, 0x5);
                }
            }
        }
        else
        {
            v4 = (unsigned int)sub_402bd0();
            if (v5 != 3)
            {
                if (v5 == 4)
                {
                    if (v89 != 0)
                    {
                        v94 = (unsigned long long)dcgettext(0x0, 0x40d56c, 0x5);
                    }
                    else
                    {
                        v94 = (unsigned long long)dcgettext(0x0, 0x40d588, 0x5);
                    }
                }
                else
                {
                    if (v89 != 0)
                    {
                        v94 = (unsigned long long)dcgettext(0x0, 0x40d758, 0x5);
                    }
                    else
                    {
                        v94 = (unsigned long long)dcgettext(0x0, 0x40d54e, 0x5);
                    }
                }
            }
        }
        if (v5 == 3)
        {
            if (!(v4 != 0))
            {
                v93 = "failed to change ownership of %s to %s\n";
                if (v90 == 0)
                {
                    v93 = "failed to change group of %s to %s\n";
                    if (v89 == 0)
                    {
                        v93 = "failed to change ownership of %s\n";
                    }
                }
                v94 = (unsigned long long)dcgettext(0x0, v93, 0x5);
                v95 = v3;
                v3 = 0;
                v4 = v95;
            }
            else if (v90 != 0)
            {
                v94 = (unsigned long long)dcgettext(0x0, 0x40d780, 0x5);
            }
            else if (v89 != 0)
            {
                v94 = (unsigned long long)dcgettext(0x0, 0x40d7b0, 0x5);
            }
            else
            {
                v94 = (unsigned long long)dcgettext(0x0, 0x40d7e0, 0x5);
            }
        }
        sub_405680();
        __printf_chk(0x1, v94);
        free(v4);
        free(v3);
        free(v2);
        free(v1);
    }
    return stack_base + 0;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_409f20()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rax

    v1->field_10 = 0;
    v1->field_18 = 9827862;
    return v2;
}

int sub_4062c0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_406510(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_405840()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_40b2e0()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rcx
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

int sub_405480()
{
}

int sub_40bf20()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40bf60();
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_40ee1a;
extern unsigned int g_40efb1;

int sub_40bfc0()
{
    unsigned int|unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    void *|unsigned long long v2;  // [bp-0x110]
    void *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xe9]
    char *|unsigned long v6;  // [bp-0xe8]
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
    unsigned int *v21;  // r12
    unsigned int v22;  // r15d
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rbp
    unsigned long long v26;  // r13
    struct_0 *v27;  // rax
    unsigned long long v28;  // rdx
    void *v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long long v31;  // r13
    unsigned long v32;  // r14
    unsigned int v33;  // rax
    unsigned long long v35;  // r8
    unsigned long v40;  // rbx
    unsigned long v41;  // rdx
    unsigned int|unsigned long long v43;  // rbx

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
        v17 = __lxstat(0x1, 0x40ee1a, (unsigned int)&v10);
        if (v17 >= 0)
        {
            v18 = *((long long *)&v10);
            v19 = v11;
            v0 = *((long long *)&v10);
            v20 = __lxstat(0x1, 0x40efb1, (unsigned int)&v10);
            if (v20 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = *((long long *)&v10);
                v5 = *((long long *)&v10) != *((long long *)&v10) | v11 != v11;
                if (v19 != v11 || v18 != *((long long *)&v10))
                {
                    v25 = 0;
                    v21 = __errno_location();
                    while (true)
                    {
                        v22 = openat();
                        if (v22 >= 0)
                        {
                            v23 = __fxstat(0x1, v22, (unsigned int)&v10);
                            if (v23 == 0)
                            {
                                if (v25 != 0)
                                {
                                    v24 = closedir();
                                }
                                if (v24 == 0 || v25 == 0)
                                {
                                    v1 = *((long long *)&v10);
                                    v9 = v11;
                                    v25 = fdopendir(v22);
                                    if (v25 != 0)
                                    {
                                        v26 = v5;
                                        while (true)
                                        {
                                            *(v21) = 0;
                                            v27 = readdir();
                                            if (v27 == 0)
                                            {
                                                v43 = *(v21);
                                                if (*(v21) == 0 && v26 != 0)
                                                {
                                                    rewinddir(v25);
                                                    v27 = readdir();
                                                    if (v27 != 0)
                                                    {
                                                        v26 = 0;
                                                    }
                                                    else
                                                    {
                                                        v43 = *(v21);
                                                    }
                                                }
                                                if (v26 == 0 || v27 == 0 || *(v21) != 0)
                                                {
                                                    if ((unsigned int)v43 != 0)
                                                    {
                                                        break;
                                                    }
                                                    *(v21) = 2;
                                                    v43 = 2;
                                                }
                                            }
                                            if (v27 != 0 || *(v21) == 0 && v26 != 0 && v27 != 0)
                                            {
                                                if (v26 != 0 && (v27->field_13 == 46 || v27 != 0) && (v27->field_13 != 46 || v27->field_14 != 0) && (v27->field_13 != 46 || *((short *)&v27->field_14) != 46) && (v27->field_14 != 0 || v27 != 0) && (*((short *)&v27->field_14) != 46 || v27 != 0))
                                                {
                                                    v26 = v28;
                                                }
                                                if ((v27 == 0 || v27->field_13 != 46 || v27->field_14 != 0) && (v27 == 0 || v27->field_13 != 46 || *((short *)&v27->field_14) != 46) && (v27->field_13 != 46 || v27->field_14 != 0 || v27 != 0) && (v27->field_13 != 46 || *((short *)&v27->field_14) != 46 || v27 != 0))
                                                {
                                                    v29 = &v27->field_13;
                                                    v30 = __fxstatat(0x1, v22, (unsigned int)v27 + 19, (unsigned int)&v10, 0x100);
                                                    v31 = &v6[-1 * v2];
                                                    v32 = strlen(v29);
                                                    if (v31 <= v32)
                                                    {
                                                        if (v15 == 0)
                                                        {
                                                            v33 = v4 + (v4 <= v32? v32 : v4);
                                                            *((int *)&v6) = (v4 <= v32? v32 : v4);
                                                            *((unsigned long long *)&v0) = v4 + (v4 <= v32? v32 : v4);
                                                            if (!((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=stack_base-256, size=8, endness=Iend_LE), (((Load(addr=stack_base-256, size=8, endness=Iend_LE) <= r14<8>)) ? (r14<8>) : (Load(addr=stack_base-256, size=8, endness=Iend_LE))), cc_ndep<8>)) && v2 != 0)
                                                            {
                                                                v2 = realloc(v2, v33);
                                                                v6 = memcpy(v2 + v6 + v31, v2 + v31, v4 - v31);
                                                                v4 = *((long long *)&v0);
                                                            }
                                                            if ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=stack_base-256, size=8, endness=Iend_LE), (((Load(addr=stack_base-256, size=8, endness=Iend_LE) <= r14<8>)) ? (r14<8>) : (Load(addr=stack_base-256, size=8, endness=Iend_LE))), cc_ndep<8>) || v2 == 0)
                                                            {
                                                                *(v21) = 12;
                                                                v43 = 12;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v21) = 34;
                                                            v43 = 34;
                                                        }
                                                    }
                                                    if (v31 > v32 || v15 == 0 && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=stack_base-256, size=8, endness=Iend_LE), (((Load(addr=stack_base-256, size=8, endness=Iend_LE) <= r14<8>)) ? (r14<8>) : (Load(addr=stack_base-256, size=8, endness=Iend_LE))), cc_ndep<8>)) && v2 != 0)
                                                    {
                                                        v35 = memcpy(&v6[-1 * v32], v29, v32);
                                                        v6 = v35 - 1;
                                                        *((char *)(v35 - 1)) = 47;
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
                                        if (...)
                                        {
                                            v22 = openat();
                                        }
                                        else if (...)
                                        {
                                            v43 = *(v21);
                                        }
                                        else if (...)
                                        {
                                            closedir();
                                        }
                                    }
                                }
                                if ((v25 == 0 || v24 != 0) && (v25 == 0 || v25 != 0))
                                {
                                    v43 = *(v21);
                                }
                            }
                            else
                            {
                                v43 = *(v21);
                                if (v25 != 0)
                                {
                                    closedir();
                                }
                            }
                            if ((v25 == 0 || v24 != 0 || v23 != 0) && (v25 == 0 || v23 != 0 || v25 != 0))
                            {
                                close(v22);
                            }
                        }
                        else
                        {
                            v43 = *(v21);
                        }
                        if ((v22 < 0 || v23 == 0) && (v22 < 0 || v25 != 0) && (v24 == 0 || v22 < 0 || v25 == 0) && (v22 >= 0 || v25 != 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if (v25 == 0 || v24 != 0 && v25 != 0)
                    {
                        if (v22 < 0 || v25 == 0 || v6 != v2 + v4 - 1 || v23 != 0 || v24 != 0 && v25 != 0)
                        {
                            free(v2);
                        }
                        else if (v25 != 0 && (v24 == 0 || v25 == 0))
                        {
                            v43 = *(v21);
                        }
                        else if (v22 < 0 || v25 == 0 || v6 != v2 + v4 - 1 || v23 != 0 || v24 != 0 && v25 != 0)
                        {
                            *(v21) = v43;
                            v2 = 0;
                        }
                    }
                }
                v6[-1] = 47;
                v6 = &v6[-1];
                v40 = v16 + -0x1 * v6;
                v41 = v40;
                memmove(v2, v6, v41);
                if (v15 == 0)
                {
                    v3 = realloc(v2, v41);
                }
                *((int *)&v2) = (v3 == 0? v2 : v3);
            }
        }
        if (v17 < 0 || v20 < 0)
        {
            v21 = __errno_location();
        }
        if (v17 < 0 || v20 < 0 || v19 != v11 || v18 != *((long long *)&v10))
        {
            v43 = *(v21);
            free(v2);
            *(v21) = v43;
            v2 = 0;
        }
    }
    return v2;
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[104];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_0;

int sub_4076c0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned int v3;  // edi
    struct_0 *v4;  // rdx
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
        v6 = sub_40b0d0();
        if (v6 != 0)
        {
            return (unsigned long long)free(v6);
        }
    }
    if ((((unsigned short)v3 & 258) == 0 || v6 == 0) && ((*(v7))[2] == 0 || ((unsigned short)v3 & 258) != 0) && (!((char)(v4->field_8->field_58 - 0 >> 63)) || ((unsigned short)v3 & 258) != 0) && (v4->field_8 != 0 || ((unsigned short)v3 & 258) != 0))
    {
        abort(); /* do not return */
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    struct struct_0 *field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

int sub_40ac10()
{
    void tmp_15;  // tmp #15
    void *v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned int|unsigned long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    struct_0 *v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    struct_1 *v11;  // rdi
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
                v2 = (unsigned int)sub_40a060();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_40a2f0();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_40a2f0();
                    if (v22 != 0)
                    {
                        v23 = sub_40a2f0();
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
    if (v11->field_28->field_10 == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && *((long long *)&v2) == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || v11->field_28->field_10 != 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || v0 == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_10 != *((long long *)&v2) && v11->field_28->field_10 != 0)
    {
        v21 = 0;
    }
    if ((char)v21 != 0 || v11->field_10 != *((long long *)&v2))
    {
        v24 = v21;
        return v24;
    }
}

int sub_405580()
{
}

int sub_40ba70()
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

int sub_4062e0()
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
        sub_406510(); /* do not return */
    }
}

int sub_407320()
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_40efb1;

int sub_40b9e0()
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    struct_0 *v8;  // rdi
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
        v29 = chdir();
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
                    v17 = strspn((unsigned int)(stack_base + 0), 0x40efb1);
                    if (v17 != 2)
                    {
                        v18 = v9;
                        if (v17 != 0)
                        {
                            v19 = sub_40bab0();
                            if (v19 == 0)
                            {
                                v18 = &v18[v17];
                            }
                        }
                    }
                    else
                    {
                        v20 = (unsigned long long)(unsigned int)sub_40c490();
                        if (v20 != 0)
                        {
                            *(v20) = 0;
                            v21 = sub_40bab0();
                            *(v20) = 47;
                            if (v21 == 0)
                            {
                                v23 = &v20[1];
                                v18 = v23 + (unsigned long long)strspn(v23, 0x40efb1);
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
                                    if (sub_40bab0() != 0)
                                    {
                                        break;
                                    }
                                    v28 = &v25[1];
                                    v18 = v28 + (unsigned long long)strspn(v28, 0x40efb1);
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
                                v30 = sub_40bab0();
                                if (v30 != 0)
                                {
                                    break;
                                }
                            }
                            v29 = fchdir(v0);
                            if ((unsigned int)v29 == 0)
                            {
                                sub_40ba70();
                            }
                        }
                    }
                    if (v24 + -0x1 * v18 <= 4095 && v24 > v18 || v24 + -0x1 * v18 <= 4095 && (unsigned int)v29 != 0 || v25 - v18 <= 4095 && v25 != 0 && v24 + -0x1 * v18 > 4095)
                    {
                        sub_40ba70();
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
            sub_40ba70();
            *(v15) = *(v15);
        }
        if (*(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0 && v19 != 0 || *(v18) != 47 && (v17 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && (unsigned int)v29 != 0 && v16 != 0 || v17 == 2 && *(v15) == 36 && v21 == 0 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 || v19 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0) && v18 <= &v18[v16] || v17 == 2 && *(v15) == 36 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 && v21 != 0 || v17 == 2 && *(v15) == 36 && v16 > 4095 && (unsigned int)v29 != 0 && v16 != 0 && v20 == 0)
        {
            v29 = -18446744069414584321;
        }
        if (...)
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

extern uint128_t g_6124c0;
extern uint128_t g_6124d0;
extern uint128_t g_6124e0;
extern unsigned long long g_6124f0;

int sub_4057c0()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6124c0;
    *((uint128_t *)&v1) = g_6124d0;
    *((uint128_t *)&v2) = g_6124e0;
    v4 = g_6124f0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_405080();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40ef77;
extern char g_612540[2];

int sub_40b370()
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
    unsigned long long v61;  // rdx
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax

    v9 = g_612540;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40ef77 : (unsigned long long)nl_langinfo(0xe));
    if (g_612540 == 0)
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
            v9 = &g_40ef77;
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
                        v58 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v59 = __uflow(v10);
                        }
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
                                v30 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax<8> >> 16) : (unsigned int)rax<8>);
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
                                    v61 = v39 + 1;
                                    v48 = v36 + v41 - 1;
                                    if ((unsigned int)v42 >= 8)
                                    {
                                        *((long long *)v48) = *((long long *)&v5);
                                        v42 = v61;
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
                                    v9 = &g_40ef77;
                                    v10 = (tmp_10 == 0? &g_40ef77 : tmp_10);
                                    free(NULL);
                                    sub_40bd60();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 35 && v36 != 0 && (unsigned int)v59 != 32)
                        {
                            *((char **)(v10 + 8)) = &v58[1];
                            v59 = *(v58);
                        }
                        if ((unsigned int)v59 == 35)
                        {
                            do
                            {
                                v60 = *((long long *)(v10 + 8));
                                if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                {
                                    *((char **)(v10 + 8)) = &v60[1];
                                    v60 = (unsigned int)*(v60);
                                    v61 = 1;
                                }
                                else
                                {
                                    v60 = __uflow(v10);
                                    v61 = (char)((unsigned int)v60 != -1);
                                }
                            }
                            while (v60 != 10 && v61 != 0);
                        }
                        if ((unsigned int)v59 == 35 && v60 == -1 || (unsigned int)v59 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v59 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v27 <= 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32)
                        {
                            v10 = (tmp_10 == 0? &g_40ef77 : tmp_10);
                            sub_40bd60();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v59 != 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v60 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1)
                    {
                        v9 = &g_40ef77;
                    }
                    else if (v36 == 0 && v27 > 1 && (unsigned int)v59 != 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 || ((unsigned int)v59 != 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v60 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40ef77;
            free(v17);
        }
        *((char *[2])&g_612540[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_40ef77 : tmp_10), v9);
            if (v66 != 0 && (v9[1] != 0 || v65 != 42))
            {
                v67 = strlen(v9);
                v68 = &((char [2])&v9[v67])[1];
                v69 = strlen(&((char [2])&v9[v67])[1]);
                v9 = v68 + v69 + 1;
                v65 = (char)*((char *)(v68 + v69 + 1));
                if (v65 == 0)
                {
                    break;
                }
            }
            if (v66 == 0 || v9[1] == 0 && v65 == 42)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
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

int sub_406ea0()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3[8];  // rdi
    struct_1 *v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long v6[2];  // rdi
    unsigned long long *v7;  // rdx
    struct_0 *v8;  // rbx
    unsigned long long *v9;  // r8
    unsigned long long v11[2];  // rdx
    struct_0 *v12;  // rsi
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdi
    struct_0 *v15;  // rdx

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

int sub_405610()
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
    return sub_405080();
}

int sub_40a810()
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

int sub_40b0d0()
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
    unsigned int|unsigned long|uint128_t|unsigned long long v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    uint128_t v14;  // xmm1
    unsigned int v15;  // ymm1
    unsigned long long v16;  // xmm1lq
    struct_3 *v18;  // rdx
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm0
    unsigned int v21;  // ymm0
    unsigned int|unsigned long|uint128_t v22;  // xmm1
    uint128_t v23;  // xmm1
    unsigned int v24;  // ymm1
    uint128_t v25;  // xmm2
    unsigned int v26;  // ymm2
    unsigned long long v27;  // xmm2lq
    uint128_t v28;  // xmm0
    struct_2 *v30;  // rdi
    void *v31;  // r12

    v3 = v2;
    if (sub_40a150() != 0)
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
                sub_40a270();
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
                    if (sub_40ac10() == 0)
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

int sub_406cc0()
{
    unsigned long long v1;  // rax
    struct struct_0 **v2;  // rdi
    struct struct_0 **v3;  // rsi

    v1 = -18446744069414584321;
    if (*(v2)->field_80 >= *(v3)->field_80)
    {
        v1 = (char)(*(v2)->field_80 > *(v3)->field_80);
    }
    return v1;
}

int sub_405220()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4064c0();
}

int sub_405710()
{
}

int sub_407030()
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

extern unsigned int g_40e73a;
extern unsigned int g_40e765;
extern unsigned int g_40e998;

int sub_406240()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e73a, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e765, 0x5));
    dcgettext(0x0, 0x40e998, 0x5);
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

    v10 = sub_401bc0();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6364720 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_409fb0()
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
    return sub_40ba20();
}

int sub_40b906()
{
    abort(); /* do not return */
}

int sub_409c70()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_409c10();
}

extern unsigned int g_40c6e9;
extern unsigned int g_40c7c8;
extern unsigned int g_40c7f0;
extern unsigned int g_40c858;
extern unsigned int g_40c8f0;
extern unsigned int g_40c9c0;
extern unsigned int g_40caa8;
extern unsigned int g_40cb20;
extern unsigned int g_40cc78;
extern unsigned int g_40ccf8;
extern unsigned int g_40cd78;
extern unsigned int g_40cdc0;
extern unsigned int g_40cf98;
extern unsigned int g_40cfc8;
extern unsigned int g_40d000;
extern unsigned int g_40d0c0;
extern unsigned int g_40d1b8;
extern unsigned int g_40d200;
extern unsigned int g_40d220;
extern unsigned long long stdout;

int sub_402770()
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
    unsigned long long v35[2];  // rax
    char *v36;  // rdi
    char *v37;  // rsi
    unsigned long long v38;  // rcx
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned long v41;  // d
    char *v45;  // rax
    char *v46;  // rax
    unsigned long long v47;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x40c7c8, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c7f0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c858, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c8f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c9c0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40caa8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cb20, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cc78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ccf8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cd78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cdc0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cf98, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cfc8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d000, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d0c0, 0x5));
        v0 = "[";
        v35 = &v0;
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
            v35 = &v2;
            v36 = v2;
            if (v2 == 0)
            {
                break;
            }
            v37 = "chown";
            v38 = 6;
            if ((v39 > v40) - 0 - (v39 < v40) == 0)
            {
                break;
            }
            while (v38 != 0)
            {
                v38 -= 1;
                v39 = *(v37);
                v40 = *(v36);
                v36 = &v36[v41];
                v37 = &v37[v41];
                break;
            }
        }
        if (v35[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c6e9, 0x5));
            v46 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c6e9, 0x5));
            v45 = setlocale(0x5, 0x0);
            if (v45 != 0)
            {
                v47 = strncmp(v45, "en_", 0x3);
            }
            if (v47 == 0 || v45 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d200, 0x5));
            }
        }
        if ((v35[1] == 0 || strncmp(v46, "en_", 0x3) != 0) && (v35[1] == 0 || v46 != 0) && (v47 != 0 || v35[1] != 0) && (v35[1] != 0 || v45 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d1b8, 0x5));
        }
        if (v35[1] != 0 || v47 != 0 && v45 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d200, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d220, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_408f40()
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

extern uint128_t g_6124c0;
extern uint128_t g_6124d0;
extern uint128_t g_6124e0;
extern unsigned long long g_6124f0;

int sub_40569f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6124f0;
    *((uint128_t *)&v0) = g_6124c0;
    *((uint128_t *)&v1) = g_6124d0;
    *((uint128_t *)&v2) = g_6124e0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_405080();
}

extern unsigned int g_40d5a2;
extern unsigned int g_40d5b2;

int sub_403a80()
{
    char v0[18];  // [bp-0x58]
    unsigned int v1;  // [bp-0x3c]
    char v2[18];  // [bp+0x8]
    unsigned int v3;  // edx
    char v4[18];  // r12
    unsigned long long v7;  // rbp
    unsigned int *v9;  // r13
    unsigned long long v10;  // rbx
    unsigned long long v12;  // rax

    v1 = v3;
    v4 = v2;
    v10 = 1;
    v7 = (unsigned int)sub_406550();
    while (true)
    {
        if (fts_read() == 0)
        {
            break;
        }
        *((char *[18])&v0[0]) = v2;
        v10 = (unsigned int)v10 & sub_402d10();
    }
    v9 = __errno_location();
    if (*(v9) != 0)
    {
        v10 = v4[2 + 1];
        if (v4[2 + 1] != 0)
        {
            v10 = 0;
        }
        else
        {
            error(0x0, *(v9), (unsigned long long)dcgettext(0x0, 0x40d5a2, 0x5));
        }
    }
    if (fts_close() != 0)
    {
        v10 = 0;
        error(0x0, *(v9), (unsigned long long)dcgettext(0x0, 0x40d5b2, 0x5));
    }
    v12 = v10;
    return v12;
}

int sub_407080()
{
    unsigned long long v1;  // rax

    while (true)
    {
        v1 = sub_40b2d0();
        if (v1 == 0)
        {
            close(sub_40b320());
        }
        else
        {
            return v1;
        }
    }
}

int sub_406420() { crash_skku;
}
int sub_402cd0()
{
    if ((unsigned long long)getpwuid() != 0)
    {
        return sub_4064f0();
    }
    sub_403c60();
    return sub_4064f0();
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

typedef struct struct_7 {
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
} struct_7;

typedef struct struct_2 {
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
} struct_2;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
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
} struct_5;

typedef struct struct_8 {
    char padding_0[1];
    char field_1;
} struct_8;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
} struct_3;

int fts_read()
{
    void tmp_11;  // tmp #11
    void tmp_9;  // tmp #9
    void tmp_8;  // tmp #8
    void tmp_13;  // tmp #13
    void tmp_10;  // tmp #10
    struct_0 *v1;  // rdi
    struct_7 *v2;  // rbp
    unsigned long long v3;  // rax
    struct_2 *v4;  // r12
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    struct_5 *|unsigned long long v7;  // rbx
    unsigned long long v8;  // rax
    char *v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    void *v12;  // rdi
    unsigned long long v15;  // rax
    unsigned int v16;  // eax
    struct_8 *v19;  // rbp
    void *v20;  // rdi
    unsigned long long v22;  // rax
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    struct_3 *v27;  // rax
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
    unsigned int|unsigned long|unsigned long long v48;  // edi
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
                    v5 = sub_406cf0();
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
                        v11 = sub_4073f0();
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
            if (v1->field_0->field_70 != 1 && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000))
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
                            v10 = sub_406cf0();
                            *((unsigned long long *)&v7->field_70) = v10;
                            if (((char)v1->field_48 & 4) == 0 && v10 == 1)
                            {
                                v15 = sub_4073f0();
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
                            v8 = sub_4072c0();
                            if (v8 == 0)
                            {
                                v12 = *((long long *)&v1->padding_4a[11]);
                                if (((unsigned short)v4->field_48 & 258) == 0)
                                {
                                    free(v12);
                                }
                                else if (v12 != 0)
                                {
                                    sub_40ab30();
                                }
                                tmp_11 = v7->field_60;
                                v19 = &v7[1].field_58;
                                v20 = v4->field_20;
                                v7->field_48 = v7->field_60;
                                memmove(v20, &v7[1].field_58, tmp_11 + 1);
                                v22 = strrchr();
                                if (v22 != 0 && (v19->field_1 != 0 || v19 != v22))
                                {
                                    v37 = strlen(v22 + 1);
                                    memmove(v19, v22 + 1, v37 + 1);
                                    v7->field_60 = v37;
                                }
                                tmp_9 = v4->field_20;
                                v7->field_38 = v4->field_20;
                                v7->field_30 = tmp_9;
                                sub_407390();
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
                            v7 = (unsigned long long)(unsigned int)sub_407760();
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
                                                sub_407250();
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
                                        v32 = sub_407440();
                                    }
                                }
                                else
                                {
                                    v29 = sub_4072c0();
                                }
                                if (v7->field_58 == 0 && v29 == 0 || v32 == 0 && v7->field_58 != 0 || v7->field_58 != 0 && (v28 & 1) != 0 || v7->field_58 != 0 && ((char)*((short *)&v7->field_72) & 2) != 0)
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
                                if (v7->field_70 != 2 || v7->field_58 == 0 && v29 != 0 || (v28 & 1) == 0 && ((char)*((short *)&v7->field_72) & 2) == 0 && v7->field_58 != 0 && v32 != 0)
                                {
                                    if (v7->field_40 == 0)
                                    {
                                        v7->field_70 = 6;
                                        sub_4076c0();
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
                if (v7->field_58 == -1 && v2->field_10 == 0 && ((*(&((char *)&v4->field_48)[1]) & 64) == 0 || v2->field_8->field_18 == 0) && (v2->field_8->field_18 == 0 || v7 == 0))
                {
                    return stack_base + 0;
                }
                else if (...)
                {
                    tmp_13 = v7;
                    return tmp_13;
                }
                else if ((v2->field_10 == 0 || v7->field_58 != 0) && (v2->field_10 == 0 || v7->field_74 != 4) && (v2->field_8->field_18 != 0 || v2->field_10 != 0) && (v7 != 0 || v2->field_10 != 0))
                {
                    tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
                    *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
                    memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
                    v49 = v7->field_70;
                }
                else if (v7->field_58 == 0 && v8 == 0 && v2->field_10 != 0)
                {
                    v4->field_0 = v7;
                }
                else if (!(...))
                {
                    if (v2->field_10 == 0 && v7->field_58 != -1 && ((*(&((char *)&v4->field_48)[1]) & 64) == 0 || v2->field_8->field_18 == 0) && (v2->field_8->field_18 == 0 || v7 == 0))
                    {
                        abort(); /* do not return */
                    }
                }
            }
        }
        else
        {
            v2->field_70 = sub_406cf0();
        }
    }
    if ((v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000) && v2->field_78 == v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000) && ((char)v1->field_48 & 64) == 0) && v1->field_8 != 0)
    {
        if (!(((char)(v1->field_48 >> 8) & 32) == 0))
        {
            v1->field_48 = v1->field_48;
            sub_407030();
            v1->field_8 = 0;
        }
        else if (sub_407440() != 0)
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
    if (v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000) && v2->field_78 != v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0->field_74 != 2 && v1->field_0 != 0 && v1->field_0->field_74 == 4)
    {
        if ((v2->field_72 & 2) != 0)
        {
            close(v2->field_44);
        }
        if (v1->field_8 != 0)
        {
            sub_407030();
            v1->field_8 = 0;
        }
        v2->field_70 = 6;
        sub_4076c0();
    }
    if (...)
    {
        v7 = (unsigned int)sub_407760();
        v1->field_8 = v7;
        if (v7 == 0 && ((unsigned short)v1->field_48 & 0x4000) == 0)
        {
            if (v2->field_40 != 0 && v2->field_70 != 4)
            {
                v2->field_70 = 7;
            }
            sub_4076c0();
        }
    }
    if (...)
    {
        v1->field_8 = 0;
    }
    if (...)
    {
        tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
        *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
        memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
        v49 = v7->field_70;
    }
    if (...)
    {
        v4->field_0 = v7;
    }
    if (...)
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
                v46 = sub_4071e0();
                if (v46 == 2)
                {
                    v49 = v7->field_70;
                }
            }
        }
    }
    if (...)
    {
        abort(); /* do not return */
    }
    if (...)
    {
        v49 = sub_406cf0();
        tmp_10 = v7->field_90;
        *((unsigned long long *)&v7->field_70) = v49;
        if (((unsigned short)tmp_10 & 0xf000) == 0x4000 && v7->field_58 != 0 && v45[13] - 1 <= -3)
        {
            v45[13] = v45[13] - 1;
        }
    }
    if (...)
    {
        v4->field_18 = v7->field_78;
    }
    if (...)
    {
        *(__errno_location()) = 12;
    }
    if (...)
    {
        tmp_13 = v7;
        return tmp_13;
    }
    if (...)
    {
        return stack_base + 0;
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

int sub_40b990()
{
    struct_0 *v1;  // rdi
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rax

    v1->field_8 = 0;
    v2 = (unsigned int)sub_409fb0();
    v1->field_0 = v2;
    if ((unsigned int)v2 >= 0)
    {
        return 0;
    }
    v3 = sub_40bfc0();
    v1->field_8 = v3;
    return 0 - (unsigned int)(char)(v3 == 0);
}

extern char g_612398;

int sub_403bb0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_612398 = v1;
    return v2;
}

int sub_40aa80()
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

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_409f30()
{
    void tmp_9;  // tmp #9
    unsigned long v0;  // [bp-0x8]
    struct_0 *v2;  // rdi
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
            if (*(v5) != v2->field_8 || v2->field_0 != v5[1])
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
        if (v2->field_10 == 0 || (v3 + 1 & v3) == 0 && *(v5) != v2->field_8 && v2->field_10 + 1 != 0 || (v3 + 1 & v3) == 0 && v2->field_0 != v5[1] && v2->field_10 + 1 != 0)
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
    unsigned int field_0;
    char padding_4[12];
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_40b320()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rdx
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

int sub_405690()
{
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

int sub_40ae10()
{
    void tmp_10;  // tmp #10
    void tmp_19;  // tmp #19
    unsigned long long v0[2];  // [bp-0x20]
    unsigned long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long *v4;  // r12
    struct_0 *v5;  // rdi
    struct_2 *v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rax
    uint128_t v10;  // xmm1
    unsigned int v11;  // ymm1
    struct_3 *v12;  // rdx
    unsigned int|unsigned long|uint128_t v13;  // xmm1lq
    uint128_t v14;  // xmm0
    unsigned int v15;  // ymm0
    unsigned long long v16;  // xmm0lq
    unsigned long long v17;  // rax
    uint128_t v18;  // xmm0
    unsigned int v19;  // ymm0
    unsigned long long v20;  // xmm0lq
    struct_3 *v22;  // rdx
    uint128_t v23;  // xmm2
    unsigned int v24;  // ymm2
    uint128_t v25;  // xmm0
    uint128_t v26;  // xmm0
    unsigned int v27;  // ymm0
    unsigned int|unsigned long|uint128_t v28;  // xmm1
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
        v7 = sub_40a150();
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
            sub_40a270();
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
                    v32 = sub_40ac10();
                    if (v32 != 0)
                    {
                        v33 = sub_40a150();
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
    if (v2 == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && v7 == 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v33 != 0 && ((char)(BinaryOp CmpF & 69) & 1) != 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v32 != 0)
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

typedef struct struct_0 {
    unsigned int field_0;
    char field_4;
    char padding_5[3];
    unsigned long long field_8;
    unsigned short field_10;
    char padding_12[6];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_0;

int sub_402c50()
{
    struct_0 *v1;  // rdi

    v1->field_0 = 2;
    v1->field_4 = 0;
    v1->field_8 = 0;
    v1->field_10 = 1;
    v1->field_18 = 0;
    v1->field_20 = 0;
    return 1;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_40a2f0()
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
                        v8 = sub_40a120();
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
                    v13 = (unsigned long long)(unsigned int)sub_40a120();
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

extern int512_t g_6124c0;

int sub_405310()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6124c0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_403e50();
}

int sub_405550()
{
}

int sub_406c70()
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
    return rax<8>;
}

int sub_409ec0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40bd60();
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40ee50;
extern unsigned int g_40ee70;
extern unsigned int g_40eea0;
extern unsigned int g_40eec0;
extern unsigned int g_40eef0;
extern unsigned long long stderr;

int sub_409020()
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
                                dcgettext(0x0, 0x40ee50, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40ee70, 0x5);
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
                                dcgettext(0x0, 0x40eef0, 0x5);
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
                            dcgettext(0x0, 0x40eec0, 0x5);
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
            dcgettext(0x0, 0x40eea0, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40a470()
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

int sub_405530()
{
}

extern int512_t g_6124c0;

int sub_405260()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6124c0 : v1));
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40a530()
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

extern unsigned int g_40e6f3;
extern unsigned int g_40e6f7;
extern unsigned int g_40e707;
extern unsigned int g_40e71e;
extern unsigned int g_40e780;
extern unsigned int g_40e850;
extern unsigned int g_40e870;
extern unsigned int g_40e898;
extern unsigned int g_40e8c0;
extern unsigned int g_40e8f0;

int sub_405d20()
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
    dcgettext(0x0, 0x40e6f3, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e780, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40e6f7, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40e707, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40e71e, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40e850, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40e870, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40e898, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40e8c0, 0x5);
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
        dcgettext(0x0, 0x40e8f0, 0x5);
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

int sub_406320()
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
            sub_406510(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned long long g_611e30;

int sub_40c638()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_611e30;
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

int sub_405740()
{
}

int sub_402bd0()
{
    char *v1;  // rdi
    unsigned long v2;  // rsi
    char *v3;  // rsi
    unsigned long long v4;  // r12
    char *v6;  // rax
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax

    if (v1 != 0)
    {
        if (v3 != 0)
        {
            v4 = strlen(v1);
            strlen(v3);
            v8 = (unsigned int)sub_4062c0();
            v6 = stpcpy(v8, v1);
            *(v6) = 58;
            strcpy(&v6[1], v3);
        }
    }
    else
    {
        if (v2 == 0)
        {
            v8 = 0;
        }
    }
    if (v2 == 0 && v1 == 0 || v3 != 0 && v1 != 0)
    {
        v9 = v8;
        return v9;
    }
}

int sub_406490()
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
        sub_406510(); /* do not return */
    }
}

extern unsigned int g_40d90d;
extern unsigned int g_6122d8;
extern char g_612398;
extern unsigned long long g_6123a0;

int sub_403bc0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_409ec0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_612398 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40d90d, 0x5);
            if (g_6123a0 != 0)
            {
                sub_405720();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_612398 != 0)
    {
        v3 = sub_409ec0();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_612398 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6122d8);
        error(0x0, *(v2), "%s");
    }
}

extern unsigned long long *g_612318;
extern unsigned long long g_612320;
extern unsigned long long g_612328;
extern unsigned int g_612330;
extern unsigned long long g_6123c0;

int sub_405490()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_612330;
    if (g_612330 > 1)
    {
        v2 = &g_612318[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_612318[2 * (unsigned long long)(g_612330 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_612318[1] != 6366144)
    {
        v1 = free(g_612318[1]);
        g_612320 = 0x100;
        g_612328 = &g_6123c0;
    }
    if (g_612318 != 6365984)
    {
        v1 = free(g_612318);
        g_612318 = &g_612320;
    }
    g_612330 = 1;
    return v1;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_40a100;
extern int512_t g_40a110;
extern int512_t g_40f070;

int sub_40a8f0()
{
    unsigned long long v1;  // rbx
    struct_0 *v2;  // rsi
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
            v4 = sub_40a270();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_40f070;
            v3 = sub_40a270();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2 == 0 || v2->field_10 == 0) && (v2 == 0 || v4 != 0) && (v3 != 0 || v2 != 0))
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
            v12 = v6 / v8;
        }
        if ((((char)(BinaryOp CmpF & 69) & 1) == 0 || v2 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2->field_10 != 0) && (v2 == 0 || v4 != 0) && (v3 != 0 || v2 != 0) && (v2 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0) && (((char)(BinaryOp CmpF & 69) & 1) != 0 || v2->field_10 != 0))
        {
            v13 = (unsigned int)sub_40a060();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_40a100 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_40a110 : v17);
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

extern char g_6124c0;

int sub_4052e0()
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
    v3 = (v2 == 0? &g_6124c0 : v2);
    *((int *)(tmp_11? &g_6124c0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6124c0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6124c0;
        abort(); /* do not return */
    }
}

int sub_409cd0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409c10();
}

int sub_40b936()
{
    abort(); /* do not return */
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

extern unsigned int g_40ef18;
extern unsigned int g_40ef5c;

int sub_409640()
{
    struct_0 *|struct_1 * v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned int|char v5;  // [bp-0x4c]
    char v6[2];  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    struct_0 *v8;  // [bp+0x8]
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
    char [2]|char *|unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned int|unsigned long long v24;  // r9
    unsigned long v26;  // rax
    unsigned int|unsigned long v27;  // rdx
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
    char v58[2];  // rax
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
                        v5 = v24;
                        sub_408f40();
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
                            sub_408f40();
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
        v45 = (unsigned int)sub_409020();
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
                        dcgettext(0x0, 0x40ef18, 0x5);
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
            dcgettext(0x0, 0x40ef5c, 0x5);
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
                    dcgettext(0x0, 0x40ef18, 0x5);
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
        v45 = (unsigned int)sub_409020();
    }
    v63 = v45;
    return v63;
}

extern int512_t g_6122c8;

int sub_40c620()
{
}

int sub_40c490()
{
    unsigned long long v1;  // rdx
    void *v2;  // dil
    char|unsigned long v3;  // rsi
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
                v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
            }
            else if ((v2 & 7) != 0)
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

int sub_406470()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4062c0();
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
} struct_0;

int sub_4065a0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

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

int sub_40c5a0()
{
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_403c60()
{
    struct_0 *v1;  // rsi
    char *v2;  // rcx
    unsigned long long v5;  // rdi

    v2 = &v1->field_14;
    v1->field_14 = 0;
    while (true)
    {
        v2 = &v2[-1];
        *(v2) = (unsigned int)(rdi<8> - ((unsigned long long)(rdi<8> * 14757395258967641293 >> 64) >> 3) * 10) + 48;
        if (rdi<8> <= 9)
        {
            break;
        }
        v5 = (unsigned long long)(rdi<8> * 14757395258967641293 >> 64) >> 3;
    }
    return v2;
}

int sub_405382()
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

int sub_40a100()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int sub_407250()
{
    struct_0 *v1;  // rdi
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
            v5 = sub_40b2e0();
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

int sub_4072c0()
{
    unsigned int v1[19];  // rdi
    char v4;  // bpl

    if (((char)v1[9] & 4) == 0)
    {
        if (((char)(v1[9] >> 8) & 2) != 0)
        {
            sub_407250();
        }
        else
        {
            v4 = fchdir(v1[5]) != 0;
        }
    }
    sub_407080();
    return stack_base + 0;
}

typedef struct struct_0 {
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
} struct_0;

typedef struct struct_2 {
    char padding_0[136];
    unsigned long long field_88;
} struct_2;

typedef struct struct_1 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_1;

int sub_406cf0()
{
    struct_0 *v1;  // rsi
    struct_2 *v2;  // rbp
    struct_0 *v3;  // rbx
    unsigned long long v4;  // cc_dep1
    struct_1 *v6;  // rdi
    char v7;  // dl
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned int v10;  // eax
    unsigned int *v11;  // r12
    unsigned int|unsigned long v12;  // rax
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
    if (v7 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v4 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0)
    {
        v8 = __xstat(0x1);
    }
    if (v8 != 0 && (v4 == 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0) && (v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0 || ((char)*((int *)&v6->field_48) & 2) != 0))
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
    if (v8 == 0 && v7 != 0 || v8 == 0 && ((char)*((int *)&v6->field_48) & 2) != 0 || v4 == 0 && v8 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0 || v9 == 0 && v7 == 0 && ((char)*((int *)&v6->field_48) & 1) == 0 && ((char)*((int *)&v6->field_48) & 2) == 0 || v9 == 0 && v7 == 0 && ((char)*((int *)&v6->field_48) & 2) == 0 && v4 != 0)
    {
        v10 = v3->field_90 & 0xf000;
        if (!(((unsigned short)v3->field_90 & 0xf000) != 0x4000))
        {
            v13 = v3->field_88;
            if (v3->field_88 > 1 && v3->field_58 > 0)
            {
                v15 = ((v6->field_48 & 32) == 0? v13 - 2 : v13);
            }
            if (v3->field_88 <= 1 || v3->field_58 <= 0)
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
    if ((v7 == 0 || v8 != 0) && (((char)*((int *)&v6->field_48) & 2) == 0 || v8 != 0) && (v7 == 0 || (unsigned int)v12 != 2 || v12 != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v4 != 0 || v8 != 0) && (((char)*((int *)&v6->field_48) & 2) == 0 || (unsigned int)v12 != 2 || v12 != 0) && (v4 == 0 || v9 != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v4 != 0 || (unsigned int)v12 != 2 || v12 != 0) && (v9 != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0 || ((char)*((int *)&v6->field_48) & 2) != 0))
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

int sub_407390()
{
    unsigned int v1;  // edi
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdi
    unsigned long long *v5;  // rsi

    if (((unsigned short)v1 & 258) != 0)
    {
        v2 = sub_40a8f0();
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
            sub_409f20();
            return 1;
        }
    }
    if (v4 == 0 || ((unsigned short)v1 & 258) != 0)
    {
        return v2;
    }
}

int sub_40bab0()
{
    unsigned long long v2;  // rax
    unsigned int v3;  // ebp
    unsigned int *v5;  // rdi

    if (rbp<4> >= 0)
    {
        rbp<4> = openat();
        sub_40ba70();
        *(v5) = v3;
        v2 = 0;
    }
    else
    {
        v2 = -18446744069414584321;
    }
    return v2;
}

typedef struct struct_4 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
} struct_4;

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

typedef struct struct_3 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[32];
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
} struct_3;

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

typedef struct struct_6 {
    unsigned long long field_0;
    char padding_8[10];
    char field_12;
    char field_13;
    char field_14;
} struct_6;

typedef struct struct_10 {
    char padding_0[4255264];
    unsigned int field_40ee20;
} struct_10;

typedef struct struct_7 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[56];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
} struct_7;

extern int512_t g_406cc0;
extern char g_40ee20;

int sub_407760()
{
    unsigned long|unsigned long long v0;  // [bp-0x90]
    void tmp_20;  // tmp #20
    unsigned long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    struct_3 *|struct_2 * v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long|unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    char v11;  // [bp-0x3a]
    char v12;  // [bp-0x39]
    unsigned int v14;  // [bp+0x100008]
    struct_4 *v15;  // rdi
    struct_3 *v17;  // r13
    unsigned int v18;  // esi
    unsigned long long v20;  // rax
    unsigned long long v22;  // rax
    struct_9 *|struct_8 * v23;  // ebx
    unsigned long long v24;  // rax
    unsigned short v25;  // cc_dep1
    unsigned long long v29;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // r14
    unsigned int|unsigned long long v33;  // rdi
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdi
    unsigned long long v36;  // rbp
    void *v41;  // rcx
    struct_5 *v42;  // rbx
    struct_6 *v43;  // r14
    unsigned long long v44;  // r13
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // r8
    void *v48;  // rsi
    unsigned long long v49;  // rax
    unsigned int v51;  // eax
    unsigned int v52;  // esi
    struct_10 *v53;  // rdx
    unsigned long long v54;  // rax
    unsigned long long v55;  // rbp
    unsigned long long v56;  // r15
    unsigned long long v57;  // r12
    struct_3 *|struct_7 * v58;  // r13
    struct_7 *v59;  // r13
    struct_3 *v60;  // r13
    unsigned int v61;  // ebx
    struct_5 *v62;  // r15
    unsigned int v63;  // eax
    unsigned long long v69[8];  // rax
    unsigned long long v70;  // rcx
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rdx
    unsigned long long v73[12];  // rax
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rdx
    char v77;  // al
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // rax

    v17 = v15->field_0;
    v10 = v18;
    v9 = v15->field_0->field_18;
    if (v9 != 0)
    {
        v20 = dirfd();
        if (v20 >= 0)
        {
            if (v23->field_40 != 0)
            {
                v6 = -1;
            }
            else
            {
                v6 = 100000;
                v33 = v23->field_48;
                v12 = 1;
            }
        }
        else
        {
            closedir();
            v4->field_18 = 0;
        }
    }
    else if (((unsigned short)v23->field_48 & 516) != 0x200)
    {
        v22 = sub_40b940();
        v23 = (unsigned int)v22;
        if ((unsigned int)v22 >= 0)
        {
            v24 = fdopendir(v22);
            if (v24 != 0)
            {
                v25 = *((short *)&v4[3].padding_0[16]);
                v4->field_18 = v24;
                if (!(v25 != 11))
                {
                    *((unsigned short *)&v4[3].padding_0[16]) = sub_406cf0();
                }
                else if (((unsigned short)v23->field_48 & 0x100) != 0)
                {
                    sub_4076c0();
                    sub_406cf0();
                    v29 = sub_407610();
                    if (v29 == 0)
                    {
                        v2 = 0;
                        *(__errno_location()) = 12;
                    }
                }
                if (v25 == 11 || ((unsigned short)v23->field_48 & 0x100) == 0 || v29 != 0)
                {
                    v6 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(v23->field_40 < 1)) & 100001) - 1;
                    if (v10 != 2 && ((char)v23->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2)
                    {
                        v31 = sub_4071e0();
                        if (v31 != 0 && v10 == 3)
                        {
                            v32 = 0;
                            v57 = 1;
                        }
                    }
                }
            }
            else
            {
                close(v23);
                *(__errno_location()) = v14;
            }
        }
        if ((unsigned int)v22 < 0 || v24 == 0)
        {
            v4->field_18 = 0;
        }
    }
    if ((v9 == 0 || v20 < 0) && (v9 != 0 || ((unsigned short)v23->field_48 & 516) != 0x200) && ((unsigned int)v22 < 0 || v24 == 0 || v9 != 0))
    {
        if (v10 == 3)
        {
            *((short *)&v4[3].padding_0[16]) = 4;
            *((int *)&v4[2].padding_0[0]) = *(__errno_location());
        }
        v2 = 0;
    }
    if (v9 == 0 && v10 != 2 && ((unsigned short)v23->field_48 & 516) != 0x200 && (unsigned int)v22 >= 0 && v24 != 0 && (v25 == 11 || ((unsigned short)v23->field_48 & 0x100) == 0 || v29 != 0) && ((char)v23->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2 && v31 == 0 || v9 == 0 && v10 != 2 && ((unsigned short)v23->field_48 & 516) != 0x200 && (unsigned int)v22 >= 0 && v24 != 0 && (v25 == 11 || ((unsigned short)v23->field_48 & 0x100) == 0 || v29 != 0) && ((char)v23->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) != 2 || v9 == 0 && v10 != 2 && ((unsigned short)v23->field_48 & 516) != 0x200 && (unsigned int)v22 >= 0 && v24 != 0 && (v25 == 11 || ((unsigned short)v23->field_48 & 0x100) == 0 || v29 != 0) && ((char)v23->field_48 & 56) != 24)
    {
        v32 = 1;
        v57 = (char)(v10 == 3);
    }
    if (v9 == 0 && v10 != 2 && ((unsigned short)v23->field_48 & 516) != 0x200 && (unsigned int)v22 >= 0 && v24 != 0 && (v25 == 11 || ((unsigned short)v23->field_48 & 0x100) == 0 || v29 != 0) && ((char)v23->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2 && v31 != 0 && v10 != 3 || v9 == 0 && ((unsigned short)v23->field_48 & 516) != 0x200 && (unsigned int)v22 >= 0 && v24 != 0 && (v25 == 11 || ((unsigned short)v23->field_48 & 0x100) == 0 || v29 != 0) && v10 == 2)
    {
        v12 = 0;
        v33 = v23->field_48;
    }
    if (...)
    {
        v23 = (unsigned long long)(unsigned int)sub_40bde0();
        if ((unsigned int)v23 < 0)
        {
            v35 = v4->field_18;
            v36 = (unsigned int)(unsigned short)*((short *)&v4[3].padding_0[18]) | 1;
        }
    }
    if (...)
    {
        v34 = sub_407440();
        if (v34 != 0)
        {
            v35 = v4->field_18;
            v36 = (unsigned int)(unsigned short)*((short *)&v4[3].padding_0[18]) | 1;
        }
    }
    if (...)
    {
        v12 = 1;
        v33 = v23->field_48;
    }
    if (...)
    {
        *((unsigned short *)&v4[3].padding_0[18]) = (unsigned int)(unsigned short)*((short *)&v4[3].padding_0[18]) | 1;
        closedir();
        v33 = v23->field_48;
    }
    if (...)
    {
        v0 = v35;
        *((int *)&v4[2].padding_0[0]) = *(__errno_location());
    }
    if (...)
    {
        *((unsigned long long *)&v4[3].padding_0[18]) = v36;
        closedir();
        v33 = v23->field_48;
        v4->field_18 = 0;
        if (((unsigned short)v33 & 0x200) != 0 && v23 >= 0)
        {
            close(v23);
            v33 = v23->field_48;
        }
    }
    if (...)
    {
        v4->field_18 = 0;
        v12 = 0;
    }
    if (...)
    {
        v1 = *((long long *)&v4[2].padding_0[8]);
        v8 = *((long long *)&v4[2].padding_0[8]) - 1;
        if (*((char *)(v4[1].field_18 + *((long long *)&v4[2].padding_0[8]) - 1)) != 47)
        {
            v8 = *((long long *)&v4[2].padding_0[8]);
            v1 = &v8[1];
        }
        v7 = 0;
        if (((char)v33 & 4) != 0)
        {
            v41 = &v8[v23->field_20 + 1];
            v8[v23->field_20] = 47;
            v7 = v41;
        }
        v11 = 0;
        v55 = 0;
        v3 = v23->field_30 - v1;
        v23 = v15;
        v0 = 0;
        v4 = v17;
        v5 = v4[2].field_18 + 1;
        v2 = 0;
        while (true)
        {
            v62 = v4->field_18;
            if (v4->field_18 != 0)
            {
                *((int *)v57) = 0;
                v57 = __errno_location();
                v43 = (unsigned long long)readdir();
                if (v43 != 0)
                {
                    if (v43->field_13 == 46 && (v62->field_48 & 32) == 0 && (*((short *)&v43->field_14) == 46 || v43->field_14 == 0))
                    {
                        v56 = v0;
                    }
                    if (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || *((short *)&v43->field_14) != 46 && v43->field_14 != 0)
                    {
                        v44 = strlen(&v43->field_13);
                        v56 = (unsigned int)sub_406fa0();
                        if (v3 <= v44 && v56 != 0)
                        {
                            v3 = v62->field_20;
                            v45 = sub_407320();
                            if (v45 != 0)
                            {
                                v46 = v62->field_20;
                                if (v62->field_20 != v3)
                                {
                                    *((int *)&v7) = ((v62->field_48 & 4) == 0? v7 : rdx<8> + (long long)(stack_base)[-136]);
                                }
                                else
                                {
                                    v45 = v11;
                                }
                                *((unsigned long long *)&v11) = v45;
                                v3 = v62->field_30 - v1;
                            }
                        }
                    }
                }
                else
                {
                    v63 = *((int *)v57);
                    v58 = v4;
                    if (*((int *)v57) != 0)
                    {
                        v58->field_40 = v63;
                        v58->field_70 = (0 - (unsigned int)(char)((v9 | v55) < 1) & -3) + 7;
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
                v58 = v4;
            }
            if (v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 <= v44 && v45 == 0 || v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v56 == 0)
            {
                v60 = v4;
                v61 = *((int *)v57);
                free(v56);
                sub_407030();
                closedir();
                v60->field_18 = 0;
                v60->field_70 = 7;
                v2 = 0;
                *((int *)(v56 + 72)) = *((int *)(v56 + 72)) | 0x4000;
                *((unsigned int *)v57) = v61;
            }
            if (v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 <= v44 && v45 != 0 || v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 > v44)
            {
                v47 = v44 + v1;
                if (!((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)))
                {
                    v48 = v56 + 264;
                    *((unsigned long *)(v56 + 88)) = v5;
                    tmp_20 = v62->field_0;
                    *((unsigned long long *)(v56 + 72)) = v47;
                    *((long long *)(v56 + 8)) = tmp_20;
                    *((unsigned long long *)(v56 + 128)) = v43->field_0;
                    v49 = (unsigned int)*((int *)&v62->field_48);
                    if (((char)*((int *)&v62->field_48) & 4) == 0)
                    {
                        *((void **)(v56 + 48)) = v48;
                    }
                    else
                    {
                        *((long long *)(v56 + 48)) = *((long long *)(v56 + 56));
                        memmove(v7, v48, *((long long *)(v56 + 96)) + 1);
                        v49 = (unsigned int)*((int *)&v62->field_48);
                    }
                    if ((v49 & 4) == 0 && v62->field_40 != 0)
                    {
                        *((unsigned short *)(v56 + 112)) = sub_406cf0();
                    }
                    if (v62->field_40 == 0 || (v49 & 4) != 0)
                    {
                        v51 = (unsigned int)v49 & 24;
                        v52 = v43->field_12;
                        v53 = (unsigned long long)((unsigned int)v43->field_12 - 1);
                        if (v51 == 24 && ((char)v52 & 251) != 0)
                        {
                            *((short *)(v56 + 112)) = 11;
                            if ((unsigned int)v53 > 11)
                            {
                                *((int *)(v56 + 144)) = 0;
                                v54 = 1;
                            }
                            else
                            {
                                *((int *)(v56 + 144)) = *((int *)(0x4 * v53 + &g_40ee20));
                                v54 = 1;
                            }
                        }
                        if (((char)v52 & 251) == 0 || v51 != 24)
                        {
                            *((short *)(v56 + 112)) = 11;
                            if ((unsigned int)v53 > 11)
                            {
                                *((int *)(v56 + 144)) = 0;
                                v54 = 2;
                            }
                            else
                            {
                                *((int *)(v56 + 144)) = *((int *)(0x4 * v53 + &g_40ee20));
                                v54 = 2;
                            }
                        }
                        *((unsigned long long *)(v56 + 168)) = v54;
                    }
                    *((long long *)(v56 + 16)) = 0;
                    if (v2 != 0)
                    {
                        v55 += 1;
                        *((unsigned long long *)(v0 + 16)) = v56;
                    }
                    else
                    {
                        v2 = v56;
                        v55 += 1;
                    }
                }
                else
                {
                    v59 = v4;
                    free(v56);
                    sub_407030();
                    closedir();
                    v59->field_18 = 0;
                    v59->field_70 = 7;
                    v2 = 0;
                    *((int *)&v62->field_48) = *((int *)&v62->field_48) | 0x4000;
                    *((int *)v57) = 36;
                }
            }
            if (...)
            {
                v0 = v56;
            }
            if ((v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 <= v44 && v45 != 0 || v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 > v44) && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)) && v2 != 0 && v55 >= v6 || (v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 <= v44 && v45 != 0 || v56 != 0 && v4->field_18 != 0 && v43 != 0 && (*((short *)&v43->field_14) != 46 || v43->field_13 != 46 || (v62->field_48 & 32) != 0) && (v43->field_13 != 46 || (v62->field_48 & 32) != 0 || v43->field_14 != 0) && v3 > v44) && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)) && v2 == 0 && v55 >= v6)
            {
                v58 = v4;
                v62 = v42;
            }
            if (...)
            {
                v69 = v62->field_8;
                v70 = v62->field_20;
                if (v62->field_8 != 0)
                {
                    do
                    {
                        v71 = v69[6];
                        if (v69[6] != &v69[33])
                        {
                            v72 = v71 - v69[7] + v70;
                            v69[6] = v72;
                        }
                        v69[7] = v70;
                        v69 = v69[2];
                    }
                    while (v69 != 0);
                }
                for (v73 = v2; !((char)(v73[11] - 0 >> 63)); v73 = v76)
                {
                    v74 = v73[6];
                    if (v73[6] != &v73[33])
                    {
                        v75 = v74 - v73[7] + v70;
                        v73[6] = v75;
                    }
                    v76 = v73[2];
                    v73[7] = v70;
                    if (v76 == 0)
                    {
                        v76 = v73[1];
                    }
                }
            }
            if (...)
            {
                if ((v62->field_48 & 4) != 0)
                {
                    if (v55 == 0 || v62->field_30 == v1)
                    {
                        v7 -= 1;
                    }
                    *((char *)v7) = 0;
                }
                if (v9 == 0 && v12 != 0 && (v10 == 1 || v55 == 0))
                {
                    if (v58->field_58 == 0)
                    {
                        v77 = sub_4072c0() != 0;
                    }
                    else
                    {
                        v77 = sub_407440() != 0;
                    }
                    if (v77 != 0)
                    {
                        v58->field_70 = 7;
                        *((int *)&v62->field_48) = *((int *)&v62->field_48) | 0x4000;
                        sub_407030();
                        v2 = 0;
                    }
                }
                if (v55 == 0 && (v77 == 0 || v12 == 0 || v9 != 0))
                {
                    if (v10 == 3)
                    {
                        v80 = v58->field_70;
                        if (v58->field_70 != 4 && v80 != 7)
                        {
                            v58->field_70 = 6;
                        }
                    }
                    sub_407030();
                    v2 = 0;
                }
                if (v55 != 0 && (v77 == 0 || v12 == 0 || v9 != 0 || v10 != 1))
                {
                    v79 = v62->field_40;
                    if (v79 == 0 && v55 > 10000)
                    {
                        v81 = sub_4070c0();
                        if (v81 != 16914836 && v81 != 26985)
                        {
                            v62->field_40 = &g_406cc0;
                            v62->field_40 = 0;
                            v2 = (unsigned int)sub_406ea0();
                        }
                        if (v81 == 16914836 || v81 == 26985)
                        {
                            v79 = v62->field_40;
                        }
                    }
                    if (v55 <= 10000 && v79 == 0 || v55 <= 10000 && v55 == 1 || v81 == 16914836 && v79 == 0 && v79 == 0 || v81 == 16914836 && v55 == 1 && v79 == 0 || v81 == 26985 && v79 == 0 && v79 == 0 || v81 == 26985 && v55 == 1 && v79 == 0)
                    {
                        break;
                    }
                }
            }
        }
    }
    return v2;
}

int sub_409cb0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409640();
}

extern unsigned int g_40ea6f;
extern unsigned int g_6122d8;

int sub_406510()
{
    dcgettext(0x0, 0x40ea6f, 0x5);
    error(g_6122d8, 0x0, "%s");
}

int sub_406cb0()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax<8>;
}

int sub_4053ab()
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
    v7 = (unsigned int)sub_403e50();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4062c0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_403e50();
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

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40a440()
{
    struct_0 *v1;  // rdi

    return v1->field_10;
}

extern unsigned long long __progname_full;
extern unsigned long long g_6123a8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403cb0()
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
        g_6123a8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_40a7a0()
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

typedef struct struct_0 {
    char padding_0[28];
    char field_1c;
} struct_0;

int sub_40b2d0()
{
    struct_0 *v1;  // rdi

    return (unsigned long long)v1->field_1c;
}

int sub_405680()
{
}

extern unsigned int g_40ef8a;
extern unsigned int g_40efa1;
extern unsigned int g_612538;

int sub_409d90()
{
    char v0;  // [bp-0x48]
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rbx
    char *v4;  // rdx
    unsigned int|unsigned long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long long v10;  // rax
    unsigned int v11;  // esi

    v3 = v2;
    if (*(v4) != 0)
    {
        v5 = g_612538;
        if (g_612538 == 0)
        {
            v6 = open("/proc/self/fd", 0x10900, v4);
            if ((unsigned int)v6 < 0)
            {
                g_612538 = -1;
                return 0;
            }
            __sprintf_chk((unsigned int)&v0, 0x1, 0x20, 0x40ef8a, v6);
            g_612538 = (0 - (unsigned int)(char)(access(&v0, 0x0) < 1) & 2) - 1;
            close(v6);
            v5 = g_612538;
        }
        if ((unsigned int)v6 >= 0 || g_612538 != 0)
        {
            if (v5 >= 0)
            {
                v8 = strlen(v4);
                if (v8 + 27 > 4032)
                {
                    v3 = malloc(v8 + 27);
                }
                if (v8 + 27 <= 4032 || v3 != 0)
                {
                    strcpy(__sprintf_chk(v3, 0x1, 0xffffffff, 0x40efa1, v11) + v3, v4);
                    v10 = v3;
                }
            }
            if (v5 < 0 || v3 == 0 && v8 + 27 > 4032)
            {
                v10 = 0;
            }
            return v10;
        }
    }
    else
    {
        *((char *)v2) = 0;
        return v2;
    }
}

extern char g_612368;
extern unsigned long long g_612370;

int sub_402711()
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

    if (g_612368 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_612370 >= 0)
            {
                break;
            }
            g_612370 = g_612370 + 1;
            *((long long *)(6364736 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_612368 = 1;
        return sub_4026bb();
    }
    return v4;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_406120()
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
    return sub_405d20();
}

int sub_406ca0()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

extern unsigned int g_40efb1;

int sub_4058f0()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v3[2];  // rax
    unsigned long v4;  // rdi

    v3 = __lxstat(0x1, 0x40efb1, (unsigned int)&v0);
    if (v3 == 0)
    {
        v3[0] = v1;
        v3[1] = *((long long *)&v0);
        return v4;
    }
    return 0;
}

int sub_40653c()
{
    abort(); /* do not return */
}

int sub_40ba00()
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

int sub_405860()
{
}

int sub_40a000()
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

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_40a150()
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
        v7 = sub_40a120();
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

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_40a460()
{
    struct_0 *v1;  // rdi

    return v1->field_20;
}

int sub_4064f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_406180()
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
    unsigned long long *|unsigned long long v14;  // r10
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
        return sub_405d20();
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40a730()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_40a120();
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

int sub_402c90()
{
    if ((unsigned long long)getgrgid() != 0)
    {
        return sub_4064f0();
    }
    sub_403c60();
    return sub_4064f0();
}

int sub_4064c0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4062c0();
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
    struct_0 *v1;  // rdi
    struct_2 *v2;  // rbx
    unsigned int *v3;  // r13
    unsigned int v4;  // esi
    unsigned long long v6;  // rax
    unsigned int v7;  // ebp
    unsigned long long v8;  // rax
    unsigned long long v10;  // rax

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
            v8 = 0;
            if (v1->field_0->field_70 == 1)
            {
                if (v1->field_8 != 0)
                {
                    sub_407030();
                }
                if (v4 == 0x2000)
                {
                    v2->field_48 = v2->field_48 | 0x2000;
                }
                if (v1->field_0->field_58 == 0 && *((char *)v1->field_0->field_30) != 47 && ((char)v1->field_48 & 4) == 0)
                {
                    v6 = sub_4073f0();
                    v7 = v6;
                    if ((unsigned int)v6 >= 0)
                    {
                        v2->field_8 = (unsigned int)sub_407760();
                        if ((*(&((char *)&v2->field_48)[1]) & 2) == 0)
                        {
                            v10 = fchdir(v7);
                            if (v10 == 0)
                            {
                                close(v7);
                            }
                            else
                            {
                                close(v7);
                                v8 = 0;
                                *(v3) = *(v3);
                            }
                        }
                        else
                        {
                            sub_407250();
                        }
                        if (v10 == 0 || (*(&((char *)&v2->field_48)[1]) & 2) != 0)
                        {
                            v8 = v2->field_8;
                        }
                    }
                    else
                    {
                        v1->field_8 = 0;
                        v8 = 0;
                    }
                }
                if (*((char *)v1->field_0->field_30) == 47 || ((char)v1->field_48 & 4) != 0 || v1->field_0->field_58 != 0)
                {
                    v8 = sub_407760();
                    v1->field_8 = v8;
                }
            }
            return v8;
        }
        return v1->field_0->field_10;
    }
    *(v3) = 22;
    return 0;
}

int sub_4065d0()
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
        if (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0)
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4254432)); */
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
        if ((*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v1[0] != 0 && v9 != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v5 = 6;
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
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 = -1;
                    break;
                }
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
            case 14:
                v36 = v30;
                v5 = 5;
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
                break;
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
                v37 = v30;
                v5 = 8;
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
            case 24:
                v34 = v30;
                v35 = 7;
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

int sub_40bf60()
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

int sub_406a00()
{
    unsigned long long v0;  // [bp-0x1128]
    unsigned int *|unsigned long|void * v1;  // [bp-0x1008]
    unsigned int v2;  // [bp-0xffc]
    unsigned int v3;  // [bp-0xff8]
    unsigned int v5;  // r8d
    unsigned long v6;  // rdi
    unsigned int v7;  // ebx
    char *v8;  // rsi
    unsigned long long v10;  // r13
    void *v11;  // rcx
    unsigned int *v12;  // rax
    unsigned long long v13;  // rsi
    void *v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v19;  // rax
    unsigned int *v21;  // rbx
    unsigned long long v22;  // rax
    unsigned int *v23;  // rbx
    unsigned int v24;  // ebp
    unsigned long long v25;  // rax
    unsigned long long v30;  // rax

    if ((v5 & -257) == 0)
    {
        v7 = v6;
        if ((unsigned int)v6 != -100 && *(v8) != 47)
        {
            if (v1 != 0)
            {
                *((int *)&v1) = sub_409d90();
                if (v5 != 0x100)
                {
                    v10 = chown();
                }
                else
                {
                    v10 = lchown();
                }
                v1 = v11;
                v12 = __errno_location();
                v13 = *(v12);
                if (v1 != stack_base + -4088)
                {
                    v14 = v1;
                    v2 = v13;
                    v1 = v12;
                    free(v14);
                    v13 = v2;
                    v12 = v1;
                }
                if ((unsigned int)v10 == -1)
                {
                    if ((unsigned int)v13 <= 38)
                    {
                        v0 = 274878963718;
                    }
                    if (((unsigned int)v13 <= 38 || (unsigned int)v13 != 95) && (((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -4392]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) == 0 || (unsigned int)v13 > 38))
                    {
                        *(v12) = v13;
                    }
                }
            }
            if (((unsigned int)v10 == -1 || v1 == 0) && ((unsigned int)v13 <= 38 || v1 == 0 || (unsigned int)v13 == 95) && (v1 == 0 || (unsigned int)v13 > 38 || ((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -4392]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) != 0))
            {
                v15 = sub_40b990();
                if (!(v15 == 0))
                {
                    __errno_location();
                    sub_40b8e0(); /* do not return */
                }
                else if (v7 >= 0)
                {
                    if (v3 == v7)
                    {
                        v10 = -18446744069414584321;
                        sub_40ba00();
                        *(__errno_location()) = 9;
                    }
                }
            }
        }
        if (*(v8) == 47 || (unsigned int)v6 == -100)
        {
            if (v5 != 0x100)
            {
                v10 = chown();
            }
            else
            {
                v10 = lchown();
            }
        }
    }
    else
    {
        v10 = -18446744069414584321;
        *(__errno_location()) = 22;
    }
    if ((v5 & -257) == 0 && *(v8) != 47 && (unsigned int)v6 != -100 && ((unsigned int)v10 == -1 || v1 == 0) && ((unsigned int)v13 <= 38 || v1 == 0 || (unsigned int)v13 == 95) && (v1 == 0 || (unsigned int)v13 > 38 || ((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -4392]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) != 0) && v15 == 0 && v7 >= 0 && v3 != v7 || (v5 & -257) == 0 && *(v8) != 47 && (unsigned int)v6 != -100 && ((unsigned int)v10 == -1 || v1 == 0) && ((unsigned int)v13 <= 38 || v1 == 0 || (unsigned int)v13 == 95) && (v1 == 0 || (unsigned int)v13 > 38 || ((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -4392]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) != 0) && v15 == 0 && v7 < 0)
    {
        v19 = fchdir(v7);
        if (v19 == 0)
        {
            if (v5 != 0x100)
            {
                v10 = chown();
            }
            else
            {
                v10 = lchown();
            }
            if ((unsigned int)v10 != -1)
            {
                v22 = sub_40b9e0();
                if (v22 == 0)
                {
                    sub_40ba00();
                }
            }
            else
            {
                v23 = __errno_location();
                v24 = *(v23);
                v25 = sub_40b9e0();
                if (v25 == 0)
                {
                    sub_40ba00();
                    if (v24 != 0)
                    {
                        *(v23) = v24;
                    }
                }
            }
        }
        else
        {
            v10 = -18446744069414584321;
            sub_40ba00();
            *(__errno_location()) = *(v21);
        }
    }
    if (...)
    {
        __errno_location();
        sub_40b910(); /* do not return */
    }
    if (...)
    {
        v30 = v10;
        return v30;
    }
}

int sub_402c80()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4071e0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    char v4;  // dl
    unsigned int v5;  // edx
    char v6;  // dl

    v1 = sub_4070c0();
    if (v1 != 40864)
    {
        if (!(v1 > 40864))
        {
            v2 = 0;
            if (v1 != 0)
            {
                v3 = 0;
                v4 = v1 != 26985;
                return rdx<8>;
            }
        }
        else if (v1 != 1397113167)
        {
            v2 = 2;
            if (v1 != 1481003842)
            {
                v5 = 0;
                v6 = v1 == 1382369651;
                v2 = (unsigned long long)(unsigned int)rdx<4> + 1;
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
    void *|unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x42]
    char v2;  // [bp-0x41]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rbp
    unsigned long long *v7;  // rdi
    unsigned long long v9;  // rbx
    unsigned long v10;  // rdx
    unsigned int v11;  // eax
    unsigned int v12;  // ah
    char *v14;  // rdi
    unsigned long long *v15;  // r15
    unsigned long long v16;  // r12
    unsigned long long [2]|unsigned long long * v17;  // r15
    void *v18;  // rax
    unsigned long long v19[14];  // rcx
    unsigned long long v20;  // r12
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rax
    struct_0 *v24;  // rax
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
                    *((int *)(v9 + 72)) = rax<4> | 4;
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
                v1 = sub_407320();
                if (v1 != 0)
                {
                    v17 = *(v15);
                    if (*(v15) != 0)
                    {
                        v18 = sub_406fa0();
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
                                if (v20 != 0 && v1 != 0)
                                {
                                    *((long long *)&((char *)&g_a8)[v20]) = 2;
                                    *((unsigned long long **)&((char *)&g_70)[v20]) = &g_8;
                                    if (v10 == 0)
                                    {
                                        *((long long *)&((char *)&g_10)[v20]) = 0;
                                    }
                                }
                                if (v20 == 0 || v1 == 0)
                                {
                                    *((unsigned short *)&((char *)&g_70)[v20]) = sub_406cf0();
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
                                    v20 = (unsigned int)sub_406fa0();
                                }
                                if (v10 == 0 && (v20 != 0 || v20 != 0) && (v20 != 0 || v1 != 0))
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
                                v20 = (unsigned int)sub_406ea0();
                            }
                            if (v15[v21] == 0 && v20 != 0)
                            {
                                v24 = sub_406fa0();
                                *((struct_0 **)v9) = v24;
                            }
                            else
                            {
                                sub_407030();
                                free(v0);
                            }
                        }
                        if ((*(v15) == 0 || v17 == 0) && (v10 == 0 || v17 == 0))
                        {
                            v20 = 0;
                        }
                        if ((*(v15) == 0 || v17 == 0 || v24 != 0) && (v10 == 0 || v17 == 0 || v24 != 0))
                        {
                            v24 = sub_406fa0();
                            *((struct_0 **)v9) = v24;
                        }
                        if (v24 != 0)
                        {
                            *((unsigned long long *)(v24 + &g_10)) = v20;
                            *((unsigned long long **)(v24 + &g_70)) = &g_8;
                            v25 = sub_407390();
                            if (v25 != 0)
                            {
                                if (((unsigned short)*((int *)(v9 + 72)) & 516) == 0)
                                {
                                    v27 = sub_4073f0();
                                    *((unsigned long long *)(v9 + 40)) = v27;
                                    if (v27 < 0)
                                    {
                                        *((int *)(v9 + 72)) = *((int *)(v9 + 72)) | 4;
                                    }
                                }
                                sub_40b2b0();
                            }
                        }
                        if (v25 == 0 || v24 == 0)
                        {
                            sub_407030();
                            free(v0);
                        }
                    }
                    if ((v18 == 0 || v25 == 0 || v24 == 0) && (v25 == 0 || v24 == 0 || *(v15) != 0))
                    {
                        free(*((long long *)(v9 + 32)));
                    }
                }
                if (v25 == 0 || v24 == 0 || v1 == 0 || v18 == 0 && *(v15) != 0)
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

int sub_409c90()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409c10();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406c90()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1->field_8) % v2 >> 64;
}

int sub_40a6e0()
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

typedef struct struct_1 {
    char padding_0[32];
    unsigned long long field_20;
} struct_1;

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

int sub_406fa0()
{
    struct_1 *v1;  // rdi
    struct_1 *v2;  // r12
    unsigned long v3;  // rdx
    unsigned long long v4;  // rbp
    unsigned long v6;  // rax
    void *v7;  // rsi
    struct_2 *v9;  // rax
    unsigned long long v10;  // rax

    v2 = v1;
    v4 = v3;
    if (v6 != 0)
    {
        memcpy(v6 + 264, v7, v3);
        v9 = v2->field_20;
        *((char *)(v1->field_20 + v4 + 264)) = 0;
        *((unsigned long long *)(v6 + 96)) = v4;
        *((struct_1 **)(v6 + 80)) = v2;
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

int sub_405560()
{
}

int sub_40a060()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40a4c0()
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

int sub_40a120()
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

int sub_4073f0()
{
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_612318;
extern uint128_t g_612320;
extern unsigned int g_612330;
extern int512_t g_6123c0;

int sub_405080()
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
    v17 = g_612318;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_612330 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_612318 != 6365984)
            {
                v16 = sub_406320();
                g_612318 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_406320();
                v17 = v15;
                g_612318 = v15;
                *(v15) = g_612320;
            }
            memset(&v17[(long long)(int)g_612330], 0x0, (int)((unsigned int)v13 + 1 - g_612330) * 16);
            g_612330 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_406510(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_612330 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_403e50();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6366144)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4062c0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_403e50();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_402768() { crash_skku;
}
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
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbp
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
        sub_407030();
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
            if (((unsigned int)v12 == 0 || v8 == 0) && (v8 == 0 || v13 != 0) && (v8 != 0 || v10 != 0))
            {
                v12 = *(v11);
            }
        }
    }
    if (v9 == 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || ((char)(v2->field_48 >> 8) & 2) == 0 && (v6 & 4) != 0 || v2->field_2c < 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || ((char)(v2->field_48 >> 8) & 2) == 0 && v8 == 0 && v10 == 0)
    {
        v12 = 0;
    }
    sub_407080();
    if (v2->field_50 != 0)
    {
        sub_40ab30();
    }
    v16 = v2->field_58;
    if (!(((unsigned short)v2->field_48 & 258) != 0))
    {
        free(v16);
    }
    else if (v16 != 0)
    {
        sub_40ab30();
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

extern unsigned int g_612548;

int sub_40bde0()
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
        if (g_612548 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40bde0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_612548 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_612548 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40bde0();
        }
        if ((g_612548 < 0 || (unsigned int)v15 < 0) && (g_612548 < 0 || *(v12) == 22) && (g_612548 == -1 || g_612548 >= 0) && (g_612548 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_612548 >= 0))
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

extern unsigned long long program_invocation_short_name;

int sub_4026bb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_409cf0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409640();
}

int sub_40bd60()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40bf20() != 0)
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
    char padding_0[72];
    unsigned int field_48;
    char field_49;
} struct_0;

int sub_407440()
{
    unsigned long v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    struct_0 *v4;  // rdi
    struct_0 *v5;  // r15
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
    unsigned int|unsigned long v18;  // r12
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
                v21 = (unsigned int)sub_40b2d0();
                if ((char)v21 == 0)
                {
                    v18 = sub_40b320();
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
    else
    {
        if ((unsigned int)v18 < 0 && (v18 < 0 || ((unsigned short)v10 & 0x200) == 0 || v8 == 0 || (char)v17 != 0 || (char)v21 != 0))
        {
            v18 = (unsigned int)sub_4073f0();
            if ((unsigned int)v18 < 0)
            {
                v19 = -18446744069414584321;
            }
        }
        if (((char)v17 == 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((char)v21 == 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || v18 >= 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || ((unsigned short)v10 & 0x200) != 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || (unsigned int)v18 >= 0 || v8 != 0))
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
                        sub_407250();
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
            if (((*(&((char *)&v5->field_48)[1]) & 2) == 0 || v7[15] != *((long long *)&v1) || (unsigned int)v19 != 0 || v7[16] != v2) && v22 < 0)
            {
                v24 = *(v22);
                close(v18);
                *(__errno_location()) = v24;
            }
        }
    }
    v26 = v19;
    return v26;
}

int sub_405c50()
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long v8;  // rdx
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // r13
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbx
    char *v14;  // rdi
    unsigned long long v16;  // rax
    unsigned long long v17;  // r10
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long long v23;  // r15

    if (v8 != 0)
    {
        v6 = v9;
        v5 = v10;
        v4 = v11;
        v3 = v12;
        v2 = stack_base + 0;
        v1 = v13;
        v17 = (unsigned int)sub_405940();
        if (strchr(v14, 0x3a) == 0)
        {
            v0 = v17;
            if (v17 != 0)
            {
                v16 = strchr(v14, 0x2e);
                v17 = v0;
                if (v16 != 0)
                {
                    v17 = v0;
                }
            }
            if (v17 == 0 || sub_405940() == 0 && v16 != 0)
            {
                v17 = 0;
            }
        }
        v19 = v1;
        v20 = v3;
        v21 = v4;
        v22 = v5;
        v23 = v6;
        return v17;
    }
}

int sub_40a890()
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

int sub_405720()
{
}

extern unsigned long long g_40ef77;

int sub_409d10()
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
        v5 = &g_40ef77;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40a000() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern int512_t g_40f070;

int sub_40a270()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4255856)
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
            *(v1) = &g_40f070;
            return 0;
        }
    }
    if (...)
    {
        return 1;
    }
}

extern unsigned long long g_6123a0;

int sub_403ba0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6123a0 = v1;
    return v2;
}

extern int512_t g_6124c0;

int sub_405270()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6124c0 : v1)) = v2;
    return &g_6124c0;
}

int sub_403e50()
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
    unsigned long|unsigned long long v33;  // r10
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
            v26 = (unsigned int)sub_403d50();
            v27 = (unsigned long long)(unsigned int)sub_403d50();
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
                    case 10:
                        v40 = 10;
                        v45 = 110;
                        v77 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                    case 11:
                        v40 = 11;
                        v45 = 118;
                        v77 = (unsigned int)v39 == 2;
                        if (v4 == 0)
                        {
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
                            v78 = 0;
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
                        }
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
                            v76 = (unsigned int)sub_403e50();
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
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_409d10();
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
            if ((v25 == 0 || v76 == 0) && (v25 == 0 || v78 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_403e50();
            }
            if (v25 == 0 && v5 == 0 || v25 == 0 && v17 == 0 && v5 != 0 || (v15 != 1 || v77 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (v25 == 0 || v76 == 0) && (v25 == 0 || v78 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v5 != 0) || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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

extern unsigned int g_40c704;
extern unsigned int g_40c73f;
extern unsigned int g_40c74f;
extern unsigned int g_40d258;
extern unsigned int g_40d2c8;
extern unsigned int g_40d2f8;
extern unsigned int g_40ef77;
extern unsigned int g_61233c;
extern unsigned long long g_612390;
extern unsigned long long g_612550;

int main()
{
    unsigned long|unsigned long long v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    unsigned long v2;  // [bp-0x110]
    unsigned int v3;  // [bp-0x108]
    unsigned int v4;  // [bp-0x104]
    unsigned int v5;  // [bp-0x100]
    unsigned int v6;  // [bp-0xfc]
    unsigned int v7;  // [bp-0xf8]
    char v8;  // [bp-0xf4]
    unsigned long v9;  // [bp-0xf0]
    char v10;  // [bp-0xe8]
    char v11;  // [bp-0xe7]
    unsigned long v12;  // [bp-0xe0]
    unsigned long v13;  // [bp-0xd8]
    unsigned int v14;  // [bp-0xac]
    unsigned int v15;  // [bp-0xa8]
    unsigned long long v17;  // r14
    unsigned int|unsigned long v18;  // r13
    unsigned long long v22;  // rax
    unsigned int|unsigned long v24;  // rbx
    unsigned int v28;  // edi
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rbp
    unsigned long long v35;  // rbp
    unsigned long long v37;  // rax

    v17 = 0;
    v18 = -18446744069414584321;
    v24 = 16;
    v3 = -1;
    v4 = -1;
    v5 = -1;
    v6 = -1;
    sub_403cb0();
    setlocale(0x6, 0x40ef77);
    bindtextdomain(0x40c704, 0x40d258);
    textdomain(0x40c704);
    sub_40c620();
    sub_402c50();
    while (true)
    {
        v22 = sub_409c90();
        if ((unsigned int)v22 == -1)
        {
            if (v24 == 16 && v8 != 0)
            {
                if (v18 != 1)
                {
                    v18 = 0;
                }
                else
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d2c8, 0x5));
                }
            }
            if (v8 == 0 || v18 != 1 || v24 != 16)
            {
                v10 = v18 != 0;
                if (g_612390 != 0)
                {
                    if (v28 - g_61233c > 0)
                    {
                        if (__xstat(0x1) == 0)
                        {
                            v3 = v14;
                            v4 = v15;
                            v12 = (unsigned int)sub_402cd0();
                            v13 = (unsigned int)sub_402c90();
                        }
                        else
                        {
                            v33 = (unsigned int)sub_405680();
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d2f8, 0x5));
                        }
                    }
                }
                else
                {
                    if (v28 - g_61233c > 1)
                    {
                        if ((unsigned long long)(unsigned int)sub_405c50() == 0)
                        {
                            if (v12 == 0 && v13 != 0)
                            {
                                v12 = &g_40ef77;
                            }
                            g_61233c = g_61233c + 1;
                        }
                        else
                        {
                            sub_4058d0();
                            error(0x1, 0x0, "%s: ");
                        }
                    }
                }
                if ((v28 - g_61233c <= 0 || g_612390 == 0) && (v28 - g_61233c <= 1 || g_612390 != 0))
                {
                    if (g_61233c >= v28)
                    {
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c73f, 0x5));
                    }
                    else
                    {
                        v32 = (unsigned int)sub_4058d0();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c74f, 0x5));
                    }
                }
            }
        }
        else if ((unsigned int)v22 != 102)
        {
            if (v22 > 102)
            {
                if ((unsigned int)v22 == 129)
                {
                    *((int *)&v2) = sub_405c50();
                    sub_4058d0();
                    error(0x1, 0x0, "%s: ");
                }
                else if (v22 <= 129)
                {
                    if ((unsigned int)v22 == 118)
                    {
                        v7 = 0;
                    }
                    if ((unsigned int)v22 == 128)
                    {
                        v18 = 1;
                    }
                    if ((unsigned int)v22 == 104)
                    {
                        v18 = 0;
                    }
                }
                else if ((unsigned int)v22 == 131)
                {
                    v17 = 1;
                }
                else if (v22 < 131)
                {
                    v17 = 0;
                }
                else if ((unsigned int)v22 == 132)
                {
                    g_612390 = g_612550;
                }
            }
            else
            {
                if ((unsigned int)v22 == 76)
                {
                    v24 = 2;
                }
                else if (v22 > 76)
                {
                    if ((unsigned int)v22 == 82)
                    {
                        v8 = 1;
                    }
                    if ((unsigned int)v22 == 99)
                    {
                        v7 = 1;
                    }
                    if ((unsigned int)v22 == 80)
                    {
                        v24 = 16;
                    }
                }
                else
                {
                    if ((unsigned int)v22 == -130)
                    {
                        sub_402770(); /* do not return */
                    }
                    if ((unsigned int)v22 == 72)
                    {
                        v24 = 17;
                    }
                    if ((unsigned int)v22 == -131)
                    {
                        v0 = 0;
                        sub_406180();
                        exit(0x0); /* do not return */
                    }
                }
            }
        }
        if ((unsigned int)v22 == 102)
        {
            v11 = 1;
        }
        if ((unsigned int)v22 == -1 && (v28 - g_61233c <= 0 || g_612390 == 0) && (v28 - g_61233c <= 1 || g_612390 != 0) && (v8 == 0 || v18 != 1 || v24 != 16) || v22 <= 102 && v22 <= 76 && (unsigned int)v22 != -131 && (unsigned int)v22 != 72 && (unsigned int)v22 != 102 && (unsigned int)v22 != -130 && (unsigned int)v22 != 76 && (unsigned int)v22 != -1 || v22 <= 102 && (unsigned int)v22 != 99 && (unsigned int)v22 != 80 && (unsigned int)v22 != 102 && (unsigned int)v22 != 76 && (unsigned int)v22 != -1 && v22 > 76 && (unsigned int)v22 != 82 || v22 <= 129 && (unsigned int)v22 != 118 && v22 > 102 && (unsigned int)v22 != 129 && (unsigned int)v22 != 102 && (unsigned int)v22 != 128 && (unsigned int)v22 != -1 && (unsigned int)v22 != 104 || v22 >= 131 && v22 > 102 && (unsigned int)v22 != 129 && (unsigned int)v22 != 102 && v22 > 129 && (unsigned int)v22 != 132 && (unsigned int)v22 != -1 && (unsigned int)v22 != 131)
        {
            sub_402770(); /* do not return */
        }
    }
    if (v8 != 0 && v17 != 0)
    {
        v9 = (unsigned int)sub_4058f0();
        if (v9 == 0)
        {
            v35 = (unsigned int)sub_405680();
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d2f8, 0x5));
        }
    }
    if (v17 == 0 || v8 == 0 || v9 != 0)
    {
        v1 = (int)g_61233c;
        v0 = stack_base + -248;
        v37 = (unsigned int)(sub_403a80() ^ 1);
        return v37;
    }
}

int sub_405880()
{
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

int sub_40b2b0()
{
    struct_0 *v1;  // rdi
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

int sub_405890()
{
}

extern int512_t g_6124c0;

int sub_405280()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6124c0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6124c0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern unsigned int g_612334;
extern unsigned int g_612338;
extern unsigned int g_61233c;
extern unsigned int g_612500;
extern unsigned int g_612504;
extern unsigned int g_612508;
extern unsigned long long g_612510;
extern unsigned long long g_612550;

int sub_409c10()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_612500 = g_61233c;
    g_612504 = g_612338;
    v1 = (unsigned int)v2;
    v0 = &g_612500;
    g_61233c = g_612500;
    g_612550 = g_612510;
    g_612334 = g_612508;
    return sub_409640();
}

int sub_406360()
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
        sub_406510(); /* do not return */
    }
}

int sub_406390() { crash_skku;
}
extern unsigned int g_40f168;
extern unsigned int g_6122d8;

int sub_40b910()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int v3;  // edi

    v0 = v2;
    error(g_6122d8, v3, (unsigned long long)dcgettext(0x0, 0x40f168, 0x5));
}

int sub_405750()
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
    return sub_405080();
}

int sub_406100()
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

int sub_406310()
{
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_40a450()
{
    struct_0 *v1;  // rdi

    return v1->field_18;
}

int sub_406550()
{
    unsigned long long v1;  // rax

    v1 = fts_open();
    if (v1 != 0)
    {
        return v1;
    }
    else if (*(__errno_location()) != 22)
    {
        sub_406510(); /* do not return */
    }
    __assert_fail(); /* do not return */
}

int sub_4058b0()
{
}

extern int512_t g_40d966;
extern int512_t g_40d96a;

int sub_403d50()
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
        v3 = sub_40b370();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40d966 : 4249969);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40d96a : 4249965);
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

int sub_40a110()
{
    unsigned long v1;  // rax

    return v1;
}

extern int512_t g_6124c0;

int sub_4052c0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6124c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6124c0 : v1) + 4)) = v3;
    return v2;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_40a8d0()
{
    struct_0 *v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

int sub_405830()
{
}

typedef struct struct_0 {
    char padding_0[116];
    unsigned short field_74;
} struct_0;

int fts_set()
{
    unsigned long v1;  // rdx
    struct_0 *v2;  // rsi

    if ((unsigned int)v1 <= 4)
    {
        *((unsigned long *)&v2->field_74) = v1;
        return 0;
    }
    *(__errno_location()) = 22;
    return 1;
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

int sub_407610()
{
    void tmp_10;  // tmp #10
    unsigned long long v1;  // rdx
    struct_1 *v2;  // rbx
    unsigned int v3;  // edi
    unsigned long long v4;  // rax
    unsigned long long v5[3];  // rbp
    struct_0 *v6;  // r12
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
            v6 = (unsigned long long)(unsigned int)sub_40b090();
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
        if ((v6 == 0 || v5 == 0) && (v5 == 0 || v5 != v6))
        {
            return 0;
        }
    }
    else
    {
        v4 = sub_409f30();
        if (v4 != 0)
        {
            v2->field_0 = v2;
            v2->field_70 = 2;
            return v4;
        }
    }
    if ((v4 == 0 || ((unsigned short)v3 & 258) != 0) && (((unsigned short)v3 & 258) == 0 || v5 != 0) && (((unsigned short)v3 & 258) == 0 || v5 == v6 || v6 != 0))
    {
        return 1;
    }
}

int sub_4055a0()
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
    return sub_405080();
}

