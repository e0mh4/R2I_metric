#include "decompile_angr.h"
int sub_407280()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_407220();
}

int sub_4063d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_4061a0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4063f0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_4038b0()
{
}

extern int512_t g_60c480;

int sub_4051c0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60c480 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60c480 : v1) + 4)) = v3;
    return v2;
}

int sub_4061c0()
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
        sub_4063f0(); /* do not return */
    }
}

int sub_405480()
{
}

int sub_406350()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4061a0();
}

int sub_4036b0()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rbx
    unsigned long long v3[6];  // rax

    v2 = v1;
    v3 = malloc(0x30);
    if (v3 != 0)
    {
        v3[0] = 0;
        v3[4] = v2;
        v3[5] = v2;
    }
    return v3;
}

int sub_405580()
{
}

int sub_4058e0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long *v3;  // rdi
    unsigned long long v4;  // rdi

    v0 = v2;
    *(v3) = 0;
    v4 = &v3[3];
    *((long long *)(v4 - 16)) = 0;
    *((long long *)(v4 - 8)) = 0;
    _obstack_begin();
    _obstack_begin();
}

int sub_405380()
{
}

int sub_4052ab()
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
    v7 = (unsigned int)sub_403d50();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4061a0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_403d50();
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

int sub_405590()
{
}

int sub_405780()
{
}

extern int512_t g_4089f6;
extern int512_t g_4089fa;

int sub_403c50()
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
        v3 = sub_4078a0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_4089f6 : 4229633);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_4089fa : 4229629);
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

int sub_405610()
{
}

extern unsigned long long g_60c368;

int sub_4037f0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60c368 = v1;
    return v2;
}

extern unsigned int g_407f70;
extern unsigned int g_407f9f;
extern unsigned int g_407fb0;
extern unsigned int g_407fcb;
extern unsigned int g_407fe3;
extern unsigned int g_407fe9;
extern unsigned int g_408810;
extern unsigned int g_408880;
extern unsigned int g_4088b8;
extern unsigned int g_408900;
extern unsigned int g_409740;
extern unsigned int g_409c07;
extern unsigned int g_60c2bc;
extern char g_60c318;
extern unsigned long long g_60c320;
extern char g_60c328;
extern void g_60c32c;
extern char g_60c330;
extern char g_60c331;
extern char g_60c332;
extern char g_60c333;
extern char g_60c334;
extern unsigned long long g_60c338;
extern unsigned long long g_60c340;
extern unsigned long long g_60c348;
extern unsigned long long g_60c350;
extern unsigned long long g_60c358;
extern unsigned long long g_60c500;
extern unsigned long long stderr;
extern unsigned long long stdin;
extern unsigned long long stdout;

int main()
{
    unsigned long long v0;  // [bp-0x218]
    unsigned long v1;  // [bp-0x208]
    unsigned long|unsigned int * v2;  // [bp-0x200]
    unsigned long|unsigned int *|unsigned long long|char v3;  // [bp-0x1f8]
    char v4;  // [bp-0x1ed]
    unsigned int v5;  // [bp-0x1ec]
    char v6;  // [bp-0x1e8]
    unsigned int v7;  // [bp-0x1d0]
    unsigned long v8;  // [bp-0x1b8]
    unsigned long long v9;  // [bp-0x158]
    unsigned long v10;  // [bp-0x150]
    unsigned long long v12;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v19;  // rax
    unsigned long v20;  // rdi
    unsigned long v21;  // rsi
    unsigned long long v22;  // rax
    unsigned long long v23;  // r14
    unsigned long long v24;  // r14
    unsigned long long v25;  // rbx
    void *v26;  // rbx
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rax
    uint128_t v31;  // xmm0
    unsigned long long v33;  // xmm1lq
    uint128_t v35;  // xmm1
    unsigned long long v36;  // xmm1lq
    unsigned long long v38;  // r14
    unsigned long long v39;  // rax
    unsigned long long v40;  // rbx
    unsigned long long v41;  // r14
    unsigned long long v42;  // r12
    unsigned long long v43;  // r13
    char *v44;  // r15
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned int v47;  // edi
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rbx
    unsigned long long v53;  // r12
    unsigned long|unsigned long long|unsigned int v54;  // r13
    char *v55;  // r15
    char *v56;  // rdi
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rsi
    unsigned long long v59;  // cc_dep1
    unsigned long long v60;  // cc_dep2
    unsigned long v61;  // d
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // rax
    unsigned long long v64;  // rax
    unsigned long long v65;  // r13
    unsigned long long v66;  // rax
    unsigned long v67;  // rax
    unsigned long long v68;  // r15
    unsigned long long v69;  // r13
    unsigned long long v72;  // r15
    unsigned long long v74;  // rbp
    unsigned long long v80;  // rax
    unsigned long long v81;  // r13

    v12 = 0;
    sub_403bb0();
    setlocale(0x6, 0x409c07);
    bindtextdomain(0x407f70, 0x408810);
    textdomain(0x407f70);
    sub_407e80();
    g_60c320 = getpagesize();
    setvbuf(stdout, NULL, 0x1, 0x0);
    g_60c331 = 0;
    g_60c332 = 0;
    g_60c333 = 0;
    g_60c334 = 0;
    g_60c330 = 0;
    g_60c338 = 0;
    g_60c340 = 0;
    g_60c348 = 0;
    g_60c350 = 0;
    g_60c358 = 0;
    while (true)
    {
        v16 = sub_4072a0();
        if ((unsigned int)v16 == -1)
        {
            if (g_60c333 == 0 && g_60c331 == 0 && g_60c332 == 0 && g_60c330 == 0 && g_60c334 == 0)
            {
                g_60c331 = 1;
                g_60c333 = 1;
                g_60c334 = 1;
            }
            v19 = (int)g_60c2bc;
            if (v12 != 0)
            {
                if ((unsigned int)v20 <= g_60c2bc)
                {
                    v22 = strcmp(v12, "-");
                    if (v22 == 0)
                    {
                        v26 = stdin;
                    }
                    else
                    {
                        v26 = fopen(v12, "r");
                        if (v26 == 0)
                        {
                            v27 = (unsigned int)sub_405580();
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x407fb0, 0x5));
                        }
                    }
                    if (v22 == 0 || v26 != 0)
                    {
                        v1 = stack_base + -488;
                        v28 = __fxstat(0x1, fileno(v26), (unsigned int)(stack_base + -488));
                        if (((unsigned short)v7 & 0xf000) == 0x8000 && v28 == 0)
                        {
                            v2 = v8;
                            sub_403ab0();
                            v33 = 0x4164000000000000;
                            if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1)
                            {
                                sub_403ab0();
                                v35 = 0;
                                v36 = 0x3fe0000000000000;
                                v33 = xmm1<16> * xmm0<16>;
                            }
                            if (((char)(BinaryOp CmpF & 69) & 1) == 0)
                            {
                                sub_4058e0();
                                v4 = sub_405980();
                                if (v4 != 0)
                                {
                                    v39 = sub_406430();
                                    if (v39 == 0)
                                    {
                                        v52 = v9;
                                        v3 = v10;
                                        v41 = (unsigned int)sub_4036b0();
                                        if (v41 != 0 && v9 != 0)
                                        {
                                            v51 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x98<64>, rbx<8>, cc_ndep<8>);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else
                {
                    v25 = (unsigned int)sub_405580();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x407f9f, 0x5));
                    __fprintf_chk(stderr, 0x1, 0x409740, dcgettext(0x0, 0x408880, 0x5));
                }
            }
            else
            {
                if ((unsigned int)v20 > g_60c2bc)
                {
                    v52 = v20 - v19;
                    v3 = v21 + v19 * 8;
                    v24 = (unsigned int)sub_4036b0();
                    if (v24 != 0)
                    {
                        v4 = 0;
                        v1 = stack_base + -488;
                    }
                }
                else
                {
                    v23 = (unsigned int)sub_4036b0();
                    if (v23 != 0)
                    {
                        v4 = 0;
                        v2 = (unsigned long long)(unsigned int)sub_4061a0();
                        v3 = &g_60c318;
                        v1 = stack_base + -488;
                    }
                }
            }
        }
        else if ((unsigned int)v16 != 99)
        {
            if (v16 <= 99)
            {
                if ((unsigned int)v16 == -130)
                {
                    sub_403350(); /* do not return */
                }
                if ((unsigned int)v16 == 76)
                {
                    g_60c330 = 1;
                }
                if ((unsigned int)v16 == -131)
                {
                    v0 = 0;
                    sub_406060();
                    exit(0x0); /* do not return */
                }
            }
            else if ((unsigned int)v16 == 109)
            {
                g_60c332 = 1;
            }
            else if (v16 > 109)
            {
                if ((unsigned int)v16 == 119)
                {
                    g_60c333 = 1;
                }
                if ((unsigned int)v16 == 128)
                {
                    v12 = g_60c500;
                }
            }
            else if ((unsigned int)v16 == 108)
            {
                g_60c334 = 1;
            }
        }
        if ((unsigned int)v16 == 99)
        {
            g_60c331 = 1;
        }
        if ((unsigned int)v16 == -1 && (unsigned int)v20 > g_60c2bc && v12 != 0 || v16 <= 99 && (unsigned int)v16 != 99 && (unsigned int)v16 != 76 && (unsigned int)v16 != -131 && (unsigned int)v16 != -130 && (unsigned int)v16 != -1 || v16 <= 109 && v16 > 99 && (unsigned int)v16 != 99 && (unsigned int)v16 != 109 && (unsigned int)v16 != 108 && (unsigned int)v16 != -1 || v16 > 99 && (unsigned int)v16 != 99 && v16 > 109 && (unsigned int)v16 != 128 && (unsigned int)v16 != 119 && (unsigned int)v16 != 109 && (unsigned int)v16 != -1)
        {
            sub_403350(); /* do not return */
        }
        if ((unsigned int)v20 <= g_60c2bc && ((unsigned short)v7 & 0xf000) == 0x8000 && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((char)(BinaryOp CmpF & 69) & 1) != 0 || (unsigned int)v20 <= g_60c2bc && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((unsigned short)v7 & 0xf000) != 0x8000 || (unsigned int)v20 <= g_60c2bc && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && v28 != 0)
        {
            v38 = (unsigned int)sub_4036e0();
            if (v38 != 0)
            {
                v4 = 0;
            }
        }
        if ((unsigned int)v20 <= g_60c2bc && ((unsigned short)v7 & 0xf000) == 0x8000 && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((char)(BinaryOp CmpF & 69) & 1) == 0 && v4 != 0 && v39 != 0 || (unsigned int)v20 <= g_60c2bc && ((unsigned short)v7 & 0xf000) == 0x8000 && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((char)(BinaryOp CmpF & 69) & 1) == 0 && v4 == 0)
        {
            v40 = (unsigned int)sub_405580();
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4088b8, 0x5));
        }
        if ((unsigned int)v20 <= g_60c2bc && ((unsigned short)v7 & 0xf000) == 0x8000 && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((char)(BinaryOp CmpF & 69) & 1) == 0 && v4 != 0 && v39 == 0 && v41 != 0 && v9 == 0 || ((unsigned int)v20 <= g_60c2bc && ((unsigned short)v7 & 0xf000) == 0x8000 && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((char)(BinaryOp CmpF & 69) & 1) != 0 || (unsigned int)v20 <= g_60c2bc && v28 == 0 && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && ((unsigned short)v7 & 0xf000) != 0x8000 || (unsigned int)v20 <= g_60c2bc && (unsigned int)v16 == -1 && v12 != 0 && (v22 == 0 || v26 != 0) && v28 != 0) && v38 != 0)
        {
            v52 = 0;
            v2 = (unsigned long long)(unsigned int)sub_4061a0();
            *(v2) = 1;
        }
        if (...)
        {
            v2 = (unsigned long long)(unsigned int)sub_4061a0();
        }
        if (...)
        {
            v50 = g_60c334 + g_60c333 + g_60c332 + g_60c331 + g_60c330;
            if (g_60c334 + g_60c333 + g_60c332 + g_60c331 + g_60c330 != 1)
            {
                v52 = 1;
            }
            else
            {
                v52 = 1;
                *(v2) = 1;
            }
        }
        if (...)
        {
            v42 = 0;
            v43 = &v2[2];
            do
            {
                v44 = *((long long *)(v3 + v42 * 8));
                if (*((long long *)(v3 + (v42 << 3))) != 0)
                {
                    v45 = strcmp(v44, "-");
                    if (v45 != 0)
                    {
                        v46 = __xstat(0x1, (unsigned int)v44, v43);
                    }
                }
                if (*((long long *)(v3 + (v42 << 3))) == 0 || v45 == 0)
                {
                    v46 = __fxstat(0x1, 0x0, v43);
                }
                v42 += 1;
                *((unsigned long long *)(v43 - 8)) = v46;
                v43 += 152;
            }
            while (v52 != v42);
            v51 = v2;
            v50 = 1;
            if (*(v2) <= 0)
            {
                v47 = 1;
                v49 = 0;
                v48 = 0;
                do
                {
                    if (*((int *)v51) == 0)
                    {
                        if (((unsigned short)*((int *)(v51 + 32)) & 0xf000) != 0x8000)
                        {
                            v47 = 7;
                        }
                        else
                        {
                            v49 += *((long long *)(v51 + 56));
                        }
                    }
                    v48 += 1;
                    v51 += 152;
                }
                while (v52 != v48);
                for (v50 = 1; v49 > 9; v49 = (0 CONCAT v49) % 10)
                {
                    v50 += 1;
                }
                v50 = (v50 < v47? (unsigned int)v47 : (unsigned int)rcx<8>);
            }
        }
        if (...)
        {
            *((unsigned long long *)&g_60c32c) = v50;
            v53 = 0;
            v54 = 1;
            while (true)
            {
                v55 = (unsigned long long)(unsigned int)sub_403720();
                if (v55 == 0)
                {
                    break;
                }
                if (v12 != 0)
                {
                    v56 = "-";
                    v57 = 2;
                    v58 = v12;
                    while (v57 != 0)
                    {
                        v57 -= 1;
                        v59 = (char)*((char *)v58);
                        v60 = *(v56);
                        v56 = &v56[v61];
                        v58 += v61;
                        break;
                    }
                    v62 = (v59 > v60) - 0 - (v59 < v60);
                    if ((char)v62 == 0)
                    {
                        v63 = strcmp(v55, "-");
                        if (v63 == 0)
                        {
                            v65 = (unsigned int)sub_405580();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x408900, 0x5));
                        }
                        else if (*(v55) != 0)
                        {
                            if (v52 == 0)
                            {
                                v3 = v2;
                            }
                        }
                    }
                    if (((char)v62 == 0 || *(v55) == 0) && (*(v55) == 0 || v63 == 0 || (char)v62 != 0) && (*(v55) == 0 || v63 != 0 || (char)v62 != 0))
                    {
                        v68 = (unsigned int)sub_4037b0();
                        v69 = dcgettext(0x0, 0x407fe9, 0x5);
                        sub_405650();
                        error(0x0, 0x0, "%s:%lu: %s");
                        v54 = 0;
                    }
                }
                else if (*(v55) == 0)
                {
                    dcgettext(0x0, 0x407fe9, 0x5);
                    error(0x0, 0x0, "%s");
                }
                if (*(v55) != 0 || v12 != 0)
                {
                    if ((v12 == 0 || (char)v62 != 0) && (v12 == 0 || *(v55) != 0))
                    {
                        v64 = 0;
                    }
                    if (v12 == 0 || (char)v62 != 0 && *(v55) != 0 || (char)v62 == 0 && *(v55) != 0 && v63 != 0)
                    {
                        if (v52 != 0)
                        {
                            v64 = v53 * 152;
                        }
                        if (v12 == 0 || (char)v62 != 0 || v52 != 0)
                        {
                            v3 = v64 + (char *)v2;
                            v66 = strcmp(v55, "-");
                            if (v66 == 0)
                            {
                                g_60c328 = 1;
                                v51 = (unsigned int)sub_402a20();
                            }
                        }
                        if (((char)v62 == 0 || v66 != 0) && (v52 == 0 || v66 != 0) && (v66 != 0 || v12 != 0))
                        {
                            v67 = open(v55, 0x0, v51);
                            if (v5 != -1)
                            {
                                *((unsigned long *)&v5) = v67;
                                v3 = sub_402a20();
                                v51 = v3;
                            }
                            if (v5 == -1 || close(v5) != 0)
                            {
                                v72 = (unsigned int)sub_405650();
                                error(0x0, *(__errno_location()), "%s");
                                v51 = 0;
                            }
                        }
                        v54 = (unsigned int)v54 & v51;
                    }
                }
                if ((v63 == 0 || v12 == 0) && ((char)v62 == 0 || v12 == 0) && (*(v55) == 0 || v12 != 0) && (v12 == 0 || *(v55) != 0))
                {
                    v54 = 0;
                }
                if (v52 == 0)
                {
                    *(v2) = 1;
                }
                v53 += 1;
            }
            if (*((int *)&v6) != 3)
            {
                if (*((int *)&v6) == 4)
                {
                    v54 = 0;
                    v74 = (unsigned int)sub_405650();
                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x407fcb, 0x5));
                }
                else if (*((int *)&v6) != 2)
                {
                    __assert_fail(); /* do not return */
                }
                else
                {
                    if (((char)(v12 == 0) & v54) == 0)
                    {
                        break;
                    }
                    v54 = (unsigned int)*((int *)&v6);
                    if (sub_4037b0() != 0)
                    {
                        break;
                    }
                    g_60c328 = 1;
                    v54 = (unsigned int)sub_402a20();
                }
            }
        }
        if (...)
        {
            sub_4063f0(); /* do not return */
        }
    }
    if (v4 != 0)
    {
        sub_405950();
    }
    if (sub_4037b0() > 1)
    {
        dcgettext(0x0, 0x407fe3, 0x5);
        sub_402850();
    }
    sub_4037d0();
    free(v2);
    if (g_60c328 != 0)
    {
        v80 = close(0x0);
        if (v80 != 0)
        {
            error(0x1, *(__errno_location()), "-");
        }
    }
    if (v80 == 0 || g_60c328 == 0)
    {
        v81 = v54 ^ 1;
        return v81;
    }
}

int sub_4072c0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_406c50();
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[8];
    unsigned long long field_48;
    char padding_50[24];
    char field_68;
    char padding_69[31];
    unsigned long long field_88;
    unsigned long long field_90;
    char padding_98[72];
    unsigned long long field_e0;
    unsigned long long field_e8;
} struct_0;

int sub_4057f0()
{
    void tmp_19;  // tmp #19
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long *v7;  // rdx
    unsigned long long *v8;  // rdx
    unsigned long long v9;  // rax

    v2 = v1;
    if (v1->field_30 == v1->field_28)
    {
        v1->field_68 = v1->field_68 | 2;
    }
    v3 = v2->field_38;
    v4 = v1->field_30 + v1->field_48 & !(v2->field_48);
    v5 = v2->field_20;
    v2->field_30 = v1->field_30 + v1->field_48 & !(v2->field_48);
    if (v4 - v5 > v4 - v5)
    {
        v2->field_30 = v1->field_38;
        v4 = v3;
    }
    v2->field_28 = v4;
    v7 = v2->field_88;
    if (v2->field_90 - v2->field_88 <= 7)
    {
        _obstack_newchunk();
        v7 = v2->field_88;
    }
    *(v7) = v1->field_28;
    v8 = v2->field_e0;
    tmp_19 = v2->field_e8;
    v2->field_88 = v2->field_88 + 8;
    v9 = tmp_19 + -0x1 * v8;
    if (tmp_19 + -0x1 * v8 <= 7)
    {
        v9 = _obstack_newchunk();
        v8 = v2->field_e0;
    }
    *(v8) = v1->field_30 - v1->field_28 - 1;
    v2->field_e0 = v2->field_e0 + 8;
    v2->field_0 = v2->field_0 + 1;
    return v9;
}

int sub_405282()
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

int sub_4077e0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_406430();
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

extern unsigned long long g_409c07;

int sub_407320()
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
        v5 = &g_409c07;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_407840() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern int512_t g_60c480;

int sub_405170()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60c480 : v1)) = v2;
    return &g_60c480;
}

extern struct_0 *g_60c298;
extern unsigned long long g_60c2a0;
extern unsigned long long g_60c2a8;
extern unsigned int g_60c2b0;
extern unsigned long long g_60c380;

int sub_405390()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60c2b0;
    if (g_60c2b0 > 1)
    {
        v2 = &g_60c298[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60c298[(unsigned long long)(g_60c2b0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60c298->field_8 != 6341504)
    {
        v1 = free(g_60c298->field_8);
        g_60c2a0 = 0x100;
        g_60c2a8 = &g_60c380;
    }
    if (g_60c298 != 6341280)
    {
        v1 = free(g_60c298);
        g_60c298 = &g_60c2a0;
    }
    g_60c2b0 = 1;
    return v1;
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_4038f0()
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

int sub_405640()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int _obstack_allocated_p()
{
    struct_0 *v1;  // rdi
    unsigned long long v2[2];  // rax
    unsigned long v3;  // rsi

    v2 = v1->field_8;
    if (v1->field_8 != 0)
    {
        while (true)
        {
            if (v3 > v2 && *(v2) >= v3)
            {
                return 1;
            }
            if (v3 <= v2 || *(v2) < v3)
            {
                v2 = v2[1];
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
}

extern unsigned int g_409738;
extern unsigned int g_409744;
extern unsigned int g_40974b;
extern unsigned int g_40974f;
extern unsigned int g_40975f;
extern unsigned int g_409776;
extern unsigned int g_4097d8;
extern unsigned int g_4098a8;
extern unsigned int g_4098c8;
extern unsigned int g_4098f0;
extern unsigned int g_409918;
extern unsigned int g_409948;
extern unsigned int g_409aa0;

int sub_405c00()
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
    unsigned int v16;  // edi
    unsigned int v17;  // edx
    void *v18;  // rdi
    unsigned long v20;  // r9
    unsigned long v21;  // rsi
    unsigned long long v22;  // r8
    unsigned long long v23;  // r13
    unsigned long long v24;  // r12
    unsigned long long v25;  // r15
    unsigned long long v26;  // r14
    unsigned long long v27;  // r14
    unsigned long v28;  // rbx
    unsigned long v29;  // rax
    unsigned long long v30;  // r8
    unsigned long v31;  // rax
    unsigned long v32;  // rax

    v13 = v12;
    if (v14 != 0)
    {
        __fprintf_chk(v15, 0x1, 0x409738, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x409744, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x409aa0, dcgettext(0x0, 0x40974b, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4097d8, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40974f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40975f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x409776, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x4098a8, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x4098c8, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x4098f0, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x409918, 0x5);
        *((unsigned long long [9])&v5) = v12[6];
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 8:
        v23 = v13[6];
        v24 = v13[5];
        v25 = v13[4];
        *((unsigned long long [9])&v8) = v13[7];
        v26 = v13[3];
        *((unsigned long long [9])&v6) = v13[2];
        *((unsigned long long [9])&v7) = v13[1];
        v32 = dcgettext(0x0, 0x409948, 0x5);
    case 9:
        v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v30 = v12[1];
        v23 = v13[6];
        v24 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v25 = v13[4];
        v26 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v30;
    default:
        v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v22 = v12[1];
        v23 = v13[6];
        v24 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v25 = v13[4];
        v26 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v22;
    }
    v32 = dcgettext(0x0, v21, 0x5);
    v5 = v9;
    v4 = v27;
    __fprintf_chk((unsigned int)v18, 0x1, v29, v28);
    return v4;
    return __fprintf_chk((unsigned int)v18, 0x1, v29, *((long long *)&v10));
    v4 = v8;
    v3 = v23;
    v2 = v24;
    v1 = v25;
    v0 = v26;
    return __fprintf_chk((unsigned int)v18, 0x1, v29, *((long long *)&v10));
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[40];
    char field_50;
} struct_0;

int _obstack_free()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rbp
    struct_0 *v3;  // rdi
    struct_0 *v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12
    unsigned long long v8[2];  // rsi

    v2 = v1;
    v8 = v3->field_8;
    v4 = v3;
    if (v3->field_8 != 0)
    {
        while (true)
        {
            if (v8 < v2)
            {
                v5 = *(v8);
                if (*(v8) >= v2)
                {
                    v4->field_18 = v2;
                    v4->field_10 = v2;
                    v4->field_20 = v5;
                    v4->field_8 = v8;
                    return v5;
                }
            }
            if (*(v8) < v2 || v8 >= v2)
            {
                v6 = v8[1];
                v4->field_50 = v4->field_50 | 2;
                v8 = v6;
                if (v6 == 0)
                {
                    break;
                }
            }
        }
    }
    if (v2 != 0)
    {
        abort(); /* do not return */
    }
    return sub_407510();
}

extern char g_60c480;

int sub_4051e0()
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
    v3 = (v2 == 0? &g_60c480 : v2);
    *((int *)(tmp_11? &g_60c480 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60c480;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60c480;
        abort(); /* do not return */
    }
}

extern unsigned int g_409acf;
extern unsigned int g_60c258;

int sub_4063f0()
{
    dcgettext(0x0, 0x409acf, 0x5);
    error(g_60c258, 0x0, "%s");
    abort(); /* do not return */
}

extern unsigned int g_60c2b4;
extern unsigned int g_60c2b8;
extern unsigned int g_60c2bc;
extern unsigned int g_60c4c0;
extern unsigned int g_60c4c4;
extern unsigned int g_60c4c8;
extern unsigned long long g_60c4d0;
extern unsigned long long g_60c500;

int sub_407220()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60c4c0 = g_60c2bc;
    g_60c4c4 = g_60c2b8;
    v1 = (unsigned int)v2;
    v0 = &g_60c4c0;
    g_60c2bc = g_60c4c0;
    g_60c500 = g_60c4d0;
    g_60c2b4 = g_60c4c8;
    return sub_406c50();
}

int sub_405760()
{
}

int sub_405450()
{
}

int sub_4037b0()
{
    unsigned long long v1[6];  // rdi

    if (*(v1) != 0)
    {
        return v1[1];
    }
    return v1[5] - v1[4] >> 3;
}

extern uint128_t g_60c480;
extern uint128_t g_60c490;
extern uint128_t g_60c4a0;
extern unsigned long long g_60c4b0;

int sub_40559f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60c4b0;
    *((uint128_t *)&v0) = g_60c480;
    *((uint128_t *)&v1) = g_60c490;
    *((uint128_t *)&v2) = g_60c4a0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_404f80();
}

extern char g_60c308;
extern unsigned long long g_60c310;

int sub_4027f1()
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

    if (g_60c308 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60c310 >= 0)
            {
                break;
            }
            g_60c310 = g_60c310 + 1;
            *((long long *)(6340160 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60c308 = 1;
        return sub_40279b();
    }
    return v4;
}

extern unsigned long long __progname_full;
extern unsigned long long g_60c370;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403bb0()
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
        g_60c370 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_406430()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4064b0() != 0)
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

int sub_406270() { crash_skku;
}
extern uint128_t g_60c480;
extern uint128_t g_60c490;
extern uint128_t g_60c4a0;
extern unsigned long long g_60c4b0;

int sub_4056c0()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60c480;
    *((uint128_t *)&v1) = g_60c490;
    *((uint128_t *)&v2) = g_60c4a0;
    v4 = g_60c4b0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_404f80();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_406000()
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
    return sub_405c00();
}

extern unsigned int g_407f55;
extern unsigned int g_408320;
extern unsigned int g_408348;
extern unsigned int g_408390;
extern unsigned int g_408448;
extern unsigned int g_408480;
extern unsigned int g_4085b0;
extern unsigned int g_4086e0;
extern unsigned int g_408710;
extern unsigned int g_408770;
extern unsigned int g_4087b8;
extern unsigned int g_4087d8;
extern unsigned long long g_60c370;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_403350()
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
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x408320, 0x5), g_60c370);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408348, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408390, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408448, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408480, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4085b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4086e0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408710, 0x5), stdout);
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
            v30 = "wc";
            v31 = 3;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407f55, 0x5));
            v39 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407f55, 0x5));
            v38 = setlocale(0x5, 0x0);
            if (v38 != 0)
            {
                v40 = strncmp(v38, "en_", 0x3);
            }
            if (v38 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4087b8, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v39, "en_", 0x3) != 0) && (v3 == 0 || v39 != 0) && (v38 != 0 || v3 != 0) && (v3 != 0 || v40 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408770, 0x5));
        }
        if (v3 != 0 || v38 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4087b8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4087d8, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_407300()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_406c50();
}

int sub_405950()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    _obstack_free();
    _obstack_free();
}

int sub_405fe0()
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

int sub_4036e0()
{
    unsigned long long v1[5];  // rax
    unsigned long v2;  // rdi

    v1 = malloc(0x30);
    if (v1 != 0)
    {
        v1[0] = v2;
        v1[2] = 0;
        v1[3] = 0;
        v1[1] = 0;
        v1[4] = 0;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_4074f0()
{
    struct_0 *v1;  // rdi

    if ((v1->field_50 & 1) != 0)
    {
        /* goto *((long long *)&v1->padding_0[56]); */
    }
    else
    {
        /* goto *((long long *)&v1->padding_0[56]); */
    }
}

extern int512_t g_60c480;

int sub_405160()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60c480 : v1));
}

extern char g_60c360;

int sub_403800()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60c360 = v1;
    return v2;
}

int sub_4038c0()
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

extern unsigned int g_408955;
extern unsigned int g_60c258;
extern char g_60c360;
extern unsigned long long g_60c368;

int sub_403810()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4077e0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60c360 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x408955, 0x5);
            if (g_60c368 != 0)
            {
                sub_405620();
                error(0x0, *(v2), "%s:");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60c360 != 0)
    {
        v3 = sub_4077e0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60c360 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60c258);
        error(0x0, *(v2), "%s");
    }
}

int sub_405430()
{
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_409c07;
extern char g_60c4f8[2];

int sub_4078a0()
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

    v9 = g_60c4f8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_409c07 : (unsigned long long)nl_langinfo(0xe));
    if (g_60c4f8 == 0)
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
            v9 = &g_409c07;
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
                                    v9 = &g_409c07;
                                    v10 = (tmp_10 == 0? &g_409c07 : tmp_10);
                                    free(NULL);
                                    sub_406430();
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
                            v10 = (tmp_10 == 0? &g_409c07 : tmp_10);
                            sub_406430();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (...)
                    {
                        v9 = &g_409c07;
                    }
                    else if (...)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_409c07;
            free(v17);
        }
        *((char *[2])&g_60c4f8[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_409c07 : tmp_10), v9);
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

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

int _obstack_newchunk()
{
    void tmp_23;  // tmp #23
    void tmp_102;  // tmp #102
    void tmp_108;  // tmp #108
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi
    unsigned long v3;  // r13
    struct_1 *v4;  // rbp
    char v5;  // al
    unsigned long v6;  // rsi
    unsigned long v9;  // rbx
    unsigned long long v10;  // rcx
    struct_0 *v11;  // r12
    unsigned long long v12[2];  // r14
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax

    v1 = 0;
    v3 = v2->field_18 - v2->field_10;
    v4 = v2->field_8;
    v5 = [D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rsi<8>, Sub(Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE), Load(addr=(rdi<8> + 0x10<64>), size=8, endness=Iend_LE)), cc_ndep<8>);
    tmp_23 = v6 + v2->field_18 - v2->field_10 + v2->field_30;
    tmp_102 = v6 + v2->field_18 - v2->field_10 + v2->field_30 + (v2->field_18 - v2->field_10 >> 3) + 100;
    tmp_108 = v6 + v2->field_18 - v2->field_10 + v2->field_30 <= v2->field_0;
    v9 = (tmp_102 <= (tmp_108? v2->field_0 : tmp_23)? (v6 + v2->field_18 - v2->field_10 + v2->field_30 <= v2->field_0? v2->field_0 : v6 + v2->field_18 - v2->field_10 + v2->field_30) : tmp_102);
    if (rax<8> == 0)
    {
        v10 = (char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Add(rsi<8>, (Load(addr=(rdi<8> + 0x18<64>), size=8, endness=Iend_LE) - Load(addr=(rdi<8> + 0x10<64>), size=8, endness=Iend_LE))), Load(addr=(rdi<8> + 0x30<64>), size=8, endness=Iend_LE), cc_ndep<8>);
        if (v10 == 0)
        {
            v11 = v2;
            v12 = (unsigned long long)(unsigned int)sub_4074f0();
            if (v12 != 0)
            {
                v11->field_8 = v12;
                v12[1] = v4;
                v11->field_20 = (char *)v12 + v9;
                v12[0] = (char *)v12 + v9;
                v14 = &((unsigned long long [2])&((char *)v12)[v11->field_30])[2] & !(v11->field_30);
                v15 = memcpy(&((unsigned long long [2])&((char *)v12)[v11->field_30])[2] & !(v11->field_30), v11->field_10, v3);
                if ((v11->field_50 & 2) == 0)
                {
                    v15 = !(v11->field_30) & &((struct struct_1 *)&v4->padding_0[v11->field_30])[1];
                    if (v11->field_10 == (!(v11->field_30) & &((struct struct_1 *)&v4->padding_0[v11->field_30])[1]))
                    {
                        v12[1] = v4->field_8;
                        v15 = sub_407510();
                    }
                }
                v11->field_10 = v14;
                v11->field_18 = v3 + v14;
                v11->field_50 = v11->field_50 & 253;
                return v15;
            }
        }
    }
    if (v12 == 0 || rax<8> != 0 || v10 != 0)
    {
        sub_4074b0(); /* do not return */
    }
}

extern unsigned int g_409792;
extern unsigned int g_4097bd;
extern unsigned int g_4099f0;

int sub_406120()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409792, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4097bd, 0x5));
    dcgettext(0x0, 0x4099f0, 0x5);
}

int sub_405ba0() { crash_skku;
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

int sub_4064f0()
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

int sub_405650()
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
    return sub_404f80();
}

int sub_406550()
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

extern unsigned long long g_60be30;

int sub_407e98()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60be30;
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int _obstack_memory_used()
{
    struct_0 *v1;  // rdi
    unsigned long long v2[2];  // rdx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    v2 = v1->field_8;
    v3 = 0;
    if (v1->field_8 != 0)
    {
        do
        {
            v4 = (unsigned long long [2])(*(v2) + -0x1 * v2);
            v2 = v2[1];
            v3 += v4;
        }
        while (v2 != 0);
        return v3;
    }
    return 0;
}

int sub_405510()
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
    return sub_404f80();
}

int sub_402848() { crash_skku;
}
int sub_406200()
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
            sub_4063f0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

double sub_4039f0()
{
    uint128_t v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    uint128_t|unsigned long long v6;  // xmm0
    unsigned long long v7;  // rax
    uint128_t v8;  // xmm0
    unsigned long long v9;  // xmm0lq
    uint128_t v10;  // xmm0
    unsigned long long v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // xmm1lq
    uint128_t v14;  // xmm0

    *((unsigned long long *)&v0) = sysconf(0x55);
    v5 = sysconf(0x1e);
    v6 = 0;
    v6 = (long long)v0;
    if (((char)(BinaryOp CmpF & 69) & 1) == 0)
    {
        v12 = 0;
        v13 = v5;
    }
    if (((char)(BinaryOp CmpF & 69) & 1) != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0)
    {
        v7 = sysinfo((unsigned int)&v1);
        v8 = 0;
        v9 = 0x4190000000000000;
        if (v7 != 0)
        {
            return xmm0<16>;
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v6 = 0;
            v6 = v2;
        }
        else
        {
            v10 = 0;
            v11 = v2 >> 1 | (unsigned int)v2 & 1;
            v6 = xmm0<16> * 2;
        }
        v12 = 0;
        v13 = v3;
    }
    if (v7 == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0)
    {
        v14 = v6 * v13;
        return v14;
    }
}

int sub_405730()
{
}

int sub_4057d0()
{
}

int sub_4057b0()
{
}

int sub_4072e0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_407220();
}

extern int512_t g_408980;

int sub_4039d0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al

    v2 = v1;
    v3 = (char)v1 % 32;
    return (unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)&g_408980)[4 * (unsigned long long)(unsigned int)(rax<4> & 7)]) >> ((char)v1 & 31)) & 1;
}

int sub_406370()
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
        sub_4063f0(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    char field_50;
} struct_0;

int _obstack_begin_1()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rcx
    unsigned long v3;  // r8
    unsigned long v4;  // r9

    v1->field_50 = v1->field_50 | 1;
    v1->field_38 = v2;
    v1->field_40 = v3;
    v1->field_48 = v4;
}

int sub_405460()
{
}

int sub_4064b0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4064f0();
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_0;

int sub_403970()
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

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_2 *field_20;
} struct_1;

extern unsigned int g_409ae0;
extern unsigned int g_409b00;
extern unsigned int g_409b30;
extern unsigned int g_409b50;
extern unsigned int g_409b80;
extern unsigned int g_409bd1;
extern unsigned long long stderr;

int sub_406630()
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
    struct_1 *v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x10]
    char v11;  // [bp+0x18]
    char *v12;  // r14
    char *v13;  // rdx
    unsigned long v14;  // r8
    char *v15;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v17;  // r13
    unsigned long long v18;  // rcx
    unsigned long long|unsigned long long * v19;  // rbx
    unsigned long|unsigned long long|unsigned int v20;  // r12
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
    unsigned long long|unsigned long long * v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v43;  // rbp
    unsigned long long v46;  // rax
    unsigned int *v47;  // rdx
    unsigned long long v48;  // r14

    v12 = v9->field_20;
    v3 = v13;
    v2 = v14;
    v15 = v9->field_20;
    *((struct struct_2 *)&v5) = *(v9->field_20);
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
    if (*(v9->field_20) == 61 || *(v9->field_20) == 0)
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
            if (v22 != 0 || v23 != v17)
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
                            else if (*((int *)(v19 + 24)) != *((int *)(v27 + 24)) || *((int *)(v19 + 8)) != *((int *)(v27 + 8)) || v29 != 0 || *((long long *)(v19 + 16)) != *((long long *)(v27 + 16)))
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
                    if (v4 != 0 || v1 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409ae0, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409b00, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x409bd1, *((long long *)&v11));
                                        v39 = stderr;
                                    }
                                    v43 += 1;
                                    v40 = &v40[4];
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
            if ((*(v19) == 0 || v22 == 0) && (*(v19) == 0 || v23 == v17) && (v22 == 0 || v4 == 0) && (v22 == 0 || v1 == 0) && (v23 == v17 || v4 == 0) && (v23 == v17 || v1 == 0))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409b80, 0x5), *(v34));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409b50, 0x5), *(v34));
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
        if (...)
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
    if (*((long long *)v18) == 0 && v29 == 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0 || v36 == 0 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409b30, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_4073a0()
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

int sub_4037d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3[3];  // rdi

    v0 = v2;
    if (*(v3) != 0)
    {
        free(v3[2]);
    }
}

int sub_407840()
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

int sub_405120()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4063a0();
}

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_407510()
{
    struct_0 *v1;  // rdi

    if ((v1->field_50 & 1) != 0)
    {
        /* goto *((long long *)&v1->padding_0[64]); */
    }
    else
    {
        /* goto *((long long *)&v1->padding_0[64]); */
    }
}

int sub_406060()
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
        return sub_405c00();
    }
}

extern char g_60c330;
extern char g_60c331;
extern char g_60c332;
extern char g_60c333;
extern char g_60c334;
extern unsigned long long stdout[7];

int sub_402850()
{
    char *v1;  // rbp
    unsigned long v2;  // r9
    unsigned long|unsigned int v3;  // rbx
    char *v7;  // rsi
    char *v10;  // rsi
    char *v13;  // rsi
    char *v19;  // rax

    v1 = "%*s";
    v3 = v2;
    if (g_60c334 != 0)
    {
        sub_4038f0();
        v1 = " ";
        __printf_chk(0x1, "%*s");
    }
    if (g_60c333 != 0)
    {
        sub_4038f0();
        v7 = v1;
        v1 = " ";
        __printf_chk(0x1, v7);
    }
    if (g_60c332 != 0)
    {
        sub_4038f0();
        v10 = v1;
        v1 = " ";
        __printf_chk(0x1, v10);
    }
    if (g_60c331 != 0)
    {
        sub_4038f0();
        v13 = v1;
        v1 = " ";
        __printf_chk(0x1, v13);
    }
    if (g_60c330 != 0)
    {
        sub_4038f0();
        __printf_chk(0x1, v1);
    }
    if (v2 != 0)
    {
        if (strchr(v2, 0xa) != 0)
        {
            v3 = sub_405650();
        }
        __printf_chk(0x1, " ", v3);
    }
    v19 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v19) = 10;
    }
    else
    {
        v19 = __overflow();
    }
    return v19;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[56];
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    unsigned long long field_90;
    char padding_98[8];
    unsigned long long field_a0;
    char padding_a8[24];
    char field_c0;
    char padding_c1[15];
    unsigned long long field_d0;
    unsigned long long field_d8;
    unsigned long long field_e0;
    unsigned long long field_e8;
    char padding_f0[8];
    unsigned long long field_f8;
    char padding_100[24];
    char field_118;
} struct_0;

int sub_405980()
{
    unsigned int v0;  // [bp-0x1c]
    void tmp_21;  // tmp #21
    struct_0 *v2;  // rsi
    struct_0 *v3;  // rbx
    void *v4;  // rdi
    char *v5;  // rdx
    char *v7;  // rdx
    unsigned long long v9;  // rax
    char *v10;  // rax
    unsigned long long *v13;  // rdx
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    char v26;  // al

    v3 = v2;
    while (true)
    {
        v9 = fgetc(v4);
        if ((unsigned int)v9 == -1)
        {
            break;
        }
        while (true)
        {
            v5 = v3->field_30;
            if (v3->field_38 != v3->field_30)
            {
                v3->field_30 = v2->field_30 + 1;
                *((unsigned long long *)&v5) = v9;
                if ((unsigned int)v9 != 0)
                {
                    break;
                }
            }
            else
            {
                v0 = v9;
                _obstack_newchunk();
                v7 = v3->field_30;
                v3->field_30 = v3->field_30 + 1;
                *(v7) = v0;
                if (v0 != 0)
                {
                    break;
                }
            }
            sub_4057f0();
            v9 = fgetc(v4);
        }
        if (true)
        {
            v9 = fgetc(v4);
        }
        else if ((unsigned int)v9 == -1 && ((unsigned int)v9 == 0 || v0 == 0) && ((unsigned int)v9 == 0 || v3->field_38 == v3->field_30))
        {
            v10 = v3->field_30;
        }
    }
    v10 = v3->field_30;
    if (v2->field_30 == v3->field_38)
    {
        _obstack_newchunk();
        v10 = v3->field_30;
    }
    v3->field_30 = &v10[1];
    *(v10) = 0;
    sub_4057f0();
    v13 = v3->field_88;
    if (v3->field_90 - v3->field_88 <= 7)
    {
        _obstack_newchunk();
        v13 = v3->field_88;
    }
    *(v13) = 0;
    v15 = v3->field_80;
    v16 = v3->field_88 + 8;
    v3->field_88 = v3->field_88 + 8;
    if (v16 == v15)
    {
        v3->field_c0 = v3->field_c0 | 2;
    }
    tmp_21 = v16 + v3->field_a0;
    v17 = v3->field_78;
    v18 = tmp_21 & !(v3->field_a0);
    v19 = v3->field_90;
    v3->field_88 = tmp_21 & !(v3->field_a0);
    if (v18 - v17 > v18 - v17)
    {
        v3->field_88 = v18;
        v18 = v19;
    }
    v3->field_8 = v15;
    v20 = v3->field_e0;
    v21 = v3->field_d8;
    v3->field_80 = v18;
    if (v20 == v21)
    {
        v3->field_118 = v3->field_118 | 2;
    }
    tmp_21 = v20 + v3->field_f8;
    v22 = v3->field_d0;
    v23 = tmp_21 & !(v3->field_f8);
    v24 = v3->field_e8;
    v3->field_e0 = tmp_21 & !(v3->field_f8);
    if (v23 - v22 > v23 - v22)
    {
        v3->field_e0 = v23;
        v23 = v24;
    }
    v3->field_d8 = v23;
    v3->field_10 = v21;
    v26 = ferror((unsigned int)v4) == 0;
    return rax<8>;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern int512_t g_60c480;

int sub_405180()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60c480 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60c480 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_405620()
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

    v10 = sub_4018d0();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6340144 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_406240()
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
        sub_4063f0(); /* do not return */
    }
}

int sub_405492()
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
    return sub_404f80();
}

int sub_405790()
{
}

int sub_4072a0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_407220();
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

extern unsigned int g_409ba8;
extern unsigned int g_409bec;
extern unsigned long long stderr;

int sub_406c50()
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
    unsigned long long|unsigned int v24;  // r9
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
                        v5 = v24;
                        sub_406550();
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
                            sub_406550();
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
        v45 = (unsigned int)sub_406630();
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
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409ba8, 0x5), *((long long *)v15));
                    }
                    v0->field_8 = v45;
                    v62 = 0;
                    v63 = *(v50) != 58;
                    v45 = r14<8> * 5 + 58;
                }
            }
        }
    }
    if (...)
    {
        if ((unsigned int)v49 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409bec, 0x5), *((long long *)v15));
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (...)
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
            else if ((unsigned int)v46 != v8->field_0)
            {
                v60 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v60;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x409ba8, 0x5), *((long long *)v15));
                }
                v0->field_8 = v45;
                v64 = 0;
                v65 = *(v50) != 58;
                v45 = r14<8> * 5 + 58;
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
        v45 = (unsigned int)sub_406630();
    }
    v66 = v45;
    return v66;
}

int sub_406300() { crash_skku;
}
int sub_403d50()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
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
    unsigned long long v23;  // [bp-0x40]
    unsigned int *v24;  // [bp+0x8]
    unsigned long long v25;  // [bp+0x10]
    unsigned long long v26;  // [bp+0x18]
    unsigned long long v27;  // rdi
    unsigned long long v28;  // r15
    unsigned long v29;  // r8
    unsigned long long v30;  // rcx
    unsigned long v31;  // r9
    unsigned long|unsigned long long|char v32;  // r10
    unsigned long long v33;  // rbp
    unsigned long long v34;  // r13
    unsigned long long v35;  // r13
    unsigned long long v36;  // r8
    unsigned long long v37;  // r9
    unsigned long long v38;  // r11
    unsigned long|unsigned long long v39;  // rbp
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    char v42;  // al
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rcx
    unsigned long|unsigned long long|unsigned short v45;  // rax
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
    unsigned long long v62;  // r13
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
    unsigned long long|unsigned int|char v76;  // rsi
    unsigned long long v77;  // r13
    unsigned long long v78;  // r14
    unsigned long long v79;  // r12
    unsigned int v80;  // r13d
    unsigned long long v81;  // r11
    char v82;  // dl
    unsigned long long v83;  // rax
    unsigned long long v84;  // cc_dep1
    unsigned long long v85;  // dl
    unsigned long long v86;  // rax
    unsigned long long v87;  // rax
    unsigned long long v88;  // rdx
    unsigned long long v89;  // rax
    unsigned long long v90;  // rax

    v28 = v27;
    v78 = v76;
    v77 = v29;
    v7 = v76;
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
            v25 = (unsigned int)sub_403c50();
            v26 = (unsigned int)sub_403c50();
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
            v77 = (char)(v37 != v79);
            if (v37 == -1)
            {
                v77 = (char)(*((char *)(v7 + v79)) != 0);
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
                                    v76 = (char)((unsigned int)v38 == 2);
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
                                        v77 = v77;
                                        v77 = 0;
                                    }
                                    if ((((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) == 0 || v76 > v75 + 3) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) != 0 || v76 > v75))
                                    {
                                        *((char *)(v27 + v46)) = 92;
                                        v32 = v77;
                                    }
                                case 7:
                                    v39 = 97;
                                case 8:
                                    v76 = 0;
                                    v77 = 0;
                                    v39 = 98;
                                case 13:
                                    v39 = 13;
                                    v44 = 114;
                                    v76 = (unsigned int)v38 == 2;
                                case 32:
                                    v40 = v5;
                                    v39 = 32;
                                    v47 = v5;
                                    v5 = v40;
                                    v77 = 0;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v76 = 0;
                                    v54 = 0;
                                case 35: case 126:
                                    v41 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v40 = v5;
                                case 92:
                                    v43 = v4;
                                    v39 = 92;
                                    v44 = 92;
                                    v76 = v4 & v17 & v8 != 0;
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
                            }
                            else
                            {
                                v86 = 0;
                            }
                        case 8:
                            v39 = 98;
                        case 9:
                            v39 = 116;
                        case 10:
                            v39 = 110;
                            v76 = 0;
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
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v41 = 0;
                            v48 = v5;
                            v76 = 0;
                            v5 = v41;
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
                            v79 += 1;
                            v5 = 0;
                            v76 = (char)((unsigned int)v38 == 2);
                            v35 = 0;
                            v39 = 0;
                            break;
                        }
                    case 7:
                        v39 = 7;
                        v44 = 97;
                        v76 = (unsigned int)v38 == 2;
                    case 8:
                        v39 = 8;
                        v44 = 98;
                        v76 = (unsigned int)v38 == 2;
                    case 9:
                        v39 = 9;
                        v44 = 116;
                        v76 = (unsigned int)v38 == 2;
                        v5 = v17 & (unsigned int)v38 == 2;
                    case 10:
                        v39 = 10;
                        v44 = 110;
                    case 11:
                        v39 = 11;
                        v44 = 118;
                        v76 = (unsigned int)v38 == 2;
                    case 12:
                        v39 = 12;
                        v44 = 102;
                        v76 = (unsigned int)v38 == 2;
                        if (v4 != 0)
                        {
                            v39 = v44;
                            v77 = 0;
                        }
                    case 13:
                        v39 = 13;
                        v44 = 114;
                    case 32:
                        v39 = 32;
                        v76 = (char)((unsigned int)v38 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v76 = (char)((unsigned int)v38 == 2);
                        v34 = 0;
                    case 35: case 126:
                        v76 = (unsigned int)v38 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v76 = (char)((unsigned int)v38 == 2);
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
                            v76 = 0;
                            v39 = 39;
                            break;
                            v77 = ((unsigned int)v4 ^ 1 | (unsigned int)v76) ^ 1;
                            v77 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v76) ^ 1) | v17;
                            v77 = 0;
                            v71 = (unsigned int)((unsigned long long)v24[v39 % 32] >> ((char)v39 & 31)) & 1;
                            v76 = (unsigned int)v38 == 2;
                        }
                        if (v17 == 0)
                        {
                            v76 = (unsigned int)v38 == 2;
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
                            v73 = (char)((unsigned int)v32 ^ 1) & v76;
                            if (((char)((unsigned int)v32 ^ 1) & v76) != 0)
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
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 92;
                            }
                            v75 += 1;
                            v79 += 1;
                        }
                    case 63:
                        if ((unsigned int)v38 != 2)
                        {
                            v39 = 63;
                            v76 = (char)((unsigned int)v38 == 2);
                            v51 = 0;
                            break;
                            v76 = v7;
                            v39 = (char)*((char *)(v76 + 2));
                            v76 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v76 = 0;
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
                            v76 = 0;
                            v77 = 0;
                            v79 = 2;
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
                        v76 = (unsigned int)v38 == 2;
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
                            v75 = (unsigned int)sub_403d50();
                        }
                    }
                }
            }
            if (v6 == 0 && v77 == 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && (v78 == 0 & v14 != 0) == 0 || (char)v84 == 0 && v77 == 0 && ((v80 == 2 & v17) == 0 || v75 != 0) || v77 == 0 && (char)v84 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && v18 == 0)
            {
                v87 = v13;
                if (v13 != 0 && v85 != 0)
                {
                    v88 = (char)*((char *)v87);
                    if (*((char *)v87) != 0)
                    {
                        v89 = v87 - v75;
                        do
                        {
                            if (v78 > v75)
                            {
                                *((unsigned long long *)(v28 + v75)) = v88;
                            }
                            v75 += 1;
                            v88 = (char)*((char *)(v89 + v75));
                        }
                        while ((char)v88 != 0);
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
                v76 = (tmp_38 & 65535) == 0 & v4;
                if (v76 != 0)
                {
                    v76 = v4;
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
                v10 = v38;
                do
                {
                    v55 = v79 + v53;
                    v56 = v7 + v79 + v53;
                    v45 = sub_407320();
                    v57 = v45;
                    if (v45 != 0 && v45 != -2 && v45 != -1)
                    {
                        if ((int)v10 == 2 && v45 != 1 && v17 != 0)
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
                        v38 = (unsigned int)v10;
                        v76 = v4;
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
                        v38 = (unsigned int)v10;
                        if (v76 < v9 && *((char *)v56) != 0)
                        {
                            do
                            {
                                v45 += 1;
                            }
                            while (v45 < v9 && *((char *)(v22 + v45)) != 0);
                            v27 = v45;
                        }
                        v76 = v4;
                        v77 = 0;
                    }
                    if (v45 == 0 || v45 != -2 && (unsigned int)v45 != 0 && v45 != -1)
                    {
                        v27 = v53;
                        v39 = v20;
                        v75 = v21;
                        v32 = (char)v19;
                        v28 = v11;
                        v76 = (unsigned int)v77 ^ 1;
                        v78 = v12;
                        v37 = v9;
                        v38 = (unsigned int)v10;
                        v76 = (char)((unsigned int)v77 ^ 1) & v4;
                    }
                }
                while (v27 <= 1);
                if (v45 == 0 || v45 == -2 || v45 == -1 || (unsigned int)v45 != 0)
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
                v86 = v76;
                *((unsigned long long *)&v4) = v4 & v86;
            }
            if (v76 != 0)
            {
                v9 = v77;
                v76 = 0;
                v62 = v17;
                v63 = v27 + v79;
                v27 = v5;
                while (true)
                {
                    if (v76 != 0)
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
                                v76 = v76;
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
                    if ((v79 < v63 || v76 == 0) && (v62 == 0 || v76 == 0) && (v79 < v63 || v76 != 0))
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
            if (((unsigned int)v38 == 2 || v77 == 0) && ((unsigned int)v38 == 2 || v75 == 0) && ((unsigned int)v38 == 2 || (v80 == 2 & v17) != 0) && (v77 == 0 || v17 != 0) && (v75 == 0 || v17 != 0) && (v17 != 0 || (v80 == 2 & v17) != 0))
            {
                v3 = v26;
                v2 = v25;
                v1 = 0;
                v75 = (unsigned int)sub_403d50();
            }
            if ((v17 == 0 || v45 == 0) && (v17 == 0 || v76 != 0) && ((unsigned int)v38 == 2 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v76) ^ 1) == 0 || v45 == 0) && ((unsigned int)v38 == 2 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v76) ^ 1) == 0 || v76 != 0))
            {
                if (v75 < v78)
                {
                    *((unsigned long long *)(v28 + v75)) = v39;
                }
                v75 += 1;
                v6 = (v77 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v77 == 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && (v78 == 0 & v14 != 0) == 0 || (char)v84 == 0 && v77 == 0 && ((v80 == 2 & v17) == 0 || v75 != 0) || v77 == 0 && (char)v84 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && v18 == 0 || ((unsigned int)v38 == 2 || v77 == 0) && ((unsigned int)v38 == 2 || v75 == 0) && ((unsigned int)v38 == 2 || (v80 == 2 & v17) != 0) && (v77 == 0 || v17 != 0) && (v75 == 0 || v17 != 0) && (v17 != 0 || (v80 == 2 & v17) != 0) || v77 == 0 && v6 != 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0))
            {
                v90 = v75;
                return v90;
            }
        }
        *((char *)v28) = 39;
        v77 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        v18 = v83;
    }
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60c298;
extern uint128_t g_60c2a0;
extern unsigned int g_60c2b0;
extern int512_t g_60c380;

int sub_404f80()
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
    v17 = g_60c298;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60c2b0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60c298 != 6341280)
            {
                v16 = sub_406200();
                g_60c298 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_406200();
                v17 = v15;
                g_60c298 = v15;
                *(v15) = g_60c2a0;
            }
            memset(&v17[(long long)(int)g_60c2b0], 0x0, (int)((unsigned int)v13 + 1 - g_60c2b0) * 16);
            g_60c2b0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4063f0(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_60c2b0 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_403d50();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6341504)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4061a0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_403d50();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_403940()
{
    unsigned int v1;  // edi
    unsigned long long v2;  // rax

    v2 = wcwidth(v1);
    if ((unsigned int)v2 >= 0)
    {
        return v2;
    }
    return (unsigned long long)(char)(iswcntrl(v1) == 0);
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[8];
    char field_50;
} struct_0;

int _obstack_begin()
{
    unsigned long long v0;  // [bp-0x18]
    void tmp_35;  // tmp #35
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct_0 *v4;  // rdi
    unsigned long v5;  // rcx
    unsigned long v6;  // r8
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbx
    struct_0 *v9;  // rbx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbp
    unsigned long v13;  // rsi
    unsigned long long v14[2];  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12

    v4->field_50 = v4->field_50 & 254;
    v4->field_38 = v5;
    v4->field_40 = v6;
    v2 = v7;
    v1 = stack_base + 0;
    v0 = v8;
    v9 = v4;
    if (v10 != 0)
    {
        v12 = v10;
        v11 = v10 - 1;
    }
    else
    {
        v11 = 15;
        v12 = 16;
    }
    v9->field_30 = v11;
    *((int *)&v9->field_0) = (v13 == 0? 4064 : v13);
    v14 = sub_4074f0();
    v9->field_8 = v14;
    if (v14 != 0)
    {
        tmp_35 = v9->field_0;
        v9->field_10 = 0 - v12 & &((unsigned long long [2])&((char *)v14)[v11])[2];
        v9->field_18 = 0 - v12 & &((unsigned long long [2])&((char *)v14)[v11])[2];
        v14[0] = tmp_35 + (char *)v14;
        v9->field_20 = tmp_35 + (char *)v14;
        v14[1] = 0;
        v9->field_50 = v9->field_50 & 249;
        v15 = v0;
        v16 = v2;
        return 1;
    }
    sub_4074b0(); /* do not return */
}

int sub_405740()
{
}

int sub_4061f0()
{
}

extern int512_t g_60c248;

int sub_407e80()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[28];
    unsigned int field_20;
    char padding_24[20];
    unsigned long long field_38;
    unsigned long long field_40;
} struct_0;

extern unsigned int g_407ee4;
extern unsigned int g_408980[4];
extern unsigned long long g_60c320;
extern char g_60c330;
extern char g_60c331;
extern char g_60c332;
extern char g_60c333;
extern char g_60c334;
extern unsigned long long g_60c338;
extern unsigned long long g_60c340;
extern unsigned long long g_60c348;
extern unsigned long long g_60c350;
extern unsigned long long g_60c358;

int sub_402a20()
{
    unsigned long|unsigned long long v0;  // [bp-0x40a0]
    void tmp_9;  // tmp #9
    unsigned long|unsigned int|char v1;  // [bp-0x4098]
    unsigned long long v2;  // [bp-0x4090]
    unsigned long|unsigned long long v3;  // [bp-0x4088]
    unsigned long|unsigned long long v4;  // [bp-0x4080]
    unsigned long v5;  // [bp-0x4078]
    char v6;  // [bp-0x4069]
    unsigned long v7;  // [bp-0x4068]
    unsigned long v8;  // [bp-0x4060]
    unsigned int v9;  // [bp-0x4054]
    unsigned long long v10;  // [bp-0x4050]
    char v11;  // [bp-0x4048]
    char v12;  // [bp-0x4047]
    struct_0 *v14;  // rdx
    struct_0 *v15;  // rbx
    unsigned long v16;  // rsi
    unsigned long long v18;  // r12
    unsigned long long v22;  // rax
    unsigned long long v24;  // r15
    unsigned int v25;  // edi
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rbx
    unsigned long long v29;  // r12
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v33;  // rcx
    char v34;  // cl
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned int v38;  // eax
    char v39;  // al
    unsigned long long v40;  // rax
    unsigned long long v42;  // r13
    unsigned int v43;  // ecx
    unsigned long long v44;  // r13
    unsigned long long v46;  // rax
    unsigned long long v47;  // rcx
    char *v48;  // r14d
    unsigned long long v49;  // r13
    unsigned long long v50;  // r15
    unsigned long long v51;  // rbp
    unsigned long long v52;  // r12
    unsigned long long v53;  // rax
    unsigned long long v54;  // r12
    unsigned long long v55;  // r14
    unsigned long long v56;  // r15
    unsigned long|unsigned long long v57;  // rbx
    unsigned long long v58;  // rax
    unsigned long long v59;  // r13
    unsigned long long v60;  // rbp
    unsigned long long v61;  // rbx
    unsigned long long v62;  // r15
    unsigned long long v63;  // rax
    unsigned long long v64;  // r12
    unsigned long long v65;  // r13
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rbx
    unsigned long long v68;  // r12
    unsigned long long v69;  // r13
    unsigned long long v70;  // r14
    unsigned long v71;  // rcx
    unsigned long long v72;  // rbp
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rbp
    unsigned long long v75;  // r14
    unsigned long long v76;  // r12
    unsigned long long v77;  // rax
    unsigned long long v78;  // r12
    unsigned long long v80;  // rbx
    unsigned long long v81;  // rax
    unsigned long long v82;  // rbx
    unsigned long long v83;  // rbx
    unsigned long v85;  // r12
    unsigned long long v87;  // rax

    v15 = v14;
    v7 = v16;
    v8 = v16;
    if (v16 == 0)
    {
        v8 = dcgettext(0x0, 0x407ee4, 0x5);
    }
    v18 = g_60c331;
    if ((unsigned long long)__ctype_get_mb_cur_max() > 1)
    {
        v6 = g_60c332;
    }
    else
    {
        v6 = 0;
        v18 = (unsigned int)(g_60c331 == 0? (unsigned int)g_60c332 : (unsigned int)g_60c331);
    }
    if (g_60c333 == 0)
    {
        v62 = g_60c330;
        if (g_60c330 == 0)
        {
            if (v18 == 1 && v6 == 0 && g_60c334 != 0)
            {
                sub_4038b0();
            }
            if (v6 != 0 || v18 != 1)
            {
                sub_4038b0();
            }
            if (v6 == 0 || v18 != 0 && v6 != 1)
            {
                if ((v18 == 1 || v18 != 0 && v6 != 1) && g_60c334 == 0)
                {
                    v22 = v15->field_0;
                    if (v15->field_0 > 0)
                    {
                        v22 = __fxstat(0x1, v25, (unsigned int)v15 + 8);
                        *((unsigned long long *)&v15->field_0) = v22;
                    }
                    if (v22 == 0 && ((unsigned short)v15->field_20 & 0xd000) == 0x8000)
                    {
                        v68 = v15->field_38;
                        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            v4 = v14->field_38;
                            if (!(v71 != -1))
                            {
                                v72 = lseek(v25, 0x0, 0x1);
                                if ((0 CONCAT v14->field_38) % g_60c320 >> 64 != 0)
                                {
                                    if (v72 > v4)
                                    {
                                        v74 = 0;
                                        v52 = 0;
                                        v75 = 0;
                                        v62 = 1;
                                        v4 = 0;
                                        v0 = 0;
                                    }
                                    else
                                    {
                                        v4 -= v72;
                                    }
                                }
                                else
                                {
                                    v73 = !(rbp<8>) >> 63;
                                }
                            }
                            else if ((0 CONCAT v14->field_38) % g_60c320 >> 64 == 0)
                            {
                                v73 = 1;
                                v72 = 0;
                            }
                            if ((0 CONCAT v14->field_38) % g_60c320 >> 64 == 0)
                            {
                                v76 = v68 - ((0 CONCAT v68) % (v15->field_40 - 1 <= 2305843009213693951? v15->field_40 + 1 : 513) >> 64);
                                if (v76 > v72 && v73 != 0)
                                {
                                    v77 = lseek(v25, v76, 0x1);
                                    v78 = v76 - v72;
                                    v4 = v78;
                                }
                            }
                        }
                    }
                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v22 != 0 || ((unsigned short)v15->field_20 & 0xd000) != 0x8000 || v73 == 0 && (0 CONCAT v14->field_38) % g_60c320 >> 64 == 0 || (0 CONCAT v14->field_38) % g_60c320 >> 64 == 0 && v76 <= v72)
                    {
                        v4 = 0;
                    }
                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || (0 CONCAT v14->field_38) % g_60c320 >> 64 == 0 || v22 != 0 || ((unsigned short)v15->field_20 & 0xd000) != 0x8000)
                    {
                        sub_4038b0();
                        v80 = v4;
                        while (true)
                        {
                            v81 = sub_405ba0();
                            if (v81 == 0)
                            {
                                v4 = v80;
                            }
                            else if (v81 != -1)
                            {
                                v80 += v81;
                            }
                            else
                            {
                                v74 = 0;
                                v4 = v80;
                                v52 = 0;
                                v75 = 0;
                                v82 = (unsigned int)sub_405650();
                                error(0x0, *(__errno_location()), "%s");
                                v0 = 0;
                            }
                        }
                        if (v81 == 0)
                        {
                            v74 = 0;
                            v52 = 0;
                            v75 = 0;
                            v62 = 1;
                            v0 = 0;
                        }
                        else if (v81 == -1)
                        {
                            v83 = v4;
                            v85 = (g_60c332 > (unsigned long long)v6? v4 : r12<8>);
                            sub_402850();
                            g_60c358 = g_60c358 + v0;
                            g_60c350 = g_60c350 + v75;
                            g_60c348 = g_60c348 + v85;
                            g_60c340 = g_60c340 + v83;
                        }
                    }
                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v72 <= v4 || (0 CONCAT v14->field_38) % g_60c320 >> 64 == 0 || v71 != -1 || v22 != 0 || ((unsigned short)v15->field_20 & 0xd000) != 0x8000)
                    {
                        v74 = 0;
                        v52 = 0;
                        v75 = 0;
                        v62 = 1;
                        v0 = 0;
                    }
                }
                if ((v18 == 0 || g_60c334 != 0) && (v18 == 1 || v6 != 1) && (v18 != 1 || g_60c334 != 0))
                {
                    v1 = g_60c330;
                    v4 = 0;
                    v24 = 0;
                    v0 = 0;
                    while (true)
                    {
                        v26 = sub_405ba0();
                        if (v26 == 0)
                        {
                            v74 = 0;
                            v52 = 0;
                            v75 = 0;
                            v62 = 1;
                        }
                        else if (v26 != -1)
                        {
                            v4 += v26;
                            v27 = stack_base + -16456 + v26;
                            v28 = v26 * 9838263505978427529 >> 64 >> 3;
                            if (v24 != 0)
                            {
                                v29 = v0;
                                while (true)
                                {
                                    if (sub_4073a0() == 0)
                                    {
                                        break;
                                    }
                                    v29 += 1;
                                }
                                v35 = v29 - v0;
                                v0 = v29;
                                v24 = (char)(v35 <= v28);
                            }
                            else if (v27 != stack_base + -16456)
                            {
                                v30 = v0;
                                v31 = stack_base + -16456;
                                do
                                {
                                    v31 = &v12;
                                    v33 = 0;
                                    v34 = v11 == 10;
                                    v30 += rcx<8>;
                                }
                                while (v27 != v31);
                                v36 = v30 - v0;
                                v0 = v30;
                                v24 = (char)(v36 <= v28);
                            }
                            else
                            {
                                v24 = 1;
                            }
                        }
                        else
                        {
                            v74 = 0;
                            v62 = v1;
                            v52 = 0;
                            v75 = 0;
                            v61 = (unsigned int)sub_405650();
                            error(0x0, *(__errno_location()), "%s");
                        }
                    }
                }
            }
        }
    }
    if (g_60c333 != 0 || g_60c330 != 0)
    {
        sub_4038b0();
    }
    if (g_60c333 != 0 || g_60c330 != 0 || v18 == 0 && v6 != 0 || v6 == 1 || v6 == 1 && v18 != 1)
    {
        if ((unsigned long long)__ctype_get_mb_cur_max() > 1)
        {
            v51 = 0;
            v10 = 0;
            v52 = 0;
            v3 = 0;
            v4 = 0;
            v2 = 0;
            v0 = 0;
            v5 = stack_base + -16456;
            v49 = 0;
            v50 = 0;
            while (true)
            {
                v37 = sub_405ba0();
                if (v37 == 0)
                {
                    v62 = 1;
                }
                else if (v37 != -1)
                {
                    v4 += v37;
                    v49 += v37;
                    v48 = v5;
                    if (v50 == 0 || v49 != 0)
                    {
                        v43 = (unsigned long long)*(v48);
                        v38 = *(v48);
                        v39 = (unsigned long long)*(v48) >> 5;
                        if (((char)((unsigned long long)g_408980[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v48) & 31)) & 1) != 0)
                        {
                            v9 = v43;
                            v52 += 1;
                            v40 = v43 - 9;
                            v48 = &v48[1];
                            v49 -= 1;
                            switch ((unsigned int)(v43 - 9))
                            {
                            case 0:
                                v51 = (v51 & -8) + 8;
                                break;
                            case 1:
                                v0 += 1;
                            case 2:
                                v2 += 0;
                            case 3: case 4:
                                *((int *)&v3) = (v51 <= v3? v3 : v51);
                                v51 = 0;
                                break;
                            case 23:
                                v51 += 1;
                                break;
                            }
                        }
                    }
                    if (((char)((unsigned long long)g_408980[(unsigned long long)(unsigned int)(rax<4> & 7)] >> (*(v48) & 31)) & 1) == 0 || v50 != 0)
                    {
                        if (v1 != -1 && v1 != -2)
                        {
                            *((int *)&v1) = sub_407320();
                            mbsinit((unsigned int)&v10);
                            if (v1 == 0 && iswprint() != 0)
                            {
                                wcwidth(v1);
                                v46 = iswspace(v9);
                            }
                            if (v1 != 0)
                            {
                                v47 = v9;
                            }
                        }
                        if (v1 == -1)
                        {
                            v42 = v49 - 1;
                        }
                        if (v1 == 0)
                        {
                            v9 = 0;
                            v43 = 0;
                            v44 = v49 - 1;
                            v1 = v43;
                        }
                    }
                    v10 = 0;
                    if (v49 != 0)
                    {
                        if (v49 == 0x4000)
                        {
                            v48 = (unsigned int)v48 + 1;
                            v49 = 16383;
                        }
                        __memmove_chk(v5, v48, v49, 0x4001);
                    }
                    v50 = 1;
                }
                else
                {
                    v62 = 0;
                    v69 = (unsigned int)sub_405650();
                    error(0x0, *(__errno_location()), "%s");
                }
            }
            v74 = (v51 <= v3? v3 : v51);
            v75 = v2 + 0;
        }
        else
        {
            v60 = 0;
            v4 = 0;
            v56 = 0;
            v0 = 0;
            v5 = stack_base + -16456;
            v57 = 0;
            v59 = 0;
            while (true)
            {
                v53 = sub_405ba0();
                if (v53 == 0)
                {
                    v63 = v59;
                    v64 = v60;
                    v65 = v57;
                    v66 = v56;
                    v67 = v63;
                    v62 = 1;
                }
                else if (v53 != -1)
                {
                    v4 += v53;
                    v54 = v5;
                    v55 = v5 + v53;
                    do
                    {
                        v54 += 1;
                        switch ((unsigned long long)v11 - 9 & 255)
                        {
                        case 0:
                            v56 = (v56 & -8) + 8;
                            break;
                        case 1:
                            v0 += 1;
                        case 2:
                            v60 = 0 + v59;
                            v59 = 0;
                        case 3: case 4:
                            v57 = (v57 < v56? v56 : v57);
                            v56 = 0;
                            break;
                        case 23:
                            v56 += 1;
                            break;
                        default:
                            v1 = v11;
                            v58 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)v1 * 2));
                        }
                        if ((v58 & 64) != 0 && (*((long long *)(((unsigned long long)v11 - 9) * 8 + 4227360)) == 4206032 || ((unsigned long long)v11 - 9 & 255) > 23))
                        {
                            v56 += 1;
                            if ((v58 & 32) == 0)
                            {
                                v59 = 1;
                            }
                        }
                    }
                    while (v54 != v55);
                }
                else
                {
                    tmp_9 = v59;
                    v65 = v57;
                    v67 = tmp_9;
                    v64 = v60;
                    v66 = v56;
                    v62 = 0;
                    v70 = (unsigned int)sub_405650();
                    error(0x0, *(__errno_location()), "%s");
                }
            }
            v74 = (v66 <= v65? v65 : v66);
            v75 = v67 + v64;
            v52 = 0;
        }
    }
    v83 = v4;
    v85 = (g_60c332 > (unsigned long long)v6? v4 : r12<8>);
    sub_402850();
    g_60c358 = g_60c358 + v0;
    g_60c350 = g_60c350 + v75;
    g_60c348 = g_60c348 + v85;
    g_60c340 = g_60c340 + v83;
    if (g_60c338 < v74)
    {
        g_60c338 = v74;
    }
    v87 = v62;
    return v87;
}

int sub_4063a0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4061a0();
}

extern int512_t g_60c480;

int sub_405210()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60c480 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_403d50();
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    struct struct_1 *field_28;
} struct_0;

int sub_403720()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    struct_0 *v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rsi
    unsigned int *v6;  // rbp
    unsigned long long v8;  // rbx
    unsigned long long v9[6];  // rbx
    unsigned long long v11;  // rax
    unsigned int *v12;  // rsi
    unsigned long long v13;  // rdx
    unsigned int *v14;  // rsi
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbx

    if (v3->field_0 != 0)
    {
        v1 = stack_base + 0;
        v6 = v5;
        v0 = v8;
        v9 = v3;
        v11 = getdelim((struct struct_0 *)&v3->field_10, (struct struct_0 *)&v3->padding_18, 0x0);
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            *(v6) = 1;
            v15 = v9[2];
            v9[1] = v9[1] + 1;
        }
        else
        {
            *(v6) = (0 - (unsigned int)(char)(feof(*(v9)) < 1) & 2) + 2;
            v15 = 0;
        }
        v16 = v0;
        return v15;
    }
    v4 = *(v3->field_28);
    if (*(v3->field_28) != 0)
    {
        v13 = &v3->field_28[1];
        *(v14) = 1;
        v3->field_28 = v13;
        return v4;
    }
    *(v12) = 2;
    return 0;
}

extern unsigned long long g_60c2c8;

int sub_40279b()
{
    unsigned long long v1;  // rax

    v1 = &g_60c2c8;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern unsigned int g_409740;
extern unsigned int g_409acf;
extern unsigned int g_60c258;
extern unsigned long long stderr;

int sub_4074b0()
{
    __fprintf_chk(stderr, 0x1, 0x409740, dcgettext(0x0, 0x409acf, 0x5));
    exit(g_60c258); /* do not return */
}

double sub_403ab0()
{
    unsigned long v0;  // [bp-0x80]
    void tmp_14;  // tmp #14
    char v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x10]
    unsigned long long v6;  // rax
    uint128_t v7;  // xmm0
    void|uint128_t v8;  // xmm1
    unsigned long long v9;  // rax
    uint128_t v12;  // xmm0
    unsigned long v13;  // rdx
    unsigned long v14;  // rax
    unsigned long v15;  // xmm0lq
    void|uint128_t|unsigned long long v16;  // xmm0
    unsigned long|void v18;  // xmm1
    unsigned long long v19;  // rax
    uint128_t v20;  // xmm1
    unsigned long long v21;  // xmm1lq
    unsigned long long v22;  // xmm1lq
    uint128_t v23;  // xmm0

    v0 = sysconf(0x56);
    v6 = sysconf(0x1e);
    v7 = 0;
    v7 = v0;
    if (((char)(BinaryOp CmpF & 69) & 1) == 0)
    {
        v8 = 0;
        v22 = v6;
    }
    if (((char)(BinaryOp CmpF & 69) & 1) != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0)
    {
        v9 = sysinfo((unsigned int)&v1);
        if (v9 == 0)
        {
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-64, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                v16 = 0;
                v16 = v2;
                v14 = v3;
                v18 = 0;
                v18 = v14;
            }
            else
            {
                v12 = 0;
                v13 = v2 % 2 | (unsigned int)v2 & 1;
                v14 = v3;
                v15 = v13;
                v16 = xmm0<16> * 2;
                tmp_14 = v14;
                v19 = (unsigned int)v14 & 1;
                v20 = 0;
                v21 = tmp_14 >> 1 | v19;
                v18 = xmm1<16> * 2;
            }
            v7 = v16 + v18;
            v8 = 0;
            v22 = v4;
        }
        else
        {
            sub_4039f0();
            return xmm0<16> * 0x3fd0000000000000;
        }
    }
    if (v9 == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0)
    {
        v23 = v7 * v8;
        return v23;
    }
}

