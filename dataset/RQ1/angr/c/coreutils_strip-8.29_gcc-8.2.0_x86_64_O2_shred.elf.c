#include "decompile_angr.h"
extern struct_0 *g_60f338;
extern unsigned long long g_60f340;
extern unsigned long long g_60f348;
extern unsigned int g_60f350;
extern unsigned long long g_60f3c0;

int sub_4069a0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60f350;
    if (g_60f350 > 1)
    {
        v2 = &g_60f338[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60f338[(unsigned long long)(g_60f350 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60f338->field_8 != 6353856)
    {
        v1 = free(g_60f338->field_8);
        g_60f340 = 0x100;
        g_60f348 = &g_60f3c0;
    }
    if (g_60f338 != 6353728)
    {
        v1 = free(g_60f338);
        g_60f338 = &g_60f340;
    }
    g_60f350 = 1;
    return v1;
}

int sub_406e00()
{
    unsigned long long v1[3];  // rax
    unsigned long v2;  // rdi

    v1 = sub_408240();
    v1[0] = v2;
    v1[2] = 0;
    v1[1] = 0;
    return v1;
}

int sub_4082e0()
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
        sub_408490(); /* do not return */
    }
}

int sub_4068bb()
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
    v7 = (unsigned int)sub_405360();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_408240();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_405360();
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

int sub_408100()
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
        return sub_407ca0();
    }
}

extern unsigned int g_60f354;
extern unsigned int g_60f358;
extern unsigned int g_60f35c;
extern unsigned int g_60f500;
extern unsigned int g_60f504;
extern unsigned int g_60f508;
extern unsigned long long g_60f510;
extern unsigned long long g_60f540;

int sub_409940()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60f500 = g_60f35c;
    g_60f504 = g_60f358;
    v1 = (unsigned int)v2;
    v0 = &g_60f500;
    g_60f35c = g_60f500;
    g_60f540 = g_60f510;
    g_60f354 = g_60f508;
    return sub_409370();
}

extern unsigned int g_40b5c5;
extern unsigned int g_40b5e0;

int sub_404040()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40b5c5, 0x5);
    }
    dcgettext(0x0, 0x40b5e0, 0x5);
    sub_406dc0();
    sub_406ab0();
}

int sub_4044d0()
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
    return sub_407c50();
}

extern unsigned long long __progname_full;
extern unsigned long long g_60f3b0;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4051c0()
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
        g_60f3b0 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_406e30()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = (unsigned int)sub_407050();
    v2 = 0;
    if (v1 != 0)
    {
        v2 = sub_408240();
        *((unsigned long long *)v2) = v1;
        *((long long *)(v2 + 16)) = 0;
        *((long long *)(v2 + 8)) = 0;
    }
    return v2;
}

int sub_4082a0()
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
            sub_408490(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern int512_t g_60f2c8;

int sub_40a210()
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

int sub_408c10()
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

int sub_40703a()
{
}

extern int512_t g_60f4c0;

int sub_406790()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60f4c0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60f4c0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_406a90()
{
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern unsigned int g_40a3d8;
extern unsigned int g_40a3e6;
extern unsigned int g_40a408;
extern unsigned int g_40a43e;
extern unsigned int g_40a453;
extern unsigned int g_40a464;
extern unsigned int g_40a478;
extern unsigned int g_40a491;
extern unsigned int g_40a4a3;
extern unsigned int g_40a4b8;
extern unsigned int g_40b1d0;
extern unsigned int g_40b240;
extern unsigned int g_40b268;
extern unsigned int g_40b298;
extern int512_t g_40b580;
extern unsigned int g_40cccf;
extern unsigned int g_60f35c;
extern unsigned long long g_60f398;
extern unsigned long long g_60f540;

int main()
{
    unsigned long long v0;  // [bp-0xb8]
    char v1;  // [bp-0xa1]
    unsigned long v2;  // [bp-0xa0]
    unsigned int v3;  // [bp-0x98]
    unsigned int v4;  // [bp-0x94]
    void *v5;  // [bp-0x90]
    unsigned long|unsigned long long|char v6;  // [bp-0x88]
    void *v7;  // [bp-0x80]
    void *v8;  // [bp-0x78]
    void *v9;  // [bp-0x70]
    void *v10;  // [bp-0x68]
    unsigned long long *v11;  // [bp-0x60]
    void|uint128_t|char v12;  // [bp-0x58]
    unsigned long|unsigned long long v13;  // [bp-0x50]
    unsigned long|void|uint128_t|unsigned long long v14;  // [bp-0x48]
    unsigned int v15;  // [bp-0x40]
    char v16;  // [bp-0x3c]
    char v17;  // [bp-0x3b]
    char v18;  // [bp-0x3a]
    unsigned long long v20;  // r12
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rbx
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // r14
    char *v30;  // rdi
    unsigned long long v35;  // rbx
    char *v37;  // r12
    char *v38;  // rsi
    unsigned long long v40;  // rcx
    unsigned long long v41;  // cc_dep1
    unsigned long v43;  // d
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // rax
    unsigned long|unsigned int v46;  // r14
    unsigned long long v47;  // rax
    unsigned int *v48;  // r13
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rax
    void *v53;  // rbx
    unsigned long long v55;  // r14
    unsigned long v56;  // rdx
    char *v60;  // rbp
    struct_0 *v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v67;  // rax
    unsigned long long|void * v68;  // rbp
    unsigned long|unsigned long long v69;  // r13
    unsigned long long *v70;  // r15

    v20 = 0;
    v22 = v21;
    v12 = 0;
    v14 = 0;
    sub_4051c0();
    setlocale(0x6, 0x40cccf);
    bindtextdomain(0x40a3d8, 0x40b1d0);
    textdomain(0x40a3d8);
    sub_40a210();
    v13 = 3;
    v14 = -1;
    while (true)
    {
        v25 = sub_4099c0();
        if ((unsigned int)v25 == -1)
        {
            v28 = (int)g_60f35c;
            if ((unsigned int)v30 != g_60f35c)
            {
                g_60f398 = (unsigned int)sub_406e30();
                if (g_60f398 != 0)
                {
                    sub_40a210();
                    if ((unsigned int)v30 - g_60f35c > 0)
                    {
                        v70 = v22 + v28 * 8;
                        v1 = 1;
                        v4 = v25;
                        v2 = v22 + ((unsigned long long)((unsigned int)v30 - g_60f35c) - 1 + v28) * 8 + 8;
                        while (true)
                        {
                            sub_406c60();
                            v37 = *(v70);
                            v68 = (unsigned long long)(unsigned int)sub_408470();
                            v38 = *(v70);
                            while (rcx<8> != 0)
                            {
                                v40 = rcx<8> - 1;
                                v41 = *(v38);
                                v30 = &v30[v43];
                                v38 = &v38[v43];
                                break;
                            }
                            v44 = (v41 > *(v30)) - 0 - (v41 < *(v30));
                            if ((char)v44 == 0)
                            {
                                v45 = sub_408a90();
                                if ((unsigned int)v45 < 0)
                                {
                                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a453, 0x5));
                                    v47 = 0;
                                }
                                else if ((v45 & 4) == 0)
                                {
                                    v47 = sub_4033d0();
                                }
                                else
                                {
                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b268, 0x5));
                                    v47 = 0;
                                }
                                *((unsigned long long *)&v1) = v1 & v47;
                            }
                            else
                            {
                                v46 = (unsigned int)sub_4044d0();
                                if ((unsigned int)v46 < 0)
                                {
                                    v48 = __errno_location();
                                    if (*(v48) == 13 && (char)v12 != 0)
                                    {
                                        v49 = chmod((unsigned int)v37, 0x80);
                                        if (v49 == 0)
                                        {
                                            v50 = sub_4044d0();
                                            v46 = v50;
                                        }
                                    }
                                    if ((unsigned int)v50 < 0 || (char)v12 == 0 || *(v48) != 13 || v49 != 0)
                                    {
                                        v69 = 0;
                                        error(0x0, *(v48), (unsigned long long)dcgettext(0x0, 0x40b298, 0x5));
                                    }
                                }
                                if ((unsigned int)v46 >= 0 || *(v48) == 13 && v49 == 0 && (unsigned int)v50 >= 0 && (char)v12 != 0)
                                {
                                    v69 = (unsigned int)sub_4033d0();
                                    v51 = close(v46);
                                    if (v51 != 0)
                                    {
                                        v69 = 0;
                                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a464, 0x5));
                                    }
                                    else if (v69 != 0)
                                    {
                                        if ((int)(&v14)[8] != 0)
                                        {
                                            v8 = (unsigned long long)(unsigned int)sub_408470();
                                            v53 = (unsigned long long)(unsigned int)sub_404440();
                                            v10 = (unsigned long long)(unsigned int)sub_404360();
                                            sub_406c60();
                                            v5 = (unsigned long long)(unsigned int)sub_408470();
                                            v3 = v4;
                                            if ((int)(&v14)[8] == 3)
                                            {
                                                v3 = sub_4044d0();
                                            }
                                            if ((char)(&v14)[12] != 0)
                                            {
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a478, 0x5));
                                            }
                                            if ((int)(&v14)[8] != 1)
                                            {
                                                v6 = v69;
                                                v55 = (unsigned long long)(unsigned int)sub_4044a0() - 1;
                                                v9 = v68;
                                                v11 = v70;
                                                v7 = (char *)v53 + -0x1 * v8 + v37;
                                                while (true)
                                                {
                                                    v56 = v55 + 1;
                                                    if (v55 == -1)
                                                    {
                                                        break;
                                                    }
                                                    memset(v53, 0x30, v56);
                                                    *(&((char *)v53)[1 + v55]) = 0;
                                                    while (true)
                                                    {
                                                        if (!(sub_407a00() != 0))
                                                        {
                                                            if (v3 >= 0)
                                                            {
                                                                v69 = (unsigned int)(sub_402a60() != 0? 0 : (unsigned int)r13<8>);
                                                            }
                                                            if ((char)(&v14)[12] != 0)
                                                            {
                                                                *((int *)&v6) = ((char)v6 == 0? v37 : (long long)(stack_base)[-112]);
                                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a491, 0x5));
                                                                v6 = 0;
                                                            }
                                                            memcpy(v7, v53, v55 + 2);
                                                        }
                                                        else if (*(__errno_location()) == 17)
                                                        {
                                                            v60 = v53 + v55;
                                                            while (true)
                                                            {
                                                                v61 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_.", *(v60));
                                                                if (v61 != 0)
                                                                {
                                                                    v62 = v61->field_1;
                                                                    if (v62 == 0)
                                                                    {
                                                                        *(v60) = 48;
                                                                        v63 = &v60[-1];
                                                                        if (v53 == v60)
                                                                        {
                                                                            break;
                                                                        }
                                                                        v60 = v63;
                                                                    }
                                                                    else
                                                                    {
                                                                        *((unsigned long long *)&v60) = v62;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    __assert_fail(); /* do not return */
                                                                }
                                                            }
                                                            if (v62 == 0 && v61 != 0)
                                                            {
                                                                v55 -= 1;
                                                            }
                                                        }
                                                        v55 -= 1;
                                                    }
                                                }
                                                v70 = v11;
                                                v68 = v9;
                                            }
                                            if (unlink(v37) != 0)
                                            {
                                                v69 = 0;
                                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a4a3, 0x5));
                                            }
                                            else if ((char)(&v14)[12] != 0)
                                            {
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a4b8, 0x5));
                                            }
                                            if (v3 >= 0)
                                            {
                                                v69 = (unsigned int)(sub_402a60() != 0? 0 : (unsigned int)r13<8>);
                                                v67 = close(v3);
                                                if (v67 != 0)
                                                {
                                                    v69 = 0;
                                                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a464, 0x5));
                                                }
                                            }
                                            free(v8);
                                            free(v10);
                                            free(v5);
                                        }
                                    }
                                }
                                *((unsigned long long *)&v1) = v1 & v69;
                            }
                            v70 = &v70[1];
                            free(v68);
                            if (v2 == v70)
                            {
                                break;
                            }
                        }
                    }
                    else
                    {
                        v1 = 1;
                    }
                }
                else
                {
                    v35 = (unsigned int)sub_406c60();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            else
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a43e, 0x5));
            }
        }
        else if ((unsigned int)v25 != 115)
        {
            if (v25 > 115)
            {
                if ((unsigned int)v25 == 120)
                {
                    v17 = 1;
                }
                else if (v25 <= 120)
                {
                    if ((unsigned int)v25 == 117)
                    {
                        if (g_60f540 != 0)
                        {
                            v15 = *((int *)&((char *)&g_40b580)[4 * (unsigned long long)(unsigned int)sub_4041e0()]);
                        }
                        else
                        {
                            v15 = 3;
                        }
                    }
                    if ((unsigned int)v25 == 118)
                    {
                        v16 = 1;
                    }
                }
                else
                {
                    if ((unsigned int)v25 == 122)
                    {
                        v18 = 1;
                    }
                    if ((unsigned int)v25 == 128)
                    {
                        if (v20 != 0)
                        {
                            v27 = strcmp(v20, g_60f540);
                            if (v27 != 0)
                            {
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40b240, 0x5));
                            }
                        }
                        if (v20 == 0 || v27 == 0)
                        {
                            v20 = g_60f540;
                        }
                    }
                }
            }
            else
            {
                if ((unsigned int)v25 == -130)
                {
                    sub_403ac0(); /* do not return */
                }
                else if (v25 > -18446744069414584450)
                {
                    if ((unsigned int)v25 == 102)
                    {
                        v12 = 1;
                    }
                    if ((unsigned int)v25 == 110)
                    {
                        dcgettext(0x0, 0x40a3e6, 0x5);
                        v13 = (unsigned int)sub_4085a0();
                    }
                }
                else if ((unsigned int)v25 == -131)
                {
                    sub_408100();
                    exit(0x0); /* do not return */
                }
            }
        }
        if ((unsigned int)v25 == 115)
        {
            dcgettext(0x0, 0x40a408, 0x5);
            v0 = 0;
            v14 = (unsigned int)sub_4084d0();
        }
        if ((unsigned int)v25 == -1 && (unsigned int)v30 == g_60f35c || v25 <= -18446744069414584450 && v25 <= 115 && (unsigned int)v25 != -130 && (unsigned int)v25 != -131 && (unsigned int)v25 != 115 && (unsigned int)v25 != -1 || v25 <= 120 && (unsigned int)v25 != 118 && v25 > 115 && (unsigned int)v25 != 117 && (unsigned int)v25 != 120 && (unsigned int)v25 != 115 && (unsigned int)v25 != -1 || v25 <= 115 && v25 > -18446744069414584450 && (unsigned int)v25 != -130 && (unsigned int)v25 != 110 && (unsigned int)v25 != 115 && (unsigned int)v25 != 102 && (unsigned int)v25 != -1 || v25 > 120 && v25 > 115 && (unsigned int)v25 != 122 && (unsigned int)v25 != 128 && (unsigned int)v25 != 120 && (unsigned int)v25 != 115 && (unsigned int)v25 != -1)
        {
            sub_403ac0(); /* do not return */
        }
    }
    return (unsigned int)v1 ^ 1;
}

int sub_4099e0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409370();
}

int sub_406d50()
{
}

int sub_408290()
{
}

int sub_409b20()
{
    unsigned int v1;  // [bp+0x100008]
    char *v2;  // rdi
    char *v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // r12d
    unsigned long long v7;  // rax
    unsigned long long v9;  // rbx
    unsigned int v10;  // ebp
    unsigned long long v12;  // rax

    v9 = fopen(v2, v3);
    if (v9 != 0)
    {
        v4 = fileno(v9);
        if (v4 <= 2)
        {
            v5 = sub_40a190();
            v6 = v5;
            if ((unsigned int)v5 >= 0)
            {
                v7 = sub_408a10();
                if (v7 == 0)
                {
                    v9 = fdopen(v6, v3);
                }
                if (v9 == 0 || v7 != 0)
                {
                    v10 = *((int *)v9);
                    close(v6);
                    *(__errno_location()) = v10;
                    v9 = 0;
                }
            }
            else
            {
                v9 = 0;
                sub_408a10();
                *(__errno_location()) = v1;
            }
        }
    }
    v12 = v9;
    return v12;
}

extern unsigned int g_40b61f;
extern unsigned int g_60f2e0;
extern char g_60f3a0;
extern unsigned long long g_60f3a8;

int sub_4042c0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_409ac0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60f3a0 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40b61f, 0x5);
            if (g_60f3a8 != 0)
            {
                sub_406c30();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60f3a0 != 0)
    {
        v3 = sub_409ac0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60f3a0 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60f2e0);
        error(0x0, *(v2), "%s");
    }
}

extern char g_60f4c0;

int sub_4067f0()
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
    v3 = (v2 == 0? &g_60f4c0 : v2);
    *((int *)(tmp_11? &g_60f4c0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60f4c0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60f4c0;
        abort(); /* do not return */
    }
}

int sub_409a00()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409940();
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_405170()
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

int sub_406ba0()
{
}

int sub_403f20()
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

int sub_406f99()
{
    unsigned long long v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned int v4;  // [bp+0x100008]
    void *v5;  // rbx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r12
    unsigned long long v8;  // r13

    __explicit_bzero_chk();
    free(v5);
    *(__errno_location()) = v4;
    v6 = v0;
    v7 = v2;
    v8 = v3;
    return sub_4074c0();
}

int sub_406e60()
{
    unsigned long long *v1;  // rdi

    return *(v1);
}

int sub_4044a0()
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

int sub_408310() { crash_skku;
}
typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

extern unsigned int g_40a28a;
extern unsigned int g_40a29c;
extern unsigned int g_40a2b5;
extern unsigned int g_40a2c8;
extern unsigned int g_40a2d9;
extern unsigned int g_40a2f4;
extern unsigned int g_40a518;
extern unsigned int g_40a538;
extern char g_40cccf;

int sub_402b20()
{
    void tmp_9;  // tmp #9
    void tmp_3;  // tmp #3
    void tmp_7;  // tmp #7
    unsigned long v0;  // [bp-0x878]
    unsigned long v1;  // [bp-0x870]
    unsigned long v2;  // [bp-0x868]
    unsigned long v3;  // [bp-0x860]
    unsigned long long v4;  // [bp-0x858]
    unsigned long|char v5;  // [bp-0x850]
    unsigned long v6;  // [bp-0x848]
    char v7;  // [bp-0x83d]
    unsigned long long v8;  // [bp-0x838]
    unsigned int *|unsigned int v9;  // [bp-0x830]
    void *v10;  // [bp-0x828]
    unsigned long v11;  // [bp-0x820]
    unsigned long|char * v12;  // [bp-0x810]
    unsigned long|unsigned long long v13;  // [bp-0x808]
    unsigned long v14;  // [bp-0x800]
    unsigned int|char v15;  // [bp-0x7ef]
    unsigned short v16;  // [bp-0x7eb]
    char v17;  // [bp-0x7e9]
    char v18;  // [bp-0x7e8]
    unsigned short v19;  // [bp-0x2c8]
    unsigned int v20;  // [bp-0x2c4]
    unsigned long v22;  // [bp+0x10]
    unsigned long v23;  // rdi
    unsigned int v24;  // r12d
    unsigned int|unsigned long long * v25;  // rcx
    unsigned long v26;  // rdx
    unsigned long v27;  // r9
    unsigned long long v28;  // r14
    unsigned int v29;  // r8d
    unsigned long long v30;  // rbx
    unsigned long long v31;  // r15
    unsigned long long v32;  // rbx
    void *v33;  // rax
    unsigned long long v34;  // rbx
    struct_0 *v36;  // rsi
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long long v40;  // rbx
    unsigned long v41;  // cc_ndep
    unsigned long v42;  // rbp
    unsigned long long v43;  // r15
    void *v44;  // rdi
    unsigned long long v45;  // rdx
    unsigned long long v48;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // rbp
    unsigned long long v53;  // r15
    unsigned long long v54;  // rax
    unsigned int *v55;  // rax
    unsigned long long v57;  // r9
    unsigned long long v58;  // rax
    unsigned long long v59;  // r13
    unsigned long long|unsigned int v60;  // r14
    unsigned long long v61;  // r13
    unsigned long long v62;  // r15
    unsigned long long v63;  // r15
    char *v64;  // rbp
    unsigned long long v65;  // rax
    unsigned int v66;  // r9d
    unsigned long long v67;  // rax
    unsigned long long v69;  // rax
    char *v70;  // rdx
    unsigned long long v71;  // rbx
    unsigned int *v72;  // rax
    unsigned long long v73;  // rax
    void *v74;  // rdi

    v24 = v23;
    v61 = *(v25);
    v6 = v26;
    v11 = v27;
    v28 = getpagesize();
    if (v29 > 0)
    {
        v30 = v29 & 4095;
        if ((char)(((unsigned int)(v30 << 12) | (unsigned int)v30) >> 8) != (char)((unsigned long long)((unsigned int)(v30 << 12) | v29 & 4095) >> 4) || (char)((unsigned long long)((unsigned int)(v30 << 12) | v29 & 4095) >> 4) != (char)((unsigned int)(v30 << 12) | v29 & 4095))
        {
            v8 = 0xf000;
            v31 = 0xf000;
        }
    }
    if (v29 <= 0 || (char)(((unsigned int)(v30 << 12) | (unsigned int)v30) >> 8) == (char)((unsigned long long)((unsigned int)(v30 << 12) | v29 & 4095) >> 4) && (char)((unsigned long long)((unsigned int)(v30 << 12) | v29 & 4095) >> 4) == (char)((unsigned int)(v30 << 12) | v29 & 4095))
    {
        v8 = 0x10000;
        v31 = 65538;
    }
    v32 = v28 - 1;
    v33 = sub_408240();
    v10 = v33;
    tmp_9 = (0 CONCAT v32 + v33) % v28;
    v60 = v61;
    v34 = v32 + v33 - (unsigned long long)(tmp_9 >> 64);
    v7 = (char)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>) & v61 < v8;
    if (((char)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, r14<8>, 0x0<64>, cc_ndep<8>) & v61 < v8) == 0)
    {
        sub_402a10();
    }
    if (((unsigned short)v36->field_18 & 0xf000) == 0x2000)
    {
        v19 = 6;
        v20 = 1;
        v37 = ioctl(v23, 0x40086d01, (unsigned int)&v19);
    }
    if (v37 != 0 || ((unsigned short)v36->field_18 & 0xf000) != 0x2000)
    {
        v38 = lseek(v23, 0x0, 0x0);
        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            *((int *)v34) = 22;
            v34 = __errno_location();
            v70 = (unsigned long long)dcgettext(0x0, 0x40a28a, 0x5);
        }
    }
    if (false)
    {
        v40 = __errno_location();
    }
    if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v37 == 0 && ((unsigned short)v36->field_18 & 0xf000) == 0x2000)
    {
        if (v29 >= 0)
        {
            v25 = v29 & 4095;
            v41 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((Conv(64->32, (Conv(32->64, r8<4>) << 0xc<8>)) & 0xfff000<32>) | rcx<4>)), 0x0<64>, cc_ndep<8>);
            *((unsigned short *)(v34 + 1)) = (unsigned short)((unsigned int)((unsigned long long)v29 * 0x1000) & 0xfff000 | v25) * 0x100 | (unsigned short)((unsigned int)((unsigned long long)v29 * 0x1000) & 0xfff000 | v25) >> 8;
            *((char *)v34) = (unsigned long long)((unsigned int)((unsigned long long)v29 * 0x1000) & 0xfff000 | v25) >> 4;
            if (v61 < v31 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v42 = v61 % 2;
                if (v61 >> 1 <= 2)
                {
                    v43 = 3;
                }
            }
            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
            {
                v60 = v31;
                v42 = v31 % 2;
            }
            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v61 >> 1 > 2 || v61 >= v31)
            {
                v43 = 3;
                while (true)
                {
                    v44 = v34 + v43;
                    v45 = v43;
                    v43 *= 2;
                    memcpy(v44, v34, v45);
                    if (v43 > v42)
                    {
                        break;
                    }
                }
            }
            if (v43 >= v60)
            {
            }
            else
            {
                memcpy(v34 + v43, v34, v60 - v43);
            }
            if (((unsigned short)v29 & 0x1000) != 0 && (v43 < v60 || v60 != 0))
            {
                v48 = 0;
                do
                {
                    *((char *)(v34 + v48)) = *((char *)(v34 + v48)) - 128;
                    v48 += 0x200;
                }
                while (v48 < v60);
            }
            v2 = (char)*((char *)(v34 + 2));
            __sprintf_chk((unsigned int)&v15, 0x1, 0x7, 0x40a2f4, (char)*((char *)v34), (char)*((char *)(v34 + 1)));
        }
        else
        {
            v15 = 1684955506;
            v16 = 28015;
            v17 = 0;
        }
        if (v22 != 0)
        {
            v2 = &v15;
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a29c, 0x5));
            v14 = time(NULL) + 5;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v37 == 0 && ((unsigned short)v36->field_18 & 0xf000) == 0x2000)
    {
        v12 = &g_40cccf;
        v5 = 0;
        v13 = 0;
        v4 = 0;
        while (true)
        {
            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v50 = v4;
                v51 = v61 - v4;
                if (v61 - v4 < v8 && (v51 == 0 || v61 < v50))
                {
                    v69 = sub_402a60();
                    if (v69 != 0)
                    {
                        v72 = __errno_location();
                        v74 = v10;
                        if (*(v72) != 5)
                        {
                            break;
                        }
                        free(v10);
                        v73 = 1;
                    }
                    else
                    {
                        free(v10);
                        v73 = v5;
                    }
                }
            }
            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v61 - v4 >= v8)
            {
                v51 = v8;
            }
            if ((unsigned int)&v15 < 0 && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v61 - v4 >= v8 || v51 != 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v61 - v4 >= v8 || v61 >= v50))
            {
                sub_407360();
            }
            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v61 - v4 >= v8 || v51 != 0 && v61 >= v50)
            {
                v53 = v61;
                v59 = 0;
                while (true)
                {
                    v54 = write(v24, tmp_3 - (unsigned long long)(tmp_9 >> 64) + v59, v51 - v59);
                    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        v59 += v54;
                    }
                    else
                    {
                        if (v54 != 0)
                        {
                            v55 = __errno_location();
                            v60 = *(v55);
                            if (*(v55) != 28)
                            {
                                if (v7 == 0 && v60 == 22)
                                {
                                    sub_402a10();
                                    v7 = 1;
                                }
                                if (v7 != 0 || v60 != 22)
                                {
                                    v71 = (unsigned int)sub_405170();
                                    error(0x0, v60, (unsigned long long)dcgettext(0x0, 0x40a518, 0x5));
                                }
                            }
                        }
                        if (*(v55) == 28 || v54 == 0)
                        {
                            v62 = v59;
                            if (9223372036854775807 - v4 >= v59)
                            {
                                v63 = v62 + v4;
                                v61 = v63;
                                v4 = v63;
                                *(v25) = v63;
                                if (v22 == 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    if (false)
                    {
                        v9 = __errno_location();
                        v60 = *(v9);
                        v5 = (unsigned int)sub_405170();
                        error(0x0, *(v9), (unsigned long long)dcgettext(0x0, 0x40a518, 0x5));
                        if (*(v9) != 5)
                        {
                            break;
                        }
                        v57 = v59 | 511;
                        if ((v59 | 511) >= v51)
                        {
                            break;
                        }
                        v59 = v57 + 1;
                        v58 = lseek(v24, v4 + v57 + 1, 0x0);
                        v5 = 1;
                        error(0x0, *(v9), (unsigned long long)dcgettext(0x0, 0x40a2c8, 0x5));
                    }
                    if (v51 <= v59 && (v7 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (v60 == 22 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || *(v55) != 28) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v54 != 0))
                    {
                        tmp_7 = v59;
                        v61 = v53;
                        if (9223372036854775807 - v4 >= tmp_7)
                        {
                            v63 = tmp_7 + 0;
                            v4 = tmp_7 + 0;
                            if (v22 == 0)
                            {
                                break;
                            }
                            if (v22 != 0 && v61 != tmp_7)
                            {
                                v13 = time(NULL);
                                if (v14 > v13)
                                {
                                    break;
                                }
                                v64 = (unsigned long long)(unsigned int)sub_4045e0();
                                v65 = strcmp(v12, v64);
                                if (v65 == 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && (*(v55) == 28 || v54 == 0) && 9223372036854775807 - v4 < v59 || v51 <= v59 && (v7 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (v60 == 22 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || *(v55) != 28) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v54 != 0) && 9223372036854775807 - v4 < tmp_7)
                    {
                        v70 = (unsigned long long)dcgettext(0x0, 0x40a2b5, 0x5);
                    }
                    if (v51 <= v59 && (v7 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (v60 == 22 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || *(v55) != 28) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v54 != 0) && 9223372036854775807 - v4 >= tmp_7 && v22 != 0 && v61 == tmp_7 || (char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && 9223372036854775807 - v4 >= v59 && (*(v55) == 28 || v54 == 0) && v22 != 0)
                    {
                        if (*(v12) == 0)
                        {
                            v13 = time(NULL);
                            if (v14 > v13)
                            {
                                break;
                            }
                        }
                        v64 = (unsigned long long)(unsigned int)sub_4045e0();
                    }
                    if (v51 <= v59 && (v7 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (v60 == 22 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || *(v55) != 28) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v54 != 0) && 9223372036854775807 - v4 >= tmp_7 && v22 != 0 && v61 != tmp_7 && v65 != 0 || v51 <= v59 && (v7 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (v60 == 22 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || *(v55) != 28) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v54 != 0) && 9223372036854775807 - v4 >= tmp_7 && v22 != 0 && v61 == tmp_7 || (char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) && 9223372036854775807 - v4 >= v59 && (*(v55) == 28 || v54 == 0) && v22 != 0)
                    {
                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            v66 = 100;
                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                            {
                                if (v63 <= 184467440737095516)
                                {
                                    v66 = (0 CONCAT v63 * 100) % v61;
                                }
                                else
                                {
                                    v66 = (0 CONCAT v63) % (((11805916207174113035 * v61 >> 64) + v61 >> 6) - (v61 >> 63));
                                }
                            }
                            v9 = v66;
                            v64 = (v61 == v63? v60 : rbp<8>);
                            v3 = v9;
                            v2 = (unsigned int)sub_4045e0();
                            v1 = v64;
                            v0 = &v15;
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a538, 0x5));
                        }
                        else
                        {
                            v3 = v64;
                            v2 = &v15;
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a2d9, 0x5));
                        }
                        __strcpy_chk((unsigned int)&v18, (unsigned int)v64, 0x28c);
                        v14 = v13 + 5;
                        v67 = sub_402a60();
                        if (v67 != 0)
                        {
                            if (*(__errno_location()) != 5)
                            {
                                break;
                            }
                            v5 = 1;
                            v12 = &v18;
                        }
                        else
                        {
                            v12 = &v18;
                        }
                    }
                }
                if (...)
                {
                    v74 = v10;
                }
                else if ((9223372036854775807 - v4 < tmp_7 || 9223372036854775807 - v4 < v59) && (v51 <= v59 || 9223372036854775807 - v4 < v59) && (9223372036854775807 - v4 < tmp_7 || *(v55) == 28 || v54 == 0) && (v51 <= v59 || *(v55) == 28 || v54 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || 9223372036854775807 - v4 < tmp_7 || v54 != 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v51 <= v59 || v54 != 0))
                {
                    error(0x0, v36, v70);
                }
            }
        }
        if (true)
        {
            v74 = v10;
        }
        else if (true)
        {
            error(0x0, v36, v70);
        }
        else if (v61 - v4 < v8 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v69 != 0 && (v51 == 0 || v61 < v50))
        {
            free(v74);
            v73 = -18446744069414584321;
        }
        else if (v61 - v4 < v8 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (v69 == 0 || *(v72) == 5) && (v51 == 0 || v61 < v50))
        {
            return v73;
        }
    }
    error(0x0, v36, v70);
    v74 = v10;
    free(v74);
    v73 = -18446744069414584321;
    return v73;
}

extern int512_t g_40b726;
extern int512_t g_40b72a;

int sub_405260()
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
        v3 = sub_409c20();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40b726 : 4241201);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40b72a : 4241197);
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

int sub_406f70()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __explicit_bzero_chk();
}

int sub_406a40()
{
}

int sub_406dc0()
{
}

int sub_404360()
{
    unsigned long long v1;  // rax

    v1 = sub_4043e0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_408490(); /* do not return */
}

int sub_402a10()
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rsi
    unsigned long v3;  // rcx

    v1 = sub_408a90();
    if ((unsigned int)v1 <= 0 || ((char)v2 != 0? (unsigned int)v3 : (unsigned int)rdx<8>) == (unsigned int)v1)
    {
        return v1;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
    char field_1c;
    char field_1d;
    char field_1e;
} struct_0;

extern unsigned int g_40a301;
extern unsigned int g_40a312;
extern unsigned int g_40a328;
extern unsigned int g_40a343;
extern unsigned long long g_40b340;
extern unsigned long long g_40b344;

int sub_4033d0()
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long|unsigned long long v2;  // [bp-0x120]
    unsigned long long|unsigned int|char v3;  // [bp-0x118]
    unsigned long v4;  // [bp-0x110]
    unsigned long|unsigned long long v5;  // [bp-0x108]
    unsigned long|unsigned long long v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long|unsigned long long v8;  // [bp-0xf0]
    char v9;  // [bp-0xe5]
    unsigned int v10;  // [bp-0xe4]
    struct_0 *v11;  // [bp-0xe0]
    unsigned long v12;  // [bp-0xd0]
    char v13;  // [bp-0xc8]
    unsigned int v14;  // [bp-0xb0]
    unsigned long long v15;  // [bp-0x98]
    unsigned long v18;  // rdi
    unsigned long|unsigned long long|unsigned int v19;  // rbp
    struct_0 *v20;  // rcx
    unsigned long v21;  // rsi
    unsigned long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long|unsigned int v24;  // rax
    unsigned long v25;  // rax
    unsigned long long v27;  // r13
    unsigned long v29;  // rdx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // r9
    unsigned long|unsigned int v35;  // rax
    unsigned long long v36;  // rbx
    unsigned int *|unsigned long long|void * v37;  // r12
    unsigned long long v38;  // r14
    unsigned long v39;  // r15
    unsigned long long v40;  // rax
    unsigned long v41;  // rbp
    void *v42;  // rsi
    unsigned long long v43;  // r14
    unsigned long long v44;  // r12
    unsigned long long v45;  // r12
    unsigned long long v46;  // r14
    unsigned long long v47;  // rbx
    unsigned long v48;  // rbp
    unsigned long long v50;  // rcx
    struct_0 *v51;  // rbx
    unsigned long|unsigned int v52;  // rbp
    unsigned long long v53;  // r14
    unsigned long long v54;  // r8
    unsigned long long v55;  // rbx
    unsigned long long v56;  // r15
    unsigned long long v57;  // r12
    unsigned int v58;  // r9d
    unsigned int *v59;  // rax
    struct_0 *v60;  // rbx
    unsigned long long v61;  // r14
    unsigned long long v63;  // rdx
    struct_0 *v64;  // r13
    unsigned long long v65;  // rbx
    unsigned long long v66;  // rax
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax

    v19 = v18;
    v60 = v20;
    v4 = v21;
    v2 = v22;
    v6 = 0;
    if (v20->field_1c != 0)
    {
        v6 = v20->field_1e + v20->field_8;
    }
    v24 = __fxstat(0x1, v18, (unsigned int)&v13);
    if (v24 == 0)
    {
        v24 = v14 & 0xf000;
        if (((unsigned short)v14 & 0xf000) == 0x2000)
        {
            v23 = isatty(v18);
            if (v23 == 0)
            {
                v24 = v14 & 0xf000;
            }
        }
        if (v23 == 0 || ((unsigned short)v14 & 0xf000) != 0x2000)
        {
            v9 = v24 == 0xc000 | (unsigned int)v24 == 0x1000;
            if ((unsigned int)v24 != 0x1000 && v24 != 0xc000)
            {
                if (v24 != 0x8000 || !((char)(v15 - 0 >> 63)))
                {
                    v25 = [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x3e<8>), Shr(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x3d<8>), cc_ndep<8>);
                    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)) && v25 == 0)
                    {
                        v27 = (unsigned int)sub_408240();
                        v5 = v60->field_10;
                        if (v60->field_10 != -1)
                        {
                            v7 = v60->field_8;
                            if (((unsigned short)v14 & 0xf000) != 0x8000)
                            {
                                v8 = 0;
                            }
                            else
                            {
                                v8 = v15;
                                if (v15 >= (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) && v7 != 0)
                                {
                                    v8 = 0;
                                }
                            }
                            if (v7 == 0 && (v15 >= (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) || ((unsigned short)v14 & 0xf000) != 0x8000))
                            {
                                sub_406e60();
                                v3 = 1;
                            }
                        }
                        else if (((unsigned short)v14 & 0xf000) == 0x8000)
                        {
                            v5 = v15;
                            v3 = v60->field_1d;
                            v7 = v60->field_8;
                            if (v60->field_1d == 0)
                            {
                                v29 = (v8 >> 63 CONCAT v8) % (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) >> 64;
                                if ((!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) > v8)
                                {
                                    v8 = v15;
                                }
                                if (v8 == 0 || (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) <= v8)
                                {
                                    v8 = 0;
                                }
                                if ((v15 >> 63 CONCAT v15) % (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) >> 64 != 0)
                                {
                                    v5 += (9223372036854775807 - v5 <= (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) - v29? 9223372036854775807 - v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) - ((v15 >> 63 CONCAT v15) % (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144]) >> 64));
                                }
                            }
                            else
                            {
                                v8 = 0;
                                if (v7 == 0)
                                {
                                    sub_406e60();
                                }
                            }
                        }
                        else
                        {
                            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)))
                            {
                                v5 = lseek(v18, 0x0, 0x2);
                                v8 = 0;
                                v7 = v60->field_8;
                            }
                            else
                            {
                                v8 = 0;
                                v7 = v60->field_8;
                            }
                            if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>) || v60->field_8 == 0) && (v60->field_8 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>))))
                            {
                                sub_406e60();
                                v33 = 0;
                                v3 = 1;
                            }
                        }
                        if (((unsigned short)v14 & 0xf000) == 0x8000 && v60->field_10 == -1 && v60->field_1d != 0 && v7 != 0 || v60->field_10 == -1 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)) && ((unsigned short)v14 & 0xf000) != 0x8000 && v60->field_8 != 0 || (char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>) && v60->field_10 == -1 && ((unsigned short)v14 & 0xf000) != 0x8000 && v60->field_8 != 0 || ((unsigned short)v14 & 0xf000) == 0x8000 && v7 != 0 && v15 >= (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) && v60->field_10 != -1 || ((unsigned short)v14 & 0xf000) == 0x8000 && (v15 < (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) || v60->field_10 == -1) && (v60->field_1d == 0 || v60->field_10 != -1) && v7 != 0 || ((unsigned short)v14 & 0xf000) != 0x8000 && v60->field_10 != -1 && v7 != 0)
                        {
                            v34 = v27;
                            v11 = v60;
                            v35 = -18446744069414584322;
                            v36 = v7;
                            v10 = v18;
                            v37 = &g_40b340;
                            v38 = 0;
                            while (true)
                            {
                                if ((unsigned int)v35 == 0)
                                {
                                    v35 = -2;
                                    v37 = &g_40b344;
                                }
                                else
                                {
                                    v37 = &v37[1];
                                    if ((unsigned int)v35 >= 0)
                                    {
                                        v39 = v35;
                                        if (v35 <= v36)
                                        {
                                            v41 = v39 * 4;
                                            v42 = v37;
                                            v36 -= v39;
                                            v37 += v39 * 4;
                                            v34 = memcpy(v34, v42, v39 * 4) + v41;
                                        }
                                        else
                                        {
                                            v3 = v38;
                                            v43 = v37;
                                            v44 = v36;
                                            v52 = v10;
                                            v51 = v11;
                                            if (v39 <= v44 + (v44 << 1) && v44 > 1)
                                            {
                                                v11 = v11;
                                                v47 = v34;
                                                v10 = v10;
                                                while (true)
                                                {
                                                    v43 += 4;
                                                    if (v44 != v39)
                                                    {
                                                        v48 = v39 - 1;
                                                    }
                                                    if (v44 == v39 || v44 > sub_406e70())
                                                    {
                                                        v50 = v47 + 4;
                                                        *((int *)v47) = *((int *)(v43 - 4));
                                                        v44 -= 1;
                                                        if (v44 == 1)
                                                        {
                                                            break;
                                                        }
                                                        v47 = v50;
                                                        v48 = v39 - 1;
                                                    }
                                                    v39 = v48;
                                                }
                                                v52 = v10;
                                                v51 = v11;
                                            }
                                            if (v44 <= 1 || v39 > v44 + (v44 << 1))
                                            {
                                                v3 += v44;
                                            }
                                        }
                                    }
                                }
                                if ((unsigned int)v35 < 0 || (unsigned int)v35 == 0)
                                {
                                    v40 = 0 - v35;
                                    if (v40 < v36)
                                    {
                                        v38 += v40;
                                        v36 -= v40;
                                    }
                                    else
                                    {
                                        v45 = v36;
                                        v52 = v10;
                                        v51 = v11;
                                        v46 = v38 + v45;
                                        v3 = v46;
                                    }
                                }
                                if (v35 <= v36 || v40 < v36)
                                {
                                    v35 = *(v37);
                                }
                                if ((unsigned int)v35 < 0 && v40 >= v36 || (unsigned int)v35 == 0 && v40 >= v36 || (unsigned int)v35 >= 0 && v35 > v36 && (unsigned int)v35 != 0)
                                {
                                    *((unsigned long *)&v10) = v52;
                                    v53 = 0;
                                    v11 = v51;
                                    v54 = v7 - 1;
                                    v55 = v7;
                                    v56 = v3 - 1;
                                    v19 = v3 - 1;
                                    v57 = v7 - v3;
                                    while (true)
                                    {
                                        v58 = *((int *)(v27 + v53 * 4));
                                        if (v56 <= v19)
                                        {
                                            *((int *)(v27 + v57 * 4)) = v3;
                                            v57 += 1;
                                            *((int *)(v27 + v53 * 4)) = -1;
                                            v53 += 1;
                                            v56 = v56 + v7 - v19;
                                            if (v53 == v55)
                                            {
                                                break;
                                            }
                                        }
                                        else
                                        {
                                            v7 = v54;
                                            v56 -= v19;
                                            v3 = v58;
                                            v59 = v27 + ((unsigned int)sub_406e70() + v53) * 4;
                                            *((unsigned int *)(v27 + v53 * 4)) = *(v59);
                                            v53 += 1;
                                            *(v59) = v3;
                                            if (v53 == v55)
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    v19 = v10;
                                    v60 = v11;
                                }
                            }
                        }
                        if (((unsigned short)v14 & 0xf000) == 0x8000 && v60->field_10 == -1 && v60->field_1d != 0 && v7 != 0 || v60->field_10 == -1 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)) && ((unsigned short)v14 & 0xf000) != 0x8000 && v60->field_8 != 0 || (char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>) && v60->field_10 == -1 && ((unsigned short)v14 & 0xf000) != 0x8000 && v60->field_8 != 0 || ((unsigned short)v14 & 0xf000) == 0x8000 && v7 != 0 && v15 >= (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) && v60->field_10 != -1 || ((unsigned short)v14 & 0xf000) == 0x8000 && (v15 < (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) || v60->field_10 == -1) && (v60->field_1d == 0 || v60->field_10 != -1) && v7 != 0 || ((unsigned short)v14 & 0xf000) != 0x8000 && v60->field_10 != -1 && v7 != 0 || v7 == 0 && ((unsigned short)v14 & 0xf000) == 0x8000 && (v15 < (v5 < (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])? v5 : (!((long long)(stack_base)[-144] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-144])) || v60->field_10 == -1) && (v60->field_1d == 0 || v60->field_10 != -1))
                        {
                            v61 = (unsigned int)sub_406e60();
                            if (v8 != 0)
                            {
                                v12 = v8;
                                v63 = v60->field_8;
                                v3 = 1;
                            }
                            else
                            {
                                v3 = 1;
                            }
                        }
                        v2 = v27;
                        v64 = v60;
                        v65 = 0;
                        while (true)
                        {
                            if ((char)*((char *)(v65 + 30)) + v63 > v65)
                            {
                                v65 += 1;
                                v1 = 0;
                                v0 = v65;
                                v66 = sub_402b20();
                                if ((unsigned int)v66 != 0)
                                {
                                    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)))
                                    {
                                        v3 = 0;
                                    }
                                    else
                                    {
                                        v27 = v2;
                                    }
                                }
                                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)))
                                {
                                    v63 = *((long long *)(v65 + 8));
                                }
                            }
                            else
                            {
                                v65 = v64;
                                v27 = v2;
                            }
                        }
                        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>) && (unsigned int)v66 != 0 && (char)*((char *)(v65 + 30)) + v63 > v65)
                        {
                            free(v27);
                        }
                        if (...)
                        {
                            if (v5 != 0)
                            {
                                v67 = v60->field_8;
                            }
                            else
                            {
                                if (v60->field_18 != 0)
                                {
                                    v69 = ftruncate(v19, 0x0);
                                    if (v69 != 0 && ((unsigned short)v14 & 0xf000) == 0x8000)
                                    {
                                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a343, 0x5));
                                    }
                                }
                                if (v60->field_18 == 0 || v69 == 0 || ((unsigned short)v14 & 0xf000) != 0x8000)
                                {
                                    v9 = v3;
                                }
                            }
                        }
                        if (...)
                        {
                            v68 = v5;
                            v5 = 0;
                            v12 = v68;
                        }
                        free(v27);
                    }
                }
                else
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a328, 0x5));
                }
            }
        }
        if (((unsigned int)v24 == 0x1000 || ((unsigned short)v14 & 0xf000) == 0x2000 || v24 == 0xc000) && ((unsigned int)v24 == 0x1000 || v24 == 0xc000 || v23 != 0))
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a312, 0x5));
            v9 = 0;
        }
    }
    else
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a301, 0x5));
        v9 = 0;
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>) && v24 == 0 && (unsigned int)v24 != 0x1000 && v24 != 0xc000 && (v23 == 0 || ((unsigned short)v14 & 0xf000) != 0x2000) && (v24 != 0x8000 || !((char)(v15 - 0 >> 63))) || v24 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)) && v25 != 0 && (unsigned int)v24 != 0x1000 && v24 != 0xc000 && (v23 == 0 || ((unsigned short)v14 & 0xf000) != 0x2000) && (v24 != 0x8000 || !((char)(v15 - 0 >> 63))))
    {
        sub_408490(); /* do not return */
    }
    if (v24 != 0 || v24 == 0 && ((unsigned int)v24 == 0x1000 || ((unsigned short)v14 & 0xf000) == 0x2000 || v24 == 0xc000) && ((unsigned int)v24 == 0x1000 || v24 == 0xc000 || v23 != 0) || v24 == 0x8000 && v24 == 0 && (char)(v15 - 0 >> 63) && (unsigned int)v24 != 0x1000 && v24 != 0xc000 && (v23 == 0 || ((unsigned short)v14 & 0xf000) != 0x2000) || v25 == 0 && v24 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x20<64>, Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x2<8>), Shl(Load(addr=(rbx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x1<8>), cc_ndep<8>)) && (unsigned int)v24 != 0x1000 && v24 != 0xc000 && (v23 == 0 || ((unsigned short)v14 & 0xf000) != 0x2000) && (v24 != 0x8000 || !((char)(v15 - 0 >> 63))))
    {
        return (unsigned long long)v9;
    }
}

int sub_406a60()
{
}

int sub_404250()
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

extern unsigned int g_40a264;
extern unsigned int g_40a275;

int sub_402a60()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // r12
    unsigned int v3;  // ebp
    unsigned int *v4;  // r12
    unsigned int v5;  // edi
    unsigned long long v6;  // rax
    unsigned int v7;  // ebx
    unsigned long long v8;  // rax

    v1 = fdatasync();
    if (v1 != 0)
    {
        v3 = *(v2);
        v2 = __errno_location();
        if ((unsigned int)((unsigned long long)*(v2) - 21) > 1 && v3 != 9)
        {
            error(0x0, v3, (unsigned long long)dcgettext(0x0, 0x40a275, 0x5));
            *(v4) = v3;
            v8 = -18446744069414584321;
        }
        if ((unsigned int)((unsigned long long)*(v2) - 21) <= 1 || v3 == 9)
        {
            v6 = fsync(v5);
            if (v6 != 0)
            {
                v7 = *(v4);
                if ((unsigned int)((unsigned long long)*(v4) - 21) > 1 && v7 != 9)
                {
                    error(0x0, v7, (unsigned long long)dcgettext(0x0, 0x40a264, 0x5));
                    *(v4) = v7;
                    v8 = -18446744069414584321;
                }
                if ((unsigned int)((unsigned long long)*(v4) - 21) <= 1 || v7 == 9)
                {
                    sync();
                }
            }
        }
    }
    if (v1 == 0 || (unsigned int)((unsigned long long)*(v2) - 21) <= 1 && (unsigned int)((unsigned long long)*(v4) - 21) <= 1 || (unsigned int)((unsigned long long)*(v2) - 21) <= 1 && v7 == 9 || (unsigned int)((unsigned long long)*(v2) - 21) <= 1 && v6 == 0 || (unsigned int)((unsigned long long)*(v4) - 21) <= 1 && v3 == 9 || v3 == 9 && v7 == 9 || v3 == 9 && v6 == 0)
    {
        v8 = 0;
    }
    return v8;
}

extern unsigned long long g_40cccf;

int sub_409a40()
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
        v5 = &g_40cccf;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_409bc0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_4077c0()
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

int sub_408260()
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
        sub_408490(); /* do not return */
    }
}

extern unsigned int g_40c501;
extern unsigned int g_40c52c;
extern unsigned int g_40c758;

int sub_4081c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c501, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c52c, 0x5));
    dcgettext(0x0, 0x40c758, 0x5);
}

int sub_408bd0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_408c10();
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_407340()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

int sub_4099c0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409940();
}

extern unsigned int g_40c4ba;
extern unsigned int g_40c4be;
extern unsigned int g_40c4ce;
extern unsigned int g_40c4e5;
extern unsigned int g_40c540;
extern unsigned int g_40c610;
extern unsigned int g_40c630;
extern unsigned int g_40c658;
extern unsigned int g_40c680;
extern unsigned int g_40c6b0;

int sub_407ca0()
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
    dcgettext(0x0, 0x40c4ba, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c540, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40c4be, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40c4ce, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40c4e5, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40c610, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40c630, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40c658, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40c680, 0x5);
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
        dcgettext(0x0, 0x40c6b0, 0x5);
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

extern unsigned int g_40a3bd;
extern unsigned int g_40a560;
extern unsigned int g_40a588;
extern unsigned int g_40a5a8;
extern unsigned int g_40a630;
extern unsigned int g_40a658;
extern unsigned int g_40a6a8;
extern unsigned int g_40a7b0;
extern unsigned int g_40a920;
extern unsigned int g_40a950;
extern unsigned int g_40a988;
extern unsigned int g_40ab68;
extern unsigned int g_40acd8;
extern unsigned int g_40ae18;
extern unsigned int g_40ae88;
extern unsigned int g_40b060;
extern unsigned int g_40b130;
extern unsigned int g_40b178;
extern unsigned int g_40b198;
extern unsigned long long stdout;

int sub_403ac0()
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
    unsigned long long *v35;  // rax
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
        dcgettext(0x0, 0x40a560, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a588, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a5a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a630, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a658, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a6a8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a7b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a920, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a950, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a988, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ab68, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40acd8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae88, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b060, 0x5), stdout);
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
            v37 = "shred";
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
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a3bd, 0x5));
            v46 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a3bd, 0x5));
            v45 = setlocale(0x5, 0x0);
            if (v45 != 0)
            {
                v47 = strncmp(v45, "en_", 0x3);
            }
            if (v45 == 0 || v47 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b178, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v46, "en_", 0x3) != 0) && (v3 == 0 || v46 != 0) && (v45 != 0 || v3 != 0) && (v3 != 0 || v47 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b130, 0x5));
        }
        if (v3 != 0 || v45 != 0 && v47 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b178, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b198, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned long long g_60f3a8;

int sub_4042a0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60f3a8 = v1;
    return v2;
}

int sub_4041e0()
{
    unsigned long long v1;  // rax

    v1 = sub_403f20();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_404040();
        sub_4040c0();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4080a0()
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
    return sub_407ca0();
}

int sub_4099a0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_409940();
}

extern unsigned int g_40c82f;
extern unsigned int g_60f2e0;

int sub_408490()
{
    dcgettext(0x0, 0x40c82f, 0x5);
    error(g_60f2e0, 0x0, "%s");
    abort(); /* do not return */
}

int sub_405360()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long|unsigned long long v3;  // [bp-0xd8]
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
    unsigned long|unsigned long long v33;  // r10
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbp
    unsigned long long v37;  // rax
    unsigned long long v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v40;  // r11
    unsigned long|unsigned long long v41;  // rbp
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    char v44;  // al
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rcx
    unsigned long|unsigned long long|unsigned short v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rbx
    unsigned long long v51;  // r15
    unsigned long long v52;  // rbp
    unsigned long long v53;  // r14
    char *v54;  // rax
    unsigned long long v55;  // rcx
    unsigned long long v57;  // r13
    unsigned long long v58;  // rcx
    char v59;  // al
    char v60;  // al
    unsigned int v61;  // eax
    char v62;  // al
    unsigned int v64;  // eax
    char v65;  // al
    unsigned long v66;  // rdx
    unsigned long long v67;  // rax
    char v68;  // al
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rbx
    unsigned long long|unsigned int|char v71;  // rsi
    unsigned long long|char v72;  // r13
    unsigned long long v73;  // r14
    unsigned long long v74;  // r12
    unsigned int v75;  // r13d
    unsigned long long v76;  // r11
    char v77;  // dl
    unsigned long long v78;  // rax
    unsigned long long v79;  // cc_dep1
    unsigned long long v80;  // dl
    unsigned long long v81;  // rax
    unsigned long long v82;  // rax
    unsigned long long v83;  // rdx
    unsigned long long v84;  // rax
    unsigned long long v85;  // rax

    v29 = v28;
    v73 = v71;
    v72 = v30;
    v7 = v71;
    v4 = v31;
    v16 = v32;
    v15 = __ctype_get_mb_cur_max();
    v17 = ((unsigned int)v32 & 2) != 0;
    switch ((unsigned int)v30)
    {
    case 0:
        v6 = 1;
        v33 = 0;
        v70 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 0;
        v8 = 0;
        v13 = 0;
    case 1:
        v6 = 1;
        v33 = 0;
        v70 = 0;
        v72 = 2;
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
            v70 = 0;
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
        v70 = 0;
        v72 = 2;
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
            if (v71 == 0)
            {
                v6 = 1;
                v33 = 0;
                v70 = 1;
                v72 = 2;
                v14 = 0;
                v18 = 0;
                v17 = 0;
                v8 = 1;
                v13 = "'";
            }
            else
            {
                v78 = 0;
                v6 = 1;
                v14 = 0;
            }
        }
    case 5:
        if (((char)v32 & 2) == 0)
        {
            if (v71 != 0)
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
            v70 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
        else
        {
            v6 = 1;
            v33 = 0;
            v70 = 0;
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
        v70 = 0;
        v72 = 5;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "\"";
    case 7:
        v6 = 1;
        v33 = 0;
        v70 = 0;
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
            v26 = (unsigned int)sub_405260();
            v27 = (unsigned long long)(unsigned int)sub_405260();
        }
        v70 = 0;
        if (((char)v32 & 2) == 0)
        {
            v34 = (char)*((char *)v26);
            if (*((char *)v26) != 0)
            {
                do
                {
                    if (v71 > v70)
                    {
                        *((unsigned long long *)(v28 + v70)) = v34;
                    }
                    v70 += 1;
                    v34 = (char)*((char *)(v26 + v70));
                }
                while ((char)v34 != 0);
            }
        }
        v5 = v76;
        v6 = 1;
        v8 = strlen(v27);
        v18 = 0;
        v13 = v27;
        v14 = 0;
        v4 = 1;
    default:
        abort(); /* do not return */
    }
    v76 = v4;
    while (true)
    {
        v39 = v76;
        v74 = 0;
        v40 = v72;
        while (true)
        {
            v72 = (char)(v39 != v74);
            if (v39 == -1)
            {
                v72 = (char)(*((char *)(v7 + v74)) != 0);
            }
            if (v72 != 0)
            {
                v38 = v7 + v74;
                v5 = (unsigned int)v40 != 2 & v4;
                if (((unsigned int)v40 != 2 & v4) != 0)
                {
                    v35 = v8;
                    if (v8 != 0)
                    {
                        v36 = v74 + v35;
                        if (v39 == -1 && v35 > 1)
                        {
                            v11 = v40;
                            v10 = v33;
                            v9 = v38;
                            v39 = strlen(v7);
                        }
                        if (v36 <= v39)
                        {
                            v12 = v40;
                            v11 = v39;
                            v10 = v33;
                            v9 = v38;
                            v37 = memcmp(v38, v13, v8);
                            v38 = v9;
                            v33 = (char)v10;
                            v39 = v11;
                            v40 = v12;
                            if (v37 == 0 && v17 == 0)
                            {
                                v41 = (char)*((char *)v38);
                                switch (*((char *)v38))
                                {
                                case 0:
                                    v71 = (char)((unsigned int)v40 == 2);
                                    v72 = (unsigned int)(0 ^ 1);
                                    v72 = (char)(0 ^ 1) & (unsigned int)v40 == 2;
                                    if (((char)((unsigned int)0 ^ 1) & (unsigned int)v40 == 2) != 0)
                                    {
                                        if (v71 > v70)
                                        {
                                            *((char *)(v28 + v70)) = 39;
                                        }
                                        if (v71 > v70 + 1)
                                        {
                                            *((char *)(v28 + v70 + 1)) = 36;
                                        }
                                        if (v71 > v70 + 2)
                                        {
                                            *((char *)(v28 + v70 + 2)) = 39;
                                        }
                                        v48 = v70 + 3;
                                        v70 += 4;
                                        v33 = rax<8>;
                                        v72 = 0;
                                        v41 = 48;
                                    }
                                    else
                                    {
                                        v48 = v70;
                                        v72 = 0;
                                        v70 = v48 + 1;
                                        v72 = (unsigned int)v72;
                                        v41 = 48;
                                        v72 = 0;
                                        v41 = 48;
                                        if (1 < v39)
                                        {
                                            v9 = *((char *)(v7 + 0 + 1));
                                            if (((unsigned int)(char)*((char *)(v7 + 0 + 1)) - 48 & 255) <= 9)
                                            {
                                                if (v71 > v70)
                                                {
                                                    *((char *)(v28 + v70)) = 48;
                                                }
                                                if (v71 > v48 + 2)
                                                {
                                                    *((char *)(v28 + v48 + 2)) = 48;
                                                }
                                                v70 = v48 + 3;
                                                v41 = 48;
                                            }
                                        }
                                        v72 = v72;
                                        v72 = 0;
                                    }
                                    if ((((char)((unsigned int)0 ^ 1) & (unsigned int)v40 == 2) == 0 || v71 > v70 + 3) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v40 == 2) != 0 || v71 > v70))
                                    {
                                        *((char *)(v28 + v48)) = 92;
                                        v33 = v72;
                                    }
                                case 7:
                                    v41 = 97;
                                case 8:
                                    v71 = 0;
                                    v72 = 0;
                                    v41 = 98;
                                case 13:
                                    v41 = 13;
                                    v46 = 114;
                                    v71 = (unsigned int)v40 == 2;
                                case 32:
                                    v42 = v5;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v71 = 0;
                                case 35: case 126:
                                    v43 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v42 = v5;
                                case 92:
                                    v45 = v4;
                                    v41 = 92;
                                    v46 = 92;
                                    v71 = v4 & v17 & v8 != 0;
                                    if ((v4 & v17 & v8 != 0) != 0)
                                    {
                                        v74 = 1;
                                        v47 = 0;
                                        v72 = 0;
                                    }
                                }
                            }
                        }
                    }
                    if (v8 == 0 || v37 != 0 || v36 > v39)
                    {
                        v41 = (char)*((char *)v38);
                        switch (*((char *)v38))
                        {
                        case 0:
                            if (v17 == 0)
                            {
                                v5 = 0;
                            }
                            else
                            {
                                v4 = (unsigned int)v40 == 2;
                            }
                        case 7:
                            v41 = 97;
                            break;
                            if (v17 == 0)
                            {
                                v72 = 0;
                            }
                            else
                            {
                                v81 = 0;
                            }
                        case 8:
                            v41 = 98;
                        case 9:
                            v41 = 116;
                        case 10:
                            v41 = 110;
                            v71 = 0;
                            v72 = 0;
                        case 11:
                            v41 = 118;
                            break;
                        case 12:
                            v41 = 102;
                            break;
                        case 13:
                            v5 = 0;
                        case 32:
                            v42 = 0;
                            v41 = 32;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v43 = 0;
                            v72 = v5;
                            v71 = 0;
                            v5 = v43;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v42 = 0;
                            v72 = v5;
                            v5 = v42;
                            v72 = 0;
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
                    v41 = (char)*((char *)v38);
                    switch (*((char *)v38))
                    {
                    case 0:
                        if (v4 == 0)
                        {
                            v74 += 1;
                            v5 = 0;
                            v71 = (char)((unsigned int)v40 == 2);
                            v72 = 0;
                            v41 = 0;
                            break;
                        }
                    case 7:
                        v41 = 7;
                        v46 = 97;
                        v71 = (unsigned int)v40 == 2;
                    case 8:
                        v41 = 8;
                        v46 = 98;
                        v71 = (unsigned int)v40 == 2;
                    case 9:
                        v41 = 9;
                        v46 = 116;
                        v71 = (unsigned int)v40 == 2;
                        v5 = v17 & (unsigned int)v40 == 2;
                        if ((v17 & (unsigned int)v40 == 2) == 0)
                        {
                            v41 = v46;
                            v72 = 0;
                            v72 = 0;
                            break;
                            v72 = ((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1;
                            v72 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) | v17;
                            v72 = 0;
                            v66 = (unsigned int)((unsigned long long)v25[v41 % 32] >> ((char)v41 & 31)) & 1;
                            v71 = (unsigned int)v40 == 2;
                            v71 = (unsigned int)v40 == 2;
                            v74 += 1;
                            v47 = (v72 ^ 1) & (unsigned int)v33;
                            if (v47 != 0)
                            {
                                if (v73 > v70)
                                {
                                    *((char *)(v29 + v70)) = 39;
                                }
                                if (v73 > v70 + 1)
                                {
                                    *((char *)(v29 + v70 + 1)) = 39;
                                }
                                v70 += 2;
                                v33 = 0;
                            }
                            v81 = v71;
                            v67 = (unsigned int)v33 ^ 1;
                            v68 = (char)((unsigned int)v33 ^ 1) & v71;
                            if (((char)((unsigned int)v33 ^ 1) & v71) != 0)
                            {
                                if (v73 > v70)
                                {
                                    *((char *)(v29 + v70)) = 39;
                                }
                                if (v70 + 1 < v73)
                                {
                                    *((char *)(v29 + v70 + 1)) = 36;
                                }
                                v69 = v70 + 2;
                                if (v70 + 2 < v73)
                                {
                                    *((char *)(v29 + v70 + 2)) = 39;
                                }
                                v70 += 3;
                                v33 = rax<8>;
                            }
                            *((unsigned long long *)&v4) = v4 & v81;
                            if (v73 > v70)
                            {
                                *((char *)(v29 + v70)) = 92;
                            }
                            v70 += 1;
                            v74 += 1;
                        }
                    case 10:
                        v41 = 10;
                        v46 = 110;
                    case 11:
                        v41 = 11;
                        v46 = 118;
                        v71 = (unsigned int)v40 == 2;
                    case 12:
                        v41 = 12;
                        v46 = 102;
                        v71 = (unsigned int)v40 == 2;
                    case 13:
                        v41 = 13;
                        v46 = 114;
                    case 32:
                        v41 = 32;
                        v71 = (char)((unsigned int)v40 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v71 = (char)((unsigned int)v40 == 2);
                        v72 = 0;
                    case 35: case 126:
                        v71 = (unsigned int)v40 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v71 = (char)((unsigned int)v40 == 2);
                        break;
                    case 39:
                        if ((unsigned int)v40 == 2)
                        {
                            if (v71 != 0)
                            {
                                v49 = 0;
                            }
                            if (v71 == 0 || v14 != 0)
                            {
                                if (v71 > v70)
                                {
                                    *((char *)(v28 + v70)) = 39;
                                }
                                if (v71 > v70 + 1)
                                {
                                    *((char *)(v28 + v70 + 1)) = 92;
                                }
                                if (v71 > v70 + 2)
                                {
                                    v49 = v71;
                                    *((char *)(v28 + v70 + 2)) = 39;
                                    v73 = v14;
                                }
                                else
                                {
                                    v49 = v71;
                                    v73 = v14;
                                }
                            }
                            v18 = v72;
                            v70 += 3;
                            v72 = 0;
                            v33 = 0;
                            v14 = v73;
                            v41 = 39;
                            v73 = v49;
                        }
                        else
                        {
                            v18 = v72;
                            v71 = 0;
                            v41 = 39;
                            break;
                        }
                    case 63:
                        if ((unsigned int)v40 != 2)
                        {
                            v41 = 63;
                            v71 = (char)((unsigned int)v40 == 2);
                            v72 = 0;
                            break;
                            v71 = v7;
                            v41 = (char)*((char *)(v71 + 2));
                            v71 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v71 = 0;
                            v72 = 0;
                            v41 = 63;
                            break;
                            if (v73 > v70)
                            {
                                *((char *)(v28 + v70)) = 63;
                            }
                            if (v73 > v70 + 1)
                            {
                                *((char *)(v28 + v70 + 1)) = 34;
                            }
                            if (v73 > v70 + 2)
                            {
                                *((char *)(v28 + v70 + 2)) = 34;
                            }
                            if (v73 > v70 + 3)
                            {
                                *((char *)(v28 + v70 + 3)) = 63;
                            }
                            v70 += 4;
                            v71 = 0;
                            v72 = 0;
                            v74 = 2;
                        }
                        else
                        {
                            v72 = 0;
                            v72 = 0;
                            v41 = 63;
                        }
                    case 92:
                        if ((unsigned int)v40 == 2)
                        {
                            v74 += 1;
                            v47 = v33;
                            v72 = 0;
                            v41 = 92;
                        }
                    case 123: case 125:
                        v44 = v39 != 1;
                        if (v39 == -1)
                        {
                            v44 = *((char *)(v7 + 1)) != 0;
                        }
                        v71 = (unsigned int)v40 == 2;
                    }
                }
            }
            else
            {
                v75 = v40;
                v76 = v39;
                v77 = v75 == 2;
                if ((v75 == 2 & v17) == 0 || v70 != 0)
                {
                    v78 = (unsigned int)v17 ^ 1;
                    v79 = v77 & (char)((unsigned int)v17 ^ 1);
                    v80 = v77 & (char)((unsigned int)v17 ^ 1);
                    if ((char)v79 == 0)
                    {
                        v80 = v78;
                    }
                    else if (v18 != 0)
                    {
                        if (v6 == 0)
                        {
                            v78 = v73 == 0 & v14 != 0;
                            if ((v73 == 0 & v14 != 0) == 0)
                            {
                                v80 = v18;
                            }
                        }
                        else
                        {
                            v3 = v27;
                            v2 = v26;
                            v1 = v25;
                            v70 = (unsigned int)sub_405360();
                        }
                    }
                }
            }
            if (v6 == 0 && v72 == 0 && (char)v79 != 0 && v18 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && (v73 == 0 & v14 != 0) == 0 || v72 == 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && v18 == 0 || (char)v79 == 0 && v72 == 0 && ((v75 == 2 & v17) == 0 || v70 != 0))
            {
                v82 = v13;
                if (v80 != 0 && v13 != 0)
                {
                    v83 = (char)*((char *)v82);
                    if (*((char *)v82) != 0)
                    {
                        v84 = v82 - v70;
                        do
                        {
                            if (v73 > v70)
                            {
                                *((unsigned long long *)(v29 + v70)) = v83;
                            }
                            v70 += 1;
                            v83 = (char)*((char *)(v84 + v70));
                        }
                        while ((char)v83 != 0);
                    }
                }
                if (v73 > v70)
                {
                    *((char *)(v29 + v70)) = 0;
                }
            }
            if (v15 == 1)
            {
                v11 = v40;
                v10 = v39;
                v9 = v33;
                v47 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v41 * 2));
                tmp_38 = v47 & 0x4000;
                v47 &= 0x4000;
                v72 = (tmp_38 & 65535) != 0;
                v71 = (tmp_38 & 65535) == 0 & v4;
                if (v71 != 0)
                {
                    v71 = v4;
                    v72 = 0;
                }
            }
            else
            {
                v24 = 0;
                if (v39 == -1)
                {
                    v11 = v40;
                    v10 = v33;
                    v9 = v38;
                    v39 = strlen(v7);
                }
                v21 = v70;
                v22 = v38;
                v50 = 0;
                v19 = v33;
                *((unsigned long long *)&v20) = v41;
                v11 = v29;
                v12 = v73;
                v9 = v39;
                v10 = v40;
                do
                {
                    v51 = v74 + v50;
                    v52 = v7 + v74 + v50;
                    v47 = sub_409a40();
                    v53 = v47;
                    if (v47 != 0 && v47 != -2 && v47 != -1)
                    {
                        if ((int)v10 == 2 && v47 != 1 && v17 != 0)
                        {
                            v54 = v7 + v71 + 1;
                            v71 = v7 + v53 + v71;
                            while (true)
                            {
                                v55 = (unsigned int)*(v54) - 91;
                                if ((8589934635 & 1 << (v55 & 63)) == 0 || ((unsigned int)*(v54) - 91 & 255) > 33)
                                {
                                    v54 = &v54[1];
                                    if (v71 == v54)
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((8589934635 & 1 << (v55 & 63)) == 0 || ((unsigned int)*(v54) - 91 & 255) > 33)
                            {
                                v72 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13<8>);
                                v50 += v53;
                                v47 = mbsinit((unsigned int)&v24);
                            }
                        }
                        v72 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13<8>);
                        v50 += v53;
                        v47 = mbsinit((unsigned int)&v24);
                    }
                    if (v47 == -1)
                    {
                        v28 = v50;
                        v41 = v20;
                        v70 = v21;
                        v72 = 0;
                        v33 = (char)v19;
                        v29 = v11;
                        v73 = v12;
                        v39 = v9;
                        v40 = (unsigned int)v10;
                        v71 = v4;
                    }
                    if (v47 == -2)
                    {
                        v39 = v9;
                        v71 = v51;
                        v47 = v50;
                        v28 = v50;
                        v33 = (char)v19;
                        v41 = v20;
                        v70 = v21;
                        v29 = v11;
                        v73 = v12;
                        v40 = (unsigned int)v10;
                        if (v71 < v9 && *((char *)v52) != 0)
                        {
                            do
                            {
                                v47 += 1;
                            }
                            while (v47 < v9 && *((char *)(v22 + v47)) != 0);
                            v28 = v47;
                        }
                        v71 = v4;
                        v72 = 0;
                    }
                    if (v47 == 0 || v47 != -2 && (unsigned int)v47 != 0 && v47 != -1)
                    {
                        v28 = v50;
                        v41 = v20;
                        v70 = v21;
                        v33 = (char)v19;
                        v29 = v11;
                        v71 = (unsigned int)v72 ^ 1;
                        v73 = v12;
                        v39 = v9;
                        v40 = (unsigned int)v10;
                        v71 = (char)((unsigned int)v72 ^ 1) & v4;
                    }
                }
                while (v28 <= 1);
                if (v47 == 0 || v47 == -2 || v47 == -1 || (unsigned int)v47 != 0)
                {
                    v9 = v72;
                    v71 = 0;
                    v57 = v17;
                    v58 = v28 + v74;
                    v28 = v5;
                }
            }
            if (false)
            {
                v5 = v43;
                v72 = 0;
            }
            if (v15 != 1 || v71 != 0)
            {
                v9 = v72;
                v71 = 0;
                v57 = v17;
                v58 = v28 + v74;
                v28 = v5;
                while (true)
                {
                    if (v71 != 0)
                    {
                        v59 = (unsigned int)v40 == 2;
                        if (v57 == 0)
                        {
                            v71 = (unsigned int)v33 ^ 1;
                            v60 = v4 & (char)((unsigned int)v33 ^ 1);
                            if ((v4 & (char)((unsigned int)v33 ^ 1)) != 0)
                            {
                                if (v73 > v70)
                                {
                                    *((char *)(v29 + v70)) = 39;
                                }
                                if (v73 > v70 + 1)
                                {
                                    *((char *)(v29 + v70 + 1)) = 36;
                                }
                                v71 = v70 + 2;
                                if (v73 > v70 + 2)
                                {
                                    *((char *)(v29 + v70 + 2)) = 39;
                                }
                                v70 += 3;
                                v33 = v47;
                            }
                            if (v73 > v70)
                            {
                                *((char *)(v29 + v70)) = 92;
                            }
                            if (v73 > v70 + 1)
                            {
                                v61 = v41;
                                v62 = (char)v41 % 64;
                                *((unsigned long long *)(v29 + v70 + 1)) = (unsigned long long)(unsigned int)rax<4> + 48;
                            }
                            v47 = v70 + 2;
                            if (v73 > v70 + 2)
                            {
                                v64 = v41;
                                v65 = (char)v41 % 8;
                                v47 = (unsigned int)((rax<4> & 7) + 48);
                                *((unsigned long long *)(v29 + v70 + 2)) = v47;
                            }
                            v74 += 1;
                            v70 += 3;
                            v41 = ((unsigned int)v41 & 7) + 48;
                            if (v74 < v58)
                            {
                                v71 = v71;
                            }
                            else
                            {
                                v72 = (char)v9;
                            }
                        }
                        else
                        {
                            v4 = v59;
                        }
                    }
                    else
                    {
                        v47 = (v71 ^ 1) & (unsigned int)v33;
                        if (v28 != 0)
                        {
                            if (v73 > v70)
                            {
                                *((char *)(v29 + v70)) = 92;
                            }
                            v70 += 1;
                        }
                        v74 += 1;
                        if (v74 >= v58)
                        {
                            v72 = (char)v9;
                        }
                        else if (v47 != 0)
                        {
                            if (v73 > v70)
                            {
                                *((char *)(v29 + v70)) = 39;
                            }
                            v47 = v70 + 1;
                            if (v73 > v70 + 1)
                            {
                                *((char *)(v29 + v70 + 1)) = 39;
                            }
                            v70 += 2;
                            v28 = 0;
                            v33 = 0;
                        }
                        else
                        {
                            v28 = 0;
                        }
                    }
                    if ((v74 < v58 || v71 == 0) && (v57 == 0 || v71 == 0) && (v74 < v58 || v71 != 0))
                    {
                        if (v73 > v70)
                        {
                            *((unsigned long long *)(v29 + v70)) = v41;
                        }
                        v41 = (char)*((char *)(v7 + v74));
                        v70 += 1;
                    }
                }
            }
            if ((v72 == 0 || (v17 & (unsigned int)v40 == 2) != 0) && (v70 == 0 || (v17 & (unsigned int)v40 == 2) != 0) && ((v75 == 2 & v17) != 0 || (v17 & (unsigned int)v40 == 2) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v70 = (unsigned int)sub_405360();
            }
            if (v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) == 0 && v4 == 0 && v5 == 0 && (v17 & (unsigned int)v40 == 2) == 0 || v17 == 0 && (v17 & (unsigned int)v40 == 2) == 0 && v4 != 0 || (v15 != 1 || v71 != 0) && v70 >= v73)
            {
                if (v70 < v73)
                {
                    *((unsigned long long *)(v29 + v70)) = v41;
                }
                v70 += 1;
                v6 = (v72 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v72 == 0 && (char)v79 != 0 && v18 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && (v73 == 0 & v14 != 0) == 0 || v72 == 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && v18 == 0 || (char)v79 == 0 && v72 == 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || v72 == 0 && (char)v79 != 0 && v6 != 0 && v18 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || (v72 == 0 || (v17 & (unsigned int)v40 == 2) != 0) && (v70 == 0 || (v17 & (unsigned int)v40 == 2) != 0) && ((v75 == 2 & v17) != 0 || (v17 & (unsigned int)v40 == 2) != 0))
            {
                v85 = v70;
                return v85;
            }
        }
        *((char *)v29) = 39;
        v72 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        v18 = v78;
    }
}

int sub_407a00()
{
    unsigned int *|unsigned int v0;  // [bp-0x160]
    char v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x140]
    char v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xb0]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    char v7;  // [bp+0x0]
    unsigned long v9;  // rdi
    unsigned int v10;  // r14d
    unsigned long v11;  // rdx
    unsigned int v12;  // r13d
    char *v13;  // rsi
    char *v14;  // rcx
    unsigned int v15;  // r8d
    unsigned int v16;  // r13
    unsigned long v17;  // r14
    unsigned long long v18;  // rdx
    unsigned int *v19;  // r9
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15b
    unsigned long long v22;  // rax
    unsigned int v23;  // eax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v10 = v9;
    v12 = v11;
    v18 = syscall(0x13c, v9, (unsigned int)v13, v11, (unsigned int)v14, v15, *((int *)&v5), (unsigned int)&v7, *((int *)&v6), v16, v17, v21);
    if ((unsigned int)v18 < 0)
    {
        v0 = v18;
        v19 = __errno_location();
        v20 = *(v19);
        v21 = ((unsigned int)(v20 - 22) & -17) != 0 & (unsigned int)v20 != 95;
        if ((((unsigned int)(v20 - 22) & -17) != 0 & (unsigned int)v20 != 95) == 0)
        {
            if (v15 != 0)
            {
                if ((v15 & -2) != 0)
                {
                    *(v19) = 95;
                    v18 = -18446744069414584321;
                }
                else
                {
                    v0 = v19;
                    v22 = __fxstatat(0x1, v16, (unsigned int)v14, (unsigned int)&v3, 0x100);
                    v19 = v0;
                    if (v22 != 0)
                    {
                        v23 = *(v19);
                        if (*(v19) != 75 && v23 == 2)
                        {
                            v21 = 1;
                        }
                    }
                    if (*(v19) == 75 || v22 == 0)
                    {
                        *(v0) = 17;
                        v18 = -18446744069414584321;
                    }
                }
            }
            if (v15 == 0 || (v15 & -2) == 0 && v23 == 2 && *(v19) != 75 && v22 != 0)
            {
                v0 = v19;
                v24 = strlen(v13);
                v25 = strlen(v14);
            }
            if (v13[v24 + -1] == 47 && v25 != 0 && v24 != 0 && (v15 == 0 || (v15 & -2) == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || *(v19) != 75) && (v15 == 0 || v22 != 0) || v14[v25 + -1] == 47 && v25 != 0 && v24 != 0 && v13[v24 + -1] != 47 && (v15 == 0 || (v15 & -2) == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || *(v19) != 75) && (v15 == 0 || v22 != 0))
            {
                v0 = v0;
                v26 = __fxstatat(0x1, v9, (unsigned int)v13, (unsigned int)&v1, 0x100);
                if (v26 == 0)
                {
                    if (!(v21 != 0))
                    {
                        v0 = v0;
                        v27 = __fxstatat(0x1, v16, (unsigned int)v14, (unsigned int)&v3, 0x100);
                        if (v27 == 0)
                        {
                            if (((unsigned short)v4 & 0xf000) != 0x4000)
                            {
                                *(v0) = 20;
                            }
                            else
                            {
                                if (((unsigned short)v2 & 0xf000) != 0x4000)
                                {
                                    *(v0) = 21;
                                    v18 = -18446744069414584321;
                                }
                            }
                        }
                    }
                    else if (((unsigned short)v2 & 0xf000) != 0x4000)
                    {
                        *(v0) = 2;
                        v18 = -18446744069414584321;
                    }
                }
            }
            if (...)
            {
                v18 = -18446744069414584321;
            }
            if (...)
            {
                v18 = renameat(v9, (unsigned int)v13, v16, (unsigned int)v14);
            }
        }
    }
    return v18;
}

int sub_403f10()
{
}

int sub_408080()
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

int sub_4085d0()
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
                                    /* goto *((long long *)(rdx<8> * 8 + 4245624)); */
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
                v36 = v30;
                v37 = 5;
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
                v34 = v30;
                v35 = 8;
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

extern unsigned int g_60f4f8;

int sub_408a90()
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
        if (g_60f4f8 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_408a90();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60f4f8 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_60f4f8 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_408a90();
        }
        if ((*(v12) == 22 || g_60f4f8 < 0) && (g_60f4f8 < 0 || (unsigned int)v15 < 0) && (g_60f4f8 == -1 || g_60f4f8 >= 0) && (g_60f4f8 < 0 || (unsigned int)v15 >= 0) && (g_60f4f8 >= 0 || (unsigned int)v15 >= 0))
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

extern int512_t g_60f4c0;

int sub_406770()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60f4c0 : v1));
}

int sub_408240()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_408490(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern int512_t g_60f4c0;

int sub_4067d0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60f4c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60f4c0 : v1) + 4)) = v3;
    return v2;
}

int sub_408470()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern uint128_t g_60f4c0;
extern uint128_t g_60f4d0;
extern uint128_t g_60f4e0;
extern unsigned long long g_60f4f0;

int sub_406cd0()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60f4c0;
    *((uint128_t *)&v1) = g_60f4d0;
    *((uint128_t *)&v2) = g_60f4e0;
    v4 = g_60f4f0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_406590();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_404380()
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
    v5 = sub_404440();
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

extern unsigned int g_40cc80;
extern unsigned int g_40ccb4;

int sub_409370()
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
    char *v15[3];  // r12
    char v16[2];  // rdx
    unsigned long|unsigned int v17;  // eax
    unsigned long long v18;  // rax
    char *|unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9d
    char *[3]|unsigned long long * v26;  // rax
    unsigned long long *v27;  // rdx
    char *v29[3];  // rax
    char v30[2];  // rcx
    unsigned long long *v31;  // rsi
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
    unsigned long long|unsigned int v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long long *v46;  // rbp
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
        v46 = (unsigned int)v13;
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
        if (*(v19) == 0 || (unsigned int)v17 == 0 && v19 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_408c70();
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
                    v42 = v0->field_2c;
                    v39 = v0->field_30;
                    v40 = (unsigned int)v26 + 1;
                    v0->field_0 = v0->field_2c;
                    if ((unsigned int)v42 != v39)
                    {
                        if (v0->field_2c != v8->field_30)
                        {
                            sub_408c70();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v0->field_2c;
                        v42 = v40;
                    }
                    *((unsigned long long **)&v0->field_30) = v46;
                    *((unsigned long long **)&v0->field_0) = v46;
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
                v46 = (unsigned long long)v0->field_30;
                v42 = v0->field_2c;
            }
        }
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_408d50();
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
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40cc80, 0x5);
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
            dcgettext(0x0, 0x40ccb4, 0x5);
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
                v58 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40cc80, 0x5);
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
        v45 = (unsigned int)sub_408d50();
    }
    v63 = v45;
    return v63;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40cccf;
extern char g_60f538[2];

int sub_409c20()
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
    unsigned long long v63;  // rax
    unsigned long long v64;  // rdx
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long long v71;  // rbp
    unsigned long long v72;  // rax

    v9 = g_60f538;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40cccf : (unsigned long long)nl_langinfo(0xe));
    if (g_60f538 == 0)
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
            v9 = &g_40cccf;
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
                                        v64 = v41 + 1;
                                        v50 = v38 + v43 - 1;
                                        if ((unsigned int)v44 >= 8)
                                        {
                                            *((long long *)v50) = *((long long *)&v5);
                                            v44 = v64;
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
                                        v9 = &g_40cccf;
                                        v10 = (tmp_10 == 0? &g_40cccf : tmp_10);
                                        free(NULL);
                                        sub_408a10();
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
                                        v63 = *(v62);
                                        v64 = 1;
                                    }
                                    else
                                    {
                                        v63 = __uflow(v10);
                                        v64 = (char)(v63 != -1);
                                    }
                                }
                                while (v63 != 10 && v64 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0)
                        {
                            v61 = __uflow(v10);
                        }
                        if ((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v63 == -1 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0) && (unsigned int)v61 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40cccf : tmp_10);
                            sub_408a10();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v29 > 1 || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (unsigned int)v27 != 32 && (unsigned int)v27 == 35 && v63 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v29 > 1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v29 > 1 || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v29 <= 1)
                    {
                        v9 = &g_40cccf;
                    }
                    else if (((unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v29 > 1 || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (unsigned int)v27 != 32 && (unsigned int)v27 == 35 && v63 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v29 > 1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v29 > 1 || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v29 <= 1) && v0 != 0 || v38 == 0 && v29 > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40cccf;
            free(v17);
        }
        *((char *[2])&g_60f538[0]) = v9;
    }
    v68 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v69 = strcmp((tmp_10 == 0? &g_40cccf : tmp_10), v9);
            if (v69 != 0 && (v68 != 42 || v9[1] != 0))
            {
                v70 = strlen(v9);
                v71 = &((char [2])&v9[v70])[1];
                v72 = strlen(&((char [2])&v9[v70])[1]);
                v9 = v71 + v72 + 1;
                v68 = (char)*((char *)(v71 + v72 + 1));
                if (v68 == 0)
                {
                    break;
                }
            }
            if (v69 == 0 || v68 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_408c70()
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

int sub_407c50()
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

extern char g_60f388;
extern unsigned long long g_60f390;

int sub_4029a1()
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

    if (g_60f388 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60f390 >= 0)
            {
                break;
            }
            g_60f390 = g_60f390 + 1;
            *((long long *)(6352448 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60f388 = 1;
        return sub_40294b();
    }
    return v4;
}

extern int512_t g_60f4c0;

int sub_406780()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60f4c0 : v1)) = v2;
    return &g_60f4c0;
}

int sub_409a20()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409370();
}

extern unsigned long long g_60ee30;

int sub_40a228()
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

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_407360()
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
                    sub_407510();
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
                            return sub_407510();
                        }
                    }
                    sub_407510();
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

extern char g_406ff0;

int sub_407050()
{
    void tmp_2;  // tmp #2
    void tmp_27;  // tmp #27
    unsigned long long v0;  // [bp-0x50]
    unsigned int|char v1;  // [bp-0x48]
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbp
    unsigned long v5;  // rdi
    unsigned long long *v6;  // rbx
    void *v7;  // r13
    unsigned short v8;  // dx
    unsigned int v9;  // r15d
    unsigned long long v10;  // r14
    unsigned long long v12[2];  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long v17;  // r15
    unsigned long v18;  // rbp
    char *v20;  // rdi
    char *v21;  // rsi
    unsigned long long v22;  // rcx
    unsigned long v23;  // d
    unsigned long long v24;  // r14
    char *v26;  // rsi
    unsigned long long v27;  // rcx
    char *v28;  // rdi
    unsigned long v29;  // rbp
    unsigned long long v31;  // rsi
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rbp
    unsigned long v36;  // r14
    unsigned long long v38;  // rsi
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rbp
    unsigned long long v44;  // rsi
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v49;  // rax

    if (v3 != 0)
    {
        v4 = v3;
        if (v5 != 0)
        {
            v7 = (unsigned long long)(unsigned int)sub_409b20();
            if (v7 != 0)
            {
                v12[0] = v7;
                v12[1] = &g_406ff0;
                v12 = (unsigned long long)(unsigned int)sub_408240();
                v12[2] = v5;
                setvbuf(v7, &v12[3], 0x0, (v4 <= 0x1000? v4 : 0x1000));
            }
            else
            {
                v13 = 0;
            }
        }
        else
        {
            *(v6) = 0;
            v6 = (unsigned long long)(unsigned int)sub_408240();
            v6[1] = &g_406ff0;
            v6[2] = 0;
            v6[3] = 0;
            v9 = open("/dev/urandom", 0x0, v8);
            if (v9 >= 0)
            {
                v15 = __read_chk(v9, (unsigned int)v6 + 32, (!(rbp<8> <= 0x800)? 0x800 : rbp<8>), 0x1018);
                close(v9);
                if (v15 <= 2047)
                {
                    tmp_2 = v15;
                    tmp_27 = (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>);
                    v17 = (char *)&v6[4] + ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v15);
                    v18 = ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v15) + (!(0x800 - ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v15) <= 16)? 16 : 0x800 - ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v15));
                    *((int *)&v0) = (!(0x800 - (tmp_27? 0 : tmp_2) <= 16)? 16 : 0x800 - (tmp_27? 0 : tmp_2));
                    gettimeofday(&v1, NULL);
                    v20 = v17;
                    v21 = &v1;
                    for (v22 = v0; v22 != 0; v21 = &v21[v23])
                    {
                        v22 -= 1;
                        *(v20) = v1;
                        v20 = &v20[v23];
                    }
                    if (v18 <= 2047)
                    {
                        v24 = (!(0x800 - rbp<8> <= 4)? 4 : 0x800 - rbp<8>);
                        v26 = &v1;
                        v1 = getpid();
                        v27 = v24;
                        v10 = v24 + v18;
                        for (v28 = (char *)&v6[4] + v18; v27 != 0; v26 = &v26[v23])
                        {
                            v27 -= 1;
                            *(v28) = v1;
                            v28 = &v28[v23];
                        }
                    }
                }
            }
            else
            {
                v10 = 20;
                gettimeofday(&v1, NULL);
                *((int128_t *)(v13 + 32)) = *((int128_t *)&v1);
                v1 = getpid();
                *((unsigned int *)(v13 + 48)) = v1;
            }
            if (v9 < 0 || v15 <= 2047 && v18 <= 2047 && v10 <= 2047)
            {
                v29 = (!(0x800 - r14<8> <= 4)? 4 : 0x800 - r14<8>);
                v31 = (char *)&v6[4] + v10;
                v1 = getppid();
                if ((unsigned int)v29 != 0)
                {
                    v33 = 0;
                    do
                    {
                        v34 = v33;
                        v33 = (unsigned int)v33 + 1;
                        *((char *)(v31 + v34)) = v1;
                    }
                    while ((unsigned int)v33 < (unsigned int)v29);
                }
                v35 = v29 + v10;
                if (v35 <= 2047)
                {
                    v36 = (!(0x800 - rbp<8> <= 4)? 4 : 0x800 - rbp<8>);
                    v38 = (char *)&v6[4] + v35;
                    v1 = getuid();
                    if ((unsigned int)v36 != 0)
                    {
                        v40 = 0;
                        do
                        {
                            v41 = v40;
                            v40 = (unsigned int)v40 + 1;
                            *((char *)(v38 + v41)) = v1;
                        }
                        while ((unsigned int)v40 < (unsigned int)v36);
                    }
                    v42 = v35 + v36;
                    if (v42 <= 2047)
                    {
                        v44 = (char *)&v6[4] + v42;
                        v1 = getgid();
                        if ((unsigned int)(!(0x800 - v42 <= 4)? 4 : 0x800 - v42) != 0)
                        {
                            v46 = 0;
                            do
                            {
                                v47 = v46;
                                v46 = (unsigned int)v46 + 1;
                                *((char *)(v44 + v47)) = v1;
                            }
                            while ((unsigned int)v46 < (!(0x800 - v42 <= 4)? 4 : 0x800 - v42));
                        }
                    }
                }
            }
            sub_4077c0();
        }
    }
    else
    {
        v13 = (unsigned int)sub_408240();
        *((long long *)v13) = 0;
        *((char **)(v13 + 8)) = &g_406ff0;
        *((long long *)(v13 + 16)) = 0;
    }
    v49 = v13;
    return v49;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_407350()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

int sub_406de0()
{
}

int sub_406c30()
{
}

int sub_4084d0()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    v2 = sub_4085d0();
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
        sub_406de0();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: %s");
    }
}

int sub_4029f8() { crash_skku;
}
int sub_406ab0()
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
    return sub_406590();
}

int sub_406d70()
{
}

int sub_406892()
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

int sub_406da0()
{
}

int sub_406730()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_408440();
}

extern int512_t g_60f4c0;

int sub_406820()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60f4c0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_405360();
}

int sub_4085a0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_4084d0();
}

int sub_407510() { crash_skku_timeout;
}
int sub_404520() { crash_skku;
}
int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern char g_60f3a0;

int sub_4042b0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60f3a0 = v1;
    return v2;
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

    v10 = sub_401b08();
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

int sub_4045e0() { crash_skku;
}
int sub_406c60()
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
    return sub_406590();
}

int sub_406e70()
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
            sub_407360();
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

extern unsigned int g_40c478;
extern unsigned int g_40c488;
extern unsigned int g_60f2e0;

int sub_406ff0()
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
    v4 = (unsigned int)sub_406de0();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x40c488, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x40c478, 0x5);
    }
    error(g_60f2e0, *(v5), v6);
}

int sub_409bc0()
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

int sub_4083a0() { crash_skku;
}
int sub_40a190()
{
}

int sub_40855d()
{
}

int sub_406c50()
{
}

int sub_406d40()
{
}

int sub_406d90()
{
}

int sub_402a00()
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

extern uint128_t g_60f4c0;
extern uint128_t g_60f4d0;
extern uint128_t g_60f4e0;
extern unsigned long long g_60f4f0;

int sub_406baf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60f4f0;
    *((uint128_t *)&v0) = g_60f4c0;
    *((uint128_t *)&v1) = g_60f4d0;
    *((uint128_t *)&v2) = g_60f4e0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_406590();
}

int sub_408440()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408240();
}

int sub_408a10()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_408bd0() != 0)
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

int sub_4074c0()
{
    unsigned long long *v1;  // rdi

    __explicit_bzero_chk();
    free(v1);
    if (*(v1) == 0)
    {
        return 0;
    }
}

int sub_406b20()
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
    return sub_406590();
}

int sub_406c20()
{
}

int sub_406990()
{
}

int sub_406b90()
{
}

int sub_4043e0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_404380();
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

extern unsigned int g_40b5fd;
extern unsigned long long stderr[7];

int sub_4040c0()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b5fd, 0x5), stderr);
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
                    sub_406de0();
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
                sub_406de0();
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

extern unsigned long long program_invocation_short_name;

int sub_40294b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[4241040];
    unsigned int field_40b690;
} struct_0;

extern int512_t g_40b690;

int sub_404fb0()
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
    if (v8 != 0 || v8 != 0 || v6 != 0)
    {
        v9 = 0;
        if (*(v8) == 39)
        {
            v8 = &v8[1];
            v9 = 4;
        }
        v10 = sub_403f20();
        if ((unsigned int)v10 >= 0)
        {
            *(v4) = 1;
            v11 = (unsigned int)v9 | *((int *)(0x4 * v10 + (char *)&g_40b690));
            v7 = 0;
            *(v2) = v11;
        }
        else
        {
            v7 = sub_4085d0();
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
                        while ((v13 - 48 & 255) > 9 && v8 != v0);
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
    if ((unsigned int)v10 >= 0 || v12 != 0 || v8 == 0 && v8 == 0 && v6 == 0)
    {
        return v7;
    }
}

int sub_408410()
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
        sub_408490(); /* do not return */
    }
}

int sub_409ac0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_408a10();
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

int sub_4083f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408240();
}

int sub_404440()
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40cbb8;
extern unsigned int g_40cbd8;
extern unsigned int g_40cc08;
extern unsigned int g_40cc28;
extern unsigned int g_40cc58;
extern unsigned long long stderr;

int sub_408d50()
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
                                dcgettext(0x0, 0x40cbb8, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40cbd8, 0x5);
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
                                dcgettext(0x0, 0x40cc58, 0x5);
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
                            dcgettext(0x0, 0x40cc28, 0x5);
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
            dcgettext(0x0, 0x40cc08, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_406a70()
{
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60f338;
extern uint128_t g_60f340;
extern unsigned int g_60f350;
extern int512_t g_60f3c0;

int sub_406590()
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
    v17 = g_60f338;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60f350 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60f338 != 6353728)
            {
                v16 = sub_4082a0();
                g_60f338 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4082a0();
                v17 = v15;
                g_60f338 = v15;
                *(v15) = g_60f340;
            }
            memset(&v17[(long long)(int)g_60f350], 0x0, (int)((unsigned int)v13 + 1 - g_60f350) * 16);
            g_60f350 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_408490(); /* do not return */
        }
    }
    if (g_60f350 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_405360();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6353856)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_408240();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_405360();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

