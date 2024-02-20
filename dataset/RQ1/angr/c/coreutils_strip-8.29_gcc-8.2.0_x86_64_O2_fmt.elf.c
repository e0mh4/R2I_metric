#include "decompile_angr.h"
int sub_404dc0()
{
}

int sub_40569c()
{
    abort(); /* do not return */
}

extern unsigned long long __progname_full;
extern unsigned long long g_616308;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403240()
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
        g_616308 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_4052e0()
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
        return sub_404e80();
    }
}

int sub_4055f0()
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
        sub_405670(); /* do not return */
    }
}

extern int512_t g_60b1e8;

int sub_407200()
{
}

extern unsigned int g_6162c8;
extern unsigned long long stdout[7];

int sub_402260()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned int *v4;  // rsi
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12
    unsigned int *v7;  // r12
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rsi
    char *v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12

    v5 = *(v4);
    if (*(v4) != 0)
    {
        v2 = v6;
        v7 = v4;
        v1 = stack_base + 0;
        v9 = v8 + *(v4) - 1 + 1;
        v0 = v10;
        v13 = v8;
        do
        {
            v13 += 1;
            v11 = (char)*((char *)(v13 - 1));
            v12 = stdout[5];
            if (stdout[5] < stdout[6])
            {
                stdout[5] = stdout[5] + 1;
                *((unsigned long long *)&v12) = v11;
            }
            else
            {
                __overflow();
            }
        }
        while (v13 != v9);
        v14 = *(v7);
        v15 = v0;
        g_6162c8 = g_6162c8 + *(v7);
        v16 = v2;
        return v14;
    }
    g_6162c8 = g_6162c8 + *(v4);
    return v5;
}

int sub_404e10()
{
}

int sub_40493b()
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
    v7 = (unsigned int)sub_4033e0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_405420();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4033e0();
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

extern unsigned int g_60b2a4;
extern unsigned int g_6162cc;
extern unsigned int g_6162d4;
extern unsigned int g_6162d8;
extern char *g_6162e8;

int sub_402000()
{
    unsigned long long v1[3];  // rdi
    unsigned long long v2[3];  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rcx
    unsigned int v6;  // edx
    char *v7;  // rax
    char *v8;  // rbp
    unsigned long long v9;  // rax
    unsigned long|unsigned int v10;  // rdx

    v2 = v1;
    v3 = v1[1];
    g_6162cc = 0;
    if (v3 < v1[2])
    {
        v1[1] = v1[1] + 1;
    }
    else
    {
        v4 = __uflow();
    }
    v9 = sub_401f80();
    if (g_6162d4 == 0)
    {
        g_60b2a4 = (g_6162cc <= g_6162d8? g_6162cc : g_6162d8);
    }
    else
    {
        v8 = g_6162e8;
        v10 = g_6162cc;
        v5 = *(g_6162e8);
        g_60b2a4 = g_6162cc;
        if (v5 != 0 && (unsigned int)v9 == *(g_6162e8))
        {
            while (true)
            {
                v6 = v10 + 1;
                v7 = v2[1];
                g_6162cc = v6;
                if (v7 < v2[2])
                {
                    v8 = &v8[1];
                    v2[1] = v1[1] + 1;
                    v10 = *(v8);
                    v9 = *(v7);
                    if ((char)v10 == 0)
                    {
                        break;
                    }
                }
                else
                {
                    v8 = &v8[1];
                    v9 = __uflow();
                    v10 = *(v8);
                    if (*(v8) == 0)
                    {
                        break;
                    }
                }
                if (v10 != (unsigned int)v9)
                {
                    break;
                }
                v10 = g_6162cc;
            }
            if (*(v8) != 0 || v7 < v2[2] && (char)v10 != 0)
            {
                return v9;
            }
        }
    }
    if (g_6162d4 == 0 || v5 != 0)
    {
        return v9;
    }
}

int sub_404e20()
{
}

extern unsigned long long g_60ae30;

int sub_407218()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60ae30;
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

extern unsigned int g_409040;
extern unsigned int g_409084;

int sub_406410()
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
    unsigned long|unsigned int v17;  // eax
    unsigned long long v18;  // rax
    char *|unsigned long long|char [2] v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9
    unsigned long v26;  // rax
    unsigned long|unsigned int v27;  // rdx
    unsigned long v29;  // rax
    char v30[2];  // rcx
    unsigned long v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char v34[2];  // rsi
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
                        sub_405d10();
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
                            sub_405d10();
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
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19[0] == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19[0] == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19[0] == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19[0] == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_405df0();
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
                        dcgettext(0x0, 0x409040, 0x5);
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
            dcgettext(0x0, 0x409084, 0x5);
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
                    dcgettext(0x0, 0x409040, 0x5);
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
        v45 = (unsigned int)sub_405df0();
    }
    v63 = v45;
    return v63;
}

int sub_404ac0()
{
}

int sub_4057b0()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char *|char [3]|char v1;  // [bp-0x58]
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
    unsigned long long|unsigned int v38;  // rdi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v43;  // cc_dep1
    unsigned int v44;  // cc_dep1
    unsigned long long v45;  // cc_dep1
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
                if ((v17 == 34 || *(v14) == 0) && v9 != 0)
                {
                    v18 = *(v1);
                    if (*(v1) != 0)
                    {
                        *((char **)&v1[0]) = v1;
                        v20 = strchr(v9, v18);
                        v32 = v1;
                    }
                }
            }
            else
            {
                v1 = v9;
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
        if (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *(v1) != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0)
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4230200)); */
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
        if ((*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *(v1) != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *(v1) != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *(v1) != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = -1;
                    break;
                }
                else
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v37 = v30;
                v38 = 6;
                do
                {
                    v33 = v33 * v37;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v38;
                    v38 -= 1;
                }
                while (v45 != 1);
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
                v5 = 8;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v44 != 1);
            case 24:
                v40 = v30;
                v5 = 7;
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
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
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

extern int512_t g_616420;

int sub_404850()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_616420 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_616420 : v1) + 4)) = v3;
    return v2;
}

extern int512_t g_616420;

int sub_4048a0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_616420 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4033e0();
}

int sub_405650()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_4055d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405420();
}

int sub_405580() { crash_skku;
}
int sub_403210()
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

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
    char padding_11[3];
    unsigned int field_14;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[24];
    unsigned long long field_40;
} struct_1;

extern unsigned int g_60b2a0;
extern unsigned int g_60b2ac;
extern unsigned int g_60b2b0;
extern struct_0 *g_60b2c0;
extern int512_t g_60b2e0;
extern int512_t g_60b308;
extern unsigned int g_6162d0;
extern unsigned int g_6162e0;

int sub_401d70()
{
    unsigned int v0;  // [bp-0x34]
    struct_1 *v2;  // rcx
    unsigned int v3;  // eax
    unsigned int v4;  // r12d
    struct_1 *v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r15
    unsigned long long v13;  // r14
    unsigned long long v14;  // rdi

    v2 = &g_60b2c0[-2].field_18;
    v3 = g_60b2c0->field_8;
    g_60b2c0->field_18 = 0;
    g_60b2c0->field_8 = g_6162e0;
    v0 = v3;
    if (&g_60b2c0[-2].field_18 >= 6337248)
    {
        v4 = g_60b2ac;
        do
        {
            v8 = v2;
            v11 = 9223372036854775807;
            v12 = (v2 == &g_60b2e0? (unsigned int)g_60b2b0 : (unsigned int)r12<8>) + v2->field_8;
            do
            {
                v8 = &v8->padding_28;
                if (g_60b2c0 != v8)
                {
                    v9 = (long long)((g_6162d0 - v12) * 10) * (long long)((g_6162d0 - v12) * 10);
                    if (g_60b2c0 != v8->field_20)
                    {
                        v9 += (long long)((unsigned long long)((unsigned int)v12 - v8->field_14) * 10) * (long long)((unsigned long long)((unsigned int)v12 - v8->field_14) * 10) >> 1;
                    }
                }
                else
                {
                    v9 = 0;
                }
                v10 = v9 + v8->field_18;
                if (v2 == 6337248 && g_60b2a0 > 0)
                {
                    v10 += (long long)((v12 - g_60b2a0) * 10) * (long long)((v12 - g_60b2a0) * 10) >> 1;
                }
                if (v10 < v11)
                {
                    v2->field_20 = v8;
                    v11 = v10;
                    v2->field_14 = v12;
                }
                if (g_60b2c0 == v8)
                {
                    break;
                }
                v12 = (unsigned int)v12 + v8->field_8 + *((int *)&v8[-1].padding_28[4]);
            }
            while (g_6162e0 > (unsigned int)v12);
            v13 = 4900;
            if (v2 > 6337248)
            {
                if ((v2[-1].padding_28[8] & 2) != 0)
                {
                    v13 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)((g_60b2c0[-2].padding_0[0] & 8) < 1)) & 362500) + 2400;
                }
                else
                {
                    v13 = 3300;
                    if ((g_60b2c0[-2].padding_0[0] & 4) == 0)
                    {
                        v13 = 4900;
                        if (((char)v2[-1].field_8 & 8) != 0 && v2 > 6337288)
                        {
                            v13 = (0 CONCAT 40000) % ((unsigned long long)(unsigned int)*((int *)&v2[-1].padding_28[0]) + 2) + 4900;
                        }
                    }
                }
            }
            if ((v2->field_10 & 1) != 0)
            {
                v13 -= 1600;
            }
            else if (((char)g_60b2c0[-1].field_8 & 8) != 0)
            {
                v13 += (22500 >> 63 CONCAT 22500) % (*((int *)&g_60b2c0[-1].padding_0[0]) + 2);
            }
            v14 = v11 + v13;
            v2 = &v2[-1].field_20;
            v2->field_40 = v14;
        }
        while (v2 >= 6337248);
    }
    g_60b2c0->field_8 = v0;
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

int sub_405cb0()
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

int sub_404c20()
{
}

extern int512_t g_616420;

int sub_404800()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_616420 : v1)) = v2;
    return &g_616420;
}

extern unsigned int g_408bef;
extern unsigned int g_60b1f8;

int sub_405670()
{
    dcgettext(0x0, 0x408bef, 0x5);
    error(g_60b1f8, 0x0, "%s");
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

    v10 = sub_401408();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6336048 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_404b10()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405280()
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
    return sub_404e80();
}

extern unsigned long long g_40909f;

int sub_406ae0()
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
        v5 = &g_40909f;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_406bc0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_404cd0()
{
}

extern uint128_t g_616420;
extern uint128_t g_616430;
extern uint128_t g_616440;
extern unsigned long long g_616450;

int sub_404c2f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_616450;
    *((uint128_t *)&v0) = g_616420;
    *((uint128_t *)&v1) = g_616430;
    *((uint128_t *)&v2) = g_616440;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_404610();
}

int sub_406aa0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4069e0();
}

extern char g_616420;

int sub_404870()
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
    v3 = (v2 == 0? &g_616420 : v2);
    *((int *)(tmp_11? &g_616420 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_616420;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_616420;
        abort(); /* do not return */
    }
}

int sub_406bc0()
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

int sub_404ba0()
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
    return sub_404610();
}

int sub_404b22()
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
    return sub_404610();
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

extern unsigned int g_60b2a0;
extern unsigned int g_6162c8;
extern unsigned int g_6162d4;
extern unsigned long long g_6162e8;
extern unsigned long long stdout[7];

int sub_4022e0()
{
    unsigned int v3;  // esi
    struct_0 *v4;  // rbx
    struct_0 *v6;  // rdi
    struct_0 *v9;  // rbx
    char *v11;  // rax

    g_6162c8 = 0;
    sub_4020f0();
    fputs_unlocked(g_6162e8, stdout);
    v4 = (unsigned long long)(v3 - (g_6162d4 + g_6162c8));
    g_6162c8 = g_6162d4 + g_6162c8;
    sub_4020f0();
    if (v4 != v4->field_20 - 40)
    {
        v4 = v6;
        while (true)
        {
            v9 = &v9[1];
            sub_402260();
            sub_4020f0();
            if (v6->field_20 - 40 == v9)
            {
                break;
            }
        }
    }
    sub_402260();
    g_60b2a0 = g_6162c8;
    v11 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v11) = 10;
        return v11;
    }
}

extern int512_t g_616420;

int sub_4047f0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_616420 : v1));
}

extern unsigned int g_4088b2;
extern unsigned int g_4088dd;
extern unsigned int g_408b10;

int sub_4053a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4088b2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4088dd, 0x5));
    dcgettext(0x0, 0x408b10, 0x5);
}

extern unsigned int g_60b2ac;
extern unsigned int g_60b2b0;
extern unsigned int g_6162cc;
extern char g_6162f1;
extern char g_6162f2;
extern char g_6162f3;

int sub_4021d0()
{
    char v1;  // dil
    char v2;  // dil

    if (g_6162f1 != 0)
    {
        g_60b2ac = g_60b2b0;
        return g_60b2b0;
    }
    else if (g_6162f3 != 0)
    {
        g_60b2ac = (v1 == 0? g_60b2b0 : *((int *)6382284));
        return (v1 == 0? g_60b2b0 : *((int *)6382284));
    }
    if (g_6162f2 != 0)
    {
        if (v2 != 0 && g_6162cc != g_60b2b0)
        {
            g_60b2ac = g_6162cc;
            return g_60b2b0;
        }
        if ((v2 == 0 || g_6162cc == g_60b2b0) && g_60b2ac == g_60b2b0)
        {
            g_60b2ac = 0 - (unsigned int)(char)(g_60b2b0 < 1) & 3;
            return 0 - (unsigned int)(char)(g_60b2b0 < 1) & 3;
        }
    }
    else
    {
        g_60b2ac = g_60b2b0;
    }
    if (g_60b2ac != g_60b2b0 || g_6162cc == g_60b2b0)
    {
        return g_60b2b0;
    }
}

int sub_405470()
{
}

int sub_4047b0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_405620();
}

int sub_404c10()
{
}

int sub_404a10()
{
}

int sub_4033e0()
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
            v26 = (unsigned int)sub_4032e0();
            v27 = (unsigned int)sub_4032e0();
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
                            v89 = 0;
                            v78 = 0;
                        case 9:
                            v40 = 116;
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
                            v50 = v5;
                            v5 = v41;
                            v78 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v48 = v5;
                            v89 = 0;
                            v5 = v42;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) != 0)
                            {
                                v78 = 0;
                                v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                v89 = (unsigned int)v39 == 2;
                            }
                            if (v17 == 0)
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
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                        if ((v17 & (unsigned int)v39 == 2) == 0)
                        {
                            v40 = v45;
                            v78 = 0;
                            v55 = 0;
                            break;
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
                        v89 = (unsigned int)v39 == 2;
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (unsigned int)v39 == 2;
                        v35 = 0;
                    case 35: case 126:
                        v89 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v89 = (unsigned int)v39 == 2;
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
                    v76 = (unsigned int)sub_4033e0();
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
                            v76 = (unsigned int)sub_4033e0();
                        }
                    }
                }
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_406ae0();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
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
                v49 = 0;
                v87 = v89;
                *((unsigned long long *)&v4) = v4 & v87;
            }
            if (v89 != 0 || v15 != 1)
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
            if ((v17 == 0 || v46 == 0) && (v46 == 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0) && (v17 == 0 || v89 != 0 || v15 != 1) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v89 != 0 || v15 != 1))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v76 == 0 && (v81 == 2 & v17) != 0 || v78 == 0 && v18 != 0 && v6 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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

int sub_405480()
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
            sub_405670(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern char g_60b2b8;
extern unsigned int g_6162cc;

int sub_401f80()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdi
    unsigned long long v4[3];  // rbx
    char *v5;  // rax
    unsigned long long v6;  // rdx

    v2 = v1;
    v4 = v3;
    while (true)
    {
        if ((unsigned int)v2 != 32)
        {
            if ((unsigned int)v2 != 9)
            {
                break;
            }
        }
        else
        {
            g_6162cc = g_6162cc + 1;
            v5 = v4[1];
        }
        if ((unsigned int)v2 == 9)
        {
            v6 = g_6162cc;
            g_60b2b8 = 1;
            g_6162cc = ((long long)((char)(v6 >> 31 & 1 ^ 1)? g_6162cc : (unsigned int)(v6 + 7)) >> 3) * 8 + 8;
            v5 = v4[1];
        }
        if ((unsigned int)v2 == 32 || (unsigned int)v2 == 9)
        {
            if (((unsigned int)v2 == 32 || v4[1] >= v4[2]) && ((unsigned int)v2 == 9 || v4[1] >= v4[2]) && (v4[1] >= v4[2] || v4[1] >= v4[2]))
            {
                v2 = __uflow();
            }
            if ((v4[1] < v4[2] || v4[1] < v4[2]) && (v4[1] < v4[2] || (unsigned int)v2 == 32) && (v4[1] < v4[2] || (unsigned int)v2 == 9))
            {
                v4[1] = &v5[1];
                v2 = *(v5);
            }
        }
    }
    return v2;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_0;

extern struct_0 *g_60b2c0;
extern char g_614ed0;
extern unsigned long long g_614f20;
extern int512_t g_6162c8;
extern unsigned int g_6162cc;
extern char g_6162f0;

int sub_4025a0()
{
    struct_0 *|char v0;  // [bp-0x50]
    void tmp_5;  // tmp #5
    void tmp_19;  // tmp #19
    void tmp_36;  // tmp #36
    unsigned int v1;  // [bp-0x48]
    char v2;  // [bp-0x41]
    char *v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]
    unsigned long v8;  // [bp-0x8]
    unsigned long v10;  // r15
    unsigned long v11;  // r14
    unsigned long long v12;  // rsi
    unsigned long v13;  // r13
    unsigned long v14;  // r12
    unsigned long v15;  // rbx
    unsigned long long v16[3];  // rdi
    unsigned long long v17[3];  // rbx
    unsigned long long *v18;  // r12
    char *|unsigned long long v19;  // rax
    unsigned long long v23;  // rcx
    char *v24;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // r8
    char *v27;  // rbp
    unsigned long v28;  // rsi
    char *v29;  // r13
    unsigned int v31;  // esi
    char v32;  // sil
    unsigned long|unsigned int v33;  // r15
    unsigned long long v34;  // rax
    char *v35;  // rax
    unsigned long long v36;  // rax
    char v37;  // al
    unsigned int v38;  // r14d
    struct_0 *v39;  // rax
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rcx
    unsigned int v42;  // ecx
    char v43;  // cl
    unsigned long long *v45;  // rcx

    v8 = v10;
    v7 = v11;
    v25 = v12;
    v6 = v13;
    v5 = v14;
    v4 = v15;
    v17 = v16;
    v18 = (unsigned long long)__ctype_b_loc();
    while (true)
    {
        v19 = g_614f20;
        *(v45) = g_614f20;
        while (true)
        {
            if (v19 == 6382280)
            {
                sub_4021d0();
                sub_402420();
                v19 = g_614f20;
            }
            v23 = &v19[1];
            *((unsigned long long *)&v19) = v25;
            v24 = v17[1];
            g_614f20 = v23;
            if (v24 < v17[2])
            {
                v17[1] = v16[1] + 1;
                v25 = *(v24);
                v19 = g_614f20;
            }
            else
            {
                v25 = __uflow();
                v19 = g_614f20;
                if ((unsigned int)v25 == -1)
                {
                    v26 = *(v18);
                }
            }
            if (v24 < v17[2] || (unsigned int)v25 != -1)
            {
                v26 = *(v18);
            }
            v3 = v26;
            v27 = g_60b2c0->field_0;
            v0 = g_60b2c0;
            tmp_5 = &v19[-1 * g_60b2c0->field_0];
            g_60b2c0->field_8 = (unsigned int)&v19[-1 * g_60b2c0->field_0];
            v28 = *(v27);
            v1 = g_6162cc + (unsigned int)tmp_5;
            v29 = &v27[tmp_5 + -1];
            g_6162cc = g_6162cc + (unsigned int)tmp_5;
            strchr("([\'`\"", v28);
            v31 = 4;
            v32 = 4 & v3[2 * (unsigned long long)(char)*((char *)(g_60b2c0->field_0 + tmp_5 - 1))];
            v2 = v0->field_10;
            v0->field_10 = v0->field_10 & 4294967034 | &g_407264 | rsi<4>;
            if (v27 >= &v27[tmp_5 + -1])
            {
                v33 = (char)*((char *)(g_60b2c0->field_0 + tmp_5 - 1));
            }
            else
            {
                while (true)
                {
                    v33 = *(v29);
                    v34 = strchr(")]'", *(v29));
                    if (v34 == 0)
                    {
                        break;
                    }
                    v35 = &v29[-1];
                    if (g_60b2c0->field_0 != &v29[-1])
                    {
                        v29 = v35;
                    }
                    else
                    {
                        v33 = v29[-1];
                    }
                }
            }
            v36 = strchr(".?!", v33);
            tmp_19 = v0;
            v37 = v36 != 0;
            tmp_36 = v0->field_10;
            v0 = v0->field_10;
            *((char *)(tmp_19 + 16)) = (unsigned int)tmp_36 & -3 | (unsigned int)rax<8> * 2;
            v38 = sub_401f80();
            v39 = g_60b2c0;
            g_60b2c0->field_c = g_6162cc - v1;
            if (v38 != -1)
            {
                if ((g_60b2c0->field_10 & 2) != 0)
                {
                    if (v23 <= 1 && v38 != 10)
                    {
                        g_60b2c0->field_10 = g_60b2c0->field_10 & 4294967031;
                    }
                    if (v38 == 10 || v23 > 1)
                    {
                        v40 = 1;
                    }
                }
                else
                {
                    v40 = 0;
                }
                if (v38 == 10 || v38 != -1)
                {
                    v41 = v39->field_10 & 4294967031 | (unsigned int)v40 * 8;
                    *((unsigned long long *)&v39->field_10) = v41;
                }
                if (g_6162f0 == 0 && g_60b2c0 != 6377168 && v38 != 10)
                {
                    v45 = (char *)&v39[2].field_0 + 6;
                    g_60b2c0 = (char *)&v39[2].field_0 + 6;
                }
            }
            else
            {
                v39->field_10 = v39->field_10 | 8;
            }
            if (v38 == 10 || v38 == -1 || g_6162f0 != 0)
            {
                v42 = 0;
                v43 = (v39->field_10 & 8) != 0;
                v39->field_c = rcx<4> + 1;
            }
            if (v38 == 10 && v39 == 6377168 || v39 == 6377168 && v38 == -1 || v39 == 6377168 && g_6162f0 != 0 || g_60b2c0 == 6377168 && g_6162f0 == 0 && v38 != 10 && v38 != -1)
            {
                sub_4021d0();
                sub_402420();
                v39 = g_60b2c0;
            }
            if (g_60b2c0 == 6377168 || v38 == 10 || v38 == -1 || g_6162f0 != 0)
            {
                v45 = (char *)&v39[2].field_0 + 6;
                g_60b2c0 = (char *)&v39[2].field_0 + 6;
                if (v38 != 10 && v38 != -1)
                {
                    break;
                }
            }
        }
    }
}

int sub_404ae0()
{
}

int sub_4054f0() { crash_skku;
}
int sub_404df0()
{
}

int sub_406b60()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_405bf0();
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

int sub_4054c0()
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
        sub_405670(); /* do not return */
    }
}

int sub_406ac0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_406410();
}

int sub_405780()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_4056b0();
}

int sub_404e40()
{
}

int sub_401d68() { crash_skku;
}
extern unsigned int g_4072f2;
extern unsigned int g_4073c0;
extern unsigned int g_4073e8;
extern unsigned int g_407418;
extern unsigned int g_4074a0;
extern unsigned int g_4074d8;
extern unsigned int g_407528;
extern unsigned int g_407640;
extern unsigned int g_407760;
extern unsigned int g_407790;
extern unsigned int g_4077f0;
extern unsigned int g_407838;
extern unsigned int g_407858;
extern unsigned long long stdout;

int sub_402dc0()
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
    unsigned long long v29[2];  // rax
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
    if (v19 != 0)
    {
        dcgettext(0x0, 0x4073c0, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4073e8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407418, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4074a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4074d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407528, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407640, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407760, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407790, 0x5), stdout);
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
            v31 = "fmt";
            v32 = 4;
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
        if (v29[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4072f2, 0x5));
            v40 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4072f2, 0x5));
            v39 = setlocale(0x5, 0x0);
            if (v39 != 0)
            {
                v41 = strncmp(v39, "en_", 0x3);
            }
            if (v39 == 0 || v41 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407838, 0x5));
            }
        }
        if ((v29[1] == 0 || strncmp(v40, "en_", 0x3) != 0) && (v29[1] == 0 || v40 != 0) && (v29[1] != 0 || v39 != 0) && (v29[1] != 0 || v41 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4077f0, 0x5));
        }
        if (v29[1] != 0 || v39 != 0 && v41 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407838, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407858, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_404ce0()
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
    return sub_404610();
}

extern unsigned int g_40886b;
extern unsigned int g_40886f;
extern unsigned int g_40887f;
extern unsigned int g_408896;
extern unsigned int g_4088f8;
extern unsigned int g_4089c8;
extern unsigned int g_4089e8;
extern unsigned int g_408a10;
extern unsigned int g_408a38;
extern unsigned int g_408a68;

int sub_404e80()
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
    dcgettext(0x0, 0x40886b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4088f8, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40886f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40887f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x408896, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x4089c8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x4089e8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x408a10, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x408a38, 0x5);
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
        dcgettext(0x0, 0x408a68, 0x5);
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
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60b238;
extern uint128_t g_60b240;
extern unsigned int g_60b250;
extern int512_t g_616320;

int sub_404610()
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
    v17 = g_60b238;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60b250 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60b238 != 6337088)
            {
                v16 = sub_405480();
                g_60b238 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405480();
                v17 = v15;
                g_60b238 = v15;
                *(v15) = g_60b240;
            }
            memset(&v17[(long long)(int)g_60b250], 0x0, (int)((unsigned int)v13 + 1 - g_60b250) * 16);
            g_60b250 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405670(); /* do not return */
        }
    }
    if (g_60b250 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4033e0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6382368)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_405420();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4033e0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned int g_60b254;
extern unsigned int g_60b258;
extern unsigned int g_60b25c;
extern unsigned int g_616460;
extern unsigned int g_616464;
extern unsigned int g_616468;
extern unsigned long long g_616470;
extern unsigned long long g_6164a0;

int sub_4069e0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_616460 = g_60b25c;
    g_616464 = g_60b258;
    v1 = (unsigned int)v2;
    v0 = &g_616460;
    g_60b25c = g_616460;
    g_6164a0 = g_616470;
    g_60b254 = g_616468;
    return sub_406410();
}

int sub_403200()
{
}

typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
} struct_0;

extern unsigned int g_40730d;
extern unsigned int g_40733e;
extern unsigned int g_40734c;
extern unsigned int g_407890;
extern unsigned int g_407900;
extern char g_40909f;
extern unsigned int g_60b25c;
extern unsigned int g_6162d0;
extern unsigned int g_6162d4;
extern unsigned int g_6162d8;
extern unsigned int g_6162dc;
extern unsigned int g_6162e0;
extern unsigned long long g_6162e8;
extern char g_6162f0;
extern char g_6162f1;
extern char g_6162f2;
extern char g_6162f3;
extern unsigned long long g_6164a0;

int main()
{
    char *|unsigned long long v1;  // r12
    unsigned long long v2;  // rdi
    struct_0 *v3;  // rsi
    unsigned long long v6[2];  // rbx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // r13
    unsigned long long v9;  // r15
    unsigned long long v10;  // r15
    unsigned int v11;  // eax
    char *v12;  // rax
    unsigned int v13;  // eax
    unsigned long long v17[2];  // rax
    unsigned long long|unsigned int v18;  // r12
    unsigned long long v20;  // rcx
    char *v21;  // rdi
    char *v22;  // r14
    char *v23;  // rsi
    unsigned long long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long v26;  // d
    unsigned long long v29;  // r15
    unsigned long long v31;  // r14
    unsigned int v32;  // cc_dep1
    char *v34;  // rdx
    unsigned long long v35;  // r12
    unsigned long long v36;  // r12

    v1 = 0;
    v7 = v2;
    v6 = v3;
    sub_403240();
    setlocale(0x6, 0x40909f);
    bindtextdomain(0x40730d, 0x407890);
    textdomain(0x40730d);
    sub_407200();
    g_6162f0 = 0;
    g_6162f1 = 0;
    g_6162f2 = 0;
    g_6162f3 = 0;
    g_6162e0 = 75;
    g_6162e8 = &g_40909f;
    g_6162dc = 0;
    g_6162d8 = 0;
    g_6162d4 = 0;
    if ((unsigned int)v2 > 1 && v3->field_8->field_0 == 45 && (unsigned int)v3->field_8->field_1 - 48 <= 9)
    {
        v1 = &v3->field_8->field_1;
        v7 = (unsigned int)v2 - 1;
        v6 = &v3->field_8;
        v3->field_8 = v3->field_0;
    }
    v8 = 0;
    while (true)
    {
        v9 = (unsigned int)sub_406a60();
        if ((unsigned int)v9 == -1)
        {
            if (v1 != 0)
            {
                dcgettext(0x0, 0x40733e, 0x5);
                g_6162e0 = sub_405780();
                if (v8 != 0)
                {
                    dcgettext(0x0, 0x40733e, 0x5);
                    g_6162d0 = sub_405780();
                }
            }
            else if (v8 != 0)
            {
                dcgettext(0x0, 0x40733e, 0x5);
                g_6162d0 = sub_405780();
                g_6162e0 = g_6162d0 + 10;
            }
            if (v8 == 0)
            {
                g_6162d0 = (g_6162e0 * 187 >> 31 CONCAT g_6162e0 * 187) % 200;
            }
        }
        else if ((unsigned int)v9 != 112)
        {
            if (v9 > 112)
            {
                if ((unsigned int)v9 == 116)
                {
                    g_6162f2 = 1;
                }
                else if (v9 > 116)
                {
                    if ((unsigned int)v9 == 117)
                    {
                        g_6162f0 = 1;
                    }
                    if ((unsigned int)v9 == 119)
                    {
                        v1 = g_6164a0;
                    }
                }
                else if ((unsigned int)v9 == 115)
                {
                    g_6162f1 = 1;
                }
            }
            else
            {
                if ((unsigned int)v9 == -130)
                {
                    sub_402dc0(); /* do not return */
                }
                else if (v9 > -18446744069414584450)
                {
                    if ((unsigned int)v9 == 99)
                    {
                        g_6162f3 = 1;
                    }
                    if ((unsigned int)v9 == 103)
                    {
                        v8 = g_6164a0;
                    }
                }
                else if ((unsigned int)v9 == -131)
                {
                    sub_4052e0();
                    exit(0x0); /* do not return */
                }
            }
            if (v9 <= -18446744069414584450 && v9 <= 112 && (unsigned int)v9 != -130 && (unsigned int)v9 != -131 || v9 <= 116 && (unsigned int)v9 != 116 && (unsigned int)v9 != 115 && v9 > 112 || v9 <= 112 && (unsigned int)v9 != 99 && (unsigned int)v9 != 103 && v9 > -18446744069414584450 && (unsigned int)v9 != -130 || (unsigned int)v9 != 119 && (unsigned int)v9 != 116 && v9 > 116 && v9 > 112 && (unsigned int)v9 != 117)
            {
                if ((unsigned int)(v9 - 48) <= 9)
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x407900, 0x5));
                }
                sub_402dc0(); /* do not return */
            }
        }
        else
        {
            v10 = g_6164a0;
            g_6162d8 = 0;
            if (*((char *)g_6164a0) == 32)
            {
                do
                {
                    v11 = 1 - (unsigned int)g_6164a0 + v10;
                    v10 += 1;
                }
                while (*((char *)v10) == 32);
                g_6162d8 = v11;
            }
            g_6162e8 = v10;
            g_6162dc = strlen(v10);
            v12 = g_6162dc + v10;
            if (v10 < g_6162dc + v10)
            {
                while (v12[-1] == 32)
                {
                    v12 = &v12[-1];
                    if (v10 == v12)
                    {
                        break;
                    }
                }
            }
            *(v12) = 0;
            v13 = (unsigned int)&v12[-1 * v10];
            g_6162d4 = v13;
        }
    }
    v17 = (unsigned long long)g_60b25c;
    if (g_60b25c != (unsigned int)v7)
    {
        v18 = 1;
        if (g_60b25c < v7)
        {
            do
            {
                v20 = 2;
                v21 = "-";
                v22 = *((long long *)((char *)v6 + 0x8 * v17));
                v23 = *((long long *)((char *)v6 + 0x8 * v17));
                while (v20 != 0)
                {
                    v20 -= 1;
                    v24 = *(v23);
                    v25 = *(v21);
                    v21 = &v21[v26];
                    v23 = &v23[v26];
                    break;
                }
                if ((v24 > v25) - 0 - (v24 < v25) == 0)
                {
                    sub_402850();
                }
                else
                {
                    v29 = fopen(v22, "r");
                    if (v29 != 0)
                    {
                        sub_402850();
                        v32 = sub_405bf0();
                        if ((char)(v32 + 1 == 0))
                        {
                            v35 = (unsigned int)sub_404ce0();
                            v34 = "%s";
                        }
                    }
                    else
                    {
                        v31 = (unsigned int)sub_404c10();
                        __errno_location();
                        v34 = (unsigned long long)dcgettext(0x0, 0x40734c, 0x5);
                    }
                    if (v32 + 1 == 0 || v29 == 0)
                    {
                        v18 = 0;
                        error(0x0, *(__errno_location()), v34);
                    }
                }
                v17 = (unsigned long long)(g_60b25c + 1);
                g_60b25c = g_60b25c + 1;
            }
            while ((unsigned int)v17 < (unsigned int)v7);
        }
    }
    else
    {
        v18 = 1;
        sub_402850();
    }
    v36 = v18 ^ 1;
    return v36;
}

int sub_404af0()
{
}

int sub_404e60()
{
}

int sub_405bf0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_405c70() != 0)
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
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_408f78;
extern unsigned int g_408f98;
extern unsigned int g_408fc8;
extern unsigned int g_408fe8;
extern unsigned int g_409018;
extern unsigned long long stderr;

int sub_405df0()
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
                    if (v1 != 0 || v4 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                dcgettext(0x0, 0x408f78, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x408f98, 0x5);
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
            if ((v1 == 0 || v21 == 0) && (v1 == 0 || v22 == v16) && (v21 == 0 || *(v18) == 0) && (v21 == 0 || v4 == 0) && (*(v18) == 0 || v22 == v16) && (v4 == 0 || v22 == v16))
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
                                dcgettext(0x0, 0x409018, 0x5);
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
                            dcgettext(0x0, 0x408fe8, 0x5);
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
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((long long *)v17) != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x408fc8, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_404ca0()
{
}

int sub_405440()
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
        sub_405670(); /* do not return */
    }
}

extern unsigned long long g_616300;

int sub_403140()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_616300 = v1;
    return v2;
}

int sub_404dd0()
{
}

extern uint128_t g_616420;
extern uint128_t g_616430;
extern uint128_t g_616440;
extern unsigned long long g_616450;

int sub_404d50()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_616420;
    *((uint128_t *)&v1) = g_616430;
    *((uint128_t *)&v2) = g_616440;
    v4 = g_616450;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_404610();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern unsigned int g_407ac5;
extern unsigned int g_60b1f8;
extern char g_6162f8;
extern unsigned long long g_616300;

int sub_403160()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_406b60();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_6162f8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x407ac5, 0x5);
            if (g_616300 != 0)
            {
                sub_404cb0();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_6162f8 != 0)
    {
        v3 = sub_406b60();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_6162f8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60b1f8);
        error(0x0, *(v2), "%s");
    }
}

int sub_406a80()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_406410();
}

extern unsigned int g_60b2a0;
extern unsigned int g_60b2a4;
extern unsigned int g_60b2a8;
extern unsigned int g_60b2ac;
extern unsigned int g_60b2b0;
extern unsigned int g_60b2b4;
extern char g_60b2b8;
extern unsigned long long g_60b2c0;
extern unsigned long long g_60b2e0;
extern unsigned long long g_614f20;
extern unsigned long long g_614f40;
extern unsigned int g_6162c8;
extern unsigned int g_6162cc;
extern unsigned int g_6162d4;
extern unsigned int g_6162d8;
extern unsigned int g_6162dc;
extern unsigned long long g_6162e8;
extern char g_6162f1;
extern char g_6162f2;
extern char g_6162f3;
extern unsigned long long stdout[7];

int sub_402850()
{
    unsigned long long v1;  // rdi
    unsigned long long v2[3];  // rbp
    unsigned long|unsigned int v4;  // rbx
    unsigned long long v7;  // r12
    unsigned long|unsigned long long v9;  // rdx
    char *v10;  // r13
    unsigned long long v11;  // rsi
    char *v12;  // rax
    char *v13;  // rax
    char *v14;  // rax
    unsigned long|unsigned int v16;  // rsi
    unsigned long long v20;  // rbx
    unsigned long|char *|unsigned long long v21;  // rax

    v2 = v1;
    sub_403210();
    g_60b2b8 = 0;
    g_60b2ac = 0;
    g_60b2a8 = sub_402000();
    v4 = g_60b2a8;
    while (true)
    {
        g_60b2a0 = 0;
        while (true)
        {
            v21 = g_6162cc;
            if (v4 != 10 && v4 != -1)
            {
                if (g_6162d8 <= g_60b2a4 && g_6162dc + g_60b2b4 <= g_6162cc)
                {
                    g_60b2b4 = g_60b2a4;
                    g_60b2b0 = g_6162cc;
                    g_614f20 = &g_614f40;
                    g_60b2c0 = &g_60b2e0;
                    v16 = sub_4025a0();
                    sub_4021d0();
                    if (g_6162f1 != 0)
                    {
                        break;
                    }
                    if (g_6162f3 != 0)
                    {
                        if (g_60b2a4 == g_60b2b4)
                        {
                            if (v16 == 10 || g_60b2a4 + g_6162dc > g_6162cc)
                            {
                                break;
                            }
                            if (v16 != -1)
                            {
                                do
                                {
                                    v16 = (unsigned int)sub_4025a0();
                                }
                                while (g_60b2a4 == g_60b2b4 && g_6162cc == g_60b2ac && g_60b2a4 + g_6162dc <= g_6162cc && (unsigned int)v16 != -1 && (unsigned int)v16 != 10);
                            }
                        }
                    }
                    else
                    {
                        if (g_6162f2 != 0)
                        {
                            if (v16 == -1 || v16 == 10 || g_60b2a4 != g_60b2b4 || g_60b2a4 + g_6162dc > g_6162cc)
                            {
                                break;
                            }
                            if (g_6162cc != g_60b2b0)
                            {
                                do
                                {
                                    v16 = (unsigned int)sub_4025a0();
                                }
                                while (g_60b2a4 == g_60b2b4 && g_6162cc == g_60b2ac && g_60b2a4 + g_6162dc <= g_6162cc && (unsigned int)v16 != 10 && (unsigned int)v16 != -1);
                            }
                        }
                        else
                        {
                            if (v16 == -1 || v16 == 10 || g_60b2a4 != g_60b2b4 || g_60b2a4 + g_6162dc > g_6162cc)
                            {
                                break;
                            }
                            if (g_6162cc == g_60b2ac)
                            {
                                do
                                {
                                    v16 = (unsigned int)sub_4025a0();
                                }
                                while (g_60b2a4 == g_60b2b4 && g_6162cc == g_60b2ac && g_60b2a4 + g_6162dc <= g_6162cc && (unsigned int)v16 != 10 && (unsigned int)v16 != -1);
                            }
                        }
                    }
                }
                if (g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc)
                {
                    g_6162c8 = 0;
                    if (g_6162cc > g_60b2a4)
                    {
                        v7 = 1;
                    }
                }
            }
            if (v4 == 10 || v4 == -1)
            {
                g_6162c8 = 0;
                v7 = (unsigned int)v7 & v9;
            }
            if (g_6162cc > g_60b2a4)
            {
                sub_4020f0();
                v21 = g_6162c8;
                v9 = g_6162cc;
                v10 = g_6162e8;
            }
            else if (v4 != 10 || v7 != 0)
            {
                if ((v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc))
                {
                    sub_4020f0();
                    v9 = g_6162cc;
                    v10 = g_6162e8;
                    if (g_6162c8 != g_6162cc)
                    {
                        v11 = *(v10);
                        v7 = 1;
                    }
                }
            }
            if (g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0)
            {
                v10 = &v10[1];
                v12 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *((unsigned long long *)&v12) = v11;
                }
                else
                {
                    __overflow();
                    v9 = g_6162cc;
                }
                v21 = g_6162c8 + 1;
                g_6162c8 = g_6162c8 + 1;
            }
            if ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 != (unsigned int)v9 || g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && g_6162cc != g_6162c8)
            {
                v11 = *(v10);
            }
            if (g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) == 0 || ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 == (unsigned int)v9 || g_6162cc == g_6162c8 && g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) || ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 != (unsigned int)v9 || g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && g_6162cc != g_6162c8) && *(v10) == 0) && v7 != 0 || g_6162cc <= g_60b2a4 && g_6162c8 == g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc))
            {
                v21 = sub_4020f0();
            }
            if (g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) == 0 || ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 == (unsigned int)v9 || g_6162cc == g_6162c8 && g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) || ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 != (unsigned int)v9 || g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && g_6162cc != g_6162c8) && *(v10) == 0) && v7 != 0 || g_6162cc <= g_60b2a4 && g_6162c8 == g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) || ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 == (unsigned int)v9 || g_6162cc == g_6162c8 && g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) || ((g_6162cc <= g_60b2a4 && g_6162c8 != g_6162cc && (v4 != 10 || v7 != 0) && (v4 != -1 || v7 != 0) && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && *(v10) != 0 || *(v10) != 0) && (unsigned int)v21 != (unsigned int)v9 || g_6162cc > g_60b2a4 && (v4 == 10 || v4 == -1 || g_6162d8 > g_60b2a4 || g_6162dc + g_60b2b4 > g_6162cc) && g_6162cc != g_6162c8) && *(v10) == 0) && v7 == 0)
            {
                if (v4 == -1)
                {
                    v21 = (unsigned long long)(g_6162d4 + g_60b2a4);
                    if (g_6162d4 + g_60b2a4 <= g_6162cc)
                    {
                        v21 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *(v21) = 10;
                        }
                        else
                        {
                            v21 = __overflow();
                        }
                    }
                }
                else
                {
                    while (v4 != 10)
                    {
                        for (; (unsigned int)v4 != -1; v4 = v21)
                        {
                            v13 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *((unsigned long *)&v13) = v4;
                                v21 = v2[1];
                            }
                            else
                            {
                                __overflow();
                                v21 = v2[1];
                            }
                            if (v2[1] < v2[2] && stdout[5] < stdout[6] || v2[1] < v2[2] && stdout[5] >= stdout[6])
                            {
                                v2[1] = &v21[1];
                                v4 = *(v21);
                            }
                            if (stdout[5] < stdout[6] && v2[1] >= v2[2] || v2[1] >= v2[2] && stdout[5] >= stdout[6])
                            {
                                v21 = __uflow();
                            }
                        }
                    }
                }
            }
            if (...)
            {
                v14 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v14) = 10;
                }
                else
                {
                    __overflow();
                }
                v4 = sub_402000();
            }
            if (g_6162dc + g_60b2b4 > g_6162cc)
            {
                g_60b2a8 = -1;
                return v21;
            }
        }
        if (g_60b2c0 <= 6337248)
        {
            break;
        }
        *((char *)(g_60b2c0 - 24)) = *((char *)(g_60b2c0 - 24)) | 10;
        *((unsigned long *)&g_60b2a8) = v16;
        sub_401d70();
        sub_4023d0();
        v20 = g_60b2a8;
    }
    __assert_fail(); /* do not return */
}

extern int512_t g_616420;

int sub_404810()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_616420 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_616420 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_406a60()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4069e0();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40909f;
extern char g_616498[2];

int sub_406c20()
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

    v9 = g_616498;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40909f : (unsigned long long)nl_langinfo(0xe));
    if (g_616498 == 0)
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
            v9 = &g_40909f;
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
                                        v9 = &g_40909f;
                                        v10 = (tmp_10 == 0? &g_40909f : tmp_10);
                                        free(NULL);
                                        sub_405bf0();
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
                                        v61 = __uflow();
                                        v62 = (char)((unsigned int)v61 != -1);
                                    }
                                }
                                while (v62 != 0 && v61 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && v28 > 1 && (unsigned int)v26 != 32 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v26 != 35)
                        {
                            v60 = __uflow();
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && v28 > 1 && (unsigned int)v26 != 32 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v26 != 35) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40909f : tmp_10);
                            sub_405bf0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1)
                    {
                        v9 = &g_40909f;
                    }
                    else if (((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1) && v0 != 0 || (v28 > 1 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || v28 > 1 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40909f;
            free(v17);
        }
        *((char *[2])&g_616498[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40909f : tmp_10), v9);
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

extern char g_60b288;
extern unsigned long long g_60b290;

int sub_401d11()
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

    if (g_60b288 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60b290 >= 0)
            {
                break;
            }
            g_60b290 = g_60b290 + 1;
            *((long long *)(6336064 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60b288 = 1;
        return sub_401cbb();
    }
    return v4;
}

extern char g_6162f8;

int sub_403150()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_6162f8 = v1;
    return v2;
}

extern int512_t g_407b1c;
extern int512_t g_407b20;

int sub_4032e0()
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
        v3 = sub_406c20();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_407b1c : 4225831);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_407b20 : 4225827);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[4] == 56 && (v3[2] & 223) == 70 && (v3[1] & 223) == 84 && v1 == v2 && v3[5] == 0 && (v3[0] & 223) == 85 || (v3[1] & 223) == 66 && v4 == 71 && v1 == v2 && v3[3] == 56 && v3[2] == 49 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

int sub_40573d()
{
}

int sub_404912()
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

extern char g_60b2b8;
extern unsigned int g_6162c8;
extern unsigned long long stdout[7];

int sub_4020f0()
{
    void tmp_28;  // tmp #28
    void tmp_33;  // tmp #33
    void tmp_22;  // tmp #22
    unsigned long|unsigned int v1;  // rdx
    unsigned long v2;  // rdi
    unsigned long long v3;  // rbx
    char *v5;  // rax
    unsigned long long v6;  // rax
    char *v7;  // rax

    v1 = g_6162c8;
    v3 = g_6162c8 + v2;
    if (g_60b2b8 != 0)
    {
        v6 = ((long long)((char)(v3 >> 31 & 1 ^ 1)? (unsigned int)v3 : (unsigned int)(v3 + 7)) >> 3) * 8;
        if ((unsigned int)((unsigned long long)g_6162c8 + 1) < (unsigned int)((long long)((char)(v3 >> 31 & 1 ^ 1)? (unsigned int)v3 : (unsigned int)(v3 + 7)) >> 3 << 3) && g_6162c8 < (unsigned int)v6)
        {
            do
            {
                v5 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v5) = 9;
                }
                else
                {
                    __overflow();
                }
                tmp_22 = g_6162c8;
                tmp_28 = g_6162c8;
                tmp_33 = g_6162c8;
                v6 = (unsigned int)((long long)((char)((unsigned long long)g_6162c8 >> 31 & 1 ^ 1)? g_6162c8 : (unsigned int)((unsigned long long)g_6162c8 + 7)) >> 3) + 1;
                v1 = (unsigned int)v6 * 8;
                g_6162c8 = (unsigned int)v6 * 8;
            }
            while ((unsigned int)((long long)((char)(v3 >> 31 & 1 ^ 1)? (unsigned int)v3 : (unsigned int)(v3 + 7)) >> 3) > (unsigned int)((long long)((char)(tmp_28 >> 31 & 1 ^ 1)? tmp_33 : (unsigned int)(tmp_22 + 7)) >> 3) + 1);
        }
    }
    if ((unsigned int)(g_6162c8 + v2) > v1)
    {
        do
        {
            v7 = stdout[5];
            if (stdout[5] < stdout[6])
            {
                stdout[5] = stdout[5] + 1;
                *(v7) = 32;
            }
            else
            {
                __overflow();
            }
            v6 = g_6162c8 + 1;
            g_6162c8 = g_6162c8 + 1;
        }
        while ((unsigned int)v6 < (unsigned int)(g_6162c8 + v2));
    }
    return v6;
}

int sub_406a40()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_4069e0();
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    struct struct_1 *field_20;
} struct_0;

extern unsigned long long g_60b2c0;
extern unsigned int g_60b2e0;
extern unsigned long long g_60b300[5];
extern unsigned long long g_614f20;
extern char g_614f40;
extern unsigned long long stdout;

int sub_402420()
{
    struct_0 *v2;  // rcx
    unsigned long long v3[5];  // rdi
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdx
    unsigned long long|unsigned long long [5]|unsigned long long * v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rcx
    unsigned long long *v12;  // rax
    unsigned long long v13;  // rdx
    unsigned long long *v14;  // rsi
    unsigned long long v15;  // rbx

    if (g_60b2c0 != 6337248)
    {
        sub_401d70();
        v2 = g_60b300;
        if (g_60b2c0 != g_60b300)
        {
            v8 = g_60b300[3];
            v6 = g_60b2c0;
            v7 = 9223372036854775807;
            while (true)
            {
                v3 = v2->field_20;
                v4 = v2->field_20->field_18;
                v5 = v8 - v2->field_20->field_18;
                if (v7 < v7)
                {
                    v7 = v5;
                    v6 = v2;
                }
                else
                {
                    v2 = v3;
                    v7 = (v7 <= 9223372036854775798? v7 + 9 : v7);
                    v8 = v4;
                    if (g_60b2c0 == v3)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            v6 = g_60b2c0;
        }
        sub_4023d0();
        __memmove_chk(0x614f40, *(v6), g_614f20 - *(v6), 0x1388);
        v10 = *(v6);
        v11 = -0x1 * (*(v6) + -0x1 * &g_614f40);
        g_614f20 = &((char *)(-0x1 * (*(v6) + -0x1 * &g_614f40)))[g_614f20];
        if (v6 <= g_60b2c0)
        {
            v12 = v6;
            while (true)
            {
                v13 = v10 + v11;
                v12 = &v12[5];
                v12[-5] = v13;
                if (v12 > g_60b2c0)
                {
                    break;
                }
                v10 = *(v12);
            }
        }
        v14 = v6;
        v15 = v6 - &g_60b2e0;
        g_60b2c0 = g_60b2c0 - v15;
        return __memmove_chk(0x60b2e0, v14, (g_60b2c0 >> 3) * 8 + 40, 0x9c40);
    }
    g_614f20 = &g_614f40;
    return fwrite_unlocked(&g_614f40, 0x1, g_614f20 + -0x1 * &g_614f40, stdout);
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

extern unsigned long long g_60b300;

int sub_4023d0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rbx
    unsigned long v3;  // rdi

    v1 = sub_4022e0();
    v2 = g_60b300;
    if (g_60b300 != v3)
    {
        while (true)
        {
            v1 = sub_4022e0();
            v2 = v2->field_20;
            if (v3 == v2)
            {
                break;
            }
        }
    }
    return v1;
}

int sub_405d10()
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

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern struct_0 *g_60b238;
extern unsigned long long g_60b240;
extern unsigned long long g_60b248;
extern unsigned int g_60b250;
extern unsigned long long g_616320;

int sub_404a20()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60b250;
    if (g_60b250 > 1)
    {
        v2 = &g_60b238[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60b238[(unsigned long long)(g_60b250 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60b238->field_8 != 6382368)
    {
        v1 = free(g_60b238->field_8);
        g_60b240 = 0x100;
        g_60b248 = &g_616320;
    }
    if (g_60b238 != 6337088)
    {
        v1 = free(g_60b238);
        g_60b238 = &g_60b240;
    }
    g_60b250 = 1;
    return v1;
}

int sub_404cb0()
{
}

int sub_4056b0()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    if (rbp<4> == 0)
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
        rbp<4> = sub_4057b0();
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
    if (v0 < v3 || rbp<4> != 0 || v0 > v5)
    {
        sub_404e60();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

int sub_405c70()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_405cb0();
    }
}

int sub_405260()
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

extern unsigned long long program_invocation_short_name;

int sub_401cbb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_405620()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405420();
}

int sub_405420()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405670(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

