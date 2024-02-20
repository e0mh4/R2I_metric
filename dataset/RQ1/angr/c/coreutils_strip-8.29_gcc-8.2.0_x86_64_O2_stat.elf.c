#include "decompile_angr.h"
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

int sub_405824()
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

int sub_403bcd()
{
}

int sub_408860()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_409760();
}

extern unsigned long long program_invocation_short_name;

int sub_4028cb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_40ced0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40cf50() != 0)
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

extern unsigned long long g_616e30;

int sub_410358()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_616e30;
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

extern int512_t g_617308;

int sub_410340()
{
}

int sub_402978() { crash_skku;
}
typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_4059c0()
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_4137e7;
extern char g_617620[2];

int sub_40c750()
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
    unsigned long v60;  // rdi
    char *v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_617620;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_4137e7 : (unsigned long long)nl_langinfo(0xe));
    if (g_617620 == 0)
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
            v9 = &g_4137e7;
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
                        v59 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v60 != 32 && (unsigned int)v60 != 35)
                        {
                            ungetc(v60, v10);
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
                                    v9 = &g_4137e7;
                                    v10 = (tmp_10 == 0? &g_4137e7 : tmp_10);
                                    free(NULL);
                                    sub_40ced0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1 && v37 != 0)
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v60 = *(v59);
                        }
                        if ((unsigned int)v60 == 35)
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
                            while (v62 != 0 && v61 != 10);
                        }
                        if ((unsigned int)v60 == 35 && v61 == -1 || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v28 <= 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_4137e7 : tmp_10);
                            sub_40ced0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && v61 == -1 || (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_4137e7;
                    }
                    else if (((unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && v61 == -1 || (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0 || v37 == 0 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_4137e7;
            free(v17);
        }
        *((char *[2])&g_617620[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_4137e7 : tmp_10), v9);
            if (v67 != 0 && (v9[1] != 0 || v66 != 42))
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
            if (v67 == 0 || v9[1] == 0 && v66 == 42)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_40cff0() { crash_skku;
}
int sub_409760()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409560();
}

int sub_409790()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_409560()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4097b0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_617498;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4072f0()
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
        g_617498 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_40b9b0()
{
    unsigned long long v0;  // [bp-0x880]
    unsigned long long v1;  // [bp-0x878]
    unsigned long|unsigned long long v2;  // [bp-0x870]
    unsigned long|unsigned long long v3;  // [bp-0x868]
    unsigned long long v4;  // [bp-0x860]
    unsigned long v5;  // [bp-0x858]
    unsigned long long v6;  // [bp-0x850]
    unsigned long|unsigned long long v7;  // [bp-0x840]
    unsigned long|char v8;  // [bp-0x838]
    char v9;  // [bp-0x830]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r15
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rbx
    char *v16;  // r13
    unsigned long long *v17;  // rax
    void *v18;  // rdx
    void *v19;  // rsi
    unsigned long long v20;  // rax
    unsigned long long v22;  // r9
    char *v23;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // r14
    unsigned long long v29;  // r9
    unsigned long long v30;  // rax
    unsigned long long v31;  // r9
    char *|unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    char *v34;  // rax
    unsigned long long v36;  // r11
    unsigned long long v37;  // rax
    char *v38;  // rax
    char *v39;  // rdx
    char *v40;  // rdi
    char *v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rsi
    unsigned long long v44;  // r11
    unsigned long long v45;  // r14
    unsigned long long v46;  // rbp
    unsigned long long v47;  // r10
    unsigned long long v48;  // rax

    v12 = v11;
    v46 = v13;
    v15 = v14;
    if (v14 > 2)
    {
        v16 = (unsigned long long)(unsigned int)sub_40b880();
        v3 = v7;
    }
    else
    {
        v7 = 1;
        v16 = v14 - 1;
        v3 = 1;
    }
    v17 = &v8;
    do
    {
        v8 = v14;
        v17 = &v9;
    }
    while (stack_base + -56 != v17);
    v19 = v18 + v3;
    if (v14 != 0)
    {
        v22 = v15 + (char *)v17;
        v17 = v18;
        do
        {
            v25 = *(v23);
            v26 = v18 + v15 - 1 - v23;
            v23 = &v23[1];
            *((unsigned long long *)&((char *)stack_base)[8 * v25 + -2104]) = v26;
        }
        while (v22 != v23);
        v0 = v15 - 1;
        v27 = memcmp(v17, v19, v16);
        if (v27 == 0)
        {
            v47 = v0;
            v44 = 0;
            v45 = 0;
            v6 = &v16[-1];
            v4 = v15 - v3;
            v5 = 1 + -0x1 * v16;
            while (true)
            {
                v2 = v47;
                v1 = v44;
                v0 = v45 + v15;
                if (sub_40aed0() != 0)
                {
                    break;
                }
                v36 = v1;
                v47 = v2;
                if (v0 == 0)
                {
                    break;
                }
                v37 = *((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]);
                if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) != 0)
                {
                    if (v37 < v3)
                    {
                        v37 = (v1 != 0? v4 : rax<8>);
                    }
                    v45 = 0 + v37;
                    v44 = 0;
                }
                else
                {
                    v38 = (v16 <= v36? v36 : v16);
                    if ((v16 <= v36? v36 : v16) < v2)
                    {
                        v39 = v12 + v45;
                        while (true)
                        {
                            if (*((char *)(v17 + v38)) == *((char *)(v39 + v38)))
                            {
                                v38 = &v38[1];
                                if (v38 == v2)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v44 = 0;
                                v45 = &v38[v5];
                            }
                        }
                        if (*((char *)(v17 + v38)) == *((char *)(v39 + v38)))
                        {
                            v40 = v6;
                            v41 = v6;
                        }
                        else if (*((char *)(v17 + v38)) != *((char *)(v39 + v38)))
                        {
                            v46 = v0;
                        }
                    }
                    if ((v16 <= v36? v36 : v16) >= v2 || v36 >= v16)
                    {
                        v40 = v6;
                        v41 = v6;
                        if (v36 < v16)
                        {
                            v42 = v12 + v45;
                            if (v40[v45 + v12] == *((char *)(v17 + v40)))
                            {
                                while (true)
                                {
                                    v43 = &v41[-1];
                                    if (v36 == v41 || *((char *)(v17 + v41 - 1)) != v41[v42 + -1])
                                    {
                                        break;
                                    }
                                    v41 = v43;
                                }
                            }
                        }
                        if (v40[v45 + v12] != *((char *)(v17 + v40)) || v36 >= v16)
                        {
                            v41 = v16;
                        }
                        if (1 <= v41)
                        {
                            v45 = 0 + v3;
                            v44 = v4;
                        }
                        else
                        {
                            v48 = v12 + v45;
                        }
                    }
                }
                if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) != 0 || (v16 <= v36? v36 : v16) < v2 && v36 >= v16 || 1 <= v41 && (v16 <= v36? v36 : v16) >= v2)
                {
                    v46 = v0;
                }
            }
            if (true)
            {
                v48 = 0;
            }
            else if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) == 0 && 1 > v41 && ((v16 <= v36? v36 : v16) >= v2 || v36 >= v16))
            {
                return v48;
            }
        }
    }
    else
    {
        v20 = memcmp(v17, v19, v16);
    }
    if (v14 == 0 && v20 != 0 || v27 != 0 && v14 != 0)
    {
        v28 = v15 - 1;
        v29 = 0;
        v3 = (v15 + -0x1 * v16 < v16? v16 : (char *)(v15 + -0x1 * v16)) + 1;
        v7 = (v15 + -0x1 * v16 < v16? v16 : (char *)(v15 + -0x1 * v16)) + 1;
        v2 = 1 + -0x1 * v16;
        while (true)
        {
            v1 = v29;
            v0 = v29 + v15;
            v30 = sub_40aed0();
            if (v0 == 0)
            {
                break;
            }
            v31 = v1;
            if (v30 != 0)
            {
                break;
            }
            v32 = *((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]);
            if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) == 0)
            {
                v33 = v12 + v31;
                if (v16 < v28)
                {
                    v32 = v16;
                    if (*((char *)(v16 + v16)) == *((char *)(v16 + v16)))
                    {
                        do
                        {
                            v32 = &v32[1];
                        }
                        while (*((char *)(v17 + v32)) == *((char *)(v32 + v32)) && v32 < v28);
                        if (true)
                        {
                            v34 = &v16[-1];
                        }
                        else if (v32 < v28)
                        {
                            v31 = 0 + v2;
                        }
                    }
                    if (*((char *)(v16 + v16)) != *((char *)(v16 + v16)) || &v16[-1] != -1)
                    {
                        v31 = 0 + v2;
                    }
                }
                if (*((char *)(v16 + v16)) == *((char *)(v16 + v16)) || v16 >= v28)
                {
                    if (&v16[-1] != -1 || v16 >= v28)
                    {
                        v34 = &v16[-1];
                        if (*((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)) || &v16[-1] == -1)
                        {
                            v32 = v33;
                        }
                    }
                    if (&v16[-1] != -1)
                    {
                        if (*((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)))
                        {
                            do
                            {
                                v34 = &v34[-1];
                            }
                            while (*((char *)(v17 + v34)) == *((char *)(v32 + v34)) && v34 != -1);
                            if (v34 != -1)
                            {
                                v29 = 0 + v3;
                            }
                            else
                            {
                                v32 = v33;
                            }
                        }
                        v29 = 0 + v3;
                    }
                }
            }
            if (v16 < v28 || &v16[-1] == -1)
            {
                v29 = v31 + v32;
            }
            if (&v16[-1] != -1)
            {
                v46 = v0;
            }
        }
        if (true)
        {
            v48 = 0;
        }
        else if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) == 0 && v30 == 0 && (*((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)) || &v16[-1] == -1) && (*((char *)(v16 + v16)) == *((char *)(v16 + v16)) || v16 >= v28) && (&v16[-1] != -1 || v16 >= v28))
        {
            return v48;
        }
    }
    v48 = 0;
    return v48;
}

int sub_408d80()
{
}

int sub_40d1b0()
{
    unsigned long|unsigned long long|char v0;  // [bp-0x30]
    unsigned long long *v2;  // rdx
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rsi
    unsigned long long *v7;  // rbx
    unsigned long long *v8;  // rsi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long *v13;  // rsi
    unsigned long long v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    unsigned long long v17;  // rdi

    v5 = v4;
    v7 = v6;
    v8 = v2;
    v9 = &v0;
    v0 = *(v2);
    v15 = v5();
    if (v15 == 0)
    {
        v16 = *(v7);
        v10 = 0;
        if (*(v7) != 0)
        {
            while (true)
            {
                v11 = (v16 >> 1) + (v10 >> 1);
                v12 = ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1);
                if (v16 != v12 && v10 != ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1))
                {
                    break;
                }
                v0 = v12;
                v13 = v2;
                v14 = &v0;
                v15 = r12<8>();
                if (v15 == 0)
                {
                    v16 = v12;
                    v12 = v10;
                }
                v10 = v12;
            }
            if (v15 == 0 && v10 != 0)
            {
                v0 = v10;
                v17 = &v0;
                return (long long)(stack_base)[-24]();
            }
        }
    }
    if (*(v7) == 0 || v10 == 0 || v15 != 0 || v15 != 0)
    {
        return v15;
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

int sub_40cf90()
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

int sub_40c6f0()
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

extern unsigned int g_4107c7;
extern unsigned int g_4107ea;
extern unsigned int g_41080b;
extern unsigned int g_411e70;
extern unsigned int g_411ee0;
extern unsigned int g_411f28;
extern char g_4137e7;
extern unsigned long long g_617310;
extern unsigned int g_61739c;
extern unsigned long long g_617470;
extern int512_t g_617478;
extern char g_617480;
extern char g_617481;
extern unsigned long long g_617638;

int main()
{
    unsigned long|unsigned long long v0;  // [bp-0xe0]
    unsigned long|unsigned long long v1;  // [bp-0xd8]
    unsigned long v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8]
    unsigned long v5;  // rdi
    unsigned int v6;  // r14d
    unsigned long v7;  // rsi
    char **v9;  // rax
    char *v10;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbp
    unsigned long long v24;  // rbx
    unsigned long|unsigned int v25;  // r13
    unsigned long long v26;  // rdx
    unsigned long long *v27;  // rbx
    unsigned long long v28;  // r15
    unsigned long v29;  // r14
    unsigned long long v30;  // rcx
    char *v31;  // rdi
    char *v32;  // rsi
    unsigned long long v33;  // cc_dep1
    unsigned long long v34;  // cc_dep2
    unsigned long v35;  // d
    unsigned int v36;  // eax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rsi
    unsigned long long v39;  // r14
    char v40;  // al
    unsigned long|unsigned int v41;  // rax
    unsigned long long v42;  // r13

    v6 = v5;
    v25 = v7;
    sub_4072f0();
    setlocale(0x6, 0x4137e7);
    bindtextdomain(0x4107c7, 0x411e70);
    textdomain(0x4107c7);
    v9 = localeconv();
    v10 = (*(*(v9)) == 0? "." : *(v9));
    v13 = 0;
    *((int *)&g_617478) = (*(*(v9)) == 0? "." : *(v9));
    g_617470 = strlen(v10);
    sub_410340();
    v0 = 0;
    while (true)
    {
        v12 = (unsigned int)sub_40add0();
        if ((unsigned int)v12 != -1)
        {
            if ((unsigned int)v7 == 99)
            {
                g_617480 = 0;
                g_617310 = "\n";
                v0 = g_617638;
            }
            else if (v12 > 99)
            {
                if ((unsigned int)v7 == 128)
                {
                    g_617480 = 1;
                    g_617310 = &g_4137e7;
                    v0 = g_617638;
                }
                if ((unsigned int)v7 == 102)
                {
                    v13 = 1;
                }
            }
            else
            {
                if ((unsigned int)v7 == -130)
                {
                    sub_404870(); /* do not return */
                }
                if ((unsigned int)v7 == 76)
                {
                    g_617481 = 1;
                }
                if ((unsigned int)v7 == -131)
                {
                    sub_409420();
                    exit(0x0); /* do not return */
                }
            }
        }
        else
        {
            if (!(g_61739c != v6))
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4107ea, 0x5));
            }
            else if (v0 != 0)
            {
                v1 = v0;
                if (sub_40bd00() == 0)
                {
                    break;
                }
                if (!(getenv("QUOTING_STYLE") != 0))
                {
                    sub_4088b0();
                    v1 = v0;
                }
                else if (sub_405190() >= 0)
                {
                    sub_4088b0();
                    v1 = v1;
                }
                else
                {
                    sub_4088b0();
                    v24 = (unsigned int)sub_408f10();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x411ee0, 0x5));
                    v1 = v0;
                }
            }
            else
            {
                v0 = (unsigned int)sub_403e80();
                v1 = (unsigned int)sub_403e80();
            }
        }
        if (g_61739c == v6 && (unsigned int)v12 == -1 || v12 <= 99 && (unsigned int)v7 != -131 && (unsigned int)v7 != -130 && (unsigned int)v7 != 99 && (unsigned int)v7 != 76 && (unsigned int)v12 != -1 || (unsigned int)v7 != 99 && (unsigned int)v7 != 102 && v12 > 99 && (unsigned int)v12 != -1 && (unsigned int)v7 != 128 && (unsigned int)v7 != 116)
        {
            sub_404870(); /* do not return */
        }
    }
    if (v6 > g_61739c)
    {
        v26 = g_61739c;
        v27 = v25 + v26 * 8;
        v28 = v25 + (!((unsigned int)v26) + v6 + v26) * 8 + 8;
        do
        {
            v29 = *(v27);
            v30 = 2;
            v31 = "-";
            v32 = *(v27);
            while (v30 != 0)
            {
                v30 -= 1;
                v33 = *(v32);
                v34 = *(v31);
                v31 = &v31[v35];
                v32 = &v32[v35];
                break;
            }
            v36 = (v33 > v34) - 0 - (v33 < v34);
            if (v13 == 0)
            {
                if (v36 != 0)
                {
                    if (g_617481 != 0)
                    {
                        v40 = __xstat(0x1, v29, (unsigned int)&v3) != 0;
                    }
                    else
                    {
                        v40 = __lxstat(0x1, v29, (unsigned int)&v3) != 0;
                    }
                    if (v40 != 0)
                    {
                        v2 = (unsigned int)sub_408cc0();
                    }
                }
                else
                {
                    v38 = __fxstat(0x1, 0x0, (unsigned int)&v3);
                    if ((unsigned int)v38 != 0)
                    {
                        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41080b, 0x5));
                        v41 = 0;
                    }
                }
                if ((v36 == 0 || v40 == 0) && ((unsigned int)v38 == 0 || v36 != 0))
                {
                    v41 = (unsigned int)(sub_4037b0() ^ 1);
                }
            }
            else if (v36 != 0)
            {
                v37 = statfs(v29, (unsigned int)&v3);
                if (v37 == 0)
                {
                    v41 = (unsigned int)(sub_4037b0() ^ 1);
                }
                else
                {
                    v2 = (unsigned int)sub_408cc0();
                }
            }
            else
            {
                v39 = (unsigned int)sub_408cc0();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x411f28, 0x5));
                v41 = 0;
            }
            if (v36 != 0 && (v13 == 0 || v37 != 0) && (v13 != 0 || v40 != 0))
            {
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v32, 0x5));
                v41 = 0;
            }
            v27 = &v27[1];
            v25 = 1 & v41;
        }
        while (v28 != v27);
    }
    else
    {
        v25 = 1;
    }
    v42 = v25 ^ 1;
    return v42;
}

int sub_408ac0()
{
}

extern int512_t g_41255e;
extern int512_t g_412562;

int sub_407390()
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
        v3 = sub_40c750();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_41255e : 4269417);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_412562 : 4269413);
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

extern int512_t g_6175a0;

int sub_408900()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6175a0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6175a0 : v1) + 4)) = v3;
    return v2;
}

int sub_4093a0()
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

extern unsigned int g_4132f2;
extern unsigned int g_41331d;
extern unsigned int g_413550;

int sub_4094e0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4132f2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41331d, 0x5));
    dcgettext(0x0, 0x413550, 0x5);
}

int sub_403bbd()
{
}

extern unsigned int g_41209d;
extern unsigned int g_617328;
extern char g_617488;
extern unsigned long long g_617490;

int sub_405530()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40c640();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_617488 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x41209d, 0x5);
            if (g_617490 != 0)
            {
                sub_408d60();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_617488 != 0)
    {
        v3 = sub_40c640();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_617488 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_617328);
        error(0x0, *(v2), "%");
    }
}

int sub_40aed0()
{
    unsigned long long v1;  // rdx
    void *|char v2;  // dil
    unsigned long|char v3;  // rsi
    unsigned long long v4;  // r9
    void *v5;  // rax
    void *v6;  // rcx
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
            if (v1 != 1)
            {
                v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
            }
            else if (true)
            {
                return 0;
            }
            else if ((v2 & 7) != 0 && v1 != 1)
            {
                v5 = v2;
            }
        }
        if ((v2 & 7) == 0 || v3 != *((char *)v2))
        {
            if ((v2 & 7) == 0 || v1 > 7)
            {
                v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
            }
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && ((v2 & 7) == 0 || v1 > 7) && v1 <= 7) && v3 != *((char *)v2))
    {
        v6 = v2 + 1;
        v7 = v2 + v1;
        while (true)
        {
            v5 = v6;
            if (v6 != v7)
            {
                v6 += 1;
                if ((char)v6[-1] == (char)v3)
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && ((v2 & 7) == 0 || v1 > 7) && v1 <= 7) && v3 == *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 && v1 > 7 || v3 == *((char *)v2) && v1 != 0 && (v2 & 7) != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && ((v2 & 7) == 0 || v1 > 7) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 && v1 > 7 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v1 <= 7 || v3 == *((char *)v2))
    {
        return v5;
    }
}

int sub_40c0f0()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long *v2;  // rdi
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    void *v5;  // rbx
    unsigned long long v7;  // rbx

    if (v2 != 0)
    {
        v0 = v4;
        while (true)
        {
            v5 = *(v2);
            v2 = v5;
            if (v5 == 0)
            {
                break;
            }
        }
        v7 = v0;
        return (unsigned long long)free(v2);
    }
    return v3;
}

int sub_4056b0()
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

int sub_405a60()
{
    unsigned long v1;  // rdx
    char *v2;  // rbx
    char *v4;  // rdi
    char *v5;  // rsi

    if (v1 != 0)
    {
        v2 = v1 - 1;
        do
        {
            *((char *)(v4 + v2)) = *((int *)(*((long long *)(unsigned long long)__ctype_tolower_loc()) + (unsigned long long)(char)*((char *)(v5 + v2)) * 4));
            v2 = &v2[-1];
        }
        while (v2 != -1);
    }
    return v4;
}

int sub_40ae10()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40ad50();
}

extern int512_t g_6175a0;

int sub_4088c0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6175a0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6175a0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_40c500()
{
    unsigned long long v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x54]
    unsigned int v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x4c]
    unsigned int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x38]
    unsigned int v9[9];  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    if (v11 != 0)
    {
        v12 = (unsigned int)sub_40c380();
        if (v12 != 0)
        {
            v0 = (unsigned int)sub_40d6b0();
            if (v0 == -1)
            {
                v13 = localtime_r((unsigned int)&v0, (unsigned int)&v1);
            }
            if ((v0 == -1 && v13 != 0 && (v9[4] < 0 || v9[4] == 0 == v7 == 0 || v7 < 0) && (v9[2] ^ v5) == 0 && (v9[2 + 1] ^ v6) == 0 && (v9[1 + 1] ^ v4) == 0 && (v9[1] ^ v3) == 0 && (v9[1] ^ v2) == 0 && (v9[0] ^ *((int *)&v1)) == 0 || v0 != -1) && sub_40c200() == 0)
            {
                v0 = -1;
            }
            if (v12 != 1)
            {
                v15 = sub_40c120();
            }
        }
        if (v12 == 0 || v15 == 0 && v12 != 1)
        {
            v16 = -1;
        }
        if (v12 == 1 || v12 != 0 && v15 != 0)
        {
            v16 = v0;
        }
        return v16;
    }
    return sub_40c620();
}

int sub_40d6d0()
{
    unsigned long long v0;  // [bp-0x10]
    void *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long *v4;  // rdi

    v2 = sub_40d880();
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

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    char field_28;
} struct_0;

int sub_40b070()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    struct_0 *v3;  // rdi
    struct_0 *v4;  // rbx

    v0 = v2;
    v4 = v3;
    free(v3->field_0);
    free(v4->field_8);
    free(v4->field_10);
    if ((v4->field_28 & 4) != 0)
    {
        free(v4->field_18);
    }
}

int sub_403b8d()
{
}

int sub_40adf0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40a780();
}

int sub_408c50()
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
    return sub_4086c0();
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

extern unsigned int g_4106c6;

int sub_40c0a0()
{
    struct_0 *v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (v1->field_8 == 0)
    {
        v2 = unsetenv(0x4106c6);
    }
    else
    {
        v2 = setenv(0x4106c6, (unsigned int)v1 + 9, 0x1);
    }
    v3 = 0;
    if (v2 == 0)
    {
        tzset();
        v3 = 1;
    }
    return v3;
}

int sub_405450()
{
    unsigned long long v1;  // rax

    v1 = sub_405190();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_4052b0();
        sub_405330();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

int sub_4059b0()
{
}

extern unsigned int g_41207b;
extern unsigned long long stderr[7];

int sub_405330()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41207b, 0x5), stderr);
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
                    sub_408f10();
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
                sub_408f10();
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

typedef struct struct_1 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char padding_4[36];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_1;

extern unsigned int g_4106b0;
extern unsigned int g_410f88;
extern unsigned int g_410f90;
extern unsigned int g_410fa0;
extern unsigned int g_410fc8;
extern unsigned long long g_617310;
extern char g_617480;
extern struct_1 *stdout;

int sub_4037b0()
{
    char v0;  // [bp-0x55]
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    struct_1 *v5;  // rdi
    unsigned long long|struct_1 * v6;  // r14
    unsigned long long v7;  // rdx
    unsigned long v8;  // rcx
    unsigned long long v9;  // r8
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    char *v14;  // rax
    unsigned long long v15;  // rbp
    struct_1 *v16;  // rbp
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r15
    unsigned long long *v19;  // rax
    unsigned long long v20;  // r10
    unsigned long long v21;  // rax
    unsigned long long v24;  // r13
    unsigned long long v25;  // r12
    char *v27;  // rax
    char *v28;  // rax
    unsigned long long v29;  // rax
    struct_1 *v30;  // rbp
    unsigned long long v31;  // rdx
    unsigned long long v32;  // r9
    unsigned long long v33;  // rcx
    unsigned long long v35;  // r8
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rax
    char *v38;  // rax
    char *v39;  // rax
    unsigned long long v40;  // rdx
    char *v41;  // rdx
    struct_1 *v42;  // rsi
    unsigned long long v43;  // rax
    unsigned long long v45;  // rbx

    v6 = v5;
    v1 = v7;
    v2 = v8;
    v3 = v9;
    strlen(v5);
    v0 = 0;
    if (v5->field_0 != 0)
    {
        while (true)
        {
            v12 = &v6->field_1;
            if (v42 == 37)
            {
                v13 = strspn((unsigned int)v6, 0x410f88);
                v15 = &(struct struct_1 *)&(&v6->field_0)[v13]->field_1;
                v16 = v15 + strspn((unsigned int)(struct struct_1 *)&(struct struct_1 *)&(&v6->field_0)[v13]->field_1, 0x410f90);
                v18 = v16->field_0;
                if (v16->field_0 == 46)
                {
                    v16 = &(struct struct_1 *)&(&v16->field_0)[(unsigned long long)strspn((unsigned int)v16 + 1, 0x410f90)]->field_1;
                    v18 = v16->field_0;
                }
                v24 = v16 - v6 + 1;
                v25 = v16 - v6;
                memcpy(v5, v6, v42);
                if (v18 == 0)
                {
                    v16 = (char *)&v16[-1].field_30 + 7;
                }
                else if (v18 != 37)
                {
                    v31 = v18;
                    v32 = v3;
                    v33 = v42;
                    v42 = v24;
                    v35 = v1;
                    v5 = (unsigned long long)(unsigned int)sub_409560();
                    v6 = &v16->field_1;
                    v0 |= (char)(long long)(stack_base)[-72]();
                }
                if (v18 == 37 || v18 == 0)
                {
                    if (v25 == 0)
                    {
                        v5 = stdout;
                        v6 = &v16->field_1;
                        v38 = stdout->field_28;
                        if (stdout->field_28 < stdout->field_30)
                        {
                            stdout->field_28 = stdout->field_28 + 1;
                            *(v38) = 37;
                        }
                        else
                        {
                            __overflow();
                        }
                    }
                    else
                    {
                        *((unsigned long long *)(v5 + v42)) = v18;
                        (&v5->field_2)[v25] = 0;
                        v45 = (unsigned int)sub_408f10();
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4106b0, 0x5));
                    }
                }
            }
            else if (v42 != 92)
            {
                v5 = stdout;
                v14 = stdout->field_28;
                if (stdout->field_28 < stdout->field_30)
                {
                    v16 = v6;
                    v6 = v12;
                    stdout->field_28 = stdout->field_28 + 1;
                    *((struct_1 **)&v14) = v42;
                }
                else
                {
                    __overflow();
                    v16 = v6;
                }
            }
            if (v42 == 92)
            {
                if (g_617480 != 0)
                {
                    v17 = v6->field_1;
                    if (((unsigned long long)v6->field_1 - 48 & 255) > 7)
                    {
                        if (v17 == 120)
                        {
                            if ((*((char *)(*((long long *)(unsigned long long)v6->field_2) + ((unsigned long long)v6->field_2 << 1) + 1)) & 16) != 0)
                            {
                                if (((unsigned long long)v5->field_2 - 97 & 255) > 5)
                                {
                                    v29 = (unsigned int)((char)((unsigned int)v5->field_2 - 65) > 5? (unsigned int)v5->field_2 : (unsigned int)v5->field_0);
                                }
                                else
                                {
                                    v29 = (unsigned long long)v5->field_2 - 87;
                                }
                                v16 = &v6->field_2;
                                if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)v6->field_3 << 1) + 1)) & 16) != 0)
                                {
                                    v36 = v5->field_3;
                                    v16 = &v6->field_3;
                                    v37 = v29 * 16;
                                    if ((char)((unsigned long long)v5->field_3 - 97) <= 5)
                                    {
                                        v40 = (unsigned int)v5->field_3 - 87;
                                    }
                                    else
                                    {
                                        v40 = (unsigned int)((char)((unsigned int)v5->field_3 - 65) <= 5? (unsigned int)(v36 - 55) : (unsigned int)v36 - 48);
                                    }
                                    v29 = v37 + v40;
                                }
                                v5 = stdout;
                                v6 = &v16->field_1;
                                v41 = stdout->field_28;
                                if (stdout->field_28 < stdout->field_30)
                                {
                                    stdout->field_28 = stdout->field_28 + 1;
                                    *((unsigned long long *)&v41) = v29;
                                }
                                else
                                {
                                    __overflow();
                                }
                            }
                        }
                        else if (v17 != 0)
                        {
                            if ((v17 - 34 & 255) <= 84)
                            {
                                v43 = v17 - 34;
                                /* goto *((long long *)(v43 * 8 + 4262288)); */
                            }
                        }
                        if (v17 == 0)
                        {
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x410fa0, 0x5));
                        }
                        if ((v17 == 120 || v17 != 0) && (v17 == 120 || (v17 - 34 & 255) > 84) && ((*((char *)(*((long long *)(unsigned long long)v6->field_2) + ((unsigned long long)v6->field_2 << 1) + 1)) & 16) == 0 || v17 != 120))
                        {
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x410fc8, 0x5));
                            v5 = stdout;
                            v6 = &v6->field_2;
                            v39 = stdout->field_28;
                            if (stdout->field_28 < stdout->field_30)
                            {
                                stdout->field_28 = stdout->field_28 + 1;
                                *((unsigned long long *)&v39) = v17;
                                v16 = v6;
                            }
                            else
                            {
                                v16 = v6;
                                __overflow();
                            }
                        }
                    }
                    else
                    {
                        v19 = (unsigned long long)v6->field_2;
                        v20 = (unsigned int)v17 - 48;
                        if (((unsigned long long)v6->field_2 - 48 & 255) <= 7)
                        {
                            v20 = &v19[v20 + -6];
                            v21 = v6->field_3;
                            if (((unsigned long long)v6->field_3 - 48 & 255) <= 7)
                            {
                                v20 = v21 + v20 * 8 - 48;
                                v6 = &v6->padding_4;
                            }
                            else
                            {
                                v6 = &v6->field_3;
                            }
                        }
                        else
                        {
                            v6 = &v6->field_2;
                        }
                        v5 = stdout;
                        v27 = stdout->field_28;
                        if (stdout->field_28 < stdout->field_30)
                        {
                            stdout->field_28 = stdout->field_28 + 1;
                            *((unsigned long long *)&v27) = v20;
                        }
                        else
                        {
                            __overflow();
                        }
                        v16 = v6 - 1;
                    }
                }
                if (g_617480 == 0 || v17 == 0 && ((unsigned long long)v6->field_1 - 48 & 255) > 7)
                {
                    v5 = stdout;
                    v28 = stdout->field_28;
                    if (stdout->field_28 < stdout->field_30)
                    {
                        v30 = v6;
                        stdout->field_28 = stdout->field_28 + 1;
                        *(v28) = 92;
                        v42 = (unsigned long long)v30->field_1;
                        if (v30->field_1 == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v16 = v6;
                        __overflow();
                    }
                }
            }
            if (...)
            {
                v42 = (unsigned long long)v16->field_1;
                if (v16->field_1 == 0)
                {
                    break;
                }
            }
        }
    }
    free(v5);
    fputs_unlocked(g_617310, stdout);
    return (unsigned long long)v0;
}

int sub_405b00() { crash_skku;
}
typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_411fe4;
extern unsigned int g_412556;

int sub_409bb0()
{
    unsigned long long|unsigned int v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    unsigned long long|void * v2;  // [bp-0x110]
    void *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xe9]
    unsigned long|char * v6;  // [bp-0xe8]
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
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r13
    struct_0 *v26;  // rax
    unsigned long long v27;  // rdx
    void *v28;  // rbx
    unsigned long long v29;  // rax
    unsigned long long v30;  // r13
    unsigned long v31;  // r14
    unsigned int v32;  // rax
    unsigned long long v34;  // r8
    unsigned long v39;  // rbx
    unsigned long v40;  // rdx
    unsigned long long|unsigned int v42;  // rbx
    unsigned int *v43;  // r12

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
    if (v14 == 0 && v15 == 0 || v3 == 0 && v15 != 0)
    {
        v2 = malloc(v4);
    }
    if (v14 == 0 && v2 != 0 || v3 != 0 && v15 != 0 || v2 != 0 && v15 != 0)
    {
        v16 = v2 + v4;
        *((char *)(v2 + v4 - 1)) = 0;
        v17 = __lxstat(0x1, 0x411fe4, (unsigned int)&v10);
        if (v17 >= 0)
        {
            v18 = *((long long *)&v10);
            v19 = v11;
            v0 = *((long long *)&v10);
            v20 = __lxstat(0x1, 0x412556, (unsigned int)&v10);
            if (v20 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = *((long long *)&v10);
                v5 = *((long long *)&v10) != *((long long *)&v10) | v11 != v11;
                if (v18 != *((long long *)&v10) || v19 != v11)
                {
                    v24 = 0;
                    v21 = -18446744069414584420;
                    v43 = __errno_location();
                    while (true)
                    {
                        v21 = openat(v21);
                        if (v21 >= 0)
                        {
                            v22 = __fxstat(0x1, v21, (unsigned int)&v10);
                            if (v22 == 0)
                            {
                                if (v24 != 0)
                                {
                                    v23 = closedir();
                                }
                                if (v24 == 0 || v23 == 0)
                                {
                                    v1 = *((long long *)&v10);
                                    v9 = v11;
                                    v24 = fdopendir(v21);
                                    if (v24 != 0)
                                    {
                                        v25 = v5;
                                        while (true)
                                        {
                                            *(v43) = 0;
                                            v26 = readdir();
                                            if (v26 == 0)
                                            {
                                                v42 = *(v43);
                                                if (*(v43) == 0 && v25 != 0)
                                                {
                                                    rewinddir(v24);
                                                    v26 = readdir();
                                                    if (v26 != 0)
                                                    {
                                                        v25 = 0;
                                                    }
                                                    else
                                                    {
                                                        v42 = *(v43);
                                                    }
                                                }
                                                if (v26 == 0 || v25 == 0 || *(v43) != 0)
                                                {
                                                    if ((unsigned int)v42 != 0)
                                                    {
                                                        break;
                                                    }
                                                    *(v43) = 2;
                                                    v42 = 2;
                                                }
                                            }
                                            if (v26 != 0 || *(v43) == 0 && v26 != 0 && v25 != 0)
                                            {
                                                if (v25 != 0 && (v26->field_13 == 46 || v26 != 0) && (v26 != 0 || v26->field_14 != 0) && (v26 != 0 || *((short *)&v26->field_14) != 46) && (v26->field_14 != 0 || v26->field_13 != 46) && (*((short *)&v26->field_14) != 46 || v26->field_13 != 46))
                                                {
                                                    v25 = v27;
                                                }
                                                if ((v26 == 0 || v26->field_14 != 0 || v26->field_13 != 46) && (v26 == 0 || *((short *)&v26->field_14) != 46 || v26->field_13 != 46) && (v26 != 0 || v26->field_14 != 0 || v26->field_13 != 46) && (v26 != 0 || *((short *)&v26->field_14) != 46 || v26->field_13 != 46))
                                                {
                                                    v28 = &v26->field_13;
                                                    v29 = __fxstatat(0x1, v21, (unsigned int)v26 + 19, (unsigned int)&v10, 0x100);
                                                    v30 = &v6[-1 * v2];
                                                    v31 = strlen(v28);
                                                    if (v30 <= v31)
                                                    {
                                                        if (v15 == 0)
                                                        {
                                                            v32 = v4 + (v4 <= v31? v31 : v4);
                                                            *((int *)&v6) = (v4 <= v31? v31 : v4);
                                                            *((unsigned long long *)&v0) = v4 + (v4 <= v31? v31 : v4);
                                                            if (!((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=stack_base-256, size=8, endness=Iend_LE), (((Load(addr=stack_base-256, size=8, endness=Iend_LE) <= r14<8>)) ? (r14<8>) : (Load(addr=stack_base-256, size=8, endness=Iend_LE))), cc_ndep<8>)) && v2 != 0)
                                                            {
                                                                v2 = realloc(v2, v32);
                                                                v6 = memcpy(v2 + v6 + v30, v2 + v30, v4 - v30);
                                                                v4 = *((long long *)&v0);
                                                            }
                                                            if ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=stack_base-256, size=8, endness=Iend_LE), (((Load(addr=stack_base-256, size=8, endness=Iend_LE) <= r14<8>)) ? (r14<8>) : (Load(addr=stack_base-256, size=8, endness=Iend_LE))), cc_ndep<8>) || v2 == 0)
                                                            {
                                                                *(v43) = 12;
                                                                v42 = 12;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v43) = 34;
                                                            v42 = 34;
                                                        }
                                                    }
                                                    if (v30 > v31 || v15 == 0 && !((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, Load(addr=stack_base-256, size=8, endness=Iend_LE), (((Load(addr=stack_base-256, size=8, endness=Iend_LE) <= r14<8>)) ? (r14<8>) : (Load(addr=stack_base-256, size=8, endness=Iend_LE))), cc_ndep<8>)) && v2 != 0)
                                                    {
                                                        v34 = memcpy(&v6[-1 * v31], v28, v31);
                                                        v6 = v34 - 1;
                                                        *((char *)(v34 - 1)) = 47;
                                                        v0 = v1;
                                                        if (v8 != v9 || v7 != v1)
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
                                            v42 = *(v43);
                                        }
                                        else if (...)
                                        {
                                            v21 = openat(v21);
                                        }
                                        else if (...)
                                        {
                                            closedir();
                                        }
                                    }
                                }
                                if ((v24 == 0 || v24 != 0) && (v24 == 0 || v23 != 0))
                                {
                                    v42 = *(v43);
                                }
                            }
                            else
                            {
                                v42 = *(v43);
                                if (v24 != 0)
                                {
                                    closedir();
                                }
                            }
                            if ((v24 == 0 || v24 != 0 || v22 != 0) && (v24 == 0 || v23 != 0 || v22 != 0))
                            {
                                close(v21);
                            }
                        }
                        else
                        {
                            v42 = *(v43);
                        }
                        if ((v21 < 0 || v22 == 0) && (v21 < 0 || v24 != 0) && (v24 == 0 || v23 == 0 || v21 < 0) && (v24 != 0 || v21 >= 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if (v24 != 0)
                    {
                        v42 = *(v43);
                    }
                    else if (v21 < 0 || v24 == 0 || v3 != 0 || v22 != 0 || v24 != 0 && v23 != 0)
                    {
                        free(v2);
                    }
                    else if (v24 == 0)
                    {
                        if (v21 < 0 || v24 == 0 || v3 != 0 || v22 != 0 || v24 != 0 && v23 != 0)
                        {
                            *((unsigned long long *)&v43) = v42;
                            v2 = 0;
                        }
                    }
                }
                v6[-1] = 47;
                v6 = &v6[-1];
                v39 = v16 + -0x1 * v6;
                v40 = v39;
                memmove(v2, v6, v40);
                if (v15 == 0)
                {
                    v3 = realloc(v2, v40);
                }
                *((int *)&v2) = (v3 == 0? v2 : v3);
            }
        }
        if (v17 < 0 || v20 < 0)
        {
            v43 = __errno_location();
        }
        if (v17 < 0 || v20 < 0 || v18 != *((long long *)&v10) || v19 != v11)
        {
            v42 = *(v43);
            free(v2);
            *((unsigned long long *)&v43) = v42;
            v2 = 0;
        }
    }
    return v2;
}

int sub_4097f0()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_4097b0(); /* do not return */
        }
    }
    if (v2 != 0 || *(v3) != 12)
    {
        v2 = (unsigned int)sub_409bb0();
        return v5;
    }
}

int sub_40b880()
{
    unsigned long long v1;  // r11
    unsigned long long v2;  // r8
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdi
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // rcx
    unsigned long long v7;  // r9
    unsigned long long v8;  // rax
    unsigned long long *v9;  // rdx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long long v13;  // r10
    unsigned long long v14;  // rcx
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // r10
    unsigned long long v17;  // rax

    v1 = 1;
    v2 = 1;
    v7 = 0;
    v8 = -1;
    while (true)
    {
        v6 = v2 + v7;
        if (v2 + v7 >= v3)
        {
            break;
        }
        while (true)
        {
            v5 = (char)*((char *)(v4 + v6));
            if ((char)*((char *)(v4 + v6)) < (unsigned long long)(char)*((char *)(v4 + -1 + 1)))
            {
                v7 = v6;
                v6 = 1 + v6;
                v1 = v7 - -1;
                if (v6 >= v3)
                {
                    break;
                }
            }
            else if (v5 != (char)*((char *)(v4 + -1 + 1)))
            {
                v8 = v7;
                v1 = 1;
                v7 += 1;
                v2 = 1;
            }
            else if (v1 != 1)
            {
                v2 = 2;
            }
            else
            {
                v7 = v6;
                v2 = 1;
            }
        }
        if ((char)*((char *)(v4 + v6)) < (unsigned long long)(char)*((char *)(v4 + -1 + 1)))
        {
            *(v9) = v1;
            v10 = 1;
            v11 = 1;
            v12 = 0;
            v13 = -1;
        }
    }
    *(v9) = v1;
    v10 = 1;
    v11 = 1;
    v12 = 0;
    v13 = -1;
    while (true)
    {
        v14 = v11 + v12;
        if (v3 <= v11 + v12)
        {
            break;
        }
        while (true)
        {
            v15 = (char)*((char *)(v4 + v14));
            if ((char)*((char *)(v4 + v14)) > (unsigned long long)(char)*((char *)(v4 + v13 + v11)))
            {
                v12 = v14;
                v11 = 1;
                v14 = 1 + v14;
                v10 = v12 - -1;
                if (v3 <= v14)
                {
                    break;
                }
            }
            else if (v15 != (char)*((char *)(v4 + -1 + 1)))
            {
                v13 = v12;
                v10 = 1;
                v12 += 1;
                v11 = 1;
            }
            else if (v10 != 1)
            {
                v11 = 2;
            }
            else
            {
                v12 = v14;
                v11 = 1;
            }
        }
        if ((char)*((char *)(v4 + v14)) > (unsigned long long)(char)*((char *)(v4 + v13 + v11)))
        {
            v16 = v13 + 1;
            v17 = v8 + 1;
        }
    }
    v16 = v13 + 1;
    v17 = v8 + 1;
    *(v9) = v10;
    v17 = v16;
    return v17;
}

int sub_402af0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_402980();
}

int sub_408e70()
{
}

typedef struct struct_2 {
    char padding_0[28];
    unsigned int field_1c;
} struct_2;

typedef struct struct_1 {
    char padding_0[32];
    unsigned int field_20;
} struct_1;

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

extern unsigned int g_410709;
extern unsigned int g_41072e;
extern unsigned int g_4111f0;
extern char g_617442;
extern char g_617481;
extern unsigned long long stdout[7];

int sub_4042e0()
{
    unsigned long v0;  // [bp-0x38]
    struct_0 *v1;  // [bp-0x30]
    unsigned int v3;  // [bp+0x100008]
    unsigned int v4;  // edx
    unsigned long long v5;  // rdx
    void *v6;  // rdi
    unsigned short *v7;  // rbx
    char *v8;  // rsi
    struct_2 *v10;  // r9
    unsigned long long v11;  // rax
    struct_1 *v12;  // r9
    unsigned long long v13;  // rax
    char *v15;  // rax
    unsigned long v17;  // r8
    unsigned long v35;  // r9
    unsigned long v36;  // r8
    struct_0 *v38;  // r9
    unsigned long v44;  // r8
    unsigned long long v46;  // r13
    unsigned long long|void * v48;  // r13
    unsigned long long v52;  // r14
    unsigned long long v56;  // rbp
    unsigned long long v57;  // rdx
    unsigned long long v58;  // r14

    switch ((unsigned int)v5)
    {
    case 0:
        sub_4059b0();
        g_617442 = 0;
        sub_402a70();
        break;
    case 1:
        sub_402ab0();
        break;
    case 2:
        v0 = v17;
        v3 = 95;
        v46 = (unsigned int)sub_408cc0();
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4111f0, 0x5));
        *((short *)(v7 + v8)) = 115;
        __printf_chk(0x1, v7);
        break;
    case 3:
        sub_402a30();
        break;
    case 5:
        sub_405740();
    case 6:
        v13 = getgrgid(v12->field_20);
    case 13:
        v1 = v35;
        v0 = v36;
        sub_4088a0();
        sub_408cc0();
        sub_402a70();
        if (((unsigned short)v1->field_18 & 0xf000) == 0xa000)
        {
            v48 = (unsigned long long)(unsigned int)sub_405090();
            if (v48 != 0)
            {
                __printf_chk(0x1, " -> ");
                sub_4088a0();
                v57 = (unsigned int)sub_408cc0();
            }
            else
            {
                v56 = (unsigned int)sub_408cc0();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x410709, 0x5));
                break;
            }
        }
    case 19:
        sub_402a30();
        break;
    case 20:
        v11 = getpwuid(v10->field_1c);
    case 22:
        sub_403f90();
        break;
    case 23:
        sub_403f90();
        break;
    case 24:
        sub_403f90();
        break;
    case 25:
        sub_403f90();
        break;
    case 32:
        sub_402980();
        __printf_chk(0x1, v6);
        break;
    case 33:
        sub_402ab0();
        break;
    case 35:
        sub_402ab0();
        break;
    case 37:
        sub_402a30();
        break;
    case 38:
        sub_402ab0();
        break;
    case 39:
        sub_402ab0();
        break;
    case 40:
        sub_402ab0();
        break;
    case 44:
        if (g_617481 == 0 && ((unsigned short)v38->field_18 & 0xf000) == 0xa000)
        {
            v48 = (unsigned int)sub_404d10();
            if (v48 != 0)
            {
                v58 = (unsigned int)sub_403d70();
            }
        }
        if (g_617481 != 0 || ((unsigned short)v38->field_18 & 0xf000) != 0xa000)
        {
            v1 = v38;
            v0 = v44;
            v48 = canonicalize_file_name(v44);
            if (v48 != 0)
            {
                v1 = v1;
                v0 = v0;
                v48 = 0;
                free(v6);
            }
            else
            {
                v52 = (unsigned int)sub_408cc0();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41072e, 0x5));
            }
        }
        if ((unsigned long long)(unsigned int)sub_403d70() != 0)
        {
            sub_402a70();
            free(v48);
            break;
        }
    case 45:
        sub_402a70();
        break;
    case 46:
        sub_402ab0();
        break;
    case 50:
        sub_402af0();
        break;
    case 52:
        sub_402ab0();
        break;
    case 54:
        sub_402a70();
        break;
    case 55:
        sub_403ca0();
        sub_402a70();
    default:
        v15 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v15) = 63;
        }
        else
        {
            __overflow();
        }
    }
    if ((unsigned int)((unsigned long long)v4 - 65) <= 57)
    {
        v7 = v6;
    }
    return stack_base + 0;
}

extern unsigned long long g_4137e7;

int sub_40ae50()
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
        v5 = &g_4137e7;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40c6f0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_408cd0()
{
}

extern unsigned int g_412043;
extern unsigned int g_41205e;

int sub_4052b0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x412043, 0x5);
    }
    dcgettext(0x0, 0x41205e, 0x5);
    sub_408ef0();
    sub_408be0();
}

int sub_4098c0()
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

extern unsigned long long *g_617378;
extern unsigned long long g_617380;
extern unsigned long long g_617388;
extern unsigned int g_617390;
extern unsigned long long g_6174a0;

int sub_408ad0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_617390;
    if (g_617390 > 1)
    {
        v2 = &g_617378[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_617378[2 * (unsigned long long)(g_617390 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_617378[1] != 6386848)
    {
        v1 = free(g_617378[1]);
        g_617380 = 0x100;
        g_617388 = &g_6174a0;
    }
    if (g_617378 != 6386560)
    {
        v1 = free(g_617378);
        g_617378 = &g_617380;
    }
    g_617390 = 1;
    return v1;
}

int sub_40c640()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40ced0();
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
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_40cd10()
{
    void|unsigned int v0;  // [bp-0x50]
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
            v11 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rbx<8>, Call (target: 0x401f30<64>, prototype: (char*) -> unsigned long (64 bits), args: [Load(addr=rdx<8>, size=8, endness=Iend_LE)]), cc_ndep<8>)? -1 : rbx<8> + strlen(*((long long *)rdx<8>)));
            v12 -= 1;
        }
        while (v12 != 1);
        if (v11 <= 2147483647)
        {
            v13 = (unsigned long long)(unsigned int)sub_409560();
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
        v13 = (unsigned long long)(unsigned int)sub_409560();
    }
    if (v5 == 0 || v11 <= 2147483647)
    {
        *(v13) = 0;
    }
    return stack_base + 0;
}

extern unsigned int g_4106e1;
extern unsigned int g_6173e0;
extern unsigned long long g_617420;

int sub_403ca0()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v3;  // rdi
    unsigned long v4;  // rsi

    v0 = v3;
    v1 = v4;
    if (g_617420 == 0)
    {
        getenv("TZ");
        g_617420 = (unsigned int)sub_40c170();
    }
    if (sub_40c450() != 0)
    {
        sub_4072d0();
        return &g_6173e0;
    }
    sub_4059c0();
    __sprintf_chk(0x6173e0, 0x1, 0x3d, 0x4106e1);
    return &g_6173e0;
}

extern int512_t g_6175a0;

int sub_4088b0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6175a0 : v1)) = v2;
    return &g_6175a0;
}

int sub_40add0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40ad50();
}

int sub_405090()
{
    unsigned int v1;  // edi
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

extern uint128_t g_6175a0;
extern uint128_t g_6175b0;
extern uint128_t g_6175c0;
extern unsigned long long g_6175d0;

int sub_408cdf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6175d0;
    *((uint128_t *)&v0) = g_6175a0;
    *((uint128_t *)&v1) = g_6175b0;
    *((uint128_t *)&v2) = g_6175c0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4086c0();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4093c0()
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
    return sub_408fc0();
}

extern unsigned int g_41362f;
extern unsigned int g_617328;

int sub_4097b0()
{
    dcgettext(0x0, 0x41362f, 0x5);
    error(g_617328, 0x0, "%");
}

int sub_40c620() { crash_skku;
}
int sub_402ab0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_402980();
}

int sub_4097dc()
{
    abort(); /* do not return */
}

int sub_408ea0()
{
}

int sub_408f10()
{
}

int sub_40cf50()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40cf90();
    }
}

int sub_409580()
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
        sub_4097b0(); /* do not return */
    }
}

int sub_40f5c0() { crash_skku;
}
int sub_409630() { crash_skku;
}
extern uint128_t g_6175a0;
extern uint128_t g_6175b0;
extern uint128_t g_6175c0;
extern unsigned long long g_6175d0;

int sub_408e00()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6175a0;
    *((uint128_t *)&v1) = g_6175b0;
    *((uint128_t *)&v2) = g_6175c0;
    v4 = g_6175d0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4086c0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[48];
    struct struct_1 *field_30;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    char field_8;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    char field_8;
} struct_3;

extern char g_4137e7;

int sub_40c200()
{
    struct_0 *v1;  // rsi
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14
    unsigned long long v5;  // rax
    char *v6;  // rbx
    struct_2 *v7;  // rbp
    unsigned long long v8;  // rax
    char *v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    struct_3 *v13;  // rax

    if (v1->field_30 != 0)
    {
        v7 = v2;
        if (v1 <= v1->field_30)
        {
            v12 = 1;
        }
        if (v1 > v1->field_30 || v1->field_30 >= &v1[1])
        {
            v6 = v2 + 9;
            if (*(v1->field_30) != 0)
            {
                while (true)
                {
                    v3 = strcmp(v6, v1->field_30);
                    if (v3 == 0)
                    {
                        break;
                    }
                    while (true)
                    {
                        if (*(v6) == 0)
                        {
                            v4 = &v7[1];
                            if (&v7[1] != v6)
                            {
                                v9 = strlen(v1->field_30) + 1;
                                v10 = &v6[-1 * v4];
                                if (!(&v6[-1 * v4]) < v9)
                                {
                                    *(__errno_location()) = 12;
                                    v12 = 0;
                                }
                            }
                            else if (v7->field_8 == 0)
                            {
                                v9 = strlen(v1->field_30) + 1;
                                v10 = 0;
                            }
                            if ((&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6))
                            {
                                v11 = &v9[v10];
                                if (v11 <= 118)
                                {
                                    memcpy(v6, v1->field_30, v9);
                                    *((char *)(v6 + v9)) = 0;
                                }
                                else
                                {
                                    v13 = sub_40c170();
                                    v7->field_0 = v13;
                                    if (v13 != 0)
                                    {
                                        v13->field_8 = 0;
                                        v6 = &v13[1];
                                    }
                                    else
                                    {
                                        v12 = 0;
                                    }
                                }
                            }
                        }
                        if (*(v6) != 0 || &v7[1] == v6 && v7->field_8 != 0)
                        {
                            v6 = &v6[strlen(v6) + 1];
                            v5 = v7->field_0;
                            if (v7->field_0 == 0 || *(v6) != 0)
                            {
                                break;
                            }
                            v6 = &v7[1];
                            v7 = v5;
                            v8 = strcmp(v5 + 9, v1->field_30);
                        }
                    }
                    if (*(v6) != 0 || &v7[1] == v6 && v7->field_8 != 0)
                    {
                        v3 = strcmp(v6, v1->field_30);
                    }
                    else if (v11 <= 118 && (*(v6) == 0 || &v7[1] == v6) && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || *(v6) == 0 && v8 == 0 && v7->field_0 != 0 && (&v7[1] == v6 || *(v6) != 0) && (*(v6) != 0 || v7->field_8 != 0) || v13 != 0 && v11 > 118 && (*(v6) == 0 || &v7[1] == v6) && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6))
                    {
                        v1->field_30 = v6;
                        v12 = 1;
                    }
                    else if ((*(v6) == 0 || &v7[1] == v6) && (v13 == 0 || !(&v6[-1 * v4]) < v9) && (v13 == 0 || &v7[1] != v6) && (v7->field_8 == 0 || &v7[1] != v6) && (!(&v6[-1 * v4]) < v9 || v11 > 118) && (&v7[1] != v6 || v11 > 118))
                    {
                        return v12;
                    }
                }
                if (true)
                {
                    v1->field_30 = v6;
                    v12 = 1;
                }
                else
                {
                    return v12;
                }
            }
            else
            {
                v6 = &g_4137e7;
            }
            v1->field_30 = v6;
            v12 = 1;
        }
        return v12;
    }
    return 1;
}

int sub_408b70()
{
}

int sub_409710()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409560();
}

int sub_4072d0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    char v2;  // [bp-0x9]
    unsigned long v4;  // r9
    unsigned long v5;  // r8

    v2 = 0;
    v1 = v4;
    v0 = v5;
    return sub_405b00();
}

int sub_403bfd()
{
}

int sub_40c120()
{
    unsigned int *v1;  // rbx
    unsigned long|unsigned int v2;  // r13d

    v1 = __errno_location();
    v2 = *(v1);
    if ((char)sub_40c0a0() == 0)
    {
        v2 = *(v1);
    }
    sub_40c0f0();
    *((unsigned long *)&v1) = v2;
    return stack_base + 0;
}

extern char g_617488;

int sub_405520()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_617488 = v1;
    return v2;
}

int sub_409420()
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
        return sub_408fc0();
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[24];
    char field_28;
    char padding_29[7];
    unsigned long long field_30;
} struct_0;

extern unsigned int g_410ff0;
extern unsigned long long g_617428;
extern char g_617430;

int sub_403d70()
{
    char v0;  // [bp-0x138]
    unsigned long v1;  // [bp-0x130]
    char v2;  // [bp-0xa8]
    unsigned long v3;  // [bp-0xa0]
    unsigned long long v5;  // rbx
    char *v6;  // rdi
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    struct_0 *v11;  // rbx
    unsigned long long v12;  // rax

    if (g_617430 == 0)
    {
        g_617428 = (unsigned int)sub_40b0c0();
        if (g_617428 == 0)
        {
            v5 = dcgettext(0x0, 0x410ff0, 0x5);
            error(0x0, *(__errno_location()), "%");
        }
        g_617430 = 1;
    }
    if (__xstat(0x1, (unsigned int)v6, (unsigned int)&v0) == 0)
    {
        v11 = g_617428;
        if (g_617428 != 0)
        {
            while (true)
            {
                if ((v11->field_28 & 1) != 0)
                {
                    v8 = v11->field_0;
                    if (*((char *)v11->field_0) == 47)
                    {
                        v9 = strcmp(v11->field_8, v6);
                        if (v9 == 0)
                        {
                            v10 = __xstat(0x1, v8, (unsigned int)&v2);
                            if (v1 == v3 && v10 == 0 && *((long long *)&v0) == *((long long *)&v2))
                            {
                                v12 = v11->field_0;
                            }
                        }
                    }
                }
                if ((v11->field_28 & 1) == 0 || *((char *)v11->field_0) != 47 || v1 != v3 || v9 != 0 || v10 != 0 || *((long long *)&v0) != *((long long *)&v2))
                {
                    v11 = v11->field_30;
                    if (v11 == 0)
                    {
                        break;
                    }
                }
            }
            if ((v11->field_28 & 1) == 0 || *((char *)v11->field_0) != 47 || v1 != v3 || v9 != 0 || v10 != 0 || *((long long *)&v0) != *((long long *)&v2))
            {
                v12 = 0;
            }
            else if (*((char *)v11->field_0) == 47 && v1 == v3 && v9 == 0 && v10 == 0 && *((long long *)&v0) == *((long long *)&v2) && (v11->field_28 & 1) != 0)
            {
                return v12;
            }
        }
    }
    v12 = 0;
    return v12;
}

int sub_405650()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_4055f0();
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_1;

int sub_40c170()
{
    void *v1;  // rdi
    unsigned long long v2;  // rax
    struct_1 *v3;  // rbx
    unsigned long v4;  // rbp
    struct_1 *v5;  // rax
    struct_1 *v7;  // rax

    if (v1 != 0)
    {
        v2 = strlen(v1);
        v4 = v2 + 1;
        v3 = malloc((118 <= v2 + 1? v2 + 1 : 118) + 17 & -8);
        if (v3 != 0)
        {
            v3->field_0 = 0;
            v3->field_8 = 1;
            memcpy((char *)&v3->field_8 + 1, v1, v4);
            *(&((char *)&v3->field_0)[9 + v4]) = 0;
        }
    }
    else
    {
        v3 = malloc(0x80);
        if (v3 != 0)
        {
            v3->field_0 = 0;
            v5 = v3;
            v3->field_8 = 0;
            return v5;
        }
    }
    if (v3 == 0 || v1 != 0)
    {
        v7 = v3;
        return v7;
    }
}

extern char g_6173c8;
extern unsigned long long g_6173d0;

int sub_402921()
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

    if (g_6173c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_6173d0 >= 0)
            {
                break;
            }
            g_6173d0 = g_6173d0 + 1;
            *((long long *)(6385216 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_6173c8 = 1;
        return sub_4028cb();
    }
    return v4;
}

int sub_408ef0()
{
}

int sub_40a080()
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

int sub_40bd00()
{
    unsigned long|unsigned long long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    unsigned long|unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long|unsigned long long v5;  // [bp-0x40]
    unsigned long long v7;  // rdi
    unsigned long|unsigned int v8;  // eax
    char *v10;  // rsi
    char *v11;  // rbx
    unsigned long long v12;  // rcx
    unsigned int v13;  // r8
    unsigned long long v14;  // rdx
    unsigned long long v17;  // rbp
    unsigned long long v19;  // rbx
    unsigned long v20;  // r8
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r14
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // r12
    unsigned long long v37;  // rax

    v8 = (char)*((char *)v7);
    if (!(*((char *)v7) != 0))
    {
        v36 = (*(v10) == 0? v7 : 0);
    }
    else if (*(v10) != 0)
    {
        v11 = v10;
        v14 = v7;
        v13 = 1;
        while (true)
        {
            v14 += 1;
            v11 = &v11[1];
            v12 = *(v11);
            v13 &= v8;
            v8 = (char)*((char *)v14);
            if ((char)v8 == 0)
            {
                v36 = 0;
                if (v12 != 0)
                {
                    break;
                }
            }
            v36 = v7;
            if (v17 == 1 || v13 != 0)
            {
                break;
            }
            v17 = v11 - v10;
            v36 = strchr(v7 + 1, (unsigned long long)*(v10));
            if (v36 == 0)
            {
                break;
            }
            v19 = &v11[-1 * v17];
            v20 = (v7 + v17 < v36? 1 : v7 + v17 - v36);
            if (v17 > 31)
            {
                v36 = (unsigned int)sub_40b9b0();
            }
            else
            {
                if (v17 > 2)
                {
                    v0 = v20;
                    v21 = (unsigned int)sub_40b880();
                    v2 = v5;
                }
                else
                {
                    v5 = 1;
                    v21 = v17 - 1;
                    v2 = 1;
                }
                v0 = v0;
                v22 = memcmp(v19, v19 + v2, v21);
                if (v22 == 0)
                {
                    v23 = 0;
                    v24 = 0;
                    v3 = v21 - 1;
                    v4 = v17 - v2;
                    v1 = 1 - v21;
                    while (true)
                    {
                        v0 = v17 + v24;
                        v26 = sub_40aed0();
                        if (v0 == 0)
                        {
                            break;
                        }
                        if (v26 != 0)
                        {
                            break;
                        }
                        v27 = (v23 <= v21? v21 : v23);
                        if (v17 > (v23 <= v21? v21 : v23))
                        {
                            if (*((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)))
                            {
                                v28 = v36 + v24;
                                do
                                {
                                    v27 += 1;
                                }
                                while (*((char *)(v19 + v27)) == *((char *)(v28 + v27)) && v17 != v27);
                                if (true)
                                {
                                    v29 = v3;
                                }
                                else if (v17 != v27)
                                {
                                    v23 = 0;
                                    v24 = v27 + v1 + 0;
                                }
                            }
                            if (*((char *)(v36 + v27 + v24)) != *((char *)(v19 + v27)) || v21 > v23)
                            {
                                v23 = 0;
                                v24 = v27 + v1 + 0;
                            }
                        }
                        if (v17 <= (v23 <= v21? v21 : v23) || *((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) && v21 > v23)
                        {
                            v29 = v3;
                            if (v21 > v23)
                            {
                                v30 = v36 + v24;
                                if (*((char *)(v19 + v3)) == *((char *)(v36 + v24 + v3)))
                                {
                                    while (true)
                                    {
                                        v31 = v29 - 1;
                                        if (v23 == v29 || *((char *)(v19 + v29 - 1)) != *((char *)(v29 + v30 - 1)))
                                        {
                                            break;
                                        }
                                        v29 = v31;
                                    }
                                }
                            }
                            if (v21 <= v23 || *((char *)(v19 + v3)) != *((char *)(v36 + v24 + v3)))
                            {
                                v29 = v21;
                            }
                        }
                        if (v17 <= (v23 <= v21? v21 : v23) || *((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) && v21 > v23)
                        {
                            if (1 <= v29)
                            {
                                v23 = v4;
                                v24 = 0 + v2;
                            }
                            else
                            {
                                v36 += v24;
                            }
                        }
                    }
                    if (true)
                    {
                        v36 = 0;
                    }
                    else if (1 > v29 && (v26 == 0 || v21 > v23) && (v17 <= (v23 <= v21? v21 : v23) || v21 > v23) && (v21 > v23 || v0 != 0))
                    {
                        v37 = v36;
                        return v37;
                    }
                }
                else
                {
                    v25 = 0;
                    v2 = (v17 - v21 < v21? v21 : v17 - v21) + 1;
                    v5 = (v17 - v21 < v21? v21 : v17 - v21) + 1;
                    v0 = v36 + v21;
                    v1 = 1 - v21;
                    while (true)
                    {
                        v32 = sub_40aed0();
                        if (v20 == 0)
                        {
                            break;
                        }
                        if (v32 != 0)
                        {
                            break;
                        }
                        v33 = v36 + v25;
                        if (v17 > v21)
                        {
                            v34 = v21;
                            v33 = v36 + v25;
                            if (*((char *)(v0 + v25)) == *((char *)(v19 + v21)))
                            {
                                do
                                {
                                    v34 += 1;
                                }
                                while (*((char *)(v19 + v34)) == *((char *)(v33 + v34)) && v17 > v34);
                                if (true)
                                {
                                    v35 = v21 - 1;
                                }
                                else if (v17 > v34)
                                {
                                    v25 = v34 + v1 + 0;
                                }
                            }
                            if (*((char *)(v0 + v25)) != *((char *)(v19 + v21)) || v21 - 1 != -1)
                            {
                                v25 = v34 + v1 + 0;
                            }
                        }
                        if (v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21)) && v21 - 1 != -1)
                        {
                            v35 = v21 - 1;
                        }
                        if (v21 - 1 != -1 && (v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21))))
                        {
                            if (*((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1)))
                            {
                                do
                                {
                                    v35 -= 1;
                                }
                                while (*((char *)(v19 + v35)) == *((char *)(v33 + v35)) && v35 != -1);
                                if (v35 != -1)
                                {
                                    v25 = 0 + v2;
                                }
                                else
                                {
                                    v36 = v33;
                                }
                            }
                            v25 = 0 + v2;
                        }
                        if ((v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21))) && (v21 - 1 == -1 || *((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1))) && (v17 <= v21 || v21 - 1 != -1))
                        {
                            v36 = v33;
                        }
                    }
                    if (true)
                    {
                        v36 = 0;
                    }
                    else if (v32 == 0 && v20 != 0 && (v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21))) && (v21 - 1 == -1 || *((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1))) && (v17 <= v21 || v21 - 1 != -1))
                    {
                        v37 = v36;
                        return v37;
                    }
                }
                v36 = 0;
            }
        }
    }
    else
    {
        v36 = v7;
    }
    v37 = v36;
    return v37;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char field_28;
    char padding_29[7];
    unsigned long long field_30;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    char field_28;
} struct_1;

extern unsigned int g_413841;
extern unsigned int g_41384b;

int sub_40b0c0()
{
    char v0;  // [bp-0x89]
    void tmp_18;  // tmp #18
    char v1;  // [bp-0x79]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x74]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x6c]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x64]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x5c]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x54]
    unsigned long|struct_0 *|unsigned long long|struct_1 * v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    char *v17;  // rbp
    unsigned long long|unsigned long long * v18;  // r12
    unsigned long long v19;  // rax
    unsigned int v21;  // eax
    char *v22;  // r15
    unsigned int v23;  // eax
    char *v28;  // rax
    unsigned long long v30;  // rcx
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    unsigned long v33;  // d
    unsigned long long v35;  // rcx
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long long v39;  // rcx
    unsigned long long v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long long v43;  // rcx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep2
    unsigned long long v47;  // rcx
    unsigned long long v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long long v51;  // rcx
    unsigned long long v52;  // cc_dep1
    unsigned long long v53;  // cc_dep2
    unsigned long long v55;  // cc_dep1
    unsigned long long v56;  // cc_dep2
    char *v57;  // rsi
    unsigned long long v58;  // rcx
    char v59[2];  // rdi
    unsigned long long v61;  // rcx
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep2
    unsigned long long v65;  // rcx
    unsigned long long v66;  // cc_dep1
    unsigned long long v67;  // cc_dep2
    unsigned long long v69;  // rcx
    unsigned long long v70;  // cc_dep1
    unsigned long long v71;  // cc_dep2
    unsigned long long v73;  // rcx
    unsigned long long v74;  // cc_dep1
    unsigned long long v75;  // cc_dep2
    unsigned long long v77;  // rax
    unsigned int|char v78;  // r13b
    unsigned long long v79;  // rax
    unsigned long|unsigned int *|unsigned int v80;  // r13
    unsigned long long v81;  // rax
    unsigned int v82;  // edx
    char *v83;  // rdi
    unsigned long long v84;  // rcx
    unsigned long long v85;  // cc_dep1
    unsigned long long v86;  // cc_dep2
    unsigned long long v87;  // cc_dep1
    char *v88;  // rdi
    unsigned long long v89;  // rcx
    unsigned long long v90;  // cc_dep1
    unsigned long long v91;  // cc_dep2
    char *v93;  // rsi
    unsigned long long v94;  // rcx
    char *v95;  // rdi
    unsigned long long v96;  // cc_dep1
    unsigned long long v97;  // cc_dep2
    unsigned int v99;  // edx
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    unsigned long|unsigned int v102;  // ebp
    unsigned long long v103;  // rax
    unsigned long|unsigned int v104;  // r14
    unsigned int *v105;  // r13
    char *v108;  // rax
    char *v109;  // rdi
    unsigned long long v110;  // rcx
    char *v111;  // rsi
    unsigned long|unsigned int v113;  // rdx
    unsigned long long v114;  // cc_dep1
    unsigned long long v115;  // cc_dep2
    unsigned long v116;  // d
    char *v118;  // rdi
    unsigned long long v119;  // rcx
    unsigned long long v120;  // cc_dep1
    unsigned long long v121;  // cc_dep2
    char *v123;  // rdi
    unsigned long long v124;  // rcx
    unsigned long long v125;  // cc_dep1
    unsigned long long v126;  // cc_dep2
    char *v128;  // rdi
    unsigned long long v129;  // rcx
    unsigned long long v130;  // cc_dep1
    unsigned long long v131;  // cc_dep2
    char *v133;  // rdi
    unsigned long long v134;  // rcx
    unsigned long long v135;  // cc_dep1
    unsigned long long v136;  // cc_dep2
    char *v138;  // rdi
    unsigned long long v139;  // rcx
    unsigned long long v140;  // cc_dep1
    unsigned long long v141;  // cc_dep2
    char *v143;  // rdi
    unsigned long long v144;  // rcx
    unsigned long long v145;  // cc_dep1
    unsigned long long v146;  // cc_dep2
    char *v148;  // rdi
    unsigned long long v149;  // rcx
    unsigned long long v150;  // cc_dep1
    unsigned long long v151;  // cc_dep2
    char *v153;  // rdi
    unsigned long long v154;  // rcx
    unsigned long long v155;  // cc_dep1
    unsigned long long v156;  // cc_dep2
    char *v158;  // rdi
    unsigned long long v159;  // rcx
    unsigned long long v160;  // cc_dep1
    unsigned long long v161;  // cc_dep2
    char *v163;  // rdi
    unsigned long long v164;  // rcx
    unsigned long long v165;  // cc_dep1
    unsigned long long v166;  // cc_dep2
    unsigned long long v168;  // rax
    unsigned long long v169;  // rax
    char v170;  // al
    char *v171;  // r15
    char v172[2];  // rdi
    unsigned int|char v174;  // edx
    char *v175;  // rdi
    unsigned long long v176;  // rcx
    unsigned long long v177;  // cc_dep1
    unsigned long long v178;  // cc_dep2
    unsigned long long v179;  // cc_dep1
    char *v180;  // rdi
    unsigned long long v181;  // rcx
    unsigned long long v182;  // cc_dep1
    unsigned long long v183;  // cc_dep2
    char *v185;  // rsi
    unsigned long long v186;  // rcx
    char *v187;  // rdi
    unsigned long long v188;  // cc_dep1
    unsigned long long v189;  // cc_dep2
    unsigned int v191;  // edx
    unsigned long long v192;  // rax
    struct_0 *v193;  // rdi
    unsigned long long v194;  // rbx

    if (rbp<8> != 0)
    {
        v13 = 0;
        rbp<8> = fopen("/proc/self/mountinfo", "r");
        v18 = &v12;
        v14 = 0;
        while (true)
        {
            if (__getdelim(&v13, &v14, 0xa, v17) != -1)
            {
                v21 = sscanf(v13, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v10, (unsigned int)&v11, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v1) & -5;
                v22 = (unsigned long long)(unsigned int)sub_40bd00();
                v23 = sscanf(v22, " - %n%*s%n %n%*s%n %c", (unsigned int)&v6, (unsigned int)&v7, (unsigned int)&v8, (unsigned int)&v9, (unsigned int)&v1) & -5;
                v78 = 1;
                *((char *)(v13 + *((int *)&v11))) = 0;
                *((char *)(v13 + *((int *)&v5))) = 0;
                v22[(long long)*((int *)&v7)] = 0;
                v22[(long long)*((int *)&v9)] = 0;
                sub_40afe0();
                sub_40afe0();
                sub_40afe0();
                *((unsigned long long *)v12) = (unsigned int)sub_409790();
                *((unsigned long long *)(v12 + 8)) = (unsigned int)sub_409790();
                *((unsigned long long *)(v12 + 16)) = (unsigned int)sub_409790();
                v28 = sub_409790();
                v59 = "autofs";
                *((char **)(v12 + 24)) = v28;
                *((char *)(v12 + 40)) = *((char *)(v12 + 40)) | 4;
                v30 = 7;
                v57 = v28;
                while (v30 != 0)
                {
                    v30 -= 1;
                    v31 = *(v57);
                    v32 = v59[0];
                    v59 = &v59[v33];
                    v57 = &v57[v33];
                    break;
                }
                *((unsigned long long *)(v12 + 32)) = (unsigned long long)(unsigned int)*((int *)&v3) * 0x1000 & 0xffffff00000 | (unsigned long long)(unsigned int)*((int *)&v2) * 0x100000000 & -0x100000000000 | (unsigned int)((unsigned long long)(unsigned int)*((int *)&v2) * 0x100) & 0xfff00 | (unsigned int)*((int *)&v3);
                if ((v31 > v32) - 0 - (v31 < v32) != 0)
                {
                    v59 = "proc";
                    v35 = 5;
                    v57 = v28;
                    while (v35 != 0)
                    {
                        v35 -= 1;
                        v36 = *(v57);
                        v37 = v59[0];
                        v59 = &v59[v33];
                        v57 = &v57[v33];
                        break;
                    }
                    if ((v36 > v37) - 0 - (v36 < v37) != 0)
                    {
                        v59 = "subfs";
                        v39 = 6;
                        while (v39 != 0)
                        {
                            v39 -= 1;
                            v40 = *(v57);
                            v41 = v59[0];
                            v59 = &v59[v33];
                            v57 = &v57[v33];
                            break;
                        }
                        if ((v40 > v41) - 0 - (v40 < v41) != 0)
                        {
                            v59 = "debugfs";
                            v43 = 8;
                            while (v43 != 0)
                            {
                                v43 -= 1;
                                v44 = *(v57);
                                v45 = v59[0];
                                v59 = &v59[v33];
                                v57 = &v57[v33];
                                break;
                            }
                            if ((v44 > v45) - 0 - (v44 < v45) != 0)
                            {
                                v59 = "devpts";
                                v47 = 7;
                                while (v47 != 0)
                                {
                                    v47 -= 1;
                                    v48 = *(v57);
                                    v49 = v59[0];
                                    v59 = &v59[v33];
                                    v57 = &v57[v33];
                                    break;
                                }
                                if ((v48 > v49) - 0 - (v48 < v49) != 0)
                                {
                                    v59 = "fusectl";
                                    v51 = 8;
                                    while (v51 != 0)
                                    {
                                        v51 -= 1;
                                        v52 = *(v57);
                                        v53 = v59[0];
                                        v59 = &v59[v33];
                                        v57 = &v57[v33];
                                        break;
                                    }
                                    if ((v52 > v53) - 0 - (v52 < v53) != 0)
                                    {
                                        v59 = "mqueue";
                                        v58 = 7;
                                        while (v58 != 0)
                                        {
                                            v58 -= 1;
                                            v55 = *(v57);
                                            v56 = v59[0];
                                            v59 = &v59[v33];
                                            v57 = &v57[v33];
                                            break;
                                        }
                                        if ((v55 > v56) - 0 - (v55 < v56) != 0)
                                        {
                                            v59 = "rpc_";
                                            v61 = 11;
                                            while (v61 != 0)
                                            {
                                                v61 -= 1;
                                                v62 = *(v57);
                                                v63 = v59[0];
                                                v59 = &v59[v33];
                                                v57 = &v57[v33];
                                                break;
                                            }
                                            if ((v62 > v63) - 0 - (v62 < v63) != 0)
                                            {
                                                v59 = "sysfs";
                                                v65 = 6;
                                                while (v65 != 0)
                                                {
                                                    v65 -= 1;
                                                    v66 = *(v57);
                                                    v67 = v59[0];
                                                    v59 = &v59[v33];
                                                    v57 = &v57[v33];
                                                    break;
                                                }
                                                if ((v66 > v67) - 0 - (v66 < v67) != 0)
                                                {
                                                    v59 = "devfs";
                                                    v69 = 6;
                                                    while (v69 != 0)
                                                    {
                                                        v69 -= 1;
                                                        v70 = *(v57);
                                                        v71 = v59[0];
                                                        v59 = &v59[v33];
                                                        v57 = &v57[v33];
                                                        break;
                                                    }
                                                    if ((v70 > v71) - 0 - (v70 < v71) != 0)
                                                    {
                                                        v59 = "kernfs";
                                                        v73 = 7;
                                                        while (v73 != 0)
                                                        {
                                                            v73 -= 1;
                                                            v74 = *(v57);
                                                            v75 = v59[0];
                                                            v59 = &v59[v33];
                                                            v57 = &v57[v33];
                                                            break;
                                                        }
                                                        if ((v74 > v75) - 0 - (v74 < v75) != 0)
                                                        {
                                                            v77 = strcmp(v57, "ignore");
                                                            if (v77 != 0)
                                                            {
                                                                v78 = strcmp(v57, "none") == 0;
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
                }
                v79 = (char)(*((char *)(v12 + 40)) & 4294967038) | v78;
                v80 = *((long long *)v12);
                *((unsigned long long *)(v12 + 40)) = v79;
                v81 = strchr(v59, 0x3a);
                v82 = 1;
                if (v81 == 0)
                {
                    if (v59[1] == 47 && v59[0] == 47)
                    {
                        v83 = "smbfs";
                        v84 = 6;
                        while (v84 != 0)
                        {
                            v84 -= 1;
                            v85 = *(v57);
                            v86 = *(v83);
                            v83 = &v83[v33];
                            v57 = &v57[v33];
                            break;
                        }
                        v87 = (v85 > v86) - 0 - (v85 < v86);
                        if ((char)v87 != 0)
                        {
                            v88 = "cifs";
                            v89 = 5;
                            while (v89 != 0)
                            {
                                v89 -= 1;
                                v90 = *(v57);
                                v91 = *(v88);
                                v88 = &v88[v33];
                                v57 = &v57[v33];
                                break;
                            }
                        }
                    }
                    if (v59[1] != 47 || v59[0] != 47 || (v90 > v91) - 0 - (v90 < v91) != 0 && (char)v87 != 0)
                    {
                        v93 = "-hosts";
                        v94 = 7;
                        v59 = *((long long *)v12);
                        while (v94 != 0)
                        {
                            v94 -= 1;
                            v96 = *(v93);
                            v97 = *(v95);
                            v95 = &v95[v33];
                            v93 = &v93[v33];
                            break;
                        }
                        v82 = (char)(((unsigned long long)((v96 > v97) - 0 - (v96 < v97)) & 255) == 0);
                    }
                }
                v99 = v82 * 2;
                *((char *)(v12 + 40)) = (char)(*((char *)(v12 + 40)) & 4294967037) | v99;
                v12 = (unsigned int)sub_409560();
                v18 = v12 + 48;
            }
            else
            {
                free(v13);
                if ((*(v17) & 32) == 0)
                {
                    v103 = sub_40ced0();
                    break;
                }
                else
                {
                    v104 = *(v80);
                    v80 = __errno_location();
                    sub_40ced0();
                    *(v105) = v104;
                }
            }
        }
        if ((*(v17) & 32) != 0)
        {
            *(v18) = 0;
            v193 = v12;
        }
        else if ((*(v17) & 32) == 0)
        {
            v104 = *((int *)v80);
            v80 = __errno_location();
        }
        else if ((*(v17) & 32) == 0)
        {
            *(v18) = 0;
            v100 = v12;
        }
    }
    else
    {
        v19 = setmntent(0x413841, 0x4120a7);
        v80 = v19;
        if (v19 != 0)
        {
            v18 = &v12;
            v101 = getmntent(v80);
            v102 = v101;
            if (v101 != 0)
            {
                while (true)
                {
                    hasmntopt(v102, 0x41384b);
                    v12->field_0 = (unsigned int)sub_409790();
                    *((long long *)(v12 + 16)) = 0;
                    *((unsigned long long *)(v12 + 8)) = (unsigned int)sub_409790();
                    v108 = sub_409790();
                    v109 = "autofs";
                    v110 = 7;
                    *((char *)(v12 + 40)) = *((char *)(v12 + 40)) | 4;
                    v111 = v108;
                    *((char **)(v12 + 24)) = v108;
                    v113 = 1;
                    while (v110 != 0)
                    {
                        v110 -= 1;
                        v114 = *(v111);
                        v115 = *(v109);
                        v109 = &v109[v116];
                        v111 = &v111[v116];
                        break;
                    }
                    if ((v114 > v115) - 0 - (v114 < v115) != 0)
                    {
                        v118 = "proc";
                        v119 = 5;
                        v111 = v108;
                        while (v119 != 0)
                        {
                            v119 -= 1;
                            v120 = *(v111);
                            v121 = *(v118);
                            v118 = &v118[v116];
                            v111 = &v111[v116];
                            break;
                        }
                        if ((v120 > v121) - 0 - (v120 < v121) != 0)
                        {
                            v123 = "subfs";
                            v124 = 6;
                            while (v124 != 0)
                            {
                                v124 -= 1;
                                v125 = *(v111);
                                v126 = *(v123);
                                v123 = &v123[v116];
                                v111 = &v111[v116];
                                break;
                            }
                            if ((v125 > v126) - 0 - (v125 < v126) != 0)
                            {
                                v128 = "debugfs";
                                v129 = 8;
                                while (v129 != 0)
                                {
                                    v129 -= 1;
                                    v130 = *(v111);
                                    v131 = *(v128);
                                    v128 = &v128[v116];
                                    v111 = &v111[v116];
                                    break;
                                }
                                if ((v130 > v131) - 0 - (v130 < v131) != 0)
                                {
                                    v133 = "devpts";
                                    v134 = 7;
                                    while (v134 != 0)
                                    {
                                        v134 -= 1;
                                        v135 = *(v111);
                                        v136 = *(v133);
                                        v133 = &v133[v116];
                                        v111 = &v111[v116];
                                        break;
                                    }
                                    if ((v135 > v136) - 0 - (v135 < v136) != 0)
                                    {
                                        v138 = "fusectl";
                                        v139 = 8;
                                        while (v139 != 0)
                                        {
                                            v139 -= 1;
                                            v140 = *(v111);
                                            v141 = *(v138);
                                            v138 = &v138[v116];
                                            v111 = &v111[v116];
                                            break;
                                        }
                                        if ((v140 > v141) - 0 - (v140 < v141) != 0)
                                        {
                                            v143 = "mqueue";
                                            v144 = 7;
                                            while (v144 != 0)
                                            {
                                                v144 -= 1;
                                                v145 = *(v111);
                                                v146 = *(v143);
                                                v143 = &v143[v116];
                                                v111 = &v111[v116];
                                                break;
                                            }
                                            if ((v145 > v146) - 0 - (v145 < v146) != 0)
                                            {
                                                v148 = "rpc_";
                                                v149 = 11;
                                                while (v149 != 0)
                                                {
                                                    v149 -= 1;
                                                    v150 = *(v111);
                                                    v151 = *(v148);
                                                    v148 = &v148[v116];
                                                    v111 = &v111[v116];
                                                    break;
                                                }
                                                if ((v150 > v151) - 0 - (v150 < v151) != 0)
                                                {
                                                    v153 = "sysfs";
                                                    v154 = 6;
                                                    while (v154 != 0)
                                                    {
                                                        v154 -= 1;
                                                        v155 = *(v111);
                                                        v156 = *(v153);
                                                        v153 = &v153[v116];
                                                        v111 = &v111[v116];
                                                        break;
                                                    }
                                                    if ((v155 > v156) - 0 - (v155 < v156) != 0)
                                                    {
                                                        v158 = "devfs";
                                                        v159 = 6;
                                                        while (v159 != 0)
                                                        {
                                                            v159 -= 1;
                                                            v160 = *(v111);
                                                            v161 = *(v158);
                                                            v158 = &v158[v116];
                                                            v111 = &v111[v116];
                                                            break;
                                                        }
                                                        if ((v160 > v161) - 0 - (v160 < v161) != 0)
                                                        {
                                                            v163 = "kernfs";
                                                            v164 = 7;
                                                            while (v164 != 0)
                                                            {
                                                                v164 -= 1;
                                                                v165 = *(v111);
                                                                v166 = *(v163);
                                                                v163 = &v163[v116];
                                                                v111 = &v111[v116];
                                                                break;
                                                            }
                                                            if ((v165 > v166) - 0 - (v165 < v166) != 0)
                                                            {
                                                                v0 = 1;
                                                                v168 = strcmp(v111, "ignore");
                                                                v113 = v0;
                                                                if (v168 != 0)
                                                                {
                                                                    v169 = strcmp(v111, "none");
                                                                    v170 = v169 == 0;
                                                                    v113 = 1 & rax<4>;
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
                    }
                    v171 = v12->field_0;
                    v172 = v12->field_0;
                    *((char *)(v12 + 40)) = (char)(*((char *)(v12 + 40)) & 4294967038) | v113;
                    v174 = 1;
                    if (strchr(v172, 0x3a) == 0)
                    {
                        if (v172[1] == 47 && v172[0] == 47)
                        {
                            v175 = "smbfs";
                            v176 = 6;
                            while (v176 != 0)
                            {
                                v176 -= 1;
                                v177 = *(v111);
                                v178 = *(v175);
                                v175 = &v175[v116];
                                v111 = &v111[v116];
                                break;
                            }
                            v179 = (v177 > v178) - 0 - (v177 < v178);
                            if ((char)v179 != 0)
                            {
                                v180 = "cifs";
                                v181 = 5;
                                while (v181 != 0)
                                {
                                    v181 -= 1;
                                    v182 = *(v111);
                                    v183 = *(v180);
                                    v180 = &v180[v116];
                                    v111 = &v111[v116];
                                    break;
                                }
                            }
                        }
                        if (v172[1] != 47 || v172[0] != 47 || (char)v179 != 0 && (v182 > v183) - 0 - (v182 < v183) != 0)
                        {
                            v185 = "-hosts";
                            v186 = 7;
                            v172 = v171;
                            while (v186 != 0)
                            {
                                v186 -= 1;
                                v188 = *(v185);
                                v189 = *(v187);
                                v187 = &v187[v116];
                                v185 = &v185[v116];
                                break;
                            }
                            v174 = ((unsigned long long)((v188 > v189) - 0 - (v188 < v189)) & 255) == 0;
                        }
                    }
                    tmp_18 = v12->field_28;
                    v191 = v174 * 2;
                    *((long long *)(v12 + 32)) = -1;
                    *((char *)(v12 + 40)) = (unsigned int)tmp_18 & -3 | v191;
                    v12 = (unsigned long long)(unsigned int)sub_409560();
                    v18 = v12 + 48;
                    v102 = getmntent(v80);
                    if (v102 == 0)
                    {
                        break;
                    }
                }
            }
            v192 = endmntent(v80);
        }
        else
        {
            v100 = 0;
        }
    }
    if ((rbp<8> == 0 || v12 != 0) && (v19 != 0 || rbp<8> != 0))
    {
        if (v192 != 0 || rbp<8> != 0)
        {
            *(v18) = 0;
            v100 = v12;
        }
        if (v192 == 0 || rbp<8> != 0)
        {
            v104 = *((int *)v80);
            v80 = __errno_location();
            *(v18) = 0;
            v193 = v12;
            if (v12 != 0)
            {
                while (true)
                {
                    v194 = v193->field_30;
                    sub_40b070();
                    v12 = v194;
                    v193 = v194;
                    if (v194 == 0)
                    {
                        break;
                    }
                }
            }
            *((unsigned long *)&v105) = v104;
            return 0;
        }
    }
    if (v12 == 0 || v192 != 0)
    {
        return v100;
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

extern unsigned int g_413788;
extern unsigned int g_4137cc;

int sub_40a780()
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
                        sub_40a080();
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
                            v27 = (char *)v31 + 1;
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
                            sub_40a080();
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
        v0->field_0 = v42;
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
        v45 = (unsigned int)sub_40a160();
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
                        dcgettext(0x0, 0x413788, 0x5);
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
            dcgettext(0x0, 0x4137cc, 0x5);
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
                    dcgettext(0x0, 0x413788, 0x5);
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
        v45 = (unsigned int)sub_40a160();
    }
    v63 = v45;
    return v63;
}

int sub_40afe0()
{
    char *v1;  // rdi
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r9
    unsigned long long v8;  // rdx
    char *v10;  // rcx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx

    v2 = v1;
    v3 = strlen(v1) + 1;
    while (true)
    {
        v5 = (char)*((char *)(v2 + rdx<8>));
        v12 = rdx<8> + 1;
        if (*((char *)(v2 + rdx<8>)) == 92 && rdx<8> + 4 < v3)
        {
            v6 = (char)*((char *)(v2 + v12));
            if (((unsigned long long)(char)*((char *)(v2 + v12)) - 48 & 255) <= 3 && ((unsigned long long)(char)*((char *)(v2 + rdx<8> + 2)) - 48 & 255) <= 7)
            {
                v8 = (char)*((char *)(v2 + rdx<8> + 3));
                if ((v8 - 48 & 255) <= 7)
                {
                    v10 = &v10[1];
                    v12 = 4;
                    v10[-1] = v8 - 48 + ((char)*((char *)(v2 + rdx<8> + 2)) + v6 * 8) * 8 - 128;
                }
            }
        }
        if ((v8 - 48 & 255) > 7 || ((unsigned long long)(char)*((char *)(v2 + rdx<8> + 2)) - 48 & 255) > 7 || *((char *)(v2 + rdx<8>)) != 92 || ((unsigned long long)(char)*((char *)(v2 + v12)) - 48 & 255) > 3 || rdx<8> + 4 >= v3)
        {
            *((unsigned long long *)&v10) = v5;
            v10 = &v10[1];
            if (v3 <= v12)
            {
                break;
            }
        }
        v13 = v12;
    }
    return v3;
}

int sub_408fa0()
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

int sub_40c6a0()
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
    return sub_40ccc0();
}

int sub_40ce40()
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
        while (v4 == 37 && *((char *)(v2 + (v3 << 1) + 1)) == 115 && (char)v4 != 0);
        if (true)
        {
            return sub_40cd10();
        }
    }
    if (*((char *)v2) == 0 || *((char *)v2) == 37 && *((char *)(v2 + 1)) == 115)
    {
        return sub_40cd10();
    }
    if (*((char *)v2) == 37 || *((char *)v2) != 0)
    {
        if (sub_40d6d0() >= 0)
        {
            return v0;
        }
        else if (*(__errno_location()) != 12)
        {
            return 0;
        }
        sub_4097b0(); /* do not return */
    }
}

int sub_403bed()
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

extern unsigned int g_4136c0;
extern unsigned int g_4136e0;
extern unsigned int g_413710;
extern unsigned int g_413730;
extern unsigned int g_413760;
extern unsigned long long stderr;

int sub_40a160()
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
                                dcgettext(0x0, 0x4136c0, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x4136e0, 0x5);
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
                                dcgettext(0x0, 0x413760, 0x5);
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
                            dcgettext(0x0, 0x413730, 0x5);
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
            dcgettext(0x0, 0x413710, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern unsigned long long g_617490;

int sub_405510()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_617490 = v1;
    return v2;
}

int sub_40d6b0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    tzset();
}

int sub_408e80()
{
}

extern int512_t g_6175a0;

int sub_4088a0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6175a0 : v1));
}

int sub_405710()
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

extern unsigned int g_4107ac;
extern unsigned int g_411218;
extern unsigned int g_411240;
extern unsigned int g_411260;
extern unsigned int g_411288;
extern unsigned int g_4112d8;
extern unsigned int g_411348;
extern unsigned int g_4114f0;
extern unsigned int g_411520;
extern unsigned int g_411558;
extern unsigned int g_411690;
extern unsigned int g_411730;
extern unsigned int g_411898;
extern unsigned int g_411a78;
extern unsigned int g_411b68;
extern unsigned int g_411c68;
extern unsigned int g_411ca0;
extern unsigned int g_411ce8;
extern unsigned int g_411dd0;
extern unsigned int g_411e18;
extern unsigned int g_411e38;
extern unsigned long long stdout;

int sub_404870()
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
    unsigned long long v37[2];  // rax
    char *v38;  // rdi
    char *v39;  // rsi
    unsigned long long v40;  // rcx
    unsigned long long v41;  // cc_dep1
    unsigned long long v42;  // cc_dep2
    unsigned long v43;  // d
    char *v47;  // rax
    char *v48;  // rax
    unsigned long long v49;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x411218, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411240, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411260, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411288, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4112d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411348, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4114f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411520, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411558, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411690, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411730, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411898, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411a78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411b68, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411c68, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411ca0, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411ce8, 0x5));
        v0 = "[";
        v37 = &v0;
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
            v37 = &v2;
            v38 = v2;
            if (v2 == 0)
            {
                break;
            }
            v39 = "stat";
            v40 = 5;
            if ((v41 > v42) - 0 - (v41 < v42) == 0)
            {
                break;
            }
            while (v40 != 0)
            {
                v40 -= 1;
                v41 = *(v39);
                v42 = *(v38);
                v38 = &v38[v43];
                v39 = &v39[v43];
                break;
            }
        }
        if (v37[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4107ac, 0x5));
            v48 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4107ac, 0x5));
            v47 = setlocale(0x5, 0x0);
            if (v47 != 0)
            {
                v49 = strncmp(v47, "en_", 0x3);
            }
            if (v47 == 0 || v49 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411e18, 0x5));
            }
        }
        if ((v37[1] == 0 || strncmp(v48, "en_", 0x3) != 0) && (v37[1] == 0 || v48 != 0) && (v47 != 0 || v37[1] != 0) && (v49 != 0 || v37[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411dd0, 0x5));
        }
        if (v37[1] != 0 || v47 != 0 && v49 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411e18, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411e38, 0x5));
    }
    exit(v19); /* do not return */
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_412556;

int sub_408f80()
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
        v29 = chdir((unsigned int)(stack_base + 0));
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
                    v17 = strspn((unsigned int)(stack_base + 0), 0x412556);
                    if (v17 != 2)
                    {
                        v18 = v9;
                        if (v17 != 0)
                        {
                            v19 = sub_409900();
                            if (v19 == 0)
                            {
                                v18 = &v18[v17];
                            }
                        }
                    }
                    else
                    {
                        v20 = (unsigned long long)(unsigned int)sub_40aed0();
                        if (v20 != 0)
                        {
                            *(v20) = 0;
                            v21 = sub_409900();
                            *(v20) = 47;
                            if (v21 == 0)
                            {
                                v23 = &v20[1];
                                v18 = v23 + (unsigned long long)strspn(v23, 0x412556);
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
        if (*(v15) == 36 && v17 == 0 && v16 != 0 && v17 != 2 && v16 > 4095 && (unsigned int)v29 != 0 || *(v15) == 36 && v21 == 0 && v17 == 2 && v16 != 0 && v16 > 4095 && v20 != 0 && (unsigned int)v29 != 0 || *(v15) == 36 && v19 == 0 && v16 != 0 && v17 != 2 && v17 != 0 && v16 > 4095 && (unsigned int)v29 != 0)
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
                                    if (sub_409900() != 0)
                                    {
                                        break;
                                    }
                                    v28 = &v25[1];
                                    v18 = v28 + (unsigned long long)strspn(v28, 0x412556);
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
                                v30 = sub_409900();
                                if (v30 != 0)
                                {
                                    break;
                                }
                            }
                            v29 = fchdir(v0);
                            if ((unsigned int)v29 == 0)
                            {
                                sub_4098c0();
                            }
                        }
                    }
                    if (v24 + -0x1 * v18 <= 4095 && v24 > v18 || v24 + -0x1 * v18 <= 4095 && (unsigned int)v29 != 0 || v25 - v18 <= 4095 && v24 + -0x1 * v18 > 4095 && v25 != 0)
                    {
                        sub_4098c0();
                        *(v15) = *(v15);
                    }
                    else if ((v24 + -0x1 * v18 <= 4095 || v25 == 0) && ((unsigned int)v29 == 0 || v24 + -0x1 * v18 > 4095) && (v24 <= v18 || v30 == 0 || v24 + -0x1 * v18 > 4095))
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
        if (*(v15) == 36 && v16 != 0 && v17 != 2 && v17 != 0 && v16 > 4095 && (unsigned int)v29 != 0 && v19 != 0 || *(v18) != 47 && (*(v15) == 36 && v17 == 0 && v16 != 0 && v17 != 2 && v16 > 4095 && (unsigned int)v29 != 0 || *(v15) == 36 && v21 == 0 && v17 == 2 && v16 != 0 && v16 > 4095 && v20 != 0 && (unsigned int)v29 != 0 || *(v15) == 36 && v19 == 0 && v16 != 0 && v17 != 2 && v17 != 0 && v16 > 4095 && (unsigned int)v29 != 0) && v18 <= &v18[v16] || *(v15) == 36 && v17 == 2 && v16 != 0 && v16 > 4095 && v20 != 0 && (unsigned int)v29 != 0 && v21 != 0)
        {
            sub_4098c0();
            *(v15) = *(v15);
        }
        if (*(v15) == 36 && v16 != 0 && v17 != 2 && v17 != 0 && v16 > 4095 && (unsigned int)v29 != 0 && v19 != 0 || *(v18) != 47 && (*(v15) == 36 && v17 == 0 && v16 != 0 && v17 != 2 && v16 > 4095 && (unsigned int)v29 != 0 || *(v15) == 36 && v21 == 0 && v17 == 2 && v16 != 0 && v16 > 4095 && v20 != 0 && (unsigned int)v29 != 0 || *(v15) == 36 && v19 == 0 && v16 != 0 && v17 != 2 && v17 != 0 && v16 > 4095 && (unsigned int)v29 != 0) && v18 <= &v18[v16] || *(v15) == 36 && v17 == 2 && v16 != 0 && v16 > 4095 && v20 != 0 && (unsigned int)v29 != 0 && v21 != 0 || *(v15) == 36 && v17 == 2 && v16 != 0 && v16 > 4095 && (unsigned int)v29 != 0 && v20 == 0)
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

int sub_40d880() { crash_skku;
}
extern unsigned int g_617630;

int sub_40d740()
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
        if (g_617630 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40d740();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_617630 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_617630 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40d740();
        }
        if ((*(v12) == 22 || g_617630 < 0) && (g_617630 < 0 || (unsigned int)v15 < 0) && (g_617630 == -1 || g_617630 >= 0) && (g_617630 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_617630 >= 0))
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

int sub_408d60()
{
}

int sub_402a30()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_402980();
}

int sub_409600()
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
        sub_4097b0(); /* do not return */
    }
}

int sub_409900()
{
    unsigned int *v1;  // rdi
    unsigned long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // ebp

    v4 = openat(*(v1));
    if (rbp<4> >= 0)
    {
        rbp<4> = v4;
        sub_4098c0();
        *(v1) = v6;
        v5 = 0;
    }
    else
    {
        v5 = -18446744069414584321;
    }
    return v5;
}

int sub_407490()
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
    unsigned long|unsigned long long|unsigned int|char v77;  // rsi
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
            v26 = (unsigned int)sub_407390();
            v27 = (unsigned long long)(unsigned int)sub_407390();
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
                                    v77 = (unsigned int)v39 == 2;
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
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                    v49 = v5;
                                    v77 = 0;
                                    v5 = v42;
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
                        case 8:
                            v40 = 98;
                            v77 = 0;
                            v78 = 0;
                        case 9:
                            v40 = 116;
                        case 10:
                            v40 = 110;
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
                            v48 = v5;
                            v5 = v41;
                            v78 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
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
                            v77 = (unsigned int)v39 == 2;
                            v36 = 0;
                            v40 = 0;
                            break;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v77 = (unsigned int)v39 == 2;
                        if (v4 == 0)
                        {
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
                            v78 = 0;
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v77 = (unsigned int)v39 == 2;
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
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
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
                    case 12:
                        v40 = 12;
                        v45 = 102;
                        v77 = (unsigned int)v39 == 2;
                    case 13:
                        v40 = 13;
                        v45 = 114;
                    case 32:
                        v40 = 32;
                        v77 = (unsigned int)v39 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v77 = (unsigned int)v39 == 2;
                        v35 = 0;
                    case 35: case 126:
                        v77 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v77 = (unsigned int)v39 == 2;
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
                            v77 = (unsigned int)v39 == 2;
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
                            v76 = (unsigned int)sub_407490();
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_40ae50();
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
                        v77 = v4;
                        v78 = 0;
                    }
                    if (v46 == 0 || v46 != -2 && (unsigned int)v46 != 0 && v46 != -1)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v33 = (char)v19;
                        v29 = v11;
                        v77 = (unsigned int)v78 ^ 1;
                        v79 = v12;
                        v38 = v9;
                        v39 = v10;
                        v77 = (char)((unsigned int)v78 ^ 1) & v4;
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
            }
            if (v77 != 0)
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
                    if ((v80 < v64 || v77 == 0) && (v63 == 0 || v77 == 0) && (v80 < v64 || v77 != 0))
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
            if ((v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_407490();
            }
            if (v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 && v4 == 0 && v5 == 0 || v17 == 0 && v4 != 0 || v77 != 0 && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && v6 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
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
        *((unsigned long *)&v18) = v84;
    }
}

typedef struct struct_0 {
    uint128_t field_0;
    uint128_t field_10;
    unsigned int field_18;
    char padding_1c[4];
    uint128_t field_20;
    uint128_t field_30;
    uint128_t field_40;
    uint128_t field_50;
    uint128_t field_60;
    uint128_t field_70;
    uint128_t field_80;
} struct_0;

extern char g_404d8e;
extern char g_404d99;
extern char g_404da1;
extern char g_404dbf;
extern char g_404dd4;
extern char g_404de8;
extern char g_404dfd;
extern char g_404e3a;
extern char g_404ecd;
extern char g_404ee4;
extern char g_404ef8;
extern char g_404f0d;
extern char g_404f15;
extern char g_404f28;
extern char g_404f3c;
extern char g_404fdb;
extern char g_404fef;
extern char g_405004;
extern char g_40501f;
extern char g_405079;
extern char g_40508c;
extern unsigned int g_411fa8;
extern unsigned int g_411fc5;
extern unsigned int g_411fe3;
extern unsigned int g_411fe4;
extern unsigned int g_411fe8;
extern unsigned int g_412010;

int sub_404d10()
{
    char v0;  // [bp-0x158]
    void|uint128_t|char v1;  // [bp-0x148]
    void v2;  // [bp-0x138]
    void v3;  // [bp-0x128]
    void v4;  // [bp-0x118]
    void v5;  // [bp-0x108]
    void v6;  // [bp-0xf8]
    void v7;  // [bp-0xe8]
    void v8;  // [bp-0xd8]
    void|uint128_t v9;  // [bp-0xc8]
    char v10;  // [bp-0xb8]
    unsigned long v11;  // [bp-0xb0]
    void v12;  // [bp-0xa8]
    void v13;  // [bp-0x98]
    void v14;  // [bp-0x88]
    void v15;  // [bp-0x78]
    void v16;  // [bp-0x68]
    unsigned long v17;  // [bp-0x60]
    unsigned long|void v18;  // [bp-0x58]
    unsigned long v19;  // [bp-0x50]
    unsigned long|void v20;  // [bp-0x48]
    unsigned long v21;  // [bp-0x40]
    unsigned long|void v22;  // [bp-0x38]
    unsigned long v23;  // [bp-0x30]
    unsigned long v24;  // [bp-0x28]
    unsigned long v25;  // [bp-0x20]
    unsigned long v26;  // [bp-0x18]
    unsigned long v27;  // [bp-0x10]
    unsigned long v28;  // [bp-0x8]
    struct_0 *v30;  // rsi
    struct_0 *v31;  // rbx
    unsigned int v32;  // r13d
    unsigned int *v33;  // r12
    unsigned long v34;  // rdi
    unsigned long long v35;  // rax
    void *v36;  // rbx
    unsigned long long v37;  // rax
    unsigned long long v38;  // r13
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rbx
    unsigned long long v44;  // rbx
    unsigned long v45;  // rsi
    unsigned long long v46;  // rbx
    unsigned long long v47;  // rbx
    unsigned long long v48;  // rbx
    unsigned long v49;  // rsi
    unsigned long v50;  // rsi
    unsigned int v51;  // r13d
    unsigned long long v52;  // rax
    unsigned long v54;  // rsi
    unsigned long long v55;  // rax

    v31 = v30;
    v32 = sub_408f30();
    v33 = __errno_location();
    if (v32 == 0)
    {
        if (((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000)
        {
            v36 = (unsigned long long)(unsigned int)sub_4055d0();
            v37 = strlen(v36);
            rsp<8> = &(&v0)[-1 * (v37 + 24 & -0x10) + -8];
            v28 = &g_404d8e;
            v38 = memcpy(&(&v0)[-1 * (v37 + 24 & -0x10) + 15] & -0x10, v36, v37 + 1);
            rsp<8> = rsp<8> - 8;
            v27 = &g_404d99;
            free(v36);
            rsp<8> = rsp<8> - 8;
            v26 = &g_404da1;
            v39 = chdir((unsigned int)v30);
            if (v39 >= 0)
            {
                rsp<8> = rsp<8> - 8;
                v25 = &g_404dbf;
                v40 = __xstat(0x1, 0x411fe4, (unsigned int)&v1);
                if (v40 < 0)
                {
                    rsp<8> = rsp<8> - 8;
                    v24 = &g_404dd4;
                    v44 = (unsigned int)sub_408cc0();
                    rsp<8> = rsp<8> - 8;
                    v23 = &g_404de8;
                    v49 = *(v33);
                    v46 = 0;
                    rsp<8> = rsp<8> - 8;
                    v22 = &g_404dfd;
                    error(0x0, v49, (unsigned long long)dcgettext(0x0, 0x411fe8, 0x5));
                }
            }
        }
        else
        {
            *((uint128_t *)&v1) = v31->field_0;
            *((uint128_t *)&v2) = v31->field_10;
            *((int128_t *)&v3) = *((int128_t *)&v31->field_18);
            *((uint128_t *)&v4) = v31->field_20;
            *((uint128_t *)&v5) = v31->field_30;
            *((uint128_t *)&v6) = v31->field_40;
            *((uint128_t *)&v7) = v31->field_50;
            *((uint128_t *)&v8) = v31->field_60;
            *((uint128_t *)&v9) = v31->field_70;
            rsp<8> = stack_base + -352;
            v35 = chdir(v34);
        }
        if ((((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v39 < 0) && (v35 < 0 || ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000))
        {
            rsp<8> = rsp<8> - 8;
            v25 = &g_404fdb;
            v43 = (unsigned int)sub_408cc0();
            rsp<8> = rsp<8> - 8;
            v24 = &g_404fef;
            v45 = *(v33);
            v46 = 0;
            rsp<8> = rsp<8> - 8;
            v23 = &g_405004;
            error(0x0, v45, (unsigned long long)dcgettext(0x0, 0x411fc5, 0x5));
        }
        if ((((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v39 >= 0) && (v35 >= 0 || ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000))
        {
            if (((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v40 >= 0)
            {
                while (true)
                {
                    rsp<8> = rsp<8> - 8;
                    v24 = &g_404ecd;
                    v41 = __xstat(0x1, 0x411fe3, (unsigned int)&v10);
                    if (v41 >= 0)
                    {
                        if (*((long long *)&v10) == (long long)v1 && v11 != (long long)(&v1)[8])
                        {
                            rsp<8> = rsp<8> - 8;
                            v23 = &g_404e3a;
                            v42 = chdir(0x411fe3);
                            if (v42 >= 0)
                            {
                                v1 = *((int128_t *)&(&v11)[-1]);
                                *((int128_t *)&v2) = (int128_t)v12;
                                *((int128_t *)&v3) = (int128_t)v13;
                                *((int128_t *)&v4) = (int128_t)v14;
                                *((int128_t *)&v5) = (int128_t)v15;
                                *((int128_t *)&v6) = (int128_t)v16;
                                *((int128_t *)&v7) = (int128_t)v18;
                                *((int128_t *)&v8) = (int128_t)v20;
                                v9 = (int128_t)v22;
                            }
                            else
                            {
                                rsp<8> = rsp<8> - 8;
                                v22 = &g_40501f;
                                v48 = (unsigned int)sub_408cc0();
                            }
                        }
                        if (v11 == (long long)(&v1)[8] || *((long long *)&v10) != (long long)v1)
                        {
                            rsp<8> = rsp<8> - 8;
                            v23 = &g_404f15;
                            v46 = (unsigned int)sub_4097f0();
                        }
                    }
                    else
                    {
                        rsp<8> = rsp<8> - 8;
                        v23 = &g_404ee4;
                        v47 = (unsigned int)sub_408cc0();
                    }
                    if (v41 < 0 || v42 < 0 && *((long long *)&v10) == (long long)v1 && v11 != (long long)(&v1)[8])
                    {
                        rsp<8> = rsp<8> - 8;
                        v21 = &g_404ef8;
                        v50 = *(v33);
                        v46 = 0;
                        rsp<8> = rsp<8> - 8;
                        v20 = &g_404f0d;
                        error(0x0, v50, (unsigned long long)dcgettext(0x0, v50, 0x5));
                    }
                }
            }
            v51 = *(v33);
            rsp<8> = rsp<8> - 8;
            v19 = &g_404f28;
            v52 = sub_408f80();
            if (v52 == 0)
            {
                rsp<8> = rsp<8> - 8;
                v18 = &g_404f3c;
                sub_408fa0();
                *(v33) = v51;
            }
            else
            {
                rsp<8> = rsp<8> - 8;
                v18 = &g_405079;
                v54 = *(v33);
                rsp<8> = rsp<8> - 8;
                v17 = &g_40508c;
                error(0x1, v54, (unsigned long long)dcgettext(0x0, 0x412010, 0x5));
            }
        }
    }
    else
    {
        v46 = 0;
        error(0x0, *(v33), (unsigned long long)dcgettext(0x0, 0x411fa8, 0x5));
    }
    if (v52 == 0 || v32 != 0 || v35 < 0 && ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v39 < 0 && ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000)
    {
        v55 = v46;
        return v55;
    }
}

int sub_4095c0()
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
            sub_4097b0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_4132ab;
extern unsigned int g_4132af;
extern unsigned int g_4132bf;
extern unsigned int g_4132d6;
extern unsigned int g_413338;
extern unsigned int g_413408;
extern unsigned int g_413428;
extern unsigned int g_413450;
extern unsigned int g_413478;
extern unsigned int g_4134a8;

int sub_408fc0()
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
    dcgettext(0x0, 0x4132ab, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413338, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4132af, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4132bf, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4132d6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x413408, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x413428, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x413450, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x413478, 0x5);
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
        dcgettext(0x0, 0x4134a8, 0x5);
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

int sub_40adb0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40ad50();
}

int sub_403b9d()
{
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_409730()
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
        sub_4097b0(); /* do not return */
    }
}

int sub_405180()
{
}

int sub_4095b0()
{
}

int sub_40ae30()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40a780();
}

int sub_408be0()
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
    return sub_4086c0();
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

    v10 = sub_401d70();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6385200 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_4055f0()
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
    v5 = sub_4056b0();
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
    char padding_0[8];
    char field_8;
} struct_0;

int sub_40c380()
{
    char *v1;  // rbp
    struct_0 *v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int *v8;  // rbp

    v1 = getenv("TZ");
    if (v1 != 0)
    {
        if (v3->field_8 != 0)
        {
            v4 = strcmp(&v3[1], v1);
            if (v4 == 0)
            {
                return 1;
            }
        }
    }
    else
    {
        if (v3->field_8 == 0)
        {
            return 1;
        }
    }
    if (v1 == 0 && v3->field_8 != 0 || v3->field_8 == 0 && v1 != 0 || v1 != 0 && v4 != 0)
    {
        if (v4 != 0)
        {
            v6 = sub_40c0a0();
            if (v6 == 0)
            {
                v8 = __errno_location();
                if (v8 != 1)
                {
                    sub_40c0f0();
                }
                *(v8) = *(v8);
                return 0;
            }
        }
        if (v4 == 0 || v6 != 0)
        {
            v4 = (unsigned int)sub_40c170();
            return v7;
        }
    }
}

int sub_40d110()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp+0x8]
    unsigned int v5[8];  // rax
    unsigned long long v6;  // r9
    unsigned long long v8;  // rax

    v5 = v4;
    if (v4 != 0)
    {
        v3 = v5[0];
        v2 = v5[1];
        v1 = v5[1];
        v0 = v5[3 + 1];
        v8 = (unsigned int)sub_40cff0() + v6;
        if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>)))
        {
            return v8;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>) || v4 == 0)
    {
        if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>)))
        {
            return (9223372036854775805 < v6? v6 - 1 : 9223372036854775807);
        }
        else if (v6 < 9223372036854775810)
        {
            return v6 + 1;
        }
        return 0x8000000000000000;
    }
}

int sub_4089c2()
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

extern unsigned int g_41213d;
extern unsigned long long g_617470;
extern unsigned long long g_617478;

int sub_403f90()
{
    void tmp_1;  // tmp #1
    void tmp_15;  // tmp #15
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x50]
    unsigned long long|unsigned int v3;  // [bp-0x48]
    unsigned long v4;  // [bp-0x40]
    unsigned long long v6;  // rdx
    char *v8;  // rcx
    char *v11;  // rsi
    unsigned long long v12;  // rcx
    unsigned long|unsigned int v13;  // rbx
    unsigned long long v14;  // rax
    unsigned long long|char [2] v15;  // r15
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rax
    unsigned long v19;  // rax
    unsigned long long v20;  // rdx
    char v21;  // dl
    unsigned long long v22;  // rax
    unsigned int v23;  // eax
    unsigned long long v24;  // r13
    char *v25;  // rdx
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rcx
    char *v28;  // rdi
    unsigned long long v29;  // r13
    unsigned long|unsigned int v30;  // esi
    unsigned long long v31;  // rax
    char v32;  // al
    unsigned long v33;  // rax
    unsigned long long v34;  // r12
    unsigned long long v35;  // rax
    unsigned long v37;  // rcx
    unsigned long long v38;  // rbx

    v2 = v6;
    if (v15 != 0)
    {
        v15 = sub_40aed0();
        *((char *)(v28 + v11)) = 0;
        v12 = v15 - v28;
        if ((unsigned int)v15[1] - 48 > 9)
        {
            v13 = 9;
            if ((unsigned int)v15[-1 + 7] - 48 > 9)
            {
                v15 = v8;
                v16 = 1;
                v3 = 0;
                v17 = 1;
            }
        }
        else
        {
            v3 = v15 - v28;
            v14 = strtol(&v15[1], NULL, 0xa);
            v12 = v3;
            v13 = (2147483647 < v14? 2147483647 : v14);
            if (!((unsigned int)(2147483647 < v14? 2147483647 : v14) != 0))
            {
                v3 = 0;
            }
            else if ((unsigned int)v15[-1 + 7] - 48 > 9)
            {
                v3 = 0;
            }
        }
        if ((unsigned int)v15[1] - 48 <= 9 && (unsigned int)(2147483647 < v14? 2147483647 : v14) != 0 || (unsigned int)v15[-1 + 7] - 48 <= 9 && (unsigned int)v15[1] - 48 > 9)
        {
            if ((unsigned int)v15[-1 + 7] - 48 <= 9 || (unsigned int)v15[1] - 48 > 9)
            {
                v15[0] = 0;
                do
                {
                    v15 = &v15[-1 + 7];
                }
                while ((unsigned int)v15[-1 + 7] - 48 <= 9);
                v4 = v12;
                v18 = strtol(v15, NULL, 0xa);
                tmp_1 = v18;
                tmp_15 = 2147483647 < v18;
                v19 = (2147483647 < v18? 2147483647 : v18);
                v3 = (tmp_15? 2147483647 : tmp_1);
                if ((unsigned int)(tmp_15? 2147483647 : tmp_1) > 1)
                {
                    v20 = 0;
                    v21 = v15[0] == 48;
                    v15 = &v15[rdx<8>];
                    if (v19 > g_617470)
                    {
                        v22 = v19 - g_617470;
                        if ((unsigned int)v22 > 1)
                        {
                            v23 = v22 - v13;
                            if (v23 > 1)
                            {
                                if (v28 < v15)
                                {
                                    v25 = v28;
                                    v26 = 0;
                                    do
                                    {
                                        v27 = *(v25);
                                        if (*(v25) != 45)
                                        {
                                            *((unsigned long long *)&v28) = v27;
                                            v28 = &v28[1];
                                        }
                                        else
                                        {
                                            v26 = 1;
                                        }
                                        v25 = &v25[1];
                                    }
                                    while (v15 != v25);
                                    v24 = v28 - v28;
                                }
                                else
                                {
                                    v24 = 0;
                                }
                                if (v26 == 0 || v28 >= v15)
                                {
                                    v29 = v24 + __sprintf_chk(v28, 0x1, 0xffffffff, 0x41213d);
                                }
                            }
                        }
                    }
                }
            }
            if ((unsigned int)v13 > 8)
            {
                v16 = 1;
                v17 = 1;
            }
        }
    }
    else
    {
        v3 = 0;
        v13 = 0;
    }
    if (v15 == 0 || (unsigned int)v15[1] - 48 <= 9 && (unsigned int)(2147483647 < v14? 2147483647 : v14) == 0 || (unsigned int)v15[1] - 48 <= 9 && (unsigned int)v13 <= 8 || (unsigned int)v13 <= 8 && (unsigned int)v15[-1 + 7] - 48 <= 9)
    {
        v30 = v13;
        v17 = 1;
        do
        {
            v30 = (unsigned long long)v30 + 1;
            v17 = (unsigned int)v17 * 10;
        }
        while ((unsigned int)v30 != 9);
        v16 = v17;
        v15 = (v15 >> 63 CONCAT v15) % v17;
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>) && v15 != 0)
    {
        v31 = 0;
        v32 = (v15 >> 63 CONCAT v15) % v16 >> 64 != 0;
        v33 = (char)((unsigned int)(char [2])(0x3b9aca00 % (unsigned int)v17 + -0x1 * v15) != rax<8>);
        v34 = v6 + v33;
        v2 = v34;
        if (v2 + v33 == 0)
        {
            sub_402980();
            v35 = __printf_chk(0x1, v28);
        }
    }
    if (v15 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>)) || v2 + v33 != 0)
    {
        v35 = sub_402af0();
    }
    if (v13 != 0)
    {
        v37 = (unsigned int)(v13 <= 9? (unsigned int)v13 : 9);
        v38 = v13 - ((unsigned int)v13 <= 9? (unsigned int)v13 : 9);
        v1 = 0;
        v0 = v38;
        __printf_chk(0x1, "%s%.*d%-*.*d", (unsigned int)g_617478, v37);
        v35 = v0;
    }
    return v35;
}

int sub_40f3a0() { crash_skku;
}
extern char g_6175a0;

int sub_408920()
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
    v3 = (v2 == 0? &g_6175a0 : v2);
    *((int *)(tmp_11? &g_6175a0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6175a0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6175a0;
        abort(); /* do not return */
    }
}

int sub_408cc0()
{
}

int sub_40d730()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

int sub_408f30()
{
    struct_0 *v1;  // rdi
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rax

    v1->field_8 = 0;
    v2 = (unsigned int)sub_40c6a0();
    v1->field_0 = v2;
    if ((unsigned int)v2 >= 0)
    {
        return 0;
    }
    v3 = sub_409bb0();
    v1->field_8 = v3;
    return 0 - (unsigned int)(char)(v3 == 0);
}

int sub_402980()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned long v9;  // r13
    unsigned long v10;  // r12
    unsigned long v11;  // rdi
    unsigned long v12;  // rbx
    unsigned long v13;  // rcx
    unsigned long v14;  // rsi
    unsigned int v15;  // r14d
    unsigned long long v16;  // rbp
    char *v17;  // rax
    char *v18;  // rdx
    char *|unsigned long long v20;  // r12
    char *v21;  // rbx
    unsigned long long v22;  // r13

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v20 = v11 + 1;
    v1 = v12;
    v21 = v11 + 1;
    v0 = v13;
    if (v11 + 1 < v11 + v14)
    {
        while (true)
        {
            v15 = *(v21);
            v16 = *(v21);
            v17 = strchr("'-+ #0I", *(v21));
            if (v17 != 0)
            {
                if (strchr(v18, v15) != 0)
                {
                    *((unsigned long long *)&v20) = v16;
                    v20 = &v20[1];
                }
                v21 = &v21[1];
                if (v11 + v14 <= v21)
                {
                    break;
                }
            }
            else
            {
                if (v21 >= v11 + v14)
                {
                    break;
                }
                v22 = v11 + v14 + -0x1 * v21;
                while (true)
                {
                    *((unsigned long long *)(v20 + v17)) = v16;
                    v17 = &v17[1];
                    if (v22 == v17)
                    {
                        break;
                    }
                    v16 = (char)*((char *)(v21 + v17));
                }
            }
        }
    }
}

int sub_4055d0()
{
    unsigned long long v1;  // rax

    v1 = sub_405650();
    if (v1 != 0)
    {
        return v1;
    }
    sub_4097b0(); /* do not return */
}

int sub_408d90()
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
    return sub_4086c0();
}

int sub_40c430()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax

    if (v1 == 1)
    {
        return v2;
    }
}

int sub_405ab0()
{
    unsigned long v1;  // rdx
    char *v2;  // rbx
    char *v4;  // rdi
    char *v5;  // rsi

    if (v1 != 0)
    {
        v2 = v1 - 1;
        do
        {
            *((char *)(v4 + v2)) = *((int *)(*((long long *)(unsigned long long)__ctype_toupper_loc()) + (unsigned long long)(char)*((char *)(v5 + v2)) * 4));
            v2 = &v2[-1];
        }
        while (v2 != -1);
    }
    return v4;
}

int sub_4089eb()
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
    v7 = (unsigned int)sub_407490();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_409560();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_407490();
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

int sub_4054c0()
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
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[20];
    unsigned long long field_30;
} struct_0;

int sub_405740()
{
}

int sub_408ec0()
{
}

int sub_40ccc0()
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

int sub_403bdd()
{
}

int sub_409820()
{
    unsigned int v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    unsigned long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long v4;  // [bp-0xb0]
    unsigned long v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0xa0]
    unsigned long v7;  // [bp-0x98]
    unsigned long v8;  // [bp-0x90]
    void v9;  // [bp-0x88]
    void v10;  // [bp-0x78]
    void v11;  // [bp-0x68]
    void v12;  // [bp-0x58]
    void v13;  // [bp-0x48]
    void v14;  // [bp-0x38]
    void v15;  // [bp-0x28]
    void v16;  // [bp-0x18]
    unsigned long v18;  // rsi
    unsigned long v19;  // rdx
    unsigned long v20;  // rcx
    unsigned long v21;  // r8
    unsigned long v22;  // r9
    char v23;  // al
    void v24;  // xmm0
    void v25;  // xmm1
    void v26;  // xmm2
    void v27;  // xmm3
    void v28;  // xmm4
    void v29;  // xmm5
    void v30;  // xmm6
    void v31;  // xmm7

    v4 = v18;
    v5 = v19;
    v6 = v20;
    v7 = v21;
    v8 = v22;
    if (v23 != 0)
    {
        v9 = v24;
        v10 = v25;
        v11 = v26;
        v12 = v27;
        v13 = v28;
        v14 = v29;
        v15 = v30;
        v16 = v31;
    }
    v0 = 8;
    v2 = stack_base + 8;
    v1 = 48;
    v3 = stack_base + -184;
    return sub_40ce40();
}

int sub_408b90()
{
}

int sub_402a70()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_402980();
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_617378;
extern uint128_t g_617380;
extern unsigned int g_617390;
extern int512_t g_6174a0;

int sub_4086c0()
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
    v17 = g_617378;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_617390 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_617378 != 6386560)
            {
                v16 = sub_4095c0();
                g_617378 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4095c0();
                v17 = v15;
                g_617378 = v15;
                *(v15) = g_617380;
            }
            memset(&v17[(long long)(int)g_617390], 0x0, (int)((unsigned int)v13 + 1 - g_617390) * 16);
            g_617390 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4097b0(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_617390 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_407490();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6386848)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_409560();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_407490();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern int512_t g_6175a0;

int sub_408950()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6175a0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_407490();
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

extern unsigned int g_4106a0;
extern int512_t g_414a53;
extern unsigned int g_617450;
extern unsigned long long stdout[7];

int sub_402b30()
{
    unsigned long v1;  // rdx
    char *v10;  // rax
    unsigned long long *v11;  // r9

    switch ((unsigned int)(v1 - 83))
    {
    case 1:
        if (...)
        {
            __sprintf_chk(0x617450, 0x1, 0x1d, 0x4106a0);
        }
        sub_402a70();
    case 14:
        sub_402af0();
        break;
    case 15:
        sub_402af0();
        break;
    case 17:
        sub_402af0();
        break;
    case 19:
        sub_402af0();
        break;
    case 22:
        sub_402a30();
        break;
    case 25:
        sub_402ab0();
        break;
    case 27:
        sub_402a70();
        break;
    case 32:
        sub_402ab0();
    case 33:
        sub_402a30();
        break;
    default:
        v10 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v10) = 63;
        }
        else
        {
            __overflow();
        }
    }
    return 0;
}

int sub_408d50()
{
}

int sub_403bad()
{
}

int sub_408ed0()
{
}

int sub_408bc0()
{
}

int sub_4096c0() { crash_skku;
}
extern unsigned int g_411020;
extern unsigned int g_4110d0;
extern unsigned int g_411150;
extern unsigned int g_411180;
extern unsigned int g_4111c0;

int sub_403e80()
{
    char v1;  // dil
    char v2;  // sil
    char v3;  // sil
    unsigned long long v6;  // rbp

    if (v1 != 0)
    {
        if (v3 == 0)
        {
            dcgettext(0x0, 0x411020, 0x5);
        }
    }
    else
    {
        if (v2 == 0)
        {
            dcgettext(0x0, 0x4110d0, 0x5);
            dcgettext(0x0, 0x411150, 0x5);
            free((unsigned long long)(unsigned int)sub_409790());
            dcgettext(0x0, 0x411180, 0x5);
            free((unsigned long long)(unsigned int)sub_409820());
            dcgettext(0x0, 0x4111c0, 0x5);
            v6 = (unsigned int)sub_409820();
            free((unsigned long long)(unsigned int)sub_409820());
            return stack_base + 0;
        }
    }
}

extern unsigned int g_617394;
extern unsigned int g_617398;
extern unsigned int g_61739c;
extern unsigned int g_6175e0;
extern unsigned int g_6175e4;
extern unsigned int g_6175e8;
extern unsigned long long g_6175f0;
extern unsigned long long g_617638;

int sub_40ad50()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6175e0 = g_61739c;
    g_6175e4 = g_617398;
    v1 = (unsigned int)v2;
    v0 = &g_6175e0;
    g_61739c = g_6175e0;
    g_617638 = g_6175f0;
    g_617394 = g_6175e8;
    return sub_40a780();
}

int sub_40c450()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // r13
    unsigned long v3;  // rsi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v2 = (unsigned int)sub_40c380();
        if (v2 != 0)
        {
            v5 = localtime_r(v3, v4);
            if (v5 != 0)
            {
                v6 = sub_40c200();
                if (v6 != 0)
                {
                    if (v2 != 1)
                    {
                        v8 = sub_40c120();
                    }
                    if (v2 == 1 || v8 != 0)
                    {
                        return v4;
                    }
                }
            }
            if ((v5 == 0 || v6 == 0) && v2 != 1)
            {
                sub_40c120();
            }
        }
        if (v5 == 0 || v2 == 0 || v6 == 0 || v8 == 0 && v2 != 1)
        {
            return 0;
        }
    }
}

int sub_405190()
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

int sub_408ba0()
{
}

