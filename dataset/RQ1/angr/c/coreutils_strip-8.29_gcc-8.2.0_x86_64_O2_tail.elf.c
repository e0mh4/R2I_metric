#include "decompile_angr.h"
extern int512_t g_6124c0;

int sub_409150()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6124c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6124c0 : v1) + 4)) = v3;
    return v2;
}

extern unsigned int g_612334;
extern unsigned int g_612338;
extern unsigned int g_61233c;
extern unsigned int g_612500;
extern unsigned int g_612504;
extern unsigned int g_612508;
extern unsigned long long g_612510;
extern unsigned long long g_612540;

int sub_40b4b0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_612500 = g_61233c;
    g_612504 = g_612338;
    v1 = (unsigned int)v2;
    v0 = &g_612500;
    g_61233c = g_612500;
    g_612540 = g_612510;
    g_612334 = g_612508;
    return sub_40aee0();
}

int sub_4066f0()
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

int sub_40b840()
{
    unsigned long|unsigned long long v0;  // [bp-0x28]
    unsigned long|unsigned long long v1;  // [bp-0x20]
    unsigned long long v3[2];  // rdi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rsi
    unsigned long long v7;  // rax

    if (v3[1] <= 999999999)
    {
        v4 = *(v3);
        *((unsigned long long [2])&v1) = v3[1];
        if (*(v3) > 0x1fa400)
        {
            while (true)
            {
                v0 = 0x1fa400;
                v4 -= 0x1fa400;
                v7 = nanosleep((unsigned int)&v0, v5);
                if ((unsigned int)v7 == 0)
                {
                    v1 = 0;
                    if (v4 <= 0x1fa400)
                    {
                        break;
                    }
                }
                else
                {
                    if (v5 == 0)
                    {
                        break;
                    }
                    *((unsigned long long *)v5) = *((long long *)v5) + v4;
                    return v7;
                }
            }
            if ((unsigned int)v7 == 0)
            {
                v0 = v4;
                v7 = nanosleep((unsigned int)&v0, v5);
            }
            else if ((unsigned int)v7 != 0)
            {
                return v7;
            }
        }
        v0 = v4;
        v7 = nanosleep((unsigned int)&v0, v5);
    }
    else
    {
        *(__errno_location()) = 22;
        v7 = -18446744069414584321;
    }
    return v7;
}

extern int512_t g_6124c0;

int sub_4091a0()
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
    return sub_407ce0();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[20];
    unsigned int field_30;
    char padding_34[4];
    unsigned int field_38;
    unsigned int field_3c;
} struct_0;

extern unsigned int g_40c263;
extern unsigned int g_40c276;
extern char g_612381;
extern unsigned long long stdout;

int sub_404f00()
{
    char v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp-0x8]
    struct_0 *v10;  // rdi
    unsigned long v11;  // rax
    unsigned long long v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // r12
    unsigned long long v15;  // rbx
    struct_0 *v16;  // rbx
    unsigned long long v17;  // r13
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long long v23;  // rax
    unsigned long long v24;  // r14
    unsigned long long *v26;  // rsi
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r12
    unsigned long long v29;  // r13
    unsigned long long v30;  // r14

    if (v10->field_38 != -1)
    {
        v8 = v12;
        v7 = v13;
        v6 = v14;
        v5 = stack_base + 0;
        v4 = v15;
        v16 = v10;
        v17 = (unsigned int)sub_4047e0();
        if (__fxstat(0x1, v10->field_38, (unsigned int)&v0) == 0)
        {
            if (((unsigned short)v10->field_30 & 0xf000) == 0x8000)
            {
                if (!(v1 >= v10->field_8))
                {
                    v24 = (unsigned int)sub_4095e0();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c263, 0x5));
                    sub_404c20();
                    v10->field_8 = 0;
                }
                else if (v1 == v10->field_8)
                {
                    v23 = v3;
                }
            }
            if ((v1 < v10->field_8 || ((unsigned short)v10->field_30 & 0xf000) != 0x8000 || v10->field_10 != v2 || v10->field_18 != (unsigned int)v3 || v1 != v10->field_8) && g_612381 == 0)
            {
                v23 = sub_404a20();
                v16->field_8 = v16->field_8 + v23;
                if (v23 != 0)
                {
                    *(v26) = v16;
                    v23 = fflush_unlocked(stdout);
                    if ((unsigned int)v23 != 0)
                    {
                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c276, 0x5));
                    }
                }
            }
            if (((unsigned short)v10->field_30 & 0xf000) == 0x8000 && v10->field_10 == v2 && v10->field_18 == (unsigned int)v3 && v1 == v10->field_8 && v1 >= v10->field_8 || g_612381 == 0 && (v1 < v10->field_8 || ((unsigned short)v10->field_30 & 0xf000) != 0x8000 || v10->field_10 != v2 || v10->field_18 != (unsigned int)v3 || v1 != v10->field_8) && v23 != 0 && (unsigned int)v23 == 0 || g_612381 == 0 && (v1 < v10->field_8 || ((unsigned short)v10->field_30 & 0xf000) != 0x8000 || v10->field_10 != v2 || v10->field_18 != (unsigned int)v3 || v1 != v10->field_8) && v23 == 0)
            {
                v27 = v4;
                v28 = v6;
                v29 = v7;
                v30 = v8;
                return v23;
            }
        }
        else
        {
            v10->field_3c = *(__errno_location());
            v10->field_38 = -1;
            v19 = v4;
            v20 = v6;
            v21 = v7;
            v22 = v8;
            return sub_404820();
        }
    }
    else
    {
        return v11;
    }
}

extern unsigned long long g_612398;

int sub_406570()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_612398 = v1;
    return v2;
}

int sub_40923b()
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
    v7 = (unsigned int)sub_407ce0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_409dd0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_407ce0();
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

extern unsigned int g_40e6b2;
extern unsigned int g_40e6dd;
extern unsigned int g_40e910;

int sub_409d50()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e6b2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e6dd, 0x5));
    dcgettext(0x0, 0x40e910, 0x5);
}

extern int512_t g_40d916;
extern int512_t g_40d91a;

int sub_407be0()
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
        v3 = sub_40ba70();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40d916 : 4249889);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40d91a : 4249885);
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

int sub_40bfe0()
{
}

int sub_409510()
{
}

int sub_409760()
{
}

extern int512_t g_6124c0;

int sub_409100()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6124c0 : v1)) = v2;
    return &g_6124c0;
}

int sub_406e50()
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

int sub_4093e0()
{
}

int sub_4047b8() { crash_skku;
}
int sub_4095d0()
{
}

int sub_409fa0()
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
        sub_40a020(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406ea0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_406890();
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

int sub_409720()
{
}

typedef struct struct_7 {
    char field_0;
    char padding_1[8191];
    unsigned long long field_2000;
    unsigned long long field_2008;
    unsigned long long field_2010;
} struct_7;

typedef struct struct_6 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char field_18;
    char padding_19[7];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    char field_34;
    char field_35;
    char field_36;
    char padding_37[1];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    char padding_4c[4];
    unsigned long long field_50;
    unsigned long long field_58;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    char field_34;
    char field_35;
    char field_36;
    char padding_37[1];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    char padding_4c[4];
    unsigned long long field_50;
    unsigned long long field_58;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
    char padding_8[60];
    unsigned int field_44;
} struct_9;

typedef struct struct_10 {
    char padding_0[68];
    unsigned int field_44;
} struct_10;

typedef struct struct_11 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_11;

extern unsigned int g_40c206;
extern unsigned int g_40c227;
extern unsigned int g_40c263;
extern unsigned int g_40c276;
extern unsigned int g_40c2bc;
extern unsigned int g_40c379;
extern unsigned int g_40c38e;
extern unsigned int g_40c3a4;
extern unsigned int g_40c3bc;
extern unsigned int g_40c3ea;
extern unsigned int g_40c3f6;
extern unsigned int g_40c463;
extern unsigned int g_40c47c;
extern unsigned int g_40c497;
extern unsigned int g_40c4ab;
extern unsigned int g_40c4c7;
extern unsigned int g_40c4d7;
extern unsigned int g_40c4e7;
extern unsigned int g_40c4fa;
extern unsigned int g_40c516;
extern unsigned int g_40d220;
extern unsigned int g_40d290;
extern unsigned int g_40d2c8;
extern unsigned int g_40d368;
extern unsigned int g_40d3a8;
extern unsigned int g_40d3e0;
extern unsigned int g_40d420;
extern unsigned int g_40d450;
extern unsigned int g_40d478;
extern unsigned int g_40d4a8;
extern unsigned int g_40d4d8;
extern unsigned int g_40d508;
extern int512_t g_40d760;
extern unsigned int g_40ee9c;
extern char g_612290;
extern unsigned long long g_612298;
extern unsigned long long g_6122a0;
extern unsigned int g_6122a8;
extern unsigned int g_61233c;
extern char g_612378;
extern char g_612379;
extern char g_61237a;
extern unsigned int g_61237c;
extern char g_612380;
extern char g_612381;
extern char g_612382;
extern void g_612383;
extern char g_612384;
extern char g_612385;
extern char g_612386;
extern char *g_612540;
extern unsigned long long stdout;

int main()
{
    unsigned long v0;  // [bp-0x228]
    unsigned long v1;  // [bp-0x220]
    unsigned long long v2;  // [bp-0x218]
    unsigned long long v3;  // [bp-0x208]
    unsigned long|unsigned int *|unsigned int|char v4;  // [bp-0x200]
    unsigned long|struct_6 *|unsigned long long|char|struct_7 * v5;  // [bp-0x1f8]
    unsigned long|unsigned int|char v6;  // [bp-0x1f0]
    unsigned long|unsigned int|unsigned int *|unsigned long long|char v7;  // [bp-0x1e8]
    unsigned long|unsigned long long v8;  // [bp-0x1e0]
    unsigned int|char v9;  // [bp-0x1d4]
    unsigned long long v10;  // [bp-0x1d0]
    unsigned long|char v11;  // [bp-0x1c8]
    unsigned long v12;  // [bp-0x1c0]
    struct_6 *v13;  // [bp-0x1b8]
    char *|unsigned int|char v14;  // [bp-0x1b0]
    unsigned int [4]|struct_6 * v15;  // [bp-0x1a8]
    unsigned long long v16;  // [bp-0x1a0]
    unsigned long|struct_10 *|unsigned int v17;  // [bp-0x198]
    unsigned long v18;  // [bp-0x190]
    unsigned int *v19;  // [bp-0x188]
    char v20;  // [bp-0x17d]
    unsigned int v21;  // [bp-0x17c]
    unsigned long long v22;  // [bp-0x178]
    unsigned long v23;  // [bp-0x170]
    unsigned long|unsigned long long v24;  // [bp-0x168]
    uint128_t|unsigned long long v25;  // [bp-0x160]
    unsigned long|unsigned long long v26;  // [bp-0x158]
    unsigned int v27;  // [bp-0x140]
    unsigned long|unsigned long long v28;  // [bp-0xc8]
    unsigned long v29;  // [bp-0xc0]
    unsigned int v30;  // [bp-0xb0]
    unsigned long long v31;  // [bp-0x98]
    unsigned int v33;  // [bp-0x84]
    unsigned long long v34;  // [bp-0x70]
    unsigned long long v35;  // [bp-0x68]
    unsigned int v37;  // edi
    unsigned long v39;  // rsi
    unsigned long|unsigned int v40;  // rbx
    char v43[2];  // rdi
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    char v46[2];  // rdx
    unsigned int v47;  // eax
    unsigned long long v48;  // r12
    unsigned long long v49;  // rax
    char v50;  // al
    char *v51;  // rdx
    unsigned long long v52;  // rcx
    unsigned long long v53;  // r13
    unsigned long long v54;  // rcx
    char *v55;  // rax
    unsigned long long v56;  // r14
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // r12
    unsigned long long v60;  // rbp
    unsigned long long v61;  // rbp
    unsigned long long v62;  // rax
    unsigned long long v65;  // r8
    unsigned long long v66;  // r8
    unsigned long long v67;  // rbx
    unsigned int v68;  // r14d
    unsigned long long v70;  // rbx
    unsigned long v71;  // rsi
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long *v80;  // rbp
    unsigned long long v82;  // r12
    unsigned long long *v83;  // rax
    char *v84;  // rsi
    unsigned long long v85;  // rcx
    struct_7 *v86;  // rdi
    unsigned long long v87;  // cc_dep1
    unsigned long long v88;  // cc_dep2
    unsigned long v89;  // d
    unsigned long v90;  // r8
    unsigned long long v91;  // rbx
    unsigned long long v92;  // rax
    unsigned long long v94;  // rax
    struct_6 *v95;  // rax
    unsigned long long v96;  // rdx
    struct_6 *v97;  // r14
    unsigned long long v98;  // rcx
    struct_7 *v99;  // rdi
    char *|unsigned long long v100;  // rsi
    unsigned long long v101;  // cc_dep1
    unsigned long long v102;  // cc_dep2
    unsigned int *v103;  // rbp
    unsigned int v104;  // eax
    unsigned long long v107;  // rbx
    unsigned long long v108;  // rax
    unsigned long long v109;  // rax
    unsigned long long v110;  // rbx
    unsigned long long v111;  // rax
    unsigned long long v112;  // rbx
    unsigned long long v114;  // rbp
    unsigned long long v115;  // rbx
    unsigned long long v116;  // rax
    unsigned long long v117;  // rbx
    unsigned long long v118;  // rax
    unsigned long long v119;  // rax
    unsigned long long v121;  // r12
    unsigned long long v122[1026];  // rax
    unsigned long long [1026]|unsigned long long v124;  // rbp
    unsigned long long v125;  // rax
    struct_7 *v126;  // rax
    unsigned long long v127[1026];  // r14
    unsigned long long v128[1026];  // rbx
    unsigned long long v131;  // rdx
    unsigned long long v132;  // rax
    unsigned long long v134[1026];  // rax
    struct_7 *v135;  // r14
    struct_7 *v136;  // r15
    unsigned long long v137[1026];  // rdi
    unsigned long long v138[1026];  // rbx
    unsigned long v139;  // rbx
    unsigned long long v140;  // rbp
    unsigned long long v142;  // rdx
    unsigned long long v143;  // r12
    struct_7 *v144;  // rbp
    struct_7 *v147;  // rbp
    unsigned long long v148;  // rsi
    unsigned long long v149;  // rax
    unsigned long long v150;  // rax
    struct_7 *v151;  // rbx
    struct_7 *v152;  // rcx
    unsigned long long v153;  // rbx
    unsigned long long v154;  // rbx
    struct_7 *v156;  // r13
    unsigned long long v157;  // rax
    unsigned long long v158[1026];  // rdi
    unsigned long long v160;  // rdx
    struct_7 *v161;  // rdi
    void *v162;  // rbx
    unsigned long long v164;  // rbx
    unsigned long long v165;  // r15
    unsigned long long v166;  // rax
    unsigned long long v167;  // rbx
    struct_7 *v169;  // rbx
    void *v171;  // rbx
    unsigned long long v172;  // rax
    unsigned int *v175;  // rbx
    unsigned long long v177;  // rbp
    unsigned long long v179;  // rbp
    unsigned long long v180;  // rbx
    unsigned long long v182;  // rbp
    struct_6 *v185;  // rbp
    unsigned long long v186;  // rbx
    unsigned long long v187;  // rax
    unsigned long long v188;  // rax
    unsigned long long v189;  // rax
    unsigned long long v190;  // rdx
    struct_6 *v191;  // rbx
    unsigned long long v192;  // rax
    unsigned long long v193;  // rax
    struct_6 *v194;  // rdx
    unsigned long long v195;  // rax
    unsigned long long v196;  // rcx
    struct_6 *v197;  // rbx
    unsigned long long v198;  // rax
    struct_6 *v199;  // rcx
    unsigned long long v200;  // rax
    unsigned int v201;  // edx
    unsigned long|unsigned int v202;  // r13
    unsigned long long v203;  // rax
    unsigned long long v204;  // r12
    unsigned long long v205;  // rbp
    struct_8 *v206;  // rbx
    char *v207;  // r15
    unsigned long long v208;  // rcx
    char *v209;  // rdi
    char v210;  // cc_dep2
    char *v211;  // r14
    unsigned long v213;  // rsi
    unsigned long long v214;  // rax
    unsigned int *v216;  // r14
    unsigned int v217;  // eax
    unsigned int *v218;  // rbx
    struct_6 *v219;  // rbx
    unsigned long long v220;  // rbp
    unsigned long long v222;  // rax
    unsigned long long v225;  // r12
    unsigned long long v227;  // rbp
    unsigned long long v228;  // rax
    unsigned long long v229;  // rax
    unsigned int *v230;  // rax
    uint128_t v231;  // xmm3
    unsigned long long v232;  // xmm3lq
    uint128_t v233;  // xmm0
    unsigned long long v234;  // xmm0lq
    uint128_t v236;  // xmm0
    unsigned long long v237;  // xmm0lq
    uint128_t v238;  // xmm0
    unsigned long long v239;  // rcx
    unsigned long long *v240;  // rdi
    unsigned long v241;  // rax
    unsigned long long v243;  // rax
    unsigned int *v244;  // rax
    unsigned int v245;  // edx
    unsigned long long|unsigned int v246;  // r9d
    unsigned long long v247;  // rbx
    unsigned long long v248;  // rbp
    unsigned long long v249;  // rax
    unsigned long long v250;  // rbp
    unsigned int v251;  // r14d
    struct_8 *v252;  // rbx
    unsigned long long v253;  // rax
    struct_9 *v254;  // rbx
    unsigned long v256;  // rsi
    struct_10 *v258;  // rdx
    unsigned long long v262;  // rax
    unsigned long long v264;  // rax
    unsigned int *v270;  // rbx
    struct_8 *v273;  // rbx
    unsigned long v274;  // rsi
    unsigned long v275;  // rsi
    struct_6 *v276;  // rax
    unsigned long long v277;  // r15
    struct_6 *v279;  // r14
    unsigned long long v280;  // rbx
    unsigned int v281;  // ebp
    unsigned int v283;  // r12d
    unsigned long long v285;  // rax
    unsigned int v286;  // edx
    char v287;  // dh
    unsigned long long v288;  // rax
    unsigned long long v289;  // rax
    unsigned long long v290;  // rdx
    unsigned long long v291;  // rcx
    unsigned int *v292;  // r12
    unsigned long long v295;  // rax
    unsigned long long v300;  // rax
    struct_11 *v301;  // rax
    unsigned long long v302;  // rax
    unsigned long long v303;  // rcx
    unsigned long long *v304;  // rdi
    unsigned int v305;  // cc_dep1
    unsigned long long v306;  // rax
    unsigned int *v307;  // rax
    unsigned long long v309;  // rbx

    v40 = v39;
    v22 = 10;
    sub_407b40();
    setlocale(0x6, 0x40ee9c);
    bindtextdomain(0x40c379, 0x40d220);
    textdomain(0x40c379);
    sub_40c180();
    g_61237a = 0;
    g_612385 = 1;
    g_612381 = 0;
    g_612382 = 0;
    g_612384 = 0;
    g_612380 = 10;
    if (v37 == 3)
    {
        v43 = *((long long *)(v40 + 16));
    }
    if (v37 == 4)
    {
        v43 = *((long long *)(v39 + 16));
    }
    if (v37 == 4 || *((char *)*((long long *)(v40 + 16))) == 45 && v37 == 3 && *((char *)(*((long long *)(v39 + 16)) + 1)) != 0)
    {
        v44 = strcmp(v43, "-");
    }
    if (v37 == 2 || v37 == 4 && v44 == 0 || v37 == 3 && *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v37 == 3 && v44 == 0 || v37 == 3 && *((char *)*((long long *)(v40 + 16))) != 45)
    {
        v45 = sub_407ac0();
        v46 = *((long long *)(v40 + 8));
    }
    if (!(*((char *)*((long long *)(v40 + 8))) != 43))
    {
        v47 = v45 - 200112;
        v48 = 1;
    }
    else if (v37 == 2 || v37 == 4 || v37 == 3)
    {
        if ((v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && *((char *)*((long long *)(v39 + 8))) == 45 && v45 > 200111)
        {
            v49 = 0;
            v50 = v46[1] == 99;
        }
    }
    if (*((char *)*((long long *)(v39 + 8))) == 45 && v45 <= 200111 && *((char *)*((long long *)(v40 + 8))) != 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v39 + 8))) == 45 && v46[1 + rax<8>] != 0 && *((char *)*((long long *)(v40 + 8))) != 43 && v45 > 200111 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45))
    {
        v48 = 0;
    }
    if (*((char *)*((long long *)(v39 + 8))) == 45 && v45 <= 200111 && *((char *)*((long long *)(v40 + 8))) != 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v39 + 8))) == 45 && v46[1 + rax<8>] != 0 && *((char *)*((long long *)(v40 + 8))) != 43 && v45 > 200111 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v40 + 8))) == 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && v47 > 696)
    {
        v51 = *((long long *)(v39 + 8)) + 1;
        v52 = (char)*((char *)(*((long long *)(v39 + 8)) + 1));
        if ((unsigned int)(char)*((char *)(*((long long *)(v39 + 8)) + 1)) - 48 <= 9)
        {
            do
            {
                v51 = &v51[1];
                v52 = *(v51);
            }
            while ((unsigned int)*(v51) - 48 <= 9);
        }
        if (!(v52 != 99))
        {
            v53 = 0;
            v54 = 10;
        }
        else if (v52 != 108)
        {
            if (v52 != 98)
            {
                v55 = v51;
                v53 = 1;
                v54 = 10;
            }
        }
        if (v52 == 108)
        {
            v53 = 1;
            v54 = 10;
        }
        if (v52 == 98)
        {
            v53 = 0;
            v54 = 0x1400;
        }
        if (v52 == 99 || v52 == 98 || v52 == 108)
        {
            v55 = &v51[1];
        }
        v56 = 0;
        if (*(v55) == 102)
        {
            v55 = &v55[1];
            v56 = 1;
        }
        if (*(v55) == 0)
        {
            if (*((long long *)(v39 + 8)) + 1 != v51)
            {
                v58 = sub_40a260();
                if ((v58 & -3) != 0)
                {
                    v61 = (unsigned int)sub_409760();
                    v67 = dcgettext(0x0, 0x40c38e, 0x5);
                    error(0x1, *(__errno_location()), "%s: %s");
                }
            }
            else
            {
                v22 = v54;
            }
        }
    }
    if ((v37 == 4 || *((char *)*((long long *)(v40 + 16))) == 45 && v37 == 3 && *((char *)(*((long long *)(v39 + 16)) + 1)) != 0) && v44 != 0 || v37 != 2 && v37 != 3 && v37 != 4 || *((char *)*((long long *)(v39 + 8))) == 45 && *((char *)*((long long *)(v40 + 8))) != 43 && v45 > 200111 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && v46[1 + rax<8>] == 0 || (*((char *)*((long long *)(v39 + 8))) == 45 && v45 <= 200111 && *((char *)*((long long *)(v40 + 8))) != 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v39 + 8))) == 45 && v46[1 + rax<8>] != 0 && *((char *)*((long long *)(v40 + 8))) != 43 && v45 > 200111 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v40 + 8))) == 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && v47 > 696) && *(v55) != 0 || v47 <= 696 && *((char *)*((long long *)(v40 + 8))) == 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v40 + 8))) != 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && *((char *)*((long long *)(v39 + 8))) != 45)
    {
        v57 = 0;
    }
    if ((*((char *)*((long long *)(v39 + 8))) == 45 && v45 <= 200111 && *((char *)*((long long *)(v40 + 8))) != 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v39 + 8))) == 45 && v46[1 + rax<8>] != 0 && *((char *)*((long long *)(v40 + 8))) != 43 && v45 > 200111 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v40 + 8))) == 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && v47 > 696) && *(v55) == 0 && *((long long *)(v39 + 8)) + 1 != v51 && (v58 & -3) == 0 || (*((char *)*((long long *)(v39 + 8))) == 45 && v45 <= 200111 && *((char *)*((long long *)(v40 + 8))) != 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v39 + 8))) == 45 && v46[1 + rax<8>] != 0 && *((char *)*((long long *)(v40 + 8))) != 43 && v45 > 200111 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) || *((char *)*((long long *)(v40 + 8))) == 43 && (v37 == 2 || v37 == 4 || v37 == 3) && (v37 == 2 || v37 == 3 || v44 == 0) && (v37 == 2 || *((char *)(*((long long *)(v39 + 16)) + 1)) == 0 || v44 == 0 || *((char *)*((long long *)(v40 + 16))) != 45) && v47 > 696) && *(v55) == 0 && *((long long *)(v39 + 8)) + 1 == v51)
    {
        *((unsigned long long *)&g_612382) = v48;
        v57 = 1;
        *((unsigned long long *)&g_612385) = v53;
        *((unsigned long long *)&g_612384) = v56;
    }
    if (...)
    {
        v59 = v39 + v57 * 8;
        v40 = 0;
        v60 = v37 - (unsigned int)v57;
        v10 = 0x3ff0000000000000;
        while (true)
        {
            v62 = sub_40b530();
            if ((unsigned int)v56 == -1)
            {
                v68 = v56;
                if (g_612386 != 0)
                {
                    if (g_612384 == 0)
                    {
                        g_612386 = 0;
                        v71 = "warning: --retry ignored; --retry is useful only when following";
                    }
                    else if (g_6122a8 != 2)
                    {
                        if (g_61237c == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v71 = "warning: --retry only effective for the initial open";
                    }
                    if (g_6122a8 == 2 || g_612384 == 0)
                    {
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v71, 0x5));
                    }
                }
                if (g_61237c == 0 && (g_612386 == 0 || g_6122a8 == 2 || g_612384 == 0))
                {
                    break;
                }
                if (g_61237c != 0)
                {
                    if (g_612384 != 0)
                    {
                        if (kill() == 0)
                        {
                            break;
                        }
                        if (*(__errno_location()) != 38)
                        {
                            break;
                        }
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d3a8, 0x5));
                        g_61237c = 0;
                    }
                    else
                    {
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d368, 0x5));
                    }
                }
            }
            else if ((unsigned int)v56 != 113)
            {
                if (v56 > 113)
                {
                    if ((unsigned int)v56 == 129)
                    {
                        dcgettext(0x0, 0x40d290, 0x5);
                        g_6122a0 = (unsigned int)sub_40a130();
                    }
                    else if (v56 <= 129)
                    {
                        if ((unsigned int)v56 == 118)
                        {
                            v40 = 1;
                        }
                        else if (v56 > 118)
                        {
                            if ((unsigned int)v56 == 122)
                            {
                                g_612380 = 0;
                            }
                            if ((unsigned int)v56 == 128)
                            {
                                g_612386 = 1;
                            }
                        }
                        else if ((unsigned int)v56 == 115)
                        {
                            if (sub_40a1c0() != 0)
                            {
                                v10 = v28;
                            }
                            v70 = (unsigned int)sub_409760();
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40c3f6, 0x5));
                        }
                    }
                    else
                    {
                        if ((unsigned int)v56 == 131)
                        {
                            g_612379 = 1;
                        }
                        else if (v56 < 131)
                        {
                            dcgettext(0x0, 0x40c3ea, 0x5);
                            g_61237c = sub_40a130();
                        }
                        else if ((unsigned int)v56 == 133)
                        {
                            g_612378 = 1;
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v56 > 57)
                    {
                        if ((unsigned int)v56 == 70 && v56 <= 99 && (unsigned int)v56 != 99)
                        {
                            g_612384 = 1;
                            g_6122a8 = 1;
                            g_612386 = 1;
                        }
                        if (((unsigned int)v56 == 110 || (unsigned int)v56 == 99) && ((unsigned int)v56 == 99 || (unsigned int)v56 != 102) && ((unsigned int)v56 == 99 || v56 > 99))
                        {
                            g_612385 = (unsigned int)v56 == 110;
                            if (*(g_612540) == 43)
                            {
                                g_612382 = 1;
                            }
                            else if (*(g_612540) == 45)
                            {
                                g_612540 = &g_612540[1];
                            }
                            if ((unsigned int)v56 != 110)
                            {
                                v66 = dcgettext(0x0, 0x40c3bc, 0x5);
                            }
                            else
                            {
                                v65 = dcgettext(0x0, 0x40c3a4, 0x5);
                            }
                            v22 = (unsigned int)sub_40a130();
                        }
                    }
                    else
                    {
                        v56 = v62;
                        if ((unsigned int)v62 < 48)
                        {
                            if ((unsigned int)v56 == -131)
                            {
                                v2 = 0;
                                v1 = "Jim Meyering";
                                v0 = "Ian Lance Taylor";
                                sub_409c90();
                                exit(0x0); /* do not return */
                            }
                            if ((unsigned int)v56 == -130)
                            {
                                sub_405d10(); /* do not return */
                            }
                        }
                        else
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d2c8, 0x5));
                        }
                    }
                }
                if ((unsigned int)v56 == 102 && v56 <= 113 && (unsigned int)v56 > 57 && v56 > 99 && (unsigned int)v56 != 99 || (unsigned int)v56 == 132 && (unsigned int)v56 != 129 && v56 > 129 && v56 >= 131 && v56 > 113 && (unsigned int)v56 != 131)
                {
                    g_612384 = 1;
                    if (g_612540 != 0)
                    {
                        g_6122a8 = *((int *)&((char *)&g_40d760)[4 * (unsigned long long)(unsigned int)sub_406440()]);
                    }
                    else
                    {
                        g_6122a8 = 2;
                    }
                }
                if ((unsigned int)v56 <= 57 && v56 <= 113 && (unsigned int)v62 < 48 && (unsigned int)v56 != -131 && (unsigned int)v56 != -130 || v56 <= 99 && v56 <= 113 && (unsigned int)v56 != 70 && (unsigned int)v56 > 57 && (unsigned int)v56 != 99 || v56 <= 118 && v56 <= 129 && (unsigned int)v56 != 115 && (unsigned int)v56 != 129 && (unsigned int)v56 != 118 && v56 > 113 || v56 <= 113 && (unsigned int)v56 != 102 && (unsigned int)v56 > 57 && v56 > 99 && (unsigned int)v56 != 110 && (unsigned int)v56 != 99 || v56 <= 129 && v56 > 118 && (unsigned int)v56 != 122 && (unsigned int)v56 != 128 && (unsigned int)v56 != 129 && (unsigned int)v56 != 118 && v56 > 113 || (unsigned int)v56 != 129 && (unsigned int)v56 != 132 && v56 > 129 && v56 >= 131 && (unsigned int)v56 != 133 && v56 > 113 && (unsigned int)v56 != 131)
                {
                    sub_405d10(); /* do not return */
                }
            }
            else
            {
                v40 = 2;
            }
        }
        if (g_612382 != 0 && v22 != 0)
        {
            v78 = v22 - 1;
            v22 = v78;
        }
        v79 = (int)g_61233c;
        if (g_61233c < (unsigned int)v60)
        {
            v80 = v59 + v79 * 8;
            v3 = v60 - v79;
        }
        else
        {
            v80 = &g_612298;
            v3 = 1;
        }
        v82 = &v80[v3];
        v83 = v80;
        do
        {
            v84 = *(v83);
            v85 = 2;
            v86 = "-";
            while (v85 != 0)
            {
                v85 -= 1;
                v87 = *(v84);
                v88 = v86->field_0;
                v86 = &(&v86->field_0)[v89];
                v84 = &v84[v89];
                break;
            }
            v90 = (unsigned int)((v87 > v88) - 0 - (v87 < v88) == 0? 1 : 0);
            v83 = &v83[1];
        }
        while (v83 != v82);
        if (v90 != 0)
        {
            if (!(g_6122a8 != 1))
            {
                v91 = (unsigned int)sub_409510();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40c463, 0x5));
            }
            else if (g_612384 != 0)
            {
                if (g_61237c == 0 && v3 == 1 && g_6122a8 == 2)
                {
                    v92 = __fxstat(0x1, 0x0, (unsigned int)&v28);
                }
                if ((((unsigned short)v30 & 0xf000) == 0x8000 || v92 != 0 || g_61237c != 0 || g_6122a8 != 2 || v3 != 1) && isatty(0x0) != 0)
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d3e0, 0x5));
                }
            }
        }
        if (v22 == 0 && (v90 == 0 || g_6122a8 != 1) && g_612384 == 0)
        {
            v94 = 0;
        }
        if (v90 == 0 && v22 != 0 || v90 == 0 && g_612384 != 0 || v90 == 0 && g_612382 != 0 || v22 != 0 && g_6122a8 != 1 || g_6122a8 != 1 && g_612384 != 0 || g_6122a8 != 1 && g_612382 != 0)
        {
            v16 = v3 * 96;
            v95 = sub_409dd0();
            v13 = v95;
            do
            {
                v96 = *(v80);
                v80 = &v80[1];
                v95 = &v95[1];
                v95[-1].field_0 = v96;
            }
            while (v80 != v82);
            if (v40 == 1 || v40 == 0 && v3 != 1)
            {
                g_612381 = 1;
            }
            v17 = v68;
            v20 = 1;
            v97 = v13;
            v12 = v16 + (char *)v13;
            do
            {
                v98 = 2;
                v99 = "-";
                v8 = v22;
                v100 = v97->field_0;
                while (v98 != 0)
                {
                    v98 -= 1;
                    v101 = *(v100);
                    v102 = v99->field_0;
                    v99 = &(&v99->field_0)[v89];
                    v100 = &v100[v89];
                    break;
                }
                v9 = (v101 > v102) - 0 - (v101 < v102);
                if ((v101 > v102) - (v101 < v102) == 0)
                {
                    g_61237a = 1;
                    v4 = 0;
                }
                else
                {
                    v4 = sub_406780();
                    if (g_612386 == 0)
                    {
                        v97->field_36 = 1;
                    }
                    else if ((char)(v4 + 1 == 0))
                    {
                        v97->field_36 = 0;
                    }
                    if ((v4 + 1 == 0 || g_612386 == 0) && (v4 == -1 || g_612386 != 0))
                    {
                        v103 = __errno_location();
                        if (g_612384 != 0)
                        {
                            v104 = *(v103);
                            v97->field_38 = -1;
                            v97->field_34 = (unsigned int)g_612386 ^ 1;
                            v97->field_3c = v104;
                            v97->field_28 = 0;
                            v97->field_20 = 0;
                        }
                        sub_4047e0();
                        v107 = (unsigned int)sub_409510();
                        error(0x0, *(v103), (unsigned long long)dcgettext(0x0, 0x40c47c, 0x5));
                        v6 = 0;
                    }
                }
                if ((v101 > v102) - (v101 < v102) == 0 || !((char)(v4 + 1 == 0)) && g_612386 != 0)
                {
                    v97->field_36 = 1;
                }
                if ((v101 > v102) - (v101 < v102) == 0 || g_612386 == 0 && v4 != -1 || !((char)(v4 + 1 == 0)) && g_612386 != 0)
                {
                    if (g_612381 != 0)
                    {
                        __printf_chk(0x1, "%s==> %s <==\n", (unsigned int)(g_612290 == 0? "\n" : 4255388), sub_4047e0());
                        g_612290 = 0;
                    }
                    v26 = 0;
                    v11 = (unsigned int)sub_4047e0();
                    v6 = g_612385;
                    if (g_612385 != 0)
                    {
                        v109 = __fxstat(0x1, v100, (unsigned int)&v28);
                        if (v109 == 0)
                        {
                            v14 = g_612382;
                            if (g_612382 == 0)
                            {
                                if (g_612379 == 0 && ((unsigned short)v30 & 0xf000) == 0x8000)
                                {
                                    v117 = lseek(v4, 0x0, 0x1);
                                    if (v117 != -1)
                                    {
                                        v118 = lseek(v4, 0x0, 0x2);
                                        if (v117 < v26)
                                        {
                                            v26 = v118;
                                            v14 = v6;
                                            if (v26 != 0)
                                            {
                                                v14 = sub_404cd0();
                                            }
                                        }
                                        else
                                        {
                                            sub_404c20();
                                        }
                                    }
                                }
                                if (v117 == -1 || g_612379 != 0 || v117 >= v26 || ((unsigned short)v30 & 0xf000) != 0x8000)
                                {
                                    v126 = sub_409dd0();
                                    v126->field_2008 = 0;
                                    v126->field_2000 = 0;
                                    v126->field_2010 = 0;
                                    v5 = v126;
                                    v15 = v97;
                                    v135 = v126;
                                    v7 = 0;
                                    v136 = (unsigned long long)(unsigned int)sub_409dd0();
                                    while (true)
                                    {
                                        v139 = (unsigned int)sub_409780();
                                        if (v139 - 1 > -3)
                                        {
                                            break;
                                        }
                                        v136->field_2000 = v139;
                                        v140 = 0;
                                        v26 += v139;
                                        v136->field_2008 = 0;
                                        v136->field_2010 = 0;
                                        while (true)
                                        {
                                            v142 = v140 + 1;
                                            if (sub_40b730() == 0)
                                            {
                                                break;
                                            }
                                            v136->field_2008 = v140;
                                            v140 = v142;
                                        }
                                        v99 = v5->field_2000;
                                        v143 = v7 + v140;
                                        if (v139 + v5->field_2000 > 8191)
                                        {
                                            v5->field_2010 = v136;
                                            v7 -= v135->field_2008;
                                            if (v8 < v7 - v135->field_2008)
                                            {
                                                v5 = v136;
                                                v136 = v135;
                                                v135 = v135->field_2010;
                                            }
                                            else
                                            {
                                                v5 = v136;
                                                v7 = v7;
                                                v136 = (unsigned long long)(unsigned int)sub_409dd0();
                                            }
                                        }
                                        else
                                        {
                                            v144 = v5;
                                            v99 += v5;
                                            memcpy(v99, v136, v139);
                                            v7 = v143;
                                            v144->field_2000 = v144->field_2000 + v136->field_2000;
                                            v144->field_2008 = v144->field_2008 + v136->field_2008;
                                        }
                                    }
                                    v147 = v135;
                                    v97 = v15;
                                    free(v136);
                                    if (v139 + 1 != 0)
                                    {
                                        v151 = v5;
                                        v152 = v5->field_2000;
                                        v14 = v5->field_2000 == 0 | v8 == 0;
                                        if (v8 != 0 && v5->field_2000 != 0)
                                        {
                                            if (*((char *)(v151 + v152 - 1)) != g_612380)
                                            {
                                                v151->field_2008 = v151->field_2008 + 1;
                                                v7 += 1;
                                            }
                                            v156 = v99;
                                            v157 = v7 - v99->field_2008;
                                            if (v8 < v7 - v99->field_2008)
                                            {
                                                do
                                                {
                                                    v156 = v156->field_2010;
                                                    v160 = v157;
                                                    v157 -= v156->field_2008;
                                                }
                                                while (v8 < v157);
                                                v7 = v160;
                                            }
                                            v161 = v156;
                                            v164 = &(&v156->field_0)[v156->field_2000];
                                            if (v8 < v7)
                                            {
                                                v165 = v7 - v8;
                                                while (true)
                                                {
                                                    v166 = sub_40b730();
                                                    if (v166 != 0)
                                                    {
                                                        v161 = v166 + 1;
                                                        v165 -= 1;
                                                        if (v165 == 1)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        __assert_fail(); /* do not return */
                                                    }
                                                }
                                            }
                                            v167 = v164 + -0x1 * v161;
                                            if (v164 != v161)
                                            {
                                                sub_4048a0();
                                            }
                                            v169 = v156->field_2010;
                                            if (v156->field_2010 != 0)
                                            {
                                                do
                                                {
                                                    if (v169->field_2000 != 0)
                                                    {
                                                        sub_4048a0();
                                                    }
                                                    v169 = v169->field_2010;
                                                }
                                                while (v169 != 0);
                                            }
                                            v14 = v6;
                                        }
                                    }
                                    else
                                    {
                                        v154 = (unsigned int)sub_409510();
                                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
                                    }
                                    if (v8 == 0 || v5->field_2000 == 0 || v139 + 1 == 0)
                                    {
                                        v99 = v147;
                                    }
                                    if (v147 != 0 || v8 != 0 && v5->field_2000 != 0 && v139 + 1 != 0)
                                    {
                                        while (true)
                                        {
                                            v171 = v161->field_2010;
                                            free(v161);
                                            v161 = v171;
                                            if (v171 == 0)
                                            {
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v111 = sub_404920();
                                if ((unsigned int)v111 != 0)
                                {
                                    v14 = (unsigned int)v111 % 0x80000000;
                                }
                                else
                                {
                                    v26 += (unsigned int)sub_404a20();
                                }
                            }
                        }
                        else
                        {
                            v112 = (unsigned int)sub_409510();
                            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c497, 0x5));
                            v14 = 0;
                        }
                        v6 = v14;
                    }
                    else
                    {
                        v108 = __fxstat(0x1, v100, (unsigned int)&v28);
                        if (v108 == 0)
                        {
                            v6 = g_612382;
                            if (g_612382 != 0)
                            {
                                if (g_612379 == 0 && !((char)(v8 - 0 >> 63)))
                                {
                                    if (((unsigned short)v30 & 0xf000) == 0x8000)
                                    {
                                        v116 = sub_404c20();
                                    }
                                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || ((unsigned short)v30 & 0xf000) != 0x8000)
                                    {
                                        v119 = lseek(v4, v8, 0x1);
                                    }
                                    if ((((unsigned short)v30 & 0xf000) == 0x8000 || v119 + 1 != 0) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v119 + 1 != 0))
                                    {
                                        v26 += v8;
                                        v8 = -1;
                                    }
                                }
                                if ((char)(v8 - 0 >> 63) || g_612379 != 0 || (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && v119 + 1 == 0 || v119 + 1 == 0 && ((unsigned short)v30 & 0xf000) != 0x8000)
                                {
                                    v125 = sub_404b40();
                                    v8 = -1;
                                    if ((unsigned int)v125 != 0)
                                    {
                                        v6 = (unsigned int)v125 % 0x80000000;
                                    }
                                }
                            }
                            else
                            {
                                if (g_612379 == 0 && !((char)(v8 - 0 >> 63)))
                                {
                                    if (((unsigned short)v30 & 0xd000) == 0x8000)
                                    {
                                        v114 = v31;
                                        v115 = -1;
                                    }
                                    else
                                    {
                                        v115 = lseek(v4, 0 - v8, 0x2);
                                        if (v115 != -1)
                                        {
                                            v114 = v115 + v8;
                                        }
                                    }
                                    if (v114 > (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) && (((unsigned short)v30 & 0xd000) == 0x8000 || v115 != -1))
                                    {
                                        if (v115 == -1)
                                        {
                                            v115 = (unsigned int)sub_404c20();
                                        }
                                        if (v8 < v114 - v115 && v114 > v115)
                                        {
                                            v115 = v114 - v8;
                                            sub_404c20();
                                        }
                                        v26 = v115;
                                    }
                                }
                                if (((char)(v8 - 0 >> 63) || v114 <= (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) || v115 == -1 || g_612379 != 0) && ((char)(v8 - 0 >> 63) || v114 <= (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) || g_612379 != 0 || ((unsigned short)v30 & 0xd000) != 0x8000))
                                {
                                    v121 = 0;
                                    v122 = sub_409dd0();
                                    v122[0x400] = 0;
                                    v122[1025] = 0;
                                    v124 = v122;
                                    v5 = v97;
                                    v127 = v122;
                                    v128 = (unsigned long long)(unsigned int)sub_409dd0();
                                    while (true)
                                    {
                                        if (v7 - 1 > -3)
                                        {
                                            break;
                                        }
                                        v26 += *((long long *)&v7);
                                        v121 += *((long long *)&v7);
                                        v128[0x400] = *((long long *)&v7);
                                        v131 = v127[0x400];
                                        v128[1025] = 0;
                                        if (v7 + v131 > 8191)
                                        {
                                            v132 = v121 - v124[0x400];
                                            v127[1025] = v128;
                                            if (v8 < v121)
                                            {
                                                v121 = v132;
                                                v134 = v124;
                                                v124 = v124[1025];
                                            }
                                            else
                                            {
                                                v134 = sub_409dd0();
                                            }
                                        }
                                        else
                                        {
                                            memcpy((char *)v127 + v131, v128, *((long long *)&v7));
                                            v127[0x400] = v127[0x400] + v128[0x400];
                                            v134 = v128;
                                            v128 = v127;
                                        }
                                        v127 = v128;
                                        v128 = v134;
                                    }
                                    v137 = v128;
                                    *((int *)&v7) = sub_409780();
                                    v97 = v5;
                                    v138 = v124;
                                    free(v137);
                                    if (v7 + 1 == 0)
                                    {
                                        v153 = (unsigned int)sub_409510();
                                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
                                        v158 = v124;
                                    }
                                    else
                                    {
                                        while (true)
                                        {
                                            v148 = v138[0x400];
                                            v149 = v121 - v138[0x400];
                                            if (v8 >= v121 - v138[0x400])
                                            {
                                                break;
                                            }
                                            v138 = v138[1025];
                                            v121 = v149;
                                        }
                                        v150 = 0;
                                        if (v8 < v121)
                                        {
                                            v150 = v121 - v8;
                                        }
                                        v100 = v148 - v150;
                                        if (v148 != v150)
                                        {
                                            sub_4048a0();
                                        }
                                        while (true)
                                        {
                                            v138 = v138[1025];
                                            if (v138 != 0)
                                            {
                                                sub_4048a0();
                                            }
                                            else
                                            {
                                                v6 = 1;
                                                v158 = v124;
                                            }
                                        }
                                    }
                                    for (; v158 != 0; v158 = v162)
                                    {
                                        v162 = v158[1025];
                                        free(v158);
                                    }
                                }
                            }
                            if (g_612379 == 0 && g_612382 == 0 && !((char)(v8 - 0 >> 63)) && v114 > (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) && (((unsigned short)v30 & 0xd000) == 0x8000 || v115 != -1) || g_612379 == 0 && !((char)(v8 - 0 >> 63)) && g_612382 != 0 && (((unsigned short)v30 & 0xf000) == 0x8000 || v119 + 1 != 0) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v119 + 1 != 0) || g_612382 != 0 && ((char)(v8 - 0 >> 63) || v119 + 1 == 0 || g_612379 != 0) && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (char)(v8 - 0 >> 63) || g_612379 != 0 || ((unsigned short)v30 & 0xf000) != 0x8000) && (unsigned int)v125 == 0)
                            {
                                v26 += (unsigned int)sub_404a20();
                                v6 = 1;
                            }
                        }
                        else
                        {
                            v110 = (unsigned int)sub_409510();
                            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c497, 0x5));
                        }
                    }
                    if (g_612384 != 0)
                    {
                        v97->field_3c = (unsigned int)(char)v6 - 1;
                        v172 = __fxstat(0x1, v4, (unsigned int)&v28);
                        if (v172 >= 0)
                        {
                            if (((v30 & 0xf000) - 0x1000 & -0x2000) != 0 && ((unsigned short)v30 & 0xb000) != 0x8000)
                            {
                                v97->field_36 = 0;
                                v97->field_3c = -1;
                                v97->field_34 = (unsigned int)g_612386 ^ 1;
                                if ((g_612386 ^ 1) != 0)
                                {
                                    v180 = dcgettext(0x0, 0x40c2bc, 0x5);
                                }
                                sub_4047e0();
                                v182 = (unsigned int)sub_4095e0();
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d420, 0x5));
                            }
                            if ((char)v6 != 0 && (((v30 & 0xf000) - 0x1000 & -0x2000) == 0 || ((unsigned short)v30 & 0xb000) == 0x8000))
                            {
                                v97->field_30 = v30;
                                v97->field_34 = 0;
                                v97->field_38 = v4;
                                v97->field_8 = v26;
                                v97->field_40 = (v9 == 0? v17 : 1);
                                v97->field_10 = v34;
                                v97->field_58 = 0;
                                *((unsigned long long *)&v97->field_18) = v35;
                                v97->field_20 = v28;
                                v97->field_28 = v29;
                                sub_4047e0();
                                v97->field_35 = sub_405090();
                            }
                        }
                        else
                        {
                            v175 = __errno_location();
                            v97->field_3c = *(v175);
                            sub_4047e0();
                            v179 = (unsigned int)sub_409510();
                            error(0x0, *(v175), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
                        }
                        if ((char)v6 == 0 || v172 < 0 || ((v30 & 0xf000) - 0x1000 & -0x2000) != 0 && ((unsigned short)v30 & 0xb000) != 0x8000)
                        {
                            v97->field_34 = (unsigned int)g_612386 ^ 1;
                            sub_4047e0();
                            sub_404820();
                            v97->field_38 = -1;
                            v6 = 0;
                        }
                    }
                    else if (v9 != 0)
                    {
                        if (close(v4) != 0)
                        {
                            sub_4047e0();
                            v177 = (unsigned int)sub_409510();
                            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
                            v6 = 0;
                        }
                    }
                }
                v97 = &v97[1];
                v20 &= (char)v6;
            }
            while (v12 != v97);
            v11 = g_612384;
        }
        if (g_612384 != 0 && (v90 == 0 || g_6122a8 != 1))
        {
            v185 = v13;
            v186 = 0;
            do
            {
                v187 = strcmp(v185->field_0, "-");
                if (v187 == 0 && v185->field_34 == 0 && v185->field_38 >= 0)
                {
                    if (((unsigned short)v185->field_30 & 0xf000) != 0x1000)
                    {
                        v188 = sub_40b5b0();
                    }
                    if (((unsigned short)v185->field_30 & 0xf000) == 0x1000 || v188 != 0)
                    {
                        v185->field_38 = -1;
                        v185->field_34 = 1;
                    }
                }
                if (v185->field_38 < 0 || v187 != 0 || v185->field_34 != 0 || v188 == 0 && ((unsigned short)v185->field_30 & 0xf000) != 0x1000)
                {
                    v186 += 1;
                }
                v185 = &v185[1];
            }
            while (v12 != v185);
            if (v186 != 0)
            {
                v189 = __fxstat(0x1, 0x1, (unsigned int)&v26);
                if (v189 >= 0)
                {
                    v190 = 1;
                    if (((unsigned short)v27 & 0xf000) != 0x1000)
                    {
                        v190 = (char)(sub_40b5b0() != 0);
                    }
                    *((unsigned long long *)&g_612383) = v190;
                    g_612383 = g_612383 & 1;
                    if (g_612378 == 0)
                    {
                        v191 = v13;
                        while (true)
                        {
                            if (v191->field_34 == 0)
                            {
                                v192 = strcmp(v191->field_0, "-");
                                if (v192 == 0)
                                {
                                    break;
                                }
                            }
                            v191 = &v191[1];
                            v193 = 0;
                            while ((&v13->field_35)[v193] == 0 || *((int *)&((char *)&v13->field_0)[56 + v193]) < 0)
                            {
                                v193 += 96;
                                v194 = v13;
                                v195 = 0;
                                while (true)
                                {
                                    if (*((int *)&((char *)&v13->field_0)[56 + v195]) >= 0)
                                    {
                                        v196 = (&v194->field_35)[v195];
                                        if ((&v194->field_35)[v195] == 0)
                                        {
                                            *((unsigned long long *)&v5) = v196;
                                            v197 = v13;
                                            while (true)
                                            {
                                                v198 = __lxstat(0x1, v197->field_0, (unsigned int)&v28);
                                                if (((unsigned short)v30 & 0xf000) == 0xa000 && v198 == 0)
                                                {
                                                    break;
                                                }
                                                v197 = &v197[1];
                                                v199 = v13;
                                                v200 = 0;
                                                while (true)
                                                {
                                                    if (*((int *)&((char *)&v13->field_0)[56 + v200]) >= 0)
                                                    {
                                                        v201 = *((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000;
                                                        if (((unsigned short)*((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000) != 0x8000 && v201 != 0x1000)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    v200 += 96;
                                                    if (g_6122a8 == 2 && v20 == 0)
                                                    {
                                                        break;
                                                    }
                                                    v202 = inotify_init();
                                                    if ((unsigned int)v202 >= 0)
                                                    {
                                                        v203 = fflush_unlocked(stdout);
                                                        if (v203 == 0)
                                                        {
                                                            v6 = (unsigned int)sub_407060();
                                                            if (v6 != 0)
                                                            {
                                                                v4 = 0;
                                                                v204 = 0;
                                                                v205 = 0;
                                                                v8 = &v28;
                                                                v206 = v13;
                                                                v9 = (g_6122a8 != 1? 2 : 3078);
                                                                while (true)
                                                                {
                                                                    if (v206->field_34 == 0)
                                                                    {
                                                                        v207 = v206->field_0;
                                                                        v208 = -1;
                                                                        v209 = v206->field_0;
                                                                        while (v208 != 0)
                                                                        {
                                                                            v208 -= 1;
                                                                            v210 = *(v209);
                                                                            v209 = &v209[v89];
                                                                            break;
                                                                        }
                                                                        v206->field_44 = -1;
                                                                        v205 = (0 < !(rcx<8>) - 1? !(rcx<8>) - 1 : 0);
                                                                        if (g_6122a8 == 1)
                                                                        {
                                                                            v211 = (unsigned long long)(unsigned int)sub_406630();
                                                                            v14 = v100;
                                                                            v7 = *((char *)(v207 + v211));
                                                                            v206->field_50 = (unsigned int)sub_4066f0() + -0x1 * v207;
                                                                            *(v14) = 0;
                                                                            v213 = ".";
                                                                            if (v211 != 0)
                                                                            {
                                                                                v213 = v206->field_0;
                                                                            }
                                                                            v206->field_48 = inotify_add_watch(v202, v213, 0x784);
                                                                            v211[v206->field_0] = v7;
                                                                            if (v206->field_48 < 0)
                                                                            {
                                                                                v218 = __errno_location();
                                                                                if (*(v218) != 28)
                                                                                {
                                                                                    v220 = (unsigned int)sub_409510();
                                                                                    error(0x0, *(v218), (unsigned long long)dcgettext(0x0, 0x40d450, 0x5));
                                                                                }
                                                                            }
                                                                        }
                                                                        if (g_6122a8 != 1 || v206->field_48 >= 0)
                                                                        {
                                                                            v214 = inotify_add_watch(v202, v206->field_0, v9);
                                                                            *((unsigned long long *)&v206->field_44) = v214;
                                                                            if (v214 < 0)
                                                                            {
                                                                                v204 = (unsigned int)(v206->field_38 != -1? (unsigned int)v11 : 0);
                                                                                v216 = __errno_location();
                                                                                v217 = *(v216);
                                                                                if ((v217 & -17) != 12 && v217 != v206->field_3c)
                                                                                {
                                                                                    v7 = (unsigned int)sub_409510();
                                                                                    error(0x0, *(v216), (unsigned long long)dcgettext(0x0, 0x40c4c7, 0x5));
                                                                                }
                                                                            }
                                                                            else
                                                                            {
                                                                                if (sub_407800() == 0)
                                                                                {
                                                                                    break;
                                                                                }
                                                                                v4 = v11;
                                                                            }
                                                                        }
                                                                        if (((v217 & -17) == 12 || g_6122a8 == 1) && ((v217 & -17) == 12 || v206->field_48 < 0) && (v214 < 0 || g_6122a8 == 1) && (v214 < 0 || v206->field_48 < 0) && (*(v218) == 28 || g_6122a8 != 1 || v206->field_48 >= 0))
                                                                        {
                                                                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c4ab, 0x5));
                                                                        }
                                                                    }
                                                                    if (v206->field_34 != 0 || (v217 & -17) != 12 && g_6122a8 != 1 || (v217 & -17) != 12 && v206->field_48 >= 0 || v214 >= 0 && g_6122a8 != 1 || v214 >= 0 && v206->field_48 >= 0)
                                                                    {
                                                                        v206 = &v206[1];
                                                                    }
                                                                    if (g_6122a8 == 1 && v206->field_48 < 0 && v206->field_34 == 0 && *(v218) != 28 || v206->field_34 == 0 && ((v217 & -17) == 12 || g_6122a8 == 1) && ((v217 & -17) == 12 || v206->field_48 < 0) && (v214 < 0 || g_6122a8 == 1) && (v214 < 0 || v206->field_48 < 0) && (*(v218) == 28 || g_6122a8 != 1 || v206->field_48 >= 0) || g_6122a8 == 2 && v12 == v206 && ((v217 & -17) != 12 || v214 >= 0 || v206->field_34 != 0) && (g_6122a8 != 1 || v206->field_48 >= 0 || v206->field_34 != 0) && v204 != 0)
                                                                    {
                                                                        sub_4072a0();
                                                                        *(__errno_location()) = 0;
                                                                    }
                                                                    if (g_6122a8 == 2 && v12 == v206 && v204 == 0 && ((v217 & -17) != 12 || v214 >= 0 || v206->field_34 != 0) && (g_6122a8 != 1 || v206->field_48 >= 0 || v206->field_34 != 0) && v4 != 0 || v12 == v206 && ((v217 & -17) != 12 || v214 >= 0 || v206->field_34 != 0) && (g_6122a8 != 1 || v206->field_48 >= 0 || v206->field_34 != 0) && g_6122a8 != 2)
                                                                    {
                                                                        v219 = v13;
                                                                        v23 = &((struct struct_6 *)((char *)v13 + v16))[-1];
                                                                        while (true)
                                                                        {
                                                                            if (v219->field_34 == 0)
                                                                            {
                                                                                if (g_6122a8 == 1)
                                                                                {
                                                                                    sub_4056e0();
                                                                                }
                                                                                else if (v219->field_38 != -1)
                                                                                {
                                                                                    v222 = __xstat(0x1, v219->field_0, (unsigned int)&v28);
                                                                                    if (v222 == 0 && (v219->field_28 != v29 || v219->field_20 != v28))
                                                                                    {
                                                                                        sub_4047e0();
                                                                                        v227 = (unsigned int)sub_409510();
                                                                                        v270 = __errno_location();
                                                                                        error(0x0, *(v270), (unsigned long long)dcgettext(0x0, 0x40c4d7, 0x5));
                                                                                        sub_4072a0();
                                                                                        *(v270) = 0;
                                                                                    }
                                                                                }
                                                                                if ((v219->field_28 == v29 || v219->field_38 == -1 || g_6122a8 == 1 || v222 != 0) && (v219->field_20 == v28 || v219->field_38 == -1 || g_6122a8 == 1 || v222 != 0))
                                                                                {
                                                                                    sub_404f00();
                                                                                }
                                                                            }
                                                                            if (v219->field_38 == -1 || g_6122a8 == 1 || v222 != 0 || v219->field_34 != 0 || v219->field_28 == v29 && v219->field_20 == v28)
                                                                            {
                                                                                v219 = &v219[1];
                                                                                v8 = v205 + 17;
                                                                                v14 = 3;
                                                                                v7 = (unsigned long long)(unsigned int)sub_409dd0();
                                                                                v225 = 1 << ((char)v202 & 63);
                                                                                v4 = v202;
                                                                                while (true)
                                                                                {
                                                                                    if (g_612386 == 0)
                                                                                    {
                                                                                        v228 = sub_406bd0();
                                                                                        if (v228 == 0)
                                                                                        {
                                                                                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c4e7, 0x5));
                                                                                        }
                                                                                    }
                                                                                    while (true)
                                                                                    {
                                                                                        if (g_61237c != 0)
                                                                                        {
                                                                                            if (v5 == 0)
                                                                                            {
                                                                                                v229 = kill();
                                                                                                if (v229 != 0)
                                                                                                {
                                                                                                    v230 = __errno_location();
                                                                                                    if (*(v230) != 1)
                                                                                                    {
                                                                                                        v25 = 0;
                                                                                                        v24 = 0;
                                                                                                        v5 = v11;
                                                                                                    }
                                                                                                }
                                                                                                if (v229 == 0 || *(v230) == 1)
                                                                                                {
                                                                                                    v231 = 0;
                                                                                                    v232 = v10;
                                                                                                    v233 = 0;
                                                                                                    v234 = v10;
                                                                                                    v24 = v10;
                                                                                                    v236 = 0;
                                                                                                    v237 = 0x412e848000000000;
                                                                                                    v238 = xmm0<16> * (xmm3<16> - xmm0<16>);
                                                                                                    v25 = v238;
                                                                                                }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                exit(0x0); /* do not return */
                                                                                            }
                                                                                        }
                                                                                        if (v5 == 0 || g_61237c == 0)
                                                                                        {
                                                                                            v239 = 16;
                                                                                            for (v240 = &v28; v239 != 0; v240 = &v29)
                                                                                            {
                                                                                                v239 -= 1;
                                                                                                v28 = 0;
                                                                                            }
                                                                                            *((unsigned long long *)&((char *)stack_base)[8 * (unsigned long long)__fdelt_chk(v4) + -200]) = *((long long *)&((char *)stack_base)[8 * (unsigned long long)__fdelt_chk(v4) + -200]) | v225;
                                                                                            if (g_612383 != 0)
                                                                                            {
                                                                                                v28 |= 2;
                                                                                            }
                                                                                            v241 = select(((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, r13<8>, 0x0<64>, cc_ndep<8>)? (unsigned int)v202 : 1) + 1, &v28, NULL, NULL, (g_61237c != 0? &v24 : 0));
                                                                                            if (v101 != 0)
                                                                                            {
                                                                                                v101 = v241;
                                                                                                if ((char)(v241 + 1 == 0))
                                                                                                {
                                                                                                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d478, 0x5));
                                                                                                }
                                                                                                else if (((char)v28 & 2) != 0)
                                                                                                {
                                                                                                    raise(0xd);
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    v243 = sub_409780();
                                                                                                    if (v243 != -1 && v243 != 0)
                                                                                                    {
                                                                                                        v245 = v7[3];
                                                                                                        v246 = v7[1];
                                                                                                        *((unsigned int **)&v15[0]) = v7;
                                                                                                        v247 = *(v7);
                                                                                                        v248 = 0 + (unsigned long long)v7[3] + 16;
                                                                                                        if (v245 == 0 && ((unsigned short)v7[1] & 0x400) != 0)
                                                                                                        {
                                                                                                            v249 = 0;
                                                                                                            while (true)
                                                                                                            {
                                                                                                                if (v13[v249].field_48 != v33)
                                                                                                                {
                                                                                                                    v249 += 1;
                                                                                                                    if (v3 == v249)
                                                                                                                    {
                                                                                                                        break;
                                                                                                                    }
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    sub_4072a0();
                                                                                                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40d4a8, 0x5));
                                                                                                                    *(__errno_location()) = 0;
                                                                                                                }
                                                                                                            }
                                                                                                            if (v13[v249].field_48 != v33)
                                                                                                            {
                                                                                                                v33 = v247;
                                                                                                                v254 = (unsigned long long)(unsigned int)sub_406df0();
                                                                                                            }
                                                                                                            else if (v13[v249].field_48 == v33)
                                                                                                            {
                                                                                                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                                                                                v273 = v13;
                                                                                                            }
                                                                                                        }
                                                                                                        if (v245 != 0)
                                                                                                        {
                                                                                                            v17 = v248;
                                                                                                            v18 = &v28;
                                                                                                            v250 = 0;
                                                                                                            v251 = v202;
                                                                                                            v252 = v13;
                                                                                                            v19 = &v15[2];
                                                                                                            while (true)
                                                                                                            {
                                                                                                                if (v252->field_48 == v33)
                                                                                                                {
                                                                                                                    v21 = v246;
                                                                                                                    v253 = strcmp(v19, v252->field_50 + v252->field_0);
                                                                                                                    v246 = v21;
                                                                                                                    if (v253 == 0)
                                                                                                                    {
                                                                                                                        v202 = v251;
                                                                                                                        v254 = &v13[v250];
                                                                                                                        if (((unsigned short)v246 & 0x200) != 0)
                                                                                                                        {
                                                                                                                            if (g_6122a8 != 1)
                                                                                                                            {
                                                                                                                                break;
                                                                                                                            }
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                            v17 = inotify_add_watch(v202, v254->field_0, v9);
                                                                                                                            if (v17 < 0)
                                                                                                                            {
                                                                                                                                if ((*(v19) & -17) != 12)
                                                                                                                                {
                                                                                                                                    v19 = __errno_location();
                                                                                                                                    v18 = (unsigned int)sub_409510();
                                                                                                                                    error(0x0, *(v19), (unsigned long long)dcgettext(0x0, 0x40c4c7, 0x5));
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                    v4 = v19;
                                                                                                                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c4ab, 0x5));
                                                                                                                                    sub_4072a0();
                                                                                                                                    *(v4) = 0;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            if ((*(v19) & -17) != 12 || v17 >= 0)
                                                                                                                            {
                                                                                                                                v256 = v254->field_44;
                                                                                                                                if (v254->field_44 < 0 || v17 != (unsigned int)v256)
                                                                                                                                {
                                                                                                                                    if ((unsigned int)v256 >= 0)
                                                                                                                                    {
                                                                                                                                        inotify_rm_watch(v202, v256);
                                                                                                                                        sub_407840();
                                                                                                                                    }
                                                                                                                                    v254->field_44 = v17;
                                                                                                                                    if ((char)(v17 + 1 == 0))
                                                                                                                                    {
                                                                                                                                        break;
                                                                                                                                    }
                                                                                                                                    v258 = (unsigned long long)(unsigned int)sub_407840();
                                                                                                                                    if (v254 != v258 && v258 != 0)
                                                                                                                                    {
                                                                                                                                        if (g_6122a8 == 1)
                                                                                                                                        {
                                                                                                                                            v17 = v258;
                                                                                                                                            sub_4056e0();
                                                                                                                                            v258 = v17;
                                                                                                                                        }
                                                                                                                                        v258->field_44 = -1;
                                                                                                                                        v17 = v258;
                                                                                                                                        sub_4047e0();
                                                                                                                                        sub_404820();
                                                                                                                                    }
                                                                                                                                    v262 = sub_407800();
                                                                                                                                    if (v262 == 0)
                                                                                                                                    {
                                                                                                                                        break;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                if (g_6122a8 != 1)
                                                                                                                                {
                                                                                                                                    break;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                        if (g_6122a8 == 1 && (((unsigned short)v246 & 0x200) != 0 || (*(v19) & -17) != 12 || v17 >= 0))
                                                                                                                        {
                                                                                                                            sub_4056e0();
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                                if (v252->field_48 != v33 || v253 != 0)
                                                                                                                {
                                                                                                                    v250 += 1;
                                                                                                                    v252 = &v252[1];
                                                                                                                }
                                                                                                            }
                                                                                                            if (((unsigned short)v246 & 0x200) == 0 && v252->field_48 == v33 && v253 == 0 && (v254->field_44 < 0 || v17 != (unsigned int)v256) && ((*(v19) & -17) != 12 || v17 >= 0) && !((char)(v17 + 1 == 0)) && v258 != 0 && v254 != v258 && g_6122a8 != 1 || ((unsigned short)v246 & 0x200) == 0 && v252->field_48 == v33 && v253 == 0 && (v254->field_44 < 0 || v17 != (unsigned int)v256) && ((*(v19) & -17) != 12 || v17 >= 0) && !((char)(v17 + 1 == 0)) && v258 != 0 && v254 != v258 && g_6122a8 == 1 || ((unsigned short)v246 & 0x200) == 0 && v252->field_48 == v33 && v253 == 0 && (v254->field_44 < 0 || v17 != (unsigned int)v256) && ((*(v19) & -17) != 12 || v17 >= 0) && !((char)(v17 + 1 == 0)) && v258 == 0 || ((unsigned short)v246 & 0x200) == 0 && v252->field_48 == v33 && v253 == 0 && (v254->field_44 < 0 || v17 != (unsigned int)v256) && ((*(v19) & -17) != 12 || v17 >= 0) && !((char)(v17 + 1 == 0)) && v258 != 0 && v254 == v258)
                                                                                                            {
                                                                                                                sub_40a020(); /* do not return */
                                                                                                            }
                                                                                                            else if (((unsigned short)v246 & 0x200) == 0 && (*(v19) & -17) == 12 && v252->field_48 == v33 && v17 < 0 && v253 == 0)
                                                                                                            {
                                                                                                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                                                                                v273 = v13;
                                                                                                            }
                                                                                                            else if (...)
                                                                                                            {
                                                                                                                if (v254 == 0)
                                                                                                                {
                                                                                                                    break;
                                                                                                                }
                                                                                                            }
                                                                                                            else if (...)
                                                                                                            {
                                                                                                                v264 = v15[1];
                                                                                                            }
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            v33 = v247;
                                                                                                            v254 = (unsigned long long)(unsigned int)sub_406df0();
                                                                                                        }
                                                                                                        v264 = v15[1];
                                                                                                        if (((unsigned short)v15[1] & 3588) != 0)
                                                                                                        {
                                                                                                            if ((v264 & 4) != 0)
                                                                                                            {
                                                                                                                inotify_rm_watch(v202, v254->field_44);
                                                                                                                sub_407840();
                                                                                                            }
                                                                                                            sub_4056e0();
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            sub_404f00();
                                                                                                        }
                                                                                                    }
                                                                                                    if (v243 == -1)
                                                                                                    {
                                                                                                        v244 = __errno_location();
                                                                                                    }
                                                                                                    if (v14 != 0 && (v243 == -1 || v243 == 0) && (v243 == 0 || *(v244) == 22))
                                                                                                    {
                                                                                                        v14 -= 1;
                                                                                                        v8 *= 2;
                                                                                                        v7 = (unsigned int)sub_409e30();
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        if (v243 == -1 && ((char)v28 & 2) == 0 && !((char)(v241 + 1 == 0)) && v243 != 0 && v101 != 0 && *(v244) != 22 && (v5 == 0 || g_61237c == 0) || ((char)v28 & 2) == 0 && v14 == 0 && !((char)(v241 + 1 == 0)) && v101 != 0 && (v5 == 0 || g_61237c == 0) && (v243 == -1 || v243 == 0) && (v243 == 0 || *(v244) == 22))
                                                                                        {
                                                                                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c4fa, 0x5));
                                                                                        }
                                                                                    }
                                                                                    if (((char)v28 & 2) == 0 && !((char)(v241 + 1 == 0)) && v243 != -1 && v243 != 0 && v245 != 0)
                                                                                    {
                                                                                        sub_40a020(); /* do not return */
                                                                                    }
                                                                                    else if (((char)v28 & 2) == 0 && !((char)(v241 + 1 == 0)) && v243 != -1 && v243 != 0 && (v245 != 0 || ((unsigned short)v7[1] & 0x400) != 0))
                                                                                    {
                                                                                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                                                        v273 = v13;
                                                                                    }
                                                                                }
                                                                                if (g_612386 != 0 || g_6122a8 != 1 || v228 != 0)
                                                                                {
                                                                                    sub_40a020(); /* do not return */
                                                                                }
                                                                                else if (g_612386 != 0 || g_6122a8 != 1 || v228 != 0)
                                                                                {
                                                                                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                                                    v273 = v13;
                                                                                }
                                                                                else if (g_612386 == 0 && g_6122a8 == 1 && v228 == 0)
                                                                                {
                                                                                    v94 = 1;
                                                                                }
                                                                            }
                                                                        }
                                                                        if (v12 == v219)
                                                                        {
                                                                            sub_40a020(); /* do not return */
                                                                        }
                                                                        else if (v12 == v219 || v222 == 0 && v219->field_28 != v29 || v222 == 0 && v219->field_20 != v28)
                                                                        {
                                                                            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                                            v273 = v13;
                                                                        }
                                                                        else if (v12 == v219)
                                                                        {
                                                                            v94 = 1;
                                                                        }
                                                                    }
                                                                    if (g_6122a8 == 2 && v12 == v206 && v204 == 0 && ((v217 & -17) != 12 || v214 >= 0 || v206->field_34 != 0) && (g_6122a8 != 1 || v206->field_48 >= 0 || v206->field_34 != 0) && v4 == 0 || g_6122a8 == 2 && v12 == v206 && v204 == 0 && ((v217 & -17) != 12 || v214 >= 0 || v206->field_34 != 0) && (g_6122a8 != 1 || v206->field_48 >= 0 || v206->field_34 != 0) && v4 != 0 || v12 == v206 && ((v217 & -17) != 12 || v214 >= 0 || v206->field_34 != 0) && (g_6122a8 != 1 || v206->field_48 >= 0 || v206->field_34 != 0) && g_6122a8 != 2)
                                                                    {
                                                                        v94 = 1;
                                                                    }
                                                                }
                                                                if ((v12 == v206 || v206->field_34 == 0) && (v12 == v206 || v214 >= 0) && (v204 == 0 || v206->field_34 == 0 || g_6122a8 != 2) && (v12 == v206 || g_6122a8 != 1 || v206->field_48 >= 0) && (v204 == 0 || g_6122a8 != 2 || v214 >= 0) && (v206->field_34 == 0 || v4 != 0 || g_6122a8 != 2) && (v4 != 0 || g_6122a8 != 2 || v214 >= 0) && (v204 == 0 || g_6122a8 != 2 || g_6122a8 != 1 || v206->field_48 >= 0) && (v4 != 0 || g_6122a8 != 2 || g_6122a8 != 1 || v206->field_48 >= 0))
                                                                {
                                                                    sub_40a020(); /* do not return */
                                                                }
                                                                else if (v12 == v206 && (v204 == 0 || g_6122a8 != 2) && (v4 != 0 || g_6122a8 != 2) || g_6122a8 == 1 && v206->field_48 < 0 && v206->field_34 == 0 && *(v218) != 28 || v206->field_34 == 0 && ((v217 & -17) == 12 || g_6122a8 == 1) && ((v217 & -17) == 12 || v206->field_48 < 0) && (v214 < 0 || g_6122a8 == 1) && (v214 < 0 || v206->field_48 < 0) && (*(v218) == 28 || g_6122a8 != 1 || v206->field_48 >= 0) || g_6122a8 == 2 && v12 == v206 && v204 != 0)
                                                                {
                                                                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                                    v273 = v13;
                                                                }
                                                                else if (v12 == v206 && (v204 == 0 || g_6122a8 != 2))
                                                                {
                                                                    return v94;
                                                                }
                                                            }
                                                            sub_40a020(); /* do not return */
                                                        }
                                                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c276, 0x5));
                                                    }
                                                    if ((unsigned int)v202 < 0 || v203 == 0 && v6 != 0)
                                                    {
                                                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d4d8, 0x5));
                                                        v273 = v13;
                                                        do
                                                        {
                                                            v274 = v273->field_44;
                                                            if (v273->field_44 != -1)
                                                            {
                                                                inotify_rm_watch(v202, v274);
                                                            }
                                                            v275 = v273->field_48;
                                                            if (v273->field_48 != -1)
                                                            {
                                                                inotify_rm_watch(v202, v275);
                                                            }
                                                            v273 = &v273[1];
                                                        }
                                                        while (v12 != v273);
                                                    }
                                                }
                                                if (*((int *)&((char *)&v13->field_0)[56 + v200]) >= 0 && ((unsigned short)*((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000) != 0x8000 || v16 == v200 && (unsigned int)v202 >= 0 && (*((int *)&((char *)&v13->field_0)[56 + v200]) < 0 || ((unsigned short)*((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000) == 0x8000 || v201 == 0x1000) && (g_6122a8 != 2 || v20 != 0) && v203 == 0 && v6 != 0 || v16 == v200 && (*((int *)&((char *)&v13->field_0)[56 + v200]) < 0 || ((unsigned short)*((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000) == 0x8000 || v201 == 0x1000) && (g_6122a8 != 2 || v20 != 0) && (unsigned int)v202 < 0 || v16 == v200 && v20 == 0 && (*((int *)&((char *)&v13->field_0)[56 + v200]) < 0 || ((unsigned short)*((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000) == 0x8000 || v201 == 0x1000))
                                                {
                                                    g_612378 = 1;
                                                }
                                                else if (v16 == v200 && (unsigned int)v202 >= 0 && (*((int *)&((char *)&v13->field_0)[56 + v200]) < 0 || ((unsigned short)*((int *)&((char *)&v199->field_0)[48 + v200]) & 0xf000) == 0x8000 || v201 == 0x1000) && (g_6122a8 != 2 || v20 != 0) && v203 == 0 && v6 != 0)
                                                {
                                                    return v94;
                                                }
                                            }
                                            if (v198 == 0 || v12 == v197)
                                            {
                                                g_612378 = 1;
                                            }
                                            else if (v12 == v197 && (((unsigned short)v30 & 0xf000) != 0xa000 || v198 != 0))
                                            {
                                                return v94;
                                            }
                                        }
                                    }
                                    if (*((int *)&((char *)&v13->field_0)[56 + v195]) < 0 || (&v194->field_35)[v195] != 0)
                                    {
                                        v195 += 96;
                                        if (v16 == v195)
                                        {
                                            break;
                                        }
                                    }
                                }
                                if (true)
                                {
                                    g_612378 = 1;
                                }
                                else if ((&v194->field_35)[v195] == 0 && *((int *)&((char *)&v13->field_0)[56 + v195]) >= 0)
                                {
                                    return v94;
                                }
                            }
                            if (v16 == v193 || *((int *)&((char *)&v13->field_0)[56 + v193]) >= 0)
                            {
                                g_612378 = 1;
                            }
                            else if (v16 == v193 && ((&v13->field_35)[v193] == 0 || *((int *)&((char *)&v13->field_0)[56 + v193]) < 0))
                            {
                                return v94;
                            }
                        }
                        if (v191->field_34 == 0 || v12 == v191)
                        {
                            g_612378 = 1;
                        }
                        else if (v12 == v191 && (v192 != 0 || v191->field_34 != 0))
                        {
                            return v94;
                        }
                    }
                    g_612378 = 1;
                    if (g_6122a8 == 2 && v3 == 1)
                    {
                        v276 = v13;
                        if (v13->field_38 != -1)
                        {
                            v277 = 0;
                            v4 = v276->field_30;
                            v277 = (char)((v276->field_30 & 0xf000) != 0x8000);
                        }
                    }
                    v277 = 0;
                    v9 = 0;
                    v7 = (unsigned int)v277 & 1;
                    v5 = v3 - 1;
                    v6 = &(struct struct_6 *)((char *)v13 + v16)->field_34;
                    while (true)
                    {
                        v279 = v13;
                        v4 = 0;
                        v280 = 0;
                        while (true)
                        {
                            if (v279->field_34 == 0)
                            {
                                v281 = v279->field_38;
                                if (v279->field_38 >= 0)
                                {
                                    v283 = v279->field_30;
                                    v277 = v279->field_40;
                                    if ((unsigned int)v277 != v279->field_40)
                                    {
                                        v285 = sub_40a6a0();
                                        if ((unsigned int)v277 == 0 && (unsigned int)v285 >= 0)
                                        {
                                            v286 = v285;
                                            v287 = (char)v285 % 0x100 | 8;
                                            if ((unsigned int)v285 != rdx<4>)
                                            {
                                                v288 = sub_40a6a0();
                                            }
                                        }
                                        if ((unsigned int)v285 < 0 || v288 == -1 && (unsigned int)v277 == 0 && (unsigned int)v285 != rdx<4>)
                                        {
                                            v277 = __errno_location();
                                            if (((unsigned short)v279->field_30 & 0xf000) == 0x8000 && *((int *)v3) == 1)
                                            {
                                                v277 = v279->field_40;
                                            }
                                        }
                                        if ((unsigned int)v285 >= 0 && ((unsigned int)v285 == rdx<4> || v288 != -1 || (unsigned int)v277 != 0))
                                        {
                                            v279->field_40 = v277;
                                            v277 = v277;
                                        }
                                    }
                                }
                                else
                                {
                                    v280 += 1;
                                    v279 = &v279[1];
                                    sub_4056e0();
                                }
                            }
                            if (v279->field_34 == 0 && ((unsigned short)v279->field_30 & 0xf000) == 0x8000 && (unsigned int)v277 != v279->field_40 && v279->field_38 >= 0 && (v288 == -1 || (unsigned int)v285 < 0) && ((unsigned int)v277 == 0 || (unsigned int)v285 < 0) && ((unsigned int)v285 < 0 || (unsigned int)v285 != rdx<4>) && *((int *)v3) != 1 || v279->field_34 == 0 && (unsigned int)v277 != v279->field_40 && v279->field_38 >= 0 && (v288 == -1 || (unsigned int)v285 < 0) && ((unsigned int)v277 == 0 || (unsigned int)v285 < 0) && ((unsigned int)v285 < 0 || (unsigned int)v285 != rdx<4>) && ((unsigned short)v279->field_30 & 0xf000) != 0x8000)
                            {
                                v3 = v277;
                                v309 = (unsigned int)sub_4095e0();
                                error(0x1, *((int *)v3), (unsigned long long)dcgettext(0x0, 0x40d508, 0x5));
                            }
                            if (v279->field_34 == 0 && ((unsigned short)v279->field_30 & 0xf000) == 0x8000 && (unsigned int)v277 != v279->field_40 && v279->field_38 >= 0 && (v288 == -1 || (unsigned int)v285 < 0) && ((unsigned int)v277 == 0 || (unsigned int)v285 < 0) && ((unsigned int)v285 < 0 || (unsigned int)v285 != rdx<4>) && *((int *)v3) == 1 || v279->field_34 == 0 && (unsigned int)v277 != v279->field_40 && (unsigned int)v285 >= 0 && v279->field_38 >= 0 && ((unsigned int)v285 == rdx<4> || v288 != -1 || (unsigned int)v277 != 0) || v279->field_34 == 0 && v279->field_38 >= 0 && (unsigned int)v277 == v279->field_40)
                            {
                                if (v277 == 0)
                                {
                                    v289 = __fxstat(0x1, v281, (unsigned int)&v28);
                                    if (v289 != 0)
                                    {
                                        v279->field_38 = -1;
                                        v292 = __errno_location();
                                        v279->field_3c = *(v292);
                                        sub_4095e0();
                                        error(0x0, *(v292), "%s");
                                        close(v281);
                                    }
                                    else if (v279->field_30 != v30)
                                    {
                                        v290 = v34;
                                        v291 = v35;
                                    }
                                    else
                                    {
                                        v290 = v34;
                                        if (((unsigned short)v30 & 0xf000) == 0x8000 && v279->field_8 != v31)
                                        {
                                            v291 = v35;
                                        }
                                        if (v279->field_8 == v31 || ((unsigned short)v30 & 0xf000) != 0x8000)
                                        {
                                            v291 = v35;
                                            if (v279->field_10 == v34 && *((int *)&v279->field_18) == (unsigned int)v35)
                                            {
                                                v295 = v279->field_58;
                                                v279->field_58 = v279->field_58 + 1;
                                                if (g_6122a8 == 1 && v295 >= g_6122a0)
                                                {
                                                    sub_4056e0();
                                                    v279->field_58 = 0;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (((unsigned short)v30 & 0xf000) == 0x8000 && v279->field_30 == v30 && v289 == 0 && v277 == 0 && v279->field_8 != v31 || v279->field_10 == v34 && v279->field_30 == v30 && v289 == 0 && v277 == 0 && (v279->field_8 == v31 || ((unsigned short)v30 & 0xf000) != 0x8000) && *((int *)&v279->field_18) != (unsigned int)v35 || v279->field_30 == v30 && v289 == 0 && v277 == 0 && (v279->field_8 == v31 || ((unsigned short)v30 & 0xf000) != 0x8000) && v279->field_10 != v34 || v289 == 0 && v277 == 0 && v279->field_30 != v30)
                                {
                                    v279->field_10 = v290;
                                    *((unsigned long long *)&v279->field_18) = v291;
                                    v279->field_30 = v30;
                                    v279->field_58 = 0;
                                    if (v31 < v279->field_8 && (v283 & 0xf000) == 0x8000)
                                    {
                                        v8 = (unsigned int)sub_4095e0();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c263, 0x5));
                                        sub_404c20();
                                        v279->field_8 = 0;
                                    }
                                    if (v280 != v5)
                                    {
                                        v5 = v280;
                                        if (g_612381 != 0)
                                        {
                                            __printf_chk(0x1, "%s==> %s <==\n", (unsigned int)(g_612290 != 0? &g_40ee9c : "\n"), sub_4047e0());
                                            g_612290 = 0;
                                            v5 = v280;
                                        }
                                    }
                                }
                                if ((((unsigned short)v30 & 0xf000) == 0x8000 && v279->field_30 == v30 && v289 == 0 && v277 == 0 && v279->field_8 != v31 || v279->field_10 == v34 && v279->field_30 == v30 && v289 == 0 && v277 == 0 && (v279->field_8 == v31 || ((unsigned short)v30 & 0xf000) != 0x8000) && *((int *)&v279->field_18) != (unsigned int)v35 || v279->field_30 == v30 && v289 == 0 && v277 == 0 && (v279->field_8 == v31 || ((unsigned short)v30 & 0xf000) != 0x8000) && v279->field_10 != v34 || v289 == 0 && v277 == 0 && v279->field_30 != v30) && v279->field_35 == 0 || v277 != 0)
                                {
                                    v300 = sub_404a20();
                                    v279->field_8 = v279->field_8 + v300;
                                    v4 |= v300 != 0;
                                }
                            }
                            if (v279->field_38 >= 0 || ((unsigned short)v279->field_30 & 0xf000) == 0x8000 || *((int *)v3) == 1)
                            {
                                v280 += 1;
                                v279 = &v279[1];
                            }
                            if (...)
                            {
                                if (g_612386 == 0 || g_6122a8 != 1)
                                {
                                    v301 = &v13->field_34;
                                    while (v301->field_4 < 0 && (v301->field_0 == 1 || g_612386 == 0))
                                    {
                                        v301 = &v301[12];
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c4e7, 0x5));
                                    }
                                }
                                if (g_612383 == 0 && v7 == 0 && v4 == 1)
                                {
                                    break;
                                }
                                if (v7 != 0 || v4 != 1)
                                {
                                    v302 = fflush_unlocked(stdout);
                                    if (v302 != 0)
                                    {
                                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c276, 0x5));
                                    }
                                }
                                if (g_612383 != 0 && (v302 == 0 || v7 == 0) && (v302 == 0 || v4 == 1))
                                {
                                    v303 = 16;
                                    v25 = 0;
                                    v304 = &v28;
                                    for (v24 = 0; v303 != 0; v304 = &v29)
                                    {
                                        v303 -= 1;
                                        v28 = 0;
                                    }
                                    v28 |= 2;
                                    v305 = select(0x2, &v28, NULL, NULL, &v24);
                                    if (v305 == 1)
                                    {
                                        raise(0xd);
                                    }
                                }
                                if (v302 == 0 && v7 != 0 || v302 == 0 && v4 != 1 || v7 == 0 && v4 == 1 && g_612383 != 0)
                                {
                                    if (v4 != 0 || v9 != 0)
                                    {
                                        break;
                                    }
                                    if (g_61237c != 0)
                                    {
                                        v306 = kill();
                                        if (v306 != 0)
                                        {
                                            v307 = __errno_location();
                                            if (*(v307) != 1)
                                            {
                                                v9 = v11;
                                            }
                                        }
                                    }
                                    if (v306 == 0 || g_61237c == 0 || *(v307) == 1)
                                    {
                                        if (sub_40a160() == 0)
                                        {
                                            break;
                                        }
                                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c516, 0x5));
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            v279 = v13;
                            v4 = 0;
                            v280 = 0;
                        }
                    }
                }
                else
                {
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c206, 0x5));
                }
            }
        }
        if (v186 == 0 && v90 == 0 && g_612384 != 0 || g_612384 == 0 && v90 == 0 && v22 != 0 || g_612384 == 0 && v90 == 0 && g_612382 != 0 || v186 == 0 && g_6122a8 != 1 && g_612384 != 0 || g_612384 == 0 && v22 != 0 && g_6122a8 != 1 || g_612384 == 0 && g_6122a8 != 1 && g_612382 != 0 || v90 == 0 && g_612384 != 0 && v189 >= 0 || g_6122a8 != 1 && g_612384 != 0 && v189 >= 0)
        {
            v94 = (unsigned int)v20 ^ 1;
        }
        if (close(0x0) < 0 && (v90 == 0 || g_6122a8 != 1) && (v186 == 0 || g_612384 == 0 || v189 >= 0) && (v22 != 0 || g_612384 != 0 || g_612382 != 0))
        {
            error(0x1, *(__errno_location()), "-");
        }
        if (v186 == 0 && v90 == 0 || g_612384 == 0 && v90 == 0 || v186 == 0 && g_6122a8 != 1 || g_612384 == 0 && g_6122a8 != 1 || v90 == 0 && v189 >= 0 || g_6122a8 != 1 && v189 >= 0)
        {
            return v94;
        }
    }
}

int sub_40a060()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    v2 = sub_40a260();
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
        sub_409760();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: %s");
    }
}

int sub_4090b0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_409fd0();
}

int sub_406880()
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

extern unsigned int g_40ee40;
extern unsigned int g_40ee81;

int sub_40aee0()
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
    unsigned long v26;  // rax
    unsigned long|unsigned int v27;  // rdx
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
    unsigned long long|unsigned int v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long|unsigned int v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char *|char [2] v50;  // r15
    char v51[3];  // rax
    unsigned int v52;  // ecx
    char v53[2];  // r8
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
                        sub_40a7e0();
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
                            sub_40a7e0();
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
        v45 = (unsigned int)sub_40a8c0();
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
                        dcgettext(0x0, 0x40ee40, 0x5);
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
            dcgettext(0x0, 0x40ee81, 0x5);
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
                    dcgettext(0x0, 0x40ee40, 0x5);
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
        v45 = (unsigned int)sub_40a8c0();
    }
    v63 = v45;
    return v63;
}

extern unsigned int g_6124f8;

int sub_40a6a0()
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
        if (g_6124f8 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40a6a0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_6124f8 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_6124f8 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40a6a0();
        }
        if ((g_6124f8 < 0 || *(v12) == 22) && (g_6124f8 < 0 || (unsigned int)v15 < 0) && (g_6124f8 == -1 || g_6124f8 >= 0) && (g_6124f8 < 0 || (unsigned int)v15 >= 0) && (g_6124f8 >= 0 || (unsigned int)v15 >= 0))
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

int sub_40a0ed()
{
}

int sub_409520()
{
}

int sub_40a000()
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
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40ed78;
extern unsigned int g_40ed98;
extern unsigned int g_40edc8;
extern unsigned int g_40ede8;
extern unsigned int g_40ee18;
extern unsigned long long stderr;

int sub_40a8c0()
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
                                dcgettext(0x0, 0x40ed78, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40ed98, 0x5);
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
                                dcgettext(0x0, 0x40ee18, 0x5);
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
                            dcgettext(0x0, 0x40ede8, 0x5);
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
            dcgettext(0x0, 0x40edc8, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_406690()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_406630();
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

extern uint128_t g_6124c0;
extern uint128_t g_6124d0;
extern uint128_t g_6124e0;
extern unsigned long long g_6124f0;

int sub_409650()
{
    void|unsigned int v0;  // [bp-0x48]
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
        return sub_408f10();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_409f80()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409dd0();
}

int sub_409430()
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
    return sub_408f10();
}

int sub_4071f0()
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

int sub_4097e0()
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
    char padding_0[68];
    unsigned int field_44;
} struct_0;

int sub_4047d0()
{
    struct_0 *v1;  // rsi
    unsigned long long v2;  // rax
    struct_0 *v3;  // rdi
    char v4;  // al

    v2 = v1->field_44;
    v4 = v3->field_44 == v1->field_44;
    return rax<8>;
}

int sub_409740()
{
}

extern unsigned int g_40c1f3;

int sub_404820()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned int v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r12

    if ((unsigned int)(v4 + 1) <= 1)
    {
        return v4 + 1;
    }
    v2 = v5;
    v1 = stack_base + 0;
    v0 = v6;
    v7 = close(v4);
    if ((unsigned int)v7 == 0)
    {
        v8 = v0;
        v9 = v2;
        return v7;
    }
    sub_409510();
    dcgettext(0x0, 0x40c1f3, 0x5);
    __errno_location();
}

extern unsigned int g_40d7ff;
extern unsigned long long g_612388;

int sub_406500()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rsi
    unsigned long v3;  // rdi

    v1 = g_612388;
    if (g_612388 == 0)
    {
        v1 = newlocale(0x1fbf, 0x40d7ff, 0x0);
        g_612388 = v1;
    }
    if (g_612388 == 0)
    {
        if (v2 != 0)
        {
            *(v2) = v3;
        }
        return v1;
    }
}

int sub_404c20()
{
    unsigned int v1;  // edi
    unsigned int v2;  // esi
    unsigned int v3;  // edx
    unsigned long long v5;  // r13
    unsigned long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        return lseek(v1, v2, v3);
    }
    v5 = (unsigned int)sub_407a20();
    if ((unsigned int)v7 != 1)
    {
        v9 = (unsigned int)sub_4095e0();
    }
    else
    {
        v8 = (unsigned int)sub_4095e0();
    }
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v2, 0x5));
    exit(0x1); /* do not return */
}

extern unsigned int g_40c227;

int sub_404920()
{
    unsigned int v0;  // [bp-0x203c]
    unsigned long long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // r13
    unsigned long long v12;  // rcx
    unsigned long long v14;  // r12
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbp
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdi
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbp
    unsigned long long v25;  // rbx
    unsigned long long v26;  // r12
    unsigned long long v27;  // r13
    unsigned long long v28;  // r14
    unsigned long long v29;  // r15

    if (v8 != 0)
    {
        v6 = v9;
        v5 = v10;
        v4 = v11;
        v3 = v14;
        v2 = stack_base + 0;
        v1 = v15;
        v20 = v8;
        while (true)
        {
            v16 = sub_409780();
            if (v16 == 0)
            {
                v21 = -18446744069414584321;
            }
            else if (v16 != -1)
            {
                *((unsigned long long *)v12) = *((long long *)v12) + v16;
                v17 = stack_base + -8248 + v16;
                while (true)
                {
                    v18 = sub_40b730();
                    if (v18 == 0)
                    {
                        break;
                    }
                    v19 = v18 + 1;
                    v20 -= 1;
                    v21 = 0;
                    if (v17 <= v19 || v17 - v19 == v19)
                    {
                        break;
                    }
                    v0 = 0;
                    sub_4048a0();
                    v21 = v0;
                }
                if (true)
                {
                    v16 = sub_409780();
                }
                else if (v20 == 1 && v18 != 0)
                {
                    v25 = v1;
                    v26 = v3;
                    v27 = v4;
                    v28 = v5;
                    v29 = v6;
                    return v21;
                }
            }
            else
            {
                v22 = (unsigned int)sub_409510();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
                v21 = 1;
            }
        }
        v25 = v1;
        v26 = v3;
        v27 = v4;
        v28 = v5;
        v29 = v6;
        return v21;
    }
    return 0;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_406a60()
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
                        v8 = sub_406890();
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
                    v13 = (unsigned long long)(unsigned int)sub_406890();
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

int sub_4093f0()
{
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_406bb0()
{
    struct_0 *v1;  // rdi

    return v1->field_10;
}

int sub_404a20() { crash_skku;
}
typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40ee9c;
extern char g_612538[2];

int sub_40ba70()
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
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_612538;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40ee9c : (unsigned long long)nl_langinfo(0xe));
    if (g_612538 == 0)
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
            v9 = &g_40ee9c;
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v60 = __uflow(v10);
                        }
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
                                    v9 = &g_40ee9c;
                                    v10 = (tmp_10 == 0? &g_40ee9c : tmp_10);
                                    free(NULL);
                                    sub_40bff0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32)
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
                        if (v61 == -1 && (unsigned int)v26 == 35 || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v28 <= 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32)
                        {
                            v10 = (tmp_10 == 0? &g_40ee9c : tmp_10);
                            sub_40bff0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1)
                    {
                        v9 = &g_40ee9c;
                    }
                    else if (((unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0 || ((unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40ee9c;
            free(v17);
        }
        *((char *[2])&g_612538[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40ee9c : tmp_10), v9);
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

int sub_4096d0()
{
}

extern unsigned int g_40e9ef;
extern unsigned int g_6122c0;

int sub_40a020()
{
    dcgettext(0x0, 0x40e9ef, 0x5);
    error(g_6122c0, 0x0, "%s");
}

extern char g_612390;

int sub_406580()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_612390 = v1;
    return v2;
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_406bd0()
{
    struct_0 *v1;  // rdi

    return v1->field_20;
}

extern char g_612368;
extern unsigned long long g_612370;

int sub_404761()
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
        return sub_40470b();
    }
    return v4;
}

int sub_40a130()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_40a060();
}

typedef struct struct_0 {
    char padding_0[68];
    unsigned int field_44;
} struct_0;

int sub_4047c0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT (int)v1->field_44) % v2 >> 64;
}

int sub_409e20()
{
}

int sub_406440()
{
    unsigned long long v1;  // rax

    v1 = sub_406180();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_4062a0();
        sub_406320();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406be0()
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

int sub_409e30()
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
            sub_40a020(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_40c5e8;

int sub_405090()
{
    unsigned long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned int *v7;  // rbp
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r12
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbx
    unsigned long long v19;  // r12

    v2 = v4;
    v1 = v5;
    v6 = fstatfs();
    if (v6 != 0)
    {
        v5 = 1;
        v7 = __errno_location();
        if (*(v7) != 38)
        {
            v8 = (unsigned int)sub_409510();
            error(0x0, *(v7), (unsigned long long)dcgettext(0x0, 0x40c5e8, 0x5));
            v9 = v1;
            v10 = v2;
            return 1;
        }
    }
    else if (v0 != 352400198)
    {
        if (v0 <= 352400198)
        {
            if (v0 != 29366)
            {
                if (v0 <= 29366)
                {
                    if (v0 != 13364)
                    {
                        if (v0 <= 13364)
                        {
                            if (v0 != 4989)
                            {
                                if (v0 <= 4989)
                                {
                                    if (v0 != 391)
                                    {
                                        if (v0 <= 391)
                                        {
                                            v11 = v5;
                                            v12 = v1;
                                            v13 = v2;
                                            return v11;
                                        }
                                        else if (v0 != 1984)
                                        {
                                            v5 = (char)(v0 != 4979);
                                        }
                                    }
                                }
                                else
                                {
                                    if (v0 != 7377)
                                    {
                                        if (v0 <= 7377)
                                        {
                                            if (v0 != 4991)
                                            {
                                                v5 = (char)(v0 != 5007);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 9320)
                                            {
                                                v5 = (char)(v0 != 9336);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (v0 != 18475)
                            {
                                if (v0 <= 18475)
                                {
                                    if (v0 != 16388)
                                    {
                                        if (v0 <= 16388)
                                        {
                                            v5 = (char)(v0 != 0x4000);
                                        }
                                        else if (v0 != 16390)
                                        {
                                            v5 = (char)(v0 != 16964);
                                        }
                                    }
                                }
                                else
                                {
                                    if (v0 != 19802)
                                    {
                                        if (v0 <= 19802)
                                        {
                                            if (v0 != 18520)
                                            {
                                                v5 = (char)(v0 != 19780);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 24053)
                                            {
                                                v5 = (char)(v0 != 29301);
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
                    if (v0 != 4278867)
                    {
                        if (v0 <= 4278867)
                        {
                            if (v0 != 44543)
                            {
                                if (v0 <= 44543)
                                {
                                    if (!(v0 <= 40866))
                                    {
                                        v5 = (char)(v0 != 44533);
                                    }
                                    else if (v0 < 40864)
                                    {
                                        v5 = (char)(v0 != 38496);
                                    }
                                }
                                else
                                {
                                    if (v0 != 61791)
                                    {
                                        if (v0 <= 61791)
                                        {
                                            if (v0 != 61265)
                                            {
                                                v5 = (char)(v0 != 61267);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 72020)
                                            {
                                                v5 = (char)(v0 != 2613483);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (v0 <= 19920823)
                            {
                                if (v0 < 19920820 && v0 != 16914836)
                                {
                                    if (v0 <= 16914836)
                                    {
                                        v5 = (char)(v0 != 12648430);
                                    }
                                    else if (v0 != 16914839)
                                    {
                                        v5 = (char)(v0 != 19911021);
                                    }
                                }
                            }
                            else
                            {
                                if (v0 != 195894762)
                                {
                                    if (v0 <= 195894762)
                                    {
                                        if (v0 != 124082209)
                                        {
                                            v5 = (char)(v0 != 151263540);
                                        }
                                    }
                                    else
                                    {
                                        if (v0 != 288389204)
                                        {
                                            v5 = (char)(v0 != 325456742);
                                        }
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
            if (v0 != 1650746742)
            {
                if (v0 <= 1650746742)
                {
                    if (v0 != 1161678120)
                    {
                        if (v0 <= 1161678120)
                        {
                            if (v0 != 732765674)
                            {
                                if (v0 <= 732765674)
                                {
                                    if (v0 != 464386766)
                                    {
                                        if (v0 <= 464386766)
                                        {
                                            v14 = v5;
                                            v15 = v1;
                                            v16 = v2;
                                            return v14;
                                        }
                                        else if (v0 != 604313861)
                                        {
                                            v5 = (char)(v0 != 684539205);
                                        }
                                    }
                                }
                                else
                                {
                                    if (v0 != 1111905073)
                                    {
                                        if (v0 <= 1111905073)
                                        {
                                            if (v0 != 801189825)
                                            {
                                                v5 = (char)(v0 != 827541066);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 1112100429)
                                            {
                                                v5 = (char)(v0 != 1128357203);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (v0 != 0x54190100)
                            {
                                if (v0 <= 0x54190100)
                                {
                                    if (v0 != 1397114950)
                                    {
                                        if (v0 <= 1397114950)
                                        {
                                            if (v0 != 1382369651)
                                            {
                                                v5 = (char)(v0 != 1397109069);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 1397118030)
                                            {
                                                v5 = (char)(v0 != 1397703499);
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    if (v0 != 1481003842)
                                    {
                                        if (v0 <= 1481003842)
                                        {
                                            if (v0 != 1448756819)
                                            {
                                                v5 = (char)(v0 != 1479104553);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 1513908720)
                                            {
                                                v5 = (char)(v0 != 1634035564);
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
                    if (v0 != 1936880249)
                    {
                        if (v0 <= 1936880249)
                        {
                            if (v0 != 1684300152)
                            {
                                if (v0 <= 1684300152)
                                {
                                    if (v0 != 1650812274)
                                    {
                                        if (v0 <= 1650812274)
                                        {
                                            v5 = (char)(v0 != 1650812272);
                                        }
                                        else if (v0 != 1667723888)
                                        {
                                            v5 = (char)(v0 != 1684170528);
                                        }
                                    }
                                }
                                else
                                {
                                    if (v0 != 1853056627)
                                    {
                                        if (v0 <= 1853056627)
                                        {
                                            if (v0 != 1733912937)
                                            {
                                                v5 = (char)(v0 != 1746473250);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 1935894131)
                                            {
                                                v5 = (char)(v0 != 1936814952);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (v0 != 3380511080)
                            {
                                if (v0 <= 3380511080)
                                {
                                    if (v0 != 2435016766)
                                    {
                                        if (v0 <= 2435016766)
                                        {
                                            if (v0 != 1953653091)
                                            {
                                                v5 = (char)(v0 != 2240043254);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != 2508478710)
                                            {
                                                v5 = (char)(v0 != 2881100148);
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    if (v0 != -18446744069633400816)
                                    {
                                        if (v0 <= -18446744069633400816)
                                        {
                                            if (v0 != 3405662737)
                                            {
                                                v5 = (char)(v0 != 3730735588);
                                            }
                                        }
                                        else
                                        {
                                            if (v0 != -18446744069523832948)
                                            {
                                                v5 = (char)(v0 != -18446744069522200503);
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
    if (...)
    {
        v5 = 0;
    }
    if (...)
    {
        v17 = v5;
        v18 = v1;
        v19 = v2;
        return v17;
    }
}

int sub_409ea0() { crash_skku;
}
extern unsigned long long g_611e30;

int sub_40c198()
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_409c30()
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
    return sub_409830();
}

int sub_4093c0()
{
}

int sub_409410()
{
}

int sub_406df0()
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
        v6 = sub_406890();
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

int sub_40b510()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40b4b0();
}

int sub_409e70()
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
        sub_40a020(); /* do not return */
    }
}

extern unsigned int g_40d7dd;
extern unsigned long long stderr[7];

int sub_406320()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d7dd, 0x5), stderr);
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
                    sub_409760();
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
                sub_409760();
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

int sub_409780() { crash_skku;
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

int sub_407380()
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
                v2 = (unsigned int)sub_4067d0();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_406a60();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_406a60();
                    if (v22 != 0)
                    {
                        v23 = sub_406a60();
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
    if (v11->field_10 != *((long long *)&v2) || (char)v21 != 0)
    {
        v24 = v21;
        return v24;
    }
}

extern unsigned long long g_40ee9c;

int sub_40b6b0()
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
        v5 = &g_40ee9c;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40ba10() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
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

int sub_408f10()
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
                v16 = sub_409e30();
                g_612318 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_409e30();
                v17 = v15;
                g_612318 = v15;
                *(v15) = g_612320;
            }
            memset(&v17[(long long)(int)g_612330], 0x0, (int)((unsigned int)v13 + 1 - g_612330) * 16);
            g_612330 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_40a020(); /* do not return */
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
        v21 = sub_407ce0();
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
            v20 = (unsigned long long)(unsigned int)sub_409dd0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_407ce0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_40a260()
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4254264)); */
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
            case 18: case 50:
                v37 = v30;
                v5 = 4;
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
            case 23:
                v39 = v30;
                v5 = 8;
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
        v31 = 1;
        v30 = 0x400;
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

int sub_4067d0()
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

int sub_409212()
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

int sub_40b950()
{
    unsigned long long v1;  // xmm0lq
    unsigned long long v2;  // rsi
    uint128_t v3;  // xmm1
    unsigned long long v4;  // rcx
    unsigned long long v5;  // xmm1lq
    void v6;  // xmm0
    uint128_t v7;  // xmm0
    char v8;  // cl

    if (!((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1))
    {
        return 0x8000000000000000;
    }
    else if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1)
    {
        return 9223372036854775807;
    }
    v2 = v1;
    v3 = 0;
    v4 = 0;
    v5 = v1;
    v7 = (v6 - xmm1<16>) * 0x41cdcd6500000000;
    v8 = (((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 0 | (unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6) & 1) == 0;
    if (!((char)(rcx<8> + v7 - (((unsigned long long)((rcx<8> + v7) * 1237940039285380275 >> 64) >> 26) - (rcx<8> + v7 >> 63)) * 0x3b9aca00 >> 63)))
    {
        return ((unsigned long long)((rcx<8> + v7) * 1237940039285380275 >> 64) >> 26) - (rcx<8> + v7 >> 63) + v2;
    }
    return ((unsigned long long)((rcx<8> + v7) * 1237940039285380275 >> 64) >> 26) - (rcx<8> + v7 >> 63) + v2 - 1;
}

int sub_409710()
{
}

int sub_40a04c()
{
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_407a20()
{
    struct_0 *v1;  // rsi
    char *v2;  // rcx
    char *v3;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx

    v2 = &v1->field_14;
    v1->field_14 = 0;
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
    {
        do
        {
            v2 = &v2[-1];
            v8 = v8 * 14757395258967641293 >> 64 >> 3;
            *(v2) = (unsigned int)(v8 - (v8 * 14757395258967641293 >> 64 >> 3) * 10) + 48;
        }
        while (v8 != 0);
        return v2;
    }
    while (true)
    {
        v3 = &v2[-1];
        v7 = ((unsigned long long)(rdi<8> * 7378697629483820647 >> 64) >> 2) - (rdi<8> >> 63);
        *((unsigned long long *)&v2[-1]) = 48 + (((unsigned long long)(rdi<8> * 7378697629483820647 >> 64) >> 2) - (rdi<8> >> 63)) * 10 - rdi<8>;
        if (((unsigned long long)(rdi<8> * 7378697629483820647 >> 64) >> 2) - (rdi<8> >> 63) == 0)
        {
            break;
        }
        v2 = v3;
    }
    v9 = &v2[-2];
    v2[-1] = 45;
    return v9;
}

int sub_406780()
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
    return sub_4097e0();
}

int sub_4095e0()
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
    return sub_408f10();
}

extern char g_6124c0;

int sub_409170()
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

extern int512_t g_6124c0;

int sub_409110()
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

extern unsigned int g_40c216;
extern unsigned long long stdout;

int sub_4048a0()
{
    void *v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v3 = fwrite_unlocked(v1, 0x1, v2, stdout);
    if (v2 <= v3)
    {
        return v3;
    }
    clearerr_unlocked(stdout);
    v4 = (unsigned int)sub_409510();
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c216, 0x5));
}

extern int512_t g_612288;

int sub_40c180()
{
}

int sub_40a160()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v3;  // rdx
    unsigned long long v5;  // rax

    v0 = (unsigned int)sub_40b950();
    v1 = v3;
    while (true)
    {
        *(__errno_location()) = 0;
        v5 = sub_40b840();
        if ((unsigned int)v5 != 0)
        {
            return -18446744069414584321;
        }
        return v5;
    }
}

int sub_406f10()
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

int sub_407ce0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long v3;  // [bp-0xd8]
    unsigned long|unsigned long long|char v4;  // [bp-0xc0]
    unsigned long|unsigned long long|char v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char v9;  // [bp-0x98]
    unsigned long|unsigned long long v10;  // [bp-0x90]
    unsigned long long|unsigned int v11;  // [bp-0x88]
    unsigned long long|unsigned int v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    unsigned int v16;  // [bp-0x60]
    char v17;  // [bp-0x5c]
    unsigned long long|char v18;  // [bp-0x5b]
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
    unsigned long|unsigned long long|char v33;  // r10
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
    unsigned long long|unsigned int v77;  // rsi
    unsigned long long|unsigned int v78;  // r13
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
    unsigned long long|char v89;  // rdx
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
            v26 = (unsigned int)sub_407be0();
            v27 = (unsigned long long)(unsigned int)sub_407be0();
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
                                    if ((((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0 || v77 > v76))
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
                                    v50 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                    if (v25 != 0)
                                    {
                                        v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                        v89 = (unsigned int)v39 == 2;
                                    }
                                    if (v25 == 0 || ((char)((unsigned long long)v25[v40 >> 5] >> ((char)v40 & 31)) & 1) == 0)
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
                                    }
                                    if (((char)((unsigned long long)v25[v40 >> 5] >> ((char)v40 & 31)) & 1) != 0 || v5 != 0)
                                    {
                                        v87 = v89;
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
                                        *((unsigned long long *)&v4) = v4 & v87;
                                        if (v79 > v76)
                                        {
                                            *((char *)(v29 + v76)) = 92;
                                        }
                                        v76 += 1;
                                        v80 += 1;
                                    }
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
                        v89 = (unsigned int)v39 == 2;
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
                        if (v17 != 0)
                        {
                            break;
                        }
                        else
                        {
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            v78 = 0;
                        }
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
                            v76 = (unsigned int)sub_407ce0();
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
                    v46 = sub_40b6b0();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
                    {
                        if ((int)v10 == 2 && v46 != 1 && v17 != 0)
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
                v49 = 0;
                v55 = 0;
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
            if (...)
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_407ce0();
            }
            if (v17 == 0 && (v25 != 0 || v5 != 0) && (((char)((unsigned long long)v25[v40 >> 5] >> ((char)v40 & 31)) & 1) != 0 || v5 != 0) || v5 == 0 && (v25 == 0 || ((char)((unsigned long long)v25[v40 >> 5] >> ((char)v40 & 31)) & 1) == 0) || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (...)
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

int sub_406180()
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
            if ((v13 == 0 || *((long long *)(v5 + (v12 << 3))) == 0) && (v0 == -1 || *((long long *)(v5 + (v12 << 3))) == 0) && (v13 != 0 || v14 != v11) && (*((long long *)(v5 + (v12 << 3))) != 0 || v13 != 0 || v0 != -1))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
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

int sub_40c0b0()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_406870;
extern int512_t g_406880;
extern int512_t g_40d880;

int sub_407060()
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
            v4 = sub_4069e0();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_40d880;
            v3 = sub_4069e0();
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
            v13 = (unsigned int)sub_4067d0();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_406870 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_406880 : v17);
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406c30()
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

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_4068c0()
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
        v7 = sub_406890();
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

int sub_4095a0()
{
}

int sub_40b550()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40aee0();
}

int sub_406f80()
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

int sub_40b530()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b4b0();
}

int sub_4064b0()
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

int sub_406630()
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
    v5 = sub_4066f0();
    v6 = v5 + -0x1 * v3;
    if (v5 + -0x1 * v3 > rbp<8>)
    {
        if (*((char *)(v5 - 1)) == 47)
        {
            for (v8 = v6 - 1; rbp<8> != v8; v8 = v7)
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
    if (v5 + -0x1 * v3 <= rbp<8> || *((char *)(v5 - 1)) != 47)
    {
        return v6;
    }
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

int sub_407840()
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
    if (sub_4068c0() != 0)
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
                sub_4069e0();
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
                    if (sub_407380() == 0)
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

extern unsigned int g_40d7a5;
extern unsigned int g_40d7c0;

int sub_4062a0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40d7a5, 0x5);
    }
    dcgettext(0x0, 0x40d7c0, 0x5);
    sub_409740();
    sub_409430();
}

int sub_40c070()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40c0b0();
    }
}

int sub_4096f0()
{
}

int sub_40b570()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b4b0();
}

int sub_40b590()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40aee0();
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_407000()
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

int sub_4095b0()
{
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

    v10 = sub_401930();
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

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
} struct_4;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_3;

int sub_407580()
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
    struct_4 *v12;  // rdx
    unsigned long|uint128_t|unsigned int v13;  // xmm1lq
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
        v7 = sub_4068c0();
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
            sub_4069e0();
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
                    v32 = sub_407380();
                    if (v32 != 0)
                    {
                        v33 = sub_4068c0();
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

extern unsigned long long program_invocation_short_name;

int sub_40470b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern unsigned long long __progname_full;
extern unsigned long long g_6123a0;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_407b40()
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
        g_6123a0 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_40b5b0()
{
    char v0;  // [bp-0x140]
    char v1;  // [bp-0x13c]
    char v2;  // [bp-0x138]
    unsigned long v3;  // [bp-0x128]
    unsigned int v4;  // [bp-0x120]
    char v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x90]
    unsigned int v9;  // edi
    unsigned long long v10;  // rbx
    unsigned int *v11;  // rbp
    char v15;  // bl
    unsigned long long v16;  // rax

    v10 = __fxstat(0x1, v9, (unsigned int)&v2);
    if ((unsigned int)v10 == 0)
    {
        v15 = (v4 & 0xf000) == 0x1000 | (v4 & 0xf000) == 0xc000;
        if (((unsigned short)v4 & 0xf000) == 0xc000 || ((unsigned short)v4 & 0xf000) == 0x1000)
        {
            v10 = pipe((unsigned int)&v0);
            if ((unsigned int)v10 == 0)
            {
                v10 = __fxstat(0x1, *((int *)&v0), (unsigned int)&v5);
                v11 = __errno_location();
                close(*((int *)&v0));
                close(*((int *)&v1));
                if (!((unsigned int)v10 == 0))
                {
                    *(v11) = *(v11);
                }
                else if (v3 <= v6)
                {
                    v10 = 0;
                    v10 = (char)((v4 & 0xf000) == 0x1000);
                    if (((unsigned short)v7 & 0xf000) != 0x1000)
                    {
                        v15 = (v4 & 0xf000) == 0xc000;
                    }
                }
            }
        }
        if (((unsigned int)v10 == 0 || ((unsigned short)v4 & 0xf000) != 0xc000) && ((unsigned int)v10 == 0 || ((unsigned short)v4 & 0xf000) != 0x1000) && ((unsigned int)v10 == 0 || ((unsigned short)v4 & 0xf000) != 0xc000) && ((unsigned int)v10 == 0 || ((unsigned short)v4 & 0xf000) != 0x1000) && (v3 <= v6 || ((unsigned short)v4 & 0xf000) != 0xc000) && (v3 <= v6 || ((unsigned short)v4 & 0xf000) != 0x1000) && (((unsigned short)v4 & 0xf000) != 0xc000 || ((unsigned short)v7 & 0xf000) != 0x1000) && (((unsigned short)v7 & 0xf000) != 0x1000 || ((unsigned short)v4 & 0xf000) != 0x1000))
        {
            v10 = v15;
        }
    }
    v16 = v10;
    return v16;
}

int sub_4094a0()
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
    return sub_408f10();
}

int sub_409fd0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409dd0();
}

int sub_40ba10()
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

extern int512_t g_6124c0;

int sub_4090f0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6124c0 : v1));
}

extern unsigned int g_40e66b;
extern unsigned int g_40e66f;
extern unsigned int g_40e67f;
extern unsigned int g_40e696;
extern unsigned int g_40e6f8;
extern unsigned int g_40e7c8;
extern unsigned int g_40e7e8;
extern unsigned int g_40e810;
extern unsigned int g_40e838;
extern unsigned int g_40e868;

int sub_409830()
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
    dcgettext(0x0, 0x40e66b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e6f8, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40e66f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40e67f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40e696, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40e7c8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40e7e8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40e810, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40e838, 0x5);
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
        dcgettext(0x0, 0x40e868, 0x5);
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

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_406bc0()
{
    struct_0 *v1;  // rdi

    return v1->field_18;
}

int sub_406170()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4072a0()
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

int sub_40b730()
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

extern unsigned int g_40c227;

int sub_404b40()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r13
    unsigned long long v7;  // r12
    unsigned long long v8;  // rcx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v17;  // rbp
    unsigned long long v18;  // rbx
    unsigned long long v19;  // r12
    unsigned long long v20;  // r13
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13

    if (v5 != 0)
    {
        v3 = v6;
        v2 = v7;
        v1 = stack_base + 0;
        v0 = v10;
        v11 = v5;
        while (true)
        {
            v12 = sub_409780();
            if (v12 == 0)
            {
                v13 = v0;
                v14 = v2;
                v15 = v3;
                return -18446744069414584321;
            }
            else if (v12 != -1)
            {
                *((unsigned long long *)v8) = *((long long *)v8) + v12;
                if (v12 <= v11)
                {
                    v11 -= v12;
                    if (v11 == v12)
                    {
                        break;
                    }
                }
                else
                {
                    sub_4048a0();
                }
            }
            else
            {
                v17 = (unsigned int)sub_409510();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
                v21 = v0;
                v22 = v2;
                v23 = v3;
                return 1;
            }
        }
        v18 = v0;
        v19 = v2;
        v20 = v3;
        return 0;
    }
    return 0;
}

int sub_406750()
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

int sub_406890()
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

int sub_40bff0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40c070() != 0)
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

int sub_406870()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

extern uint128_t g_6124c0;
extern uint128_t g_6124d0;
extern uint128_t g_6124e0;
extern unsigned long long g_6124f0;

int sub_40952f()
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
    return sub_408f10();
}

int sub_409f30() { crash_skku;
}
int sub_409c90()
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
        return sub_409830();
    }
}

extern unsigned int g_40c35e;
extern unsigned int g_40c718;
extern unsigned int g_40c740;
extern unsigned int g_40c768;
extern unsigned int g_40c7f0;
extern unsigned int g_40c828;
extern unsigned int g_40c878;
extern unsigned int g_40c910;
extern unsigned int g_40ca00;
extern unsigned int g_40cc30;
extern unsigned int g_40cd08;
extern unsigned int g_40ce58;
extern unsigned int g_40ce98;
extern unsigned int g_40cec8;
extern unsigned int g_40cf00;
extern unsigned int g_40cfa0;
extern unsigned int g_40d180;
extern unsigned int g_40d1c8;
extern unsigned int g_40d1e8;
extern unsigned long long stdout;

int sub_405d10()
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
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x40c718, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c740, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c768, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c7f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c828, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c878, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c910, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ca00, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cc30, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cd08, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ce58, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ce98, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cec8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cf00, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40cfa0, 0x5), stdout);
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
            v37 = "tail";
            v38 = 5;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c35e, 0x5));
            v46 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c35e, 0x5));
            v45 = setlocale(0x5, 0x0);
            if (v45 != 0)
            {
                v47 = strncmp(v45, "en_", 0x3);
            }
            if (v45 == 0 || v47 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d1c8, 0x5));
            }
        }
        if ((v35[1] == 0 || strncmp(v46, "en_", 0x3) != 0) && (v35[1] == 0 || v46 != 0) && (v45 != 0 || v35[1] != 0) && (v35[1] != 0 || v47 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d180, 0x5));
        }
        if (v35[1] != 0 || v45 != 0 && v47 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d1c8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d1e8, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_4047e0()
{
    unsigned long long v1;  // rdi
    unsigned long long v3;  // cc_dep1
    unsigned long long v4;  // cc_dep2
    unsigned long v5;  // d
    char *v6;  // rsi
    unsigned long long v7;  // rcx
    char *v8;  // rdi

    v7 = 2;
    v8 = "-";
    v6 = v1;
    while (v7 != 0)
    {
        v7 -= 1;
        v3 = *(v6);
        v4 = *(v8);
        v8 = &v8[v5];
        v6 = &v6[v5];
        break;
    }
    if ((v3 > v4) - 0 - (v3 < v4) != 0)
    {
        return v6;
    }
}

extern unsigned int g_40c227;
extern char g_612380;

int sub_404cd0()
{
    unsigned long v0;  // [bp-0x2058]
    unsigned long v1;  // [bp-0x2048]
    char v2;  // [bp-0x2038]
    unsigned long v4;  // rdi
    unsigned long v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long v7;  // r8
    unsigned long long v8;  // r13
    unsigned long long v10;  // r12
    unsigned long long *v11;  // r9
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r15
    unsigned long long v18;  // r12
    unsigned long long v21;  // rbp
    unsigned long long v23;  // rax

    v0 = v4;
    v1 = v5;
    if (v6 != 0)
    {
        v8 = v7 - (((unsigned int)(v7 - v1 + (v7 - v1 >> 63 >> 51)) & 8191) == v7 - v1 >> 63 >> 51? 0x2000 : ((unsigned int)(v7 - v1 + (v7 - v1 >> 63 >> 51)) & 8191) - (v7 - v1 >> 63 >> 51));
        sub_404c20();
        v10 = (unsigned int)sub_409780();
        if (v10 != -1)
        {
            *(v11) = v8 + v10;
            if (v10 != 0)
            {
                v15 = v6 - (unsigned long long)(char)(*(&((char *)stack_base)[v10 + -8249]) != g_612380);
            }
            if (v10 == 0 && v8 == v1)
            {
                sub_404c20();
                *(v11) = v8 + (unsigned int)sub_404a20();
            }
        }
    }
    if (v18 != 0 || v10 != 0 && v6 != 0 && v10 != -1)
    {
        while (true)
        {
            v12 = memrchr((unsigned int)&v2, g_612380);
            if (v12 == 0)
            {
                break;
            }
            v13 = v15 - 1;
            v14 = v12 + -0x1 * &v2;
            if (v15 != 0)
            {
                v15 = v13;
                if (v14 == 0)
                {
                    break;
                }
            }
            else
            {
                if (v10 - 1 != v14)
                {
                    sub_4048a0();
                }
                *(v11) = *(v11) + (unsigned int)sub_404a20();
                v23 = 1;
            }
        }
        if (v15 == 0 && v12 != 0)
        {
            return v23;
        }
    }
    if (v18 != 0 || v6 != 0)
    {
        if ((v18 != 0 || v10 != -1) && v8 != v1)
        {
            sub_404c20();
            v18 = (unsigned int)sub_409780();
            if (v18 != -1)
            {
                *(v11) = v8 - 0x2000 + v18;
            }
        }
        if ((v10 == -1 || v18 == -1) && (v10 == -1 || v8 != v1) && (v18 == -1 || v6 != 0) && (v6 != 0 || v8 != v1))
        {
            v21 = (unsigned int)sub_409510();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c227, 0x5));
            v23 = 0;
        }
    }
    if (v6 == 0 || v10 == 0 && v8 == v1 && v10 != -1 || v18 == 0 && v8 != v1 && v10 != -1 && v18 != -1)
    {
        v23 = 1;
    }
    return v23;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406ca0()
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

int sub_409df0()
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
        sub_40a020(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned int field_30;
    char field_34;
    char field_35;
    char field_36;
    char padding_37[1];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
} struct_0;

extern unsigned int g_40c2a1;
extern unsigned int g_40c2bc;
extern unsigned int g_40c620;
extern unsigned int g_40c658;
extern unsigned int g_40c688;
extern unsigned int g_40c6e8;
extern unsigned int g_6122a8;
extern char g_612378;
extern char g_612386;

int sub_4056e0()
{
    char v0;  // [bp-0xd1]
    unsigned long v1;  // [bp-0xd0]
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned int v4;  // [bp-0xb0]
    unsigned long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x68]
    unsigned long long v8;  // rcx
    unsigned long v9;  // rsi
    unsigned int v10;  // r13d
    struct_0 *v11;  // rdi
    struct_0 *v12;  // rbx
    unsigned long long v13;  // cc_dep1
    unsigned long long v14;  // cc_dep2
    unsigned long v15;  // d
    char *v16;  // rdi
    char *v17;  // rsi
    unsigned long|unsigned int v19;  // rax
    unsigned long long v20;  // r12
    char v21;  // al
    unsigned long long v22;  // rax
    unsigned long v23;  // rbp
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax
    unsigned long long v29;  // rbp
    unsigned long long v30;  // r15
    unsigned int *v31;  // r13
    unsigned int v32;  // eax
    unsigned long long v34;  // rax
    unsigned long long v38;  // rbp
    unsigned int v40;  // cc_dep1
    unsigned int v41;  // eax
    unsigned long long v42;  // r13
    unsigned long long v44;  // rbp
    unsigned long long v47;  // rbp
    unsigned long long v48;  // r14
    unsigned long long v51;  // r14
    unsigned long long v52;  // rax
    unsigned long long v53;  // r14

    v8 = 2;
    v10 = v9;
    v12 = v11;
    v19 = v11->field_0;
    v16 = "-";
    v17 = v19;
    while (v8 != 0)
    {
        v8 -= 1;
        v13 = *(v17);
        v14 = *(v16);
        v16 = &v16[v15];
        v17 = &v17[v15];
        break;
    }
    v0 = v12->field_36;
    if ((v13 > v14) - (v13 < v14) != 0)
    {
        v20 = sub_406780();
        v19 = v12->field_3c;
    }
    else
    {
        v19 = v12->field_3c;
        v20 = 0;
    }
    v21 = v19 == 0;
    if (v12->field_38 == -1 != v19 == 0)
    {
        if (g_612386 == 0)
        {
            v12->field_36 = 1;
            if (g_612378 == 0)
            {
                v22 = __lxstat(0x1, v12->field_0, (unsigned int)&v2);
            }
        }
        else if (v20 != -1)
        {
            v12->field_36 = 1;
            if (g_612378 == 0)
            {
                v1 = &v2;
                v25 = __lxstat(0x1, v12->field_0, (unsigned int)&v2);
            }
        }
        else
        {
            v12->field_36 = 0;
            v23 = v12->field_0;
            if (g_612378 != 0)
            {
                v12->field_3c = *(__errno_location());
            }
            else
            {
                v24 = __lxstat(0x1, v23, (unsigned int)&v2);
            }
        }
        if (v20 != -1 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0))
        {
            v27 = __fxstat(0x1, v20, (unsigned int)&v2);
            if (v27 >= 0 && ((v4 & 0xf000) - 0x1000 & -0x2000) != 0 && ((unsigned short)v4 & 0xb000) != 0x8000)
            {
                v12->field_3c = -1;
                v12->field_36 = 0;
                if (g_612386 != 0 && g_6122a8 == 1)
                {
                    v12->field_34 = 0;
                }
                if (g_612386 == 0 || g_6122a8 != 1)
                {
                    v12->field_34 = 1;
                }
                if (g_612386 == 0 && v0 != 0 || g_612386 == 0 && v12->field_3c != -1 || v0 != 0 && g_6122a8 != 1 || v12->field_3c != -1 && g_6122a8 != 1)
                {
                    v42 = dcgettext(0x0, 0x40c2bc, 0x5);
                }
                if (v0 != 0 || g_612386 == 0 && v12->field_3c != -1 || v12->field_3c != -1 && g_6122a8 != 1 || g_6122a8 == 1 && g_612386 != 0 && !((char)(v12->field_3c + 1 == 0)))
                {
                    sub_4047e0();
                    v47 = (unsigned int)sub_409510();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c658, 0x5));
                }
            }
        }
        if (g_612378 == 0)
        {
            if (((unsigned short)v4 & 0xf000) == 0xa000 && (v22 == 0 || g_612386 != 0) && (v25 == 0 || v20 == -1 || g_612386 == 0) && (g_612386 == 0 || v24 == 0 || v20 != -1))
            {
                v12->field_3c = -1;
                v12->field_34 = 1;
                sub_4047e0();
                v29 = (unsigned int)sub_409510();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c620, 0x5));
            }
            if (v34 != 0 && (((v4 & 0xf000) - 0x1000 & -0x2000) == 0 && v20 != -1 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0) || ((unsigned short)v4 & 0xb000) == 0x8000 && v20 != -1 && ((v4 & 0xf000) - 0x1000 & -0x2000) != 0 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0)))
            {
                v12->field_3c = -1;
                sub_4047e0();
                v44 = (unsigned int)sub_409510();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c688, 0x5));
                *((short *)&v12->field_34) = 257;
            }
        }
        if (v20 == -1 && g_612386 == 0 && g_612378 != 0 || v20 == -1 && g_612386 == 0 && v22 != 0 || v20 == -1 && g_612378 == 0 && ((unsigned short)v4 & 0xf000) != 0xa000 || v27 < 0 && g_612386 == 0 && v22 != 0 || v27 < 0 && v20 != -1 && g_612378 != 0 || v27 < 0 && v20 != -1 && ((unsigned short)v4 & 0xf000) != 0xa000 || v20 == -1 && g_612378 == 0 && g_612386 != 0 && v24 != 0 || v27 < 0 && v25 != 0 && v20 != -1 && g_612386 != 0)
        {
            v30 = v12->field_36;
            v31 = __errno_location();
            v32 = *(v31);
            v12->field_3c = v32;
            if (v30 != 0 && v32 != v12->field_3c)
            {
                sub_4047e0();
                sub_4095e0();
                error(0x0, *(v31), "%s");
            }
        }
        if ((v20 == -1 && g_612386 != 0 && g_612378 != 0 || (v20 == -1 && g_612386 == 0 && g_612378 != 0 || v20 == -1 && g_612386 == 0 && v22 != 0 || v20 == -1 && g_612378 == 0 && ((unsigned short)v4 & 0xf000) != 0xa000 || v27 < 0 && g_612386 == 0 && v22 != 0 || v27 < 0 && v20 != -1 && g_612378 != 0 || v27 < 0 && v20 != -1 && ((unsigned short)v4 & 0xf000) != 0xa000 || v20 == -1 && g_612378 == 0 && g_612386 != 0 && v24 != 0 || v27 < 0 && v25 != 0 && v20 != -1 && g_612386 != 0) && v30 == 0) && v0 != 0)
        {
            sub_4047e0();
            v38 = (unsigned int)sub_409510();
            error(0x0, v12->field_3c, (unsigned long long)dcgettext(0x0, 0x40c2a1, 0x5));
        }
        if (((v4 & 0xf000) - 0x1000 & -0x2000) == 0 && v20 != -1 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0) || ((unsigned short)v4 & 0xb000) == 0x8000 && v20 != -1 && ((v4 & 0xf000) - 0x1000 & -0x2000) != 0 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0))
        {
            sub_4047e0();
            v34 = sub_405090();
            *((unsigned long long *)&v12->field_35) = v34;
        }
        if (v34 != 0 && (((v4 & 0xf000) - 0x1000 & -0x2000) == 0 && v20 != -1 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0) || ((unsigned short)v4 & 0xb000) == 0x8000 && v20 != -1 && ((v4 & 0xf000) - 0x1000 & -0x2000) != 0 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0)) && g_612378 != 0 || (((v4 & 0xf000) - 0x1000 & -0x2000) == 0 && v20 != -1 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0) || ((unsigned short)v4 & 0xb000) == 0x8000 && v20 != -1 && ((v4 & 0xf000) - 0x1000 & -0x2000) != 0 && v27 >= 0 && (g_612386 == 0 || v25 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000) && (g_612386 != 0 || g_612378 != 0 || ((unsigned short)v4 & 0xf000) != 0xa000 || v22 != 0)) && v34 == 0)
        {
            v40 = v12->field_3c & -3;
            v12->field_3c = 0;
            v41 = v12->field_38;
            if (v40 != 0)
            {
                if (v41 == -1)
                {
                    sub_4047e0();
                    v48 = (unsigned int)sub_409510();
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            else
            {
                if (!(v41 != -1))
                {
                    sub_4047e0();
                    v51 = (unsigned int)sub_409510();
                }
                else if (v12->field_28 == v3)
                {
                    if (v12->field_20 == *((long long *)&v2))
                    {
                        sub_4047e0();
                        v52 = sub_404820();
                    }
                }
            }
        }
        if (...)
        {
            sub_4047e0();
            sub_404820();
            sub_4047e0();
            v52 = sub_404820();
            v12->field_38 = -1;
        }
        if (...)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v17, 0x5));
        }
        if (...)
        {
            sub_4047e0();
            v53 = (unsigned int)sub_409510();
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c6e8, 0x5));
            sub_4047e0();
            sub_404820();
        }
        if (...)
        {
            *((unsigned long long *)&v12->field_38) = v20;
            v12->field_34 = 0;
            v12->field_8 = 0;
            v12->field_10 = v5;
            v12->field_40 = ((unsigned int)((v13 > v14) - 0 - (v13 < v14)) == 0? -1 : (unsigned int)r13b<1>);
            v12->field_18 = v6;
            v12->field_58 = 0;
            v12->field_20 = *((long long *)&v2);
            v12->field_28 = v3;
            v12->field_30 = v4;
            sub_4047e0();
            v52 = sub_404c20();
        }
        if (...)
        {
            return v52;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}

int sub_409c10()
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

extern struct_0 *g_612318;
extern unsigned long long g_612320;
extern unsigned long long g_612328;
extern unsigned int g_612330;
extern unsigned long long g_6123c0;

int sub_409320()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_612330;
    if (g_612330 > 1)
    {
        v2 = &g_612318[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_612318[(unsigned long long)(g_612330 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_612318->field_8 != 6366144)
    {
        v1 = free(g_612318->field_8);
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

int sub_409310()
{
}

extern int512_t g_40d880;

int sub_4069e0()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4249728)
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
            *(v1) = &g_40d880;
            return 0;
        }
    }
    if (...)
    {
        return 1;
    }
}

int sub_40a7e0()
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

int sub_40b8f0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40bff0();
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

int sub_409dd0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_40a020(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_407800()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_407580();
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

int sub_407ac0()
{
    char v0;  // [bp-0x10]
    unsigned long long v2;  // rbx
    char *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v2 = 200809;
    v3 = getenv("_POSIX2_VERSION");
    if (v3 != 0 && *(v3) != 0)
    {
        v4 = strtol(v3, &v0, 0xa);
        if (*((char *)*((long long *)&v0)) == 0)
        {
            if (v4 >= -0x80000000)
            {
                return (v4 <= 2147483647? v4 : 2147483647);
            }
            v2 = 0x80000000;
        }
    }
    if (v4 < -0x80000000 || *(v3) == 0 || v3 == 0 || *((char *)*((long long *)&v0)) != 0)
    {
        v5 = v2;
        return v5;
    }
}

int sub_4096c0()
{
}

extern unsigned int g_40c276;
extern unsigned int g_6122c0;
extern char g_612390;
extern unsigned long long g_612398;

int sub_406590()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40b8f0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_612390 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40c276, 0x5);
            if (g_612398 != 0)
            {
                sub_4095b0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_612390 != 0)
    {
        v3 = sub_40b8f0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_612390 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6122c0);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_407040()
{
    struct_0 *v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

int sub_40a1c0()
{
    char *v0;  // [bp-0x30]
    unsigned int *v2;  // r12
    unsigned long long v3;  // rax
    unsigned long v4;  // rdi
    unsigned long long *v5;  // rsi
    unsigned long v6;  // xmm0lq
    unsigned long long|char v7;  // al
    unsigned long long *v8;  // rdx

    v2 = __errno_location();
    *(v2) = 0;
    v3 = rcx<8>();
    if (v0 != v4)
    {
        if (!(v5 != 0))
        {
            v7 = 0;
            if (*(v0) == 0 && ((char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 2) & 1) == 0 && (char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, Conv(32->64, ((xmm0lq<8> CmpF 0x0<64>) & 0x45<32>)), 0x0<64>, cc_ndep<8>))
            {
                v7 = 1;
            }
        }
        else if (((char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 2) & 1) == 0)
        {
            v7 = 1;
        }
        if ((*(v0) == 0 || v5 != 0) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, Conv(32->64, ((xmm0lq<8> CmpF 0x0<64>) & 0x45<32>)), 0x0<64>, cc_ndep<8>)) || ((char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 2) & 1) != 0))
        {
            v7 = *(v2) != 34;
        }
    }
    else
    {
        v7 = 0;
    }
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, Conv(32->64, ((xmm0lq<8> CmpF 0x0<64>) & 0x45<32>)), 0x0<64>, cc_ndep<8>)))
    {
        *(v5) = v0;
    }
    *(v8) = v6;
    return v7;
}

