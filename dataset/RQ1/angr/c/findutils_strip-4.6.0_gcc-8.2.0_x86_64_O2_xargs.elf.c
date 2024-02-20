#include "decompile_angr.h"
int sub_409090()
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

extern unsigned long long g_612500;
extern unsigned long long g_612508;

int sub_4053a0()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]

    if (sub_4050e0() < 0)
    {
        sub_405260();
    }
    v0 = 0;
    v2 = 0;
    v1 = 0;
    sub_4052b0();
    g_612508 = v0;
    g_612500 = v1;
    return v1;
}

int sub_403c26()
{
}

extern unsigned int g_40c8a8;
extern unsigned int g_40c900;
extern unsigned int g_40d18a;
extern unsigned int g_40d1a1;
extern unsigned int g_40d1a8;
extern char g_6122b4;
extern char g_6123a0;
extern char *g_6123f8;
extern unsigned int g_612400;
extern unsigned long long g_612438;
extern unsigned long long g_612450;
extern unsigned long long g_6124a8;
extern unsigned long long g_6124d0;
extern char *g_6124e0;
extern unsigned long long g_6124e8;

int sub_4038b0()
{
    void tmp_4;  // tmp #4
    unsigned long v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x40]
    char v2;  // [bp-0x39]
    char *v4;  // rbx
    unsigned long|unsigned long long v5;  // r14
    char *|unsigned long long v6;  // rbp
    char *v8;  // r15
    unsigned long long v10;  // cc_dep1
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    char *v14;  // rax
    unsigned long long v16;  // cc_dep1
    char *v17;  // rax
    unsigned long long v19;  // cc_dep1
    char *v21;  // rax
    unsigned long long|unsigned int v22;  // r12
    char *v23;  // r15
    char *|unsigned long long v24;  // rbp
    unsigned long long v26;  // rbx
    unsigned long long v27;  // r14
    unsigned long long v30;  // rax
    unsigned long long v31;  // rbp
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx
    unsigned long long v38;  // rax

    v4 = g_6124e0;
    if (g_6123a0 == 0)
    {
        v5 = 0;
        v2 = 1;
        v6 = -1;
        v22 = 1;
        v1 = 0;
        while (true)
        {
            v8 = (unsigned long long)(unsigned int)_IO_getc(g_6124e8);
            if ((unsigned int)v8 == -1)
            {
                g_6123a0 = 1;
                if (g_6124e0 == v4)
                {
                    break;
                }
                if (g_6124e0 != v4)
                {
                    *(v4) = 0;
                    v27 = &v4[1] - g_6124e0;
                }
            }
            if (v1 == (unsigned int)v8 && (v22 == 2 || (unsigned int)v21 != 10) && ((unsigned int)v8 != -1 || (unsigned int)v21 != 10) && ((unsigned int)v8 != 10 || (unsigned int)v21 != 10) && (v22 != 1 || (unsigned int)v21 != 10))
            {
                v5 = 1;
                if ((unsigned int)v8 != -1)
                {
                    v6 = v8;
                    v8 = _IO_getc(g_6124e8);
                }
            }
            if (v1 != (unsigned int)v8 && (v22 == 2 || (unsigned int)v21 != 10) && ((unsigned int)v8 != -1 || (unsigned int)v21 != 10) && ((unsigned int)v8 != 10 || (unsigned int)v21 != 10) && (v22 != 1 || (unsigned int)v21 != 10))
            {
                tmp_4 = v8;
                v24 = v8;
                v22 = 2;
                v23 = g_6124e0;
            }
            if (g_612450 == 0 && ((unsigned int)v8 != 10 || (unsigned int)v8 != 10 && (v1 == (unsigned int)v8 || (unsigned int)v8 != -1) && (v1 == (unsigned int)v8 || v22 != 2) && (v1 == (unsigned int)v8 || v22 != 1) && ((unsigned int)v8 != -1 || (unsigned int)v8 != -1) && ((unsigned int)v8 != -1 || v22 != 2) && ((unsigned int)v8 != -1 || v22 != 1) && ((unsigned int)v8 != -1 || (unsigned int)v21 != 10) && (v22 != 1 || (unsigned int)v21 != 10) && (v22 != 2 || (unsigned int)v8 != 10 || (unsigned int)v21 != 10)) && ((unsigned int)v8 & -128) == 0)
            {
                v10 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v8 * 2)) & 1);
                if ((char)v10 != 0)
                {
                    *(v4) = 0;
                    v11 = &v4[1] - g_6124e0;
                    v27 = v11;
                    if (*(g_6123f8) == *(g_6124e0) && g_6123f8 != 0)
                    {
                        v12 = strcmp(g_6123f8, g_6124e0);
                    }
                }
            }
            if (...)
            {
                v0 = g_6122b4;
                sub_4047a0();
                v4 = g_6124e0;
                v14 = _IO_getc(g_6124e8);
                v2 = 0;
                if ((unsigned int)v8 != -1)
                {
                    v6 = v8;
                    v5 = 1;
                    v8 = v14;
                }
            }
            if (((unsigned int)v17 & -128) == 0 || ((unsigned int)v8 & -128) == 0)
            {
                v16 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v8 * 2)) & 1);
            }
            if ((unsigned int)&v8[-11] <= 1 || ((unsigned int)v17 & -128) == 0 && (unsigned int)v8 == 13 || ((unsigned int)v17 & -128) == 0 && (unsigned int)v8 == 10 || (unsigned int)v8 == 13 && ((unsigned int)v8 & -128) == 0 || ((unsigned int)v8 & -128) == 0 && (unsigned int)v8 == 10 || ((unsigned int)v17 & -128) == 0 && (char)v16 != 0 || ((unsigned int)v8 & -128) == 0 && (char)v16 != 0)
            {
                v17 = _IO_getc(g_6124e8);
            }
            if ((unsigned int)v8 != -1 && (((unsigned int)v17 & -128) == 0 || ((unsigned int)v8 & -128) == 0 || (unsigned int)&v8[-11] <= 1) && ((unsigned int)v8 == 13 || (unsigned int)v8 == 10 || (unsigned int)&v8[-11] <= 1 || (char)v16 != 0))
            {
                v6 = v8;
                v8 = v17;
            }
            if ((unsigned int)&v8[-11] > 1 && ((char)v16 == 0 || ((unsigned int)v17 & -128) != 0 || ((unsigned int)v8 & -128) != 0) && ((char)v16 == 0 || (unsigned int)v8 != -1 || ((unsigned int)v8 & -128) != 0) && (((unsigned int)v17 & -128) != 0 || (unsigned int)v8 != 13 || ((unsigned int)v8 & -128) != 0) && (((unsigned int)v17 & -128) != 0 || ((unsigned int)v8 & -128) != 0 || (unsigned int)v8 != 10) && ((unsigned int)v8 != 13 || (unsigned int)v8 != -1 || ((unsigned int)v8 & -128) != 0) && ((unsigned int)v8 != -1 || ((unsigned int)v8 & -128) != 0 || (unsigned int)v8 != 10) && (unsigned int)v8 == 10 || (v1 == (unsigned int)v8 || (unsigned int)v8 != -1) && (v1 == (unsigned int)v8 || v22 != 2) && (v1 == (unsigned int)v8 || v22 != 1) && ((unsigned int)v8 != -1 || (unsigned int)v8 != -1) && ((unsigned int)v8 != -1 || v22 != 2) && ((unsigned int)v8 != -1 || v22 != 1) && ((unsigned int)v8 != -1 || (unsigned int)v21 != 10) && (v22 != 1 || (unsigned int)v21 != 10) && (v22 != 2 || (unsigned int)v8 != 10 || (unsigned int)v21 != 10) && (unsigned int)v8 == 10)
            {
                if (((unsigned int)v6 & -128) == 0)
                {
                    v19 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v6 * 2)) & 1);
                }
                if ((char)v19 == 0 || ((unsigned int)v6 & -128) != 0)
                {
                    g_6124d0 = g_6124d0 + 1;
                }
                if (g_6124e0 == v4 && v5 == 0 && (unsigned int)v8 != -1)
                {
                    v8 = _IO_getc(g_6124e8);
                }
                if (!(v5 == 0 && g_6124e0 == v4))
                {
                    *(v4) = 0;
                    v26 = &v4[1] - g_6124e0;
                    v27 = v26;
                    if (*(g_6123f8) == *(g_6124e0) && g_6123f8 != 0)
                    {
                        v30 = strcmp(g_6123f8, g_6124e0);
                    }
                }
            }
            if (...)
            {
                if ((unsigned int)v8 != 34 && (unsigned int)v8 != 92 && (unsigned int)v8 != 39)
                {
                    v24 = v8;
                }
                if ((unsigned int)v8 == 92)
                {
                    v24 = (unsigned long long)(unsigned int)_IO_getc(g_6124e8);
                }
            }
            if (...)
            {
                v21 = _IO_getc(g_6124e8);
                if ((unsigned int)v8 != -1)
                {
                    v1 = (unsigned int)v8;
                    v8 = v21;
                }
                else
                {
                    g_6123a0 = 1;
                    if (v4 == g_6124e0)
                    {
                        break;
                    }
                    *(v4) = 0;
                    v1 = (unsigned int)v8;
                }
            }
            if (...)
            {
                sub_403740();
                if (v1 != 34)
                {
                    v32 = dcgettext(0x0, 0x40d1a8, 0x5);
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40c8a8, 0x5));
                }
                else
                {
                    v31 = dcgettext(0x0, 0x40d1a1, 0x5);
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40c8a8, 0x5));
                }
            }
            if (...)
            {
                g_6123a0 = 1;
                if (v4 == g_6124e0)
                {
                    break;
                }
                *(v4) = 0;
                v27 = &v4[1] - g_6124e0;
            }
            if (...)
            {
                sub_403740();
                if (v1 != 34)
                {
                    v35 = dcgettext(0x0, 0x40d1a8, 0x5);
                }
                else
                {
                    v34 = dcgettext(0x0, 0x40d1a1, 0x5);
                }
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40c8a8, 0x5));
            }
            if (...)
            {
                v22 = 0;
                v23 = v4;
            }
            if (...)
            {
                if (*(g_6123f8) == *(g_6124e0) && v2 != 0 && g_6123f8 != 0)
                {
                    v33 = strcmp(g_6123f8, g_6124e0);
                    if (v33 == 0)
                    {
                        break;
                    }
                }
                if (g_612450 != 0)
                {
                    break;
                }
                v0 = g_6122b4;
                sub_4047a0();
            }
            if (...)
            {
                v24 = 0;
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c900, 0x5));
                g_612400 = 1;
            }
            if (...)
            {
                g_6123a0 = 1;
                break;
            }
            if (...)
            {
                if (g_612450 != 0)
                {
                    break;
                }
                v0 = g_6122b4;
                sub_4047a0();
            }
            if (...)
            {
                *((unsigned long long *)&v23) = v24;
                v4 = &v4[1];
            }
            if (...)
            {
                sub_403740();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d18a, 0x5));
            }
        }
        if (...)
        {
            v27 = -18446744069414584321;
        }
        else if (...)
        {
            v38 = v27;
            return v38;
        }
    }
    v27 = -18446744069414584321;
    v38 = v27;
    return v38;
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

extern unsigned int g_40da10;

int sub_404c00()
{
    unsigned long long v0;  // [bp-0x58]
    void tmp_24;  // tmp #24
    unsigned long|unsigned long long v1;  // [bp-0x40]
    unsigned long long v3[8];  // rsi
    unsigned long long v4[8];  // r12
    unsigned long long v6;  // r13
    struct_0 *v7;  // rdi
    unsigned long long v8;  // r15
    unsigned long long v10;  // rax
    unsigned long v11;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r8
    unsigned long long v16;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rdx
    void *v22;  // rcx

    v4 = v3;
    v0 = 0;
    sub_4047a0();
    if (!(*(v3) != 0))
    {
        __assert_fail(); /* do not return */
    }
    else if (*((long long *)(v3[1] + (*(v3) << 3) - 8)) == 0)
    {
        v6 = 0;
        v20 = v7->field_38;
        v8 = (unsigned int)sub_409680();
        v21 = *(v3);
        while (true)
        {
            if (v20 != 0)
            {
                v10 = 0;
                do
                {
                    v10 += 1;
                    *((long long *)(v11 + v10 * 8 - 8)) = *((long long *)(v4[1] + v10 * 8 - 8));
                }
                while (v10 != v20);
                v12 = 0 + v20;
                v13 = v20;
            }
            else
            {
                v12 = v6;
                v13 = 0;
            }
            if (v12 < v21 && v14 > v13)
            {
                do
                {
                    v12 += 1;
                    v13 += 1;
                    *((long long *)(v11 + v13 * 8 - 8)) = *((long long *)(v4[1] + v12 * 8 - 8));
                }
                while (v12 < v21 && v14 > v13);
                if (v13 < v20)
                {
                    __assert_fail(); /* do not return */
                }
            }
            if (v14 <= v13 || v12 >= v21 || v13 >= v20)
            {
                v1 = v14;
                v16 = v4[6];
                v11 = v8;
                v18 = v13;
                *((long long *)(v8 + v13 * 8)) = 0;
                v19 = *((long long *)(rdi<8> + 64))();
                if (v19 != 0)
                {
                    v20 = *((long long *)(rdi<8> + 56));
                    v14 = (unsigned int)sub_404600();
                    v6 = 0 - *((long long *)(rdi<8> + 56)) + v13;
                }
                else if (*((long long *)(rdi<8> + 56)) + 1 >= v1)
                {
                    v1 = v1;
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40da10, 0x5));
                }
                else
                {
                    v20 = *((long long *)(rdi<8> + 56));
                    v14 = (unsigned int)sub_404600();
                }
                if (*((long long *)(rdi<8> + 56)) + 1 < v1 || v19 != 0)
                {
                    v21 = *(v4);
                    v22 = v6 + 1;
                    free(v11);
                    tmp_24 = v4[5];
                    v4[0] = v20;
                    v4[4] = tmp_24;
                    v4[7] = -0x100000000;
                    return -0x100000000;
                }
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[48];
    unsigned long long field_30;
} struct_0;

int sub_4049f2()
{
}

extern unsigned int g_40f520[4];

int sub_4066f0()
{
    char *|unsigned long long|char [2] v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x180]
    char v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x174]
    char v4;  // [bp-0x16c]
    char *v5;  // [bp-0x168]
    unsigned long|unsigned long long v6;  // [bp-0x160]
    char v7;  // [bp-0x158]
    unsigned int v8;  // [bp-0x154]
    char v9;  // [bp-0x138]
    unsigned long long v10;  // [bp-0x134]
    char v11;  // [bp-0x12c]
    char *v12;  // [bp-0x128]
    unsigned long|unsigned long long v13;  // [bp-0x120]
    char v14;  // [bp-0x118]
    unsigned int v15;  // [bp-0x114]
    char v16;  // [bp-0xf8]
    unsigned long v17;  // [bp-0xf4]
    char v18;  // [bp-0xec]
    unsigned long|unsigned long long v19;  // [bp-0xe8]
    unsigned long|unsigned long long v20;  // [bp-0xe0]
    char v21;  // [bp-0xd8]
    unsigned int v22;  // [bp-0xd4]
    void v23;  // [bp-0xc8]
    uint128_t|char v24;  // [bp-0xb8]
    char v25;  // [bp-0xac]
    unsigned long|uint128_t|char * v26;  // [bp-0xa8]
    unsigned long|void|unsigned long long v27;  // [bp-0xa0]
    void|uint128_t|char v28;  // [bp-0x98]
    unsigned int v29;  // [bp-0x94]
    void v30;  // [bp-0x88]
    char v31;  // [bp-0x78]
    unsigned long long v32;  // [bp-0x74]
    char v33;  // [bp-0x6c]
    char *v34;  // [bp-0x68]
    unsigned long|unsigned long long v35;  // [bp-0x60]
    char v36;  // [bp-0x58]
    unsigned int v37;  // [bp-0x54]
    void *v39;  // rdi
    unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    char *v42;  // r9
    unsigned long long v43;  // r15
    unsigned int v45;  // eax
    char v46;  // al
    unsigned long long v48;  // rax
    char *v49;  // rsi
    unsigned long long|char [2] v50;  // r9
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
    unsigned long long v68;  // rdx
    unsigned int v69;  // eax
    char v70;  // al
    unsigned long long v71;  // rax
    unsigned long|unsigned long long v73;  // rax
    unsigned long long v74;  // al
    unsigned long|unsigned long long v75;  // rbx
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
    unsigned long long v92;  // rax
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
    unsigned long long v104;  // rax
    unsigned long long v106;  // rax
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
        v43 = *(v42);
        v118 = v39;
        if (*(v42) != 0)
        {
            v65 = (char)*((char *)v40);
            if (*((char *)v40) != 0)
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
                    v56 = v40 + 1;
                    if (v43 != v65)
                    {
                        if (*((char *)(v40 + 1)) == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v57 = v42[1];
                        v58 = (char)*((char *)v40);
                        if (v42[1] == 0 || *((char *)v40) == 0)
                        {
                            break;
                        }
                        v55 = v52 + 2;
                        if (v57 == v58)
                        {
                            v59 = &v42[-1 * v52];
                            v52 = 0 - v52 + v40;
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
                    if (((char)!(r12<8> <= 9) & v54) != 0)
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
                            if (*((char *)(v0 + v63)) == 0 || v50 == 0)
                            {
                                v0 = v53;
                                strlen(v42);
                                v54 = sub_405b80();
                                v53 = v0;
                                if (v54 != 0)
                                {
                                    break;
                                }
                                v50 = 0;
                            }
                        }
                        if (v55 < v51 + (v51 << 2) || *((char *)(v0 + v63)) != 0 && v50 != 0)
                        {
                            v54 = v62;
                        }
                    }
                    v65 = (char)*((char *)v54);
                    v40 = v56;
                    v52 = v55;
                }
                if (v43 == v65)
                {
                    v118 = v40;
                }
                else if (v50 != 0 && *((char *)(v0 + v63)) == 0 || (v43 != v65 && *((char *)(v40 + 1)) != 0 || v43 == v65 && v42[1] != 0 && *((char *)v40) != 0 && v57 != v58 || v43 == v65 && v57 == v58 && v42[1] != 0 && *((char *)v40) != 0 && ((char)!(r12<8> <= 9) & v54) != 0) && ((char)!(r12<8> <= 9) & v54) != 0 && v55 >= v51 + (v51 << 2) && v50 == 0)
                {
                    v118 = *((long long *)&v31);
                }
                else if (v42[1] != 0 || v43 != v65)
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
        if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0)
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
                sub_409040();
                v6 = (unsigned int)sub_40b170();
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
        if ((v48 != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0))
        {
            if (v6 == -2 || v6 == -1 || v8 != 0)
            {
                if (v6 == -2 || v6 == -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0 || v6 != 0)
                {
                    v12 = v42;
                    v116 = 0;
                    v75 = 0;
                    v76 = 1;
                    v9 = 0;
                    v10 = 0;
                    v11 = 0;
                    v19 = v39;
                    v16 = 0;
                    v17 = 0;
                    v18 = 0;
                    v1 = 0;
                    while (true)
                    {
                        if (v16 == 0)
                        {
                            v68 = v19;
                            v69 = (char)*((char *)v19);
                            v70 = (unsigned long long)(char)*((char *)v19) >> 5;
                            if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) != 0)
                            {
                                v20 = 1;
                                v77 = (char)*((char *)v68);
                                v21 = 1;
                                v22 = (char)*((char *)v68);
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
                        if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) == 0 || v16 != 0)
                        {
                            __ctype_get_mb_cur_max();
                            v0 = v19;
                            sub_409040();
                            v73 = sub_40b170();
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
                                    if (*((char *)v19) != 0 || v22 != 0)
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
                                if (((char)!(r12<8> <= 9) & v76) == 0)
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
                        if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) == 0 || v73 == -2)
                        {
                            v74 = (char)!(r12<8> <= 9) & v76;
                        }
                        if ((v16 == 0 || v73 != -1) && (v16 == 0 || v73 != -2) && (v73 != -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) != 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) != 0 || v73 != -2))
                        {
                            if (v22 == 0)
                            {
                                break;
                            }
                            if (v22 != 0)
                            {
                                v78 = (char)!(r12<8> <= 9) & v76;
                                if (((char)!(r12<8> <= 9) & v76) == 0)
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
                        if (v22 != 0 && ((char)!(r12<8> <= 9) & v76) != 0 && (v16 == 0 || v73 != -1) && (v16 == 0 || v73 != -2) && (v73 != -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) != 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) != 0 || v73 != -2) && v75 >= v116 + (v116 << 2) || ((char)!(r12<8> <= 9) & v76) != 0 && (v73 == -1 || v73 == -2) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*((char *)v19) & 31)) & 1) == 0 || v16 != 0) && v75 >= v116 + (v116 << 2))
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
                                    if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v12) & 31)) & 1) != 0)
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
                                if (v80 == 1 || v79 == 0 && v75 == v1 || v11 == 0 && v15 == 0)
                                {
                                    v87 = v12;
                                    v88 = *(v12);
                                    v89 = (unsigned long long)*(v12) >> 5;
                                    if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v12) & 31)) & 1) != 0)
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
                            if ((v79 == 0 || v80 != 1) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v12) & 31)) & 1) == 0 || v9 != 0) && (v75 != v1 || v80 != 1))
                            {
                                __ctype_get_mb_cur_max();
                                sub_409040();
                                v13 = (unsigned int)sub_40b170();
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
                            if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v12) & 31)) & 1) == 0 && v80 == 1 || v80 == 1 && v9 != 0 || v79 == 0 && v75 == v1 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v12) & 31)) & 1) == 0 || v11 == 0 && v15 == 0 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v12) & 31)) & 1) == 0 || v79 == 0 && v75 == v1 && v9 != 0 || v11 == 0 && v15 == 0 && v9 != 0)
                            {
                                __ctype_get_mb_cur_max();
                                sub_409040();
                                v13 = (unsigned int)sub_40b170();
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
                                        if (v15 != 0 || *(v12) != 0)
                                        {
                                            break;
                                        }
                                    }
                                    v14 = 1;
                                    v92 = mbsinit((unsigned int)&v10);
                                    if (v92 != 0)
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
                            if (...)
                            {
                                v93 = v21;
                                v76 = 1;
                            }
                            if (...)
                            {
                                v76 = (unsigned int)sub_405d20();
                                if ((char)v76 != 0)
                                {
                                    break;
                                }
                                v93 = v21;
                            }
                            v1 = v75;
                            v75 += 1;
                        }
                        if (...)
                        {
                            v94 = v20;
                            if (v20 == v6)
                            {
                                v95 = memcmp(v19, v5, v94);
                            }
                        }
                        if (...)
                        {
                            v34 = v42;
                            v31 = 0;
                            v26 = *((int128_t *)&v19);
                            v26 = (long long)v26 + *((long long *)&((char *)&v26)[8]);
                            v96 = *(v42);
                            v97 = (unsigned long long)*(v42) >> 5;
                            v24 = *((int128_t *)&v16);
                            v28 = *((int128_t *)&v21);
                            *((int128_t *)&v30) = (int128_t)v23;
                            v25 = 0;
                            v33 = 0;
                            v32 = 0;
                            if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0)
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
                                    sub_409040();
                                    v35 = (unsigned int)sub_40b170();
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
                                            if (v37 != 0 || *(v34) != 0)
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
                        if (...)
                        {
                            abort(); /* do not return */
                        }
                        if (...)
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
                                    if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) != 0)
                                    {
                                        v35 = 1;
                                        v36 = 1;
                                        v37 = *(v101);
                                        v33 = 1;
                                    }
                                    else
                                    {
                                        v104 = mbsinit((unsigned int)&v32);
                                        if (v104 == 0)
                                        {
                                            break;
                                        }
                                        v31 = 1;
                                    }
                                }
                                if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v31 != 0)
                                {
                                    __ctype_get_mb_cur_max();
                                    sub_409040();
                                    v35 = (unsigned int)sub_40b170();
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
                                            if (v37 != 0 || *(v34) != 0)
                                            {
                                                break;
                                            }
                                        }
                                        v36 = 1;
                                        v106 = mbsinit((unsigned int)&v32);
                                        if (v106 != 0)
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
                                if (v37 != 0 || v35 == -1 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v35 == -2 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v35 == -1 && v31 != 0 || v35 == -2 && v31 != 0)
                                {
                                    if (v25 == 0)
                                    {
                                        if ((char)v24 == 0)
                                        {
                                            v107 = v26;
                                            v108 = *(v26);
                                            v109 = (unsigned long long)*(v26) >> 5;
                                            if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) != 0)
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
                                        if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || (char)v24 != 0)
                                        {
                                            __ctype_get_mb_cur_max();
                                            sub_409040();
                                            v27 = (unsigned int)sub_40b170();
                                            if ((long long)v27 == -1)
                                            {
                                                v27 = 1;
                                                v28 = 0;
                                                v25 = 1;
                                            }
                                            else if ((long long)v27 != -2)
                                            {
                                                if ((long long)v27 == 0)
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
                                                v111 = (int)(&v28)[4];
                                                v25 = 1;
                                            }
                                            if ((long long)v27 == -2)
                                            {
                                                v28 = 0;
                                                v27 = strlen(v26);
                                                v25 = 1;
                                            }
                                        }
                                    }
                                    if (v25 == 0 || (char)v28 != 0)
                                    {
                                        if (((char)v24 == 0 || v25 != 0) && (v25 != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) != 0))
                                        {
                                            v111 = (int)(&v28)[4];
                                            if ((int)(&v28)[4] == 0)
                                            {
                                                break;
                                            }
                                        }
                                        if (v36 != 0 && (int)(&v28)[4] != 0 && ((char)v24 == 0 || (long long)v27 != -2 || v25 != 0) && ((char)v24 == 0 || v25 != 0 || (long long)v27 != -1) && ((long long)v27 != -2 || v25 != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) != 0) && (v25 != 0 || (long long)v27 != -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) != 0))
                                        {
                                            v114 = v37 != v111;
                                        }
                                    }
                                    if (v36 == 0 && (int)(&v28)[4] != 0 || (char)v28 == 0 && v25 != 0 || (long long)v27 == -2 && v25 == 0 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || v25 == 0 && (long long)v27 == -1 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || (long long)v27 == -2 && v25 == 0 && (char)v24 != 0 || v25 == 0 && (long long)v27 == -1 && (char)v24 != 0)
                                    {
                                        if ((long long)v27 != v35)
                                        {
                                            break;
                                        }
                                        v114 = memcmp(v26, v34, (long long)v27) != 0;
                                    }
                                    if ((int)(&v28)[4] != 0 || (char)v28 == 0 && v25 != 0 || (long long)v27 == -2 && v25 == 0 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || v25 == 0 && (long long)v27 == -1 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || (long long)v27 == -2 && v25 == 0 && (char)v24 != 0 || v25 == 0 && (long long)v27 == -1 && (char)v24 != 0)
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
                            if (v35 == 0 && *(v34) == 0 && v35 != -1 && v35 != -2 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v31 != 0) && (v31 != 0 || v104 != 0) || v25 == 0 && (long long)v27 == 0 && *(v26) == 0 && (long long)v27 != -2 && (long long)v27 != -1 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || (char)v24 != 0) && (v110 != 0 || (char)v24 != 0))
                            {
                                sub_405d00(); /* do not return */
                            }
                            else if (v35 == 0 && v35 != -1 && v35 != -2 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v31 != 0) && (v31 != 0 || v104 != 0) || v25 == 0 && (long long)v27 == 0 && (long long)v27 != -2 && (long long)v27 != -1 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0 || (char)v24 != 0) && (v110 != 0 || (char)v24 != 0))
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if ((v25 == 0 || v31 == 0) && (v25 == 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0) && (v31 == 0 || (char)v24 == 0) && (v31 == 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || (char)v24 == 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v26) & 31)) & 1) == 0))
                            {
                                __assert_fail(); /* do not return */
                            }
                            else if (...)
                            {
                                v118 = 0;
                            }
                            else if (...)
                            {
                                v94 = v20;
                            }
                            else if (v37 == 0 && v31 == 0 && ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) != 0 || v37 == 0 && (v106 == 0 && v35 != -1 && v35 != -2 && (v37 == 0 || v35 != 0) && (*(v34) == 0 || v35 != 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v31 != 0) && (v31 != 0 || v104 != 0) || v35 != -1 && v106 != 0 && v35 != -2 && (v37 == 0 || v35 != 0) && (*(v34) == 0 || v35 != 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v34) & 31)) & 1) == 0 || v31 != 0) && (v31 != 0 || v104 != 0)))
                            {
                                return v118;
                            }
                        }
                        if (v37 != 0 || v20 == v6 || v95 == 0)
                        {
                            v94 = v20;
                        }
                        if (...)
                        {
                            v19 += v94;
                            v116 = 1;
                            v18 = 0;
                        }
                    }
                    if (...)
                    {
                        sub_405d00(); /* do not return */
                    }
                    else if (...)
                    {
                        v118 = *((long long *)&v31);
                    }
                    else if (...)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (...)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (...)
                    {
                        v118 = 0;
                    }
                    else if (...)
                    {
                        return v118;
                    }
                }
                if (*(v5) == 0 || v6 == -2 || v6 == -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0 || v6 != 0)
                {
                    sub_405d00(); /* do not return */
                }
            }
            if ((v6 == -2 || v6 == -1 || v6 == 0 || v8 != 0) && (v6 == -2 || v6 == -1 || *(v5) != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0 || v6 != 0))
            {
                __assert_fail(); /* do not return */
            }
        }
        if ((((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0) && (v6 == -2 || v6 == -1 || v48 == 0 || v8 != 0) && (v6 == -2 || v6 == -1 || v48 == 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0 || v6 != 0))
        {
            __assert_fail(); /* do not return */
        }
    }
    if (...)
    {
        v118 = v40;
    }
    if (*((char *)v40) == 0 && v41 <= 1 && *(v42) != 0 || v41 <= 1 && *((char *)v40) != 0 && *(v42) != 0 || v41 > 1 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0) && (v48 != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0) && (v6 == -2 || v6 == -1 || v8 != 0) && (v6 == -2 || v6 == -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0 || v6 != 0))
    {
        v118 = 0;
    }
    if (v41 <= 1 && *((char *)v40) != 0 && *(v42) != 0 || v41 > 1 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) == 0 || v8 != 0) && (v48 != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0) && (v6 == -2 || v6 == -1 || v8 != 0) && (v6 == -2 || v6 == -1 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v42) & 31)) & 1) != 0 || v6 != 0))
    {
        v118 = *((long long *)&v31);
    }
    if (...)
    {
        return v118;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_0;

int sub_40b9c0()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbp
    struct_0 *v3;  // rsi
    struct_0 *v4;  // rbx
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

extern unsigned int g_40eb2b;
extern unsigned int g_40eb2f;
extern unsigned int g_40eb3f;
extern unsigned int g_40eb56;
extern unsigned int g_40ebb8;
extern unsigned int g_40ec88;
extern unsigned int g_40eca8;
extern unsigned int g_40ecd0;
extern unsigned int g_40ecf8;
extern unsigned int g_40ed28;

int sub_4090e0()
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
    unsigned int v14;  // edx
    unsigned int v15;  // ecx
    unsigned int v17;  // edx
    unsigned int v18;  // ecx
    void *v20;  // rdi
    unsigned long v23;  // r9
    unsigned long v24;  // rsi
    unsigned long long v25;  // r14
    unsigned long long v26;  // r13
    unsigned long long v27;  // r12
    unsigned long long v28;  // r15
    char *v29;  // rax
    char *v30;  // rax

    v12 = v11;
    if (v13 != 0)
    {
        fprintf(v20, "%s (%s) %s\n", (unsigned int)v13, v17, v18);
    }
    else
    {
        fprintf(v20, "%s %s\n", v14, v15);
    }
    fprintf(v20, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(0x0, 0x40eb2b, 0x5), 2015);
    fputs((unsigned long long)dcgettext(0x0, 0x40ebb8, 0x5), v20);
    switch (v23)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40eb2f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40eb3f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40eb56, 0x5);
        break;
    case 4:
        dcgettext(0x0, 0x40ec88, 0x5);
        break;
    case 5:
        v30 = dcgettext(0x0, 0x40eca8, 0x5);
        *((unsigned long long [9])&v4) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        v30 = dcgettext(0x0, 0x40ecd0, 0x5);
        *((unsigned long long [9])&v5) = v11[5];
        *((unsigned long long [9])&v4) = v11[4];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        v29 = dcgettext(0x0, 0x40ecf8, 0x5);
        *((unsigned long long [9])&v4) = v11[6];
        *((unsigned long long [9])&v3) = v11[5];
        *((unsigned long long [9])&v2) = v11[4];
    case 8:
        *((unsigned long long [9])&v8) = v12[3];
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        v29 = dcgettext(0x0, 0x40ed28, 0x5);
        *((unsigned long long [9])&v5) = v11[7];
        *((unsigned long long [9])&v4) = v11[6];
        *((unsigned long long [9])&v3) = v11[5];
        *((unsigned long long [9])&v2) = v11[4];
    case 9:
        v24 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v25 = v12[7];
        v26 = v12[6];
        *((unsigned long long [9])&v9) = v12[8];
        v27 = v12[5];
        v28 = v12[4];
        *((unsigned long long [9])&v8) = v12[3];
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v11[1];
    default:
        v24 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v25 = v12[7];
        v26 = v12[6];
        *((unsigned long long [9])&v9) = v12[8];
        v27 = v12[5];
        v28 = v12[4];
        *((unsigned long long [9])&v8) = v12[3];
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v11[1];
    }
    v4 = v9;
    v3 = v25;
    v2 = v26;
    v1 = v27;
    v0 = v28;
    return fprintf(v20, (unsigned long long)dcgettext(0x0, v24, 0x5));
    fprintf(v20, v30);
    return v4;
    return fprintf(v20, v29);
}

int sub_408fe0() { crash_skku;
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
    char padding_50[8];
    unsigned long long field_58;
} struct_0;

int sub_409ec0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = 0;
    if (v2->field_28 <= v2->field_20)
    {
        v1 = v2->field_10 - v2->field_8;
        if (((unsigned short)v2->field_0 & 0x100) != 0)
        {
            v1 = v2->field_10 - v2->field_8 + v2->field_58 - v2->field_48;
        }
    }
    return v1;
}

extern unsigned long long g_612520;

int sub_4059e0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_612520 = v1;
    return v2;
}

extern unsigned long long *__environ;

int sub_404e60()
{
    unsigned long long v1;  // rbp
    unsigned long long *v2;  // rbx
    char *v3;  // rdi

    v1 = 0;
    v2 = __environ;
    if (*(__environ) != 0)
    {
        do
        {
            v2 = &v2[1];
            v3 = *(v2);
            v1 = v1 + strlen(v3) + 1;
        }
        while (*(v2) != 0);
    }
    return stack_base + 0;
}

extern unsigned int g_40dcf2;
extern unsigned int g_6122c0;
extern unsigned long long g_612510;

int sub_4058e0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v7;  // r12
    unsigned int *v8;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v1 = v3;
    v0 = v4;
    v5 = sub_409ec0();
    if (v5 != 0 || sub_40b2b0() != 0)
    {
        while (true)
        {
            v11 = sub_409ef0();
            if (v11 == 0)
            {
                v12 = sub_409e80();
                if (v12 != 0)
                {
                    sub_40b2b0();
                }
            }
            if (v12 == 0 || v11 != 0)
            {
                if (sub_40b2b0() == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, 0x40dcf2, 0x5);
            v8 = __errno_location();
            if (g_612510 != 0)
            {
                sub_408e10();
                error(0x0, *(v8), "%s: %s");
            }
            else
            {
                error(0x0, *(v8), "%s");
            }
            sub_405a00();
            _exit(g_6122c0);
        }
    }
}

int sub_409550()
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
        return sub_4090e0();
    }
}

extern unsigned int g_40bd88;
extern unsigned int g_40bdc0;
extern unsigned int g_40be10;
extern unsigned int g_40be88;
extern unsigned int g_40bf60;
extern unsigned int g_40bfb0;
extern unsigned int g_40c0a0;
extern unsigned int g_40c188;
extern unsigned int g_40c220;
extern unsigned int g_40c258;
extern unsigned int g_40c318;
extern unsigned int g_40c398;
extern unsigned int g_40c438;
extern unsigned int g_40c488;
extern unsigned int g_40c4d8;
extern unsigned int g_40c518;
extern unsigned int g_40c568;
extern unsigned int g_40c640;
extern unsigned int g_40c690;
extern unsigned int g_40c6d8;
extern unsigned int g_40c720;
extern unsigned int g_40c768;
extern unsigned int g_40c7a8;
extern unsigned int g_40c7f0;

int sub_4032b0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    void *v3;  // rdi
    void *v4;  // rbx

    v0 = v2;
    v4 = v3;
    fprintf(v3, (unsigned long long)dcgettext(0x0, 0x40bd88, 0x5));
    fputs((unsigned long long)dcgettext(0x0, 0x40bdc0, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40be10, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40be88, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40bf60, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40bfb0, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c0a0, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c188, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c220, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c258, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c318, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c398, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c438, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c488, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c4d8, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c518, 0x5), v3);
    fputs((unsigned long long)dcgettext(0x0, 0x40c568, 0x5), v4);
    fputs((unsigned long long)dcgettext(0x0, 0x40c640, 0x5), v4);
    fputs((unsigned long long)dcgettext(0x0, 0x40c690, 0x5), v4);
    fputs((unsigned long long)dcgettext(0x0, 0x40c6d8, 0x5), v4);
    fputs((unsigned long long)dcgettext(0x0, 0x40c720, 0x5), v4);
    fputs((unsigned long long)dcgettext(0x0, 0x40c768, 0x5), v4);
    fputs((unsigned long long)dcgettext(0x0, 0x40c7a8, 0x5), v4);
    dcgettext(0x0, 0x40c7f0, 0x5);
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4094f0()
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
    return sub_4090e0();
}

int sub_404114()
{
}

int sub_408a9b()
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
    v7 = (unsigned int)sub_407760();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_409680();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_407760();
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

int sub_408d80()
{
}

extern unsigned int g_40daf8;
extern unsigned long long g_6124f0;

int sub_404a40()
{
    char *v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    char *v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x3c]
    unsigned long v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x20]
    unsigned long v7;  // [bp-0x18]
    unsigned long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]
    char *|unsigned int v10;  // [bp+0x8]
    unsigned long v11;  // [bp+0x10]
    unsigned int v12;  // [bp+0x18]
    unsigned long v13;  // r15
    char *v14;  // rdx
    char *v15;  // r15
    unsigned long v16;  // r14
    unsigned long long v17[6];  // rdi
    unsigned long long v18[6];  // r14
    unsigned long v19;  // r13
    unsigned long v20;  // r12
    unsigned long v21;  // rcx
    unsigned long v22;  // rbx
    unsigned long long v23;  // rdi
    char *v24;  // rbx
    unsigned long v25;  // rsi
    unsigned long long v26;  // rbp
    char *v27;  // rax
    unsigned long v28;  // r13
    char *v29;  // rsi
    unsigned long long v31;  // rbp
    unsigned long long v33;  // r12
    unsigned long v34;  // r9
    char *v36;  // r8

    v9 = v13;
    v15 = v14;
    v8 = v16;
    v18 = v17;
    v7 = v19;
    v6 = v20;
    v33 = v21;
    v5 = v22;
    v23 = v17[3];
    v24 = g_6124f0;
    v3 = v25;
    v26 = v23 - 1;
    v2 = v10;
    v1 = v11;
    v4 = v12;
    if (g_6124f0 == 0)
    {
        v27 = sub_409680();
        v24 = v27;
        g_6124f0 = v27;
    }
    while (true)
    {
        v0 = (unsigned long long)(unsigned int)sub_4066f0();
        if (v0 != 0)
        {
            v28 = v0 - v15;
            if (v26 > v0 - v15)
            {
                v31 = v26 - v28;
                strncpy(v24, v15, v28);
                v24 = &v24[v28];
                if (v1 + v34 < v31)
                {
                    v26 = v31 - (v1 + v34);
                    if (v36 != 0)
                    {
                        strcpy(v24, v36);
                        v24 = &v24[v34];
                    }
                    strcpy(v24, v2);
                    v24 = &v24[v1];
                    v15 = &v0[v18[5]];
                    v33 = v33 - v18[5] - v28;
                }
                else
                {
                    v15 = v0;
                }
            }
        }
        else if (v33 < v26)
        {
            v29 = v15;
            v15 = &v15[v33];
            strncpy(v24, v29, v33);
            v26 -= v33;
            v24 = &v24[v33];
            v33 = 0;
        }
        if (*(v15) != 0 && (v33 >= v26 || v0 != 0) && (v26 <= v0 - v15 || v0 == 0 || v1 + v34 >= v31))
        {
            break;
        }
        *(v24) = 0;
        v10 = v4;
    }
    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40daf8, 0x5));
}

extern unsigned long long g_402ec0;
extern char g_402ed0;
extern unsigned long long g_402f00;
extern char g_403720;
extern unsigned long long g_403790;
extern unsigned long long g_4038b0;
extern unsigned long long g_404120;
extern unsigned int g_40cab8;
extern unsigned int g_40cb28;
extern unsigned int g_40cb50;
extern unsigned int g_40cc60;
extern unsigned int g_40ccc8;
extern unsigned int g_40cd50;
extern unsigned int g_40cd98;
extern unsigned int g_40cdd8;
extern unsigned int g_40ce20;
extern unsigned int g_40ce60;
extern unsigned int g_40ce88;
extern unsigned int g_40ceb0;
extern unsigned int g_40cee0;
extern unsigned int g_40cf20;
extern unsigned int g_40cf70;
extern unsigned int g_40cfa8;
extern unsigned int g_40cfe0;
extern unsigned int g_40d020;
extern unsigned int g_40d0d0;
extern unsigned int g_40d288;
extern int512_t g_40d6e0;
extern unsigned int g_40d94f;
extern unsigned int g_40f2d5;
extern unsigned int g_6122b0;
extern char g_6122b4;
extern unsigned int g_61233c;
extern unsigned long long g_6123b8;
extern char g_6123c0;
extern char g_6123c1;
extern char g_6123c2;
extern unsigned int g_6123c4;
extern unsigned int g_6123c8;
extern unsigned int g_6123d0;
extern char g_6123f0;
extern unsigned long long g_6123f8;
extern unsigned int g_612420;
extern unsigned long long g_612428;
extern unsigned long long g_612438;
extern unsigned long long g_612448;
extern unsigned long long g_612450;
extern unsigned long long g_612458;
extern unsigned long long g_612460;
extern unsigned long long g_612468;
extern unsigned long long g_612470;
extern unsigned long long g_612480;
extern unsigned long long g_612498;
extern unsigned long long g_6124a0;
extern unsigned long long g_6124a8;
extern unsigned long long g_6124d0;
extern unsigned int g_6124d8;
extern unsigned long long g_6124e0;
extern unsigned long long g_6124e8;
extern unsigned long long g_612ec8;
extern unsigned long long stderr;
extern unsigned long long stdin;

int main()
{
    unsigned long v0;  // [bp-0x138]
    unsigned long v1;  // [bp-0x130]
    unsigned long|unsigned long long v2;  // [bp-0x128]
    unsigned long|unsigned long long v3;  // [bp-0x120]
    unsigned int v4;  // [bp-0x110]
    unsigned int v5;  // [bp-0x10c]
    unsigned long|char *|unsigned long long v6;  // [bp-0x108]
    unsigned long|unsigned int *|unsigned long long v7;  // [bp-0x100]
    unsigned int v8;  // [bp-0xec]
    unsigned int v9;  // [bp-0xe5]
    char v10;  // [bp-0xe1]
    unsigned long|char v11;  // [bp-0xe0]
    unsigned long|unsigned long long v12;  // [bp-0xd8]
    char v13;  // [bp-0xd0]
    unsigned int v14;  // [bp-0x50]
    unsigned long v16;  // rdi
    unsigned int v17;  // rbp
    unsigned long long *v18;  // rsi
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned int v24;  // r13d
    unsigned int v25;  // eax
    unsigned long long v26;  // rax
    unsigned long long v28;  // r12
    unsigned long long v29;  // r15
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rdi
    unsigned long long v37;  // r12
    char v38;  // cc_dep2
    unsigned long v39;  // d
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rax
    unsigned long long v44;  // cc_dep1
    unsigned long v48;  // r9
    unsigned long v49;  // rsi
    unsigned long long v53;  // rax
    unsigned long long v54;  // r14
    unsigned long long *v55;  // rbx
    unsigned long long v56;  // r13
    unsigned long long v60;  // r14
    unsigned long long v67;  // rcx
    char *v68;  // rdi
    char v69;  // cc_dep2
    unsigned long long v71;  // rdi
    unsigned long long v72;  // r8
    unsigned long long *v76;  // rdx
    char *v77;  // rdi
    unsigned long long v78;  // rcx
    char v79;  // cc_dep2
    unsigned long long *v81;  // rdx
    char *v82;  // rdi
    unsigned long long v83;  // rcx
    char v84;  // cc_dep2
    unsigned long long v87;  // r14
    unsigned long long v90;  // r13
    unsigned long long v93;  // rax

    v17 = v16;
    v55 = v18;
    v9 = 1869112165;
    v10 = 0;
    sub_4075c0();
    sub_4053a0();
    g_6123c4 = 0;
    g_6123d0 = getpid();
    setlocale(0x6, 0x40f2d5);
    bindtextdomain(0x40d94f, 0x40cab8);
    textdomain(0x40d94f);
    v21 = sub_40bc80();
    if (v21 == 0)
    {
        v22 = sub_40bc80();
        if (v22 == 0)
        {
            v60 = &g_402f00;
            v23 = sub_404ea0();
            v24 = v23;
            v25 = (unsigned int)v23 - 1;
            if (v25 > 1)
            {
                v26 = sysconf(0x0);
                if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    if (v26 > 0x800)
                    {
                        *((int *)&g_612438) = (!(rax<8> - 0x800 <= g_612438)? g_612438 : rax<8> - 0x800);
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v26 > 0x800)
                {
                    if (g_612438 > 2047)
                    {
                        v60 = &g_402ec0;
                        g_612460 = &g_404120;
                        sub_404f80();
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            if (v25 <= 1 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && g_612438 > 2047 || v26 > 0x800 && g_612438 > 2047)
            {
                v5 = 1;
                v28 = &g_4038b0;
                v29 = "-";
                v4 = 0;
                while (true)
                {
                    v30 = sub_40b0f0();
                    if (v30 != -1)
                    {
                        switch ((unsigned int)v31)
                        {
                        case 0:
                            g_6123c0 = 0;
                            v28 = &g_403790;
                            break;
                        case 21: case 53:
                            if (*((char *)g_612ec8) != 0 && g_612ec8 != 0)
                            {
                                g_6123f8 = g_612ec8;
                            }
                            if (*((char *)g_612ec8) == 0 || g_612ec8 == 0)
                            {
                                g_6123f8 = 0;
                            }
                        case 25: case 57:
                            v32 = g_612ec8;
                            if (g_612ec8 == 0)
                            {
                                v32 = "{}";
                            }
                            g_612450 = v32;
                            g_612470 = 0;
                            g_612468 = 0;
                        case 28:
                            g_612470 = 0;
                            g_612468 = (unsigned int)sub_403570();
                            g_612450 = 0;
                            break;
                        case 32:
                            g_6122b0 = sub_403570();
                            break;
                        case 35:
                            v4 = 1;
                            break;
                        case 49:
                            v29 = g_612ec8;
                            break;
                        case 52:
                            v35 = -1;
                            v36 = g_612ec8;
                            v37 = (char)*((char *)g_612ec8);
                            while (v35 != 0)
                            {
                                v35 -= 1;
                                v38 = *((char *)v36);
                                v36 += v39;
                                break;
                            }
                            if (v35 != -3)
                            {
                                if (*((char *)g_612ec8) == 92)
                                {
                                    v37 = (char)*((char *)(g_612ec8 + 1));
                                    switch ((unsigned long long)(char)*((char *)(g_612ec8 + 1)) - 92 & 255)
                                    {
                                    case 0:
                                        *((unsigned long long *)&g_6123c0) = v37;
                                        v28 = &g_403790;
                                    case 5:
                                        v37 = 7;
                                        break;
                                    case 6:
                                        v37 = 8;
                                        break;
                                    case 10:
                                        v37 = 12;
                                        break;
                                    case 18:
                                        v37 = 10;
                                        break;
                                    case 22:
                                        v37 = 13;
                                        break;
                                    case 24:
                                        v37 = 9;
                                        break;
                                    case 26:
                                        v37 = 11;
                                        break;
                                    default:
                                        v6 = g_612ec8;
                                    }
                                }
                                else
                                {
                                    v6 = g_612ec8;
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40ccc8, 0x5));
                                }
                            }
                            if (*((char *)(g_612ec8 + 1)) != 120)
                            {
                                v6 = v6;
                                v7 = __errno_location();
                                v44 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)(char)*((char *)(g_612ec8 + 1)) * 2 + 1)) & 8);
                                if ((char)v44 != 0)
                                {
                                    v6 = v6;
                                    *(v7) = 0;
                                    v12 = 0;
                                    v37 = strtoul();
                                    if (v37 > 255)
                                    {
                                        v6 = v6;
                                        v49 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo.";
                                    }
                                }
                                else
                                {
                                    v7 = v7;
                                    v6 = v6;
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cb50, 0x5));
                                }
                            }
                            else
                            {
                                *(v7) = 0;
                                v12 = 0;
                                v37 = strtoul();
                                if (v37 > 255)
                                {
                                    v6 = v6;
                                    v49 = "Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx.";
                                }
                                else if (*((char *)v12) != 0)
                                {
                                    v7 = 0;
                                    v6 = v48;
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cc60, 0x5));
                                }
                            }
                            if ((*((char *)(g_612ec8 + 1)) == 120 || (char)v44 != 0) && (*((char *)(g_612ec8 + 1)) == 120 || v37 > 255) && (v37 > 255 || *((char *)(g_612ec8 + 1)) != 120))
                            {
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, v49, 0x5));
                            }
                        case 56:
                            sub_4032b0();
                            v93 = 0;
                        case 60:
                            if (g_612ec8 != 0)
                            {
                                g_612468 = (unsigned int)sub_403570();
                            }
                            else
                            {
                                g_612468 = 1;
                            }
                            g_612470 = 0;
                            g_612450 = 0;
                        case 62:
                            g_612468 = 0;
                            g_612470 = (unsigned int)sub_403570();
                            if (g_612470 == 1 && g_612450 != 0)
                            {
                                g_612470 = 0;
                            }
                            if (g_612450 == 0 || g_612470 != 1)
                            {
                                g_612450 = 0;
                            }
                        case 64:
                            g_6123c1 = 1;
                        case 66:
                            v5 = 0;
                            break;
                        case 67:
                            r14<8>();
                            v40 = (unsigned int)sub_403570();
                            if (g_612428 < v40)
                            {
                                v6 = g_612428;
                                v7 = v40;
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40cd50, 0x5));
                                v40 = g_612428;
                            }
                            g_612438 = v40;
                        case 68:
                            g_6123c2 = 1;
                            break;
                        case 70:
                            sub_404580();
                            v93 = 0;
                        case 72:
                            g_612420 = 1;
                            break;
                        case 80:
                            if (strchr(g_612ec8, 0x3d) != 0)
                            {
                                v6 = (&g_40d6e0)[4 * (long long)(int)v8];
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cd98, 0x5));
                            }
                            else
                            {
                                g_6123b8 = g_612ec8;
                                v6 = g_612ec8;
                                v41 = unsetenv(g_612ec8);
                                v7 = v6;
                                v6 = (unsigned long long)dcgettext(0x0, 0x40cdd8, 0x5);
                                error(0x1, *(__errno_location()), v6);
                            }
                        default:
                            sub_4032b0();
                            v93 = 1;
                        }
                    }
                    else
                    {
                        if (v28 == 4208528 && g_6123f8 != 0)
                        {
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40ce20, 0x5));
                        }
                        r14<8>();
                        if (v24 == 0)
                        {
                            v12 = &g_402ed0;
                            sigemptyset((unsigned int)&v13);
                            v14 = 0;
                            if (sigaction() != 0)
                            {
                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ce60, 0x5));
                            }
                            v12 = &g_403720;
                            sigemptyset((unsigned int)&v13);
                            v14 = 0;
                            if (sigaction() != 0)
                            {
                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ce88, 0x5));
                            }
                            v53 = strcmp(v29, "-");
                            if (v53 == 0)
                            {
                                g_6124e8 = stdin;
                            }
                            else
                            {
                                g_6124d8 = 1;
                                g_6124e8 = (unsigned int)sub_4036c0();
                                if (g_6124e8 == 0)
                                {
                                    v54 = (unsigned int)sub_408c90();
                                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d288, 0x5));
                                }
                            }
                            if (v53 == 0 || g_6124e8 != 0)
                            {
                                if (g_612468 != 0 || g_612450 != 0)
                                {
                                    g_612420 = 1;
                                }
                                if (g_61233c == v17)
                                {
                                    v55 = &v11;
                                    v17 = 1;
                                    g_61233c = 0;
                                    v11 = stack_base + -229;
                                }
                                if (v4 != 0)
                                {
                                    v56 = (unsigned int)sub_404e60();
                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40ceb0, 0x5));
                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40cee0, 0x5));
                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40cf20, 0x5));
                                    v60 = (unsigned int)sub_404e60();
                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40cf70, 0x5));
                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40cfa8, 0x5));
                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40cfe0, 0x5));
                                    if (isatty(0x0) != 0)
                                    {
                                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40d020, 0x5));
                                        if (v5 != 0)
                                        {
                                            fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40d0d0, 0x5));
                                        }
                                    }
                                }
                                g_6124e0 = (unsigned int)sub_409680();
                                g_612498 = (unsigned int)sub_409680();
                                signal(0x11, 0x0);
                                if (g_612450 != 0)
                                {
                                    if (v17 > g_61233c)
                                    {
                                        do
                                        {
                                            v77 = v55[rdx<8>];
                                            v78 = -1;
                                            while (v78 != 0)
                                            {
                                                v78 -= 1;
                                                v79 = *(v77);
                                                v77 = &v77[v39];
                                                break;
                                            }
                                            *((long long *)((unsigned int)sub_409680() + v76 * 8)) = !(rcx<8>) - 1;
                                            v81 = (char *)v76 + 1;
                                        }
                                        while (v17 > (unsigned int)((int)g_61233c + 1));
                                    }
                                    v82 = g_612450;
                                    v83 = -1;
                                    while (v83 != 0)
                                    {
                                        v83 -= 1;
                                        v84 = *(v82);
                                        v82 = &v82[v39];
                                        break;
                                    }
                                    g_612448 = !(rcx<8>) - 1;
                                    while (true)
                                    {
                                        if ((unsigned int)v60 == -1)
                                        {
                                            break;
                                        }
                                        v60 = r12<8>();
                                        sub_405050();
                                        v60 = v87 - 1;
                                        g_6124a0 = 0;
                                        v3 = (int)g_61233c;
                                        v2 = g_6122b4;
                                        sub_4047a0();
                                        g_6122b4 = 0;
                                        v90 = (int)(g_61233c + 1);
                                        if (v17 > g_61233c + 1)
                                        {
                                            while (true)
                                            {
                                                v90 += 1;
                                                v2 = g_6122b4;
                                                v1 = v60;
                                                v0 = g_6124e0;
                                                sub_404a40();
                                                if (v17 <= (unsigned int)v90)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        sub_404c00();
                                    }
                                }
                                else
                                {
                                    for (; g_61233c < v17; v72 = v3)
                                    {
                                        v67 = -1;
                                        v68 = v55[(long long)(int)g_61233c];
                                        while (v67 != 0)
                                        {
                                            v67 -= 1;
                                            v69 = *(v68);
                                            v68 = &v68[v39];
                                            break;
                                        }
                                        v3 = 0;
                                        v2 = g_6122b4;
                                        sub_4047a0();
                                        g_61233c = g_61233c + 1;
                                        v71 = v2;
                                    }
                                    g_6122b4 = 0;
                                    g_612458 = g_612480;
                                    g_6124a8 = g_6124a0;
                                    while (true)
                                    {
                                        if (!((char)(r12<8>() + 1 == 0)))
                                        {
                                            sub_404c00();
                                            g_6124d0 = 0;
                                        }
                                        else
                                        {
                                            if (g_612480 == g_612458 && (v5 == 0 || g_6123f0 != 0))
                                            {
                                                break;
                                            }
                                            sub_404c00();
                                        }
                                    }
                                }
                                g_6123c4 = g_6123c8;
                                v93 = g_6123c8;
                            }
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if (*((long long *)(rax<8> * 8 + 4248384)) == 4203665 && v30 != -1 || *((long long *)(rax<8> * 8 + 4248384)) == 4203304 && v30 != -1 || *((long long *)(rax<8> * 8 + 4248384)) == 4203646 && v30 != -1 || v53 == 0 && v24 == 0 && v30 == -1 || (unsigned int)(v30 - 48) > 80 && v30 != -1 || v24 == 0 && v30 == -1 && g_6124e8 != 0)
                    {
                        return v93;
                    }
                }
            }
        }
    }
    if (v21 != 0 || v22 != 0)
    {
        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40cb28, 0x5));
    }
}

int sub_408e10()
{
}

int sub_408f70()
{
}

int sub_402c66()
{
}

int sub_402d78()
{
}

int sub_404ea0() { crash_skku;
}
int sub_40572f()
{
    unsigned long long v1;  // [bp+0x10]
    unsigned long long v2;  // [bp+0x20]
    unsigned long long v3;  // [bp+0x28]
    unsigned long long v4;  // [bp+0x30]
    unsigned long long v5;  // rbx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13
    unsigned long long v10;  // r14

    v7 = v1;
    v8 = v2;
    v9 = v3;
    v10 = v4;
    return v5;
}

extern int512_t g_612640;

int sub_408970()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_612640 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_612640 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[4];
    unsigned int field_c;
} struct_1;

extern int512_t g_6126c0;

int sub_40b890()
{
    unsigned long v1;  // rdi
    struct_1 *v3;  // rsi
    unsigned long long v5;  // rax

    if (!((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rdi<8>, 0x10<64>, cc_ndep<8>)))
    {
        v3 = malloc(v1 + 16);
        if (v3 != 0)
        {
            v3->field_c = 336984906;
            v5 = *((long long *)&((char *)(0x8 * v3 + -2056 * ((unsigned long long)(&v3[1] * -71777214294589695 >> 64) >> 8) + (char *)&g_6126c0))[128]);
            *((struct_1 **)&((char *)(0x8 * v3 + -2056 * ((unsigned long long)(&v3[1] * -71777214294589695 >> 64) >> 8) + (char *)&g_6126c0))[128]) = &v3[1];
            v3->field_0 = v5;
        }
        return &v3[1];
    }
    return 0;
}

extern unsigned int g_612334;
extern unsigned int g_612338;
extern unsigned int g_61233c;
extern unsigned int g_612680;
extern unsigned int g_612684;
extern unsigned int g_612688;
extern unsigned long long g_612690;
extern unsigned long long g_612ec8;

int sub_40b070()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_612680 = g_61233c;
    g_612684 = g_612338;
    v1 = (unsigned int)v2;
    v0 = &g_612680;
    g_61233c = g_612680;
    g_612ec8 = g_612690;
    g_612334 = g_612688;
    return sub_40a030();
}

int sub_408c50()
{
}

int sub_405260()
{
    char v0;  // [bp-0x18]
    unsigned long long v4;  // rdx

    v4 = ((unsigned long long)sysconf(0x4) == -1? 20 : (unsigned long long)sysconf(0x4));
    if (getrlimit(0x7, (unsigned int)&v0) == 0)
    {
        v4 = (unsigned int)(*((long long *)&v0) == -1? (unsigned int)v4 : (unsigned int)*((long long *)&v0));
    }
    return v4;
}

int sub_4094d0()
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

int sub_403a27()
{
}

extern unsigned long long g_612510;

int sub_4058d0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_612510 = v1;
    return v2;
}

extern char g_6123a1;
extern unsigned int g_6123c4;
extern unsigned int g_6123c8;
extern unsigned int g_6123d0;

int sub_403ec0()
{
    unsigned long long v1;  // rax

    v1 = getpid();
    if ((unsigned int)v1 == g_6123d0)
    {
        if (g_6123a1 == 0)
        {
            g_6123a1 = 1;
            sub_402f30();
            v1 = g_6123c8;
            g_6123a1 = 0;
            if (g_6123c4 != g_6123c8)
            {
                _exit(g_6123c8);
            }
        }
        if (g_6123c4 == g_6123c8 || g_6123a1 != 0)
        {
            return v1;
        }
    }
    if ((unsigned int)v1 != g_6123d0 || g_6123a1 == 0 && g_6123c4 != g_6123c8)
    {
        __assert_fail(); /* do not return */
    }
}

extern unsigned int g_40c990;
extern unsigned int g_40d1c7;
extern unsigned int g_40d1ef;
extern unsigned long long g_6123a8;
extern unsigned long long g_612480;
extern unsigned long long *g_612488;
extern unsigned long long stderr;

int sub_403f30()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v3;  // rdi
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    if (g_612480 != 1)
    {
        v1 = 0;
        while (true)
        {
            v2 = fprintf(stderr, "%s ", (unsigned int)g_612488[v1]);
            if (v2 >= 0)
            {
                v1 += 1;
                if (g_612480 - 1 <= v1)
                {
                    break;
                }
            }
            else
            {
                error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d1c7, 0x5));
            }
        }
    }
    if (!((char)v3 != 0))
    {
        _IO_putc(0xa, stderr);
        return 0;
    }
    else if (g_6123a8 != 0)
    {
        fwrite("?...", 0x1, 0x4, stderr);
        v6 = sub_409e80();
        if (v6 == 0)
        {
            if ((unsigned int)v6 != 10 && (unsigned int)v6 != -1)
            {
                do
                {
                    v8 = _IO_getc(g_6123a8);
                    if ((unsigned int)v8 == -1)
                    {
                        break;
                    }
                }
                while ((unsigned int)v8 != 10);
            }
            if ((unsigned int)v6 == -1 || (unsigned int)v6 == 10)
            {
                v6 = (unsigned int)_IO_getc(g_6123a8);
            }
            if ((unsigned int)v8 != -1)
            {
                return v8;
            }
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d1ef, 0x5));
        }
        else
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d1c7, 0x5));
        }
    }
    else
    {
        g_6123a8 = (unsigned int)sub_4036c0();
        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c990, 0x5));
    }
}

int sub_409680()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4098a0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_40478d()
{
    unsigned long long v1;  // [bp+0x10]
    unsigned long long v2;  // [bp+0x20]
    unsigned long long v3;  // rbx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // r12

    v5 = v1;
    v6 = v2;
    return v3;
}

int sub_408c90()
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
    return sub_408770();
}

int sub_409040()
{
    unsigned long v1;  // rdi

    return (sub_40b1a0() != 0? (unsigned int)sub_40b1a0() - v1 + 1 : rsi<8>);
}

extern int512_t g_40f520;

int sub_40ba20()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al

    v2 = v1;
    v3 = (char)v1 % 32;
    return (unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)&g_40f520)[4 * (unsigned long long)(unsigned int)(rax<4> & 7)]) >> ((char)v1 & 31)) & 1;
}

int sub_408910()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_409840();
}

int sub_4096d0()
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
            sub_4098a0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_40d960;

int sub_404710()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long long v2;  // rbx
    char *v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // rsi
    unsigned long long v7;  // rax

    v2 = 0;
    v4 = getenv(v3);
    if (v4 != 0)
    {
        v5 = sub_4098e0();
        if (v5 == 0)
        {
            v2 = 0;
            v2 = (char)(v0 < v6);
        }
        else
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d960, 0x5));
        }
    }
    if (v5 == 0 || v4 == 0)
    {
        v7 = v2;
        return v7;
    }
}

extern char g_612388;
extern unsigned long long g_612390;

int sub_402e61()
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

    if (g_612388 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_612390 >= 0)
            {
                break;
            }
            g_612390 = g_612390 + 1;
            *((long long *)(6364736 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_612388 = 1;
        return sub_402e0b();
    }
    return v4;
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

int sub_409ef0()
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

int sub_4096a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi

    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rsi<8>, cc_ndep<8>))
    {
        v0 = v2 * v3;
        sub_4098a0(); /* do not return */
    }
}

int sub_405070()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // r12
    unsigned long long v3;  // rbp
    unsigned long long v5;  // rbx
    char *v6;  // rdi

    v2 = v1;
    v3 = 0;
    v5 = 0;
    if (*((long long *)v1) != 0)
    {
        do
        {
            v5 += 1;
            v6 = *((long long *)(v2 + v5 * 8));
            v3 += strlen(v6);
        }
        while (*((long long *)(v2 + (v5 << 3))) != 0);
    }
    if (sub_404710() != 0)
    {
        return 1;
    }
    sub_404710();
    return 1;
}

int sub_40311e()
{
}

int sub_4052b0()
{
    unsigned int|char v0;  // [bp-0x238]
    unsigned short v1;  // [bp-0x234]
    unsigned short v2;  // [bp-0x232]
    char v3;  // [bp-0x230]
    unsigned long long v4;  // [bp-0x30]
    unsigned long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r15
    unsigned long long v13;  // r14
    unsigned long long v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // rsi
    unsigned long long v17;  // r13
    unsigned long long v18;  // r12
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rbx
    unsigned long v23;  // r15
    unsigned long v24;  // rsi
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rcx
    unsigned int v29;  // edi
    unsigned long long v30;  // rax
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rax
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r12
    unsigned long long v37;  // r13
    unsigned long long v38;  // r14
    unsigned long long v39;  // r15

    if ((unsigned int)v11 > 0)
    {
        v9 = v12;
        v8 = v13;
        v14 = v11;
        v7 = v15;
        v17 = v16;
        v6 = v18;
        v5 = stack_base + 0;
        v21 = 0;
        v4 = v22;
        while (true)
        {
            v23 = (unsigned int)((unsigned int)(v14 - v21) <= 64? (unsigned int)(v14 - v21) : 64);
            v24 = ((unsigned int)(v14 - v21) <= 64? (unsigned int)(v14 - v21) : 64);
            if ((unsigned int)(v14 - v21) > 0)
            {
                v25 = &v0;
                v26 = 0;
                do
                {
                    v28 = 5;
                    v25 = &v3;
                    v2 = 0;
                    v29 = v21 + v26;
                    v26 = (unsigned int)v26 + 1;
                    v1 = 5;
                    v0 = v29;
                }
                while ((unsigned int)v26 < (unsigned int)v23);
                v30 = poll();
                if (v30 != -1)
                {
                    v31 = 0;
                    do
                    {
                        if (v2 != 32)
                        {
                            v32 = v0;
                            v33 = v19;
                            v34 = r13<8>();
                            if ((unsigned int)v34 != 0)
                            {
                                break;
                            }
                        }
                        v31 += 1;
                    }
                    while ((unsigned int)v23 > (unsigned int)v31);
                    if (v2 == 32 || (unsigned int)v34 == 0)
                    {
                        v21 += v23;
                    }
                    else if (v2 != 32)
                    {
                        v35 = v4;
                        v36 = v6;
                        v37 = v7;
                        v38 = v8;
                        v39 = v9;
                        return v34;
                    }
                }
            }
            else
            {
                v27 = poll();
            }
            if (v27 == -1 && (unsigned int)(v14 - v21) <= 0 || v30 == -1 && (unsigned int)(v14 - v21) > 0)
            {
                v34 = -18446744069414584321;
            }
            if ((unsigned int)(v14 - v21) <= 0 && v27 != -1 || (unsigned int)(v14 - v21) > 0 && v30 != -1)
            {
                v21 += v23;
                v34 = 0;
            }
        }
        v35 = v4;
        v36 = v6;
        v37 = v7;
        v38 = v8;
        v39 = v9;
        return v34;
    }
    return 0;
}

extern uint128_t g_612640;
extern uint128_t g_612650;
extern uint128_t g_612660;
extern unsigned long long g_612670;

int sub_408eb0()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_612640;
    *((uint128_t *)&v1) = g_612650;
    *((uint128_t *)&v2) = g_612660;
    v4 = g_612670;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_408770();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern int512_t g_612640;

int sub_408a00()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_612640 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_407760();
}

extern int512_t g_612640;

int sub_4089b0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_612640 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_612640 : v1) + 4)) = v3;
    return v2;
}

int sub_4058c0()
{
}

extern unsigned int g_40dd0c;
extern unsigned int g_6122c0;
extern char g_612518;
extern unsigned long long g_612520;

int sub_405a00()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40b2b0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_612518 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40dd0c, 0x5);
            if (g_612520 != 0)
            {
                sub_408e10();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_612518 != 0)
    {
        v3 = sub_40b2b0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_612518 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6122c0);
        error(0x0, *(v2), "%s");
    }
}

extern unsigned int g_40c820;
extern unsigned int g_40c848;
extern unsigned int g_40c878;
extern unsigned long long stderr;

int sub_403570()
{
    char v0;  // [bp-0x30]
    char *v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v6;  // rcx
    unsigned int v11;  // r8d

    v3 = strtol(v2, &v0, 0xa);
    if (*((long long *)&v0) != v2 && *((char *)*((long long *)&v0)) == 0)
    {
        if (v3 >= v4)
        {
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v3 > v6)
            {
                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40c878, 0x5));
                if (v11 == 0)
                {
                    v3 = v6;
                }
            }
            if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>) || v11 == 0 || v3 <= v6)
            {
                return v3;
            }
        }
        else
        {
            fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40c848, 0x5));
            if (v11 == 0)
            {
                return stack_base + 0;
            }
        }
        if (v11 != 0 && (v3 < v4 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>))) && (v3 < v4 || v3 > v6))
        {
            sub_4032b0();
            exit(0x1); /* do not return */
        }
    }
    if (*((long long *)&v0) == v2 || *((char *)*((long long *)&v0)) != 0)
    {
        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40c820, 0x5));
        sub_4032b0();
        exit(0x1); /* do not return */
    }
}

int sub_4026d7()
{
}

extern unsigned long long program_invocation_short_name;

int sub_402e0b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_405160()
{
    void tmp_18;  // tmp #18
    unsigned long long v1;  // rsi
    unsigned long long v2[2];  // rbp
    unsigned long v3;  // rax
    unsigned int v4;  // cc_dep1
    unsigned long long v6;  // rbx
    unsigned int *v7;  // rax
    unsigned int v8;  // edi
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax

    v2 = v1;
    v3 = sub_409d40();
    v4 = v3 & 1;
    if (v4 != 0)
    {
        v10 = 0;
    }
    else
    {
        v6 = v3 & 1;
        v7 = sub_405740();
        if (v7 != 0)
        {
            tmp_18 = v2[1];
            v2[0] = v7;
            v7[tmp_18] = v8;
            v9 = v6;
            v2[1] = tmp_18 + 1;
            return v9;
        }
        v10 = -18446744069414584321;
    }
    if (v7 == 0 || v4 != 0)
    {
        v11 = v10;
        return v11;
    }
}

int sub_4097b0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long long *v3;  // rsi
    unsigned long long *v4;  // rsi

    if (!(v2 != 0))
    {
        *((int *)v3) = (*(v4) == 0? 128 : *(v4));
    }
    else if (*(v4) <= 12297829382473034409)
    {
        *(v4) = (*(v4) >> 1) + *(v4) + 1;
    }
    else
    {
        v0 = *(v4);
        sub_4098a0(); /* do not return */
    }
}

int sub_409840()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409680();
}

int sub_4025c3()
{
}

extern char g_612640;

int sub_4089d0()
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
    v3 = (v2 == 0? &g_612640 : v2);
    *((int *)(tmp_11? &g_612640 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_612640;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_612640;
        abort(); /* do not return */
    }
}

int sub_409870()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
    sub_409680();
}

int sub_408f20()
{
}

int sub_40b170()
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rdx

    if (v1 != 0 && v2 == 0)
    {
        return -2;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_612528;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4075c0()
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
        g_612528 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern char g_405c64;

int sub_405b80()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rdi
    char *v8;  // rbx
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r8
    unsigned long long v15;  // r9
    unsigned long long v16;  // rax
    unsigned long long *v17;  // rcx
    unsigned long long v18;  // r8
    char v19[2];  // r9
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v23;  // rbx

    if (v5 <= 2305843009213693951)
    {
        v3 = stack_base + 0;
        v2 = v6;
        v8 = v7;
        v9 = v5 * 8;
        if (v5 << 3 <= 4015)
        {
            rsp<8> = stack_base + -56 - (v9 + 39 & -0x10);
            v13 = (stack_base + -56 - (v9 + 39 & -0x10) + 15 & -0x10) + 16;
        }
        else
        {
            v1 = v10;
            rsp<8> = stack_base + -64;
            v13 = (unsigned int)sub_40b890();
            v11 = v1;
        }
        if (v5 << 3 > 4015 && v13 == 0 || v5 << 3 <= 4015 && (stack_base + -56 - ((v5 << 3) + 39 & -0x10) + 15 & -0x10) + 16 == 0)
        {
            v12 = v2;
            return 0;
        }
        if (v5 << 3 > 4015 && v13 != 0 || v5 << 3 <= 4015 && (stack_base + -56 - ((v5 << 3) + 39 & -0x10) + 15 & -0x10) + 16 != 0)
        {
            *((long long *)(v13 + 8)) = 1;
            v14 = 0;
            v15 = 2;
            if (v5 > 2)
            {
                while (true)
                {
                    v16 = (char)*((char *)(v11 + v15 - 1));
                    if (*((char *)(v11 + v15 - 1)) != *((char *)(v11 + v14)))
                    {
                        while (true)
                        {
                            if (v14 != 0)
                            {
                                v14 -= *((long long *)(v13 + v14 * 8));
                                if (*((char *)(v11 + v14)) == v16)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                *((long long *)(v13 + 2 * 8)) = 2;
                                v14 = 0;
                            }
                        }
                        if (v14 != 0)
                        {
                            v14 += 1;
                            *((unsigned long long *)(v13 + v15 * 8)) = v15 - v14;
                        }
                        else if (v14 == 0)
                        {
                            v15 += 1;
                            if (v5 == v15)
                            {
                                break;
                            }
                        }
                    }
                    v14 += 1;
                    *((unsigned long long *)(v13 + v15 * 8)) = v15 - v14;
                }
            }
            *(v17) = 0;
            v18 = *(v8);
            v19 = v8;
            v20 = 0;
            while (v18 != 0)
            {
                while (true)
                {
                    if (*((char *)(v1 + v20)) == v18)
                    {
                        v21 = v20 + 1;
                        if (v5 != v21)
                        {
                            v18 = v19[1];
                        }
                        else
                        {
                            *(v17) = v8;
                        }
                    }
                    else if (v20 != 0)
                    {
                        v8 = &v8[*((long long *)(v13 + v20 * 8))];
                        v20 -= *((long long *)(v13 + v20 * 8));
                        if (v18 == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v18 = v19[1];
                    }
                }
                if (v5 == v21 && *((char *)(v1 + v20)) == v18 || *((char *)(v1 + v20)) != v18 && v20 != 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v0 = &g_405c64;
                    sub_40b900();
                    v23 = v2;
                    return 1;
                }
            }
            rsp<8> = rsp<8> - 8;
            v0 = &g_405c64;
            sub_40b900();
            v23 = v2;
            return 1;
        }
    }
    else
    {
        return 0;
    }
}

int sub_4030b2()
{
}

int sub_40b0f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b070();
}

int sub_408e00()
{
}

int sub_407760()
{
    void tmp_2;  // tmp #2
    void tmp_1;  // tmp #1
    unsigned long long v0;  // [bp-0x1d8]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned int|char v4;  // [bp-0xac]
    unsigned long|unsigned long long|char v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long|unsigned int v8;  // [bp-0x90]
    unsigned long|unsigned long long v9;  // [bp-0x88]
    unsigned long long|unsigned int v10;  // [bp-0x80]
    unsigned long long|unsigned int v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    unsigned long v13;  // [bp-0x68]
    unsigned int v14;  // [bp-0x60]
    char v15;  // [bp-0x5b]
    unsigned long long v16;  // [bp-0x5a]
    char v17;  // [bp-0x59]
    unsigned long long v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    char v20;  // [bp-0x44]
    unsigned long long v21;  // [bp-0x40]
    unsigned int *v22;  // [bp+0x8]
    unsigned long long v23;  // [bp+0x10]
    void *v24;  // [bp+0x18]
    unsigned long long v25;  // rdi
    unsigned long long v26;  // r15
    unsigned long v27;  // r9
    unsigned long long v28;  // rcx
    unsigned int v29;  // r8d
    unsigned long long v30;  // cc_dep1
    unsigned long long v32;  // r11
    unsigned long v33;  // r11
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // r12
    unsigned long long v38;  // rax
    unsigned long|unsigned long long v39;  // r10
    unsigned long long v40;  // r11
    unsigned long|unsigned long long v41;  // r8
    unsigned long long v42;  // r12
    unsigned long|unsigned long long|char v43;  // rax
    unsigned long long v44;  // r9
    char v45;  // al
    unsigned long long v46;  // rbp
    char v47;  // bpl
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    char v50;  // al
    unsigned long|unsigned long long|unsigned int v51;  // rbp
    unsigned long long v52;  // rcx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rdx
    unsigned short v56;  // dx
    unsigned long long|char v57;  // rdx
    unsigned long long v58;  // rbx
    unsigned long long v59;  // r14
    unsigned long long v60;  // r12
    unsigned long long v61;  // r15
    char *v62;  // rdx
    unsigned long long v63;  // r8
    unsigned long long v64;  // rcx
    unsigned long long v65;  // rcx
    unsigned long long v67;  // rax
    unsigned long long v68;  // rcx
    unsigned long long|unsigned int v69;  // rax
    unsigned long long v71;  // rax
    char v72;  // al
    unsigned int v73;  // eax
    char v74;  // al
    unsigned int v76;  // eax
    char v77;  // al
    unsigned long long v79;  // rdx
    char v80;  // dl
    unsigned long long v81;  // rbx
    unsigned int *|unsigned long long v82;  // rsi
    unsigned long long v83;  // r14
    unsigned long long v84;  // r13
    unsigned long long v85;  // rax
    char v87;  // al
    unsigned long long v88;  // rax
    unsigned long long v89;  // rax
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax

    v26 = v25;
    v83 = v82;
    v51 = (unsigned int)v27 & 2;
    v6 = v43;
    v5 = v28;
    v4 = v29;
    v14 = v27;
    v13 = __ctype_get_mb_cur_max();
    v30 = v4;
    switch (v4)
    {
    case 0:
        v15 = 0;
        v81 = 0;
        v4 = 0;
        v7 = 0;
        v12 = 0;
    case 1:
        v15 = 1;
        v81 = 0;
        v32 = 2;
        v4 = 0;
        v7 = 1;
        v12 = "'";
    case 2:
        if (((char)v27 & 2) == 0)
        {
            v4 = 0;
        }
        else
        {
            v15 = 1;
            v81 = 0;
            v4 = 0;
            v7 = 1;
            v12 = "'";
        }
    case 3:
        v15 = 1;
        v81 = 0;
        v32 = 2;
        v4 = 1;
        v7 = 1;
        v12 = "'";
    case 4:
        if (((char)v27 & 2) == 0)
        {
            v4 = 1;
            if (v82 != 0)
            {
                *((char *)v25) = 39;
            }
            v15 = 0;
            v81 = 1;
            v32 = 2;
            v7 = 1;
            v12 = "'";
        }
    case 5:
        if (((char)v27 & 2) == 0)
        {
            if (v82 != 0)
            {
                *((char *)v25) = 34;
            }
            v15 = 0;
            v81 = 1;
            v4 = 1;
            v7 = 1;
            v12 = "\"";
        }
        else
        {
            v15 = 1;
            v81 = 0;
            v4 = 1;
            v7 = 1;
            v12 = "\"";
        }
    case 6:
        v15 = 1;
        v81 = 0;
        v32 = 5;
        v4 = 1;
        v7 = 1;
        v12 = "\"";
    case 7:
        v15 = 0;
        v81 = 0;
        v4 = 1;
        v7 = 0;
        v12 = 0;
    case 8: case 9: case 10:
        if (v30 != 10)
        {
            v5 = v5;
            v4 = v33;
            v23 = (unsigned int)sub_407660();
            v24 = (unsigned long long)(unsigned int)sub_407660();
        }
        v81 = 0;
        if (((char)v27 & 2) == 0)
        {
            v34 = (char)*((char *)v23);
            if (*((char *)v23) != 0)
            {
                do
                {
                    if (v82 > v81)
                    {
                        *((unsigned long long *)(v25 + v81)) = v34;
                    }
                    v81 += 1;
                    v34 = (char)*((char *)(v23 + v81));
                }
                while ((char)v34 != 0);
            }
        }
        *((unsigned long *)&v8) = v33;
        v5 = v33;
        v15 = ((unsigned int)v27 & 2) != 0;
        v4 = 1;
        v7 = strlen(v24);
        v32 = v8;
        v12 = v24;
    default:
        abort(); /* do not return */
    }
    v35 = v32;
    v33 = v5;
    v39 = v35;
    v84 = 0;
    v41 = 0;
    while (true)
    {
        v51 = (char)(v40 != v84);
        if (v40 == -1)
        {
            v51 = (char)(*((char *)(v6 + v84)) != 0);
        }
        if (v51 != 0)
        {
            v44 = v6 + v84;
            v5 = (unsigned int)v39 != 2 & v4;
            if (((unsigned int)v39 != 2 & v4) != 0)
            {
                v36 = v7;
                if (v7 != 0)
                {
                    v37 = v84 + v36;
                    if (v40 == -1 && v36 > 1)
                    {
                        v10 = v39;
                        v9 = v41;
                        v8 = v44;
                        v40 = strlen(v6);
                    }
                    if (v37 <= v40)
                    {
                        v11 = v39;
                        v10 = v40;
                        v9 = v41;
                        v8 = v44;
                        v38 = memcmp(v44, v12, v7);
                        v44 = v8;
                        v41 = (char)v9;
                        v40 = v10;
                        v39 = v11;
                        if (v38 == 0 && v15 == 0)
                        {
                            v42 = (char)*((char *)v44);
                            switch (*((char *)v44))
                            {
                            case 0:
                                v43 = (char)((unsigned int)v39 == 2);
                                v49 = (unsigned int)(0 ^ 1);
                                v50 = (char)(0 ^ 1) & (unsigned int)v39 == 2;
                                if (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0)
                                {
                                    if (v81 < v82)
                                    {
                                        *((char *)(v25 + v81)) = 39;
                                    }
                                    if (v82 > v81 + 1)
                                    {
                                        *((char *)(v25 + v81 + 1)) = 36;
                                    }
                                    if (v82 > v81 + 2)
                                    {
                                        *((char *)(v25 + v81 + 2)) = 39;
                                    }
                                    v52 = v81 + 3;
                                    v81 += 4;
                                    v84 = 1;
                                    v41 = rax<8>;
                                    v42 = 48;
                                    v41 = rax<8>;
                                }
                                else
                                {
                                    v52 = v81;
                                    *((char *)(v25 + v52)) = 92;
                                    v81 = v52 + 1;
                                    v84 = 1;
                                    v42 = 48;
                                    v42 = 48;
                                    if (1 < v40)
                                    {
                                        v82 = v6;
                                        if (((unsigned int)(char)*((char *)(v6 + 1)) - 48 & 255) <= 9)
                                        {
                                            if (v83 > v81)
                                            {
                                                *((char *)(v25 + v81)) = 48;
                                            }
                                            if (v83 > v52 + 2)
                                            {
                                                *((char *)(v25 + v52 + 2)) = 48;
                                            }
                                            v81 = v52 + 3;
                                            v42 = 48;
                                        }
                                    }
                                    v82 = v22;
                                    v43 = (unsigned int)v39 == 2;
                                    v43 = (unsigned int)v39 == 2;
                                    v84 += 1;
                                    v51 = (v51 ^ 1) & (unsigned int)v41;
                                }
                            case 13:
                                v42 = 13;
                                v48 = 114;
                                v43 = (unsigned int)v39 == 2;
                            case 32: case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                v43 = 0;
                            case 35: case 126:
                                v43 = 0;
                            case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                v51 = 0;
                            case 92:
                                v46 = v4;
                                v47 = v4 & v15;
                                v42 = 92;
                                v48 = 92;
                                v43 = rbp<8>;
                                v43 = (char)rbp<8> & v7 != 0;
                                if (((char)rbp<8> & v7 != 0) == 0)
                                {
                                    v43 = v43;
                                    v42 = v48;
                                    v84 += 1;
                                }
                                else
                                {
                                    v84 = 1;
                                    v51 = 0;
                                }
                            }
                        }
                    }
                }
                if (v7 == 0 || v38 != 0 || v37 > v40)
                {
                    v42 = (char)*((char *)v44);
                    switch (*((char *)v44))
                    {
                    case 0:
                        if (v15 == 0)
                        {
                            v5 = 0;
                        }
                    case 7:
                        v42 = 97;
                        v43 = 0;
                        break;
                    case 8:
                        v42 = 98;
                        v43 = 0;
                        break;
                    case 9:
                        v42 = 116;
                        v43 = 0;
                        break;
                    case 10:
                        v42 = 110;
                        v43 = 0;
                        break;
                    case 11:
                        v42 = 118;
                        v43 = 0;
                        break;
                    case 12:
                        v42 = 102;
                        v43 = 0;
                        break;
                    case 13:
                        v5 = 0;
                    case 32: case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v5 = 0;
                    case 35: case 126:
                        v5 = 0;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v5 = 0;
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
                v42 = (char)*((char *)v44);
                switch (*((char *)v44))
                {
                case 0:
                    if (v4 == 0)
                    {
                        v84 += 1;
                        v84 += 1;
                        v51 = v41;
                        v42 = 0;
                        v51 = 0;
                        v42 = 0;
                        v5 = 0;
                        v42 = 0;
                    }
                case 7:
                    v42 = 7;
                    v48 = 97;
                    v43 = (unsigned int)v39 == 2;
                case 8:
                    v42 = 8;
                    v48 = 98;
                    v43 = (unsigned int)v39 == 2;
                case 9:
                    v42 = 9;
                    v48 = 116;
                case 10:
                    v42 = 10;
                    v48 = 110;
                    v43 = (unsigned int)v39 == 2;
                    v5 = v15 & (unsigned int)v39 == 2;
                    if ((v15 & (unsigned int)v39 == 2) != 0)
                    {
                        tmp_2 = v39;
                    }
                case 11:
                    v42 = 11;
                    v48 = 118;
                    v43 = (unsigned int)v39 == 2;
                case 12:
                    v42 = 12;
                    v48 = 102;
                    v43 = (unsigned int)v39 == 2;
                case 13:
                    v42 = 13;
                    v48 = 114;
                case 32: case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                    v43 = (char)((unsigned int)v39 == 2);
                    if ((v15 & v43) == 0)
                    {
                        break;
                    }
                case 35: case 126:
                    v43 = (unsigned int)v39 == 2;
                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                    v43 = (char)((unsigned int)v39 == 2);
                    break;
                case 39:
                    v43 = 0;
                    v42 = 39;
                    if ((unsigned int)v39 != 2)
                    {
                        v51 = ((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1;
                        v51 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1) | v15;
                        v84 += 1;
                        v51 = (v51 ^ 1) & (unsigned int)v41;
                        if (v51 != 0)
                        {
                            if (v81 < v83)
                            {
                                *((char *)(v26 + v81)) = 39;
                            }
                            if (v83 > v81 + 1)
                            {
                                *((char *)(v26 + v81 + 1)) = 39;
                            }
                            v81 += 2;
                            v41 = 0;
                        }
                    }
                    else
                    {
                        if (v81 < v82)
                        {
                            *((char *)(v25 + v81)) = 39;
                        }
                        if (v82 > v81 + 1)
                        {
                            *((char *)(v25 + v81 + 1)) = 92;
                        }
                        if (v82 > v81 + 2)
                        {
                            *((char *)(v25 + v81 + 2)) = 39;
                        }
                        v81 += 3;
                        v84 = 1;
                        v41 = 0;
                        v42 = 39;
                        tmp_1 = v39;
                    }
                    if (v5 != 0)
                    {
                        v43 = (unsigned int)v39 == 2;
                        v79 = (unsigned int)v41 ^ 1;
                        v80 = (char)((unsigned int)v41 ^ 1) & v43;
                        if (((char)((unsigned int)v41 ^ 1) & v43) != 0)
                        {
                            if (v83 > v81)
                            {
                                *((char *)(v26 + v81)) = 39;
                            }
                            if (v83 > v81 + 1)
                            {
                                *((char *)(v26 + v81 + 1)) = 36;
                            }
                            if (v83 > v81 + 2)
                            {
                                *((char *)(v26 + v81 + 2)) = 39;
                            }
                            v81 += 3;
                            v41 = rdx<8>;
                        }
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 92;
                        }
                        v81 += 1;
                    }
                case 63:
                    if ((unsigned int)v39 != 2)
                    {
                        v42 = 63;
                        v43 = (char)((unsigned int)v39 == 2);
                        break;
                        v43 = 0;
                        v42 = 63;
                        break;
                        v43 = 0;
                        v42 = 63;
                        v82 = v6;
                        v42 = (char)*((char *)(v82 + 2));
                        v82 = 0x7000a38200000000;
                        v0 = 0x7000a38200000000;
                        v42 = 63;
                        break;
                        if (v81 < v83)
                        {
                            *((char *)(v25 + v81)) = 63;
                        }
                        if (v83 > v81 + 1)
                        {
                            *((char *)(v25 + v81 + 1)) = 34;
                        }
                        if (v83 > v81 + 2)
                        {
                            *((char *)(v25 + v81 + 2)) = 34;
                        }
                        if (v83 > v81 + 3)
                        {
                            *((char *)(v25 + v81 + 3)) = 63;
                        }
                        v81 += 4;
                        v43 = 0;
                        v51 = 0;
                        v84 = 2;
                    }
                    else
                    {
                        v51 = 0;
                        v42 = 63;
                    }
                case 92:
                    if ((unsigned int)v39 == 2)
                    {
                        v84 += 1;
                        v51 = v41;
                        v42 = 92;
                    }
                case 123: case 125:
                    v45 = v40 != 1;
                    if (v40 == -1)
                    {
                        v45 = *((char *)(v6 + 1)) != 0;
                    }
                    v43 = (char)((unsigned int)v39 == 2);
                }
            }
        }
        else
        {
            v85 = v39;
            v87 = (unsigned int)v39 == 2;
            v88 = rax<8> & (unsigned int)v15;
            if ((v88 & (char)(v81 == 0)) == 0)
            {
                v89 = v12;
                if ((unsigned long long)v15 == 0 && v12 != 0)
                {
                    v90 = (char)*((char *)v89);
                    if (*((char *)v89) != 0)
                    {
                        v91 = v89 - v81;
                        do
                        {
                            if (v83 > v81)
                            {
                                *((unsigned long long *)(v26 + v81)) = v90;
                            }
                            v81 += 1;
                            v90 = (char)*((char *)(v91 + v81));
                        }
                        while ((char)v90 != 0);
                    }
                }
                if (v81 < v83)
                {
                    *((char *)(v26 + v81)) = 0;
                }
            }
        }
        if (v13 == 1)
        {
            v10 = v39;
            v9 = v40;
            v8 = v41;
            v39 = v10;
            v54 = 1;
            v55 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v42 * 2));
            v56 = (unsigned short)v55 % 0x4000;
            v57 = (unsigned int)rdx<8> ^ 1;
            v57 &= v4;
            if (v57 != 0)
            {
                v57 = v4;
            }
        }
        else
        {
            v21 = 0;
            if (v40 == -1)
            {
                v10 = v39;
                v9 = v41;
                v8 = v44;
                v40 = strlen(v6);
            }
            v18 = v81;
            v16 = v41;
            v58 = 0;
            *((unsigned long long *)&v17) = v42;
            v19 = v44;
            v10 = v26;
            v11 = v83;
            v8 = v40;
            v9 = v39;
            do
            {
                v59 = v84 + v58;
                v60 = v6 + v84 + v58;
                v61 = (unsigned int)sub_40b170();
                if (v61 == 0)
                {
                    v51 = (unsigned int)v51 ^ 1;
                    v54 = v58;
                    v26 = v10;
                    v41 = (char)v16;
                    v42 = v17;
                    v81 = v18;
                    v83 = v11;
                    v57 = v4 & (unsigned int)v51;
                    v40 = v8;
                    v39 = (unsigned int)v9;
                }
                else if (v61 == -1)
                {
                    v54 = v58;
                    v41 = (char)v16;
                    v42 = v17;
                    v81 = v18;
                    v26 = v10;
                    v83 = v11;
                    v40 = v8;
                    v39 = (unsigned int)v9;
                    v57 = v4;
                }
                else if (v61 != -2)
                {
                    if (v61 != 1 && ((int)v9 == 2 & v15) != 0)
                    {
                        v82 = v6;
                        v62 = v6 + v82 + 1;
                        v63 = v6 + v61 + v82;
                        while (true)
                        {
                            v64 = (unsigned int)*(v62) - 91;
                            if (((unsigned int)*(v62) - 91 & 255) <= 33)
                            {
                                v65 = 1 << (v64 & 63);
                            }
                            if ((8589934635 & v65) == 0 || ((unsigned int)*(v62) - 91 & 255) > 33)
                            {
                                v62 = &v62[1];
                                if (v63 == v62)
                                {
                                    break;
                                }
                            }
                        }
                        if ((8589934635 & v65) == 0 || ((unsigned int)*(v62) - 91 & 255) > 33)
                        {
                            v51 = (unsigned int)(iswprint(*((int *)&v20)) == 0? 0 : (unsigned int)rbp<8>);
                            v58 += v61;
                        }
                    }
                    v51 = (unsigned int)(iswprint(*((int *)&v20)) == 0? 0 : (unsigned int)rbp<8>);
                    v58 += v61;
                    v54 = v58;
                    v41 = (char)v16;
                    v81 = v18;
                    v57 = (unsigned int)v51 ^ 1;
                    v42 = v17;
                    v26 = v10;
                    v83 = v11;
                    v40 = v8;
                    v39 = (unsigned int)v9;
                    v57 = (char)((unsigned int)v51 ^ 1) & v4;
                }
                else
                {
                    v40 = v8;
                    v82 = v59;
                    v25 = v60;
                    v67 = v58;
                    v54 = v58;
                    v41 = (char)v16;
                    v42 = v17;
                    v81 = v18;
                    v26 = v10;
                    v83 = v11;
                    v39 = (unsigned int)v9;
                    if (v82 < v8 && *((char *)v25) != 0)
                    {
                        do
                        {
                            v67 += 1;
                        }
                        while (v8 > v67 && *((char *)(v19 + v67)) != 0);
                        v54 = v67;
                    }
                    v57 = v4;
                }
            }
            while (v54 <= 1);
            if (v61 == -2 || v61 == -1 || v61 == 0 || mbsinit((unsigned int)&v21) != 0)
            {
                v68 = v54 + v84;
                v69 = 0;
                v82 = v5;
            }
        }
        if (v57 != 0)
        {
            v68 = v54 + v84;
            v69 = 0;
            v82 = v5;
            while (true)
            {
                if (v57 != 0)
                {
                    if ((unsigned long long)v15 != 0)
                    {
                        break;
                    }
                    v71 = (unsigned int)v41 ^ 1;
                    v72 = (char)((unsigned int)v41 ^ 1) & v51;
                    if (((char)((unsigned int)v41 ^ 1) & v51) != 0)
                    {
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 39;
                        }
                        if (v83 > v81 + 1)
                        {
                            *((char *)(v26 + v81 + 1)) = 36;
                        }
                        if (v83 > v81 + 2)
                        {
                            *((char *)(v26 + v81 + 2)) = 39;
                        }
                        v81 += 3;
                        v41 = rax<8>;
                    }
                    if (v81 < v83)
                    {
                        *((char *)(v26 + v81)) = 92;
                    }
                    if (v83 > v81 + 1)
                    {
                        v73 = v42;
                        v74 = (char)v42 % 64;
                        *((unsigned long long *)(v26 + v81 + 1)) = (unsigned long long)(unsigned int)rax<4> + 48;
                    }
                    if (v83 > v81 + 2)
                    {
                        v76 = v42;
                        v77 = (char)v42 % 8;
                        *((unsigned long long *)(v26 + v81 + 2)) = (unsigned int)((rax<4> & 7) + 48);
                    }
                    v84 += 1;
                    v81 += 3;
                    v42 = ((unsigned int)v42 & 7) + 48;
                    if (v68 <= v84)
                    {
                        break;
                    }
                    v69 = v57;
                }
                else
                {
                    v51 = (v69 ^ 1) & (unsigned int)v41;
                    if (v82 != 0)
                    {
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 92;
                        }
                        v81 += 1;
                    }
                    v84 += 1;
                    if (v84 >= v68)
                    {
                        break;
                    }
                    if (v51 != 0)
                    {
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 39;
                        }
                        if (v83 > v81 + 1)
                        {
                            *((char *)(v26 + v81 + 1)) = 39;
                        }
                        v81 += 2;
                        v82 = 0;
                        v41 = 0;
                    }
                    else
                    {
                        v82 = 0;
                    }
                }
                if (v81 < v83)
                {
                    *((unsigned long long *)(v26 + v81)) = v42;
                }
                v42 = (char)*((char *)(v6 + v84));
                v81 += 1;
            }
        }
        if ((v51 == 0 || (unsigned int)v39 == 2) && (v51 == 0 || v15 != 0) && ((unsigned int)v39 == 2 || (v88 & (char)(v81 == 0)) != 0) && (v15 != 0 || (v88 & (char)(v81 == 0)) != 0))
        {
            v3 = v24;
            v2 = v23;
            v1 = 0;
            v81 = (unsigned int)sub_407760();
        }
        if ((v15 == 0 || v81 >= v83) && (v15 == 0 || v57 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1) == 0 || (unsigned int)v39 == 2 || v81 >= v83) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1) == 0 || (unsigned int)v39 == 2 || v57 != 0))
        {
            if (v81 < v83)
            {
                *((unsigned long long *)(v26 + v81)) = v42;
            }
            v81 += 1;
        }
        if (v51 == 0 || (unsigned int)v39 == 2 && v15 != 0)
        {
            v92 = v81;
            return v92;
        }
    }
}

extern unsigned int g_6122b0;
extern unsigned int g_6123cc;

int sub_402ed0()
{
    unsigned long long v1;  // rax

    v1 = g_6122b0;
    if (g_6122b0 != 2147483647)
    {
        v1 = g_6122b0 + 1;
        g_6122b0 = g_6122b0 + 1;
    }
    g_6123cc = 1;
    return v1;
}

int sub_4098cc()
{
    abort(); /* do not return */
}

int sub_408b70()
{
}

int sub_408c70()
{
}

int sub_409710()
{
    void tmp_8;  // tmp #8
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long v4;  // rdx

    v4 = v2 * v3 >> 64;
    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rsi<8>, rdx<8>, cc_ndep<8>))
    {
        v0 = tmp_8;
        sub_4098a0(); /* do not return */
    }
}

int sub_404e30()
{
    return ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Call (target: 0x401f30<64>, prototype: (int (32 bits)) -> None, args: [0x0<32>]), 0x0<64>, cc_ndep<8>)? 9223372036854775807 : (unsigned long long)sysconf(0x0));
}

int sub_40b150()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40a030();
}

int sub_402ec0()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_403e32()
{
}

int sub_409f50()
{
    unsigned int v1[14];  // rsi
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

    v2 = v1[6];
    v3 = v1[0];
    v4 = (int)v1[6 + 1];
    v5 = v1[6];
    v14 = v1[0];
    while ((unsigned int)v14 > v1[6 + 1])
    {
        for (v6 = (int)v1[6 + 1]; v5 < v1[6 + 1]; v19 = v5 + v7)
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
        if (v5 >= v1[6 + 1] || (unsigned int)(v14 - v6) > (unsigned int)(v6 - v5))
        {
            v1[6 + 1] = v3;
            v1[6] = (unsigned int)(v2 + stack_base + 0 - v6);
            return stack_base + 0 - v6;
        }
    }
    v1[6 + 1] = v3;
    v1[6] = (unsigned int)(v2 + stack_base + 0 - v6);
    return stack_base + 0 - v6;
}

extern unsigned long long g_612500;
extern unsigned long long g_612508;

int sub_405520()
{
    g_612508 = 0;
    g_612500 = 0;
    return (unsigned long long)free(g_612508);
}

int sub_408a72()
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

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

int sub_404600()
{
    void tmp_14;  // tmp #14
    void tmp_13;  // tmp #13
    void tmp_21;  // tmp #21
    unsigned long long v1[10];  // rsi
    unsigned long long v2;  // rax
    char v3;  // dl
    unsigned long long v4;  // rcx
    unsigned long v5;  // rcx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdx
    struct_0 *v9;  // rdi
    unsigned long long v10;  // rdx
    struct_0 *v14;  // rdi
    unsigned long long v15;  // rdx

    v2 = v1[8];
    if (v3 != 0)
    {
        if (v4 > v1[8])
        {
            v1[8] = v4;
            v2 = v4;
        }
        if (v2 != 0 && v2 < v1[9])
        {
            v7 = v1[9] - v2;
            v8 = v1[9] - v2 >> 1;
            v2 = (v7 == 1? v4 + 1 : v8 + v4);
        }
        if (v2 == 0 || v2 >= v1[9])
        {
            v10 = v9->field_38;
            v2 = (v4 == -1? -1 : v4 + 1);
            if (v9->field_38 == 0)
            {
                return (tmp_14 == -1? -1 : tmp_13);
            }
        }
    }
    else
    {
        if (v1[9] == 0 || v1[9] > v5)
        {
            v1[9] = v5;
        }
        if (v1[8] != 0 && v1[9] > v1[8])
        {
            tmp_21 = v5;
            v2 = (v1[9] - v1[8] == 1? v5 - 1 : tmp_21 - (v1[9] - v1[8] >> 1));
        }
        if (v1[8] == 0 || v1[9] <= v1[8])
        {
            v2 = v5 % 2;
        }
    }
    if (v3 == 0 || v2 < v1[9] && v2 != 0)
    {
        v10 = v14->field_38;
    }
    if (v14->field_38 == 0 && (v3 == 0 || v2 < v1[9]) && (v3 == 0 || v2 != 0))
    {
        return (v2 == 0? 1 : v2);
    }
    if (v3 == 0 && v14->field_38 != 0 || v2 == 0 && v9->field_38 != 0 && v3 != 0 || v2 < v1[9] && v14->field_38 != 0 && v2 != 0 || v9->field_38 != 0 && v3 != 0 && v2 >= v1[9])
    {
        v15 = v10 + 1;
        if (v15 >= v2)
        {
            return (v15 == 0? 1 : v15);
        }
        return v2;
    }
}

int sub_408e30()
{
}

extern char g_6124f8;
extern char g_6124f9;

int sub_405410()
{
    unsigned int v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x48]
    unsigned long v5;  // rdx
    unsigned int v6;  // esi
    unsigned int v7;  // r14d
    unsigned long long v8;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v3 = v5;
    if (((char)v6 & 64) != 0)
    {
        v0 = 16;
        v1 = stack_base + 8;
        v2 = stack_base + -88;
    }
    if (g_6124f9 == 0)
    {
        v7 = sub_405b30();
        if (v7 < 0)
        {
            g_6124f8 = g_6124f9;
            g_6124f9 = 1;
        }
        else
        {
            close(v7);
            g_6124f9 = 1;
            *((unsigned long long *)&g_6124f8) = (unsigned int)(sub_409d40() & 1);
        }
    }
    if ((unsigned int)v8 >= 0 && g_6124f8 == 0)
    {
        sub_405860();
        return v11;
    }
    if ((unsigned int)v8 < 0 || g_6124f8 != 0)
    {
        v8 = (unsigned int)sub_405b30();
        return v12;
    }
}

int sub_405d20() { crash_skku;
}
extern unsigned int g_40c9b8;
extern unsigned int g_40c9e0;
extern unsigned int g_40ca08;
extern unsigned int g_40ca68;
extern unsigned int g_40d209;
extern unsigned int g_40d218;
extern unsigned int g_6122b0;
extern unsigned long long g_6123b8;
extern char g_6123c1;
extern char g_6123c2;
extern unsigned int g_6123c8;
extern unsigned long long g_6123e8;
extern unsigned int g_6124d8;

int sub_404120()
{
    unsigned int v0;  // [bp-0x40]
    char v1;  // [bp-0x3c]
    char v2;  // [bp-0x38]
    unsigned long long|char v3;  // [bp-0x34]
    unsigned short v4;  // [bp-0x2c]
    unsigned long long v6;  // rcx
    unsigned long long *v7;  // rbp
    unsigned long long v9;  // rax
    unsigned long long v14;  // rax
    unsigned int v15;  // ebx
    unsigned long long v21;  // rbp
    unsigned int v22;  // r13d
    unsigned long long v23;  // rax
    void *v27;  // r12
    unsigned int *v29;  // rbx
    unsigned long long v30;  // rax
    unsigned short v35;  // dx
    unsigned long long v42;  // rdi

    v7 = v6;
    if (g_6122b0 != 0 && g_6123e8 >= (int)g_6122b0)
    {
        while (true)
        {
            sub_402f30();
            if ((int)g_6122b0 > g_6123e8)
            {
                break;
            }
        }
    }
    if (!(g_6123c1 == 0))
    {
        v9 = sub_403f30();
        if (v9 != 0)
        {
        }
        else
        {
            return 1;
        }
    }
    else if (g_6123c2 != 0)
    {
        sub_403f30();
    }
    if (g_6123c1 == 0 || v9 != 0)
    {
        sub_402f30();
        if (pipe((unsigned int)&v1) == 0)
        {
            sub_409d40();
            while (true)
            {
                v14 = fork();
                v15 = v14;
                if ((unsigned int)v14 >= 0)
                {
                    break;
                }
                if (*(__errno_location()) != 11)
                {
                    break;
                }
                if (g_6123e8 == 0)
                {
                    break;
                }
                sub_402f30();
            }
            if (!(v15 != -1))
            {
                error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40d209, 0x5));
            }
            else if (v15 != 0)
            {
                close(*((int *)&v2));
                v21 = (unsigned int)sub_408fe0();
                if (!(v21 != 4))
                {
                    close(*((int *)&v1));
                    waitpid(v15, (unsigned int)&v3, 0x0);
                    if (v0 != 7)
                    {
                        if (v0 != 2)
                        {
                            exit(0x7e); /* do not return */
                        }
                        exit(0x7f); /* do not return */
                    }
                    v30 = 0;
                }
                else if (v21 != -1)
                {
                    if (v21 != 0)
                    {
                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ca68, 0x5));
                    }
                }
                if (v21 == -1)
                {
                    close(*((int *)&v1));
                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ca08, 0x5));
                }
                if (v21 == 0)
                {
                    sub_4031a0();
                }
                if (v21 == 0 || v21 == -1)
                {
                    close(*((int *)&v1));
                    v30 = 1;
                }
                if (v21 == 0 || v0 == 7)
                {
                    return v30;
                }
            }
            else
            {
                close(*((int *)&v1));
                g_6123c8 = 0;
                sub_405550();
                v22 = sub_4031a0();
                v23 = snprintf(NULL, 0x0, "%u", v22);
                v27 = malloc(v23 + 1);
                v29 = __errno_location();
                if (v27 != 0)
                {
                    snprintf(v27, v23 + 1, "%u", v22);
                    if (g_6123b8 != 0 && setenv(g_6123b8, (unsigned int)v27, 0x1) < 0)
                    {
                        error(0x0, *(v29), (unsigned long long)dcgettext(0x0, 0x40c9e0, 0x5));
                    }
                    free(v27);
                }
                else
                {
                    error(0x0, *(v29), (unsigned long long)dcgettext(0x0, 0x40d218, 0x5));
                }
                if (g_6124d8 == 0)
                {
                    v4 = 108;
                    v3 = 7815273878500238383;
                    close(0x0);
                    if (open(&v3, 0x0, v35) < 0)
                    {
                        sub_408c90();
                        error(0x0, *(v29), "%s");
                    }
                }
                if (sub_405070() != 0)
                {
                    *(v29) = 7;
                }
                while (true)
                {
                    write(*((int *)&v2), v29, 0x4);
                    while (true)
                    {
                        close(*((int *)&v2));
                        if (*(v29) != 7)
                        {
                            error(0x0, *(v29), "%s");
                            if (*(v29) == 2)
                            {
                                v42 = 127;
                            }
                        }
                        if (*(v29) == 7 || *(v29) != 2)
                        {
                            v42 = 126;
                        }
                        _exit(v42);
                        execvp(*(v7), (unsigned int)v7);
                        if (*(v29) != 0)
                        {
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40c9b8, 0x5));
        }
    }
}

int sub_404700()
{
    return 0;
}

extern unsigned int g_40f520[4];

int sub_40ba40()
{
    char v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x54]
    char v2;  // [bp-0x4c]
    char *v3;  // [bp-0x48]
    unsigned long|unsigned long long v4;  // [bp-0x40]
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
                if (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) != 0)
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
            if (v0 != 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) == 0 && v13 != 0)
            {
                __ctype_get_mb_cur_max();
                sub_409040();
                v4 = (unsigned int)sub_40b170();
            }
            if (v4 != -1 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) == 0 || v0 != 0) && (v0 != 0 || v13 != 0))
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
            if (v4 == -1 && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) == 0 || v0 != 0) && (v0 != 0 || v13 != 0))
            {
                v4 = 1;
                v5 = 0;
            }
            if (v6 == 0 && (v0 == 0 || v4 != -1) && (v0 == 0 || v4 != -2) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) != 0 || v4 != -1) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) != 0 || v4 != -2) && (v0 == 0 || *(v3) == 0 || v4 != 0) && (*(v3) == 0 || ((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) != 0 || v4 != 0) && (((char)((unsigned long long)g_40f520[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v3) & 31)) & 1) != 0 || v0 != 0 || v13 != 0))
            {
                break;
            }
            if (...)
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

int sub_408fa0()
{
}

int sub_404d38()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned long long field_20;
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[4];
    struct struct_2 *field_20;
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
} struct_1;

typedef struct struct_3 {
    char padding_0[1];
    char field_1;
} struct_3;

extern unsigned long long g_0;
extern unsigned int g_40f29c;
extern unsigned int g_40f2ba;
extern int512_t g_40f2d5;
extern unsigned int g_40f2d8;
extern unsigned int g_40f308;
extern unsigned int g_40f338;
extern unsigned int g_40f368;
extern unsigned int g_40f390;
extern unsigned int g_40f3b0;
extern unsigned int g_40f3d0;
extern unsigned int g_40f400;
extern unsigned int g_40f428;
extern unsigned int g_40f458;
extern unsigned long long g_8;
extern unsigned long long stderr;

int sub_40a030()
{
    unsigned int|char *|char [3] v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x8c]
    char *v2[3];  // [bp-0x88]
    unsigned long|unsigned long long|char [3] v3;  // [bp-0x80]
    unsigned long long|unsigned int v4;  // [bp-0x78]
    unsigned int v5;  // [bp-0x6c]
    unsigned int *v6;  // [bp-0x68]
    unsigned long long|unsigned int|char [3] v7;  // [bp-0x60]
    unsigned int|char [3] v8;  // [bp-0x58]
    unsigned int|char v9;  // [bp-0x50]
    unsigned int v10;  // [bp-0x4c]
    unsigned long long v11;  // [bp-0x40]
    struct_0 *v12;  // [bp+0x8]
    unsigned int v13;  // [bp+0x10]
    struct_1 *v14;  // r12
    unsigned long v15;  // rsi
    char *v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long v18;  // r8
    unsigned long v19;  // rdi
    unsigned long long v20;  // eax
    char v21[2];  // rbx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    char *[3]|unsigned long long * v28;  // rax
    unsigned long long *v29;  // rdx
    char *v31[2];  // rax
    char *v32[2];  // rdi
    char v33[2];  // rcx
    unsigned long long *v34;  // rsi
    unsigned long long v35;  // rcx
    char *v36;  // rdi
    char v37[3];  // rdx
    char v38[2];  // rsi
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned long v41;  // d
    unsigned long long v42;  // cc_dep1
    unsigned int v43;  // ecx
    unsigned long long v44;  // rax
    unsigned long long v46;  // rax
    char v47;  // al
    unsigned long long v48;  // rax
    unsigned int v50;  // eax
    unsigned long long v51;  // r13
    unsigned long long|char [2]|char [3] v52;  // r8
    unsigned long long|unsigned int v53;  // rdx
    unsigned long long|unsigned long long * v54;  // rdx
    char v55[3];  // rax
    unsigned long v56;  // rsi
    unsigned long v57;  // r9
    unsigned long|unsigned int v58;  // rbp
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    char v61[3];  // r13
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long|unsigned long long * v64;  // rbx
    char *|unsigned long long v65;  // r15
    unsigned long long v66;  // r14
    char v67[2];  // rsi
    unsigned long long v68;  // r13
    unsigned long long|unsigned int v69;  // rbp
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    unsigned long long v72;  // rax
    unsigned long long v74;  // rdi
    unsigned long long v75;  // r15d
    char v76[3];  // r13
    unsigned long long v77;  // rax
    char v78;  // sil
    unsigned long long v79;  // rdi
    void *v80;  // r14
    char *v81[3];  // rax
    unsigned int v82;  // ecx
    unsigned long long v83;  // rax
    char v84[3];  // rbx
    unsigned long long v87;  // rbx
    unsigned long long v88;  // rax
    unsigned long long v89;  // r13
    char v90[3];  // rbx
    char v91[3];  // rax
    unsigned long long v92;  // rdi
    struct_3 *v94;  // rax
    unsigned int v95;  // edx
    char v98[2];  // r8
    void *v99;  // rbx
    char v102[2];  // rbx
    unsigned long long v106;  // rbx
    unsigned long long *v107;  // edx
    unsigned int *v108;  // rax
    unsigned long long v109;  // rdx
    char *v111[3];  // rax
    unsigned long long v112;  // rdx
    unsigned int v113;  // eax
    char *v114[3];  // rax
    unsigned int v115;  // eax
    unsigned long long v116;  // r13
    char v117[3];  // r14
    char *v120;  // r15
    unsigned long long v122;  // r13
    char v123;  // r13b
    unsigned long long v124;  // rax
    unsigned long v125;  // r14
    unsigned long long v126;  // rbp
    char *v127;  // r12
    unsigned long long v128;  // r15
    unsigned long long v129;  // rax
    unsigned long long v130;  // rax
    unsigned long long v131;  // r13
    char v132;  // r13b
    char v133[3];  // r14
    unsigned long long v134;  // r13
    unsigned int v135;  // eax
    unsigned long long v137;  // r14
    char *v138[3];  // rax
    unsigned long long v141;  // rbx
    unsigned long long v143;  // rbx
    unsigned long long v144;  // rbx
    char v145[2];  // rdx
    unsigned long long v146;  // rcx
    char v147[2];  // rdi
    char v148;  // cc_dep2
    unsigned long long v149;  // rax

    v14 = v12;
    v2 = v15;
    v0 = v16;
    v4 = v17;
    v6 = v18;
    v1 = *((int *)(v12 + &g_0));
    if ((unsigned int)v19 > 0)
    {
        v14->field_10 = &g_0;
        v20 = v14->field_0;
        v58 = v19;
        if (v14->field_0 == 0)
        {
            *((unsigned long long **)&v14->field_0) = &g_0;
            v20 = &g_0;
        }
        else if (v14->field_18 != 0)
        {
            v21 = v0;
            v52 = v14->field_20;
            v22 = *(v0);
            if (((char)((unsigned long long)*(v0) - 43) & 253) == 0)
            {
                v22 = (char)*((char *)(v21 + &g_0));
                v0 = v21 + &g_0;
            }
        }
        if (v14->field_0 == 0 || v14->field_18 == 0)
        {
            *((unsigned long long *)&v14->field_34) = v20;
            *((unsigned long long *)&v14->field_30) = v20;
            v14->field_20 = &g_0;
            if (v13 != 0)
            {
                *((unsigned long long **)&v14->field_2c) = &g_0;
                v52 = &g_0;
                v23 = *(v0);
            }
            else
            {
                v24 = getenv("POSIXLY_CORRECT");
                if (v24 == 0)
                {
                    *((unsigned long long **)&v14->field_2c) = &g_0;
                    v26 = *(v0);
                    if (*(v0) == 45)
                    {
                        v52 = v14->field_20;
                    }
                    else if (v26 != 43)
                    {
                        *((unsigned long long **)&v14->field_28) = &g_0;
                        v52 = v14->field_20;
                    }
                    else
                    {
                        v52 = v14->field_20;
                    }
                }
                else
                {
                    v52 = v14->field_20;
                    *((unsigned long long **)&v14->field_2c) = &g_0;
                    v27 = *(v0);
                }
            }
            if (*(v0) == 45 && v13 != 0 || v13 == 0 && v24 == 0 && *(v0) == 45 || v13 == 0 && *(v0) == 45 && v24 != 0)
            {
                *((unsigned long long **)&v14->field_28) = &g_0;
                v0 += &g_0;
            }
            if (v13 == 0 || *(v0) != 45)
            {
                if ((v13 == 0 || v23 != 43) && (v13 != 0 || *(v0) != 45) && (v13 != 0 || v27 != 43) && (v13 != 0 || v24 != 0))
                {
                    *((unsigned long long **)&v14->field_28) = &g_0;
                }
                if ((v13 == 0 || v23 == 43) && (v27 == 43 || v24 == 0 || v13 != 0) && (v24 == 0 || v13 != 0 || *(v0) != 45) && (v26 == 43 || v13 != 0 || v24 != 0) && (v13 != 0 || v24 != 0 || *(v0) != 45))
                {
                    *((unsigned long long **)&v14->field_28) = &g_0;
                    v0 += &g_0;
                }
            }
            *((unsigned long long **)&v14->field_18) = &g_0;
            v22 = *(v0);
        }
        v1 = (v22 != 58? v1 : 0);
        if (v52 == 0 || v52[0] == 0)
        {
            v28 = (unsigned long long)v14->field_0;
            if (v14->field_34 > v14->field_0)
            {
                v14->field_34 = v12->field_0;
            }
            if (v12->field_0 < v14->field_30)
            {
                v14->field_30 = v12->field_0;
            }
            if (v14->field_28 == 1)
            {
                v29 = (unsigned long long)v14->field_34;
                if (v14->field_30 != v14->field_34)
                {
                    if (v12->field_0 != v12->field_34)
                    {
                        sub_409f50();
                        v29 = (unsigned long long)v14->field_0;
                    }
                }
                else
                {
                    if (v12->field_0 != v12->field_34)
                    {
                        v14->field_30 = v12->field_0;
                        v29 = v28;
                    }
                }
                if ((unsigned int)v19 > (unsigned int)v29)
                {
                    v31 = v29;
                    v32 = v2;
                    while (true)
                    {
                        v33 = *((long long *)&((char *)v32)[v31 * &g_8]);
                        v34 = v31;
                        v29 = (unsigned int)v31;
                        if (*((char *)*((long long *)&((char *)v32)[v31 << &g_0])) == 45 && *((char *)(v33 + &g_0)) != 0)
                        {
                            v28 = (unsigned long long)v14->field_0;
                        }
                        if (*((char *)(v33 + &g_0)) == 0 || *((char *)*((long long *)&((char *)v32)[v31 << &g_0])) != 45)
                        {
                            v29 = v34 + &g_0;
                            v31 += &g_0;
                            *((unsigned long long **)&v14->field_0) = (unsigned int)v34 + (char *)&g_0;
                            if ((unsigned int)v58 <= (unsigned int)v31)
                            {
                                break;
                            }
                        }
                    }
                    if (*((char *)(v33 + &g_0)) == 0 || *((char *)*((long long *)&((char *)v32)[v31 << &g_0])) != 45)
                    {
                        v28 = v29;
                    }
                    else if (*((char *)*((long long *)&((char *)v32)[v31 << &g_0])) == 45 && *((char *)(v33 + &g_0)) != 0)
                    {
                        *((unsigned long long **)&v14->field_34) = v29;
                    }
                }
                v28 = v29;
                *((unsigned long long **)&v14->field_34) = v29;
            }
            if ((unsigned int)v58 != (unsigned int)v28)
            {
                v35 = &g_0;
                v36 = "-";
                v37 = *((long long *)&((char *)v2)[v28 * &g_8]);
                v38 = *((long long *)&((char *)v2)[v28 * &g_8]);
                while (v35 != 0)
                {
                    v35 += -0x1 * &g_0;
                    v39 = v38[0];
                    v40 = *(v36);
                    v36 = &v36[v41];
                    v38 = &v38[v41];
                    break;
                }
                v42 = (char *)((char)(v39 > v40) + -0x1 * &g_0) + -1 * (v39 < v40);
                if ((char)v42 == 0)
                {
                    v53 = v14->field_30;
                    v43 = v14->field_34;
                    v44 = (unsigned int)v28 + (char *)&g_0;
                    v14->field_0 = v14->field_30;
                    if (!((unsigned int)v53 != v43))
                    {
                        v14->field_30 = v12->field_30;
                        v53 = v44;
                    }
                    else if (v12->field_30 != v12->field_34)
                    {
                        sub_409f50();
                        v53 = v14->field_30;
                    }
                    v14->field_34 = v58;
                    v14->field_0 = v58;
                }
                else
                {
                    if (v37[0] == 45 && *((char *)(v37 + &g_0)) != 0)
                    {
                        v46 = &g_0;
                        v47 = (unsigned long long)(char)*((char *)(v37 + &g_0)) == 45;
                        v48 = rax<8> & v38;
                        v52 = &v37[v48] + &g_0;
                        v14->field_20 = &v37[v48] + &g_0;
                    }
                    if ((*((char *)(v37 + &g_0)) == 0 || v37[0] != 45) && v14->field_28 != 0)
                    {
                        v50 = (unsigned long long *)((unsigned int)v28 + (char *)&g_0);
                        v14->field_10 = v37;
                        v51 = &g_0;
                        v14->field_0 = v50;
                    }
                }
            }
            else
            {
                v58 = v14->field_34;
                v53 = v14->field_30;
            }
            if (((unsigned int)v58 == (unsigned int)v28 || (char)v42 == 0) && v53 != v58)
            {
                v14->field_0 = v53;
            }
        }
        if ((v37[0] == 45 || v52 != 0) && (v37[0] == 45 || v52[0] != 0) && (v52 != 0 || (unsigned int)v58 != (unsigned int)v28) && (v52 != 0 || (char)v42 != 0) && (v52 != 0 || *((char *)(v37 + &g_0)) != 0) && ((unsigned int)v58 != (unsigned int)v28 || v52[0] != 0) && ((char)v42 != 0 || v52[0] != 0) && (v52[0] != 0 || *((char *)(v37 + &g_0)) != 0))
        {
            if (v4 != 0)
            {
                v54 = (long long)(int)v14->field_0;
                v55 = *((long long *)&((char *)v2)[(int)v14->field_0 * &g_8]);
                v56 = (char)*(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 * &g_8])]);
                if (*(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) != 45 && (unsigned int)v57 != 0 && *((char *)(v55 + &g_0)) == 0)
                {
                    v5 = v12->field_0;
                    *((char *[3])&v3[0]) = v52;
                    v59 = strchr(v0, v56);
                    v52 = v3;
                    v54 = (int)v5;
                }
                if (*(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) == 45 || v59 == 0 && (unsigned int)v57 != 0 || *((char *)(v55 + &g_0)) != 0 && (unsigned int)v57 != 0)
                {
                    v60 = v52[0];
                    v61 = v52;
                    if (v52[0] != 0 && v60 != 61)
                    {
                        do
                        {
                            v61 += &g_0;
                            v63 = v61[0];
                        }
                        while (v63 != 61 && (char)v63 != 0);
                        v62 = v61 - v52;
                        v5 = v61 - v52;
                    }
                    if (v60 == 61 || v52[0] == 0)
                    {
                        *((unsigned long long **)&v5) = &g_0;
                        v62 = &g_0;
                    }
                    v64 = v4;
                    v65 = *((long long *)v4);
                    if (*((long long *)v4) != 0)
                    {
                        *((char *[3])&v8[0]) = v61;
                        v66 = &g_0;
                        v10 = v58;
                        v67 = v52;
                        v68 = v62;
                        v69 = &g_0;
                        v7 = -1;
                        *((unsigned long long **)&v9) = &g_0;
                        v3 = &g_0;
                        while (true)
                        {
                            v70 = strncmp(v65, v67, v68);
                            if (v70 == 0)
                            {
                                v71 = strlen(v65);
                                if (v5 != v71)
                                {
                                    v72 = v3;
                                    if (v3 == 0)
                                    {
                                        v3 = v64;
                                        v64 += 32;
                                        v65 = *(v64);
                                        v7 = v69;
                                        v69 += (char *)&g_0;
                                    }
                                    else if (v9 == 0)
                                    {
                                        if (*((long long *)(v72 + 16)) == *((long long *)(v64 + 16)) && *((int *)&((char *)&g_8)[v72]) == *((int *)&((char *)&g_8)[v64]) && (unsigned int)v57 == 0 && *((int *)(v72 + 24)) == *((int *)(v64 + 24)))
                                        {
                                            v9 = v57;
                                        }
                                        if (*((long long *)(v72 + 16)) != *((long long *)(v64 + 16)) || *((int *)&((char *)&g_8)[v72]) != *((int *)&((char *)&g_8)[v64]) || (unsigned int)v57 != 0 || *((int *)(v72 + 24)) != *((int *)(v64 + 24)))
                                        {
                                            if (v66 != 0)
                                            {
                                                *((unsigned long long *)v66) = v64;
                                                *((unsigned long long *)&((char *)&g_8)[v66]) = v66;
                                                v66 = malloc(0x10);
                                            }
                                            else
                                            {
                                                if (v66 != 0)
                                                {
                                                    v74 = v66;
                                                    while (true)
                                                    {
                                                        v66 = *((long long *)&((char *)&g_8)[v66]);
                                                        free(v74);
                                                        v74 = v66;
                                                        if (v66 == 0)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                }
                                                *((unsigned long long **)&v9) = &g_0;
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    v75 = v69;
                                    v76 = v8;
                                    v58 = v10;
                                    if (v66 != 0 || v9 != 0)
                                    {
                                        v79 = v66;
                                        if (v66 != 0)
                                        {
                                            while (true)
                                            {
                                                v80 = *((long long *)&((char *)&g_8)[v79]);
                                                free(v79);
                                                v79 = v80;
                                                if (v80 == 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    v54 = (unsigned long long)v14->field_0;
                                    v7 = v75;
                                    v3 = v64;
                                }
                            }
                            if (v70 != 0 || v3 != 0 && v5 != v71)
                            {
                                v64 = v4 + 32;
                                v65 = *(v64);
                                v69 = &g_0;
                            }
                            if (*(v64) == 0 || v70 == 0)
                            {
                                if (*(v64) == 0 && v70 != 0 || v3 == 0 && v70 != 0 || v3 == 0 && *(v64) == 0 && v5 != v71 || *(v64) == 0 && v3 != 0 && v5 != v71)
                                {
                                    v77 = (char)v9;
                                    v76 = v8;
                                    v58 = v10;
                                    v78 = v66 != &g_0;
                                    v54 = (long long)(int)v14->field_0;
                                    if (v78 == 0 && v3 == 0 && (char)v9 == 0)
                                    {
                                        break;
                                    }
                                    if (v78 != 0 || (char)v9 != 0)
                                    {
                                        if (v1 != 0)
                                        {
                                            if (v78 != 0)
                                            {
                                                v11 = v66;
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f2d8, 0x5));
                                                v88 = v3;
                                                while (true)
                                                {
                                                    fprintf(stderr, " '--%s'", (unsigned int)*((long long *)v88));
                                                    if (v11 == 0)
                                                    {
                                                        break;
                                                    }
                                                    v88 = *((long long *)v11);
                                                }
                                                fputc(0xa, stderr);
                                            }
                                            else if (v77 != 0)
                                            {
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f29c, 0x5));
                                            }
                                            if (v77 != 0 || v78 != 0)
                                            {
                                                v102 = v14->field_20;
                                                *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                                                *((unsigned long long **)(v14 + &g_8)) = &g_0;
                                                v106 = &v102[strlen(v14->field_20)];
                                                v14->field_20 = v106;
                                            }
                                        }
                                        if (v1 == 0 || v77 == 0 && v78 == 0)
                                        {
                                            v84 = v14->field_20;
                                            v0 = v12->field_0;
                                            *((unsigned long long **)(v14 + &g_8)) = &g_0;
                                            v87 = &v84[strlen(v14->field_20)];
                                            v14->field_20 = v87;
                                            *((unsigned long long **)&v14->field_0) = v0 + (char *)&g_0;
                                            if (v66 == 0)
                                            {
                                                break;
                                            }
                                            v92 = v66;
                                            while (true)
                                            {
                                                v99 = *((long long *)&((char *)&g_8)[v92]);
                                                free(v92);
                                                v92 = v99;
                                                if (v99 == 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((v78 == 0 || v70 == 0) && (v78 == 0 || v5 == v71) && (*(v64) == 0 || v5 == v71) && (v70 == 0 || (char)v9 == 0) && ((char)v9 == 0 || v5 == v71) && (v70 == 0 || v3 != 0) && (v5 == v71 || v3 != 0))
                                {
                                    v81 = v54 + &g_0;
                                    *((unsigned long long **)&v14->field_0) = (unsigned int)v54 + (char *)&g_0;
                                    v82 = *((int *)&((char *)&g_8)[v3]);
                                    if (v76[0] != 0)
                                    {
                                        if (v82 != 0)
                                        {
                                            v89 = v76 + &g_0;
                                            v14->field_10 = v89;
                                        }
                                        else
                                        {
                                            if (v1 != 0)
                                            {
                                                v94 = *((long long *)((char *)v2 + v81 * &g_8 - &g_8));
                                                if (*((char *)(v94 + &g_0)) != 45)
                                                {
                                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f338, 0x5));
                                                }
                                                else
                                                {
                                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f308, 0x5));
                                                }
                                            }
                                            v51 = 63;
                                            v14->field_20 = v12->field_20 + strlen(v14->field_20);
                                            *((int *)(v14 + &g_8)) = *((int *)(v3 + 24));
                                        }
                                    }
                                    else
                                    {
                                        if (v82 == 1)
                                        {
                                            if ((unsigned int)v81 < v58)
                                            {
                                                v95 = (unsigned long long *)((unsigned int)v54 + (char *)&g_0);
                                                v14->field_0 = v95;
                                                v14->field_10 = *((long long *)&((char *)v2)[v81 * &g_8]);
                                            }
                                            else
                                            {
                                                if (v1 != 0)
                                                {
                                                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f368, 0x5));
                                                }
                                                v14->field_20 = v12->field_20 + strlen(v14->field_20);
                                                *((int *)(v14 + &g_8)) = *((int *)(v3 + 24));
                                                break;
                                            }
                                        }
                                    }
                                    if (v76[0] == 0 && (unsigned int)v81 < v58 || v76[0] == 0 && v82 != 1 || v76[0] != 0 && v82 != 0)
                                    {
                                        v14->field_20 = v12->field_20 + strlen(v14->field_20);
                                        if (v6 != 0)
                                        {
                                            *(v6) = v7;
                                        }
                                        v108 = *((long long *)(v3 + 16));
                                        v51 = (unsigned int)*((int *)(v3 + 24));
                                        break;
                                    }
                                }
                            }
                            if ((v70 == 0 || *(v64) != 0) && (v3 == 0 || *(v64) != 0) && (v70 != 0 || v5 != v71) && (v70 != 0 || v3 != 0 || *(v64) != 0))
                            {
                                v67 = v14->field_20;
                            }
                        }
                        if (v76[0] == 0 && (v78 == 0 || v70 == 0) && (v78 == 0 || v5 == v71) && (*(v64) == 0 || v70 == 0) && (*(v64) == 0 || v5 == v71) && (v70 == 0 || (char)v9 == 0) && ((char)v9 == 0 || v5 == v71) && (v70 == 0 || v3 != 0) && (v5 == v71 || v3 != 0) && v82 == 1 && (unsigned int)v81 >= v58 && v1 == 0 || v76[0] == 0 && (v78 == 0 || v70 == 0) && (v78 == 0 || v5 == v71) && (*(v64) == 0 || v70 == 0) && (*(v64) == 0 || v5 == v71) && (v70 == 0 || (char)v9 == 0) && ((char)v9 == 0 || v5 == v71) && (v70 == 0 || v3 != 0) && (v5 == v71 || v3 != 0) && v82 == 1 && (unsigned int)v81 >= v58 && v1 != 0)
                        {
                            v51 = 58;
                        }
                        else if (...)
                        {
                            v51 = 63;
                        }
                        else if (...)
                        {
                            *(v108) = v51;
                            v51 = &g_0;
                        }
                        else if (...)
                        {
                            v149 = v51;
                            return v149;
                        }
                    }
                    if (v1 != 0 && (*(&((char *)&g_0)[*((long long *)&((char *)v2)[v54 << &g_0])]) == 45 || (unsigned int)v57 == 0) && (*(&((char *)&g_0)[*((long long *)&((char *)v2)[v54 << &g_0])]) == 45 || (unsigned int)v57 != 0))
                    {
                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f390, 0x5));
                        v54 = (unsigned long long)v14->field_0;
                    }
                }
                if ((unsigned int)v57 != 0)
                {
                    if ((v59 == 0 || *(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) == 45 || *((char *)(v55 + &g_0)) != 0) && *(&((char *)&g_0)[*((long long *)&((char *)v2)[v54 << &g_0])]) != 45)
                    {
                        v5 = (unsigned int)v54;
                        *((struct struct_2 **)&v3[0]) = v14->field_20;
                        v83 = strchr(v0, v14->field_20->field_0);
                        v52 = v3;
                        v54 = v5;
                    }
                }
                else
                {
                    if (*(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) == 45 && v1 != 0)
                    {
                        v52 = v14->field_20;
                    }
                }
                if (...)
                {
                    v111 = (long long)(int)v14->field_0;
                    if (*((char *)(v98 + &g_0)) != 0)
                    {
                        v113 = (unsigned long long *)(v12->field_0 + (char *)&g_0);
                        v14->field_10 = v90;
                        v14->field_0 = v113;
                    }
                    else if (v58 != v12->field_0)
                    {
                        v14->field_0 = (unsigned int)(unsigned long long *)((long long)(int)v12->field_0 + (char *)&g_0);
                        v90 = *((long long *)&((char *)v2)[v111 * &g_8]);
                        v14->field_10 = *((long long *)&((char *)v2)[v111 * &g_8]);
                    }
                    else
                    {
                        if (v1 != 0)
                        {
                            fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f3d0, 0x5));
                        }
                        *((unsigned int *)(v14 + &g_8)) = v98[0];
                        v122 = &g_0;
                        v123 = *(v0) != 58;
                        v51 = r13<8> * &g_0 + 58;
                    }
                }
            }
            if (v4 == 0 || (unsigned int)v57 == 0 && *(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) != 45 || *((char *)(v55 + &g_0)) == 0 && v59 != 0 && *(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) != 45 || v83 != 0 && *(&((char *)&g_0)[*((long long *)&((char *)v2)[v54 << &g_0])]) != 45 && (unsigned int)v57 != 0)
            {
                v90 = v98 + &g_0;
                *((char *[2])&v3[0]) = v98;
                v14->field_20 = v98 + &g_0;
                v51 = v98[0];
                v91 = strchr(v0, v98[0]);
                v98 = v3;
                if (*((char *)(v3 + &g_0)) == 0)
                {
                    *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                }
            }
            if ((unsigned int)v57 == 0 && *(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) == 45 && v4 != 0 && v1 != 0 && *(&((char *)&g_0)[*((long long *)&((char *)v2)[v54 << &g_0])]) != 45 || v83 == 0 && *(&((char *)&g_0)[*((long long *)&((char *)v2)[v54 << &g_0])]) != 45 && v4 != 0 && (unsigned int)v57 != 0 && (v59 == 0 || *(&((char *)&g_0)[*((long long *)&((char *)v2)[(int)v14->field_0 << &g_0])]) == 45 || *((char *)(v55 + &g_0)) != 0) && v1 != 0)
            {
                *((char *[3])&v0[0]) = v52;
                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f3b0, 0x5));
                v54 = (unsigned long long)v14->field_0;
            }
            if (...)
            {
                v107 = v54 + &g_0;
                v51 = 63;
                v14->field_20 = &g_40f2d5;
                *((unsigned long long **)&v14->field_0) = v107;
                *((unsigned long long **)(v14 + &g_8)) = &g_0;
            }
            if (...)
            {
                v109 = (char)*((char *)(v91 + &g_0));
            }
            if (...)
            {
                if (v1 != 0)
                {
                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f2ba, 0x5));
                }
                *((unsigned int *)(v14 + &g_8)) = v98[0];
                v51 = 63;
            }
            if (...)
            {
                v112 = (char)*((char *)(v3 + &g_0));
                if (*((char *)(v91 + &g_0)) != 58)
                {
                    v114 = (long long)(int)v14->field_0;
                    if (v112 != 0)
                    {
                        v115 = (unsigned long long *)(v12->field_0 + (char *)&g_0);
                        v14->field_10 = v90;
                        v14->field_0 = v115;
                    }
                    else
                    {
                        if (v58 != v12->field_0)
                        {
                            v14->field_0 = (unsigned int)(unsigned long long *)((long long)(int)v12->field_0 + (char *)&g_0);
                            v14->field_10 = *((long long *)&((char *)v2)[v114 * &g_8]);
                        }
                        else
                        {
                            if (v1 != 0)
                            {
                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f3d0, 0x5));
                            }
                            *((unsigned int *)(v14 + &g_8)) = v98[0];
                            v131 = &g_0;
                            v132 = *(v0) != 58;
                            v51 = r13<8> * &g_0 + 58;
                        }
                    }
                }
                else if (v112 != 0)
                {
                    v14->field_10 = v90;
                    *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                }
                else
                {
                    v14->field_10 = &g_0;
                }
                v14->field_20 = &g_0;
            }
            if (...)
            {
                v14->field_20 = &v90[0];
                v116 = v90[0];
                v117 = v90;
                if (v90[0] != 0)
                {
                    while (v116 != 61)
                    {
                        v117 += &g_0;
                        v116 = v117[0];
                        if ((char)v116 == 0)
                        {
                            break;
                        }
                    }
                }
                v120 = *((long long *)v4);
                if (*((long long *)v4) != 0)
                {
                    *((unsigned long long *)&v9) = v116;
                    v124 = v117 - v90;
                    *((char *[3])&v7[0]) = v117;
                    *((unsigned long *)&v8) = v58;
                    v125 = v117 - v90;
                    v126 = v4;
                    v12 = &v14->field_0;
                    v127 = v120;
                    v128 = &g_0;
                    *((unsigned long long **)&v5) = &g_0;
                    *((unsigned long long **)&v4) = &g_0;
                    v3 = v124;
                    while (true)
                    {
                        v129 = strncmp(v127, v90, v125);
                        if (v129 == 0)
                        {
                            v130 = strlen(v127);
                            if (v3 == v130)
                            {
                                v133 = v7;
                                v134 = v9;
                                v14 = v12;
                                *((unsigned long long **)&v5) = &g_0;
                                v128 = v126;
                            }
                            else if (v128 != 0)
                            {
                                if ((unsigned int)v57 == 0 && *((int *)&((char *)&g_8)[v128]) == *((int *)&((char *)&g_8)[v126]) && *((long long *)(v128 + 16)) == *((long long *)(v126 + 16)))
                                {
                                    v4 = (*((int *)(v128 + 24)) == *((int *)(v126 + 24))? v4 : 1);
                                }
                                if ((unsigned int)v57 != 0 || *((int *)&((char *)&g_8)[v128]) != *((int *)&((char *)&g_8)[v126]) || *((long long *)(v128 + 16)) != *((long long *)(v126 + 16)))
                                {
                                    *((unsigned long long **)&v4) = &g_0;
                                }
                            }
                            else
                            {
                                *((unsigned long long **)&v5) = &g_0;
                                v128 = v126;
                            }
                        }
                        if (v3 != v130 || v129 != 0)
                        {
                            v126 += 32;
                            v127 = *((long long *)v126);
                            if (*((long long *)v126) == 0)
                            {
                                v134 = v9;
                                v133 = v7;
                                v126 = v8;
                                v14 = v12;
                                if (v4 == 0)
                                {
                                    if (v128 == 0)
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    if (v1 != 0)
                                    {
                                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f400, 0x5));
                                        v90 = v12->field_20;
                                    }
                                    v51 = 63;
                                    *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                                    v141 = &v90[strlen(v90)];
                                    v14->field_20 = v141;
                                }
                            }
                        }
                        if ((*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0))
                        {
                            v135 = *((int *)&((char *)&g_8)[v128]);
                            if (v134 != 0)
                            {
                                if (v135 != 0)
                                {
                                    v137 = v133 + &g_0;
                                    v14->field_10 = v137;
                                }
                                else
                                {
                                    if (v1 != 0)
                                    {
                                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f428, 0x5));
                                        v90 = v14->field_20;
                                    }
                                    v51 = 63;
                                    v144 = &v90[strlen(v90)];
                                    v14->field_20 = v144;
                                }
                            }
                            else
                            {
                                if (v135 != 1)
                                {
                                    v14->field_10 = &g_0;
                                }
                                else
                                {
                                    v138 = (long long)(int)v14->field_0;
                                    if (v14->field_0 < v126)
                                    {
                                        *((unsigned long long **)&v14->field_0) = (unsigned int)v138 + (char *)&g_0;
                                        v14->field_10 = *((long long *)&((char *)v2)[v138 * &g_8]);
                                    }
                                    else
                                    {
                                        if (v1 != 0)
                                        {
                                            fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x40f458, 0x5));
                                        }
                                        v145 = v14->field_20;
                                        v146 = -1;
                                        v147 = v14->field_20;
                                        while (v146 != 0)
                                        {
                                            v146 += -0x1 * &g_0;
                                            v148 = v147[0];
                                            v147 = &v147[v41];
                                            break;
                                        }
                                        v14->field_20 = &v145[!(rcx<8>)] - &g_0;
                                        if (*(v0) != 58)
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                            if (v14->field_0 < v126 && v134 == 0 || v134 == 0 && v135 != 1 || v134 != 0 && v135 != 0)
                            {
                                v143 = &v90[strlen(v90)];
                                v14->field_20 = v143;
                                if (v6 != 0)
                                {
                                    *(v6) = v5;
                                }
                                v108 = *((long long *)(v128 + 16));
                                v51 = (unsigned int)*((int *)(v128 + 24));
                                if (*((long long *)(v128 + 16)) != 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    if (...)
                    {
                        *(v108) = v51;
                        v51 = &g_0;
                    }
                    else if (...)
                    {
                        v51 = 63;
                    }
                    else if (...)
                    {
                        v51 = 58;
                    }
                    else if ((v128 != 0 && v3 != v130 && ((unsigned int)v57 != 0 || *((int *)&((char *)&g_8)[v128]) != *((int *)&((char *)&g_8)[v126]) || *((long long *)(v128 + 16)) != *((long long *)(v126 + 16))) || v128 == 0 && v3 != v130 || (unsigned int)v57 == 0 && *((int *)&((char *)&g_8)[v128]) == *((int *)&((char *)&g_8)[v126]) && *((long long *)(v128 + 16)) == *((long long *)(v126 + 16)) && v128 != 0 && v3 != v130 || v129 != 0) && *((long long *)v126) == 0 && v4 == 0)
                    {
                        v14->field_20 = &g_0;
                        v51 = 87;
                    }
                    else if (...)
                    {
                        v149 = v51;
                        return v149;
                    }
                }
            }
            if (...)
            {
                v14->field_20 = &g_0;
                v51 = 87;
            }
            if (...)
            {
                v51 = 58;
                v51 = 63;
                *(v108) = v51;
                v51 = &g_0;
            }
        }
    }
    if ((unsigned int)v19 > 0 && (v52 == 0 || v52[0] == 0) && ((unsigned int)v58 == (unsigned int)v28 || (char)v42 == 0) || (unsigned int)v58 != (unsigned int)v28 && (unsigned int)v19 > 0 && (char)v42 != 0 && (v52 == 0 || v52[0] == 0) && (*((char *)(v37 + &g_0)) == 0 || v37[0] != 45) && v14->field_28 == 0 || (unsigned int)v19 <= 0)
    {
        v51 = -18446744069414584321;
    }
    v149 = v51;
    return v149;
}

int sub_405d00()
{
    __assert_fail(); /* do not return */
}

extern int512_t g_6122a8;

int sub_40bc80()
{
}

extern uint128_t g_612640;
extern uint128_t g_612650;
extern uint128_t g_612660;
extern unsigned long long g_612670;

int sub_408d8f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_612670;
    *((uint128_t *)&v0) = g_612640;
    *((uint128_t *)&v1) = g_612650;
    *((uint128_t *)&v2) = g_612660;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_408770();
}

int sub_405aa0()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // r12d
    unsigned int *v6;  // rbp
    unsigned long long v7;  // r13
    unsigned long|unsigned int v9;  // r14
    unsigned long long v10;  // rbx

    if (v2 != 0)
    {
        v3 = dirfd(v2);
        if (v3 <= 2)
        {
            v5 = sub_409080();
            v6 = __errno_location();
            if (v5 < 0)
            {
                v9 = *(v6);
                v7 = 0;
            }
            else
            {
                v9 = *(v6);
                v7 = fdopendir(v5);
                if (v7 == 0)
                {
                    close(v5);
                }
            }
            v10 = v7;
            closedir();
            *((unsigned long *)&v6) = v9;
            return v10;
        }
    }
    if (v2 == 0 || v3 > 2)
    {
        v2 = opendir();
        return v4;
    }
}

int sub_4056d5()
{
}

int sub_408d00()
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
    return sub_408770();
}

int sub_408f50()
{
}

int sub_402314()
{
}

extern unsigned int g_40eb72;
extern unsigned int g_40eb9d;
extern unsigned int g_40edf8;

int sub_409610()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    printf((unsigned long long)dcgettext(0x0, 0x40eb72, 0x5));
    printf((unsigned long long)dcgettext(0x0, 0x40eb9d, 0x5));
    dcgettext(0x0, 0x40edf8, 0x5);
}

int sub_409e80()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_409ef0();
    }
}

int sub_4042d2()
{
}

extern unsigned int g_40d18a;
extern char g_6122b4;
extern char g_6123b0;
extern char g_6123c0;
extern unsigned long long g_612438;
extern unsigned long long g_612450;
extern unsigned long long g_6124a8;
extern unsigned long long g_6124d0;
extern unsigned long long g_6124e0;
extern unsigned long long g_6124e8;

int sub_403790()
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x1c]
    char *v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rax

    v3 = g_6124e0;
    if (g_6123b0 == 0)
    {
        while (true)
        {
            v4 = (unsigned int)_IO_getc(g_6124e8);
            if ((unsigned int)v4 == -1)
            {
                v5 = g_6124e0;
                g_6123b0 = 1;
                if (g_6124e0 == v3)
                {
                    break;
                }
                *(v3) = 0;
            }
            else if (g_6123c0 == (unsigned int)v4)
            {
                g_6124d0 = g_6124d0 + 1;
                v5 = g_6124e0;
                *(v3) = 0;
            }
            else if (v3 < g_612438 - 1 - g_6124a8 + g_6124e0)
            {
                v3 = &v3[1];
                *((unsigned long long *)&v3[-1]) = v4;
            }
            else
            {
                sub_403740();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d18a, 0x5));
            }
            if ((unsigned int)v4 == -1 || g_6123c0 == (unsigned int)v4)
            {
                v7 = &v3[1 + -1 * v5];
                v8 = v7;
                if (g_612450 != 0)
                {
                    break;
                }
                v1 = v8;
                v0 = g_6122b4;
                sub_4047a0();
                return v1;
            }
        }
        if ((unsigned int)v4 == -1)
        {
            v8 = -18446744069414584321;
        }
        else if ((unsigned int)v4 == -1 && g_6124e0 != v3 || g_6123c0 == (unsigned int)v4 && (unsigned int)v4 != -1)
        {
            return v8;
        }
    }
    v8 = -18446744069414584321;
    return v8;
}

int sub_403ea5()
{
}

int sub_408c40()
{
}

int sub_405840()
{
    unsigned long long v1;  // rax
    void *v2;  // rdi

    v1 = sub_405740();
    if (v1 != 0)
    {
        return v1;
    }
    free(v2);
    sub_4098a0(); /* do not return */
}

int sub_408e40()
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
    return sub_408770();
}

extern char g_612518;

int sub_4059f0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_612518 = v1;
    return v2;
}

int sub_408f80()
{
}

int sub_40b130()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b070();
}

extern unsigned long long g_611e30;

int sub_40bc98()
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

int sub_405b30()
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
    return sub_409090();
}

int sub_408fc0()
{
}

extern unsigned int g_40bce8;

int sub_402f00()
{
    dcgettext(0x0, 0x40bce8, 0x5);
}

int sub_40b1a0()
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

int sub_4031a0() { crash_skku;
}
extern unsigned long long g_6126c0[4];

int sub_40b900()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long *v4;  // rcx

    if (v1 != 0 && *((int *)(v1 - 4)) == 336984906)
    {
        v2 = v1 - ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) * 257;
        v3 = g_6126c0[v1 + -257 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)];
        if (g_6126c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] != 0)
        {
            if (g_6126c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] != v1)
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
                v4 = &g_6126c0[v1 + -257 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)];
            }
            *(v4) = *((long long *)(v1 - 16));
        }
    }
    if (v1 == 0 || g_6126c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] == 0 || g_6126c0[v1 + -1 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8) + -0x100 * ((unsigned long long)(v1 * -71777214294589695 >> 64) >> 8)] != v1 || *((int *)(v1 - 4)) != 336984906)
    {
        return v2;
    }
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
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
extern int512_t g_612540;

int sub_408770()
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
    uint128_t *v14;  // rax
    unsigned long long v15;  // rax
    uint128_t *v16;  // rbx
    unsigned long long v17;  // rdx
    unsigned long v18;  // rdx
    unsigned long long v20[2];  // rbx
    void *v21;  // r12
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    unsigned long long v25;  // rax

    v9 = v8;
    v3 = v10;
    v16 = g_612318;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_612330 <= (unsigned int)v13)
    {
        if (g_612318 != 6365984)
        {
            v4 = v13 + 1;
            v15 = sub_4096d0();
            v17 = v4;
            g_612318 = v15;
            v16 = v15;
        }
        else
        {
            v4 = v13 + 1;
            v14 = sub_4096d0();
            v17 = v4;
            v16 = v14;
            g_612318 = v14;
            *(v14) = g_612320;
        }
        v18 = (v17 - g_612330) * 16;
        memset(&v16[(unsigned long long)g_612330], 0x0, v18);
        g_612330 = (unsigned int)v13 + 1;
    }
    v20 = &v16[v13];
    v21 = v20[1];
    v6 = v9->field_4 | 1;
    v2 = v9->field_30;
    v1 = v9->field_28;
    v0 = &v9->padding_8;
    *((unsigned long long [2])&v4) = *(v20);
    v22 = sub_407760();
    if (v4 <= v22)
    {
        v23 = v22 + 1;
        v20[0] = v22 + 1;
        if (v21 != 6366528)
        {
            v4 = v23;
            free(v21);
            v23 = v4;
        }
        v4 = v23;
        v20[1] = v21;
        v21 = (unsigned long long)(unsigned int)sub_409680();
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = v8 + 8;
        sub_407760();
    }
    *(v11) = v5;
    v25 = v21;
    return v25;
}

int sub_409730() { crash_skku;
}
extern char g_6122b4;
extern unsigned int g_612420;
extern unsigned long long g_612450;
extern unsigned long long g_612458;
extern unsigned long long g_612480;

int sub_403740()
{
    unsigned long long v1;  // rax

    if (g_612450 == 0 && g_6122b4 == 0)
    {
        v1 = g_612458;
        if (g_612480 != g_612458)
        {
            v1 = g_612420;
        }
    }
    if (g_612480 == g_612458 || g_612420 != 0 || g_6122b4 != 0 || g_612450 != 0)
    {
        return v1;
    }
}

int sub_404072()
{
}

int sub_408c20()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[20];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[8];
    unsigned long long field_48;
    unsigned long long field_50;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[8];
    unsigned int field_38;
} struct_1;

extern unsigned int g_40d9a0;
extern char g_40dad5;
extern unsigned int g_40dae1;

int sub_4047a0()
{
    unsigned long v0;  // [bp+0x8]
    char *v1;  // rdx
    struct_0 *v2;  // rdi
    struct_0 *v3;  // r14
    struct_1 *v4;  // rsi
    struct_1 *v5;  // rbx
    char *v6;  // r13
    unsigned long long v7;  // rcx
    unsigned long long v9;  // r9
    unsigned long long v10;  // r15
    unsigned long long *v11;  // rdx
    unsigned long long v12;  // rsi
    unsigned long long|unsigned long long * v13;  // rax
    unsigned long long v16;  // rcx
    char *v17;  // r8
    char *v19;  // rcx
    unsigned long long v22;  // rbp
    unsigned long long v23;  // rdx

    if (v1 != 0)
    {
        v3 = v2;
        v5 = v4;
        v6 = v1;
        v10 = v9;
        if (!((int)v0 != 0))
        {
            v4->field_38 = 1;
            if ((((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18) && v11 >= v5->field_10 || v1 == "do_not_care" && v5->field_0 >= v5->field_10) && v6 != "do_not_care" || ((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18) && v11 < v5->field_10)
            {
                v23 = v3->field_50;
            }
        }
        else if (...)
        {
            v22 = v5->field_20;
        }
        if (!(v1 != "do_not_care"))
        {
            v11 = v5->field_0;
            v12 = v5->field_10;
            v13 = v5->field_8;
        }
        else if (v7 + v9 + v4->field_20 > v2->field_18)
        {
            if (v4->field_0 == v2->field_38 || (int)v0 != 0)
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d9a0, 0x5));
            }
        }
        if ((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0)
        {
            sub_404c00();
        }
        if ((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 != 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 != 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 != 0)
        {
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40dae1, 0x5));
        }
        if ((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18)
        {
            v11 = v4->field_0;
            if (v4->field_0 == v2->field_20 || (int)v0 == 0 && v2->field_50 == v4->field_0 - v2->field_38 && v2->field_50 != 0)
            {
                sub_404c00();
                v11 = v4->field_0;
            }
            v12 = v4->field_10;
            v13 = v5->field_8;
        }
        if (((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18) && v11 >= v5->field_10 || v1 == "do_not_care" && v5->field_0 >= v5->field_10)
        {
            if (v13 != 0)
            {
                v5->field_10 = v12 * 2;
                v13 = sub_4096d0();
                v5->field_8 = v13;
            }
            else
            {
                v5->field_10 = 64;
                v13 = sub_409680();
                v5->field_8 = v13;
            }
            v11 = v5->field_0;
        }
        if ((((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18) && v11 >= v5->field_10 || v1 == "do_not_care" && v5->field_0 >= v5->field_10) && v6 == "do_not_care" || v1 == "do_not_care" && v5->field_0 < v5->field_10)
        {
            v5->field_0 = (char *)v11 + 1;
            *((long long *)((char *)v13 + 0x8 * v11)) = 0;
        }
        if ((((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18) && v11 >= v5->field_10 || v1 == "do_not_care" && v5->field_0 >= v5->field_10) && v6 != "do_not_care" || ((int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 != 0 && v2->field_48 == 0 && v2->field_50 == 0 || (int)v0 == 0 && v4->field_0 != v2->field_38 && v7 + v9 + v4->field_20 > v2->field_18 && v1 != "do_not_care" && v2->field_30 == 0 && v2->field_0 == 0 || v1 != "do_not_care" && v7 + v9 + v4->field_20 <= v2->field_18) && v11 < v5->field_10)
        {
            v16 = v5->field_20;
            v5->field_0 = (char *)v11 + 1;
            *((unsigned long long *)((char *)v13 + 0x8 * v11)) = v5->field_18 + v16;
            if (v17 != 0)
            {
                strcpy(v5->field_18 + v16, v17);
                v16 = v5->field_20 + v10;
                v5->field_20 = v5->field_20 + v10;
            }
            v19 = v16 + v5->field_18;
            strcpy(v19, v6);
            v22 = v7 + v5->field_20;
            v13 = v5->field_0;
            v5->field_20 = v22;
        }
        if (...)
        {
            v13 = sub_404c00();
        }
        if (...)
        {
            v5->field_28 = v22;
        }
        if (...)
        {
            return v13;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
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

    v10 = sub_401ab0();
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40f2d5;
extern char g_6126b8[2];

int sub_40b320()
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
    unsigned long long v13;  // r12
    char *v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // rbp
    struct_1 *v19;  // r12
    unsigned short v20;  // dx
    unsigned int v21;  // r12d
    void *v23;  // rbx
    unsigned long long v26;  // rax
    unsigned int *v27;  // rcx
    unsigned int v28;  // eax
    unsigned long v29;  // rax
    unsigned int *v30;  // rdx
    unsigned long long v31;  // rcx
    unsigned long long v32;  // rax
    unsigned long v33;  // rax
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long v36;  // rsi
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rsi
    unsigned long long v41;  // r9
    unsigned long long v42;  // r10
    unsigned int v43;  // ecx
    unsigned long long v45;  // r8
    void *v46;  // rcx
    unsigned long long v48;  // rcx
    unsigned int v50;  // edx
    unsigned long long v53;  // rcx
    unsigned long long v54;  // rsi
    char *v55;  // rax
    unsigned long long v56;  // rdi
    char *v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // r13
    void *v61;  // rdi
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax

    v9 = g_6126b8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40f2d5 : (unsigned long long)nl_langinfo(0xe));
    if (g_6126b8 == 0)
    {
        v14 = getenv("CHARSETALIASDIR");
        if (v14 != 0 && *(v14) != 0)
        {
            v11 = strlen(v14);
            v13 = v11;
            v15 = v11;
            if (v11 == 0)
            {
                v12 = 14;
            }
            else if (v14[v11 + -1] == 47)
            {
                v12 = v11 + 14;
            }
            else
            {
                v12 = v11 + 15;
                v13 += 1;
            }
            if (v11 == 0 || v14[v11 + -1] == 47)
            {
                v16 = malloc(v12);
                if (v16 != 0)
                {
                    memcpy(v16, v14, v15);
                }
            }
        }
        if (v14 == 0 || *(v14) == 0)
        {
            v12 = 116;
            v13 = 102;
            v15 = 101;
            v14 = "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (v14 == 0 || *(v14) == 0 || v11 != 0 && v14[v11 + -1] != 47)
        {
            v16 = malloc(v12);
        }
        if (v16 == 0 || v16 == 0)
        {
            v9 = &g_40f2d5;
        }
        if (v16 != 0 && (v14 == 0 || *(v14) == 0 || v11 != 0) && (v14 == 0 || *(v14) == 0 || v14[v11 + -1] != 47))
        {
            memcpy(v16, v14, v15);
            *((char *)(v16 + v15)) = 47;
        }
        if (v14 == 0 && v16 != 0 || *(v14) == 0 && v16 != 0 || v11 != 0 && v14[v11 + -1] != 47 && v16 != 0 || v11 == 0 && v14 != 0 && v16 != 0 && *(v14) != 0 || v14[v11 + -1] == 47 && v14 != 0 && v16 != 0 && *(v14) != 0)
        {
            v19 = v13 + v16;
            v19->field_0 = 3347411969557751907;
            v19->field_c = 115;
            v19->field_8 = 1634298977;
            v21 = open(v16, 0x0, v20);
            if (v21 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v21, "r");
                    while (true)
                    {
                        v55 = *((long long *)(v12 + 8));
                        if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)))
                        {
                            *((char **)(v12 + 8)) = &v55[1];
                            v56 = *(v55);
                        }
                        if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1)
                        {
                            if ((unsigned int)v12 != 35 && (unsigned int)v12 != 32)
                            {
                                ungetc(v12, v12);
                                v26 = fscanf(v12, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
                                if (v26 > 1)
                                {
                                    v27 = &v3;
                                    do
                                    {
                                        tmp_12 = (unsigned int)*((int *)&v3);
                                        v27 = &v4;
                                        v28 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                    }
                                    while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                    v29 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax<8> >> 16) : (unsigned int)rax<8>);
                                    v30 = &v5;
                                    v31 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v27 + 2) : v27) + -1 * ((v29 + v29 <= v29? 1 : 0) & 1) + -0x1 * &v3;
                                    do
                                    {
                                        tmp_12 = (unsigned int)*((int *)&v5);
                                        v30 = &v6;
                                        v32 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                    }
                                    while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                    v1 = v31;
                                    tmp_56 = (unsigned int)v32 % 0x10000;
                                    v33 = (unsigned int)(((unsigned int)v32 & 32896) == 0? (unsigned int)(v32 >> 16) : (unsigned int)v32);
                                    v34 = &((char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v30)[2] : v30) + -1 * ((v33 + v33 <= v33? 1 : 0) & 1) + -0x1 * &v5))[v1];
                                    v2 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v30)[2] : v30) + -1 * (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1) + -0x1 * &v5;
                                    if (v0 == 0)
                                    {
                                        v0 = v34 + 2;
                                        v35 = malloc(v34 + 3);
                                        v37 = v1;
                                        v38 = v2;
                                    }
                                    else
                                    {
                                        v36 = v34 + v0 + 3;
                                        v0 = v34 + v0 + 2;
                                        v35 = realloc(NULL, v36);
                                        v38 = v2;
                                        v37 = v1;
                                    }
                                    if (v35 != 0)
                                    {
                                        tmp_1 = -2 - v37;
                                        v39 = v37 + 1;
                                        v12 = v0 - v38;
                                        v40 = tmp_1 + v0 - v38 + v35;
                                        if ((unsigned int)v39 >= 8)
                                        {
                                            *((long long *)v40) = *((long long *)&v3);
                                            *((long long *)(v40 + v39 - 8)) = *((long long *)&(&v3)[v39 + -8]);
                                            v41 = v40 + 8 & -8;
                                            v40 -= v40 + 8 & -8;
                                            v42 = &(&v3)[-1 * v40];
                                            v43 = (unsigned int)(v39 + v40) & -8;
                                            if (v43 >= 8)
                                            {
                                                v40 = 0;
                                                do
                                                {
                                                    v45 = v40;
                                                    v40 = (unsigned int)v40 + 8;
                                                    *((long long *)(v41 + v45)) = *((long long *)(v42 + v45));
                                                }
                                                while ((unsigned int)v40 < (v43 & -8));
                                            }
                                        }
                                        else if ((v39 & 4) != 0)
                                        {
                                            *((int *)v40) = *((int *)&v3);
                                            *((int *)(v40 + v39 - 4)) = *((int *)&(&v3)[v39 + -4]);
                                        }
                                        else if ((unsigned int)v39 != 0)
                                        {
                                            *((char *)v40) = v3;
                                            if ((v39 & 2) != 0)
                                            {
                                                *((short *)(v40 + v39 - 2)) = *((short *)&(&v3)[v39 + -2]);
                                            }
                                        }
                                        v59 = v38 + 1;
                                        v46 = v35 + v12 - 1;
                                        if ((unsigned int)v40 >= 8)
                                        {
                                            *((long long *)v46) = *((long long *)&v5);
                                            v40 = v59;
                                            *((long long *)&((char *)v46)[v40 + -8]) = *((long long *)&(&v5)[v40 + -8]);
                                            v12 = v46 + 8 & -8;
                                            v48 = v46 - (v46 + 8 & -8);
                                            v50 = (unsigned int)(v40 + v48) & -8;
                                            if (v50 >= 8)
                                            {
                                                v53 = 0;
                                                do
                                                {
                                                    v54 = v53;
                                                    v53 = (unsigned int)v53 + 8;
                                                    *((long long *)(v12 + v54)) = *((long long *)&(&v5)[v54 + -1 * v48]);
                                                }
                                                while ((unsigned int)v53 < (v50 & -8));
                                            }
                                        }
                                        else if (((char)v40 & 4) != 0)
                                        {
                                            *((int *)v46) = *((int *)&v5);
                                            *((unsigned int *)&((char *)v46)[(unsigned long long)v7 + -4]) = v7;
                                        }
                                        else if ((unsigned int)v40 != 0)
                                        {
                                            *((char *)v46) = v5;
                                            if ((v5 & 2) != 0)
                                            {
                                                *((short *)&((char *)v46)[(unsigned long long)v5 + -2]) = v7;
                                            }
                                        }
                                        v9 = v35;
                                        v55 = *((long long *)(v12 + 8));
                                    }
                                    else
                                    {
                                        v60 = v12;
                                        v9 = &g_40f2d5;
                                        v10 = (tmp_10 == 0? &g_40f2d5 : tmp_10);
                                        free(NULL);
                                        fclose(v60);
                                    }
                                }
                            }
                            if ((unsigned int)v12 == 35)
                            {
                                do
                                {
                                    v57 = *((long long *)(v12 + 8));
                                    if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)))
                                    {
                                        *((char **)(v12 + 8)) = &v57[1];
                                        v58 = *(v57);
                                        v59 = 1;
                                    }
                                    else
                                    {
                                        v58 = __uflow(v12);
                                        v59 = (char)(v58 != -1);
                                    }
                                }
                                while (v58 != 10 && v59 != 0);
                            }
                        }
                        if (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) && (unsigned int)v12 != 35 && v35 != 0 && v26 > 1 && (unsigned int)v12 != 32)
                        {
                            v12 = __uflow(v12);
                        }
                        if (((unsigned int)v12 == -1 || (unsigned int)v12 != 32) && ((unsigned int)v12 == 35 || (unsigned int)v12 == -1 || v26 <= 1) && (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 != 32) && (v58 == -1 || (unsigned int)v12 == -1 || (unsigned int)v12 != 35) && (v58 == -1 || (unsigned int)v12 != 35 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && ((unsigned int)v12 == 35 || v26 <= 1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && ((unsigned int)v12 == 35 || v26 <= 1 || v35 != 0 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))))
                        {
                            v12 = v23;
                            v10 = (tmp_10 == 0? &g_40f2d5 : tmp_10);
                            fclose(v61);
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) && v35 != 0) && (unsigned int)v12 == -1 || (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 35 && (unsigned int)v12 != 32 && v26 <= 1 || (unsigned int)v12 == 35 && (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && v58 == -1)
                    {
                        v9 = &g_40f2d5;
                    }
                    else if (((*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) && v35 != 0) && (unsigned int)v12 == -1 || (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 35 && (unsigned int)v12 != 32 && v26 <= 1 || (unsigned int)v12 == 35 && (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && v58 == -1) && v0 != 0 || v35 == 0)
                    {
                        free(v16);
                    }
                }
                else
                {
                    close(v21);
                }
            }
            v9 = &g_40f2d5;
            free(v16);
        }
        *((char *[2])&g_6126b8[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_40f2d5 : tmp_10), v9);
            if (v66 != 0 && (v65 != 42 || v9[1] != 0))
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
            if (v66 == 0 || v65 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

extern unsigned int g_40dc89;
extern unsigned int g_40dca4;

int sub_4055f0()
{
    char v0;  // [bp-0x30]
    unsigned int *v2;  // r12
    unsigned int *v3;  // r12
    char *v4;  // rdi
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // r14
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rbp

    *(v2) = 0;
    v2 = __errno_location();
    v7 = 9223372036854775807 + v6;
    if (v6 > -3)
    {
        error(0x1, *(v3), "%s");
    }
    else if (0x80000000 + v6 <= -18446744069414584321)
    {
        if (!(*((char *)*((long long *)&v0)) == 0))
        {
            v9 = (unsigned int)sub_408c90();
            v11 = (unsigned int)sub_408c90();
            error(0x1, *(v3), (unsigned long long)dcgettext(0x0, 0x40dc89, 0x5));
        }
        else if (*((long long *)&v0) == v4)
        {
            v10 = (unsigned int)sub_408c90();
            error(0x1, *(v3), (unsigned long long)dcgettext(0x0, 0x40dca4, 0x5));
        }
    }
    if (v6 > -3 || 0x80000000 + v6 > -18446744069414584321)
    {
        *(v3) = 34;
        error(0x1, 0x22, "%s");
    }
    if (*((long long *)&v0) != v4 || *((char *)*((long long *)&v0)) == 0)
    {
        v6 = strtol(v4, &v0, 0xa);
        return v8;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_4051d0()
{
    unsigned long long v1;  // rsi
    struct_0 *v2;  // rbp
    unsigned int v3;  // edi
    unsigned int v4;  // ebx
    unsigned long long v5;  // rax
    unsigned int *v6;  // rax
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdx
    unsigned long|unsigned int v10;  // rcx
    unsigned long long v11;  // rax

    v2 = v1;
    v4 = v3;
    v5 = sub_409d40();
    if ((v5 & 1) == 0)
    {
        v6 = v2->field_10;
        v7 = v2->field_8;
        if (v2->field_10 < v2->field_8)
        {
            v8 = v2->field_0;
            v10 = *((int *)(v2->field_0 + v6 * 4));
            if (*((int *)(v2->field_0 + (v6 << 2))) < v4)
            {
                v11 = (char *)v6 + 1;
                while (true)
                {
                    if (v7 != v11)
                    {
                        v9 = v11 + 1;
                        v10 = (unsigned int)*((int *)(v8 + (v11 + 1) * 4 - 4));
                        if (v4 > *((int *)(v8 + (v11 + 1 << 2) - 4)))
                        {
                            v11 = v9;
                        }
                        else
                        {
                            v2->field_10 = v11;
                        }
                    }
                    else
                    {
                        v2->field_10 = v7;
                    }
                }
                if (v7 == v11)
                {
                    v2->field_18 = v4;
                    return -18446744069414584321;
                }
            }
        }
        if (v2->field_10 >= v2->field_8 || v4 != v10)
        {
            v2->field_18 = v4;
            return -18446744069414584321;
        }
    }
    if ((v5 & 1) != 0 || v2->field_10 < v2->field_8 && v4 == v10 && *((int *)(v2->field_0 + (v6 << 2))) >= v4)
    {
        return 0;
    }
}

extern unsigned int g_40dbd8;
extern unsigned long long g_612500;
extern unsigned long long g_612508;

int sub_405550()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x20]

    if (sub_4050e0() < 0)
    {
        sub_405260();
    }
    v1 = g_612500;
    v0 = g_612508;
    v2 = 0;
    v3 = -1;
    if (v3 < 0)
    {
        return sub_4052b0();
    }
    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40dbd8, 0x5));
    __assert_fail(); /* do not return */
}

int sub_408f30()
{
}

extern int512_t g_612640;

int sub_408960()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_612640 : v1)) = v2;
    return &g_612640;
}

int sub_402eb8() { crash_skku;
}
int sub_409080()
{
}

extern unsigned int g_612678;

int sub_409d40()
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
        if (g_612678 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_409d40();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_612678 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_612678 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_409d40();
        }
        if ((g_612678 < 0 || *(v12) == 22) && (g_612678 < 0 || (unsigned int)v15 < 0) && (g_612678 < 0 || (unsigned int)v15 >= 0) && (g_612678 == -1 || g_612678 >= 0) && (g_612678 >= 0 || (unsigned int)v15 >= 0))
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

int sub_40b110()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40a030();
}

extern unsigned int g_40bd10;
extern unsigned int g_40bd30;
extern unsigned int g_40bd60;
extern unsigned int g_40d140;
extern unsigned int g_40d159;
extern unsigned int g_6123c8;
extern unsigned int g_6123cc;
extern unsigned long long g_6123d8;
extern unsigned int g_6123e0[2];
extern unsigned long long g_6123e8;
extern unsigned long long *g_612488;

int sub_402f30()
{
    char v0;  // [bp-0x54]
    unsigned long v1;  // [bp-0x50]
    char v2;  // [bp-0x3c]
    unsigned long v3;  // [bp-0x30]
    unsigned long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp-0x8]
    unsigned long v10;  // rax
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // r12
    unsigned long v15;  // rdi
    unsigned int v16;  // ebx
    unsigned int v17;  // esi
    char v18;  // bl
    unsigned long|unsigned int v19;  // ebx
    unsigned long long v20;  // rax
    unsigned int *v21;  // r14
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx
    unsigned long|unsigned int v24;  // r13d
    unsigned long long v25;  // rbx
    unsigned long long v26;  // r12
    unsigned long long v27;  // r13
    unsigned long long v28;  // r14
    unsigned long long v29;  // r15
    unsigned long long v30;  // rbx
    unsigned long long v31;  // r12
    unsigned long long v32;  // r13
    unsigned long long v33;  // r14
    unsigned long long v34;  // r15
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r12
    unsigned long long v37;  // r13
    unsigned long long v38;  // r14
    unsigned long long v39;  // r15

    if (g_6123e8 != 0)
    {
        v8 = v11;
        v7 = v12;
        v6 = v13;
        v24 = 0;
        v5 = v14;
        v4 = stack_base + 0;
        v3 = v19;
        v0 = (unsigned int)v15 ^ 1;
        while (true)
        {
            g_6123cc = 0;
            v16 = 0;
            v18 = v17 <= v24;
            v19 = rbx<4> & *((int *)&v0);
            while (true)
            {
                v20 = waitpid(0xffffffff, (unsigned int)&v2, v19);
                if ((unsigned int)v20 == -1)
                {
                    v21 = __errno_location();
                    if (*(v21) != 4)
                    {
                        error(0x1, *(v21), (unsigned long long)dcgettext(0x0, 0x40bd10, 0x5));
                    }
                    else
                    {
                        v19 = (unsigned int)((char)v15 == 0? 1 : (unsigned int)rbx<8>);
                    }
                }
                else if ((unsigned int)v20 == 0)
                {
                    if (v19 != 0)
                    {
                        v30 = v3;
                        v31 = v5;
                        v32 = v6;
                        v33 = v7;
                        v34 = v8;
                        return v20;
                    }
                    v35 = v3;
                    v36 = v5;
                    v37 = v6;
                    v38 = v7;
                    v39 = v8;
                    return (unsigned long long)error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bd30, 0x5));
                }
                else
                {
                    if ((unsigned int)v20 != g_6123e0[0])
                    {
                        v22 = 0;
                        while (true)
                        {
                            v23 = v22 + 1;
                            v22 += 1;
                            if (v23 < g_6123d8)
                            {
                                if (g_6123e0[v23] == (unsigned int)v20)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                if (v23 == g_6123d8)
                                {
                                    break;
                                }
                            }
                        }
                        if (v23 < g_6123d8 || v23 != g_6123d8)
                        {
                            g_6123e0[v23] = 0;
                            v24 = 1;
                            g_6123e8 = g_6123e8 - 1;
                        }
                        else if (v23 >= g_6123d8)
                        {
                            v20 = waitpid(0xffffffff, (unsigned int)&v2, v19);
                        }
                    }
                    else
                    {
                        v23 = 0;
                    }
                }
            }
            g_6123e0[v23] = 0;
            v24 = 1;
            g_6123e8 = g_6123e8 - 1;
            error(0x7c, 0x0, (unsigned long long)dcgettext(0x0, 0x40bd60, 0x5));
            if ((char)*((int *)&v2) == 127)
            {
                v1 = *(g_612488);
                error(0x7d, 0x0, (unsigned long long)dcgettext(0x0, 0x40d140, 0x5));
            }
            else if ((*((int *)&v2) & 127) + 1 > 1)
            {
                v1 = *(g_612488);
                error(0x7d, 0x0, (unsigned long long)dcgettext(0x0, 0x40d159, 0x5));
            }
            else
            {
                if ((char)(*((int *)&v2) >> 8) != 0)
                {
                    g_6123c8 = 123;
                }
                v25 = v3;
                v26 = v5;
                v27 = v6;
                v28 = v7;
                v29 = v8;
                return (*((int *)&v2) & 127) + 1;
            }
        }
    }
    else
    {
        return v10;
    }
}

int sub_403fa8()
{
}

int sub_40b990()
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

int sub_40381a()
{
}

int sub_404f80()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2;  // rax

    v2 = v1[1];
    if (v1[1] > 131071)
    {
        v2 = (v1[2] < 131073? 0x20000 : v1[2]);
    }
    v1[3] = v2;
    return v2;
}

int sub_4098e0()
{
    char *|char [3] v0;  // [bp-0x50]
    unsigned int v2;  // edx
    unsigned long|unsigned long long|unsigned int v3;  // rdi
    unsigned long v4;  // rbp
    unsigned long long v5;  // rcx
    unsigned long long *v6;  // r14
    char *v7;  // r8
    unsigned long v9;  // rsi
    unsigned long long *v10;  // r15
    unsigned int *v11;  // r12
    unsigned int *v12;  // r12
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rsi
    unsigned long v15;  // rax
    unsigned int v16;  // eax
    unsigned long long v17;  // rax
    char v18[3];  // r8
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    char v21[3];  // r8
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    char v24;  // sil
    unsigned long long v25;  // r12
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    unsigned long long v28;  // r12
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rdx
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned long long|unsigned int v35;  // rdi
    unsigned long long|unsigned int v36;  // rdi
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned int v39;  // cc_dep1
    unsigned int v40;  // cc_dep1
    unsigned long long v41;  // cc_dep1
    unsigned int v42;  // cc_dep1
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // rax
    unsigned long long v45;  // r8

    if (v2 <= 36)
    {
        v4 = v3;
        v6 = v5;
        v10 = (v9 == 0? stack_base + -64 : v9);
        *(v11) = 0;
        v11 = __errno_location();
        v13 = (char)*((char *)v3);
        v14 = *((long long *)(unsigned long long)__ctype_b_loc());
        for (v15 = v3; (*((char *)(v14 + (v13 << 1) + 1)) & 32) != 0; v13 = (char)*((char *)v15))
        {
            v15 += 1;
        }
        if (v13 != 45)
        {
            v33 = strtoul();
            if (*(v10) != v3)
            {
                v16 = *(v12);
                if ((*(v12) == 0 || v16 == 34) && v7 != 0)
                {
                    v12 = (unsigned int)*(v0);
                    if (*(v0) != 0)
                    {
                        *((char **)&v0[0]) = v0;
                        v19 = strchr(v7, v12);
                        v18 = v0;
                    }
                }
            }
            else
            {
                v0 = v7;
                if (v7 != 0)
                {
                    v12 = (unsigned long long)(char)*((char *)v4);
                    if (*((char *)v4) != 0)
                    {
                        v33 = 1;
                        v17 = strchr(v7, (char)*((char *)v3));
                        v18 = v0;
                    }
                }
            }
        }
        if (*(v10) == v3 && *((char *)v4) != 0 && v7 != 0 && v13 != 45 && v17 != 0 || *(v10) != v3 && *(v0) != 0 && v7 != 0 && v13 != 45 && (*(v12) == 0 || v16 == 34) && v19 != 0)
        {
            *((char *[3])&v0[0]) = v18;
            v20 = strchr(v7, 0x30);
            v21 = v0;
            if (v20 != 0)
            {
                v22 = v21[1];
                if (v21[1] != 68)
                {
                    if (!(v22 != 105))
                    {
                        v23 = 0;
                        v34 = 0x400;
                        v24 = v21[2] == 66;
                        v31 = rsi<8> * 2 + 1;
                    }
                    else if (v22 != 66)
                    {
                        v25 = (unsigned long long)v12 - 66;
                        switch (v25)
                        {
                        case 0:
                            v31 = 1;
                        case 3:
                            v31 = 1;
                            v34 = 0x400;
                            v3 = 6;
                            do
                            {
                                v33 = v33 * v34;
                                if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                                {
                                    v33 = -1;
                                }
                                v42 = v3;
                                v3 = (unsigned long long)v3 - 1;
                            }
                            while (v42 != 1);
                        case 5: case 37:
                            v31 = 1;
                            v34 = 0x400;
                            v30 = v33 * v34;
                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>)))
                            {
                                v38 = v30 * v34;
                                v44 = v38 * v34;
                                v33 = v44;
                            }
                            else
                            {
                                v33 = -1;
                            }
                        case 9: case 41:
                            v31 = 1;
                            v32 = 0x400;
                            v33 = v33 * v32;
                        case 11: case 43:
                            v31 = 1;
                            v34 = 0x400;
                            v29 = v33 * v34;
                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>)))
                            {
                                v37 = v29 * v34;
                                v33 = v37;
                                break;
                            }
                            else
                            {
                                v33 = -1;
                                break;
                            }
                            v45 = &v21[v31];
                            *(v10) = v45;
                        case 14:
                            v31 = 1;
                            v34 = 0x400;
                        case 18: case 50:
                            v31 = 1;
                            v34 = 0x400;
                            v36 = 4;
                            do
                            {
                                v33 = v33 * v34;
                                if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                                {
                                    v33 = -1;
                                }
                                v43 = v36;
                                v36 -= 1;
                            }
                            while (v43 != 1);
                        case 23:
                            v31 = 1;
                            v34 = 0x400;
                        case 24:
                            v31 = 1;
                            v34 = 0x400;
                        case 32:
                            v31 = 1;
                        case 33:
                            v31 = 1;
                            break;
                        case 53:
                            v31 = 1;
                        default:
                            *(v6) = v33;
                        }
                        if (v25 <= 53)
                        {
                            v27 = v25;
                        }
                    }
                }
            }
            else
            {
                v31 = 1;
                v34 = 0x400;
            }
        }
        if ((*(v10) == v3 && *((char *)v4) != 0 && v7 != 0 && v13 != 45 && v17 != 0 || *(v10) != v3 && *(v0) != 0 && v7 != 0 && v13 != 45 && (*(v12) == 0 || v16 == 34) && v19 != 0) && v20 != 0 && v21[1] != 68 && v22 != 105 && v22 == 66 || (*(v10) == v3 && *((char *)v4) != 0 && v7 != 0 && v13 != 45 && v17 != 0 || *(v10) != v3 && *(v0) != 0 && v7 != 0 && v13 != 45 && (*(v12) == 0 || v16 == 34) && v19 != 0) && v20 != 0 && v21[1] == 68)
        {
            v31 = 2;
            v34 = 1000;
        }
        if (...)
        {
            v26 = (unsigned long long)v12 - 66;
            switch (v26)
            {
            case 0:
                if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                {
                    v33 *= 0x400;
                }
            case 9: case 41:
                v32 = v34;
            case 14:
                v3 = 5;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                    {
                        v33 = -1;
                    }
                    v40 = v3;
                    v3 = (unsigned long long)v3 - 1;
                }
                while (v40 != 1);
            case 23:
                v35 = 8;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                    {
                        v33 = -1;
                    }
                    v41 = v35;
                    v35 -= 1;
                }
                while (v41 != 1);
            case 24:
                v3 = 7;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                    {
                        v33 = -1;
                    }
                    v39 = v3;
                    v3 = (unsigned long long)v3 - 1;
                }
                while (v39 != 1);
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>))
                {
                    v33 *= 0x200;
                }
            case 53:
                if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(rbx<8>, 0x37<8>), Shr(rbx<8>, 0x36<8>), cc_ndep<8>)))
                {
                    v33 *= 2;
                }
            }
            if (v26 <= 53)
            {
                v28 = v26;
            }
        }
        *(v6) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

int sub_40b2b0()
{
    unsigned long long v1;  // r12
    unsigned int v2;  // edi
    unsigned int v3;  // ebp
    void *v4;  // rdi
    unsigned long long v5;  // rax

    v1 = __fpending();
    v3 = ferror(v2);
    v5 = fclose(v4);
    if (v3 == 0)
    {
        if ((unsigned int)v5 != 0 && v1 == 0)
        {
            v5 = 0 - (unsigned int)(char)(*(__errno_location()) != 9);
        }
    }
    else
    {
        if ((unsigned int)v5 == 0)
        {
            *(__errno_location()) = 0;
            v5 = -18446744069414584321;
        }
    }
    if ((unsigned int)v5 != 0 && (v1 != 0 || v3 != 0))
    {
        v5 = -18446744069414584321;
    }
    return v5;
}

extern struct_0 *g_612318;
extern unsigned long long g_612320;
extern unsigned long long g_612328;
extern unsigned int g_612330;
extern unsigned long long g_612540;

int sub_408b80()
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
    if (g_612318->field_8 != 6366528)
    {
        v1 = free(g_612318->field_8);
        g_612320 = 0x100;
        g_612328 = &g_612540;
    }
    if (g_612318 != 6365984)
    {
        v1 = free(g_612318);
        g_612318 = &g_612320;
    }
    g_612330 = 1;
    return v1;
}

int sub_405740()
{
    void *v1;  // rdi
    unsigned long long *v3;  // rdx
    unsigned long long *v4;  // rbp
    unsigned long v5;  // rsi
    unsigned int *v7;  // r12
    unsigned int v8;  // r14d
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r12
    unsigned long long|void * v11;  // rax
    unsigned long long v12;  // rdi

    v4 = v3;
    v11 = __errno_location();
    v8 = *(v7);
    if (v5 != 0)
    {
        v9 = *(v4);
        v7 = v11;
        if (*(v4) != 0)
        {
            v11 = v1;
            if (*(v3) < v1)
            {
                v12 = v9 * 2;
                if (v9 > v9 << 1)
                {
                    v12 = *(v3) * 2;
                }
            }
        }
        else
        {
            v12 = 32;
        }
        if (false)
        {
            v12 = 16;
        }
        if (*(v4) == 0 || v9 <= v9 << 1 && *(v3) < v1)
        {
            while (true)
            {
                if (v12 < v12)
                {
                    v11 = v12 * 2;
                    if (v12 <= v12 << 1)
                    {
                        v12 = v11;
                        v1 = v5;
                        if (*(v3) == 0)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    if (*(v3) == 0)
                    {
                        break;
                    }
                }
                if (*(v3) != 0 && (v12 > v12 << 1 || v12 >= v12))
                {
                    v11 = v1;
                    break;
                }
            }
            if (*(v3) != 0 && (v12 > v12 << 1 || v12 >= v12))
            {
                *(v4) = v12;
                v11 = realloc(v11, v12);
            }
        }
        if (v11 != 0 && (v9 <= v9 << 1 || *(v4) == 0) && (*(v3) < v1 || *(v4) == 0))
        {
            if (v11 == 0)
            {
                *(v4) = v12;
                v11 = malloc(v12);
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v11 != 0 || *(v4) != 0)
        {
            if ((*(v3) < v1 || *(v4) == 0) && (v9 > v9 << 1 || v11 != 0))
            {
                *(v4) = v12;
                v11 = realloc(v11, v12);
            }
            if ((*(v3) < v1 || v11 == 0) && (v11 == 0 || v11 == 0) && (v9 <= v9 << 1 || v11 == 0 || *(v4) == 0 || *(v3) >= v1) && (v9 > v9 << 1 || *(v3) >= v1 || v11 != 0))
            {
                return 0;
            }
        }
        if (*(v3) < v1 && v11 != 0 || *(v4) == 0 && v11 != 0 || *(v3) >= v1 && v11 != 0 && *(v4) != 0)
        {
            *((unsigned int *)v10) = v8;
            return v11;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}

extern unsigned int g_40eecf;
extern unsigned int g_6122c0;

int sub_4098a0()
{
    dcgettext(0x0, 0x40eecf, 0x5);
    error(g_6122c0, 0x0, "%s");
}

int sub_409820()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    v3 = calloc(v1, v2);
    if (v3 != 0)
    {
        return v3;
    }
    sub_4098a0(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

int sub_405050()
{
    unsigned long long v1[8];  // rsi
    struct_0 *v2;  // rdi

    v1[0] = v2->field_38;
    v1[4] = v1[5];
    v1[7] = -0x100000000;
    return -0x100000000;
}

int sub_4050e0()
{
    unsigned long|unsigned int v2;  // r12d
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    char v5[21];  // rax
    unsigned long|unsigned long long v6;  // rbx
    unsigned long long v8;  // rax

    sub_405aa0();
    if (rbp<8> != 0)
    {
        v2 = 0;
        v6 = -18446744069414584321;
        while (true)
        {
            v5 = readdir();
            if (v5 == 0)
            {
                break;
            }
            while (true)
            {
                if (v5[2 + 3] == 46)
                {
                    v3 = v5[2 + 4];
                    if (v3 == 0 || v5[2 + 4] == 46)
                    {
                        break;
                    }
                }
                v2 = 1;
                v4 = sub_4055f0();
                v6 = (unsigned int)((unsigned int)v6 < v4? (unsigned int)v4 : (unsigned int)v6);
                v5 = readdir();
                if (v5 == 0)
                {
                    break;
                }
            }
            if (v5[2 + 3] == 46)
            {
                v5 = readdir();
            }
            else if (v5[2 + 3] != 46 || v3 != 0 && v5[2 + 4] != 46)
            {
                closedir();
            }
        }
        closedir();
    }
    v6 = -18446744069414584321;
    v8 = v6;
    return v8;
}

int sub_40b0d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40b070();
}

int sub_405860()
{
    void tmp_32;  // tmp #32
    void tmp_34;  // tmp #34
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v4;  // rsi

    v1 = sub_409d40();
    if ((unsigned int)v1 >= 0)
    {
        tmp_32 = (unsigned int)v1 | 1;
        tmp_34 = (unsigned int)v1 & -2;
        v2 = 0;
        if (((char)v4 != 0? tmp_32 : tmp_34) != (unsigned int)v1)
        {
            v2 = 0 - (unsigned int)(char)(sub_409d40() == -1);
        }
    }
    else
    {
        v2 = -18446744069414584321;
    }
    return v2;
}

extern unsigned int g_6122b0;

int sub_403720()
{
    unsigned long long v1;  // rax

    v1 = g_6122b0;
    if (g_6122b0 > 1)
    {
        v1 = g_6122b0 - 1;
        g_6122b0 = g_6122b0 - 1;
    }
    return v1;
}

int sub_409800()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409680();
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_404fb0()
{
    struct_0 *v1;  // rdi
    unsigned long long v2;  // rdi
    unsigned long long v3[10];  // rsi
    unsigned long long v4[10];  // rbx
    unsigned long v5;  // rdx

    v2 = v1->field_18;
    v3[0] = 0;
    v3[4] = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[8] = 0;
    v3[9] = 0;
    if (v2 <= 9223372036854773759)
    {
        v4 = v3;
        v4[5] = 0;
        v4[3] = (unsigned int)sub_409680();
        v4[4] = 0;
        v4[7] = -0x100000000;
        v4[6] = v5;
        return -0x100000000;
    }
    __assert_fail(); /* do not return */
}

int sub_403156()
{
}

int sub_4036c0()
{
    unsigned long long v1;  // rbx
    unsigned int v3;  // ebp
    unsigned int *v5;  // r12
    unsigned long long v6;  // rax

    v1 = 0;
    if (rbp<4> >= 0)
    {
        rbp<4> = sub_405410();
        v1 = fdopen(rbp<4>, "r");
        if (v1 == 0)
        {
            close(v3);
            *(__errno_location()) = *(v5);
        }
    }
    v6 = v1;
    return v6;
}

int sub_408d70()
{
}

extern int512_t g_612640;

int sub_408950()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_612640 : v1));
}

extern unsigned int g_40d920;
extern unsigned int g_40d92d;
extern unsigned int g_40d93c;

int sub_404580()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v4;  // rbp

    sub_409e80();
    v4 = dcgettext(0x0, 0x40d92d, 0x5);
    dcgettext(0x0, 0x40d93c, 0x5);
    v1 = 0;
    v0 = dcgettext(0x0, 0x40d920, 0x5);
    sub_409550();
    return v0;
}

extern int512_t g_40ddce;
extern int512_t g_40ddd2;

int sub_407660()
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
        v3 = sub_40b320();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40ddce : 4251097);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40ddd2 : 4251093);
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

int sub_4096c0()
{
}

int sub_4040ca()
{
}

int sub_404bdd()
{
}

