#include "decompile_angr.h"
int sub_410310()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_403508() { crash_skku;
}
int sub_40a570()
{
}

int sub_40a5b0()
{
    unsigned long long v1;  // rax

    v1 = sub_40a0a0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_410330(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[104];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_0;

int sub_4110c0()
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
        v6 = sub_40c0a0();
        if (v6 != 0)
        {
            return (unsigned long long)free(v6);
        }
    }
    if ((((unsigned short)v3 & 258) == 0 || v6 == 0) && ((*(v7))[2] == 0 || ((unsigned short)v3 & 258) != 0) && (!((char)(v4->field_8->field_58 - 0 >> 63)) || ((unsigned short)v3 & 258) != 0) && (((unsigned short)v3 & 258) != 0 || v4->field_8 != 0))
    {
        abort(); /* do not return */
    }
}

int sub_40aa90()
{
    void tmp_19;  // tmp #19
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char *v3;  // rax
    char v4;  // al

    v2 = (*((char *)(unsigned long long)(unsigned int)sub_40aa00()) == 0? v1 : (unsigned long long)(unsigned int)sub_40aa00());
    v3 = sub_40aa60();
    tmp_19 = (char)*((char *)(v2 + v3));
    *((char *)(v2 + v3)) = 0;
    v4 = (char)tmp_19 != 0;
    return rax<8>;
}

int sub_414540()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __explicit_bzero_chk();
}

int sub_414430()
{
    unsigned long long *v1;  // rdi

    return *(v1);
}

int sub_40de10()
{
}

int sub_40daab()
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
    v7 = (unsigned int)sub_40c550();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4100e0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_40c550();
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

int sub_409f70()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r14
    unsigned long long v7;  // r12
    unsigned int *v8;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    char *v12;  // rsi
    unsigned long long v13;  // rax

    v2 = v1;
    v4 = v3;
    v5 = (unsigned int)sub_40aa00();
    v10 = sub_40aa60();
    if (v10 > 14)
    {
        v6 = (unsigned short)*((short *)v5);
        v7 = v10;
        *((short *)v5) = 46;
        *(v8) = 0;
        v10 = pathconf(v3, 0x3);
        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
        {
            v11 = 255;
        }
        if (*(__errno_location()) == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v11 = v10;
        }
        *((unsigned long long *)v5) = v6;
        if (v7 > v11)
        {
            v12 = v4 + v1;
            v13 = v4 + v2 - v5;
            if (v4 + v2 - v5 < v11)
            {
                v11 = v13 + 1;
            }
            else
            {
                v12 = v5 + v11 - 1;
            }
            *(v12) = 126;
            *((char *)(v5 + v11)) = 0;
            return v13;
        }
    }
    if (v10 <= 14 || v7 <= v11)
    {
        return v10;
    }
}

int sub_413ac0()
{
    unsigned long long v1;  // rax

    v1 = sub_413800();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_413920();
        sub_4139a0();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

int sub_40b650()
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
        v6 = sub_40b0f0();
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

extern struct_0 *g_61d458;
extern unsigned long long g_61d460;
extern unsigned long long g_61d468;
extern unsigned int g_61d470;
extern unsigned long long g_61d960;

int sub_40db90()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_61d470;
    if (g_61d470 > 1)
    {
        v2 = &g_61d458[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_61d458[(unsigned long long)(g_61d470 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_61d458->field_8 != 6412640)
    {
        v1 = free(g_61d458->field_8);
        g_61d460 = 0x100;
        g_61d468 = &g_61d960;
    }
    if (g_61d458 != 6411360)
    {
        v1 = free(g_61d458);
        g_61d458 = &g_61d460;
    }
    g_61d470 = 1;
    return v1;
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
    char padding_9[39];
    unsigned long long field_30;
} struct_0;

int sub_403c90()
{
    struct_0 *v1;  // rdx
    unsigned long long v2;  // rax
    unsigned int v3;  // edi
    unsigned int v4;  // esi
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int v7;  // ecx
    unsigned int *v8;  // rax

    v2 = v1->field_30;
    if (v1->field_30 == -1)
    {
        v5 = __fxstatat(0x1, v3, v4, (unsigned int)v1, 0x100);
        if (v5 != 0)
        {
            v1->field_30 = -2;
            v8 = __errno_location();
            v7 = *(v8);
            *((long long *)&v1->field_8) = (int)*(v8);
            v1 = v7;
        }
        else
        {
            v6 = v1->field_30;
        }
    }
    if (v5 == 0 || v1->field_30 != -1)
    {
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            return 0;
        }
        v8 = __errno_location();
        v1 = (unsigned long long)(unsigned int)*((int *)&v1->field_8);
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        *((struct_0 **)&v8) = v1;
        return -18446744069414584321;
    }
}

int sub_404d20()
{
    unsigned int v1;  // edi
    unsigned long v2;  // rcx
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rbp
    unsigned int v8;  // esi

    v3 = lseek(v1, v2, 0x1);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        if ((char)v4 != 0)
        {
            v5 = sub_404990();
            if (v5 < 0)
            {
                v7 = (unsigned int)sub_40dd80();
            }
        }
        if ((char)v4 == 0 || v5 >= 0)
        {
            return 1;
        }
    }
    else
    {
        v6 = (unsigned int)sub_40dd80();
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v5 < 0 && (char)v4 != 0)
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v8, 0x5));
        return 0;
    }
}

int sub_40df80()
{
}

int sub_40a5d0()
{
    char *v1;  // rsi

    if (*(v1) == 0 || v1 == 0)
    {
        return 2;
    }
}

int sub_414ae0() { crash_skku_timeout;
}
int sub_40da82()
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

extern unsigned long long g_61d928;

int sub_40a6b0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61d928 = v1;
    return v2;
}

int sub_40df30()
{
}

int sub_40c550()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned long long|unsigned int * v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long|char|unsigned long v4;  // [bp-0xc0]
    unsigned long long|char|unsigned long v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char v9;  // [bp-0x98]
    unsigned long long|unsigned long v10;  // [bp-0x90]
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
    unsigned long long|char|unsigned long v33;  // r10
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbp
    unsigned long long v37;  // rax
    unsigned long long v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v40;  // r11
    unsigned long long|unsigned long v41;  // rbp
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    char v44;  // al
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rcx
    unsigned long long|unsigned short|unsigned long v47;  // rax
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
            v26 = (unsigned int)sub_40c450();
            v27 = (unsigned long long)(unsigned int)sub_40c450();
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
                                    }
                                    if ((v71 > v70 || ((char)((unsigned int)0 ^ 1) & (unsigned int)v40 == 2) != 0) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v40 == 2) == 0 || v71 > v70 + 3))
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
                    if (v8 == 0 || v36 > v39 || v37 != 0)
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
                            if (v17 == 0)
                            {
                                v72 = 0;
                            }
                            else
                            {
                                v81 = 0;
                            }
                        case 12:
                            v41 = 102;
                            break;
                        case 13:
                            v5 = 0;
                        case 32:
                            v42 = 0;
                            v41 = 32;
                            v72 = v5;
                            v5 = v42;
                            v72 = 0;
                            if (v25 != 0)
                            {
                                v66 = (unsigned int)((unsigned long long)v25[v41 % 32] >> ((char)v41 & 31)) & 1;
                                v71 = (unsigned int)v40 == 2;
                            }
                            if (((char)((unsigned long long)v25[v41 >> 5] >> ((char)v41 & 31)) & 1) == 0 || v25 == 0)
                            {
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
                            }
                            if (((char)((unsigned long long)v25[v41 >> 5] >> ((char)v41 & 31)) & 1) != 0 || v5 != 0)
                            {
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
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v43 = 0;
                            v72 = v5;
                            v71 = 0;
                            v5 = v43;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v42 = 0;
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
                        }
                    case 32:
                        v41 = 32;
                        v71 = (char)((unsigned int)v40 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v71 = (char)((unsigned int)v40 == 2);
                        v72 = 0;
                    case 35: case 126:
                        v71 = (unsigned int)v40 == 2;
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
                            v72 = v72;
                            v72 = 0;
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
                        if (v44 == 0)
                        {
                            break;
                        }
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
                            v70 = (unsigned int)sub_40c550();
                        }
                    }
                }
            }
            if (v6 == 0 && v72 == 0 && v18 != 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && (v73 == 0 & v14 != 0) == 0 || v72 == 0 && (char)v79 == 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || v72 == 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && v18 == 0)
            {
                v82 = v13;
                if (v13 != 0 && v80 != 0)
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
                    v47 = sub_413710();
                    v53 = v47;
                    if (v47 != -2 && v47 != 0 && v47 != -1)
                    {
                        if ((int)v10 == 2 && v17 != 0 && v47 != 1)
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
                    if (v47 == 0 || v47 != -2 && v47 != -1 && (unsigned int)v47 != 0)
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
                if (v47 == -2 || v47 == 0 || v47 == -1 || (unsigned int)v47 != 0)
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
                    if ((v74 < v58 || v71 == 0) && (v71 == 0 || v57 == 0) && (v74 < v58 || v71 != 0))
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
            if (...)
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v70 = (unsigned int)sub_40c550();
            }
            if (v17 == 0 && (((char)((unsigned long long)v25[v41 >> 5] >> ((char)v41 & 31)) & 1) != 0 || v5 != 0) && (v25 != 0 || v5 != 0) || v5 == 0 && (((char)((unsigned long long)v25[v41 >> 5] >> ((char)v41 & 31)) & 1) == 0 || v25 == 0) || (v15 != 1 || v71 != 0) && v70 >= v73)
            {
                if (v70 < v73)
                {
                    *((unsigned long long *)(v29 + v70)) = v41;
                }
                v70 += 1;
                v6 = (v72 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (...)
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

typedef struct struct_0 {
    char padding_0[64];
    unsigned long long field_40;
} struct_0;

int sub_405390()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = sub_40b8c0();
    v2->field_40 = v1;
    return v1;
}

extern unsigned long long g_61ce30;

int sub_415188()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_61ce30;
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

int sub_40b770()
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

int sub_40f450()
{
}

extern unsigned long long g_61d938;

int sub_40a7c0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61d938 = v1;
    return v2;
}

int sub_40c30a()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al

    v5 = strcmp(*(v3), *(v1));
    v6 = (unsigned int)v5 == 0;
    return rax<8>;
}

int sub_409b50()
{
    unsigned int *v0;  // [bp-0x160]
    unsigned int v1;  // [bp-0x158]
    unsigned long v2;  // [bp-0x150]
    unsigned int v3;  // [bp-0x148]
    unsigned int v4;  // [bp-0x144]
    unsigned int v6;  // edx
    unsigned int v7;  // ebp
    unsigned long long v8;  // rbx
    unsigned int v9;  // r9d
    void *v11;  // rbx
    unsigned int v12;  // edi
    unsigned long v13;  // rsi
    unsigned int v14;  // r8d
    unsigned int *v16;  // r9
    unsigned long long|unsigned int v17;  // r12
    unsigned long v18;  // rcx
    unsigned long long v19;  // rax

    v7 = v6;
    v8 = linkat();
    if ((char)v9 == 1 && (unsigned int)v8 != 0 && *(v0) == 17)
    {
        v0 = __errno_location();
        v11 = (unsigned long long)(unsigned int)sub_409ac0();
        if (v11 != 0)
        {
            v1 = v12;
            v2 = v13;
            v3 = v6;
            v4 = v14;
            v16 = v0;
            if (sub_40e910() != 0)
            {
                v17 = *(v0);
            }
            else
            {
                v0 = v0;
                v17 = renameat(v7, (unsigned int)v11, v7, v18);
                if ((unsigned int)v17 != 0)
                {
                    v17 = *(v0);
                }
                v0 = v0;
                unlinkat(v7, (unsigned int)v11, 0x0);
                v16 = v0;
            }
            if (v11 != stack_base + -312)
            {
                v0 = v16;
                free(v11);
                v16 = v0;
            }
            v8 = 1;
            if (v17 != 0)
            {
                *((unsigned long long *)&v16) = v17;
                v8 = -18446744069414584321;
            }
        }
        else
        {
            v8 = -18446744069414584321;
        }
    }
    v19 = v8;
    return v19;
}

int sub_414a90()
{
    unsigned long long *v1;  // rdi

    __explicit_bzero_chk();
    free(v1);
    if (*(v1) == 0)
    {
        return 0;
    }
}

int sub_40dca0()
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
    return sub_40d780();
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_414930()
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
                    sub_414ae0();
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
                            return sub_414ae0();
                        }
                    }
                    sub_414ae0();
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

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4096d0()
{
    unsigned long long v1[3];  // rbx
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    struct_0 *v5;  // rbp
    unsigned long long v6;  // rax

    v1 = (unsigned long long)(unsigned int)sub_4100e0();
    v1[0] = v2;
    v1[2] = (unsigned int)sub_410310();
    v1[1] = v3;
    if (rbp<8> != 0)
    {
        rbp<8> = sub_40c060();
        v6 = 0;
        if (v1 != rbp<8>)
        {
            free(v1[2]);
            free(v1);
            v6 = v5->field_10;
        }
        return v6;
    }
    sub_410330(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_414920()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

int sub_40e440()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40e420()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi
    struct_0 *v3;  // rsi

    v1 = -18446744069414584321;
    if (v2->field_8 >= v3->field_8)
    {
        v1 = (char)(v2->field_8 > v3->field_8);
    }
    return v1;
}

int sub_40a640()
{
    void tmp_5;  // tmp #5
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long v3;  // r8
    unsigned long long v4;  // rax
    unsigned long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long v7;  // r8

    if (v1 != 0 && v2 != 0)
    {
        v3 = v2;
        for (v4 = v1; (0 CONCAT v4) % v3 >> 64 != 0; v3 = tmp_5 >> 64)
        {
            v4 = v3;
        }
        v5 = (0 CONCAT v1) % v3;
        v7 = (0 CONCAT v1) % v3 * v2;
    }
    if (v2 == 0 || v1 == 0 || v7 > v6 || (0 CONCAT v7) % v2 != v5)
    {
        v7 = ((v2 != 0? v2 : 0x2000) <= v6? (v2 != 0? v2 : 0x2000) : v6);
    }
    return v7;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_413be0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rax

    v1->field_10 = 0;
    v1->field_18 = 9827862;
    return v2;
}

int sub_409c90()
{
    unsigned long v0;  // [bp-0x148]
    unsigned int v1;  // [bp-0x140]
    unsigned long v3;  // rsi
    unsigned int v4;  // ebp
    char v5;  // cl
    unsigned int *v6;  // r14
    void *v7;  // rbx
    unsigned long v8;  // rdi
    unsigned long long v9;  // rax
    unsigned int v10;  // edx
    unsigned long long v11;  // rax
    unsigned int|unsigned long v12;  // r12d
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rax

    v4 = v3;
    v13 = symlinkat();
    if (v5 == 1 && (unsigned int)v13 != 0)
    {
        v6 = __errno_location();
        if (*(v6) == 17)
        {
            v7 = (unsigned long long)(unsigned int)sub_409ac0();
            if (v7 != 0)
            {
                v0 = v8;
                v1 = v3;
                v9 = sub_40e910();
                if (v9 != 0)
                {
                    v12 = *(v6);
                }
                else
                {
                    v11 = renameat(v4, (unsigned int)v7, v4, v10);
                    if (!(v11 == 0))
                    {
                        v12 = *(v6);
                        unlinkat(v4, (unsigned int)v7, 0x0);
                    }
                    else if (v7 != stack_base + -312)
                    {
                        free(v7);
                    }
                }
                if (v9 != 0 || v11 != 0)
                {
                    if (v7 != stack_base + -312)
                    {
                        free(v7);
                    }
                    if (v12 != 0)
                    {
                        *((unsigned long *)&v6) = v12;
                        v13 = -18446744069414584321;
                    }
                }
                if (v12 == 0 || v9 == 0 && v11 == 0)
                {
                    v13 = 1;
                }
            }
            else
            {
                v13 = -18446744069414584321;
            }
        }
    }
    v14 = v13;
    return v14;
}

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int sub_410c50()
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
            v5 = sub_413d80();
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

int sub_413c70()
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

extern int512_t g_416da0;

int sub_40a57a()
{
    return *((int *)&((char *)&g_416da0)[4 * (unsigned long long)(unsigned int)sub_413ac0()]);
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

int sub_4105e0()
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

int sub_410240() { crash_skku;
}
int sub_4106b0()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax<8>;
}

int sub_40ba50()
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

int sub_4105a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_410610();
    }
}

int sub_41035c()
{
    abort(); /* do not return */
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

int sub_410610()
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

int sub_40e450() { crash_skku;
}
int sub_40ea70()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_40e910();
    }
    sub_40e8f0(); /* do not return */
}

int sub_413790()
{
    unsigned int *v1;  // rcx
    unsigned int v2;  // edx

    *(v1) = v2;
    return 0;
}

int sub_414fd0()
{
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_40b2c0()
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
                        v8 = sub_40b0f0();
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
                    v13 = (unsigned long long)(unsigned int)sub_40b0f0();
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_40ff00()
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
    return sub_40fb00();
}

extern int512_t g_61da60;

int sub_40d970()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_61da60 : v1)) = v2;
    return &g_61da60;
}

int sub_40dc80()
{
}

int sub_40d920()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4102e0();
}

int sub_40e7f0()
{
    unsigned long v2;  // rbx
    unsigned int *v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned int v6;  // r12d
    unsigned int *v7;  // rbx

    if (v2 != 0)
    {
        v2 = sub_40a880();
        v4 = (unsigned int)sub_40e450();
        if (closedir() == 0)
        {
            return stack_base + 0;
        }
        v6 = *(v3);
        v3 = __errno_location();
        free(v3);
        *(v7) = v6;
        return 0;
    }
    return 0;
}

int sub_413b30()
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

int sub_410cc0()
{
    unsigned int v1[19];  // rdi
    char v4;  // bpl

    if (((char)v1[9] & 4) == 0)
    {
        if (((char)(v1[9] >> 8) & 2) != 0)
        {
            sub_410c50();
        }
        else
        {
            v4 = fchdir(v1[5]) != 0;
        }
    }
    sub_410a80();
    return stack_base + 0;
}

int sub_4136f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_413040();
}

int sub_40eaf0()
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
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    unsigned short field_20;
    char padding_22[6];
    unsigned long long field_28;
} struct_0;

int sub_4097a0()
{
    struct_0 *v1;  // rsi
    unsigned int v2;  // edi

    v1->field_0 = v2;
    v1->field_28 = 0;
    v1->field_8 = 0;
    v1->field_18 = 0;
    v1->field_20 = 0;
    v1->field_10 = 1;
    return 0;
}

extern unsigned int g_416330;

int sub_4049f0()
{
    unsigned int *v0;  // [bp-0x8]
    unsigned int *v2;  // rbx

    v0 = v2;
    *(v2) = 95;
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x416330, 0x5));
}

typedef struct struct_0 {
    char padding_0[26];
    char field_1a;
} struct_0;

int sub_405400()
{
    unsigned int *v1;  // rax
    struct_0 *v2;  // rdi

    v1 = __errno_location();
    v1 = *(v1) == 1 | *(v1) == 22;
    if (*(v1) == 22 || *(v1) == 1)
    {
        v1 = (unsigned long long)((unsigned int)v2->field_1a ^ 1);
    }
    return v1;
}

int sub_40aad0()
{
}

extern uint128_t g_61da60;
extern uint128_t g_61da70;
extern uint128_t g_61da80;
extern unsigned long long g_61da90;

int sub_40dec0()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_61da60;
    *((uint128_t *)&v1) = g_61da70;
    *((uint128_t *)&v2) = g_61da80;
    v4 = g_61da90;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_40d780();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_410130()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b490()
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
            if (v2[1] == 0 || *(v2) == 0)
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_414910()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

extern unsigned int g_416aae;

int sub_409e20()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12

    if ((unsigned int)v2 == 0)
    {
        v2 = (unsigned int)sub_40c430();
        return v3;
    }
    v4 = (unsigned int)sub_40dfd0();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x416aae, 0x5));
    return v2;
}

extern unsigned int g_4169c9;
extern unsigned int g_4169da;
extern unsigned int g_4169eb;

int sub_404de0()
{
    void tmp_2;  // tmp #2
    void tmp_14;  // tmp #14
    unsigned int|unsigned long v0;  // [bp-0xa0]
    void tmp_3;  // tmp #3
    unsigned long v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x90]
    char v3;  // [bp-0x8b]
    char v4;  // [bp-0x8a]
    char v5;  // [bp-0x89]
    void *v6;  // [bp-0x88]
    unsigned long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    unsigned long v10;  // [bp-0x68]
    unsigned long long *v11;  // [bp-0x60]
    unsigned long v12;  // [bp-0x58]
    char *v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x3c]
    unsigned long v15;  // [bp+0x8]
    unsigned long v16;  // [bp+0x10]
    unsigned long v17;  // [bp+0x18]
    unsigned long long *v18;  // [bp+0x20]
    char *v19;  // [bp+0x28]
    char v20;  // r9b
    unsigned int v21;  // r9d
    void *v22;  // rdx
    unsigned int v23;  // esi
    unsigned long v24;  // r8
    unsigned long v25;  // rcx
    unsigned int v26;  // edi
    unsigned long long v27;  // cc_dep1
    void *v29;  // r11
    char *v30;  // rsi
    unsigned int|unsigned long v31;  // rdx
    unsigned long long v32;  // r9
    unsigned long long v33;  // r9
    unsigned long long v34;  // r12
    unsigned long long|void * v35;  // r13
    unsigned long long v36;  // r14
    unsigned long long v37;  // r15
    unsigned long long v38;  // rbx
    unsigned long long|unsigned long v39;  // rax
    unsigned long long v40;  // r15
    unsigned int *v41;  // rbx
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax

    v5 = v20;
    v10 = v15;
    *(v19) = 0;
    v1 = v16;
    v11 = v18;
    v7 = v17;
    v13 = v19;
    *(v18) = 0;
    if (v17 != 0)
    {
        v14 = v21;
        v36 = 0;
        v37 = 0;
        v6 = v22;
        v2 = v23;
        *((int *)&v12) = (v24 == 0? v25 : v24);
        while (true)
        {
            v39 = read(v26, v6, (v25 <= v7? *((long long *)&v9) : v7));
            v8 = v39;
            v27 = v39;
            if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
            {
                v41 = __errno_location();
                v40 = 0;
                v44 = (unsigned int)sub_40dd80();
                error(0x0, *(v41), (unsigned long long)dcgettext(0x0, 0x4169c9, 0x5));
            }
            else if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v35 = v6;
                v34 = v8;
                v38 = v12;
                *(v11) = *(v11) + v8;
                v29 = v6;
                v3 = v24 != 0;
                while (true)
                {
                    tmp_2 = v38;
                    tmp_14 = !(v38 <= v34);
                    v38 = (!(v38 <= v34)? v34 : v38);
                    v39 = (tmp_14? v34 : tmp_2) != 0 & v3;
                    if (((tmp_14? v34 : tmp_2) != 0 & v3) != 0)
                    {
                        v30 = v35;
                        v31 = v38;
                        while (true)
                        {
                            if (*(v30) == 0)
                            {
                                v30 = &v30[1];
                                v31 -= 1;
                                if (v31 != 1)
                                {
                                    v0 = v29;
                                    v39 = (char)(memcmp(v35, v30, (unsigned int)v39 ^ 0) != 0);
                                }
                                else
                                {
                                    v32 = (0 ^ 1) & (unsigned int)v11;
                                }
                            }
                            else
                            {
                                v39 = v39;
                                v31 = 0;
                                v39 = 0;
                            }
                            if (v31 != 1 || *(v30) != 0)
                            {
                                v32 = v21 & v31;
                                if (v38 == v34 && v39 != 0)
                                {
                                    if (v32 != 0)
                                    {
                                        v0 = 1;
                                        v39 = 0;
                                    }
                                    else
                                    {
                                        v39 = 0;
                                    }
                                }
                            }
                            if (v39 == 0 || v38 != v34 || v31 == 1 && *(v30) == 0)
                            {
                                if (v32 == 0)
                                {
                                    break;
                                }
                                v0 = 0;
                            }
                            if (v32 != 0)
                            {
                                *((unsigned long long *)&v4) = v32;
                                break;
                            }
                        }
                        if ((v38 == v34 || v32 != 0) && (v32 != 0 || v39 != 0) && ((v31 & 15) == 0 || v31 == 1 || *(v30) != 0) && (v32 != 0 || v31 != 1 || *(v30) != 0) && (v31 == 1 || v39 == 0 || v38 != v34 || v32 != 0) && (*(v30) == 0 || v39 == 0 || v38 != v34 || v32 != 0))
                        {
                            v39 = sub_404d20();
                            v33 = v4;
                        }
                        else if (v38 == v34 && v32 == 0 && v39 != 0 && ((v31 & 15) == 0 || *(v30) != 0) && (v31 != 1 || *(v30) != 0))
                        {
                            v37 += v38;
                            v0 = 1;
                            v4 = 0;
                        }
                        else if ((v38 == v34 || v32 != 0) && (v32 != 0 || v39 != 0) && ((v31 & 15) == 0 || v31 == 1 || *(v30) != 0) && (v32 != 0 || v31 != 1 || *(v30) != 0) && (v31 == 1 || v39 == 0 || v38 != v34 || v32 != 0) && (*(v30) == 0 || v39 == 0 || v38 != v34 || v32 != 0))
                        {
                            v39 = sub_40afb0();
                            v33 = v4;
                        }
                    }
                    else
                    {
                        v39 = v36;
                        if ((char)v37 == 0 && v36 != 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0))
                        {
                            v37 = v39;
                        }
                    }
                    if (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || (char)v37 != 0)
                    {
                        if (((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) == 0 && v38 != 0)
                        {
                            if (9223372036854775807 - v38 >= v37)
                            {
                                v37 += v38;
                                v34 -= v38;
                                v35 += v38;
                                v36 = v39;
                            }
                            else
                            {
                                v40 = 0;
                                v42 = (unsigned int)sub_40dd80();
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4169eb, 0x5));
                            }
                        }
                        if (((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || v36 == 0 && v38 == 0 || v36 == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0)
                        {
                            v39 = sub_40afb0();
                            v33 = v4;
                            if (v37 != v39)
                            {
                                v40 = v36;
                                v43 = (unsigned int)sub_40dd80();
                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4169da, 0x5));
                            }
                        }
                        if ((((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || v36 != 0) && (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0))
                        {
                            v39 = sub_404d20();
                            v33 = v4;
                        }
                    }
                    if (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 && (char)v37 != 0)
                    {
                        v37 += v38;
                        v0 = 1;
                        v4 = 0;
                    }
                    if ((((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || (char)v37 != 0) && (((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || v36 != 0) && (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && (char)v37 != 0 || (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || (char)v37 != 0) && (v36 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && v37 == v39)
                    {
                        if (v0 == 0)
                        {
                            v34 -= v38;
                            v36 = v39;
                            v35 += v38;
                            v37 = v38;
                        }
                        else if (v38 != 0)
                        {
                            if (v33 != 0)
                            {
                                v37 = v38;
                                v36 = v39;
                                v38 = 0;
                            }
                            else
                            {
                                v34 -= v38;
                                v36 = v39;
                                v35 += v38;
                                v37 = 0;
                            }
                        }
                    }
                    if (...)
                    {
                        tmp_3 = v7;
                        v7 -= v8;
                        *((unsigned long long *)&v13) = v39;
                        if (tmp_3 != v8)
                        {
                            v36 = v39;
                        }
                    }
                }
                if (((((char)v37 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v38 == 0 && v36 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 != 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && (char)v37 != 0 || ((char)v37 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 == 0 && v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && v37 == v39) && v0 != 0 && v38 == 0 || v34 == 0) && tmp_3 == v8)
                {
                    if (v39 == 0)
                    {
                        break;
                    }
                }
                else if (((((char)v37 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v38 == 0 && v36 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 != 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && (char)v37 != 0 || ((char)v37 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 == 0 && v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && v37 == v39) && v0 != 0 && v38 == 0 || v34 == 0) && tmp_3 != v8)
                {
                    v39 = read(v26, v6, (v25 <= v7? *((long long *)&v9) : v7));
                    v8 = v39;
                    v27 = v39;
                }
                else if (9223372036854775807 - v38 < v37 && ((char)v37 != 0 || v38 != 0) || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && (char)v37 == 0 && v36 != 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) || ((char)v37 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 == 0 && v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v36 == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && v37 != v39)
                {
                    v45 = v40;
                    return v45;
                }
            }
            else
            {
                v39 = v36;
            }
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v39 != 0)
        {
            v40 = 1;
        }
        else if (*(v41) != 4 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v45 = v40;
            return v45;
        }
    }
    v40 = 1;
    v45 = v40;
    return v45;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_40b420()
{
    struct_0 *v1;  // rdi

    return v1->field_18;
}

int sub_410d90()
{
    unsigned int v1;  // edi
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdi
    unsigned long long *v5;  // rsi

    if (((unsigned short)v1 & 258) != 0)
    {
        v2 = sub_40b8c0();
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
            sub_413be0();
            return 1;
        }
    }
    if (v4 == 0 || ((unsigned short)v1 & 258) != 0)
    {
        return v2;
    }
}

int sub_414fe0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4105a0() != 0)
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

int sub_40dc60()
{
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
                    sub_410a30();
                }
                if (v4 == 0x2000)
                {
                    v2->field_48 = v2->field_48 | 0x2000;
                }
                if (v1->field_0->field_58 == 0 && *((char *)v1->field_0->field_30) != 47 && ((char)v1->field_48 & 4) == 0)
                {
                    v6 = sub_410df0();
                    v7 = v6;
                    if ((unsigned int)v6 >= 0)
                    {
                        v2->field_8 = (unsigned int)sub_411160();
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
                            sub_410c50();
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
                if (*((char *)v1->field_0->field_30) == 47 || v1->field_0->field_58 != 0 || ((char)v1->field_48 & 4) != 0)
                {
                    v8 = sub_411160();
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

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_61d458;
extern uint128_t g_61d460;
extern unsigned int g_61d470;
extern int512_t g_61d960;

int sub_40d780()
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
    v17 = g_61d458;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_61d470 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_61d458 != 6411360)
            {
                v16 = sub_410140();
                g_61d458 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_410140();
                v17 = v15;
                g_61d458 = v15;
                *(v15) = g_61d460;
            }
            memset(&v17[(long long)(int)g_61d470], 0x0, (int)((unsigned int)v13 + 1 - g_61d470) * 16);
            g_61d470 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_410330(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_61d470 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_40c550();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6412640)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4100e0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_40c550();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned int g_61dab4;

int sub_410460()
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
        if (g_61dab4 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_410460();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_61dab4 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_61dab4 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_410460();
        }
        if ((*(v12) == 22 || g_61dab4 < 0) && ((unsigned int)v15 < 0 || g_61dab4 < 0) && (g_61dab4 == -1 || g_61dab4 >= 0) && (g_61dab4 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_61dab4 >= 0))
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b700()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_40b0f0();
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
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[32];
    unsigned long long field_38;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

int sub_4108a0()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3[8];  // rdi
    struct_0 *v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long v6[2];  // rdi
    unsigned long long v7[2];  // rdx
    struct_2 *v8;  // rbx
    unsigned long long *v9;  // r8
    unsigned long long v11[2];  // rdx
    struct_2 *v12;  // rsi
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdi
    struct_2 *v15;  // rdx

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

extern char g_61dab0;
extern char g_61dab1;

int sub_4100a0()
{
    unsigned long long v1;  // rax
    char v2;  // al

    if (g_61dab1 != 0)
    {
        return (unsigned long long)g_61dab0;
    }
    v1 = geteuid();
    g_61dab1 = 1;
    v2 = (unsigned int)v1 == 0;
    g_61dab0 = (unsigned int)v1 == 0;
    return rax<8>;
}

int sub_4137c0()
{
    return 0 - (unsigned int)(char)(sub_4137a0() != 0);
}

int sub_4137a0()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_413d80()
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

int sub_40b0d0()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_40ab60()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long|unsigned long v3;  // [bp-0x8]
    unsigned long long v5[3];  // rdi
    unsigned long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long long v9;  // rdx
    unsigned long long v10[2];  // rbp
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long *v18;  // rdi
    void *v19;  // rdi

    if (v5 != 0)
    {
        v3 = v7;
        v2 = v8;
        v1 = stack_base + 0;
        v10 = v9;
        v0 = v11;
        v5[0] = (unsigned int)sub_410310();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_40c060();
        if (!(v13 != 0))
        {
            sub_410330(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_4100e0();
            v3 = v0;
            v19 = *(v18);
            free(v19);
        }
        else
        {
            v15 = v0;
            v16 = v2;
            v17 = v3;
            return v13;
        }
    }
    else
    {
        return v6;
    }
}

extern unsigned int g_418314;
extern unsigned long long stderr[7];

int sub_4139a0()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x418314, 0x5), stderr);
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
                    sub_40dfd0();
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
                sub_40dfd0();
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

int sub_40b030()
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

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[20];
    unsigned long long field_30;
} struct_0;

int sub_40ac30()
{
}

int sub_410370()
{
    unsigned long long v1;  // rax

    v1 = fts_open();
    if (v1 != 0)
    {
        return v1;
    }
    else if (*(__errno_location()) != 22)
    {
        sub_410330(); /* do not return */
    }
    __assert_fail(); /* do not return */
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

typedef struct struct_3 {
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
} struct_3;

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

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
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
} struct_4;

typedef struct struct_8 {
    char padding_0[1];
    char field_1;
} struct_8;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
} struct_6;

int fts_read()
{
    void tmp_11;  // tmp #11
    void tmp_9;  // tmp #9
    void tmp_8;  // tmp #8
    void tmp_13;  // tmp #13
    void tmp_10;  // tmp #10
    struct_0 *v1;  // rdi
    struct_3 *v2;  // rbp
    unsigned long long v3;  // rax
    struct_2 *v4;  // r12
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long|struct_4 * v7;  // rbx
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
    struct_6 *v27;  // rax
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
    unsigned long long|unsigned int|unsigned long v48;  // edi
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
                    v5 = sub_4106f0();
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
                        v11 = sub_410df0();
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
            if (v1->field_0->field_70 != 1 && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2))
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
                            v10 = sub_4106f0();
                            *((unsigned long long *)&v7->field_70) = v10;
                            if (((char)v1->field_48 & 4) == 0 && v10 == 1)
                            {
                                v15 = sub_410df0();
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
                            v8 = sub_410cc0();
                            if (v8 == 0)
                            {
                                v12 = *((long long *)&v1->padding_4a[11]);
                                if (((unsigned short)v4->field_48 & 258) == 0)
                                {
                                    free(v12);
                                }
                                else if (v12 != 0)
                                {
                                    sub_40bb00();
                                }
                                tmp_11 = v7->field_60;
                                v19 = &v7[1].field_58;
                                v20 = v4->field_20;
                                v7->field_48 = v7->field_60;
                                memmove(v20, &v7[1].field_58, tmp_11 + 1);
                                v22 = strrchr();
                                if (v22 != 0 && (v19 != v22 || v19->field_1 != 0))
                                {
                                    v37 = strlen(v22 + 1);
                                    memmove(v19, v22 + 1, v37 + 1);
                                    v7->field_60 = v37;
                                }
                                tmp_9 = v4->field_20;
                                v7->field_38 = v4->field_20;
                                v7->field_30 = tmp_9;
                                sub_410d90();
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
                            v7 = (unsigned long long)(unsigned int)sub_411160();
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
                                                sub_410c50();
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
                                        v32 = sub_410e40();
                                    }
                                }
                                else
                                {
                                    v29 = sub_410cc0();
                                }
                                if (v29 == 0 && v7->field_58 == 0 || v32 == 0 && v7->field_58 != 0 || v7->field_58 != 0 && ((char)*((short *)&v7->field_72) & 2) != 0 || v7->field_58 != 0 && (v28 & 1) != 0)
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
                                if (v7->field_70 != 2 || v7->field_58 == 0 && v29 != 0 || ((char)*((short *)&v7->field_72) & 2) == 0 && (v28 & 1) == 0 && v7->field_58 != 0 && v32 != 0)
                                {
                                    if (v7->field_40 == 0)
                                    {
                                        v7->field_70 = 6;
                                        sub_4110c0();
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
                else if ((v2->field_10 == 0 || v7->field_74 != 4) && (v2->field_10 == 0 || v7->field_58 != 0) && (v2->field_8->field_18 != 0 || v2->field_10 != 0) && (v2->field_10 != 0 || v7 != 0))
                {
                    tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
                    *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
                    memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
                    v49 = v7->field_70;
                }
                else if (v8 == 0 && v7->field_58 == 0 && v2->field_10 != 0)
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
            v2->field_70 = sub_4106f0();
        }
    }
    if ((v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2) && v2->field_78 == v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2) && ((char)v1->field_48 & 64) == 0) && v1->field_8 != 0)
    {
        if (!(((char)(v1->field_48 >> 8) & 32) == 0))
        {
            v1->field_48 = v1->field_48;
            sub_410a30();
            v1->field_8 = 0;
        }
        else if (sub_410e40() != 0)
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
    if (v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2) && v2->field_78 != v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0->field_74 != 2 && v1->field_0 != 0 && v1->field_0->field_74 == 4)
    {
        if ((v2->field_72 & 2) != 0)
        {
            close(v2->field_44);
        }
        if (v1->field_8 != 0)
        {
            sub_410a30();
            v1->field_8 = 0;
        }
        v2->field_70 = 6;
        sub_4110c0();
    }
    if (...)
    {
        v7 = (unsigned int)sub_411160();
        v1->field_8 = v7;
        if (v7 == 0 && ((unsigned short)v1->field_48 & 0x4000) == 0)
        {
            if (v2->field_40 != 0 && v2->field_70 != 4)
            {
                v2->field_70 = 7;
            }
            sub_4110c0();
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
                v46 = sub_410be0();
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
        v49 = sub_4106f0();
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

int sub_40eae0()
{
}

int sub_410d20()
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

int sub_414400()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = (unsigned int)sub_414620();
    v2 = 0;
    if (v1 != 0)
    {
        v2 = sub_4100e0();
        *((unsigned long long *)v2) = v1;
        *((long long *)(v2 + 16)) = 0;
        *((long long *)(v2 + 8)) = 0;
    }
    return v2;
}

int sub_4106a0()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

int sub_410140()
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
            sub_410330(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
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

extern unsigned int g_4181b0;
extern unsigned int g_4181d0;
extern unsigned int g_418200;
extern unsigned int g_418220;
extern unsigned int g_418250;
extern unsigned long long stderr;

int sub_412a20()
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
                                dcgettext(0x0, 0x4181b0, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x4181d0, 0x5);
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
                                dcgettext(0x0, 0x418250, 0x5);
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
                            dcgettext(0x0, 0x418220, 0x5);
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
            dcgettext(0x0, 0x418200, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_4101b0() { crash_skku;
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

    v10 = sub_4025e0();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6409776 + rbx<8> * 8))();
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
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    char field_20;
    char field_21;
    char padding_22[6];
    unsigned long long field_28;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    char field_20;
    char field_21;
    char padding_22[6];
    struct struct_2 *field_28;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_4;

int sub_4097d0()
{
    unsigned long long|char v0;  // [bp-0x1038]
    void tmp_15;  // tmp #15
    unsigned long v1;  // [bp-0x1030]
    unsigned int v2;  // [bp-0x1028]
    unsigned int v3;  // [bp-0x1024]
    unsigned int v4;  // [bp-0x1020]
    unsigned long long|unsigned long v5;  // [bp-0x1018]
    unsigned long long|unsigned long v6;  // [bp-0x1008]
    unsigned int v7;  // [bp-0xff0]
    unsigned long long v9;  // r13
    struct_0 *v10;  // rdi
    struct_1 *v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rdx
    unsigned long v14;  // d
    unsigned long long v15;  // rcx
    unsigned long long *v16;  // rdi
    unsigned long long v17;  // rax
    unsigned long long *v19;  // rdi
    unsigned long long v20;  // rcx
    unsigned long v22;  // rax
    unsigned long v23;  // rdx
    unsigned long long v24;  // rax
    struct_4 *v25;  // rbx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rsi
    unsigned int|unsigned long v31;  // r9
    unsigned long long v32;  // r10
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // al
    unsigned long long *v39;  // rdx

    v9 = 0;
    v11 = v10;
    v12 = v10->field_28;
    v13 = v10->field_8;
    while (true)
    {
        v15 = 0x200;
        for (v16 = &v0; v15 != 0; v16 = &v16[v14])
        {
            v15 -= 1;
            v0 = 0;
        }
        v0 = v13;
        v4 = 72;
        v2 = v11->field_10;
        v1 = !(*((long long *)&v0));
        v17 = ioctl(v11->field_0, 0xc020660b, (unsigned int)&v0);
        if (v17 >= 0)
        {
            v37 = v3;
            if (!(v3 != 0))
            {
                v36 = v11->field_8;
                v11->field_21 = 1;
                v37 = (char)(v36 != 0);
            }
            else if (v11->field_18 <= !((unsigned long long)v3))
            {
                v19 = v11->field_28;
                v20 = v11->field_18 + v3;
                v11->field_18 = v20;
                v22 = 24 * v20;
                v23 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x18<64>, rcx<8>, cc_ndep<8>);
                if (v23 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v24 = sub_410140();
                    v11->field_28 = v24;
                    v25 = (char *)(v12 + -0x1 * v19) + v24;
                    v26 = v6;
                    v27 = v5;
                    if (v5 <= 9223372036854775807 - v6)
                    {
                        v28 = 0;
                        v29 = &v5;
                        do
                        {
                            if ((unsigned int)v9 != 0)
                            {
                                v31 = v7;
                                v32 = v25->field_8;
                                v30 = v25->field_0 + v25->field_8;
                                if (*((int *)&v25->field_10) == (v7 & -2) && v27 == v30)
                                {
                                    v33 = v26 + v32;
                                    *((unsigned int *)&v25->field_10) = v7;
                                    v28 = (unsigned int)v28 + 1;
                                    v25->field_8 = v33;
                                }
                            }
                            else
                            {
                                v30 = v11->field_8;
                                if (v11->field_8 <= v27)
                                {
                                    v31 = v7;
                                }
                            }
                            if ((unsigned int)v9 == 0 || *((int *)&v25->field_10) != (v7 & -2) || v27 != v30)
                            {
                                if (((unsigned int)v9 == 0 || v30 <= v27) && (v11->field_8 <= v27 || (unsigned int)v9 != 0))
                                {
                                    tmp_15 = v9;
                                    v28 = (unsigned int)v28 + 1;
                                    v9 = (unsigned int)v9 + 1;
                                    v25 = &v11->field_28[2 * tmp_15 + tmp_15];
                                    v11->field_28[2 * tmp_15 + tmp_15].field_0 = v27;
                                    v25->field_8 = v26;
                                    *((unsigned long *)&v25->field_10) = v31;
                                    if ((unsigned int)v28 >= v3)
                                    {
                                        break;
                                    }
                                }
                                if (((unsigned int)v9 == 0 || v30 > v27) && (v11->field_8 > v27 || (unsigned int)v9 != 0))
                                {
                                    if (v30 - v27 < v26)
                                    {
                                        break;
                                    }
                                    v5 = v30;
                                    v34 = v27 + v26 - v30;
                                    v6 = v34;
                                }
                            }
                            if ((unsigned int)v28 >= v3 && (v11->field_8 > v27 || v30 > v27))
                            {
                                break;
                            }
                            v29 = &(&v5)[7 * v28];
                            v26 = (&v5)[2 + 7 * v28];
                            v27 = (&v5)[7 * v28];
                        }
                        while ((&v5)[7 * v28] <= 9223372036854775807 - (&v5)[2 + 7 * v28]);
                        if ((unsigned int)v28 < v3 || (unsigned int)v28 < v3)
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (v11->field_8 > v27 || v30 > v27)
                        {
                            v37 = 0;
                            if (v11->field_8 != 0)
                            {
                                break;
                            }
                        }
                    }
                }
                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v23 != 0)
                {
                    sub_410330(); /* do not return */
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v5 <= 9223372036854775807 - v6 && v11->field_18 <= !((unsigned long long)v3) && v23 == 0 && v17 >= 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 != 0 && (v25->field_10 & 1) != 0 || v11->field_18 <= !((unsigned long long)v3) && v23 == 0 && v17 >= 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 != 0 && v5 > 9223372036854775807 - v6)
        {
            __assert_fail(); /* do not return */
        }
        if (v5 <= 9223372036854775807 - v6 && v11->field_18 <= !((unsigned long long)v3) && v23 == 0 && v17 >= 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 != 0 && (v25->field_10 & 1) != 0 || v11->field_18 <= !((unsigned long long)v3) && v23 == 0 && v17 >= 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 != 0 && v3 == 0)
        {
            if ((v25->field_10 & 1) == 0)
            {
                v35 = v11->field_21;
                if ((unsigned int)v9 <= 72)
                {
                    v11->field_18 = v9;
                    if (v35 == 0)
                    {
                        v11->field_8 = v25->field_8 + v25->field_0;
                    }
                }
                else if (v35 == 0)
                {
                    v39 = v11->field_28;
                    v11->field_18 = v9 - 1;
                    v11->field_8 = v39[3 * v9 + -5] + v39[3 * v9 + -6];
                }
            }
            else
            {
                v11->field_21 = 1;
            }
            if ((v25->field_10 & 1) != 0 || v35 != 0 && (unsigned int)v9 > 72)
            {
                v11->field_18 = v9;
            }
            v37 = 1;
        }
        if (v5 <= 9223372036854775807 - v6 && v11->field_18 <= !((unsigned long long)v3) && v23 == 0 && v17 >= 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 != 0 && (v25->field_10 & 1) != 0 || v17 < 0)
        {
            v11->field_20 = 1;
            v37 = 0;
        }
    }
    return v37;
}

int sub_40fee0()
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

int sub_40dc50()
{
}

int sub_40de40()
{
}

int sub_40eb50()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax<8>;
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
    unsigned long long|void * v0;  // [bp-0x50]
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
    unsigned long long *|unsigned long long [2] v17;  // r15
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
                v1 = sub_410d20();
                if (v1 != 0)
                {
                    v17 = *(v15);
                    if (*(v15) != 0)
                    {
                        v18 = sub_4109a0();
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
                                if (v1 != 0 && v20 != 0)
                                {
                                    *((long long *)&((char *)&g_a8)[v20]) = 2;
                                    *((unsigned long long **)&((char *)&g_70)[v20]) = &g_8;
                                    if (v10 == 0)
                                    {
                                        *((long long *)&((char *)&g_10)[v20]) = 0;
                                    }
                                }
                                if (v1 == 0 || v20 == 0)
                                {
                                    *((unsigned short *)&((char *)&g_70)[v20]) = sub_4106f0();
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
                                    v20 = (unsigned int)sub_4109a0();
                                }
                                if (v10 == 0 && (v20 != 0 || v1 != 0) && (v20 != 0 || v20 != 0))
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
                                v20 = (unsigned int)sub_4108a0();
                            }
                            if (v15[v21] == 0 && v20 != 0)
                            {
                                v24 = sub_4109a0();
                                *((struct_0 **)v9) = v24;
                            }
                            else
                            {
                                sub_410a30();
                                free(v0);
                            }
                        }
                        if ((*(v15) == 0 || v17 == 0) && (v10 == 0 || v17 == 0))
                        {
                            v20 = 0;
                        }
                        if ((*(v15) == 0 || v17 == 0 || v24 != 0) && (v10 == 0 || v17 == 0 || v24 != 0))
                        {
                            v24 = sub_4109a0();
                            *((struct_0 **)v9) = v24;
                        }
                        if (v24 != 0)
                        {
                            *((unsigned long long *)(v24 + &g_10)) = v20;
                            *((unsigned long long **)(v24 + &g_70)) = &g_8;
                            v25 = sub_410d90();
                            if (v25 != 0)
                            {
                                if (((unsigned short)*((int *)(v9 + 72)) & 516) == 0)
                                {
                                    v27 = sub_410df0();
                                    *((unsigned long long *)(v9 + 40)) = v27;
                                    if (v27 < 0)
                                    {
                                        *((int *)(v9 + 72)) = *((int *)(v9 + 72)) | 4;
                                    }
                                }
                                sub_413d50();
                            }
                        }
                        if (v25 == 0 || v24 == 0)
                        {
                            sub_410a30();
                            free(v0);
                        }
                    }
                    if ((v18 == 0 || v25 == 0 || v24 == 0) && (v25 == 0 || v24 == 0 || *(v15) != 0))
                    {
                        free(*((long long *)(v9 + 32)));
                    }
                }
                if (v25 == 0 || v1 == 0 || v24 == 0 || v18 == 0 && *(v15) != 0)
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

typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
} struct_0;

int sub_409ac0()
{
    unsigned long v1;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    struct_0 *v7;  // rax
    unsigned long long v8;  // rax

    v4 = v3;
    v5 = (unsigned int)sub_40aa00() - v1;
    if (v5 + 9 > 0x100)
    {
        v4 = malloc(v5 + 9);
        if (v4 == 0)
        {
            v8 = 0;
        }
    }
    if (v5 + 9 <= 0x100 || v4 != 0)
    {
        v7 = mempcpy(v4, v1, v5);
        v7->field_0 = 6365935209750754627;
        v7->field_8 = 0x7e0039322e3800;
        v8 = v4;
    }
    return v8;
}

int sub_40c2f0()
{
    return 0;
}

int sub_414440()
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
            sub_414930();
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
        if (v13 < v7 && v13 != v7 || v13 >= v7 && v13 != v7)
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

int sub_410290()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4100e0();
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

int sub_405360()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = sub_40b8c0();
    v2->field_38 = v1;
    return v1;
}

int sub_40e2f0()
{
    unsigned long v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    unsigned long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long long|char v5;  // rbx
    unsigned long v8;  // r13
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    v5 = 0;
    v8 = (unsigned int)sub_40aa60();
    v9 = sub_40aa60();
    if (v8 == v9)
    {
        v10 = memcmp((unsigned long long)(unsigned int)sub_40aa00(), (unsigned long long)(unsigned int)sub_40aa00(), v8);
        if (v10 == 0)
        {
            if (__xstat(0x1) != 0)
            {
                error(0x1, *(__errno_location()), "%s");
            }
            v14 = __xstat(0x1);
            if (v14 == 0)
            {
                v5 = 0;
                if (v1 == v3)
                {
                    v5 = v0 == v2;
                }
                free((unsigned long long)(unsigned int)sub_40a920());
                free((unsigned long long)(unsigned int)sub_40a920());
            }
            else
            {
                error(0x1, *(__errno_location()), "%s");
            }
        }
    }
    if (v14 == 0 || v10 != 0 || v8 != v9)
    {
        v15 = v5;
        return v15;
    }
}

extern int512_t g_61da60;

int sub_40d9c0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_61da60 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_61da60 : v1) + 4)) = v3;
    return v2;
}

int sub_409b30()
{
}

extern unsigned int g_416b91;

int sub_409d90()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax

    if ((unsigned int)v2 != -2)
    {
        if ((unsigned int)v2 == -1)
        {
            v4 = (unsigned int)sub_40dfd0();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x416b91, 0x5));
        }
        v2 = (unsigned int)sub_40c3f0();
        return v5;
    }
    v3 = (unsigned int)sub_40dfd0();
    error(0x0, *(__errno_location()), "%s");
    return v2;
}

int sub_40e8d0()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b500()
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
    unsigned long long|unsigned long v11;  // rbx
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

extern int512_t g_61d3e8;

int sub_415170()
{
}

int sub_4136d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_413610();
}

int sub_40b0f0()
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

extern unsigned long long g_61d488;

int sub_40345b()
{
    unsigned long long v1;  // rax

    v1 = &g_61d488;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40bb00()
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

int sub_409aa0()
{
}

extern unsigned int g_61d474;
extern unsigned int g_61d478;
extern unsigned int g_61d47c;
extern unsigned int g_61dac0;
extern unsigned int g_61dac4;
extern unsigned int g_61dac8;
extern unsigned long long g_61dad0;
extern unsigned long long g_61db00;

int sub_413610()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_61dac0 = g_61d47c;
    g_61dac4 = g_61d478;
    v1 = (unsigned int)v2;
    v0 = &g_61dac0;
    g_61d47c = g_61dac0;
    g_61db00 = g_61dad0;
    g_61d474 = g_61dac8;
    return sub_413040();
}

typedef struct struct_0 {
    char padding_0[28];
    char field_1c;
} struct_0;

int sub_413d70()
{
    struct_0 *v1;  // rdi

    return (unsigned long long)v1->field_1c;
}

int sub_41460a()
{
}

extern unsigned int g_417dd2;
extern unsigned int g_417dd6;
extern unsigned int g_417de6;
extern unsigned int g_417dfd;
extern unsigned int g_417e48;
extern unsigned int g_417f18;
extern unsigned int g_417f38;
extern unsigned int g_417f60;
extern unsigned int g_417f88;
extern unsigned int g_417fb8;

int sub_40fb00()
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
    dcgettext(0x0, 0x417dd2, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417e48, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x417dd6, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x417de6, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x417dfd, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x417f18, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x417f38, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x417f60, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x417f88, 0x5);
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
        dcgettext(0x0, 0x417fb8, 0x5);
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

int sub_414380()
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
    return sub_40eaf0();
}

extern char g_61d4f0;

int sub_403620()
{
    char v2;  // dl

    if (g_61d4f0 != 0)
    {
        sub_40aa90();
    }
    if (v2 != 0)
    {
        sub_40aa00();
        sub_40aa90();
        free((unsigned long long)(unsigned int)sub_40aeb0());
        return sub_403510();
    }
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

int sub_40bbe0()
{
    void tmp_15;  // tmp #15
    void *v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned int|unsigned long v2;  // [bp-0x58]
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
                v2 = (unsigned int)sub_40b030();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_40b2c0();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_40b2c0();
                    if (v22 != 0)
                    {
                        v23 = sub_40b2c0();
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
    if (((char)(BinaryOp CmpF & 69) & 1) == 0 && *((long long *)&v2) == 0 || v11->field_28->field_10 == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 && v11->field_28->field_10 != 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && v0 == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if (v11->field_10 != *((long long *)&v2) || (char)v21 != 0)
    {
        v24 = v21;
        return v24;
    }
}

int sub_413b80()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_414fe0();
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

extern unsigned int g_416420;

int sub_4052e0()
{
    unsigned int *v1;  // rbp
    char v2[39];  // rcx
    unsigned long long v3;  // rbx

    v1 = __errno_location();
    if (v2[4 + 3] != 0 && v2[4 + 6] == 0)
    {
        *(v1) = 95;
        return 0;
    }
    if (v2[4 + 3] == 0 || v2[4 + 6] != 0)
    {
        *(v1) = 95;
        v3 = (unsigned int)sub_40dca0();
        error(0x0, *(v1), (unsigned long long)dcgettext(0x0, 0x416420, 0x5));
        return 0;
    }
}

extern unsigned long long stdin;

int sub_4103f0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rbx
    char *v5;  // rax
    unsigned long long v6;  // rax

    v3 = 0;
    v0 = 0;
    v1 = 0;
    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        v5 = v0 + __getdelim(&v0, &v1, 0xa, stdin) - 1;
        if (*(v5) == 10)
        {
            *(v5) = 0;
        }
        v3 = (char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Call (target: 0x402a50<64>, prototype: () -> None, args: []), 0x0<64>, cc_ndep<8>);
    }
    free(v0);
    v6 = v3;
    return v6;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char field_1b;
    char padding_1c[8];
    char field_24;
    char padding_25[6];
    char field_2b;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    unsigned int field_18;
} struct_1;

extern unsigned int g_416450;
extern unsigned int g_4169ff;

int sub_405430()
{
    unsigned int|unsigned long v1;  // rsi
    unsigned int v2;  // r12d
    unsigned int v3;  // ebx
    char v4;  // r8b
    struct_0 *v5;  // rdi
    struct_1 *v6;  // r9
    struct_1 *v7;  // r9
    unsigned int v8;  // rdx
    unsigned int v9;  // eax
    unsigned int v10;  // ah
    unsigned int v11;  // eax
    unsigned long long v12;  // rax
    unsigned int *v13;  // rbx
    unsigned int v14;  // eax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned int *v18;  // r14
    unsigned int v19;  // ebx
    unsigned int *v20;  // r14
    unsigned int *v21;  // r15
    unsigned int v22;  // r14d
    unsigned int *v23;  // r15
    unsigned long long v24;  // r12
    unsigned long long v25;  // rax
    unsigned long long v26;  // r12

    v2 = v1;
    v3 = v8;
    if (v4 == 0)
    {
        if ((71776119061217535 & v5->field_18) != 0)
        {
            v1 = v6->field_18;
        }
        else if (v5->padding_25[1] != 0)
        {
            v1 = v7->field_18;
        }
        if ((71776119061217535 & v5->field_18) != 0 || v5->padding_25[1] != 0)
        {
            v9 = !((unsigned int)rdx<8>);
            v10 = (char)(!((unsigned int)rdx<8>) >> 8) | 14;
            v11 = rax<4> & v1;
            if (((unsigned short)v11 & 4095) != 0)
            {
                v12 = sub_40c430();
                if (v12 != 0)
                {
                    v13 = __errno_location();
                    v14 = *(v13);
                    if (*(&((char *)&v5->field_18)[3]) != 0 || v14 != 22 && v14 != 1)
                    {
                        v24 = (unsigned int)sub_40dd80();
                        error(0x0, *(v13), (unsigned long long)dcgettext(0x0, 0x4169ff, 0x5));
                    }
                }
            }
        }
    }
    if (v8 != -1)
    {
        if ((((unsigned short)v11 & 4095) == 0 || (71776119061217535 & v5->field_18) == 0 || v12 == 0 || v4 != 0) && (((unsigned short)v11 & 4095) == 0 || v12 == 0 || v5->padding_25[1] == 0 || v4 != 0))
        {
            v16 = fchown(v3);
            if (v16 != 0)
            {
                v22 = *(v21);
                v21 = __errno_location();
                if (*(v21) == 1 || v22 == 22)
                {
                    fchown(v3);
                    *(v23) = v22;
                }
            }
        }
    }
    else
    {
        if ((((unsigned short)v11 & 4095) == 0 || (71776119061217535 & v5->field_18) == 0 || v12 == 0 || v4 != 0) && (((unsigned short)v11 & 4095) == 0 || v12 == 0 || v5->padding_25[1] == 0 || v4 != 0))
        {
            v15 = lchown(v2);
            if (v15 != 0)
            {
                v19 = *(v18);
                v18 = __errno_location();
                if (*(v18) == 1 || v19 == 22)
                {
                    lchown(v2);
                    *(v20) = v19;
                }
            }
        }
    }
    if (((unsigned short)v11 & 4095) == 0 || v12 == 0 || v4 != 0 || (71776119061217535 & v5->field_18) == 0 && v5->padding_25[1] == 0)
    {
        if ((v16 == 0 || v8 == -1) && (v15 == 0 || v8 != -1))
        {
            v17 = 1;
        }
        if (v8 == -1 && v15 != 0 || v16 != 0 && v8 != -1)
        {
            v25 = sub_405400();
            v17 = 0;
            if (v25 == 0)
            {
                v26 = (unsigned int)sub_40dd80();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x416450, 0x5));
            }
        }
    }
    if (v4 == 0 && ((unsigned short)v11 & 4095) != 0 && v12 != 0 && ((71776119061217535 & v5->field_18) != 0 || v5->padding_25[1] != 0) || (v8 == -1 || v16 != 0) && (v8 != -1 || v15 != 0) && (((unsigned short)v11 & 4095) == 0 || (71776119061217535 & v5->field_18) == 0 || v12 == 0 || v4 != 0) && (((unsigned short)v11 & 4095) == 0 || v12 == 0 || v5->padding_25[1] == 0 || v4 != 0) && v25 == 0)
    {
        v17 = 0 - (unsigned int)v5->padding_1c[3];
    }
    return v17;
}

int sub_40afb0()
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
            v4 = sub_40e290();
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
                *(__errno_location()) = 28;
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

int sub_40dd80()
{
}

int sub_409790()
{
}

extern unsigned int g_415260;
extern unsigned int g_41526e;
extern unsigned int g_415282;
extern unsigned int g_4152ea;
extern unsigned int g_415308;
extern unsigned int g_415c40;
extern unsigned int g_415cb0;
extern unsigned int g_415cd8;
extern unsigned int g_415d08;
extern unsigned int g_4182d7;
extern unsigned int g_61d47c;
extern char g_61d4f0;
extern unsigned long long g_61db00;

int main()
{
    unsigned long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    unsigned long long|unsigned int|unsigned long v2;  // [bp-0x120]
    unsigned int v3;  // [bp-0x118]
    unsigned int v4;  // [bp-0x114]
    unsigned long long|unsigned int|unsigned long v5;  // [bp-0x110]
    unsigned long long v6;  // [bp-0x108]
    unsigned short v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xfc]
    unsigned long long v9;  // [bp-0xf4]
    char v10;  // [bp-0xec]
    unsigned short|char v11;  // [bp-0xeb]
    char v12;  // [bp-0xea]
    char v13;  // [bp-0xe9]
    char v14;  // [bp-0xe8]
    unsigned int v15;  // [bp-0xe4]
    unsigned long long v16;  // [bp-0xe0]
    unsigned long long v17;  // [bp-0xd8]
    unsigned int v18;  // [bp-0xb0]
    unsigned long long v23;  // rax
    unsigned long long v25;  // r14
    unsigned long long v26;  // r15
    unsigned long long v27;  // r13
    unsigned long long v28;  // r12
    unsigned long v29;  // rdi
    unsigned long long v30;  // rbp
    unsigned long v31;  // rsi
    unsigned long long v32;  // rbx
    unsigned int v33;  // eax
    char v34;  // al
    unsigned long long v35;  // rbx
    unsigned long long v36;  // rbp
    unsigned long v38;  // rsi
    unsigned long long v40;  // rbx
    unsigned long long v42;  // rax
    unsigned long long v44;  // rbx
    unsigned int *v45;  // rax
    unsigned int v48;  // eax
    unsigned long long v49;  // rbx
    unsigned long long v51;  // rbx
    unsigned long long v56;  // rax
    unsigned long long v57;  // rbp
    unsigned long long v58;  // rbp
    unsigned long long v59;  // rbp

    sub_40c350();
    setlocale(0x6, 0x4182d7);
    bindtextdomain(0x415260, 0x415c40);
    textdomain(0x415260);
    sub_415170();
    sub_4053c0();
    v15 = 1;
    v8 = 0x101000001010100;
    v9 = 0x1000001000000;
    v5 = 8589934596;
    v10 = 0;
    v4 = 2;
    v6 = 0;
    v7 = 1;
    v14 = 0;
    v16 = 0;
    v13 = isatty(0x0) != 0;
    v28 = 0;
    v27 = 0;
    v11 = 0;
    v26 = 0;
    v25 = 0;
    v17 = 0;
    v2 = 0;
    while (true)
    {
        v23 = sub_413690();
        if ((unsigned int)v23 == -1)
        {
            v30 = (unsigned int)v29 - g_61d47c;
            v32 = v31 + (int)g_61d47c * 8;
            v33 = 0;
            v34 = v27 == 0;
            if (rax<4> < (unsigned int)v29 - g_61d47c)
            {
                if (v28 != 0)
                {
                    if (!(v27 == 0))
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x415d08, 0x5));
                    }
                    else if ((unsigned int)v29 - g_61d47c > 2)
                    {
                        v44 = (unsigned int)sub_40dd80();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4152ea, 0x5));
                        sub_4036b0(); /* do not return */
                    }
                }
                else
                {
                    if (v27 != 0)
                    {
                        if (v25 == 0)
                        {
                            v3 = 0;
                            sub_40a040();
                            sub_409750();
                        }
                    }
                    else
                    {
                        if ((unsigned int)v29 - g_61d47c != 1)
                        {
                            v42 = __xstat(0x1);
                            if (v42 != 0)
                            {
                                v45 = __errno_location();
                                if ((int)v2 != 2 && *(v45) != 0)
                                {
                                    v2 = *(v45);
                                    v49 = (unsigned int)sub_40dd80();
                                    error(0x1, v2, (unsigned long long)dcgettext(0x0, 0x41526e, 0x5));
                                }
                            }
                            if (((unsigned short)v18 & 0xf000) == 0x4000 && (v42 == 0 || *(v45) == 0))
                            {
                                v30 = (unsigned int)v29 - g_61d47c - 1;
                                v27 = *((long long *)(v31 + (int)g_61d47c * 8 + (unsigned long long)((unsigned int)v29 - g_61d47c - 1) * 8));
                                v48 = 0;
                            }
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                }
            }
            else
            {
                if ((unsigned int)v29 - g_61d47c == 1)
                {
                    v40 = (unsigned int)sub_40dd80();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x415cd8, 0x5));
                }
                else
                {
                    v38 = "missing file operand";
                }
            }
        }
        else if ((unsigned int)v23 != 102)
        {
            if (v23 > 102)
            {
                if ((unsigned int)v23 != 116)
                {
                    if (v23 <= 116)
                    {
                        if ((unsigned int)v23 == 105)
                        {
                            v5 = 3;
                        }
                        if ((unsigned int)v23 == 110)
                        {
                            v5 = 2;
                        }
                    }
                    else if ((unsigned int)v23 == 118)
                    {
                        v12 = 1;
                    }
                    else if (v23 < 118)
                    {
                        v11 = 1;
                    }
                    else if ((unsigned int)v23 == 128)
                    {
                        g_61d4f0 = 1;
                    }
                }
                else
                {
                    if (v27 == 0)
                    {
                        if (__xstat(0x1) == 0)
                        {
                            v27 = g_61db00;
                            v35 = (unsigned int)sub_40dd80();
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x415282, 0x5));
                        }
                        else
                        {
                            v36 = (unsigned int)sub_40dd80();
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41526e, 0x5));
                        }
                    }
                    else
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x415cb0, 0x5));
                    }
                }
            }
            else
            {
                if ((unsigned int)v23 == 83)
                {
                    v25 = 1;
                    v2 = g_61db00;
                }
                else if (v23 > 83)
                {
                    if ((unsigned int)v23 == 98)
                    {
                        v25 = 1;
                        v26 = (g_61db00 != 0? g_61db00 : r15<8>);
                    }
                    if ((unsigned int)v23 == 84)
                    {
                        v28 = 1;
                    }
                }
                else
                {
                    if ((unsigned int)v23 == -131)
                    {
                        v1 = 0;
                        v0 = "Jim Meyering";
                        sub_40ff60();
                        exit(0x0); /* do not return */
                    }
                    if ((unsigned int)v23 == -130)
                    {
                        sub_4036b0(); /* do not return */
                    }
                }
            }
        }
        if ((unsigned int)v23 == 102)
        {
            v5 = 1;
        }
        if ((v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && v42 != 0 && (unsigned int)v29 - g_61d47c != 1 && *(v45) != 0 && (int)v2 == 2 || v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && (unsigned int)v29 - g_61d47c != 1 && (v42 == 0 || *(v45) == 0) && ((unsigned short)v18 & 0xf000) != 0x4000) && (unsigned int)v29 - g_61d47c != 2)
        {
            v51 = (unsigned int)sub_40dd80();
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x415282, 0x5));
        }
        if ((v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && v42 != 0 && (unsigned int)v29 - g_61d47c != 1 && *(v45) != 0 && (int)v2 == 2 || v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && (unsigned int)v29 - g_61d47c != 1 && (v42 == 0 || *(v45) == 0) && ((unsigned short)v18 & 0xf000) != 0x4000) && (unsigned int)v29 - g_61d47c == 2 || rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && v28 != 0 && (unsigned int)v29 - g_61d47c <= 2)
        {
            v27 = 0;
            if (v25 == 0)
            {
                v3 = 0;
                sub_40a040();
                sub_409750();
            }
        }
        if (v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && (unsigned int)v29 - g_61d47c != 1 && (v42 == 0 || *(v45) == 0) && ((unsigned short)v18 & 0xf000) == 0x4000 && v25 != 0 || ((v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && v42 != 0 && (unsigned int)v29 - g_61d47c != 1 && *(v45) != 0 && (int)v2 == 2 || v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && (unsigned int)v29 - g_61d47c != 1 && (v42 == 0 || *(v45) == 0) && ((unsigned short)v18 & 0xf000) != 0x4000) && (unsigned int)v29 - g_61d47c == 2 || rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 == 0 && v28 != 0 && (unsigned int)v29 - g_61d47c <= 2) && v25 != 0 || v28 == 0 && rax<4> < (unsigned int)v29 - g_61d47c && (unsigned int)v23 == -1 && v27 != 0 && v25 != 0)
        {
            if ((int)v5 != 2)
            {
                dcgettext(0x0, 0x415308, 0x5);
                v48 = sub_40a5f0();
            }
            else
            {
                v38 = "options --backup and --no-clobber are mutually exclusive";
            }
        }
        if (...)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v38, 0x5));
        }
        if (...)
        {
            v3 = v48;
            sub_40a040();
            sub_409750();
        }
        if (...)
        {
            sub_4036b0(); /* do not return */
        }
        if (...)
        {
            v57 = (unsigned int)sub_403620();
        }
        if (...)
        {
            if ((unsigned int)v30 == 1)
            {
                v59 = (unsigned int)sub_403620();
            }
            else
            {
                sub_405360();
                v58 = 1;
                while (true)
                {
                    v32 += 8;
                    v58 &= sub_403620();
                    if (v32 == v31 + ((int)g_61d47c << 3) + (v56 << 3) + 8)
                    {
                        break;
                    }
                }
            }
        }
        if (...)
        {
            return (unsigned long long)(stack_base + 0);
        }
    }
}

int sub_40df60()
{
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
    char field_49;
} struct_0;

int sub_410e40()
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
                v21 = (unsigned int)sub_413d70();
                if ((char)v21 == 0)
                {
                    v18 = (unsigned int)sub_413dc0();
                    if ((unsigned int)v18 >= 0)
                    {
                        v22 = (unsigned int)v18;
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
    if ((unsigned int)v18 < 0 && v18 == 0 && (v8 == 0 || (unsigned int)v18 < 0 || ((unsigned short)v10 & 0x200) == 0 || (char)v21 != 0 || (char)v17 != 0))
    {
        v18 = (unsigned int)sub_410df0();
        if ((unsigned int)v18 < 0)
        {
            v19 = -18446744069414584321;
        }
    }
    if (v18 == 0 && ((char)v21 == 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((char)v17 == 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || v8 != 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || (unsigned int)v18 >= 0 || ((unsigned short)v10 & 0x200) != 0))
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
                    sub_410c50();
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
        if (((*(&((char *)&v5->field_48)[1]) & 2) == 0 || v7[15] != *((long long *)&v1) || v7[16] != v2 || (unsigned int)v19 != 0) && v22 < 0)
        {
            v24 = *(v22);
            close(v18);
            *(__errno_location()) = v24;
        }
    }
    v26 = v19;
    return v26;
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_1;

double sub_40b120()
{
    unsigned long long v1;  // rdi
    struct_0 *v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long *v6;  // rdx
    unsigned long long *v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long v10;  // rax
    unsigned long long v11[2];  // rax
    unsigned long long v12;  // rsi
    unsigned long long v14;  // rax
    struct_1 *v15;  // rbx
    unsigned long long v16;  // rsi
    struct_1 *v17;  // rax
    void v18;  // xmm0
    uint128_t v19;  // xmm0
    unsigned long v20;  // rcx
    void v21;  // xmm0

    v2 = v1;
    *(v6) = v7;
    v8 = *(v7);
    if (*(v7) != 0)
    {
        v7 = sub_40b0f0();
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
        if ((v15->field_8 == 0 || v10 == 0 || (char)v20 == 0) && (v15->field_8 == 0 || (char)v20 == 0 || v8 != v1) && (v8 == v1 || v15->field_8 != 0 || v10 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v15->field_8 == 0 && v10 == 0 && v8 != v1 || v10 == 0 && v1 != *(v11) && v8 != v1)
    {
        return v18;
    }
}

extern unsigned int g_416e22;
extern unsigned int g_61d408;
extern char g_61d930;
extern unsigned long long g_61d938;

int sub_40a7e0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_413b80();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_61d930 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x416e22, 0x5);
            if (g_61d938 != 0)
            {
                sub_40de20();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_61d930 != 0)
    {
        v3 = sub_413b80();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_61d930 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_61d408);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_0 {
    char padding_0[46];
    char field_2e;
} struct_0;

extern unsigned int g_415390;

int sub_403510()
{
    char v0;  // [bp-0x4a]
    char v1;  // [bp-0x49]
    unsigned long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x34]
    unsigned short v6;  // [bp-0x30]
    char v7;  // [bp-0x2e]
    unsigned long v8;  // [bp-0x28]
    unsigned short v9;  // [bp-0x20]
    char v10;  // [bp-0x1f]
    char v11;  // [bp-0x1e]
    unsigned long long v13;  // rax
    unsigned long v14;  // rdi
    struct_0 *v15;  // rdx
    unsigned long long v16;  // rbp

    v13 = sub_4094d0();
    if (v13 != 0)
    {
        if (v0 != 0)
        {
            v13 = 0;
        }
        else if (v1 != 1)
        {
            if (v14 != 0)
            {
                v4 = 0;
                v5 = 5;
                v6 = 0x100;
                v7 = 1;
                v9 = 0;
                v11 = 1;
                v8 = (unsigned int)sub_40e240();
                if (v8 != 0)
                {
                    v2 = v14;
                    v3 = 0;
                    v10 = v15->field_2e;
                    v13 = sub_4041b0();
                    if ((unsigned int)(v13 - 2) <= 2)
                    {
                        v13 = (char)((unsigned int)v13 != 4);
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                else
                {
                    v16 = (unsigned int)sub_40dd80();
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x415390, 0x5));
                }
            }
        }
    }
    if (v14 == 0 || v1 == 1 || v13 == 0 || v0 != 0 || (unsigned int)(v13 - 2) <= 2 && v8 != 0)
    {
        return v13;
    }
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409640()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    struct_0 *v6;  // rax
    struct_0 *v7;  // rbx

    v0 = v4;
    v1 = v5;
    v2 = 0;
    v6 = sub_40c0a0();
    if (v6 != 0)
    {
        v7 = v6;
        free(v6->field_10);
        v6 = free(v7);
    }
    return v6;
}

int sub_413cb0()
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

extern char g_61d4c8;
extern unsigned long long g_61d4d0;

int sub_4034b1()
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

    if (g_61d4c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_61d4d0 >= 0)
            {
                break;
            }
            g_61d4d0 = g_61d4d0 + 1;
            *((long long *)(6409792 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_61d4c8 = 1;
        return sub_40345b();
    }
    return v4;
}

extern unsigned long long __progname_full;
extern unsigned long long g_61d940;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_40c350()
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
        g_61d940 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_40df90()
{
}

int sub_40aa60()
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

int sub_40f2d0()
{
    void tmp_12;  // tmp #12
    char v0;  // [bp-0x19]
    unsigned long long v2[13];  // rdi
    unsigned long long v3[13];  // rbp
    unsigned long long *v4[4];  // rsi
    unsigned long long v5[4];  // rbx
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v3 = v2;
    v5 = *(v4);
    v9 = (*(v4))[3];
    if ((*(v4))[1] != 1073741822)
    {
    }
    else
    {
        v8 = 1;
        if ((*(v4))[3] != 1073741822)
        {
            v6 = v2[10];
            *((unsigned long long [13])&(*(v4))[0]) = v2[9];
            v5[1] = v6;
        }
    }
    if ((*(v4))[1] == 1073741823)
    {
        if ((*(v4))[3] != 1073741823)
        {
            sub_413c70();
            v9 = v5[3];
        }
        else
        {
            *(v4) = 0;
            v8 = 0;
        }
    }
    if (((*(v4))[1] == 1073741823 || (*(v4))[3] == 1073741822) && ((*(v4))[1] == 1073741823 || (*(v4))[1] != 1073741822) && (v5[3] == 1073741822 || (*(v4))[1] != 1073741823) && ((*(v4))[1] != 1073741823 || (*(v4))[3] != 1073741823))
    {
        tmp_12 = v3[12];
        *((unsigned long long [13])&(*(v4))[2]) = v3[11];
        v5[3] = tmp_12;
        v8 = 0;
    }
    if (((*(v4))[1] == 1073741823 || (*(v4))[3] != 1073741822) && ((*(v4))[3] != 1073741822 || v5[3] != 1073741822) && ((*(v4))[3] != 1073741822 || (*(v4))[3] != 1073741823) && ((*(v4))[1] == 1073741822 || (*(v4))[1] != 1073741823 || v5[3] != 1073741822) && ((*(v4))[1] == 1073741822 || (*(v4))[1] != 1073741823 || (*(v4))[3] != 1073741823))
    {
        v8 = 0;
        if (v9 == 1073741823)
        {
            v0 = 0;
            sub_413c70();
            return (unsigned long long)v0;
        }
    }
    if (v9 != 1073741823 || (*(v4))[1] == 1073741823 && v5[3] == 1073741822 || (*(v4))[1] == 1073741823 && (*(v4))[3] == 1073741823 || (*(v4))[1] == 1073741822 && (*(v4))[3] == 1073741822 || (*(v4))[3] == 1073741822 && (*(v4))[1] != 1073741823)
    {
        return v8;
    }
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
        sub_410a30();
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
            if (((unsigned int)v12 == 0 || v8 == 0) && (v8 == 0 || v13 != 0) && (v10 != 0 || v8 != 0))
            {
                v12 = *(v11);
            }
        }
    }
    if (((char)(v2->field_48 >> 8) & 2) == 0 && (v6 & 4) != 0 || v2->field_2c < 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || v9 == 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || v10 == 0 && v8 == 0 && ((char)(v2->field_48 >> 8) & 2) == 0)
    {
        v12 = 0;
    }
    sub_410a80();
    if (v2->field_50 != 0)
    {
        sub_40bb00();
    }
    v16 = v2->field_58;
    if (!(((unsigned short)v2->field_48 & 258) != 0))
    {
        free(v16);
    }
    else if (v16 != 0)
    {
        sub_40bb00();
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

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_2;

extern unsigned int g_415f80;
extern unsigned int g_415f96;
extern unsigned int g_415fa2;

int sub_403a80()
{
    unsigned long long v0;  // [bp-0x1d8]
    char v1;  // [bp-0xb8]
    unsigned long long v3;  // rdx
    char v4[26];  // r12
    unsigned long long v5;  // rdx
    struct_0 *v6;  // rdi
    struct_1 *v8;  // rsi
    struct_2 *v9;  // rbx
    char v12;  // cl
    char v13;  // dl
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned int *v17;  // r13
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    char *v20;  // rsi
    unsigned int v22;  // eax
    unsigned long long v23;  // rbp
    unsigned long long v24[12];  // rax

    v4 = v3;
    v5 = 0;
    v9 = v8;
    v13 = v12 != 0;
    v14 = rdx<8> * 0x200;
    v15 = unlinkat(v6->field_2c, v8->field_30, v14);
    if (v15 != 0)
    {
        v17 = __errno_location();
        if (!(*(v17) != 30))
        {
            v19 = __fxstatat(0x1, v6->field_2c, v9->field_30, (unsigned int)&v1, 0x100);
            if (v19 != 0)
            {
                v14 = *(v17);
                if (*(v17) == 2)
                {
                    v16 = 2;
                }
            }
            if (v19 == 0 || *(v17) != 2)
            {
                *(v17) = 30;
            }
        }
        else if (v4[0] != 0)
        {
            v16 = 2;
        }
        if ((v9->field_70 == 4 && v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 || v9->field_70 == 4 && *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20)) && (unsigned int)v14 <= 39 || v9->field_70 == 4 && v4[0] == 0 && *(v17) == 30 && *(v17) == 2 && v19 != 0)
        {
            v0 = 0x8000320000;
            if (((char)((char)*(&((char *)stack_base)[((v14 & 63) >> 3) + -472]) >> (unsigned long long)(char)(v14 & 63 & 7)) & 1) != 0)
            {
                v22 = v9->field_40;
                if (v22 == 13 || v9->field_40 == 1)
                {
                    *(v17) = v22;
                }
            }
        }
        if ((v9->field_70 == 4 && v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 || v9->field_70 == 4 && *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20)) && (unsigned int)v14 <= 39 || v9->field_70 == 4 && v4[0] == 0 && *(v17) == 30 && *(v17) == 2 && v19 != 0 || v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 && v9->field_70 != 4 || (v9->field_70 == 4 && v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 || v9->field_70 == 4 && *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20)) && (unsigned int)v14 > 39 || *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20) && v9->field_70 != 4 || v4[0] == 0 && *(v17) == 30 && *(v17) == 2 && v19 != 0 && v9->field_70 != 4 || *(v17) == 30 && (v19 == 0 || *(v17) != 2))
        {
            v23 = (unsigned int)sub_40dd80();
            error(0x0, *(v17), (unsigned long long)dcgettext(0x0, 0x415fa2, 0x5));
            v24 = v9->field_8;
            if (!((char)(v9->field_8->field_58 - 0 >> 63)))
            {
                while (v24[4] == 0)
                {
                    v24[4] = 1;
                    v24 = v24[1];
                    if ((char)(v24[11] - 0 >> 63))
                    {
                        break;
                    }
                }
            }
            v16 = 4;
        }
    }
    else
    {
        v16 = 2;
        if (v4[3 + 1] != 0)
        {
            v18 = (unsigned int)sub_40dd80();
            if (v12 != 0)
            {
                v20 = (unsigned long long)dcgettext(0x0, 0x415f80, 0x5);
            }
            else
            {
                v20 = (unsigned long long)dcgettext(0x0, 0x415f96, 0x5);
            }
            __printf_chk(0x1, v20);
            return 2;
        }
    }
    if (v4[3 + 1] == 0 || v15 != 0)
    {
        return v16;
    }
}

extern unsigned int g_416d4b;

int sub_40e910()
{
    unsigned int|char * v0;  // [bp-0x60]
    unsigned long long|unsigned int v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x3c]
    char *v6;  // rdi
    unsigned long long v7;  // r14
    unsigned long long v8;  // r8
    unsigned long long v9;  // r13
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rdx
    unsigned long v13;  // rcx
    unsigned int *v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long|unsigned int v21;  // r12d
    unsigned long long v22;  // rbx
    unsigned long long v23;  // r14
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdi
    unsigned int v27;  // rdx
    unsigned int|unsigned long v28;  // rcx
    unsigned int v29;  // cc_dep1

    v7 = v6;
    v9 = v8;
    v11 = v10;
    v2 = v12;
    v0 = v6;
    v3 = v13;
    v14 = __errno_location();
    v4 = *(v14);
    v15 = strlen(v6);
    v16 = v11 + v9;
    if (v11 + v9 <= v15)
    {
        v1 = v7 + v15 - v16;
        v18 = strspn(v7 + v15 - v16, 0x416d4b);
        if (v9 <= v18)
        {
            if ((unsigned long long)(unsigned int)sub_414400() != 0)
            {
                v21 = 238328;
                v22 = &v0[v9 + v15 + -1 * v16];
                while (true)
                {
                    v23 = v1;
                    if (v9 != 0)
                    {
                        while (true)
                        {
                            v23 += 1;
                            *((unsigned long long *)(v23 - 1)) = (char)*((char *)(4291968 + (unsigned long long)(unsigned int)sub_414440()));
                            if (v23 == v22)
                            {
                                break;
                            }
                        }
                    }
                    v25 = v2;
                    v26 = v0;
                    v27 = (long long)(stack_base)[-72]();
                    if (v27 < 0)
                    {
                        v28 = *(v14);
                        if (*(v14) == 17)
                        {
                            v29 = v21;
                            v21 = (unsigned long long)v21 - 1;
                            sub_414560();
                            *(v14) = 17;
                            v19 = -18446744069414584321;
                        }
                        else
                        {
                            v27 = -1;
                        }
                    }
                    else
                    {
                        *(v14) = v4;
                        v28 = v4;
                    }
                    if (*(v14) != 17 || v27 >= 0)
                    {
                        v1 = v27;
                        *((unsigned long *)&v0) = v28;
                        sub_414560();
                        v19 = v1;
                        *(v14) = v0;
                    }
                }
            }
            else
            {
                v19 = -18446744069414584321;
            }
        }
    }
    if (v9 > v18 || v11 + v9 > v15)
    {
        *(v14) = 22;
        v19 = -18446744069414584321;
    }
    return v19;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409620()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    struct_0 *v3;  // rdi

    v0 = v2;
    free(v3->field_10);
}

int sub_414560()
{
    unsigned int v1;  // [bp+0x100008]
    void *v2;  // rdi

    __explicit_bzero_chk();
    free(v2);
    *(__errno_location()) = v1;
    return sub_414a90();
}

int sub_40aed0()
{
    char v0;  // [bp-0x39]
    char *v2;  // rsi
    char *v3;  // r12
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long v6;  // rdi
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rax
    unsigned long long v10;  // r15
    char *v11;  // rax
    unsigned long v12;  // rdi
    unsigned long long *v13;  // rdx
    unsigned long long v14;  // rax
    char v15;  // al

    v3 = v2;
    v4 = (unsigned int)sub_40aa00();
    v5 = (unsigned int)sub_40aa60();
    v7 = v4 - v6 + v5;
    if (v5 != 0)
    {
        v5 = (char)(*((char *)(v4 + v5 - 1)) != 47);
    }
    v0 = *(v3);
    if (*(v3) == 47)
    {
        do
        {
            v3 = &v3[1];
        }
        while (*(v3) == 47);
    }
    v8 = strlen(v3);
    v10 = malloc(v5 + v7 + 1 + v8);
    if (v8 != 0)
    {
        v11 = mempcpy(v8, v6, v7);
        *(v11) = 47;
        v12 = &v11[v5];
        if (v13 != 0)
        {
            v14 = 0;
            v15 = v0 == 47;
            *(v13) = v12 - rax<8>;
        }
        *((char *)(unsigned long long)mempcpy(v12, (unsigned int)v3, v8)) = 0;
    }
    return v10;
}

int sub_40b6b0()
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

typedef struct struct_2 {
    struct struct_3 *field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
} struct_4;

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

typedef struct struct_7 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    unsigned int field_48;
    char field_49;
} struct_7;

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[32];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_0;

typedef struct struct_5 {
    char padding_0[24];
    unsigned long long field_18;
} struct_5;

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

typedef struct struct_6 {
    char padding_0[72];
    unsigned int field_48;
} struct_6;

typedef struct struct_9 {
    unsigned long long field_0;
    char padding_8[10];
    char field_12;
    char field_13;
    char field_14;
} struct_9;

typedef struct struct_10 {
    char padding_0[4292992];
    unsigned int field_418180;
} struct_10;

typedef struct struct_8 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[56];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
} struct_8;

extern int512_t g_4106c0;
extern char g_418180;

int sub_411160()
{
    unsigned long long|unsigned long v0;  // [bp-0x90]
    void tmp_20;  // tmp #20
    unsigned long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    struct_3 *|struct_1 * v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long|unsigned long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    char v11;  // [bp-0x3a]
    char v12;  // [bp-0x39]
    unsigned int v14;  // [bp+0x100008]
    struct_2 *v15;  // rdi
    struct_3 *v17;  // r13
    unsigned int v18;  // esi
    unsigned long long v20;  // rax
    struct_6 *|struct_7 * v22;  // ebx
    unsigned long long v23;  // rax
    unsigned short v24;  // cc_dep1
    unsigned long long v28;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // r14
    unsigned long long|unsigned int v32;  // rdi
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdi
    unsigned long long v35;  // rbp
    void *v40;  // rcx
    struct_4 *v41;  // rbx
    struct_9 *v42;  // r14
    unsigned long long v43;  // r13
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    unsigned long long v46;  // r8
    void *v47;  // rsi
    unsigned long long v48;  // rax
    unsigned int v50;  // eax
    unsigned int v51;  // esi
    struct_10 *v52;  // rdx
    unsigned long long v53;  // rax
    unsigned long long v54;  // r15
    unsigned long long v55;  // rbp
    unsigned long long v56;  // r12
    struct_3 *v57;  // r13
    struct_8 *v58;  // r13
    struct_8 *v59;  // r13
    unsigned int v60;  // ebx
    struct_4 *v61;  // r15
    unsigned int v62;  // eax
    unsigned long long v68[8];  // rax
    unsigned long long v69;  // rcx
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rdx
    unsigned long long v72[12];  // rax
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rdx
    char v76;  // al
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax

    v17 = v15->field_0;
    v10 = v18;
    v9 = v15->field_0->field_18;
    if (v9 != 0)
    {
        v20 = dirfd();
        if (v20 >= 0)
        {
            if (v22->field_40 != 0)
            {
                v6 = -1;
            }
            else
            {
                v6 = 100000;
                v32 = v22->field_48;
                v12 = 1;
            }
        }
        else
        {
            closedir();
            v4->field_18 = 0;
        }
    }
    else if (((unsigned short)v22->field_48 & 516) != 0x200)
    {
        v22 = sub_414380();
        if (v22 >= 0)
        {
            v23 = fdopendir(v22);
            if (v23 != 0)
            {
                v24 = v4->field_70;
                v4->field_18 = v23;
                if (!(v24 != 11))
                {
                    v4->field_70 = sub_4106f0();
                }
                else if (((unsigned short)v22->field_48 & 0x100) != 0)
                {
                    sub_4110c0();
                    sub_4106f0();
                    v28 = sub_411010();
                    if (v28 == 0)
                    {
                        v2 = 0;
                        *(__errno_location()) = 12;
                    }
                }
                if (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0)
                {
                    v6 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(v22->field_40 < 1)) & 100001) - 1;
                    if (v10 != 2 && ((char)v22->field_48 & 56) == 24 && v4->field_88 == 2)
                    {
                        v30 = sub_410be0();
                        if (v30 != 0 && v10 == 3)
                        {
                            v31 = 0;
                            v56 = 1;
                        }
                    }
                }
            }
            else
            {
                close(v22);
                *(__errno_location()) = v14;
            }
        }
        if (v22 < 0 || v23 == 0)
        {
            v4->field_18 = 0;
        }
    }
    if ((v9 == 0 || v20 < 0) && (v9 != 0 || ((unsigned short)v22->field_48 & 516) != 0x200) && (v22 < 0 || v23 == 0 || v9 != 0))
    {
        if (v10 == 3)
        {
            v4->field_70 = 4;
            v4->field_40 = *(__errno_location());
        }
        v2 = 0;
    }
    if (v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && v4->field_88 == 2 && v30 == 0 || v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && v4->field_88 != 2 || v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) != 24)
    {
        v31 = 1;
        v56 = (char)(v10 == 3);
    }
    if (v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && v4->field_88 == 2 && v30 != 0 && v10 != 3 || v9 == 0 && v22 >= 0 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && v10 == 2)
    {
        v12 = 0;
        v32 = v22->field_48;
    }
    if ((v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && v4->field_88 == 2 && v30 != 0 && v10 == 3 || v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && v4->field_88 == 2 && v30 == 0 || v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && v4->field_88 != 2 || v9 == 0 && v22 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) != 24) && (*(&((char *)&v22->field_48)[1]) & 2) != 0)
    {
        v22 = (unsigned long long)(unsigned int)sub_410460();
        if ((unsigned int)v22 < 0)
        {
            v34 = v4->field_18;
            v35 = (unsigned int)v4->field_72 | 1;
        }
    }
    if (...)
    {
        v33 = sub_410e40();
        if (v33 != 0)
        {
            v34 = v4->field_18;
            v35 = (unsigned int)v4->field_72 | 1;
        }
    }
    if (...)
    {
        v12 = 1;
        v32 = v22->field_48;
    }
    if (...)
    {
        v4->field_72 = (unsigned int)v4->field_72 | 1;
        closedir();
        v32 = v22->field_48;
    }
    if (...)
    {
        v0 = v34;
        v4->field_40 = *(__errno_location());
    }
    if (...)
    {
        *((unsigned long long *)&v4->field_72) = v35;
        closedir();
        v32 = v22->field_48;
        v4->field_18 = 0;
        if (((unsigned short)v32 & 0x200) != 0 && v22 >= 0)
        {
            close(v22);
            v32 = v22->field_48;
        }
    }
    if (...)
    {
        v4->field_18 = 0;
        v12 = 0;
    }
    if (...)
    {
        v1 = v4->field_48;
        v8 = v4->field_48 - 1;
        if (*((char *)(v4->field_38 + v4->field_48 - 1)) != 47)
        {
            v8 = v4->field_48;
            v1 = &v8[1];
        }
        v7 = 0;
        if (((char)v32 & 4) != 0)
        {
            v40 = &v8[v22->field_20 + 1];
            v8[v22->field_20] = 47;
            v7 = v40;
        }
        v11 = 0;
        v55 = 0;
        v3 = v22->field_30 - v1;
        v22 = v15;
        v0 = 0;
        v4 = v17;
        v5 = *((long long *)&v4->padding_50[8]) + 1;
        v2 = 0;
        while (true)
        {
            v61 = v4->field_18;
            if (v4->field_18 != 0)
            {
                *((int *)v56) = 0;
                v56 = __errno_location();
                v42 = (unsigned long long)readdir();
                if (v42 != 0)
                {
                    if ((v61->field_48 & 32) == 0 && v42->field_13 == 46 && (*((short *)&v42->field_14) == 46 || v42->field_14 == 0))
                    {
                        v54 = v0;
                    }
                    if ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46 && v42->field_14 != 0)
                    {
                        v43 = strlen(&v42->field_13);
                        v54 = (unsigned int)sub_4109a0();
                        if (v3 <= v43 && v54 != 0)
                        {
                            v3 = v61->field_20;
                            v44 = sub_410d20();
                            if (v44 != 0)
                            {
                                v45 = v61->field_20;
                                if (v61->field_20 != v3)
                                {
                                    *((int *)&v7) = ((v61->field_48 & 4) == 0? v7 : rdx<8> + (long long)(stack_base)[-136]);
                                }
                                else
                                {
                                    v44 = v11;
                                }
                                *((unsigned long long *)&v11) = v44;
                                v3 = v61->field_30 - v1;
                            }
                        }
                    }
                }
                else
                {
                    v62 = *((int *)v56);
                    v57 = v4;
                    if (*((int *)v56) != 0)
                    {
                        v57->field_40 = v62;
                        v57->field_70 = (0 - (unsigned int)(char)((v9 | v55) < 1) & -3) + 7;
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
                v57 = v4;
            }
            if (v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 == 0 || v42 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v54 == 0)
            {
                v59 = v4;
                v60 = *((int *)v56);
                free(v54);
                sub_410a30();
                closedir();
                v59->field_18 = 0;
                v59->field_70 = 7;
                v2 = 0;
                *((int *)(v54 + 72)) = *((int *)(v54 + 72)) | 0x4000;
                *((unsigned int *)v56) = v60;
            }
            if (v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43)
            {
                v46 = v43 + v1;
                if (!((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)))
                {
                    v47 = v54 + 264;
                    *((unsigned long *)(v54 + 88)) = v5;
                    tmp_20 = v61->field_0;
                    *((unsigned long long *)(v54 + 72)) = v46;
                    *((long long *)(v54 + 8)) = tmp_20;
                    *((unsigned long long *)(v54 + 128)) = v42->field_0;
                    v48 = (unsigned int)*((int *)&v61->field_48);
                    if (((char)*((int *)&v61->field_48) & 4) == 0)
                    {
                        *((void **)(v54 + 48)) = v47;
                    }
                    else
                    {
                        *((long long *)(v54 + 48)) = *((long long *)(v54 + 56));
                        memmove(v7, v47, *((long long *)(v54 + 96)) + 1);
                        v48 = (unsigned int)*((int *)&v61->field_48);
                    }
                    if ((v48 & 4) == 0 && v61->field_40 != 0)
                    {
                        *((unsigned short *)(v54 + 112)) = sub_4106f0();
                    }
                    if (v61->field_40 == 0 || (v48 & 4) != 0)
                    {
                        v50 = (unsigned int)v48 & 24;
                        v51 = v42->field_12;
                        v52 = (unsigned long long)((unsigned int)v42->field_12 - 1);
                        if (v50 == 24 && ((char)v51 & 251) != 0)
                        {
                            *((short *)(v54 + 112)) = 11;
                            if ((unsigned int)v52 > 11)
                            {
                                *((int *)(v54 + 144)) = 0;
                                v53 = 1;
                            }
                            else
                            {
                                *((int *)(v54 + 144)) = *((int *)(0x4 * v52 + &g_418180));
                                v53 = 1;
                            }
                        }
                        if (((char)v51 & 251) == 0 || v50 != 24)
                        {
                            *((short *)(v54 + 112)) = 11;
                            if ((unsigned int)v52 > 11)
                            {
                                *((int *)(v54 + 144)) = 0;
                                v53 = 2;
                            }
                            else
                            {
                                *((int *)(v54 + 144)) = *((int *)(0x4 * v52 + &g_418180));
                                v53 = 2;
                            }
                        }
                        *((unsigned long long *)(v54 + 168)) = v53;
                    }
                    *((long long *)(v54 + 16)) = 0;
                    if (v2 != 0)
                    {
                        v55 += 1;
                        *((unsigned long long *)(v0 + 16)) = v54;
                    }
                    else
                    {
                        v2 = v54;
                        v55 += 1;
                    }
                }
                else
                {
                    v58 = v4;
                    free(v54);
                    sub_410a30();
                    closedir();
                    v58->field_18 = 0;
                    v58->field_70 = 7;
                    v2 = 0;
                    *((int *)&v61->field_48) = *((int *)&v61->field_48) | 0x4000;
                    *((int *)v56) = 36;
                }
            }
            if ((v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)) && v2 != 0 && v55 >= v6 || (v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)) && v2 == 0 && v55 >= v6)
            {
                v57 = v4;
                v61 = v41;
            }
            if ((v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)) && v2 != 0 && v55 < v6 || (v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v54 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, r13<8>, Load(addr=stack_base-136, size=8, endness=Iend_LE), cc_ndep<8>)) && v2 == 0 && v55 < v6 || (v61->field_48 & 32) == 0 && v42->field_13 == 46 && v42 != 0 && v4->field_18 != 0 && (*((short *)&v42->field_14) == 46 || v42->field_14 == 0))
            {
                v0 = v54;
            }
            if (...)
            {
                v68 = v61->field_8;
                v69 = v61->field_20;
                if (v61->field_8 != 0)
                {
                    do
                    {
                        v70 = v68[6];
                        if (v68[6] != &v68[33])
                        {
                            v71 = v70 - v68[7] + v69;
                            v68[6] = v71;
                        }
                        v68[7] = v69;
                        v68 = v68[2];
                    }
                    while (v68 != 0);
                }
                for (v72 = v2; !((char)(v72[11] - 0 >> 63)); v72 = v75)
                {
                    v73 = v72[6];
                    if (v72[6] != &v72[33])
                    {
                        v74 = v73 - v72[7] + v69;
                        v72[6] = v74;
                    }
                    v75 = v72[2];
                    v72[7] = v69;
                    if (v75 == 0)
                    {
                        v75 = v72[1];
                    }
                }
            }
            if (...)
            {
                if ((v61->field_48 & 4) != 0)
                {
                    if (v55 == 0 || v61->field_30 == v1)
                    {
                        v7 -= 1;
                    }
                    *((char *)v7) = 0;
                }
                if (v9 == 0 && v12 != 0 && (v55 == 0 || v10 == 1))
                {
                    if (v57->field_58 == 0)
                    {
                        v76 = sub_410cc0() != 0;
                    }
                    else
                    {
                        v76 = sub_410e40() != 0;
                    }
                    if (v76 != 0)
                    {
                        v57->field_70 = 7;
                        *((int *)&v61->field_48) = *((int *)&v61->field_48) | 0x4000;
                        sub_410a30();
                        v2 = 0;
                    }
                }
                if (v55 == 0 && (v12 == 0 || v76 == 0 || v9 != 0))
                {
                    if (v10 == 3)
                    {
                        v79 = v57->field_70;
                        if (v79 != 7 && v57->field_70 != 4)
                        {
                            v57->field_70 = 6;
                        }
                    }
                    sub_410a30();
                    v2 = 0;
                }
                if (v55 != 0 && (v12 == 0 || v76 == 0 || v9 != 0 || v10 != 1))
                {
                    v78 = v61->field_40;
                    if (v78 == 0 && v55 > 10000)
                    {
                        v80 = sub_410ac0();
                        if (v80 != 26985 && v80 != 16914836)
                        {
                            v61->field_40 = &g_4106c0;
                            v61->field_40 = 0;
                            v2 = (unsigned int)sub_4108a0();
                        }
                        if (v80 == 26985 || v80 == 16914836)
                        {
                            v78 = v61->field_40;
                        }
                    }
                    if (v55 == 1 && v55 <= 10000 || v55 <= 10000 && v78 == 0 || v78 == 0 && v55 == 1 && v80 == 26985 || v78 == 0 && v55 == 1 && v80 == 16914836 || v78 == 0 && v78 == 0 && v80 == 26985 || v78 == 0 && v78 == 0 && v80 == 16914836)
                    {
                        break;
                    }
                }
            }
        }
    }
    return v2;
}

int sub_4049d0()
{
}

int sub_40e290() { crash_skku;
}
typedef struct struct_0 {
    uint128_t field_0;
    uint128_t field_10;
    char field_1a;
    char field_1b;
    char padding_1c[4];
    uint128_t field_20;
    uint128_t field_30;
    unsigned long long field_40;
} struct_0;

int sub_4053c0()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbx
    unsigned long long v3;  // rax
    char v4;  // al

    v2 = v1;
    *((long long *)&v1->field_30) = 0;
    v1->field_0 = 0;
    v1->field_10 = 0;
    *((int128_t *)&v1->field_1a) = 0;
    v1->field_20 = 0;
    v3 = geteuid();
    v4 = (unsigned int)v3 == 0;
    *(&((char *)&v2->field_10)[11]) = (unsigned int)v3 == 0;
    *(&((char *)&v2->field_10)[10]) = (unsigned int)v3 == 0;
    return rax<8>;
}

int sub_410180()
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
        sub_410330(); /* do not return */
    }
}

int sub_40aae0()
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

int sub_40b7e0()
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

extern char *g_61d920;

int sub_40a040()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    char *v3;  // rax

    v2 = v1;
    if (v1 == 0)
    {
        v3 = getenv("SIMPLE_BACKUP_SUFFI");
        v2 = v3;
    }
    if ((v3 != 0 || v1 != 0) && *(v2) != 0)
    {
        v3 = sub_40aa00();
        if (v3 == v2)
        {
            g_61d920 = v2;
            return v3;
        }
    }
    if (*(v2) == 0 || v3 != v2 || v3 == 0 && v1 == 0)
    {
        g_61d920 = "~";
        return v3;
    }
}

int sub_414d90()
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

int sub_404990()
{
    unsigned long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rax

    if ((unsigned int)v2 < 0)
    {
        v3 = *(__errno_location());
        if (v3 == 38 || v3 == 95)
        {
            return 0;
        }
    }
    if ((unsigned int)v2 >= 0 || v3 != 38 && v3 != 95)
    {
        v2 = fallocate();
        return v4;
    }
}

extern unsigned int g_416e08;
extern unsigned int g_61d408;
extern unsigned long long g_61d928;

int sub_40a6c0()
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
    v5 = sub_4105e0();
    if (v5 != 0 || sub_413b80() != 0)
    {
        while (true)
        {
            v11 = sub_410610();
            if (v11 == 0)
            {
                v12 = sub_4105a0();
                if (v12 != 0)
                {
                    sub_413b80();
                }
            }
            if (v12 == 0 || v11 != 0)
            {
                if (sub_413b80() == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, 0x416e08, 0x5);
            v8 = __errno_location();
            if (g_61d928 != 0)
            {
                sub_40de20();
                error(0x0, *(v8), "%s: %s");
            }
            else
            {
                error(0x0, *(v8), "%s");
            }
            sub_40a7e0();
            _exit(g_61d408);
        }
    }
}

int sub_412940()
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

extern unsigned int g_4163f8;

int sub_405210()
{
    char v1[39];  // r8
    char v2[39];  // rbp
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rbx
    char v5;  // bl
    unsigned int *v6;  // r13
    unsigned long long v8;  // rbx
    unsigned int|unsigned long v9;  // rbx
    unsigned long long v10;  // rax

    v2 = v1;
    if (v1[4 + 5] != 0)
    {
        v6 = __errno_location();
        if (v1[4 + 3] != 0)
        {
            v9 = v2[4 + 6];
            if (v2[4 + 6] == 0)
            {
                *(v6) = 95;
            }
        }
        if (v1[4 + 3] == 0 || v2[4 + 6] != 0)
        {
            *(v6) = 95;
            v8 = (unsigned int)sub_40dd80();
            error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x4163f8, 0x5));
            v9 = v1[4 + 6];
        }
        v10 = v9 ^ 1;
        return v10;
    }
    v4 = v3;
    v5 = (char)v3 & v1[4 + 1];
    if (((char)v3 & v1[4 + 1]) == 0)
    {
        return 1;
    }
    *(__errno_location()) = 95;
    return rbx<8>;
}

typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
    char field_18;
} struct_0;

extern unsigned int g_416368;
extern unsigned int g_416398;
extern unsigned int g_416990;

int sub_404ae0()
{
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0x2a]
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r13
    struct_0 *v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx

    if (sub_404890() == 0)
    {
        sub_40ad20();
        v1 = 0;
        v6 = (unsigned int)sub_40dd80();
        if (v7->field_18 == 0 && (v7->field_14 & 0xffff00) == 0)
        {
            v9 = dcgettext(0x0, 0x416398, 0x5);
        }
        if ((v7->field_14 & 0xffff00) != 0 || v7->field_18 != 0)
        {
            v8 = dcgettext(0x0, 0x416368, 0x5);
        }
        v0 = stack_base + -51;
        __fprintf_chk();
        return sub_4103f0();
    }
    v5 = (unsigned int)sub_40dd80();
    dcgettext(0x0, 0x416990, 0x5);
    __fprintf_chk();
    return sub_4103f0();
}

int sub_415060()
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
            v5 = sub_414fd0();
            if (v5 >= 0)
            {
                v6 = sub_414fe0();
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
                sub_414fe0();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40b410()
{
    struct_0 *v1;  // rdi

    return v1->field_10;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[12];
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_413dc0()
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

int sub_40c3f0()
{
    unsigned long long v2;  // rax

    if (sub_413790() == 0)
    {
        v2 = sub_4137c0();
    }
    else
    {
        v2 = -18446744069414584322;
    }
    return v2;
}

int sub_410a30()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    void *v3;  // rdi
    unsigned long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6[4];  // rbp
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

typedef struct struct_1 {
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
} struct_1;

typedef struct struct_2 {
    char padding_0[136];
    unsigned long long field_88;
} struct_2;

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int sub_4106f0()
{
    struct_1 *v1;  // rsi
    struct_2 *v2;  // rbp
    struct_1 *v3;  // rbx
    unsigned long long v4;  // cc_dep1
    struct_0 *v6;  // rdi
    char v7;  // dl
    unsigned long long v8;  // rax
    unsigned int v9;  // eax
    unsigned int *v10;  // r12
    unsigned int|unsigned long v11;  // rax
    unsigned long long v12;  // rax
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
        v11 = __fxstatat(0x1, v6->field_2c, v1->field_30, (unsigned int)v2, 0x100);
        if (v11 != 0)
        {
            v11 = *(__errno_location());
        }
    }
    if (((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || v4 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0)
    {
        v8 = __xstat(0x1);
    }
    if (v8 != 0 && (v4 == 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0) && (((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0))
    {
        v10 = __errno_location();
        v11 = *(v10);
        if ((unsigned int)v11 == 2)
        {
            v13 = __lxstat(0x1, v3->field_30, (unsigned int)v2);
            if (v13 == 0)
            {
                *(v10) = 0;
                return 13;
            }
            v11 = *(v10);
        }
    }
    if (v8 == 0 && ((char)*((int *)&v6->field_48) & 2) != 0 || v8 == 0 && v7 != 0 || v8 == 0 && v4 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0 || ((char)*((int *)&v6->field_48) & 2) == 0 && v7 == 0 && v11 == 0 && ((char)*((int *)&v6->field_48) & 1) == 0 || ((char)*((int *)&v6->field_48) & 2) == 0 && v7 == 0 && v11 == 0 && v4 != 0)
    {
        v9 = v3->field_90 & 0xf000;
        if (!(((unsigned short)v3->field_90 & 0xf000) != 0x4000))
        {
            v12 = v3->field_88;
            if (v3->field_88 > 1 && v3->field_58 > 0)
            {
                v15 = ((v6->field_48 & 32) == 0? v12 - 2 : v12);
            }
            if (v3->field_58 <= 0 || v3->field_88 <= 1)
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
        else if (v9 != 0xa000)
        {
            v14 = (unsigned long long)(char)(v9 == 0x8000) * 5 + 3;
        }
        else
        {
            v14 = 12;
        }
        return v14;
    }
    if ((((char)*((int *)&v6->field_48) & 2) == 0 || v8 != 0) && (v7 == 0 || v8 != 0) && (((char)*((int *)&v6->field_48) & 2) == 0 || v13 != 0 || (unsigned int)v11 != 2) && (v7 == 0 || v13 != 0 || (unsigned int)v11 != 2) && (((char)*((int *)&v6->field_48) & 1) == 0 || v8 != 0 || v4 != 0) && (v4 == 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || v11 != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v13 != 0 || v4 != 0 || (unsigned int)v11 != 2) && (((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || v11 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0))
    {
        *((unsigned long *)&v3->field_40) = v11;
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

extern int512_t g_61da60;

int sub_40d960()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_61da60 : v1));
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_40b430()
{
    struct_0 *v1;  // rdi

    return v1->field_20;
}

int sub_40dd90()
{
}

int sub_4143d0()
{
    unsigned long long v1[3];  // rax
    unsigned long v2;  // rdi

    v1 = sub_4100e0();
    v1[0] = v2;
    v1[2] = 0;
    v1[1] = 0;
    return v1;
}

int sub_40eb40()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

extern unsigned int g_61daa8;
extern unsigned int g_61daac;

int sub_40f8b0()
{
    unsigned long long|unsigned long v0;  // [bp-0xd0]
    unsigned long|void v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    unsigned long|void v3;  // [bp-0xb8]
    unsigned long v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8]
    unsigned int v6;  // [bp-0x90]
    unsigned long v7;  // [bp-0x60]
    unsigned long v8;  // [bp-0x58]
    unsigned long v9;  // [bp-0x50]
    unsigned long v10;  // [bp-0x48]
    uint128_t v12[2];  // rsi
    unsigned long long v13;  // rdx
    unsigned long v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long|unsigned int v16;  // rbx
    unsigned long long v17;  // rax
    unsigned int *v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbp

    if (v12 != 0)
    {
        v0 = stack_base + -200;
        *((int128_t *)&v1) = *((int128_t *)&v12);
        *((int128_t *)&v3) = *((int128_t *)&v12[2]);
        v16 = (unsigned int)sub_40f3a0();
        if ((unsigned int)v16 >= 0 && g_61daa8 >= 0)
        {
            if ((unsigned int)v16 != 2)
            {
                v13 = v0;
            }
            else
            {
                v15 = __lxstat(0x1, v14, (unsigned int)&v5);
                if (v15 == 0)
                {
                    v13 = v0;
                    if ((long long)(&v1)[8] != 1073741822)
                    {
                        v16 = 3;
                        if ((long long)(&v3)[8] == 1073741822)
                        {
                            v4 = v10;
                            v3 = v9;
                        }
                    }
                    else
                    {
                        v16 = 3;
                        v1 = v7;
                        v2 = v8;
                    }
                }
            }
        }
    }
    else
    {
        v13 = 0;
        v16 = 0;
        v0 = 0;
        if (g_61daa8 < 0)
        {
            g_61daa8 = -1;
        }
    }
    if (g_61daa8 >= 0 && (v12 == 0 || (unsigned int)v16 >= 0) && (v12 == 0 || v15 == 0 || (unsigned int)v16 != 2))
    {
        v17 = utimensat(0xffffff9c, v14, v13, 0x100);
        if ((unsigned int)v17 > 0)
        {
            *(__errno_location()) = 38;
        }
        else
        {
            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v18 = __errno_location();
            }
            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>) || *(v18) != 38)
            {
                g_61daac = 1;
                g_61daa8 = 1;
                return stack_base + 0;
            }
        }
    }
    if ((v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2))
    {
        g_61daa8 = -1;
        if (v16 != 0 && v16 != 3)
        {
            v20 = __lxstat(0x1, v14, (unsigned int)&v5);
        }
    }
    if (g_61daa8 < 0 && v12 == 0 || v16 == 0 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2))
    {
        v19 = __lxstat(0x1, v14, (unsigned int)&v5);
    }
    if (v16 != 0 && v16 != 3 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2) && v20 == 0 && v0 != 0 || v16 == 3 && v16 != 0 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2) && v0 != 0)
    {
        v21 = sub_40f2d0();
    }
    if ((v16 != 0 && v16 != 3 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2) && v20 == 0 && v0 != 0 || v16 == 3 && v16 != 0 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2) && v0 != 0) && v21 == 0 || v16 != 0 && v16 != 3 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2) && v20 == 0 && v0 == 0 || v16 == 3 && v16 != 0 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2) && v0 == 0 || (g_61daa8 < 0 && v12 == 0 || v16 == 0 && (v12 == 0 || (unsigned int)v16 >= 0) && (g_61daa8 >= 0 || v12 != 0) && (g_61daa8 < 0 || *(v18) == 38 || (unsigned int)v17 > 0) && (g_61daa8 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v17 > 0) && (g_61daa8 < 0 || v12 == 0 || v15 == 0 || (unsigned int)v16 != 2)) && v19 == 0)
    {
        if (((unsigned short)v6 & 0xf000) != 0xa000)
        {
            v22 = (unsigned int)sub_40f460();
        }
        else
        {
            *(__errno_location()) = 38;
        }
    }
    if (...)
    {
        return stack_base + 0;
    }
}

int sub_410df0()
{
}

extern int512_t g_416f10;

int sub_40b240()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4288272)
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
        if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1 || (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1 || (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1 || (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1 || (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) == 1 || ((char)(BinaryOp CmpF & 69) & 1) != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0)
        {
            *(v1) = &g_416f10;
            return 0;
        }
    }
    if (...)
    {
        return 1;
    }
}

int sub_40aeb0()
{
    unsigned long long v1;  // rax

    v1 = sub_40aed0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_410330(); /* do not return */
}

extern unsigned int g_416982;
extern unsigned long long stdout[7];

int sub_404a30()
{
    unsigned long v2;  // rdx
    unsigned long long v3;  // rbx
    char *v5;  // rax

    __printf_chk(0x1, "%s -> %s", sub_40dca0(), sub_40dca0());
    if (v2 != 0)
    {
        v3 = (unsigned int)sub_40dd80();
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x416982, 0x5));
    }
    v5 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v5) = 10;
        return v5;
    }
}

int sub_40e8c0()
{
}

int sub_40c280()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 CONCAT (unsigned int)sub_413d10() ^ v0) % v1 >> 64;
}

extern int512_t g_61da60;

int sub_40d980()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_61da60 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_61da60 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern unsigned int g_41812f;
extern unsigned int g_61d408;

int sub_410330()
{
    dcgettext(0x0, 0x41812f, 0x5);
    error(g_61d408, 0x0, "%s");
}

int sub_410670()
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

int sub_40eaa0()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_40e910();
    }
    sub_40e8f0(); /* do not return */
}

int sub_410100()
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
        sub_410330(); /* do not return */
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_4182d7;
extern char g_61daf8[2];

int sub_413e10()
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
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_61daf8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_4182d7 : (unsigned long long)nl_langinfo(0xe));
    if (g_61daf8 == 0)
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
            v9 = &g_4182d7;
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
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v58[1];
                            v59 = *(v58);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1)
                        {
                            if ((unsigned int)v59 != 32 && (unsigned int)v59 != 35)
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
                                        v62 = v39 + 1;
                                        v48 = v36 + v41 - 1;
                                        if ((unsigned int)v42 >= 8)
                                        {
                                            *((long long *)v48) = *((long long *)&v5);
                                            v42 = v62;
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
                                        v9 = &g_4182d7;
                                        v10 = (tmp_10 == 0? &g_4182d7 : tmp_10);
                                        free(NULL);
                                        sub_414fe0();
                                    }
                                }
                            }
                            if ((unsigned int)v59 == 35)
                            {
                                do
                                {
                                    v60 = *((long long *)(v10 + 8));
                                    if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                    {
                                        *((char **)(v10 + 8)) = &v60[1];
                                        v61 = *(v60);
                                        v62 = 1;
                                    }
                                    else
                                    {
                                        v61 = __uflow(v10);
                                        v62 = (char)(v61 != -1);
                                    }
                                }
                                while (v62 != 0 && v61 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v36 != 0)
                        {
                            v59 = __uflow(v10);
                        }
                        if ((unsigned int)v59 == 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v61 == -1 || (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v36 != 0) && (unsigned int)v59 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_4182d7 : tmp_10);
                            sub_414fe0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (...)
                    {
                        v9 = &g_4182d7;
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
            v9 = &g_4182d7;
            free(v17);
        }
        *((char *[2])&g_61daf8[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_4182d7 : tmp_10), v9);
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

int sub_40dd10()
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
    return sub_40d780();
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[104];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

int sub_411010()
{
    void tmp_10;  // tmp #10
    unsigned long long v1;  // rdx
    struct_0 *v2;  // rbx
    unsigned int v3;  // edi
    unsigned long long v4;  // rax
    unsigned long long v5[3];  // rbp
    struct_1 *v6;  // r12
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
            v6 = (unsigned long long)(unsigned int)sub_40c060();
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
        if ((v5 == 0 || v6 == 0) && (v5 == 0 || v5 != v6))
        {
            return 0;
        }
    }
    else
    {
        v4 = sub_413bf0();
        if (v4 != 0)
        {
            v2->field_0 = v2;
            v2->field_70 = 2;
            return v4;
        }
    }
    if ((((unsigned short)v3 & 258) == 0 || v5 != 0) && (v4 == 0 || ((unsigned short)v3 & 258) != 0) && (v5 == v6 || ((unsigned short)v3 & 258) == 0 || v6 != 0))
    {
        return 1;
    }
}

int sub_40aea0()
{
}

extern unsigned int g_416f8e;

int sub_40e240()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v3[2];  // rax
    unsigned long v4;  // rdi

    v3 = __lxstat(0x1, 0x416f8e, (unsigned int)&v0);
    if (v3 == 0)
    {
        v3[0] = v1;
        v3[1] = *((long long *)&v0);
        return v4;
    }
    return 0;
}

typedef struct struct_0 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
    unsigned short field_a;
} struct_0;

int sub_40ad20()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edi
    struct_0 *v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v1 = 45;
    if (((unsigned short)v2 & 0xf000) != 0x8000)
    {
        v1 = 100;
        if (((unsigned short)v2 & 0xf000) != 0x4000)
        {
            v1 = 98;
            if (((unsigned short)v2 & 0xf000) != 0x6000)
            {
                v1 = 99;
                if (((unsigned short)v2 & 0xf000) != 0x2000)
                {
                    v1 = 108;
                    if (((unsigned short)v2 & 0xf000) != 0xa000)
                    {
                        v1 = 112;
                        if (((unsigned short)v2 & 0xf000) != 0x1000)
                        {
                            v1 = (unsigned int)((v2 & 0xf000) != 0xc000? 63 : 115);
                        }
                    }
                }
            }
        }
    }
    *((unsigned long long *)&v3->field_0) = v1;
    v3->field_1 = (0 - (unsigned int)(char)((v2 & 0x100) < 1) & -69) + 114;
    v3->field_2 = (0 - (unsigned int)(char)((v2 & 128) < 1) & -74) + 119;
    if (((unsigned short)v2 & 0x800) != 0)
    {
        v4 = (0 - (unsigned int)(char)((v2 & 64) < 1) & -32) + 115;
    }
    else
    {
        v4 = (0 - (unsigned int)(char)((v2 & 64) < 1) & -75) + 120;
    }
    *((unsigned long long *)&v3->field_3) = v4;
    v3->field_4 = (0 - (unsigned int)(char)((v2 & 32) < 1) & -69) + 114;
    v3->field_5 = (0 - (unsigned int)(char)((v2 & 16) < 1) & -74) + 119;
    if (((unsigned short)v2 & 0x400) != 0)
    {
        v5 = (0 - (unsigned int)(char)((v2 & 8) < 1) & -32) + 115;
    }
    else
    {
        v5 = (0 - (unsigned int)(char)((v2 & 8) < 1) & -75) + 120;
    }
    *((unsigned long long *)&v3->field_6) = v5;
    v3->field_7 = (0 - (unsigned int)(char)((v2 & 4) < 1) & -69) + 114;
    v3->field_8 = (0 - (unsigned int)(char)((v2 & 2) < 1) & -74) + 119;
    if (((unsigned short)v2 & 0x200) != 0)
    {
        v3->field_9 = (0 - (unsigned int)(char)((v2 & 1) < 1) & -32) + 116;
        v3->field_a = 32;
        return 32;
    }
    v3->field_9 = (0 - (unsigned int)(char)((v2 & 1) < 1) & -75) + 120;
    v3->field_a = 32;
    return 32;
}

int sub_40a5f0()
{
    char *v1;  // rsi
    char *v2;  // rax

    if (v1 == 0 || *(v1) == 0)
    {
        v2 = getenv("VERSION_CONTROL");
    }
    if (v2 == 0 && v1 == 0 || v2 == 0 && *(v1) == 0 || *(v2) == 0 && v1 == 0 || *(v2) == 0 && *(v1) == 0)
    {
        return 2;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_410690()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1->field_8) % v2 >> 64;
}

int sub_4102b0()
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
        sub_410330(); /* do not return */
    }
}

int sub_413690()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_413610();
}

int sub_413800()
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

int sub_40c2c0()
{
    unsigned long long v1[3];  // rdi
    unsigned long long v2[3];  // rsi

    if (v1[1] != v2[1] || v1[2] != v2[2])
    {
        return 0;
    }
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409690()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v3;  // rdi
    unsigned long v4;  // rsi
    struct_0 *v5;  // rax

    v0 = v3;
    v1 = v4;
    v5 = sub_40b650();
    if (v5 != 0)
    {
        return v5->field_10;
    }
    return 0;
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

int sub_413d50()
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

int sub_40de50()
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
    return sub_40d780();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[7];
    char field_17;
    char padding_18[20];
    char field_2c;
    char padding_2d[7];
    unsigned int field_34;
} struct_0;

extern unsigned long long g_61d908;
extern unsigned long long g_61d910;

int sub_4094d0()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    char v4;  // [bp-0x9]
    struct_0 *v6;  // rcx
    unsigned long v7;  // r9
    unsigned long v8;  // r8
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rsi

    if (!(v6 != 0))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(v6->field_0 <= 3))
    {
        __assert_fail(); /* do not return */
    }
    else if (!((unsigned int)((unsigned long long)v6->field_c - 1) <= 2))
    {
        __assert_fail(); /* do not return */
    }
    else if (v6->field_34 <= 2)
    {
        if (v6->field_17 != 0 && v6->field_2c != 0)
        {
            __assert_fail(); /* do not return */
        }
        if (v6->field_17 == 0 || v6->field_2c == 0)
        {
            if (v6->field_c != 2 && v6->field_34 == 2)
            {
                __assert_fail(); /* do not return */
            }
            if (v6->field_c == 2 || v6->field_34 != 2)
            {
                v4 = 0;
                v3 = v7;
                v2 = v8;
                g_61d910 = v9;
                g_61d908 = v10;
                v1 = stack_base + -9;
                v0 = 1;
                return sub_405650();
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
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

extern unsigned int g_418278;
extern unsigned int g_4182bc;

int sub_413040()
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
    unsigned int v13;  // edi
    unsigned long v14;  // rsi
    unsigned long v15;  // r12
    char v16[2];  // rdx
    unsigned int|unsigned long v17;  // eax
    unsigned long long v18;  // rax
    unsigned long long|char * v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9
    unsigned long v26;  // rax
    unsigned int|unsigned long v27;  // rdx
    unsigned long v29;  // rax
    char v30[2];  // rcx
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
    unsigned long long|unsigned long v42;  // rdx
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
    char v58[2];  // rax
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
                        sub_412940();
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
                            v26 = v0->field_0;
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
                            sub_412940();
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
    if ((v13 > 0 && v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if ((v13 > 0 && v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 > 0 && v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_412a20();
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
                        dcgettext(0x0, 0x418278, 0x5);
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
            dcgettext(0x0, 0x4182bc, 0x5);
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
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x418278, 0x5);
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
        v45 = (unsigned int)sub_412a20();
    }
    v63 = v45;
    return v63;
}

int sub_40b860()
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

extern unsigned int g_4182dc;
extern unsigned int g_4182f7;

int sub_413920()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x4182dc, 0x5);
    }
    dcgettext(0x0, 0x4182f7, 0x5);
    sub_40dfb0();
    sub_40dca0();
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
    char field_9;
    char field_a;
    char padding_b[5];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_7 {
    char padding_0[8];
    char field_8;
    char field_9;
    char field_a;
    char padding_b[5];
    unsigned long long field_10;
} struct_7;

typedef struct struct_8 {
    char padding_0[24];
    unsigned long long field_18;
} struct_8;

typedef struct struct_6 {
    char padding_0[112];
    unsigned short field_70;
} struct_6;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
    char padding_10[40];
    unsigned long long field_38;
    char padding_40[24];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_4;

extern unsigned int g_415fa2;
extern unsigned int g_415fc6;
extern unsigned int g_415fd9;
extern unsigned int g_416022;
extern unsigned int g_4160b0;
extern unsigned int g_4160e8;
extern unsigned int g_416118;
extern unsigned int g_416158;
extern unsigned int g_416190;
extern unsigned int g_4161c0;
extern unsigned int g_416280;

int sub_4041b0()
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long long *v2;  // rdi
    unsigned long long|unsigned int|unsigned long v3;  // r12
    struct_7 *v4;  // r13
    struct_8 *v5;  // rbp
    struct_6 *v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // r12
    unsigned long long v9;  // r12
    unsigned long long v10;  // rax
    char *v11;  // rdx
    unsigned long long v13;  // r15
    unsigned long long|unsigned int *|unsigned int v16;  // r14
    char v17[21];  // rax
    unsigned long long v18;  // rdx
    char v19;  // dl
    unsigned long long v20;  // rax
    char v23[2];  // rax
    unsigned long long v24;  // rdx
    char v25;  // dl
    unsigned long long v26;  // rax
    unsigned long long v27[12];  // rax
    unsigned long long v28;  // r15
    unsigned long long v29;  // r12
    char *v30;  // rdi
    unsigned long long v31;  // rcx
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long v34;  // d
    unsigned long long v36;  // r12
    unsigned long long v37;  // r12
    struct_4 *v40;  // rbx
    char *|struct_0 * v41;  // rsi
    unsigned long long v42;  // r14
    unsigned long long v44[12];  // rax
    unsigned long long v46;  // rbx
    unsigned long long v47[12];  // rax
    unsigned int *v50;  // rbx
    unsigned int v51;  // eax
    unsigned long long v52;  // rbp
    unsigned long long v55;  // rax

    if (*(v2) != 0)
    {
        v4 = v41;
        v3 = 2;
        v5 = (unsigned long long)(unsigned int)sub_410370();
        while (true)
        {
            v6 = fts_read();
            v40 = v6;
            if (v6 == 0)
            {
                break;
            }
            while (true)
            {
                v7 = v6->field_70;
                if (v7 << 48 <= 0xd000000000000)
                {
                    /* goto *((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)); */
                    if (*((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211392)
                    {
                        if (v7 == 6 && v40->field_58 > 0 && v40->field_78 != v5->field_18 && v4->field_8 != 0)
                        {
                            v44 = v40->field_8;
                            if (!((char)(v40->field_8->field_58 - 0 >> 63)))
                            {
                                while (v44[4] == 0)
                                {
                                    v44[4] = 1;
                                    v44 = v44[1];
                                    if ((char)(v44[11] - 0 >> 63))
                                    {
                                        break;
                                    }
                                }
                            }
                            v3 = 4;
                            v46 = (unsigned int)sub_40dd80();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416190, 0x5));
                        }
                        if (v40->field_58 <= 0 || v40->field_78 == v5->field_18 || v4->field_8 == 0 || v7 != 6)
                        {
                            v42 = (unsigned int)sub_403d00();
                            if ((unsigned int)v42 == 2)
                            {
                                v42 = (unsigned int)sub_403a80();
                            }
                        }
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211592)
                    {
                        if (v4->field_9 == 0)
                        {
                            if (v4->field_a != 0)
                            {
                                v10 = openat();
                                if ((unsigned int)v10 >= 0)
                                {
                                    v13 = fdopendir(v10);
                                    if (v13 != 0)
                                    {
                                        *(v16) = 0;
                                        v16 = __errno_location();
                                        while (true)
                                        {
                                            v17 = readdir();
                                            if (v17 != 0)
                                            {
                                                if (v17[2 + 3] == 46)
                                                {
                                                    v18 = 0;
                                                    v19 = v17[2 + 4] == 46;
                                                    v20 = v17[2 + 4 + rdx<8>];
                                                }
                                                closedir();
                                            }
                                            else
                                            {
                                                v16 = *(v16);
                                                closedir();
                                                if (v16 != 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        close(v10);
                                    }
                                }
                                if (v4->field_a != 0)
                                {
                                    v3 = 39;
                                }
                            }
                            if ((v4->field_a == 0 || v4->field_a == 0) && ((unsigned int)v10 < 0 || v4->field_a == 0 || v13 == 0))
                            {
                                v3 = 21;
                            }
                            if ((unsigned int)v10 < 0 || v4->field_a == 0 || v13 == 0 || v4->field_a != 0)
                            {
                                v16 = (unsigned long long)(unsigned int)sub_40dd80();
                                error(0x0, v3, (unsigned long long)dcgettext(0x0, 0x415fa2, 0x5));
                                v27 = v40->field_8;
                                if (!((char)(v40->field_8->field_58 - 0 >> 63)))
                                {
                                    while (true)
                                    {
                                        if (v27[4] == 0)
                                        {
                                            v27[4] = 1;
                                            v27 = v27[1];
                                            if ((char)(v27[11] - 0 >> 63))
                                            {
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (v40->field_58 == 0 && ((unsigned int)v10 >= 0 || v4->field_9 != 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v13 != 0))
                        {
                            v23 = sub_40aa00();
                            if (v23[0] == 46)
                            {
                                v24 = 0;
                                v25 = v23[1] == 46;
                                v26 = v23[1 + rdx<8>];
                            }
                        }
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211232)
                    {
                        v8 = (unsigned int)sub_40de50();
                        v11 = (unsigned long long)dcgettext(0x0, 0x415fd9, 0x5);
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211536)
                    {
                        v9 = (unsigned int)sub_40de50();
                        v11 = (unsigned long long)dcgettext(0x0, 0x4161c0, 0x5);
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211232 || *((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211536)
                    {
                        error(0x0, v41, v11);
                    }
                }
                if (*((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4212680 || v7 << 48 > 0xd000000000000)
                {
                    v52 = (unsigned int)sub_40de50();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416280, 0x5));
                    abort(); /* do not return */
                }
                if (...)
                {
                    v30 = "/";
                    v31 = 2;
                    v41 = v40->field_38;
                    while (v31 != 0)
                    {
                        v31 -= 1;
                        v32 = *(v41);
                        v33 = *(v30);
                        v30 = &v30[v34];
                        v41 = &v41[v34];
                        break;
                    }
                    if ((v32 > v33) - 0 - (v32 < v33) == 0)
                    {
                        v36 = (unsigned int)sub_40dd80();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4160e8, 0x5));
                    }
                    else
                    {
                        v16 = (unsigned int)sub_40dca0();
                        v37 = (unsigned int)sub_40dca0();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416118, 0x5));
                    }
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416158, 0x5));
                }
                if (v7 << 48 <= 0xd000000000000 && *((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211592 && v40->field_58 == 0 && ((unsigned int)v10 >= 0 || v4->field_9 != 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v13 != 0) && v23[0] == 46 && v26 != 0 && v26 == 47 || v7 << 48 <= 0xd000000000000 && *((long long *)((unsigned long long)(unsigned int)ax<2> * 8 + 4285112)) == 4211592 && v40->field_58 == 0 && ((unsigned int)v10 >= 0 || v4->field_9 != 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v13 != 0) && v23[0] == 46 && v26 == 0)
                {
                    v28 = (unsigned int)sub_40dca0();
                    v16 = (unsigned long long)(unsigned int)sub_40dca0();
                    v29 = (unsigned int)sub_40dca0();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4160b0, 0x5));
                }
                if (...)
                {
                    v42 = (unsigned int)sub_403d00();
                    if ((unsigned int)v42 == 2)
                    {
                        if (v0 != 4)
                        {
                            break;
                        }
                        v42 = (unsigned int)sub_403a80();
                        fts_set();
                        fts_read();
                        if ((unsigned int)v42 == 2)
                        {
                            break;
                        }
                    }
                    v47 = v40->field_8;
                    if (!((char)(v40->field_8->field_58 - 0 >> 63)))
                    {
                        while (v47[4] == 0)
                        {
                            v47[4] = 1;
                            v47 = v47[1];
                            if ((char)(v47[11] - 0 >> 63))
                            {
                                break;
                            }
                        }
                    }
                    fts_set();
                    fts_read();
                }
                if (...)
                {
                    if ((unsigned int)(v42 - 2) > 2)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if ((unsigned int)v42 != 4)
                    {
                        if ((unsigned int)v42 != 3)
                        {
                            break;
                        }
                        v3 = (unsigned int)((unsigned int)v3 == 2? 3 : (unsigned int)v3);
                    }
                    else
                    {
                        v3 = 4;
                    }
                }
                if (...)
                {
                    v3 = 4;
                    fts_set();
                    fts_read();
                    v6 = fts_read();
                    v40 = v6;
                    if (v6 == 0)
                    {
                        break;
                    }
                }
            }
            if (...)
            {
                v6 = fts_read();
            }
            else
            {
                v50 = __errno_location();
                v51 = *(v50);
            }
        }
        v50 = __errno_location();
        v51 = *(v50);
        v3 = 4;
        error(0x0, *(v50), (unsigned long long)dcgettext(0x0, 0x415fc6, 0x5));
        if (fts_close() != 0 || fts_close() != 0)
        {
            v3 = 4;
            error(0x0, *(v50), (unsigned long long)dcgettext(0x0, 0x416022, 0x5));
        }
    }
    else
    {
        v3 = 2;
    }
    v55 = v3;
    return v55;
}

extern unsigned long long g_61d3f8;
extern unsigned long long g_61d500;
extern unsigned long long g_61d900;

int sub_4048e0()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rbx
    unsigned long v4;  // rbp
    unsigned long long v5;  // rax

    v2 = v1;
    if (g_61d900 == 0)
    {
        if (g_61d900 != 0)
        {
            g_61d900 = calloc(g_61d3f8, 0x1);
        }
        else
        {
            g_61d900 = &g_61d500;
            g_61d3f8 = 0x400;
        }
    }
    if (v1 != 0)
    {
        while (true)
        {
            v4 = (g_61d3f8 <= v2? g_61d3f8 : v2);
            v5 = sub_40afb0();
            if (v5 == v4)
            {
                v2 -= v5;
                if (v2 == v5)
                {
                    break;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_4100e0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_410330(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_40b0e0()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4095f0()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_40b8a0()
{
    struct_0 *v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
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

typedef struct struct_2 {
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

int sub_40c0a0()
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
    uint128_t|unsigned long long|unsigned int|unsigned long v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    uint128_t v14;  // xmm1
    unsigned int v15;  // ymm1
    unsigned long long v16;  // xmm1lq
    struct_2 *v18;  // rdx
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm0
    unsigned int v21;  // ymm0
    uint128_t|unsigned int|unsigned long v22;  // xmm1
    uint128_t v23;  // xmm1
    unsigned int v24;  // ymm1
    uint128_t v25;  // xmm2
    unsigned int v26;  // ymm2
    unsigned long long v27;  // xmm2lq
    uint128_t v28;  // xmm0
    struct_3 *v30;  // rdi
    void *v31;  // r12

    v3 = v2;
    if (sub_40b120() != 0)
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
                sub_40b240();
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
                    if (sub_40bbe0() == 0)
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

int sub_40a940()
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
    v5 = sub_40aa00();
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

int sub_40c060()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40bde0();
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

int sub_40c430()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx

    v0 = v2;
    return sub_4137c0();
}

int sub_40a880()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // r12d
    unsigned int *v6;  // rbp
    unsigned long long v7;  // r13
    unsigned int|unsigned long v9;  // r14
    unsigned long long v10;  // rbx

    if (v2 != 0)
    {
        v3 = dirfd();
        if (v3 <= 2)
        {
            v5 = sub_410460();
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

extern unsigned int g_415f96;
extern unsigned int g_4163d0;

int sub_404c10()
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rbp
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rbx
    unsigned long long v6;  // bl
    unsigned long long v7;  // r13
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rbp

    v2 = v1;
    v4 = v3;
    if ((unsigned int)sub_409b50() >= 0)
    {
        v6 = (char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>) & v2;
        if (((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>) & v2) == 0)
        {
            return 1;
        }
        v9 = (unsigned int)sub_40dd80();
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415f96, 0x5));
        return rbx<8>;
    }
    v7 = (unsigned int)sub_40dca0();
    v8 = (unsigned int)sub_40dca0();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4163d0, 0x5));
    return 0;
}

int sub_405650() { crash_skku_timeout;
}
extern unsigned int g_417e19;
extern unsigned int g_417e2e;
extern unsigned int g_418060;

int sub_410020()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417e19, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417e2e, 0x5));
    dcgettext(0x0, 0x418060, 0x5);
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

int sub_410ac0()
{
    unsigned long long v0;  // [bp-0x98]
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
            v7 = (unsigned int)sub_40b8c0();
            v6->field_50->field_50 = v7;
            if (v7 == 0)
            {
                v9 = fstatfs(v6->field_50->field_2c, (unsigned int)&v0);
            }
        }
        if (v6->field_50->field_50 != 0 || v7 != 0)
        {
            v0 = v6->field_78;
            v8 = sub_40b650();
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
                        v16 = sub_40c060();
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
            if ((v10 == 0 || v8 != 0) && (v16 == 0 || v13 == 0 || v8 != 0))
            {
                v19 = v1;
                v20 = v2;
                return v14;
            }
        }
    }
    if ((v6->field_50->field_49 & 2) == 0 || v6->field_50->field_50 == 0 && v7 == 0 && v9 != 0 || v8 == 0 && v10 != 0 && v6->field_50->field_50 != 0 || v8 == 0 && v10 != 0 && v7 != 0)
    {
        v11 = v1;
        v12 = v2;
        return 0;
    }
    if (v9 == 0 && v6->field_50->field_50 == 0 && v7 == 0 && (v6->field_50->field_49 & 2) != 0 || v10 == 0 && v8 == 0 && v13 == v16 && (v6->field_50->field_49 & 2) != 0 && v16 != 0 && v13 != 0 && (v6->field_50->field_50 != 0 || v7 != 0))
    {
        v17 = v1;
        v18 = v2;
        return v0;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c2b0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1->field_8) % v2 >> 64;
}

int sub_40f8a0()
{
}

int sub_404890()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned int v2;  // esi
    unsigned long long v4;  // rbx
    unsigned long long v6;  // rbx
    unsigned int v7;  // edi
    unsigned long long v9;  // rbx
    char v10;  // al

    if ((v2 & 0xf000) == 0xa000)
    {
        return 1;
    }
    v0 = v4;
    if (sub_4100a0() != 0)
    {
        v6 = v0;
        return 1;
    }
    v9 = v0;
    v10 = euidaccess(v7, 0x2) == 0;
    return rax<8>;
}

extern uint128_t g_61da60;
extern uint128_t g_61da70;
extern uint128_t g_61da80;
extern unsigned long long g_61da90;

int sub_40dd9f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_61da90;
    *((uint128_t *)&v0) = g_61da60;
    *((uint128_t *)&v1) = g_61da70;
    *((uint128_t *)&v2) = g_61da80;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_40d780();
}

typedef struct struct_2 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    char padding_8[1];
    char field_9;
    char field_a;
    char padding_b[13];
    char field_18;
} struct_2;

typedef struct struct_1 {
    char padding_0[44];
    unsigned int field_2c;
} struct_1;

extern unsigned int g_415fa2;
extern unsigned int g_415fb3;
extern unsigned int g_416038;
extern unsigned int g_416068;
extern unsigned int g_416088;

int sub_403d00()
{
    unsigned long v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xd8]
    unsigned int *|unsigned int v2;  // [bp-0xd0]
    unsigned int v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0x98]
    struct_2 *v6;  // rcx
    struct_2 *v7;  // rbp
    struct_1 *v8;  // rdi
    unsigned long long v10[8];  // rsi
    unsigned int *v11;  // r9
    char v12;  // dl
    unsigned long long v14;  // rbx
    char v15;  // dl
    char v16;  // bl
    unsigned long long|unsigned long v18;  // r14
    unsigned int|unsigned long v20;  // rax
    char v21[21];  // rax
    unsigned long long v22;  // rdx
    char v23;  // dl
    unsigned long long v24;  // rax
    unsigned int|unsigned long v26;  // eax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned int *v30;  // rax
    unsigned long long|unsigned int v31;  // r12
    unsigned int|unsigned long v32;  // r15d
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx
    unsigned int v36;  // r8d
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r12
    unsigned long long v44;  // rax

    v7 = v6;
    v1 = v8->field_2c;
    *((unsigned long long [8])&v0) = v10[7];
    if (v11 != 0)
    {
        *(v11) = 2;
        v14 = 0;
        v16 = v15 != 0;
        v4 = -1;
        v14 = (unsigned int)rbx<8> * 4;
        if (v2 >= 0)
        {
            v2 = openat();
            v18 = fdopendir(v2);
            if (v18 != 0)
            {
                v2 = __errno_location();
                *(v2) = 0;
                while (true)
                {
                    v21 = readdir();
                    if (v21 != 0)
                    {
                        if (v21[2 + 3] == 46)
                        {
                            v22 = 0;
                            v23 = v21[2 + 4] == 46;
                            v24 = v21[2 + 4 + rdx<8>];
                        }
                        closedir();
                    }
                    else
                    {
                        v2 = *(v2);
                        closedir();
                        if (v2 != 0)
                        {
                            break;
                        }
                        v18 = 1;
                        v20 = 4;
                    }
                }
                if (v21 == 0 || v21[2 + 3] != 46 || v24 != 0 && v24 != 47)
                {
                    v18 = 0;
                    v20 = 3;
                }
                else if (v2 == 0 && v21 == 0)
                {
                    *((unsigned long *)&v11) = v20;
                }
            }
            else
            {
                close(v2);
                v20 = 3;
            }
        }
        if (v2 < 0 || v18 != 0)
        {
            v18 = 0;
            v20 = 3;
        }
        *((unsigned long *)&v11) = v20;
    }
    else
    {
        v4 = -1;
        v14 = !(0 - (unsigned int)(char)(v12 < 1)) & 4;
        v18 = (unsigned int)(v12 != 0? 0 : (unsigned int)rdx<8>);
    }
    if (v10[4] == 0)
    {
        v26 = v7->field_4;
        if (v7->field_4 != 5 && v7->field_0 == 0 && (v6->field_4 == 3 || v7->field_18 != 0))
        {
            v27 = sub_4100a0();
            if (v27 == 0)
            {
                v28 = sub_403c90();
                if (v28 == 0 && ((unsigned short)v3 & 0xf000) != 0xa000)
                {
                    v29 = faccessat(v1, (unsigned int)v10[6], 0x2, 0x200);
                    if (v29 != 0)
                    {
                        v30 = __errno_location();
                        v31 = *(v30);
                        if (*(v30) == 13)
                        {
                            v32 = 1;
                        }
                    }
                }
            }
        }
    }
    if (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0)
    {
        v26 = v7->field_4;
    }
    if ((v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3)
    {
        v32 = 0;
    }
    if (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) == 13 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3)
    {
        if (v14 != 0)
        {
        }
        else
        {
            v33 = sub_403c90();
        }
    }
    if (v27 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v28 != 0 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) == 13 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3) && v14 == 0 && v33 != 0)
    {
        v31 = *(__errno_location());
    }
    if (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) != 13 || v27 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v28 != 0 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) == 13 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3) && v14 == 0 && v33 != 0)
    {
        v34 = (unsigned int)sub_40dd80();
    }
    if (...)
    {
        if (v7->field_9 == 0)
        {
        }
        else
        {
            v35 = (unsigned int)sub_40dd80();
            if (v36 == 2 && v18 == 0)
            {
                if (v32 == 0)
                {
                    v40 = dcgettext(0x0, 0x416068, 0x5);
                }
                else
                {
                    v41 = dcgettext(0x0, 0x416038, 0x5);
                }
                __fprintf_chk();
            }
        }
    }
    if (...)
    {
        v31 = 21;
        v37 = (unsigned int)sub_40dd80();
    }
    if (...)
    {
        v38 = (unsigned int)sub_40dd80();
    }
    if (...)
    {
        error(0x0, v31, (unsigned long long)dcgettext(0x0, 0x415fa2, 0x5));
        v42 = 4;
    }
    if (...)
    {
        v39 = sub_403c90();
        if (v39 == 0)
        {
            v43 = (unsigned int)sub_40ac30();
            if (v32 == 0)
            {
                dcgettext(0x0, 0x415fb3, 0x5);
            }
            else
            {
                dcgettext(0x0, 0x416088, 0x5);
            }
            __fprintf_chk();
        }
        else
        {
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x415fa2, 0x5));
            v42 = 4;
        }
    }
    if (...)
    {
        v44 = sub_4103f0();
    }
    if (...)
    {
        v42 = 3;
    }
    if (...)
    {
        v42 = 2;
    }
    return v42;
}

extern int512_t g_61da60;

int sub_40da10()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_61da60 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_40c550();
}

int sub_413d10() { crash_skku;
}
int sub_40ff60()
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
        return sub_40fb00();
    }
}

int sub_40e3fb()
{
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

int sub_4109a0()
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

int sub_40de20()
{
}

extern unsigned int g_61d3f0;

int sub_405620()
{
    if (g_61d3f0 != -1)
    {
        return g_61d3f0;
    }
    g_61d3f0 = umask(0x0);
    umask(g_61d3f0);
    return g_61d3f0;
}

int sub_413670()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_413610();
}

int sub_40df40()
{
}

int sub_4102e0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4100e0();
}

int sub_40dff0()
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
                    if (v22 == 0 || *(v19) == 75)
                    {
                        *(v0) = 17;
                        v18 = -18446744069414584321;
                    }
                }
            }
            if (v15 == 0 || (v15 & -2) == 0 && v23 == 2 && v22 != 0 && *(v19) != 75)
            {
                v0 = v19;
                v24 = strlen(v13);
                v25 = strlen(v14);
            }
            if (v13[v24 + -1] == 47 && v25 != 0 && v24 != 0 && ((v15 & -2) == 0 || v15 == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || v22 != 0) && (v15 == 0 || *(v19) != 75) || v14[v25 + -1] == 47 && v25 != 0 && v24 != 0 && v13[v24 + -1] != 47 && ((v15 & -2) == 0 || v15 == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || v22 != 0) && (v15 == 0 || *(v19) != 75))
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

int sub_4136b0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_413040();
}

int sub_40eb60() { crash_skku;
}
extern unsigned int g_61daa8;
extern unsigned int g_61daac;

int sub_40f460()
{
    unsigned long long v0;  // [bp-0x120]
    void tmp_77;  // tmp #77
    void tmp_84;  // tmp #84
    void v1;  // [bp-0x118]
    void v2;  // [bp-0x108]
    char|unsigned long v3;  // [bp-0xf8]
    unsigned long v4;  // [bp-0xf0]
    unsigned long v5;  // [bp-0xe8]
    unsigned long v6;  // [bp-0xe0]
    unsigned long|void v7;  // [bp-0xd8]
    unsigned long long|unsigned long v8;  // [bp-0xd0]
    void v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    char v11;  // [bp-0xb8]
    unsigned long v12;  // [bp-0x70]
    unsigned long v13;  // [bp-0x68]
    unsigned long v14;  // [bp-0x60]
    unsigned long v15;  // [bp-0x58]
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rbp
    unsigned long v19;  // rdi
    unsigned int v20;  // ebx
    uint128_t v21[2];  // rdx
    char v22;  // al
    unsigned long long v23;  // rsi
    unsigned long long v24;  // r13
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // r12
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep1
    unsigned int *v30;  // rax
    char v31;  // al
    unsigned long long v32;  // rax
    unsigned long long v33;  // rsi
    unsigned long long v34;  // r13
    unsigned long long v35;  // rdi
    unsigned long long v36;  // rsi
    char v37;  // bpl
    char v38;  // r14b
    unsigned long long v39;  // rax
    unsigned long long v41;  // rax
    unsigned int v43;  // edx
    char v44;  // dl
    unsigned long v45;  // r14
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax

    v18 = v17;
    v20 = v19;
    if (v21 != 0)
    {
        v0 = stack_base + -280;
        *((int128_t *)&v1) = *((int128_t *)&v21);
        *((int128_t *)&v2) = *((int128_t *)&v21[2]);
        v24 = sub_40f3a0();
    }
    else
    {
        v0 = 0;
        v24 = 0;
    }
    if (v21 == 0 || v24 >= 0)
    {
        if ((unsigned int)v19 < 0)
        {
            if (v17 == 0)
            {
                *(__errno_location()) = 9;
            }
            if (g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2))
            {
                v25 = utimensat(0xffffff9c, v18, v23, 0x0);
                v27 = v25;
                v28 = v25;
            }
        }
        if (g_61daac >= 0)
        {
            if ((unsigned int)v19 >= 0 || v17 != 0)
            {
                if (v24 != 2)
                {
                    v23 = v0;
                }
                else
                {
                    if ((unsigned int)v19 >= 0)
                    {
                        v22 = __fxstat(0x1, v19, (unsigned int)&v11) != 0;
                    }
                    else
                    {
                        v22 = __xstat(0x1) != 0;
                    }
                    if (v22 == 0)
                    {
                        v23 = v0;
                        if (*((long long *)(v0 + 8)) != 1073741822)
                        {
                            v24 = 3;
                            if (*((long long *)(v23 + 24)) == 1073741822)
                            {
                                *((unsigned long *)(v23 + 24)) = v15;
                                *((unsigned long *)(v23 + 16)) = v14;
                            }
                        }
                        else
                        {
                            v24 = 3;
                            *((unsigned long *)v23) = v12;
                            *((unsigned long *)(v23 + 8)) = v13;
                        }
                    }
                }
            }
            if ((unsigned int)v19 >= 0 && (v22 == 0 || v24 != 2))
            {
                v26 = futimens(v19);
                v27 = v26;
                v29 = v26;
            }
        }
    }
    if (((unsigned int)v19 >= 0 && g_61daac >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || (unsigned int)v19 < 0 && g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)))
    {
        v30 = __errno_location();
    }
    if ((unsigned int)v19 >= 0 && g_61daac >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 > 0 || (unsigned int)v19 < 0 && g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 > 0)
    {
        *(__errno_location()) = 38;
    }
    if (((unsigned int)v19 >= 0 && g_61daac >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || (unsigned int)v19 < 0 && g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)) && *(v30) != 38 || ((unsigned int)v19 >= 0 && g_61daac >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || (unsigned int)v19 < 0 && g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && (char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))
    {
        g_61daac = 1;
    }
    if (((unsigned int)v19 >= 0 && g_61daac >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || (unsigned int)v19 < 0 && g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)) && *(v30) == 38 || (unsigned int)v19 >= 0 && g_61daac >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 > 0 || (unsigned int)v19 < 0 && g_61daac >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 > 0 || (v21 == 0 && (unsigned int)v19 >= 0 || v21 == 0 && v17 != 0 || (unsigned int)v19 >= 0 && v24 >= 0 || v24 >= 0 && v17 != 0) && g_61daac < 0)
    {
        g_61daac = -1;
        g_61daa8 = -1;
        if (v24 != 0 && v24 != 3)
        {
            if ((unsigned int)v19 >= 0)
            {
                v31 = __fxstat(0x1, v19, (unsigned int)&v11) != 0;
            }
            else
            {
                v31 = __xstat(0x1) != 0;
            }
        }
    }
    if (...)
    {
        v27 = -18446744069414584321;
    }
    if (...)
    {
        v27 = 0;
        v32 = sub_40f2d0();
    }
    if (...)
    {
        v33 = v0;
        if (v0 != 0)
        {
            v34 = &v3;
            v3 = *((long long *)v33);
            v35 = *((long long *)(v33 + 8)) >> 63;
            tmp_77 = *((long long *)(v33 + 8)) * 2361183241434822607 >> 64;
            tmp_84 = *((long long *)(v33 + 24));
            v5 = *((long long *)(v33 + 16));
            v36 = *((long long *)(v33 + 24)) >> 63;
            v4 = (tmp_77 >> 7) - v35;
            v6 = ((unsigned long long)(tmp_84 * 2361183241434822607 >> 64) >> 7) - v36;
        }
    }
    if (...)
    {
        v34 = 0;
    }
    if (...)
    {
        v27 = futimesat(0xffffff9c, v18);
    }
    if (...)
    {
        v27 = futimesat(v20, 0x0);
        if ((unsigned int)v27 != 0)
        {
            v27 = -18446744069414584321;
            if (v18 != 0)
            {
                v39 = v0;
                if (v0 != 0)
                {
                    v41 = *((long long *)(v39 + 16));
                    v7 = *((long long *)v39);
                    v8 = v41;
                }
                v27 = utime(v18);
            }
        }
        else if (v34 != 0)
        {
            v37 = 499999 < *((long long *)(v34 + 8));
            v38 = 499999 < *((long long *)(v34 + 24));
            if ((499999 < *((long long *)(v34 + 8)) || v38 != 0) && __fxstat(0x1, v20, (unsigned int)&v11) == 0)
            {
                v43 = v14 - *((long long *)(v34 + 16));
                v44 = v14 - *((long long *)(v34 + 16)) == 1;
                *((int128_t *)&v7) = *((int128_t *)v34);
                *((int128_t *)&v9) = *((int128_t *)(v34 + 16));
                v46 = (unsigned int)v45 & rdx<4>;
                if (v12 - *((long long *)v34) == 1 && v37 != 0 && v13 == 0)
                {
                    v8 = 0;
                }
                if (v15 == 0 && v46 != 0)
                {
                    v10 = 0;
                }
                if ((v12 - *((long long *)v34) == 1 || v15 == 0) && (v15 == 0 || v13 == 0) && (v12 - *((long long *)v34) == 1 || v46 != 0) && (v15 == 0 || v37 != 0) && (v13 == 0 || v46 != 0) && (v37 != 0 || v46 != 0))
                {
                    futimesat(v20, 0x0);
                }
                v27 = 0;
            }
        }
    }
    v47 = v27;
    return v47;
}

int sub_40abf0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6[2];  // rdx
    char v8;  // al

    if (v4 != 0)
    {
        v0 = v5;
        *((unsigned long long [2])&v1) = v6[1];
        *((unsigned long long [2])&v2) = *(v6);
        v8 = sub_40b650() != 0;
        return rax<8>;
    }
    return 0;
}

extern unsigned long long g_61d920;

int sub_40a0a0()
{
    unsigned long long v0;  // [bp-0x90]
    void *v1;  // [bp-0x88]
    unsigned long long|unsigned short|char|unsigned long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned int|unsigned long v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x58]
    unsigned long v8;  // [bp-0x50]
    unsigned long long|unsigned long v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    void *v12;  // rdi
    unsigned long long|unsigned short *|void *|unsigned int * v13;  // rbx
    unsigned int v14;  // esi
    unsigned long long v15;  // rax
    unsigned long long v17;  // rax
    unsigned long long v19;  // r12
    unsigned long long v22;  // r13
    unsigned long long v23;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    char|unsigned long v29;  // r8b
    unsigned long long v30;  // rax
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // rax
    unsigned long v34;  // rdx
    unsigned long v35;  // rax
    unsigned long long v36;  // r8
    unsigned long long v37;  // rsi
    char v38;  // sil
    unsigned long long v40;  // rax
    unsigned int|unsigned long v41;  // rdx
    char *v42;  // rax
    unsigned long long v43;  // r15
    unsigned long long v44;  // rcx
    unsigned long long v45;  // rdx
    unsigned int v46;  // rbp
    unsigned long long|char * v49;  // r14
    unsigned long long v50;  // rax
    unsigned int v52;  // ebp
    unsigned long long v53;  // rdi
    unsigned int *v54;  // rbx
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rax

    v13 = v12;
    v1 = v12;
    v7 = v14;
    v49 = (unsigned long long)(unsigned int)sub_40aa00() - v12;
    v15 = &v49[strlen(v49)];
    v0 = v15;
    if (g_61d920 == 0)
    {
        sub_40a040();
    }
    v17 = strlen(g_61d920);
    *((unsigned long long *)&v10) = v17 + 1;
    *((unsigned long long *)&v6) = v0 + 1;
    v8 = (9 <= v17 + 1? v17 + 1 : 9) + v0 + 1;
    v43 = malloc((9 <= v17 + 1? v17 + 1 : 9) + v0 + 1);
    if (v43 != 0)
    {
        v19 = 0;
        while (true)
        {
            memcpy(v43, v1, *((long long *)&v6));
            if (v7 != 1)
            {
                v13 = &v49[v43];
                v22 = (unsigned int)sub_40aa60();
                if (v19 != 0)
                {
                    rewinddir(v19);
                }
                else
                {
                    v23 = *(v13);
                    *(v13) = 46;
                    *((unsigned long long *)&v2) = v23;
                    v19 = (unsigned int)sub_40a880();
                    if (v19 != 0)
                    {
                        *(v13) = v2;
                        *((int *)v3) = 2117172782;
                        *((char *)(v3 + 4)) = 0;
                    }
                    else
                    {
                        v3 = v44;
                        __errno_location();
                        *(v13) = v2;
                        v46 = 0 + 2;
                        *((int *)v3) = 2117172782;
                        *((char *)(v3 + 4)) = 0;
                    }
                }
                if (v19 != 0 || v19 != 0)
                {
                    v46 = 2;
                    v3 = 1;
                    v4 = v8;
                    v5 = v22 + 4;
                    while (true)
                    {
                        v25 = readdir();
                        if (v25 == 0)
                        {
                            break;
                        }
                        while (true)
                        {
                            v13 = v25 + 19;
                            v26 = strlen(v25 + 19);
                            if (v26 < v5)
                            {
                                break;
                            }
                            v2 = v22 + 2;
                            v27 = memcmp(&v49[v43], v13, v22 + 2);
                            if (v27 != 0)
                            {
                                break;
                            }
                            v13 += v2;
                            v28 = (char)*((char *)v13);
                            if ((v28 - 49 & 255) > 8)
                            {
                                break;
                            }
                            v44 = 1;
                            v29 = v28 == 57;
                            v30 = (char)*((char *)(v13 + 1));
                            if (*((char *)(v13 + v44 + 1)) != 0 || v30 != 126)
                            {
                                break;
                            }
                            if ((unsigned int)(char)*((char *)(v13 + 1)) - 48 <= 9)
                            {
                                do
                                {
                                    v44 += 1;
                                    v29 &= (unsigned int)v30;
                                    v30 = (char)*((char *)(v13 + v44));
                                }
                                while ((unsigned int)(char)*((char *)(v13 + v44)) - 48 <= 9);
                            }
                            v45 = v3;
                            v32 = v3;
                            if (v3 >= v44)
                            {
                                v9 = v44;
                                *((unsigned long *)&v2) = v29;
                                if (v32 != v44)
                                {
                                    break;
                                }
                                v33 = memcmp(v43 + v0 + 2, v13, v45);
                                v29 = v2;
                                v44 = v9;
                                if (v33 > 0)
                                {
                                    break;
                                }
                            }
                            v34 = v29;
                            v46 = v29;
                            v3 = v9 + v44;
                            v35 = v0 + v9 + v44 + 4;
                            if (v0 + v9 + v44 + 4 > v4)
                            {
                                v37 = 0;
                                v38 = [D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>);
                                if (rsi<8> == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>)))
                                {
                                    *((unsigned long *)&v4) = v4 * 2;
                                }
                                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>) || rsi<8> != 0)
                                {
                                    *((unsigned long *)&v4) = v35;
                                }
                                v9 = v34;
                                v2 = v44;
                                v36 = realloc(v43, *((long long *)&v4));
                                if (v36 == 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v36 = v43;
                            }
                            v9 = v36;
                            v2 = v44;
                            *((short *)(v0 + v36)) = 32302;
                            *((char *)(v0 + v36 + 2)) = 48;
                            v40 = memcpy(v0 + v36 + v9 + 2, v13, v44 + 2);
                            v41 = (char)*((char *)(v2 + v40 - 1));
                            v42 = v2 + v40 - 1;
                            if (v41 == 57)
                            {
                                do
                                {
                                    *(v42) = 48;
                                    v42 = &v42[-1];
                                    v41 = *(v42);
                                }
                                while (*(v42) == 57);
                            }
                            v45 = (unsigned long long)v41 + 1;
                            v43 = v9;
                            *((unsigned long long *)&v42) = v45;
                            v25 = readdir();
                        }
                        if (true)
                        {
                            v25 = readdir();
                        }
                        else if (...)
                        {
                            v53 = v43;
                            v43 = 0;
                            free(v53);
                            *(__errno_location()) = 12;
                        }
                    }
                    if (false)
                    {
                        v53 = v43;
                        v43 = 0;
                        free(v53);
                        *(__errno_location()) = 12;
                    }
                }
                if (v7 == 2)
                {
                    memcpy(v43 + v0, g_61d920, *((long long *)&v10));
                    v7 = 1;
                }
                if (v46 == 3 || v19 != 0 || v19 != 0)
                {
                    v53 = v43;
                    v43 = 0;
                    free(v53);
                    *(__errno_location()) = 12;
                }
                sub_409f70();
            }
            else
            {
                memcpy(v43 + v0, g_61d920, *((long long *)&v10));
            }
            if (v45 != 0)
            {
                if (v19 != 0)
                {
                    v45 = dirfd();
                }
                if ((unsigned int)v45 < 0 || v19 == 0)
                {
                    v49 = 0;
                }
                v50 = sub_40dff0();
                if (v50 != 0)
                {
                    v52 = *(v13);
                    v13 = __errno_location();
                    if (v19 != 0)
                    {
                        closedir();
                    }
                    v57 = v43;
                    v43 = 0;
                    free(v57);
                    *(v54) = v52;
                }
            }
            if (v45 == 0 || v50 == 0)
            {
                if (v19 == 0)
                {
                    break;
                }
                closedir();
            }
        }
    }
    v58 = v43;
    return v58;
}

int sub_40dfb0()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b440()
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

extern unsigned int g_418400;
extern unsigned int g_418410;
extern unsigned int g_61d408;

int sub_4145c0()
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
    v4 = (unsigned int)sub_40dfd0();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x418410, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x418400, 0x5);
    }
    error(g_61d408, *(v5), v6);
}

int sub_410be0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    char v4;  // dl
    unsigned int v5;  // edx
    char v6;  // dl

    v1 = sub_410ac0();
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

extern int512_t g_416f96;
extern int512_t g_416f9a;

int sub_40c450()
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
        v3 = sub_413e10();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_416f96 : 4288417);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_416f9a : 4288413);
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

extern unsigned long long g_61d918;

int sub_409750()
{
    g_61d918 = (unsigned int)sub_40b8c0();
    if (g_61d918 != 0)
    {
        return g_61d918;
    }
    sub_410330(); /* do not return */
}

int sub_4106c0()
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

int sub_40aa00()
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

extern char g_61da60;

int sub_40d9e0()
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
    v3 = (v2 == 0? &g_61da60 : v2);
    *((int *)(tmp_11? &g_61da60 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_61da60;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_61da60;
        abort(); /* do not return */
    }
}

int sub_40db80()
{
}

int sub_409600()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rax
    char v4;  // al

    if (*(v1) != *(v2))
    {
        return 0;
    }
    v3 = v2[1];
    v4 = v1[1] == v2[1];
    return rax<8>;
}

int sub_40e860()
{
    char v0;  // [bp-0x98]
    unsigned int v2;  // edi
    unsigned int v3;  // ebx
    unsigned int *v4;  // rax
    unsigned int v6;  // eax
    char v7;  // al

    v3 = __lxstat(0x1, v2, (unsigned int)&v0);
    v4 = __errno_location();
    if (v3 != 0 && *(v4) != 75)
    {
        v6 = 0;
        v7 = *(v4) != 2;
        return 0 - rax<4>;
    }
    if (v3 == 0 || *(v4) == 75)
    {
        *(v4) = 17;
        return -18446744069414584321;
    }
}

int sub_40a9a0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_40a940();
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

int sub_40f3a0()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2;  // r9
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // r10
    char v6;  // al
    unsigned long long v7;  // ecx
    unsigned long long v8;  // rax
    char v9;  // al
    unsigned long long v10;  // rax

    v2 = v1[1];
    if (v1[1] - 1073741822 <= 1 || v1[1] <= 999999999)
    {
        v3 = v1[3];
    }
    if (v1[1] - 1073741822 <= 1 && v1[3] <= 999999999 || v1[1] - 1073741822 <= 1 && v1[3] - 1073741822 <= 1 || v1[1] <= 999999999 && v1[3] <= 999999999 || v1[1] <= 999999999 && v1[3] - 1073741822 <= 1)
    {
        v7 = 0;
        v5 = 0;
        if (v1[1] - 1073741822 <= 1)
        {
            v1[0] = 0;
            v7 = 0;
            v5 = 1;
            v7 = (char)(v2 == 1073741822);
        }
        if (v1[3] - 1073741822 <= 1)
        {
            v4 = 0;
            v1[2] = 0;
            v5 = 1;
            v6 = v3 == 1073741822;
            v7 = (unsigned int)(v7 + rax<8>);
        }
        v8 = 0;
        v9 = v7 == 1;
        v10 = rax<8> + v5;
        return v10;
    }
    *(__errno_location()) = 22;
    return -18446744069414584321;
}

int sub_40a920()
{
    unsigned long long v1;  // rax

    v1 = sub_40a9a0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_410330(); /* do not return */
}

extern unsigned long long g_4182d7;

int sub_413710()
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
        v5 = &g_4182d7;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_413cb0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_40ab10()
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
    return sub_40eaf0();
}

extern unsigned int g_415245;
extern unsigned int g_4153b0;
extern unsigned int g_4153d8;
extern unsigned int g_415458;
extern unsigned int g_415490;
extern unsigned int g_4154e0;
extern unsigned int g_415688;
extern unsigned int g_415740;
extern unsigned int g_415950;
extern unsigned int g_415980;
extern unsigned int g_4159b8;
extern unsigned int g_415a98;
extern unsigned int g_415ba0;
extern unsigned int g_415be8;
extern unsigned int g_415c08;
extern unsigned long long stdout;

int sub_4036b0()
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
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x4153b0, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4153d8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415458, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415490, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4154e0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415688, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415740, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415950, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415980, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4159b8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415a98, 0x5), stdout);
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
            v33 = "mv";
            v34 = 3;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415245, 0x5));
            v42 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415245, 0x5));
            v41 = setlocale(0x5, 0x0);
            if (v41 != 0)
            {
                v43 = strncmp(v41, "en_", 0x3);
            }
            if (v43 == 0 || v41 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415be8, 0x5));
            }
        }
        if ((v31[1] == 0 || strncmp(v42, "en_", 0x3) != 0) && (v31[1] == 0 || v42 != 0) && (v43 != 0 || v31[1] != 0) && (v41 != 0 || v31[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415ba0, 0x5));
        }
        if (v31[1] != 0 || v43 != 0 && v41 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415be8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415c08, 0x5));
    }
    exit(v19); /* do not return */
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

int sub_40bde0()
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
    uint128_t|unsigned int|unsigned long v13;  // xmm1lq
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
    uint128_t|unsigned int|unsigned long v28;  // xmm1
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
        v7 = sub_40b120();
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
            sub_40b240();
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
                    v32 = sub_40bbe0();
                    if (v32 != 0)
                    {
                        v33 = sub_40b120();
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
    if (v2 == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && v7 == 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v32 != 0 && v33 != 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && ((char)(BinaryOp CmpF & 69) & 1) != 0)
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

extern char g_4145c0;

int sub_414620()
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
            v7 = (unsigned long long)(unsigned int)sub_415060();
            if (v7 != 0)
            {
                v12[0] = v7;
                v12[1] = &g_4145c0;
                v12 = (unsigned long long)(unsigned int)sub_4100e0();
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
            v6 = (unsigned long long)(unsigned int)sub_4100e0();
            v6[1] = &g_4145c0;
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
            if (v9 < 0 || v10 <= 2047 && v18 <= 2047 && v15 <= 2047)
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
            sub_414d90();
        }
    }
    else
    {
        v13 = (unsigned int)sub_4100e0();
        *((long long *)v13) = 0;
        *((char **)(v13 + 8)) = &g_4145c0;
        *((long long *)(v13 + 16)) = 0;
    }
    v49 = v13;
    return v49;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_413bf0()
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
            if (v2->field_0 != v5[1] || *(v5) != v2->field_8)
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
        if (v2->field_10 == 0 || (v3 + 1 & v3) == 0 && v2->field_0 != v5[1] && v2->field_10 + 1 != 0 || (v3 + 1 & v3) == 0 && v2->field_10 + 1 != 0 && *(v5) != v2->field_8)
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
    char padding_0[72];
    unsigned int field_48;
} struct_0;

int sub_4103c0()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_40b0d0;
extern int512_t g_40b0e0;
extern int512_t g_416f10;

int sub_40b8c0()
{
    unsigned long long v1;  // rbx
    struct_0 *v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    uint128_t|void v5;  // xmm1
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
            v4 = sub_40b240();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_416f10;
            v3 = sub_40b240();
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
        if ((v2 == 0 || v4 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2->field_10 != 0) && (v2 != 0 || v3 != 0) && (v2 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0) && (v2->field_10 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0))
        {
            v13 = (unsigned int)sub_40b030();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_40b0d0 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_40b0e0 : v17);
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

int sub_40dfd0()
{
}

int sub_410a80()
{
    unsigned long long v1;  // rax

    while (true)
    {
        v1 = sub_413d70();
        if (v1 == 0)
        {
            close(sub_413dc0());
        }
        else
        {
            return v1;
        }
    }
}

int sub_4137f0()
{
}

int sub_409e80()
{
    unsigned long v1;  // rdi
    unsigned long v3;  // rsi
    char *v4;  // r12
    unsigned int *v5;  // rax
    unsigned long long v6;  // rdi
    void *v7;  // rax
    char *v8;  // rbp
    unsigned long long v9;  // rbx

    v9 = (1025 <= v3? 1025 : v3 + 1);
    while (true)
    {
        v7 = malloc(v9);
        v8 = v7;
        if (v7 == 0)
        {
            break;
        }
        while (true)
        {
            v4 = (unsigned long long)readlink(v1, (unsigned int)v7, v9);
            if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))
            {
                v5 = __errno_location();
                if (*(v5) != 34)
                {
                    free(v8);
                }
            }
            if (*(v5) == 34 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>)))
            {
                if (v9 <= v4)
                {
                    free(v8);
                    if (v9 <= 4611686018427387903)
                    {
                        v9 *= 2;
                        v6 = v9;
                        v7 = malloc(v6);
                        v8 = v7;
                        if (v7 == 0)
                        {
                            break;
                        }
                    }
                    else if (v9 <= 9223372036854775806)
                    {
                        v9 = 9223372036854775807;
                    }
                    else
                    {
                        *(__errno_location()) = 12;
                    }
                }
                else
                {
                    *((char *)(v8 + v4)) = 0;
                }
            }
        }
        if (v9 <= 9223372036854775806 && v9 <= v4 && v9 > 4611686018427387903 && (*(v5) == 34 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
        {
            v7 = malloc(v9);
        }
        else if (v9 <= 4611686018427387903 || v9 > 9223372036854775806 || v9 > v4 || (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>) && *(v5) != 34)
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_40dc30()
{
}

int sub_40e8f0()
{
    __assert_fail(); /* do not return */
}

extern char g_61d930;

int sub_40a7d0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_61d930 = v1;
    return v2;
}

