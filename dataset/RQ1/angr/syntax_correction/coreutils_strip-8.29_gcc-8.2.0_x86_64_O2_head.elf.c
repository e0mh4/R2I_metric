
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
extern unsigned int g_60b274;
extern unsigned int g_60b278;
extern unsigned int g_60b27c;
extern unsigned int g_60b420;
extern unsigned int g_60b424;
extern unsigned int g_60b428;
extern unsigned long long g_60b430;
extern unsigned long long g_60b460;

int sub_406db0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60b420 = g_60b27c;
    g_60b424 = g_60b278;
    v1 = (unsigned int)v2;
    v0 = &g_60b420;
    g_60b27c = g_60b420;
    g_60b460 = g_60b430;
    g_60b274 = g_60b428;
    return sub_4067e0();
}

// int sub_404fa0()

int sub_405b8c()
{
    abort(); /* do not return */
}

extern int512_t g_60b1e8;

// int sub_407800()

extern unsigned int g_4078df;
extern char g_60b2b9;

int sub_402bc0()
{
    char v0;  // [bp-0x20b8]
    unsigned int v1;  // [bp-0x20a0]
    char v2;  // [bp-0x2028]
    unsigned long long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // rdx
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbp
    unsigned long v21;  // rsi
    unsigned long long v23;  // rbx
    unsigned long long v24;  // r12
    unsigned long long v25;  // r13
    unsigned long long v28;  // rbx
    unsigned long long v29;  // r12
    unsigned long long v30;  // r13

    if (v8 != 0)
    {
        v6 = v9;
        v5 = v10;
        v4 = stack_base + 0;
        v14 = v8;
        v3 = v11;
        while (true)
        {
            v12 = sub_405310();
            if (v12 == -1)
            {
                v20 = (unsigned int)sub_4050a0();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
                v23 = v3;
                v24 = v5;
                v25 = v6;
                return 0;
            }
            else if (v12 != 0)
            {
                v13 = 0;
                while (true)
                {
                    v13 += 1;
                    if (v2 == g_60b2b9)
                    {
                        v14 -= 1;
                        if (v14 == 1)
                        {
                            v19 = lseek();
                            if (INVALID_IR && (((unsigned short)v1 & 0xf000) == 0x8000 || __fxstat(0x1, v21, (unsigned int)&v0) != 0))
                            {
                                sub_4029f0();
                            }
                            sub_402a90();
                            v28 = v3;
                            v29 = v5;
                            v30 = v6;
                            return 1;
                        }
                    }
                    if (v2 != g_60b2b9 || v14 != 1)
                    {
                        sub_402a90();
                    }
                }
            }
            else
            {
                v16 = v3;
                v17 = v5;
                v18 = v6;
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
}

extern int512_t g_60b3e0;

int sub_404d30()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60b3e0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_403870();
}

// int sub_405250()

int sub_405750()
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

extern int512_t g_60b3e0;

int sub_404c80()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60b3e0 : v1));
}

int sub_405170()
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
    return sub_404aa0();
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

extern unsigned int g_409860;
extern unsigned int g_4098a4;

int sub_4067e0()
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
undefined v24;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // rdx
    unsigned long v29;  // rax
    char v30[2];  // rcx
    unsigned long long *v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char *v34;  // rsi
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
                        sub_4060e0();
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
                v42 = v26;
                v32 = 3;
                v33 = "-";
                v48 = *((long long *)(v15 + v26 * 8));
                v34 = *((long long *)(v15 + v26 * 8));
                while (v32 != 0)
                {
                    v32 -= 1;
                    v35 = *(v34);
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
                            sub_4060e0();
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
    if ((v13 != (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
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
        v45 = (unsigned int)sub_4061c0();
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
                        dcgettext(0x0, 0x409860, 0x5);
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
            dcgettext(0x0, 0x4098a4, 0x5);
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
                    dcgettext(0x0, 0x409860, 0x5);
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
        v45 = (unsigned int)sub_4061c0();
    }
    v63 = v45;
    return v63;
}

int sub_407670()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v9;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if (v4 != 0)
        {
            fileno(v2);
        }
        if ((v4 == 0 || (unsigned long long)lseek() != -1) && sub_4076f0() != 0)
        {
            v9 = fclose(v2);
            if (v0 != 0)
            {
                *(__errno_location()) = v0;
                v9 = -18446744069414584321;
            }
            return v9;
        }
    }
}

int sub_404fb2()
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
    return sub_404aa0();
}

extern unsigned int g_4082e5;
extern unsigned int g_60b200;
extern char g_60b2c0;
extern unsigned long long g_60b2c8;

int sub_4034c0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_407040();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60b2c0 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x4082e5, 0x5);
            if (g_60b2c8 != 0)
            {
                sub_405140();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60b2c0 != 0)
    {
        v3 = sub_407040();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60b2c0 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60b200);
        error(0x0, *(v2), "%s");
    }
}

int sub_406e10()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_406db0();
}

int sub_406e50()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4067e0();
}

extern char g_60b3e0;

int sub_404d00()
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
    v3 = (v2 == 0? &g_60b3e0 : v2);
    *((int *)(tmp_11? &g_60b3e0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60b3e0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60b3e0;
        abort(); /* do not return */
    }
}

int sub_406e30()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_406db0();
}

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_2 *field_20;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
} struct_3;

extern unsigned int g_409798;
extern unsigned int g_4097b8;
extern unsigned int g_4097e8;
extern unsigned int g_409808;
extern unsigned int g_409838;
extern unsigned long long stderr;

int sub_4061c0()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // rbx
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r12
    unsigned int *v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r14

    v11 = v9->field_20;
    v3 = v12;
    v2 = v13;
    v14 = v9->field_20;
    *((struct struct_2 *)&v5) = *(v9->field_20);
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
                                dcgettext(0x0, 0x409798, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x4097b8, 0x5);
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
                                    v37 = (char *)&v37[1].field_0 + 4;
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
                                dcgettext(0x0, 0x409838, 0x5);
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
                            dcgettext(0x0, 0x409808, 0x5);
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
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((long long *)v17) != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x4097e8, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_405ba0()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    v2 = sub_405ca0();
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
        sub_4052f0();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

// int sub_4052f0()

int sub_406e70()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_406db0();
}

int sub_402b10()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rsi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12

    if (v4 != 0)
    {
        v2 = v5;
        v1 = stack_base + 0;
        v0 = v6;
        v7 = v4;
        while (true)
        {
            v8 = sub_405310();
            if (v8 != -1)
            {
                v7 -= v8;
                if (v8 == 0 && v7 != 0)
                {
                    v12 = v0;
                    v13 = v2;
                    return 2;
                }
                if (v7 == 0 || v8 != 0)
                {
                    if (v8 != 0)
                    {
                        sub_402a90();
                    }
                    v14 = v0;
                    v15 = v2;
                    return 0;
                }
            }
            else
            {
                v10 = v0;
                v11 = v2;
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

extern unsigned int g_407971;
extern unsigned int g_407ab8;
extern unsigned int g_407ae0;
extern unsigned int g_407b08;
extern unsigned int g_407b90;
extern unsigned int g_407bc8;
extern unsigned int g_407c18;
extern unsigned int g_407da8;
extern unsigned int g_407e30;
extern unsigned int g_407e70;
extern unsigned int g_407ea0;
extern unsigned int g_407ed8;
extern unsigned int g_407fa0;
extern unsigned int g_407fe8;
extern unsigned int g_408008;
extern unsigned long long stdout;

int sub_4030d0()
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
    unsigned long long v31[2];  // rax
    char *v32;  // rdi
    char *v33;  // rsi
    unsigned long long v34;  // rcx
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    char *v41;  // rax
    char *v42;  // rax
    unsigned long long v43;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x407ab8, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407ae0, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407b08, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407b90, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407bc8, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407c18, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407da8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407e30, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407e70, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407ea0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407ed8, 0x5), stdout);
        v0 = "[";
        v31 = &v0;
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
            v31 = &v2;
            v32 = v2;
            if (v2 == 0)
            {
                break;
            }
            v33 = "head";
            v34 = 5;
            if ((v35 > v36) - 0 - (v35 < v36) == 0)
            {
                break;
            }
            while (v34 != 0)
            {
                v34 -= 1;
                v35 = *(v33);
                v36 = *(v32);
                v32 = &v32[v37];
                v33 = &v33[v37];
                break;
            }
        }
        if (v31[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407971, 0x5));
            v42 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407971, 0x5));
            v41 = setlocale(0x5, 0x0);
            if (v41 != 0)
            {
                v43 = strncmp(v41, "en_", 0x3);
            }
            if (v41 == 0 || v43 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407fe8, 0x5));
            }
        }
        if ((v31[1] == 0 || v42 != 0) && (v31[1] == 0 || strncmp(v42, "en_", 0x3) != 0) && (v41 != 0 || v31[1] != 0) && (v43 != 0 || v31[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407fa0, 0x5));
        }
        if (v31[1] != 0 || v41 != 0 && v43 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407fe8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408008, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned int g_4078df;
extern char g_60b2b9;

int sub_402e80()
{
    void tmp_28;  // tmp #28
    unsigned long v0;  // [bp-0x2048]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x2040]
    char v2;  // [bp-0x2038]
    unsigned long v4;  // r8
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rcx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long v11;  // r15
    unsigned long long v12;  // r15
    unsigned long long v13;  // r8
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rax

    tmp_28 = v4 - v7 >> 63 >> 51;
    v0 = v6;
    v1 = v7;
    v7 = v6;
    v16 = v4 - ((unsigned long long)((unsigned int)(v4 - v7 + (v4 - v7 >> 63 >> 51)) & 8191) != tmp_28? (unsigned long long)((unsigned int)(v4 - v7 + (v4 - v7 >> 63 >> 51)) & 8191) - tmp_28 : 0x2000);
    v9 = sub_4029f0();
    if (!(INVALID_IR))
    {
        v13 = (unsigned int)sub_405310();
        if (v13 != -1)
        {
            if (v10 != 0 && v13 != 0)
            {
                v12 = v11 - (unsigned long long)(char)(*(&((char *)stack_base)[v13 + -8249]) != g_60b2b9);
            }
            if (v10 == 0 || v13 == 0)
            {
                v11 = v10;
            }
            while (true)
            {
                if (v13 != 0)
                {
                    while (true)
                    {
                        if (v12 == 0)
                        {
                            v13 -= 1;
                            v14 = v12 - 1;
                            if (v16 > v1)
                            {
                                v1 = v13;
                                v19 = sub_4029f0();
                                if (INVALID_IR)
                                {
                                    break;
                                }
                                if (!(INVALID_IR))
                                {
                                    v21 = sub_402b10();
                                    v13 = v1;
                                    if (v21 != 0)
                                    {
                                        sub_402e00();
                                        v18 = 0;
                                    }
                                }
                            }
                            if (v16 <= v1 || v21 == 0 && !(INVALID_IR))
                            {
                                if (v13 + 1 != 0)
                                {
                                    sub_402a90();
                                }
                                v18 = !((unsigned long long)(unsigned int)sub_4029f0()) >> 63;
                            }
                        }
                        else
                        {
                            v15 = memrchr((unsigned int)&v2, g_60b2b9, v13);
                            if (v15 == 0)
                            {
                                break;
                            }
                            if (v15 != 0)
                            {
                                v13 = v15 + -0x1 * &v2;
                                v14 = v12 - 1;
                                v12 = v14;
                                if (v13 == 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    if (v12 == 0 && v16 > v1)
                    {
                        v18 = 0;
                    }
                    else if (v12 == 0 && (v16 <= v1 || !(INVALID_IR)))
                    {
                        return v18;
                    }
                }
                if (v16 != v1)
                {
                    v16 -= 0x2000;
                    v17 = sub_4029f0();
                    if (INVALID_IR)
                    {
                        break;
                    }
                    v13 = (unsigned int)sub_405310();
                    if (v13 == -1)
                    {
                        break;
                    }
                }
                v18 = 1;
            }
            if (!(INVALID_IR) && v16 != v1)
            {
                v20 = (unsigned int)sub_4050a0();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
                v18 = 0;
            }
            else if (true)
            {
                v18 = 0;
            }
            else
            {
                return v18;
            }
        }
        v20 = (unsigned int)sub_4050a0();
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
        v18 = 0;
    }
    if (INVALID_IR || v13 != -1)
    {
        v18 = 0;
    }
    return v18;
}

int sub_405ca0()
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
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rcx
    unsigned int v41;  // cc_dep1
    unsigned int v42;  // cc_dep1
    unsigned int v43;  // cc_dep1
    unsigned int v44;  // cc_dep1
    unsigned int v45;  // cc_dep1
    unsigned long long v46;  // rax
    unsigned long long v47;  // r8

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
        if (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0)
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
                                    /* goto *((long long *)(rdx * 8 + 4232280)); */
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
        if ((*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v35 = v30;
                v5 = 6;
                do
                {
                    v33 = v33 * v35;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v42 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v42 != 1);
            case 5: case 37:
                v28 = v30;
                if (!(INVALID_IR))
                {
                    v46 = tmp_11 * v28 * v28;
                    v33 = v46;
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
                v36 = v30;
                v5 = 5;
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
            case 18: case 50:
                v34 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v34;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v41 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v41 != 1);
            case 23:
                v38 = v30;
                v5 = 8;
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
            case 24:
                v37 = v30;
                v5 = 7;
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
                break;
            case 32:
                if (INVALID_IR)
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v47 = &v32[v31];
                *(v12) = v47;
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

int sub_4060e0()
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

    v10 = sub_4013c0();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6336048 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern char g_60b2a8;
extern unsigned long long g_60b2b0;

int sub_402931()
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

    if (g_60b2a8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60b2b0 >= 0)
            {
                break;
            }
            g_60b2b0 = g_60b2b0 + 1;
            *((long long *)(6336064 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60b2a8 = 1;
        return sub_4028db();
    }
    return v4;
}

// int sub_405280()

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

int sub_407730()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    struct v7;  // rbx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r12

    if (v4->field_10 == v4->field_8 && v4->field_28 == v4->field_20 && v4->field_48 == 0)
    {
        v2 = v5;
        v1 = stack_base + 0;
        v0 = v6;
        v7 = v4;
        fileno(v4);
        v9 = lseek();
        if (v9 != -1)
        {
            v7->field_0 = v7->field_0 & -17;
            v7->field_90 = v9;
            v9 = 0;
        }
        v10 = v0;
        v11 = v2;
        return v9;
    }
}

int sub_4070a0()
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

int sub_403870()
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
            v26 = (unsigned int)sub_403770();
            v27 = (unsigned long long)(unsigned int)sub_403770();
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
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
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
                            v89 = 0;
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
                            v40 = 32;
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
                        v89 = (unsigned int)v39 == 2;
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (unsigned int)v39 == 2;
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
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v89 = (unsigned int)v39 == 2;
                            v89 = (unsigned int)v39 == 2;
                            v80 += 1;
                            v46 = (v78 ^ 1) & (unsigned int)v33;
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
                            v76 = (unsigned int)sub_403870();
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_406eb0();
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
                v50 = 0;
                v55 = 0;
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
                if (v46 != 0 && v76 >= v79)
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
            if ((v78 == 0 || v15 != 1) && (v76 == 0 || v15 != 1) && ((v81 == 2 & v17) != 0 || v15 != 1))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_403870();
            }
            if ((v17 == 0 || v76 >= v79) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v76 >= v79) && (v5 != 0 || v76 >= v79) && (v17 == 0 || v89 != 0 || v15 != 1) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v89 != 0 || v15 != 1) && (v89 != 0 || v5 != 0 || v15 != 1))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v18 != 0 && v6 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v15 != 1) && (v76 == 0 || v15 != 1) && ((v81 == 2 & v17) != 0 || v15 != 1))
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

// int sub_405960()

int sub_405910()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405b60(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_4059b0()
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
        sub_405b60(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60b258;
extern uint128_t g_60b260;
extern unsigned int g_60b270;
extern int512_t g_60b2e0;

int sub_404aa0()
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
    v17 = g_60b258;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60b270 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60b258 != 6337120)
            {
                v16 = sub_405970();
                g_60b258 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405970();
                v17 = v15;
                g_60b258 = v15;
                *(v15) = g_60b260;
            }
            memset(&v17[(long long)(int)g_60b270], 0x0, (int)((unsigned int)v13 + 1 - g_60b270) * 16);
            g_60b270 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405b60(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_60b270 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_403870();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6337248)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_405910();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_403870();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405770()
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
    return sub_405370();
}

// int sub_405c2d()

int sub_405ac0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405910();
}

extern int512_t g_60b3e0;

int sub_404c90()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60b3e0 : v1)) = v2;
    return &g_60b3e0;
}

// int sub_4052b0()

extern unsigned int g_4078ce;
extern unsigned long long stdout;

int sub_402a90()
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
    v4 = (unsigned int)sub_4050a0();
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4078ce, 0x5));
}

// int sub_404f80()

extern unsigned int g_4090d2;
extern unsigned int g_4090fd;
extern unsigned int g_409330;

int sub_405890()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4090d2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4090fd, 0x5));
    dcgettext(0x0, 0x409330, 0x5);
}

extern unsigned long long g_60b2c8;

int sub_4034a0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60b2c8 = v1;
    return v2;
}

extern unsigned int g_40908b;
extern unsigned int g_40908f;
extern unsigned int g_40909f;
extern unsigned int g_4090b6;
extern unsigned int g_409118;
extern unsigned int g_4091e8;
extern unsigned int g_409208;
extern unsigned int g_409230;
extern unsigned int g_409258;
extern unsigned int g_409288;

int sub_405370()
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
    dcgettext(0x0, 0x40908b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409118, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40908f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40909f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4090b6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x4091e8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x409208, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x409230, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x409258, 0x5);
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
        dcgettext(0x0, 0x409288, 0x5);
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

extern int512_t g_40833e;
extern int512_t g_408342;

int sub_403770()
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
        v3 = sub_407100();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40833e : 4227913);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_408342 : 4227909);
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

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_403680()
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

extern unsigned long long g_4098bf;

int sub_406eb0()
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
        v5 = &g_4098bf;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4070a0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern unsigned long long program_invocation_short_name;

int sub_4028db()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_405030()
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
    return sub_404aa0();
}

// int sub_405140()

int sub_404dcb()
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
    v7 = (unsigned int)sub_403870();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_405910();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_403870();
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

extern int512_t g_60b3e0;

int sub_404ce0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60b3e0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60b3e0 : v1) + 4)) = v3;
    return v2;
}

extern char g_60b2c0;

int sub_4034b0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60b2c0 = v1;
    return v2;
}

int sub_405b10()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405910();
}

int sub_405970()
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
            sub_405b60(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_403560()
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
            v4 = sub_405310();
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
                *(__errno_location()) = 0;
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

typedef struct struct_1 {
    unsigned long long field_0;
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern unsigned long long g_1;
extern unsigned int g_40787c;
extern unsigned int g_4078df;
extern unsigned int g_40798c;
extern unsigned int g_40799a;
extern unsigned int g_4079ee;
extern unsigned int g_407a26;
extern unsigned int g_408040;
extern unsigned long long g_408190;
extern unsigned int g_4098bf;
extern char g_60b1f0;
extern unsigned int g_60b27c;
extern char g_60b2b8;
extern char g_60b2b9;
extern char g_60b2ba;
extern char g_60b2bb;
extern char *g_60b460;

int main()
{
    unsigned long long v0;  // [bp-0x178]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x160]
    unsigned long v2;  // [bp-0x158]
    unsigned int v3;  // [bp-0x150]
    char v4;  // [bp-0x14b]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x14a]
    char v6;  // [bp-0x149]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x148]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x140]
    char *v9;  // [bp-0x138]
    unsigned long v10;  // [bp-0x130]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x128]
    unsigned long v12;  // [bp-0x120]
    unsigned long long v13;  // [bp-0x118]
    unsigned long long v14;  // [bp-0x110]
    unsigned long long v15;  // [bp-0x108]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // [bp-0x100]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // [bp-0xf8]
    unsigned long v18;  // [bp-0xf0]
    unsigned long v19;  // [bp-0xe8]
    unsigned long v20;  // [bp-0xe0]
    unsigned long v21;  // [bp-0xd8]
    unsigned long v22;  // [bp-0xd0]
    char v23;  // [bp-0xc8]
    unsigned int v24;  // [bp-0xb0]
    unsigned long long v25;  // [bp-0x98]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r12
    char v32[2];  // rcx
    unsigned long long v33;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v34;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // rdx
    unsigned long long v36;  // r8
    unsigned long long v37;  // r9
    unsigned long long v38;  // rdi
    unsigned long long v39;  // r10
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    char *v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long *v48;  // rax
    char *v49;  // r12
    unsigned long long v50;  // rbx
    unsigned long long v51;  // rax
    char *v52;  // r15
    unsigned long long v53;  // rdx
    char *v54;  // rdi
    unsigned long long v55;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v56;  // rsi
    unsigned long long v57;  // cc_dep1
    unsigned long long v58;  // cc_dep2
    unsigned long v59;  // d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v60;  // r14
    unsigned long long v62;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v64;  // rbx
    unsigned long long v65;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbx
    unsigned long long v70;  // r8
    unsigned long long v71[1027];  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v72;  // rbp
    void *v73;  // rax
    unsigned long long v74;  // rbp
    unsigned long long v75;  // r15
    unsigned long long v76;  // rax
    unsigned long long v77[1027];  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v78;  // rbx
    unsigned long long v79;  // r13
    unsigned long long v81;  // rbp
    unsigned long long v82;  // r13
    unsigned long long v83;  // rbx
    void *v84;  // r12
    unsigned long long *v85;  // rbp
    unsigned long long v86;  // r14
    unsigned long long v87;  // rbp
    unsigned int *v88;  // rax
    unsigned long long v90;  // rdx
    unsigned long long v91[1027];  // rbx
    unsigned long long v92;  // r15
    unsigned long long v94;  // rax
    unsigned long long v96;  // r15
    unsigned int *v98;  // rbx
    unsigned long long v99;  // rbx
    unsigned long long v100;  // r8
    unsigned long long v104;  // r14
    unsigned long long v106;  // rdx
    unsigned long long v107;  // rdi
    unsigned long long v108[1027];  // r14
    unsigned long long v112;  // rbx
    unsigned long long v113;  // rbx
    unsigned long long v114;  // rbp
    unsigned int *v115;  // r13
    unsigned long long v116;  // rbp
    unsigned long long v117;  // rbp
    unsigned long long v118;  // rbx
    unsigned long long v119;  // rbx
    unsigned long long v121;  // rbx
    unsigned long long v123;  // rbx
    unsigned long long v125[1027];  // rcx
    unsigned long long v127;  // rbx
    unsigned long long v128;  // rbx
    unsigned long long v130;  // rbx
    unsigned long long v131[1027];  // r13
    unsigned long long v132;  // rbx
    unsigned long long *v133;  // r13
    unsigned long long v134;  // rbp
    unsigned long long v135;  // rbx
    unsigned long long v136;  // rbp
    unsigned long long v137;  // r12
    void *v138;  // rdi
    unsigned long long v140[1027];  // rdi
    unsigned long long v143;  // rax
    unsigned long long v144;  // rbp
    unsigned long long v145;  // rax
    unsigned long long v146;  // rax
    unsigned long long v148;  // rbx
    void *v149;  // rbp
    unsigned long long v150;  // rax

    v29 = v28;
    v66 = v56;
    sub_4036d0();
    setlocale(0x6, 0x4098bf);
    bindtextdomain(0x40798c, 0x408040);
    textdomain(0x40798c);
    sub_407800();
    g_60b2b8 = 0;
    g_60b2ba = 0;
    g_60b2b9 = 10;
    if ((unsigned int)v28 > 1)
    {
        v56 = *((long long *)(v56 + &g_1));
        if (*((char *)*((long long *)(v66 + &g_1))) == 45 && (unsigned int)(char)*((char *)(v56 + &g_1)) - 48 <= 9)
        {
            v56 += &g_1;
            v32 = v56;
            do
            {
                v32 += &g_1;
                v33 = v32[0];
            }
            while ((unsigned int)v32[0] - 48 <= 9);
            if (v33 != 0)
            {
                v35 = v32;
                v36 = 0;
                v37 = 10;
                v38 = 0;
                v39 = &g_1;
                v34 = 0;
                while (true)
                {
                    v40 = v33 - 98;
                    switch (v33 - 98 & 255)
                    {
                    case 0: case 9: case 11:
                        v38 = v33;
                        v39 = 0;
                        break;
                    case 1:
                        v38 = 0;
                        v39 = 0;
                        break;
                    case 10:
                        v39 = &g_1;
                        break;
                    case 15:
                        v34 = &g_1;
                        break;
                    case 20:
                        v34 = &g_1;
                        break;
                    case 24:
                        v36 = &g_1;
                        v37 = 0;
                        break;
                    default:
                        if (v36 != 0)
                        {
                            *((unsigned long long *)&g_60b2b9) = v37;
                        }
                        v42 = dcgettext(0x0, 0x40799a, 0x5);
                    }
                    if ((v33 - 98 & 255) <= 24)
                    {
                        v41 = v40;
                        if (*((long long *)(v41 * 8 + 4227264)) == 4201116 || *((long long *)(v41 * 8 + 4227264)) == 4201131 || *((long long *)(v41 * 8 + 4227264)) == 4201006 || *((long long *)(v41 * 8 + 4227264)) == 4201109 || *((long long *)(v41 * 8 + 4227264)) == 4201124 || *((long long *)(v41 * 8 + 4227264)) == 4201102)
                        {
                            v35 += &g_1;
                            v33 = *(v35);
                            v5 = v39;
                            if (v36 != 0)
                            {
                                *((unsigned long long *)&g_60b2b9) = v37;
                            }
                            *((unsigned long long *)&v32[0]) = v38;
                            if (v38 == 0)
                            {
                                break;
                            }
                            *((char *)(v32 + &g_1)) = 0;
                        }
                    }
                }
                if ((char)v33 == 0)
                {
                    v66 += &g_1;
                    v29 = (unsigned int)v29 + -0x1 * &g_1;
                    v1 = (unsigned int)sub_402990();
                    v66->field_0 = *((long long *)(v66 - &g_1));
                }
                else if (*((long long *)(v41 * 8 + 4227264)) == 4203405 || (v33 - 98 & 255) > 24)
                {
                    error(0x0, 0x0, v42);
                }
            }
            else
            {
                *((unsigned long long **)&v5) = &g_1;
                v34 = 0;
            }
            v66 += &g_1;
            v29 = (unsigned int)v29 + -0x1 * &g_1;
            v1 = (unsigned int)sub_402990();
            v66->field_0 = *((long long *)(v66 - &g_1));
        }
    }
    if ((unsigned int)v28 <= 1 || (unsigned int)(char)*((char *)(v56 + &g_1)) - 48 > 9 || *((char *)*((long long *)(v66 + &g_1))) != 45)
    {
        *((unsigned long long **)&v5) = &g_1;
        v34 = 0;
        v1 = 10;
    }
    v4 = 0;
    while (true)
    {
        v43 = sub_406e30();
        if ((unsigned int)v60 == -1)
        {
            if (v34 == 1 || v34 == 0 && (unsigned int)(unsigned long long *)(v29 + -0x1 * &g_1) > g_60b27c)
            {
                *((unsigned long long **)&g_60b2ba) = &g_1;
            }
            if ((char)(v1 - 0 >> 63) && v5 == 0 && v4 != 0)
            {
                sub_403680();
                v50 = (unsigned int)sub_4052f0();
                dcgettext(0x0, 0x40787c, 0x5);
                error(0x1, 0x4b, "%s: ");
            }
            if (v4 == 0 || !((char)(v1 - 0 >> 63)) || v5 != 0)
            {
                if (g_60b27c < (unsigned int)v29)
                {
                    v48 = (char *)v66 + (int)g_60b27c * &g_1;
                    v49 = *(v48);
                    if (*(v48) != 0)
                    {
                        v9 = "-";
                    }
                    else
                    {
                        *((unsigned long long **)&v6) = &g_1;
                    }
                }
                else
                {
                    v48 = &g_408190;
                    v49 = "-";
                    v9 = "-";
                }
                if (g_60b27c >= (unsigned int)v29 || *(v48) != 0)
                {
                    v51 = v48 + &g_1;
                    v52 = v49;
                    v2 = v51;
                    *((unsigned long long **)&v6) = &g_1;
                    v20 = (unsigned int)v1 & 8191;
                    v19 = 0x2000 - (unsigned long long)((unsigned int)v1 & 8191);
                    v12 = v1 + 0x2000;
                    v53 = v1 + 0x2000 - (unsigned long long)((unsigned int)v1 & 8191) >> 13;
                    v18 = (v1 + 0x2000) * &g_1;
                    v14 = v1 + 0x2000 - (unsigned long long)((unsigned int)v1 & 8191) >> 13;
                    v10 = (v1 + 0x2000 - (unsigned long long)((unsigned int)v1 & 8191) >> 13) + (char *)&g_1;
                    v15 = (v1 + 0x2000 - (unsigned long long)((unsigned int)v1 & 8191) >> 13) + (char *)&g_1 >> &g_1;
                }
            }
        }
        else if ((unsigned int)v60 != 110)
        {
            if (v60 <= 110)
            {
                if ((unsigned int)v60 == -130)
                {
                    sub_4030d0(); /* do not return */
                }
                else if ((unsigned int)v60 != 99)
                {
                    v60 = v43;
                    if ((unsigned int)v43 == -131)
                    {
                        v0 = 0;
                        sub_4057d0();
                        exit(0x0); /* do not return */
                    }
                }
                if ((unsigned int)v60 == 99)
                {
                    v4 = *(g_60b460) == 45;
                    if (*(g_60b460) == 45)
                    {
                        g_60b460 = g_60b460 + &g_1;
                    }
                    v5 = 0;
                    v1 = (unsigned int)sub_402990();
                }
            }
            else if ((unsigned int)v60 == 118)
            {
                v34 = &g_1;
            }
            else if (v60 > 118)
            {
                if ((unsigned int)v60 == 122)
                {
                    g_60b2b9 = 0;
                }
                if ((unsigned int)v60 == 128)
                {
                    *((unsigned long long **)&g_60b2bb) = &g_1;
                }
            }
            else if ((unsigned int)v60 == 113)
            {
                v34 = &g_1;
            }
            if (v60 <= 110 && (unsigned int)v60 != 99 && (unsigned int)v60 != -130 && (unsigned int)v43 != -131 || (unsigned int)v60 != 118 && v60 > 110 && (v60 <= 118 || (unsigned int)v60 != 122) && (v60 <= 118 || (unsigned int)v60 != 128) && ((unsigned int)v60 != 113 || v60 > 118))
            {
                if ((unsigned int)(v60 - 48) > 9)
                {
                    break;
                }
                v42 = dcgettext(0x0, 0x40799a, 0x5);
            }
        }
        else
        {
            v4 = *(g_60b460) == 45;
            if (*(g_60b460) == 45)
            {
                g_60b460 = g_60b460 + &g_1;
            }
            *((unsigned long long **)&v5) = &g_1;
            v1 = (unsigned int)sub_402990();
        }
    }
    if ((unsigned int)v60 != -1 || g_60b27c < (unsigned int)v29 && *(v48) == 0 || (char)(v1 - 0 >> 63) && v5 == 0 && v4 != 0)
    {
        if ((unsigned int)(v60 - 48) <= 9 && (v60 <= 110 && (unsigned int)v60 != 99 && (unsigned int)v60 != 110 && (unsigned int)v60 != -130 && (unsigned int)v60 != -1 && (unsigned int)v43 != -131 || (unsigned int)v60 != 118 && v60 > 110 && (v60 <= 118 || (unsigned int)v60 != 122) && (v60 <= 118 || (unsigned int)v60 != 128) && ((unsigned int)v60 != 113 || v60 > 118)))
        {
            error(0x0, 0x0, v42);
        }
        else if (v60 <= 110 && (unsigned int)v60 != 99 && (unsigned int)v60 != 110 && (unsigned int)v60 != -130 && (unsigned int)v60 != -1 && (unsigned int)v43 != -131 || (unsigned int)v60 != 118 && v60 > 110 && (v60 <= 118 || (unsigned int)v60 != 122) && (v60 <= 118 || (unsigned int)v60 != 128) && ((unsigned int)v60 != 113 || v60 > 118))
        {
            sub_4030d0(); /* do not return */
        }
    }
    if (g_60b2b8 != 0 && close(0x0) < 0)
    {
        error(0x1, *(__errno_location()), "-");
    }
    do
    {
        v54 = v9;
        v55 = &g_1;
        v56 = v52;
        while (v55 != 0)
        {
            v55 += -0x1 * &g_1;
            v57 = *(v56);
            v58 = *(v54);
            v54 = &v54[v59];
            v56 = &v56[v59];
            break;
        }
        v60 = (v57 > v58) - 0 - (v57 < v58);
        if ((v57 > v58) - (v57 < v58) == 0)
        {
            *((unsigned long long **)&g_60b2b8) = &g_1;
            v3 = 0;
            v52 = (unsigned long long)dcgettext(0x0, 0x4079ee, 0x5);
        }
        else
        {
            v3 = open(v52, 0x0, v53);
            if (v3 < 0)
            {
                v62 = (unsigned int)sub_4050a0();
            }
        }
        if ((v57 > v58) - (v57 < v58) == 0 || v3 >= 0)
        {
            if (g_60b2ba != 0)
            {
                __printf_chk(0x1, "%s==> %s <==\n", (unsigned int)(g_60b1f0 == 0? "\n" : 4233407), (unsigned int)v52);
                g_60b1f0 = 0;
            }
            if (v4 != 0)
            {
                if (__fxstat(0x1, v3, (unsigned int)&v23) == 0)
                {
                    if (((unsigned short)v24 & 0xd000) == 0x8000 && g_60b2bb == 0)
                    {
                        v13 = (unsigned int)sub_4029f0();
                        if (!(INVALID_IR))
                        {
                            v70 = v25;
                            v64 = (unsigned long long)g_60b2bb;
                            if (v5 != 0)
                            {
                                if ((!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) < v25)
                                {
                                    v64 = &g_1;
                                    if (v13 < v25)
                                    {
                                        v64 = sub_402e80();
                                    }
                                    v64 &= &g_1;
                                }
                            }
                            else
                            {
                                if (v25 > (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]))
                                {
                                    if (v1 < ((char)(v70 - v13 >> 63)? 0 : v70 - v13))
                                    {
                                        v76 = sub_402b10();
                                        if (v76 != 0)
                                        {
                                            sub_402e00();
                                        }
                                    }
                                    if (v76 == 0 || v1 >= ((char)(v70 - v13 >> 63)? 0 : v70 - v13))
                                    {
                                        v64 = v4;
                                    }
                                }
                            }
                        }
                    }
                    if (((unsigned short)v24 & 0xd000) != 0x8000 || g_60b2bb != 0)
                    {
                        v13 = -1;
                    }
                    if (!(INVALID_IR) || ((unsigned short)v24 & 0xd000) != 0x8000 || g_60b2bb != 0)
                    {
                        if (v5 == 0 && (v25 <= (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) || ((unsigned short)v24 & 0xd000) != 0x8000 || g_60b2bb != 0))
                        {
                            v8 = v13;
                            if (v1 > 0x100000)
                            {
                                v11 = 0;
                                v74 = 0;
                                *((unsigned long *)&v17) = v60;
                                v16 = v52;
                                v75 = 0;
                                while (true)
                                {
                                    if (v74 == 0)
                                    {
                                        v81 = (v10 <= 16? v10 : 16);
                                    }
                                    else
                                    {
                                        v81 = (v15 < v74? v10 : v74 << 1);
                                    }
                                    v7 = v81;
                                    v82 = &g_1;
                                    v83 = 0;
                                    v84 = (unsigned long long)(unsigned int)sub_405970();
                                    while (true)
                                    {
                                        v85 = v82 + v83 * &g_1;
                                        if (v75 != 0)
                                        {
                                            v87 = (unsigned int)sub_403560();
                                            if (v87 <= 8191)
                                            {
                                                v88 = __errno_location();
                                                if (*(v88) == 0)
                                                {
                                                    v86 = v75;
                                                }
                                            }
                                            else
                                            {
                                                v8 += v87;
                                                v86 = 0;
                                            }
                                        }
                                        else
                                        {
                                            v86 = 0;
                                            *(v85) = (unsigned int)sub_405910();
                                            v11 = v83 + (char *)&g_1;
                                            v87 = (unsigned int)sub_403560();
                                            if (v87 <= 8191)
                                            {
                                                v88 = __errno_location();
                                                if (*(v88) == 0)
                                                {
                                                    v86 = v4;
                                                }
                                            }
                                        }
                                        if (v75 == 0 || v87 <= 8191)
                                        {
                                            if ((v75 == 0 || *(v88) != 0) && (v87 <= 8191 || v75 != 0) && (*(v88) != 0 || v75 != 0))
                                            {
                                                v98 = v88;
                                                v60 = v17;
                                                v116 = (unsigned int)sub_4050a0();
                                                v56 = *(v98);
                                                v119 = 0;
                                                error(0x0, v56, (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
                                            }
                                            if ((v75 == 0 || *(v88) == 0) && (v14 == v83 || v75 != 0) && (*(v88) == 0 || v75 != 0 || v87 > 8191))
                                            {
                                                v8 += v87;
                                                v75 = v4;
                                            }
                                        }
                                        if (*(v88) == 0 && v75 == 0 || v75 == 0 && v87 > 8191 || *(v88) == 0 && v75 != 0 || v75 != 0 && v87 > 8191)
                                        {
                                            if ((v14 == v83 || v75 != 0) && (v75 != 0 || v87 != 0) && (v87 > 8191 || v87 != 0))
                                            {
                                                sub_402a90();
                                                v75 = v4;
                                            }
                                            if (v86 == 0)
                                            {
                                                v83 = v82;
                                                if (v7 != v82)
                                                {
                                                    v82 = v90;
                                                }
                                                else
                                                {
                                                    v74 = v7;
                                                }
                                            }
                                            else
                                            {
                                                v99 = v86;
                                                v7 = v75;
                                                v60 = v17;
                                                v100 = v87;
                                                if ((char)v75 != 0)
                                                {
                                                    v56 = 0x2000 - v87;
                                                    v8 += v19;
                                                    if (v19 >= 0x2000 - v87)
                                                    {
                                                        if (v56 != 0)
                                                        {
                                                            v16 = v100;
                                                            sub_402a90();
                                                            v127 = (char)v7;
                                                        }
                                                        if (v56 == 0 || v20 != v16)
                                                        {
                                                            sub_402a90();
                                                            v130 = (char)v7;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_402a90();
                                                        v123 = (char)v7;
                                                    }
                                                }
                                                else if (v14 == v82)
                                                {
                                                    v8 += v87 - v20;
                                                    if (v87 - v20 != 0)
                                                    {
                                                        sub_402a90();
                                                    }
                                                }
                                            }
                                        }
                                        if (*(v88) == 0 && v75 == 0 || v75 == 0 && v87 > 8191 || *(v88) == 0 && v75 != 0 || v75 != 0 && v87 > 8191)
                                        {
                                            v90 = (0 | v82 + (char *)&g_1) % v10 >> 64;
                                        }
                                        if (v86 != 0 || v75 == 0 && v87 <= 8191 && *(v88) != 0 || v87 <= 8191 && v75 != 0 && *(v88) != 0)
                                        {
                                            v82 = v84;
                                            v134 = v84 + v11 * &g_1;
                                            while (v133 != v134)
                                            {
                                                v138 = *(v133);
                                                v133 += &g_1;
                                                free(v138);
                                            }
                                            free(v82);
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v72 = 0;
                                v73 = sub_405910();
                                v11 = v52;
                                v78 = v4;
                                v79 = v8;
                                v17 = v73;
                                v21 = v73;
                                v22 = v73 + v12;
                                *((unsigned long *)&v16) = v60;
                                while (true)
                                {
                                    v92 = (unsigned int)sub_403560();
                                    if (v12 > v92)
                                    {
                                        if (*((int *)v79) != 0)
                                        {
                                            v114 = v79;
                                            v60 = v16;
                                            v79 = __errno_location();
                                            v118 = (unsigned int)sub_4050a0();
                                            v56 = *(v115);
                                            v79 = v114;
                                            v121 = 0;
                                            error(0x0, v56, (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
                                        }
                                        else if (v56 >= v56)
                                        {
                                            if (v78 == 0)
                                            {
                                                v79 = &v56[v79];
                                                if (v56 != 0)
                                                {
                                                    v78 = v4;
                                                    v94 = v79;
                                                }
                                            }
                                            if (v56 == 0 || v78 != 0)
                                            {
                                                v60 = v16;
                                                v112 = v4;
                                            }
                                        }
                                        else if (v78 == 0)
                                        {
                                            v94 = &v56[v79];
                                            v94 = v56 - v56 + v79;
                                            if (v56 != 0)
                                            {
                                                v78 = v4;
                                                v94 = &v56[v79];
                                            }
                                        }
                                    }
                                    else if (v78 == 0)
                                    {
                                        v94 = &v56[v79];
                                        v56 = (unsigned int)v72 ^ &g_1;
                                        if (((unsigned int)v72 ^ 1) == 0)
                                        {
                                            v72 = v56;
                                        }
                                    }
                                    else if (v56 < v92)
                                    {
                                        v94 = v79 + v56 - v56;
                                        if (v56 == 0)
                                        {
                                            v72 = (unsigned int)v72 ^ &g_1;
                                        }
                                        else
                                        {
                                            v78 = 0;
                                        }
                                    }
                                    else
                                    {
                                        v72 = (unsigned int)v72 ^ &g_1;
                                        v94 = v79;
                                    }
                                    if (v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (v12 <= v92 || v56 != 0))
                                    {
                                        if (((unsigned int)v72 ^ 1) != 0 || v12 > v92)
                                        {
                                            v7 = v94;
                                            sub_402a90();
                                            v94 = v7;
                                        }
                                        if ((((unsigned int)v72 ^ 1) == 0 || v56 < v56) && (v56 < v56 || v12 <= v92) && (v56 < v56 || ((unsigned int)v72 ^ 1) != 0 || v12 > v92))
                                        {
                                            v96 = v56 - v56;
                                            v94 += v96;
                                        }
                                    }
                                    if (false)
                                    {
                                        v78 = v4;
                                        v79 = v94;
                                        v60 = v16;
                                        v113 = v4;
                                    }
                                    if (v56 < v56 && *((int *)v79) == 0 && v78 != 0 && v12 > v92 && v56 != 0 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (((unsigned int)v72 ^ 1) == 0 || v56 < v56) && (v56 < v56 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (v56 < v56 || ((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v96 != 0 || v12 <= v92 && v56 < v92 && v78 != 0 && v56 != 0)
                                    {
                                        v7 = v94;
                                        sub_402a90();
                                        v94 = v7;
                                    }
                                    if (v56 < v56 && *((int *)v79) == 0 && v78 != 0 && v12 > v92 && v56 != 0 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (((unsigned int)v72 ^ 1) == 0 || v56 < v56) && (v56 < v56 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (v56 < v56 || ((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v96 != 0 || v12 <= v92 && v56 < v92 && v78 != 0 && v56 != 0 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v56 >= v56 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (((unsigned int)v72 ^ 1) == 0 || v56 < v56) && (v56 < v56 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (v56 < v56 || ((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v96 == 0)
                                    {
                                        v72 = (unsigned int)v72 ^ &g_1;
                                    }
                                    if (unknown)
                                    {
                                        v78 = 0;
                                        v79 = v94;
                                    }
                                    if (v56 < v56 && *((int *)v79) == 0 && v56 == 0 && v78 != 0 && v12 > v92 || (v56 < v56 && *((int *)v79) == 0 && v78 != 0 && v12 > v92 && v56 != 0 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (((unsigned int)v72 ^ 1) == 0 || v56 < v56) && (v56 < v56 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (v56 < v56 || ((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v96 != 0 || v12 <= v92 && v56 < v92 && v78 != 0 && v56 != 0 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v56 >= v56 || v78 == 0 && (*((int *)v79) == 0 || v12 <= v92) && (((unsigned int)v72 ^ 1) == 0 || v56 < v56) && (v56 < v56 || v12 <= v92) && (v12 <= v92 || v56 != 0) && (v56 < v56 || ((unsigned int)v72 ^ 1) != 0 || v12 > v92) && v96 == 0) && v78 != 0)
                                    {
                                        v79 = v94;
                                        v60 = v16;
                                    }
                                }
                                free(v17);
                                v8 = v79;
                            }
                            v143 = sub_4029f0();
                            if (INVALID_IR)
                            {
                                v64 = 0;
                            }
                        }
                        if (v5 != 0 && (((unsigned short)v24 & 0xd000) != 0x8000 || (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) >= v25 || g_60b2bb != 0))
                        {
                            v11 = v13;
                            v71 = sub_405910();
                            v71[1025] = 0;
                            v77 = v71;
                            v71[0x400] = 0;
                            v71[1026] = 0;
                            v8[0] = v71;
                            v16 = v52;
                            v7 = 0;
                            v91 = (unsigned long long)(unsigned int)sub_405910();
                            *((unsigned long *)&v17) = v60;
                            while (true)
                            {
                                if ((char *)&v66[-1].field_8 + 7 > -3)
                                {
                                    break;
                                }
                                if (v1 != 0)
                                {
                                    v91[0x400] = v66;
                                    v104 = 0;
                                    v91[1025] = 0;
                                    v91[1026] = 0;
                                    while (true)
                                    {
                                        v106 = v104 + (char *)&g_1;
                                        if (sub_406f30() == 0)
                                        {
                                            break;
                                        }
                                        v91[1025] = v104;
                                        v104 = v106;
                                    }
                                    v7 += v104;
                                    v107 = v8[0x400];
                                    if ((char *)v66 + v8[0x400] > 8191)
                                    {
                                        v8[1026] = v91;
                                        if (v1 < v7 - v77[1025])
                                        {
                                            *((unsigned long long [1027])&v11) = v11 + v77[0x400];
                                            if (v77[0x400] != 0)
                                            {
                                                sub_402a90();
                                            }
                                            v8[0] = v91;
                                            v91 = v77;
                                            *((unsigned long long [1027])&v7) = v7 - v77[1025];
                                            v77 = v77[1026];
                                        }
                                        else
                                        {
                                            v8[0] = v91;
                                            v91 = (unsigned long long)(unsigned int)sub_405910();
                                        }
                                    }
                                    else
                                    {
                                        v108 = v8;
                                        memcpy(v107 + (char *)v8, v91, v66);
                                        v108[0x400] = v108[0x400] + v91[0x400];
                                        v108[1025] = v108[1025] + v91[1025];
                                    }
                                }
                                else
                                {
                                    v11 += (char *)v66;
                                    sub_402a90();
                                }
                            }
                            v66 = (unsigned long long)(unsigned int)sub_405310();
                            v60 = v17;
                            free(v91);
                            if (v117 + 1 != 0)
                            {
                                v125 = v8;
                                if (v8[0x400] != 0 && *((char *)((char *)v125 + v8[0x400] - &g_1)) != g_60b2b9)
                                {
                                    v125[1025] = v125[1025] + (char *)&g_1;
                                    v7 += (char *)&g_1;
                                }
                                v131 = v77;
                                if (v1 < v7 - v77[1025])
                                {
                                    v135 = v1;
                                    v136 = v7;
                                    v8[0] = v77;
                                    v137 = v11;
                                    do
                                    {
                                        v137 += v131[0x400];
                                        if (v131[0x400] != 0)
                                        {
                                            sub_402a90();
                                        }
                                        v136 -= v131[1025];
                                        v131 = v131[1026];
                                    }
                                    while (v135 < v136 - v131[1025]);
                                    v7 = v136;
                                    v11 = v137;
                                    v77 = v8;
                                }
                                if (v1 < v7)
                                {
                                    v144 = v7 - v1;
                                    v7[0] = v77;
                                    do
                                    {
                                        v145 = sub_406f30();
                                        if (v145 == 0)
                                        {
                                            break;
                                        }
                                        v145 += (char *)&g_1;
                                        v131[1025] = v131[1025] + (char *)&g_1;
                                        v144 += -0x1 * &g_1;
                                    }
                                    while (v144 != 1);
                                    v146 = v145 + -0x1 * v131;
                                    v77 = v7;
                                    v11 += v146;
                                    if (v146 != 0)
                                    {
                                        sub_402a90();
                                    }
                                }
                                v148 = v4;
                                v140 = v77;
                            }
                            else
                            {
                                v128 = (unsigned int)sub_4050a0();
                                v132 = 0;
                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
                                if (v77 != 0)
                                {
                                    v140 = v77;
                                }
                            }
                            if (v117 + 1 != 0 || v77 != 0)
                            {
                                while (true)
                                {
                                    v149 = v140[1026];
                                    free(v140);
                                    v140 = v149;
                                    if (v149 == 0)
                                    {
                                        break;
                                    }
                                }
                            }
                            if (v13 != -1)
                            {
                                v150 = sub_4029f0();
                            }
                        }
                    }
                    if (INVALID_IR && (((unsigned short)v24 & 0xd000) == 0x8000 || v13 != -1) && (((unsigned short)v24 & 0xd000) == 0x8000 || v5 != 0) && (g_60b2bb == 0 || v13 != -1) && (g_60b2bb == 0 || v5 != 0))
                    {
                        v64 = 0;
                    }
                }
                else
                {
                    v65 = (unsigned int)sub_4050a0();
                    v66 = (unsigned long long)dcgettext(0x0, 0x407a26, 0x5);
                    v64 = 0;
                    error(0x0, *(__errno_location()), v66);
                }
            }
            else if (v5 != 0)
            {
                v64 = (unsigned int)sub_402bc0();
            }
            else
            {
                v64 = (unsigned int)sub_402d30();
            }
            if (v60 != 0)
            {
                v67 = close(v3);
                if (v67 != 0)
                {
                    v68 = (unsigned int)sub_4050a0();
                }
            }
        }
        if ((v3 < 0 || v60 != 0) && (v3 < 0 || v67 != 0) && (v60 != 0 || (v57 > v58) - (v57 < v58) != 0) && ((v57 > v58) - (v57 < v58) != 0 || v67 != 0))
        {
            v66 = (unsigned long long)dcgettext(0x0, v56, 0x5);
            v64 = 0;
            error(0x0, *(__errno_location()), v66);
        }
        v2 += (char *)&g_1;
        *((unsigned long long *)&v6) = v6 & v64;
        v52 = *((long long *)(v2 + -0x1 * &g_1));
    }
    while (*((long long *)(v2 + -0x1 * &g_1)) != 0);
    error(0x0, 0x0, v42);
    if (false)
    {
        return v6 ^ &g_1;
    }
    sub_4030d0(); /* do not return */
}

int sub_405930()
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
        sub_405b60(); /* do not return */
    }
}

extern int512_t g_60b3e0;

int sub_404ca0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60b3e0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60b3e0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_406e90()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4067e0();
}

extern unsigned int g_40940f;
extern unsigned int g_60b200;

int sub_405b60()
{
    dcgettext(0x0, 0x40940f, 0x5);
    error(g_60b200, 0x0, "%s");
}

int sub_4076f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_407730();
    }
}

int sub_404c40()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_405b10();
}

// int sub_4052d0()

extern uint128_t g_60b3e0;
extern uint128_t g_60b3f0;
extern uint128_t g_60b400;
extern unsigned long long g_60b410;

int sub_4051e0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60b3e0;
    *((uint128_t *)&v1) = g_60b3f0;
    *((uint128_t *)&v2) = g_60b400;
    v4 = g_60b410;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_404aa0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

// int sub_404f70()

int sub_4057d0()
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
        return sub_405370();
    }
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_4035e0()
{
    struct v1;  // rsi
    char *v2;  // rcx
    char *v3;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx

    v2 = &v1->field_14;
    v1->field_14 = 0;
    if (!(INVALID_IR))
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
        v7 = ((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63);
        *((unsigned long long *)&v2[-1]) = 48 + (((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63)) * 10 - rdi;
        if (((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63) == 0)
        {
            break;
        }
        v2 = v3;
    }
    v9 = &v2[-2];
    v2[-1] = 45;
    return v9;
}

extern unsigned int g_407864;
extern unsigned int g_40787c;

int sub_402990()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    char v4;  // dil
    unsigned long long v5;  // r8
    unsigned long long v6;  // r8
    unsigned long long v7;  // rbx

    v1 = v3;
    if (v4 != 0)
    {
        v6 = dcgettext(0x0, 0x407864, 0x5);
    }
    else
    {
        v5 = dcgettext(0x0, 0x40787c, 0x5);
    }
    v7 = v1;
    v0 = 0;
    return sub_405ba0();
}

int sub_4029f0()
{
    unsigned long long v2;  // rax
    unsigned long long v3;  // r12
    unsigned long long v4;  // r13
    unsigned int v5;  // edx
    unsigned long v6;  // rax

    if (!(INVALID_IR))
    {
        v2 = lseek();
        return v2;
    }
    v3 = (unsigned int)sub_4035e0();
    v4 = (unsigned int)sub_405170();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, (v5 != 0? "%s: cannot seek to relative offset %s" : "%s: cannot seek to offset %s"), 0x5));
    return v6;
}

extern unsigned long long __progname_full;
extern unsigned long long g_60b2d0;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4036d0()
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
        g_60b2d0 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

// int sub_404ea0()

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_4098bf;
extern char g_60b458[2];

int sub_407100()
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

    v9 = g_60b458;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_4098bf : (unsigned long long)nl_langinfo(0xe));
    if (g_60b458 == 0)
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
            v9 = &g_4098bf;
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
                                        v9 = &g_4098bf;
                                        v10 = (tmp_10 == 0? &g_4098bf : tmp_10);
                                        free(NULL);
                                        sub_407670();
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
                                while (v62 != 10 && v63 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v29 > 1)
                        {
                            v61 = __uflow(v10);
                        }
                        if ((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v62 == -1 || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v29 > 1) && (unsigned int)v61 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_4098bf : tmp_10);
                            sub_407670();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v62 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v29 <= 1)
                    {
                        v9 = &g_4098bf;
                    }
                    else if (((unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v62 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v29 <= 1) && v0 != 0 || v38 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_4098bf;
            free(v17);
        }
        *((char *[2])&g_60b458[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_4098bf : tmp_10), v9);
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

int sub_407040()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_407670();
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

// int sub_405160()

int sub_406f30()
{
    unsigned long long v1;  // rdx
    void *v2;  // dil
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

extern unsigned int g_4078df;

int sub_402d30()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r14
    unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rbp
    unsigned long long v14;  // r12
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long v18;  // r14
    unsigned long long v19;  // rbp
    unsigned long long v20;  // rbx
    unsigned long long v21;  // r12
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14

    if (v6 != 0)
    {
        v4 = v7;
        v3 = v8;
        v2 = v9;
        v14 = 0x2000;
        v1 = stack_base + 0;
        v13 = v6;
        v0 = v10;
        while (true)
        {
            v14 = (!(r12 <= v13)? v13 : r12);
            v11 = (unsigned int)sub_405310();
            if (v11 != -1)
            {
                if (v11 != 0)
                {
                    sub_402a90();
                    v13 -= v11;
                }
                v15 = v0;
                v16 = v2;
                v17 = v3;
                v18 = v4;
                return 1;
            }
            v19 = (unsigned int)sub_4050a0();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4078df, 0x5));
            v20 = v0;
            v21 = v2;
            v22 = v3;
            v23 = v4;
            return 0;
        }
    }
    return 1;
}

int sub_405ae0()
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
        sub_405b60(); /* do not return */
    }
}

extern struct g_60b258;
extern unsigned long long g_60b260;
extern unsigned long long g_60b268;
extern unsigned int g_60b270;
extern unsigned long long g_60b2e0;

int sub_404eb0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60b270;
    if (g_60b270 > 1)
    {
        v2 = &g_60b258[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60b258[(unsigned long long)(g_60b270 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60b258->field_8 != 6337248)
    {
        v1 = free(g_60b258->field_8);
        g_60b260 = 0x100;
        g_60b268 = &g_60b2e0;
    }
    if (g_60b258 != 6337120)
    {
        v1 = free(g_60b258);
        g_60b258 = &g_60b260;
    }
    g_60b270 = 1;
    return v1;
}

extern unsigned long long g_60ae30;

int sub_407818()
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
        rax();
        v1 = &v1[-1];
    }
    return v4;
}

// int sub_404f50()

// int sub_405130()

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_402e00()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned int v3;  // edi
    unsigned long v5;  // rsi

    v0 = v2;
    if (v3 == 1)
    {
        sub_4050a0();
        v5 = "error reading %s";
    }
    else if (v3 != 2)
    {
        abort(); /* do not return */
    }
    if (v3 == 2)
    {
        sub_405170();
        v5 = "%s: file has shrunk too much";
    }
    if (v3 == 2 || v3 == 1)
    {
        dcgettext(0x0, v5, 0x5);
        __errno_location();
    }
}

// int sub_4050a0()

// int sub_4050b0()

// int sub_4052a0()

int sub_404da2()
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

extern uint128_t g_60b3e0;
extern uint128_t g_60b3f0;
extern uint128_t g_60b400;
extern unsigned long long g_60b410;

int sub_4050bf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60b410;
    *((uint128_t *)&v0) = g_60b3e0;
    *((uint128_t *)&v1) = g_60b3f0;
    *((uint128_t *)&v2) = g_60b400;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_404aa0();
}

int sub_405b40()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

// int sub_405260()

