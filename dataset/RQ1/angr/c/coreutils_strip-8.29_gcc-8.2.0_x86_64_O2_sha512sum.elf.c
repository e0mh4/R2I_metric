#include "decompile_angr.h"
int sub_409d20()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409b20();
}

int sub_409290()
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
    return sub_408d00();
}

int sub_4094c0()
{
}

int sub_4091e0()
{
}

int sub_409bf0() { crash_skku;
}
extern unsigned int g_40b5db;
extern unsigned int g_40b700;
extern unsigned int g_40b728;
extern unsigned int g_40b770;
extern unsigned int g_40b7a8;
extern unsigned int g_40b7d8;
extern unsigned int g_40b820;
extern unsigned int g_40b858;
extern unsigned int g_40b890;
extern unsigned int g_40ba48;
extern unsigned int g_40ba78;
extern unsigned int g_40bab0;
extern unsigned int g_40bc08;
extern unsigned int g_40bc50;
extern unsigned int g_40bc70;
extern unsigned long long stdout;

int sub_402c90()
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
    unsigned long long *v31;  // rax
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
        dcgettext(0x0, 0x40b700, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b728, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b770, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b7a8, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b7d8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b820, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b858, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b890, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ba48, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ba78, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bab0, 0x5));
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
            v33 = "sha512sum";
            v34 = 10;
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
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b5db, 0x5));
            v42 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b5db, 0x5));
            v41 = setlocale(0x5, 0x0);
            if (v41 != 0)
            {
                v43 = strncmp(v41, "en_", 0x3);
            }
            if (v43 == 0 || v41 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bc50, 0x5));
            }
        }
        if ((v3 == 0 || v42 != 0) && (v3 == 0 || strncmp(v42, "en_", 0x3) != 0) && (v43 != 0 || v3 != 0) && (v41 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bc08, 0x5));
        }
        if (v3 != 0 || v43 != 0 && v41 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bc50, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bc70, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned long long g_40d547;

int sub_40ade0()
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
        v5 = &g_40d547;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40aec0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_409d50()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40d547;
extern char g_60f498[2];

int sub_40af20()
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

    v9 = g_60f498;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40d547 : (unsigned long long)nl_langinfo(0xe));
    if (g_60f498 == 0)
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
            v9 = &g_40d547;
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
                                    v9 = &g_40d547;
                                    v10 = (tmp_10 == 0? &g_40d547 : tmp_10);
                                    free(NULL);
                                    sub_409db0();
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
                            v10 = (tmp_10 == 0? &g_40d547 : tmp_10);
                            sub_409db0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_40d547;
                    }
                    else if (((unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0 || ((unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40d547;
            free(v17);
        }
        *((char *[2])&g_60f498[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40d547 : tmp_10), v9);
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

int sub_409510()
{
}

int sub_409002()
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

int sub_409100()
{
}

int sub_409550()
{
}

int sub_409b70()
{
}

extern uint128_t g_60f420;
extern uint128_t g_60f430;
extern uint128_t g_60f440;
extern unsigned long long g_60f450;

int sub_409440()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60f420;
    *((uint128_t *)&v1) = g_60f430;
    *((uint128_t *)&v2) = g_60f440;
    v4 = g_60f450;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_408d00();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

typedef struct struct_3 {
    char padding_0[4243616];
    char field_40c0a0;
} struct_3;

extern unsigned int g_40b5f6;
extern unsigned int g_40b632;
extern unsigned int g_40b641;
extern unsigned int g_40b67b;
extern unsigned int g_40b68a;
extern unsigned int g_40bca8;
extern unsigned int g_40bf18;
extern unsigned int g_40bf48;
extern unsigned int g_40bf80;
extern unsigned int g_40bfb0;
extern unsigned int g_40bfe0;
extern unsigned int g_40c010;
extern unsigned int g_40c040;
extern unsigned int g_40c070;
extern unsigned int g_40d547;
extern unsigned int g_60f210;
extern unsigned int g_60f29c;
extern char g_60f2d8;
extern char g_60f2d9;
extern char g_60f2da;
extern char g_60f2db;
extern char g_60f2dc;
extern unsigned long long g_60f2e0;
extern unsigned long long g_60f2e8;
extern char g_60f2f0;
extern unsigned long long stdin;
extern unsigned long long stdout[7];

int main()
{
    unsigned long v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x150]
    unsigned long long *v2;  // [bp-0x148]
    unsigned long|char * v3;  // [bp-0x140]
    unsigned long long v4;  // [bp-0x135]
    unsigned int v5;  // [bp-0x134]
    unsigned long|unsigned long long v6;  // [bp-0x130]
    unsigned long|char *|unsigned long long|char v7;  // [bp-0x128]
    unsigned long|unsigned long long v8;  // [bp-0x120]
    char *|unsigned long long v9;  // [bp-0x118]
    unsigned long long *v10;  // [bp-0x110]
    unsigned long|unsigned long long v11;  // [bp-0x108]
    char v12;  // [bp-0x100]
    char v13;  // [bp-0xff]
    unsigned long long v14;  // [bp-0xfe]
    char v15;  // [bp-0xfd]
    unsigned int v16;  // [bp-0xfc]
    char v17;  // [bp-0xe9]
    unsigned long long v18;  // [bp-0xe8]
    unsigned long long v19;  // [bp-0xe0]
    char v20;  // [bp-0xd8]
    char v21;  // [bp-0x88]
    unsigned long long v23;  // r14
    unsigned long long v24;  // r13
    unsigned long long v25;  // rdi
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rbx
    unsigned long long v32;  // rax
    unsigned long|unsigned int v33;  // r12
    unsigned long v35;  // rsi
    char *v38;  // rdi
    unsigned long long v40;  // rax
    void *v41;  // rbp
    char *v43;  // rax
    unsigned long long v44;  // rcx
    char *v45;  // r8
    unsigned long long v46;  // rdx
    unsigned long long v47;  // r10
    char *v48;  // rdi
    char *v49;  // rsi
    unsigned long long v50;  // cc_dep1
    unsigned long long v51;  // cc_dep2
    unsigned long v52;  // d
    unsigned long long v53;  // cc_dep1
    unsigned long long v54;  // rax
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rax
    char v57;  // al
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // r8
    unsigned long long v61;  // rax
    char *|unsigned long long v62;  // r15
    unsigned long long v63;  // r11
    unsigned long long v64;  // rdx
    unsigned long long v65;  // rax
    unsigned long long v66;  // rsi
    unsigned long long v67;  // rdx
    unsigned long long v68;  // rax
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rax
    unsigned long long v71;  // al
    char *|unsigned long long v72;  // r13
    char *v73;  // rax
    unsigned long long v74;  // rcx
    char *v75;  // rdi
    char *v76;  // rsi
    unsigned long long v77;  // cc_dep1
    unsigned long long v78;  // cc_dep2
    unsigned long long v79;  // cc_dep1
    unsigned long long v80;  // r12
    unsigned long|unsigned int|char v81;  // r14
    unsigned long long v82;  // r15
    char *v84;  // rax
    unsigned int *v85;  // rdi
    struct_3 *v87;  // rsi
    char v88;  // sil
    unsigned long v89;  // rsi
    char *v91;  // rax
    unsigned long long v94;  // r14
    unsigned long long v95;  // rbx
    char *v96;  // rax
    char *v97;  // rax
    unsigned long|unsigned int v98;  // ebx
    unsigned long long v99;  // rax
    unsigned long long v100;  // rbx
    unsigned long long v103;  // rax
    unsigned long long v106;  // rbx
    unsigned long long v107;  // rbp
    unsigned long long v108;  // rbp
    char *v110;  // rax
    char *v111;  // rax
    char *v113;  // rax
    unsigned long long v114;  // rbp
    unsigned long long v115;  // rbx

    v23 = 0;
    v24 = 0;
    v33 = -18446744069414584321;
    v26 = v25;
    v28 = v27;
    sub_407930();
    setlocale(0x6, 0x40d547);
    bindtextdomain(0x40b5f6, 0x40bca8);
    textdomain(0x40b5f6);
    sub_40b500();
    setvbuf(stdout, NULL, 0x1, 0x0);
    while (true)
    {
        v32 = sub_40ad60();
        if ((unsigned int)v32 == -1)
        {
            g_60f2e8 = 130;
            g_60f2e0 = 128;
            if ((unsigned int)v33 == 0 && v23 != 0)
            {
                v35 = "--tag does not support --text mode";
            }
            if (v23 == 0 || (unsigned int)v33 != 0)
            {
                if (v24 != 0)
                {
                    v35 = "the --tag option is meaningless when verifying checksums";
                }
                if (v24 == 0 || v23 == 0)
                {
                    v35 = "the --binary and --text options are meaningless when verifying checksums";
                    if (((char)((unsigned long long)!((unsigned int)r12<8>) >> 31) & v24) == 0)
                    {
                        if (g_60f2da != 0)
                        {
                            v35 = "the --ignore-missing option is meaningful only when verifying checksums";
                        }
                        else if (g_60f2dc != 0)
                        {
                            v35 = "the --status option is meaningful only when verifying checksums";
                        }
                        else if (g_60f2db != 0)
                        {
                            v35 = "the --warn option is meaningful only when verifying checksums";
                        }
                        else if (g_60f2d9 == 1)
                        {
                            v35 = "the --quiet option is meaningful only when verifying checksums";
                        }
                    }
                }
            }
        }
        else if ((unsigned int)v32 != 119)
        {
            if (v32 > 119)
            {
                if ((unsigned int)v32 == 130)
                {
                    g_60f2dc = 0;
                    g_60f2db = 0;
                    g_60f2d9 = 1;
                }
                else if (v32 <= 130)
                {
                    if ((unsigned int)v32 == 128)
                    {
                        g_60f2da = 1;
                    }
                    if ((unsigned int)v32 == 129)
                    {
                        g_60f2dc = 1;
                        g_60f2db = 0;
                        g_60f2d9 = 0;
                    }
                }
                else
                {
                    if ((unsigned int)v32 == 131)
                    {
                        g_60f2d8 = 1;
                    }
                    if ((unsigned int)v32 == 132)
                    {
                        v23 = 1;
                    }
                }
            }
            else
            {
                if ((unsigned int)v32 != 98)
                {
                    if (v32 > 98)
                    {
                        if ((unsigned int)v32 == 99)
                        {
                            v24 = 1;
                        }
                        if ((unsigned int)v32 == 116)
                        {
                            v33 = 0;
                        }
                    }
                    else
                    {
                        if ((unsigned int)v32 == -131)
                        {
                            v1 = 0;
                            v0 = "David Madore";
                            sub_4099e0();
                            exit(0x0); /* do not return */
                        }
                        if ((unsigned int)v32 == -130)
                        {
                            sub_402c90(); /* do not return */
                        }
                    }
                }
            }
            if (((unsigned int)v32 == 132 || v32 <= 119) && ((unsigned int)v32 == 98 || v32 > 119) && (v32 <= 119 || (unsigned int)v32 != 131) && (v32 <= 119 || v32 > 130) && (v32 <= 119 || (unsigned int)v32 != 130))
            {
                v33 = 1;
            }
        }
        if ((unsigned int)v32 == 119)
        {
            g_60f2dc = 0;
            g_60f2db = 1;
            g_60f2d9 = 0;
        }
        if (...)
        {
            v35 = "the --strict option is meaningful only when verifying checksums";
        }
        if (...)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v35, 0x5));
        }
        if (...)
        {
            if ((unsigned int)v33 == -1)
            {
                v33 = 0;
            }
            v10 = v28 + v26 * 8;
            if (g_60f29c == (unsigned int)v26)
            {
                *(v10) = "-";
                v10 = &v10[1];
            }
            v2 = v28 + (int)g_60f29c * 8;
            if (v10 > v2)
            {
                v12 = 1;
                v4 = v24;
                v14 = v23;
                v16 = (0 - (unsigned int)(char)(v33 < 1) & -10) + 42;
                v15 = (0 - (unsigned int)(char)(v33 < 1) & -10) + 42;
                do
                {
                    v38 = *(v2);
                    v3 = *(v2);
                    if ((char)v4 != 0)
                    {
                        v5 = strcmp(v38, "-");
                        if (v5 == 0)
                        {
                            g_60f2f0 = 1;
                            v41 = stdin;
                            v3 = dcgettext(0x0, 0x40b632, 0x5);
                        }
                        else
                        {
                            v41 = (unsigned long long)(unsigned int)sub_407890();
                        }
                        if (v5 == 0 || v41 != 0)
                        {
                            v13 = 0;
                            v94 = 0;
                            v80 = 0;
                            v95 = 1;
                            v18 = 0;
                            v19 = 0;
                            v11 = 0;
                            v6 = 0;
                            while (true)
                            {
                                v43 = __getdelim(&v18, &v19, 0xa, v41);
                                if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                {
                                    v44 = (char)*((char *)v18);
                                    if (*((char *)v18) != 35)
                                    {
                                        v45 = v43;
                                        if (v43[-1] == 10)
                                        {
                                            v45 = &v45[-1];
                                            *(v45) = 0;
                                            v44 = (char)*((char *)v18);
                                        }
                                        v46 = 0;
                                        do
                                        {
                                            v46 += 1;
                                            v44 = (char)*((char *)(0 + v46));
                                        }
                                        while (v44 == 9);
                                        v47 = 0;
                                        if (v44 == 92)
                                        {
                                            v47 = (char)v4;
                                            v46 += 1;
                                        }
                                        v72 = 0 + v46;
                                        v48 = "SHA512";
                                        v74 = 6;
                                        v49 = 0 + v46;
                                        while (v74 != 0)
                                        {
                                            v74 -= 1;
                                            v50 = *(v49);
                                            v51 = *(v48);
                                            v48 = &v48[v52];
                                            v49 = &v49[v52];
                                            break;
                                        }
                                        v53 = (v50 > v51) - 0 - (v50 < v51);
                                        if ((char)v53 == 0)
                                        {
                                            v54 = (char)*((char *)(0 + v46 + 6));
                                            v55 = v46 + 6;
                                            if (*((char *)(0 + v46 + 6)) == 32)
                                            {
                                                v54 = (char)*((char *)(0 + v46 + 7));
                                                v55 = v46 + 7;
                                            }
                                            if (v54 == 40)
                                            {
                                                v74 = v55 + 1;
                                                v60 = &v45[-1 * v74];
                                                if (v60 != v74)
                                                {
                                                    v62 = 0 + v74;
                                                    v63 = v60 - 1;
                                                    if (v60 != 1)
                                                    {
                                                        if (*((char *)(v62 + v60 - 1)) != 41)
                                                        {
                                                            do
                                                            {
                                                                v63 -= 1;
                                                            }
                                                            while (*((char *)(v62 + v63)) != 41 && v63 != 1);
                                                            if (v63 != 1)
                                                            {
                                                                v67 = v62 + v63;
                                                            }
                                                        }
                                                        if (*((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41)
                                                        {
                                                            v67 = v62 + v63;
                                                        }
                                                    }
                                                    if (v60 == 1 && *((char *)v62) == 41)
                                                    {
                                                        v67 = v62;
                                                        v63 = 0;
                                                    }
                                                    if (v47 != 0 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41))
                                                    {
                                                        v7 = v67;
                                                        v68 = sub_4029b0();
                                                        v67 = v7;
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v56 = 0;
                                            v57 = *(v72) == 92;
                                            v58 = rax<8> + g_60f2e8;
                                            if (&v45[-1 * v46] >= v58)
                                            {
                                                v59 = v46 + g_60f2e0;
                                                if (*(v9) == 9 || *(v9) == 32)
                                                {
                                                    *(v9) = 0;
                                                    v9 = v59;
                                                    v8 = v47;
                                                    v7 = v45;
                                                    v61 = sub_402950();
                                                    if (v61 != 0)
                                                    {
                                                        v64 = v9;
                                                        v65 = v9 + 1;
                                                        if (&v7[-1 * v9 + -1] != 1)
                                                        {
                                                            v66 = (char)*((char *)(0 + v64 + 1));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 != 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] == 1) && g_60f210 != 0)
                                {
                                    g_60f210 = 1;
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 == 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) == 32) && g_60f210 != 1)
                                {
                                    g_60f210 = 0;
                                    v65 = v64 + 2;
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 != 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] == 1) && g_60f210 != 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 == 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) == 32)
                                {
                                    v62 = 0 + v65;
                                    if ((char)v8 != 0)
                                    {
                                        v71 = (char)(sub_4029b0() != 0);
                                    }
                                }
                                if (v54 == 40 && (char)v53 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v60 != v74 && *((char *)v18) != 35 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41) && v47 != 0 && v68 != 0 || v54 == 40 && (char)v53 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v60 != v74 && *((char *)v18) != 35 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41) && v47 == 0)
                                {
                                    *((char *)v67) = 0;
                                    v69 = (char)*((char *)(v62 + v63 + 1));
                                    v70 = v63 + 1;
                                    if (*((char *)(v62 + v63 + 1)) == 9 || v69 == 32)
                                    {
                                        do
                                        {
                                            v70 += 1;
                                            v69 = (char)*((char *)(v62 + v70));
                                        }
                                        while (v69 == 9);
                                    }
                                    if (v69 == 61)
                                    {
                                        v72 = v62 + v70 + 1;
                                        v64 = (char)*((char *)(v62 + v70 + 1));
                                        if (*((char *)(v62 + v70 + 1)) == 32 || v64 == 9)
                                        {
                                            v73 = v62 + v70 + 2;
                                            do
                                            {
                                                v64 = *(v73);
                                                v72 = v73;
                                                v73 = &v73[1];
                                            }
                                            while (v64 == 9);
                                        }
                                        v71 = sub_402950();
                                    }
                                }
                                if (...)
                                {
                                    v75 = "-";
                                    v74 = 2;
                                    v76 = v62;
                                    while (v74 != 0)
                                    {
                                        v74 -= 1;
                                        v77 = *(v76);
                                        v78 = *(v75);
                                        v75 = &v75[v52];
                                        v76 = &v76[v52];
                                        break;
                                    }
                                    v79 = (v77 > v78) - 0 - (v77 < v78);
                                }
                                if (...)
                                {
                                    v80 = 1;
                                    if (g_60f2db != 0)
                                    {
                                        v82 = (unsigned int)sub_4093d0();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bf18, 0x5));
                                    }
                                }
                                if (...)
                                {
                                    v81 = 0;
                                    if (g_60f2dc == 0)
                                    {
                                        v81 = 0;
                                        v81 = strchr(v62, 0xa) != 0;
                                    }
                                    if ((char)v7 == 0)
                                    {
                                        v6 += 1;
                                        if (g_60f2dc == 0)
                                        {
                                            if (v81 != 0)
                                            {
                                                v84 = stdout[5];
                                                if (stdout[5] < stdout[6])
                                                {
                                                    stdout[5] = stdout[5] + 1;
                                                    *(v84) = 92;
                                                }
                                                else
                                                {
                                                    __overflow();
                                                }
                                            }
                                            sub_402a40();
                                            v89 = "FAILED open or read";
                                        }
                                    }
                                    else if (g_60f2da == 0 || v17 == 0)
                                    {
                                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                        {
                                            v8 = g_60f2e0 >> 1;
                                            *((unsigned long long *)&v7) = (unsigned int)sub_402af0();
                                            v85 = *((long long *)(unsigned long long)__ctype_tolower_loc());
                                            while (true)
                                            {
                                                v87 = (unsigned long long)v21;
                                                v88 = (unsigned long long)v21 >> 4;
                                                if (v85[(unsigned long long)v72[2 * v64]] == (char)*((char *)(4243616 + (unsigned long long)((unsigned int)rsi<8> & 15))) && v85[(unsigned long long)v72[1 + 2 * v64]] == (char)*((char *)(4243616 + (unsigned long long)(v21 & 15))))
                                                {
                                                    v64 += 1;
                                                    v64 = v8;
                                                }
                                                if (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)(v21 & 15))))
                                                {
                                                    v11 += 1;
                                                    break;
                                                    if (g_60f2dc != 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)(v21 & 15))))
                                            {
                                                v94 = (char)v4;
                                            }
                                            else if (g_60f2dc == 0 && (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)(v21 & 15)))))
                                            {
                                                v91 = stdout[5];
                                            }
                                            else if (v8 == v64 && v85[(unsigned long long)v72[2 * v64]] == (char)*((char *)(4243616 + (unsigned long long)((unsigned int)rsi<8> & 15))) && v85[(unsigned long long)v72[1 + 2 * v64]] == (char)*((char *)(4243616 + (unsigned long long)(v21 & 15))))
                                            {
                                                v13 = g_60f2dc;
                                            }
                                            else if (g_60f2dc == 0 && (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4243616 + (unsigned long long)(v21 & 15)))))
                                            {
                                                v8 = v64;
                                                v7 = v74;
                                                sub_402a40();
                                            }
                                        }
                                        else
                                        {
                                            v64 = 0;
                                        }
                                        if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0)
                                        {
                                            v13 = g_60f2dc;
                                            if (g_60f2dc == 0)
                                            {
                                                v13 = g_60f2d9;
                                                if (g_60f2d9 == 0)
                                                {
                                                    if (v81 != 0)
                                                    {
                                                        v13 = v7;
                                                    }
                                                    else
                                                    {
                                                        v7 = v7;
                                                        sub_402a40();
                                                        v13 = v7;
                                                    }
                                                }
                                            }
                                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || g_60f2dc == 0 && g_60f2d9 == 0 && v81 != 0)
                                            {
                                                v91 = stdout[5];
                                                if (stdout[5] < stdout[6])
                                                {
                                                    stdout[5] = stdout[5] + 1;
                                                    *(v91) = 92;
                                                }
                                                else
                                                {
                                                    v8 = v64;
                                                    v7 = g_60f2e0 >> 1;
                                                    __overflow();
                                                    v74 = v7;
                                                    v64 = v8;
                                                }
                                                v8 = v64;
                                                v7 = v74;
                                                sub_402a40();
                                                if (v7 != v8)
                                                {
                                                    v89 = "FAILED";
                                                }
                                            }
                                        }
                                    }
                                    if ((g_60f2dc == 0 && g_60f2d9 == 0 && v81 == 0 && (char)v7 != 0 && (g_60f2da == 0 || v17 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) || (char)v7 != 0 && (g_60f2da == 0 || v17 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60f2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60f2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 == v8) && g_60f2d9 == 0)
                                    {
                                        v89 = "OK";
                                    }
                                    if ((char)v7 == 0 && g_60f2dc == 0 || (g_60f2dc == 0 && g_60f2d9 == 0 && v81 == 0 && (char)v7 != 0 && (g_60f2da == 0 || v17 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) || (char)v7 != 0 && (g_60f2da == 0 || v17 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60f2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60f2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 == v8) && g_60f2d9 == 0 || (char)v7 != 0 && (g_60f2da == 0 || v17 == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60f2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60f2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 != v8)
                                    {
                                        __printf_chk(0x1, ": %s\n", dcgettext(0x0, v89, 0x5));
                                    }
                                    v94 = (char)v4;
                                }
                                if (...)
                                {
                                    free(v18);
                                    v98 = *((int *)v41) & 32;
                                    if (((char)*((int *)v41) & 32) == 0)
                                    {
                                        if (v5 != 0)
                                        {
                                            v99 = sub_409db0();
                                        }
                                        if (v5 == 0 || v99 == 0)
                                        {
                                            if (v94 != 0)
                                            {
                                                if (g_60f2dc == 0)
                                                {
                                                    if (v80 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40bfb0, 0x40bf80, v80, 0x5));
                                                    }
                                                    if (v6 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40c010, 0x40bfe0, v6, 0x5));
                                                    }
                                                    if (v11 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40c070, 0x40c040, v11, 0x5));
                                                    }
                                                    if (v13 == 0 && g_60f2da != 0)
                                                    {
                                                        v114 = (unsigned int)sub_4093d0();
                                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b68a, 0x5));
                                                    }
                                                }
                                                if (v11 == 0 && v6 == 0 && v13 != 0)
                                                {
                                                    v98 = (unsigned int)g_60f2d8 ^ 1 | v98;
                                                }
                                            }
                                            else
                                            {
                                                v107 = (unsigned int)sub_4093d0();
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bf48, 0x5));
                                            }
                                            v103 = v98 & 1;
                                        }
                                    }
                                    else
                                    {
                                        v100 = (unsigned int)sub_4093d0();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b67b, 0x5));
                                        v103 = 0;
                                    }
                                }
                                if (...)
                                {
                                    v95 += 1;
                                    v115 = (unsigned int)sub_4093d0();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40b641, 0x5));
                                }
                            }
                            if (...)
                            {
                                *((unsigned long long *)&v12) = v12 & v103;
                            }
                            else if (...)
                            {
                                v106 = (unsigned int)sub_4093d0();
                                error(0x0, *(__errno_location()), "%s");
                                v103 = 0;
                            }
                        }
                        v106 = (unsigned int)sub_4093d0();
                        error(0x0, *(__errno_location()), "%s");
                        v103 = 0;
                        *((unsigned long long *)&v12) = v12 & v103;
                    }
                    else if (sub_402af0() == 0)
                    {
                        v12 = 0;
                    }
                    else
                    {
                        v40 = strchr(v3, 0x5c);
                        if (strchr(v3, 0xa) != 0 || v40 != 0)
                        {
                            if ((char)v14 == 0)
                            {
                                v96 = stdout[5];
                                if (stdout[5] < stdout[6])
                                {
                                    stdout[5] = stdout[5] + 1;
                                    *(v96) = 92;
                                }
                                else
                                {
                                    __overflow();
                                }
                            }
                            else
                            {
                                v97 = stdout[5];
                                if (stdout[6] > stdout[5])
                                {
                                    stdout[5] = stdout[5] + 1;
                                    *(v97) = 92;
                                }
                                else
                                {
                                    __overflow();
                                }
                            }
                        }
                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60f2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                        {
                            v108 = 0;
                            while (true)
                            {
                                v108 += 1;
                                __printf_chk(0x1, "%02x", (unsigned int)v20);
                                if (g_60f2e0 >> 1 <= v108)
                                {
                                    break;
                                }
                            }
                        }
                        if ((char)v14 == 0)
                        {
                            v110 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *(v110) = 32;
                            }
                            else
                            {
                                __overflow();
                            }
                            v111 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *(v111) = v15;
                            }
                            else
                            {
                                __overflow();
                            }
                            sub_402a40();
                        }
                        else
                        {
                            fwrite_unlocked("SHA512", 0x1, 0x6, stdout);
                            fwrite_unlocked(" (", 0x1, 0x2, stdout);
                            sub_402a40();
                            fwrite_unlocked(") = ", 0x1, 0x4, stdout);
                        }
                        v113 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *(v113) = 10;
                        }
                        else
                        {
                            __overflow();
                        }
                    }
                    v2 = &v2[1];
                }
                while (v10 > v2);
            }
            else
            {
                v12 = 1;
            }
            if (g_60f2f0 != 0)
            {
                if ((char)(sub_409db0() + 1 == 0))
                {
                    break;
                }
            }
            return (unsigned int)v12 ^ 1;
        }
        if (...)
        {
            sub_402c90(); /* do not return */
        }
    }
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40b632, 0x5));
}

extern int512_t g_60f420;

int sub_408f40()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60f420 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60f420 : v1) + 4)) = v3;
    return v2;
}

int sub_4093a0()
{
}

int sub_4094e0()
{
}

int sub_4099e0()
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
        return sub_409580();
    }
}

int sub_40aec0()
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

int sub_409500()
{
}

int sub_40ad80()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40a710();
}

int sub_409b20()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_409d70(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_409d9c()
{
    abort(); /* do not return */
}

int sub_403240()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdi

    v1 = 0;
    do
    {
        *((long long *)(v2 + v1)) = (((((*((long long *)(v3 + v1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v3 + v1)) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((long long *)(v3 + v1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v3 + v1)) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | ((((*((long long *)(v3 + v1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v3 + v1)) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | ((*((long long *)(v3 + v1)) & -0xff00ff00ff0100) >> 8 | *((long long *)(v3 + v1)) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
        v1 += 8;
    }
    while (v1 != 64);
    return v2;
}

int sub_409530()
{
}

extern int512_t g_60f208;

int sub_40b500()
{
}

int sub_409220()
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
    return sub_408d00();
}

int sub_4031b0()
{
    unsigned long long v1[11];  // rdi

    v1[9] = 0;
    v1[0] = 14680500436340154072;
    v1[1] = 7105036623409894663;
    v1[2] = 10473403895298186519;
    v1[3] = 1526699215303891257;
    v1[4] = 7436329637833083697;
    v1[5] = 10282925794625328401;
    v1[6] = 15784041429090275239;
    v1[7] = 5167115440072839076;
    v1[8] = 0;
    v1[10] = 0;
    return 5167115440072839076;
}

int sub_409c80() { crash_skku;
}
int sub_409200()
{
}

extern unsigned int g_40d0d2;
extern unsigned int g_40d0fd;
extern unsigned int g_40d330;

int sub_409aa0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d0d2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d0fd, 0x5));
    dcgettext(0x0, 0x40d330, 0x5);
}

int sub_407860()
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

extern char g_60f2da;
extern char g_60f2f0;
extern unsigned long long stdin;

int sub_402af0()
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rdi
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long v6;  // d
    char *v7;  // rsi
    char *v8;  // rdi
    char *v9;  // rdx
    unsigned long long v10;  // cc_dep1
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // r12
    unsigned int *v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rbx
    unsigned long long v23;  // rax

    v1 = 2;
    v8 = "-";
    v7 = v2;
    while (v1 != 0)
    {
        v1 -= 1;
        v4 = *(v7);
        v5 = *(v8);
        v8 = &v8[v6];
        v7 = &v7[v6];
        break;
    }
    *(v9) = 0;
    v10 = (v4 > v5) - 0 - (v4 < v5);
    if ((char)v10 == 0)
    {
        v11 = stdin;
        g_60f2f0 = 1;
        sub_407860();
        v13 = sub_407510();
    }
    else
    {
        v11 = (unsigned int)sub_407890();
        if (v11 != 0)
        {
            sub_407860();
            v15 = sub_407510();
            if (v15 == 0)
            {
                v18 = sub_409db0();
                if (v18 != 0)
                {
                    v16 = 0;
                    v21 = (unsigned int)sub_4093d0();
                    error(0x0, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            v16 = g_60f2da;
            v17 = __errno_location();
            if (g_60f2da != 0 && *(v17) == 2)
            {
                *(v9) = 1;
            }
            if (g_60f2da == 0 || *(v17) != 2)
            {
                v16 = 0;
                sub_4093d0();
                error(0x0, *(v17), "%s");
            }
        }
    }
    if ((char)v10 == 0 || v11 != 0)
    {
        if (((char)v10 == 0 || v15 != 0) && (v13 != 0 || (char)v10 != 0))
        {
            v16 = 0;
            v20 = (unsigned int)sub_4093d0();
            error(0x0, *(__errno_location()), "%s");
            if (stdin != v11)
            {
                sub_409db0();
            }
        }
        if (((char)v10 == 0 || v15 == 0) && ((char)v10 == 0 || v18 == 0) && (v13 == 0 || (char)v10 != 0))
        {
            v16 = 1;
        }
    }
    v23 = v16;
    return v23;
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

int sub_409fb0()
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

extern unsigned long long __progname_full;
extern unsigned long long g_60f308;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_407930()
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
        g_60f308 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_4093d0()
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
    return sub_408d00();
}

extern unsigned int g_60f458;

int sub_409e30()
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
        if (g_60f458 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_409e30();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60f458 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_60f458 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_409e30();
        }
        if ((*(v12) == 22 || g_60f458 < 0) && (g_60f458 < 0 || (unsigned int)v15 < 0) && (g_60f458 < 0 || (unsigned int)v15 >= 0) && (g_60f458 == -1 || g_60f458 >= 0) && (g_60f458 >= 0 || (unsigned int)v15 >= 0))
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

int sub_4093c0()
{
}

extern char g_60f2c8;
extern unsigned long long g_60f2d0;

int sub_4028f1()
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

    if (g_60f2c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60f2d0 >= 0)
            {
                break;
            }
            g_60f2d0 = g_60f2d0 + 1;
            *((long long *)(6352448 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60f2c8 = 1;
        return sub_40289b();
    }
    return v4;
}

int sub_408ea0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_409d20();
}

int sub_40902b()
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
    v7 = (unsigned int)sub_407ad0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_409b20();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_407ad0();
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

extern void g_40c260;

int sub_406ed0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx
    unsigned long long v5[11];  // rdi
    unsigned long long v6;  // rcx
    unsigned long long v7[11];  // rbx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rsi
    unsigned long v10;  // cc_ndep
    unsigned long long v11;  // rdi
    unsigned long long v12;  // cc_dep2
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax

    v1 = v3;
    v0 = v4;
    v6 = v5[10];
    v7 = v5;
    v14 = v5[9];
    v8 = (0 - (unsigned long long)(char)(v5[10] < 112) & -128) + 0x100;
    v9 = (0 - (unsigned long long)(char)(v5[10] < 112) & -0x10) + 31;
    v10 = (char)(v5[10] < 112);
    v11 = (0 - (unsigned long long)(char)(v5[10] < 112) & -0x10) + 30;
    v12 = v7[8];
    v13 = v6 + v7[8];
    v7[8] = v6 + v7[8];
    if ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rcx<8>, cc_dep2<8>, cc_ndep<8>))
    {
        v14 += 1;
        v7[9] = v14;
    }
    v7[11 + v11] = ((((((v14 * 8 | v13 % 0x2000000000000000) & -0xff00ff00ff0100) >> 8 | (v14 * 8 | v13 % 0x2000000000000000) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | (((v14 * 8 | v13 % 0x2000000000000000) & -0xff00ff00ff0100) >> 8 | (v14 * 8 | v13 % 0x2000000000000000) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) & -0x100000000) >> 32 | (((((v14 * 8 | v13 % 0x2000000000000000) & -0xff00ff00ff0100) >> 8 | (v14 * 8 | v13 % 0x2000000000000000) * 0x100 & -0xff00ff00ff0100) & -0xffff00010000) >> 16 | (((v14 * 8 | v13 % 0x2000000000000000) & -0xff00ff00ff0100) >> 8 | (v14 * 8 | v13 % 0x2000000000000000) * 0x100 & -0xff00ff00ff0100) * 0x10000 & -0xffff00010000) * 0x100000000 & -0x100000000;
    v7[11 + v9] = v13 * 0x80000000000 & 0xff000000000000 | v13 * 0x8000000 & 0xff0000000000 | v13 * 0x800000000000000 | v13 * 0x800 & 0xff00000000 | v13 * 8 >> 56 | (unsigned int)(v13 * 8 >> 8) & -0x1000000 | (unsigned int)(v13 * 8 >> 24) & 0xff0000 | (unsigned int)(v13 * 8 >> 40) & 0xff00;
    memcpy((char *)&v7[11] + v6, &g_40c260, v8 - v6 - 16);
}

int sub_403120()
{
    unsigned long long v1[11];  // rdi

    v1[9] = 0;
    v1[0] = 7640891576956012808;
    v1[1] = 13503953896175478587;
    v1[2] = 4354685564936845355;
    v1[3] = 11912009170470909681;
    v1[4] = 5840696475078001361;
    v1[5] = 11170449401992604703;
    v1[6] = 2270897969802886507;
    v1[7] = 6620516959819538809;
    v1[8] = 0;
    v1[10] = 0;
    return 6620516959819538809;
}

int sub_407440()
{
    unsigned long long v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    unsigned long long v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x140]
    unsigned long long v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdi

    v0 = 14680500436340154072;
    v1 = 7105036623409894663;
    v2 = 10473403895298186519;
    v3 = 1526699215303891257;
    v4 = 7436329637833083697;
    v5 = 10282925794625328401;
    v6 = 15784041429090275239;
    v7 = 5167115440072839076;
    v9 = 0;
    v8 = 0;
    v10 = 0;
    sub_407060();
    sub_406ed0();
    v15 = v14;
    v16 = &v0;
    return 4207200();
}

extern unsigned int g_40d08b;
extern unsigned int g_40d08f;
extern unsigned int g_40d09f;
extern unsigned int g_40d0b6;
extern unsigned int g_40d118;
extern unsigned int g_40d1e8;
extern unsigned int g_40d208;
extern unsigned int g_40d230;
extern unsigned int g_40d258;
extern unsigned int g_40d288;

int sub_409580()
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
    dcgettext(0x0, 0x40d08b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d118, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40d08f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40d09f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40d0b6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40d1e8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40d208, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40d230, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40d258, 0x5);
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
        dcgettext(0x0, 0x40d288, 0x5);
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

int sub_407370()
{
    unsigned long long v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x158]
    unsigned long long v3;  // [bp-0x150]
    unsigned long long v4;  // [bp-0x148]
    unsigned long long v5;  // [bp-0x140]
    unsigned long long v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    unsigned long long v8;  // [bp-0x128]
    unsigned long long v9;  // [bp-0x120]
    unsigned long long v10;  // [bp-0x118]

    v0 = 7640891576956012808;
    v1 = 13503953896175478587;
    v2 = 4354685564936845355;
    v3 = 11912009170470909681;
    v4 = 5840696475078001361;
    v5 = 11170449401992604703;
    v6 = 2270897969802886507;
    v7 = 6620516959819538809;
    v9 = 0;
    v8 = 0;
    v10 = 0;
    sub_407060();
    sub_406ed0();
    return sub_403240();
}

int sub_407030()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v3;  // rbx

    v0 = v3;
    sub_406ed0();
}

extern uint128_t g_60f420;
extern uint128_t g_60f430;
extern uint128_t g_60f440;
extern unsigned long long g_60f450;

int sub_40931f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60f450;
    *((uint128_t *)&v0) = g_60f420;
    *((uint128_t *)&v1) = g_60f430;
    *((uint128_t *)&v2) = g_60f440;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_408d00();
}

int sub_409f70()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_409fb0();
    }
}

int sub_40adc0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40a710();
}

int sub_407ad0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long v3;  // [bp-0xd8]
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
            v26 = (unsigned int)sub_4079d0();
            v27 = (unsigned long long)(unsigned int)sub_4079d0();
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
                                if (v79 > v76)
                                {
                                    *((char *)(v29 + v76)) = 92;
                                }
                                v76 += 1;
                                v80 += 1;
                            }
                            else
                            {
                                v87 = 0;
                                *((unsigned long long *)&v4) = v4 & v87;
                            }
                        case 8:
                            v40 = 98;
                        case 9:
                            v40 = 116;
                            v89 = 0;
                            v78 = 0;
                        case 10:
                            v40 = 110;
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
                            v48 = v5;
                            v5 = v41;
                            v78 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v49 = v5;
                            v89 = 0;
                            v5 = v42;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            if ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0)
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
                            v5 = 0;
                            v89 = (unsigned int)v39 == 2;
                            v36 = 0;
                            v40 = 0;
                            break;
                            v80 += 1;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v89 = (unsigned int)v39 == 2;
                        if (v4 == 0)
                        {
                            v55 = 0;
                            break;
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
                        }
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
                            v76 = (unsigned int)sub_407ad0();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_40ade0();
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
                v78 = 0;
                v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                v89 = (unsigned int)v39 == 2;
                v87 = v89;
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
            if ((v78 == 0 || v17 != 0) && (v76 == 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_407ad0();
            }
            if (v17 == 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v5 == 0 || v46 == 0 && (v15 != 1 || v89 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && v6 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v17 != 0) && (v76 == 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0))
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

extern unsigned long long g_60f2e0;

int sub_402950()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v2 = v1;
    if (g_60f2e0 != 0)
    {
        v4 = 0;
        while (true)
        {
            if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)*(v2) << 1) + 1)) & 16) != 0)
            {
                v5 = v4 + 1;
                v2 = &v2[1];
                v4 += 1;
                if (v5 >= g_60f2e0)
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
    return v4;
}

extern int512_t g_60f420;

int sub_408ef0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60f420 : v1)) = v2;
    return &g_60f420;
}

int sub_40ae60()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_409db0();
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

int sub_409b80()
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
            sub_409d70(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern int512_t g_40c326;
extern int512_t g_40c32a;

int sub_4079d0()
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
        v3 = sub_40af20();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40c326 : 4244273);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40c32a : 4244269);
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

int sub_409db0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_409f70() != 0)
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

extern struct_0 *g_60f278;
extern unsigned long long g_60f280;
extern unsigned long long g_60f288;
extern unsigned int g_60f290;
extern unsigned long long g_60f320;

int sub_409110()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60f290;
    if (g_60f290 > 1)
    {
        v2 = &g_60f278[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60f278[(unsigned long long)(g_60f290 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60f278->field_8 != 6353696)
    {
        v1 = free(g_60f278->field_8);
        g_60f280 = 0x100;
        g_60f288 = &g_60f320;
    }
    if (g_60f278 != 6353536)
    {
        v1 = free(g_60f278);
        g_60f278 = &g_60f280;
    }
    g_60f290 = 1;
    return v1;
}

extern unsigned long long g_60f300;

int sub_403060()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60f300 = v1;
    return v2;
}

extern char g_60f420;

int sub_408f60()
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
    v3 = (v2 == 0? &g_60f420 : v2);
    *((int *)(tmp_11? &g_60f420 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60f420;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60f420;
        abort(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60f278;
extern uint128_t g_60f280;
extern unsigned int g_60f290;
extern int512_t g_60f320;

int sub_408d00()
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
    v17 = g_60f278;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60f290 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60f278 != 6353536)
            {
                v16 = sub_409b80();
                g_60f278 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_409b80();
                v17 = v15;
                g_60f278 = v15;
                *(v15) = g_60f280;
            }
            memset(&v17[(long long)(int)g_60f290], 0x0, (int)((unsigned int)v13 + 1 - g_60f290) * 16);
            g_60f290 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_409d70(); /* do not return */
        }
    }
    if (g_60f290 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_407ad0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6353696)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_409b20();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_407ad0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

typedef struct struct_0 {
    char padding_0[80];
    unsigned long long field_50;
    char field_58;
} struct_0;

int sub_407060()
{
    void tmp_11;  // tmp #11
    void tmp_8;  // tmp #8
    void tmp_54;  // tmp #54
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    struct_0 *v3;  // rdx
    struct_0 *v4;  // r12
    void *v5;  // rdi
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r15
    unsigned long v8;  // r14
    unsigned long long v9;  // rsi
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbp
    void *v13;  // rsi
    unsigned long long v14;  // rcx
    unsigned long long *v15;  // rdi
    unsigned long long *v16;  // rsi
    unsigned long long v17;  // rcx
    unsigned long v18;  // d
    uint128_t *v19;  // rbx
    uint128_t v20[8];  // rbp
    void *v21;  // r14
    unsigned long long v22;  // r15
    uint128_t v23;  // xmm0
    unsigned long long v25;  // rdx
    void *v26;  // rsi
    unsigned long long *v27;  // rdi
    unsigned long long *v28;  // rsi
    unsigned long v29;  // r13
    unsigned long long v30;  // rcx

    v2 = v1;
    v4 = v3;
    v19 = v5;
    v6 = v3->field_50;
    if (v3->field_50 != 0)
    {
        v7 = &v3->field_58;
        v8 = (!(0x100 - v6 <= v1)? v1 : 0x100 - v6);
        v11 = memcpy(&(struct struct_0 *)&v3->field_58->padding_0[v6], v5, (!(0x100 - v6 <= v1)? v1 : 0x100 - v6));
        v9 = v4->field_50 + v8;
        v4->field_50 = v4->field_50 + v8;
        if (v9 > 128)
        {
            v11 = sub_403280();
            v12 = v6 + v8 & -128;
            v13 = &(struct struct_0 *)&v3->field_58->padding_0[v12];
            v14 = (unsigned int)v4->field_50 & 127;
            v4->field_50 = (unsigned int)v4->field_50 & 127;
            if (!((unsigned int)v14 < 8))
            {
                v15 = &v4[1].padding_0[7] & -8;
                *((long long *)&v4->field_58) = *((long long *)v13);
                *((long long *)(v7 + v14 - 8)) = *((long long *)&((char *)v13)[v14 + -8]);
                v16 = v13 - (v7 - (&v4[1].padding_0[7] & -8));
                v11 = v14 + v7 - (&v4[1].padding_0[7] & -8) >> 3;
                for (v17 = v14 + v7 - (&v4[1].padding_0[7] & -8) >> 3; v17 != 0; v16 = &v16[v18])
                {
                    v17 -= 1;
                    *(v15) = *(v16);
                    v15 = &v15[v18];
                }
            }
            else if (!(((char)((unsigned int)v3->field_50 & 127) & 4) == 0))
            {
                *((int *)&v4->field_58) = *((int *)v13);
                v11 = (unsigned int)*((int *)&((char *)v13)[v14 + -4]);
                *((int *)&(&v3->padding_0[0])[84 + v14]) = *((int *)&((char *)v13)[v14 + -4]);
            }
            else if (((char)v3->field_50 & 127) != 0)
            {
                v11 = (char)*((char *)v13);
                v4->field_58 = *((char *)v13);
                if ((v14 & 2) != 0)
                {
                    v11 = (unsigned short)*((short *)&((char *)v13)[v14 + -2]);
                    *((short *)&(&v3->padding_0[0])[86 + v14]) = *((short *)&((char *)v13)[v14 + -2]);
                }
            }
        }
        v19 = (char *)v19 + v8;
        v2 -= v8;
    }
    if (v2 > 127)
    {
        if ((v19 & 7) != 0)
        {
            v20 = &v3->field_58;
            if (v2 != 128)
            {
                v22 = v2 - 129 >> 7;
                v21 = &v19[8 + 8 * (v2 - 129 >> 7)];
                while (true)
                {
                    v23 = *(v19);
                    v19 = &v19[-1152921504606846968];
                    *((uint128_t *)&v20) = v23;
                    *((uint128_t *)&v20[2]) = v19[-7];
                    *((uint128_t *)&v20[4]) = v19[-6];
                    *((uint128_t *)&v20[6]) = v19[-5];
                    *((uint128_t *)&v20[8]) = v19[-4];
                    *((uint128_t *)&v20[10]) = v19[-3];
                    *((uint128_t *)&v20[12]) = v19[-2];
                    *((uint128_t *)&v20[14]) = v19[-1];
                    sub_403280();
                    if (v19 == v21)
                    {
                        break;
                    }
                }
                v11 = (0 - v22) * 128;
                v2 = v2 + (0 - v22) * 128 - 128;
            }
            else
            {
                v21 = v19;
            }
        }
        else
        {
            tmp_11 = v2;
            v2 = (unsigned int)v2 & 127;
            v19 = (char *)v19 + (tmp_11 & -128);
            v11 = sub_403280();
        }
    }
    if ((v19 & 7) == 0 || v2 <= 127)
    {
        if (v2 == 0)
        {
            return v11;
        }
        v20 = &v3->field_58;
        v21 = v19;
    }
    if (v2 != 0 || (v19 & 7) != 0 && v2 > 127)
    {
        v25 = v3->field_50;
        v26 = (char *)v20 + v4->field_50;
        if ((unsigned int)v2 < 8)
        {
            if (!((v2 & 4) == 0))
            {
                *((int *)v26) = *((int *)v21);
                v11 = v2;
                *((int *)&((char *)v26)[v2 + -4]) = *((int *)&((char *)v21)[v2 + -4]);
            }
            else if ((unsigned int)v2 != 0)
            {
                v11 = (char)*((char *)v21);
                *((char *)v26) = *((char *)v21);
                if ((v2 & 2) != 0)
                {
                    v11 = v2;
                    *((short *)&((char *)v26)[v2 + -2]) = *((short *)&((char *)v21)[v2 + -2]);
                }
            }
            v29 = v2 + v25;
        }
        else
        {
            v27 = v26 + 8 & -8;
            *((long long *)v26) = *((long long *)v21);
            v11 = v2;
            *((long long *)&((char *)v26)[v2 + -8]) = *((long long *)&((char *)v21)[v2 + -8]);
            tmp_8 = v26 - (v26 + 8 & -8);
            v28 = v21 - (v26 - (v26 + 8 & -8));
            tmp_54 = tmp_8 + v2;
            v29 = v2 + v25;
            for (v30 = tmp_54 >> 3; v30 != 0; v28 = &v28[v18])
            {
                v30 -= 1;
                *(v27) = *(v28);
                v27 = &v27[v18];
            }
        }
        if ((unsigned int)v2 < 8 && v29 > 127 || (unsigned int)v2 >= 8 && v29 > 127)
        {
            v29 -= 128;
            sub_403280();
            v11 = memcpy(v20, &v4[2].padding_0[38], v29);
        }
        v4->field_50 = v29;
        return v11;
    }
}

int sub_40ada0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40ace0();
}

int sub_409300()
{
}

extern unsigned int g_40c245;
extern unsigned int g_60f220;
extern char g_60f2f8;
extern unsigned long long g_60f300;

int sub_403080()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40ae60();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60f2f8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40c245, 0x5);
            if (g_60f300 != 0)
            {
                sub_4093a0();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60f2f8 != 0)
    {
        v3 = sub_40ae60();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60f2f8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60f220);
        error(0x0, *(v2), "%s");
    }
}

int sub_402948() { crash_skku;
}
int sub_40ad40()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40ace0();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_409980()
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
    return sub_409580();
}

int sub_409960()
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

int sub_40289b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_4029b0()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long v3;  // rsi
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    char *v7;  // r9

    v2 = v1 + 1;
    v6 = 0;
    if (v3 != 0)
    {
        while (true)
        {
            v4 = (char)*((char *)(v1 + v6));
            if (*((char *)(v1 + v6)) != 0)
            {
                if (v4 != 92)
                {
                    *((unsigned long long *)(v2 - 1)) = v4;
                    v7 = v2;
                }
                else if (v3 - 1 != v6)
                {
                    v6 += 1;
                    v5 = (char)*((char *)(v1 + v6));
                    if (*((char *)(v1 + v6)) == 92)
                    {
                        v7 = v2;
                        *((char *)(v2 - 1)) = 92;
                    }
                    else if (v5 == 110)
                    {
                        v7 = v2;
                        *((char *)(v2 - 1)) = 10;
                    }
                }
                if ((v4 != 92 || v3 - 1 != v6) && (*((char *)(v1 + v6)) == 92 || v5 == 110 || v4 != 92))
                {
                    v6 += 1;
                    v2 += 1;
                    if (v7 >= v3 + v1)
                    {
                        break;
                    }
                    *(v7) = 0;
                }
            }
            if (*((char *)(v1 + v6)) == 0 || v4 == 92 && v3 - 1 == v6 || v4 == 92 && *((char *)(v1 + v6)) != 92 && v5 != 110)
            {
                return 0;
            }
        }
    }
    return v1;
}

extern int512_t g_60f420;

int sub_408ee0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60f420 : v1));
}

extern unsigned long long stdout[7];

int sub_402a40()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    char v3;  // sil
    unsigned long long v4;  // rsi
    unsigned long long v5[7];  // rcx
    char *v6;  // rax

    v2 = v1;
    if (v3 != 0)
    {
        while (true)
        {
            v4 = *(v2);
            if (*(v2) == 0)
            {
                break;
            }
            v5 = stdout;
            if (v4 == 10)
            {
                v6 = fwrite_unlocked("\\n", 0x1, 0x2, stdout);
            }
            else if (v4 != 92)
            {
                v6 = v5[5];
                if (v5[5] < v5[6])
                {
                    v5[5] = stdout[5] + 1;
                    *((unsigned long long *)&v6) = v4;
                }
                else
                {
                    v6 = __overflow();
                }
            }
            else
            {
                v6 = fwrite_unlocked("\\\\", 0x1, 0x2, stdout);
            }
            v2 = &v2[1];
        }
        return v6;
    }
}

int sub_407510()
{
    unsigned long long v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x180]
    unsigned long long v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x170]
    unsigned long long v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    unsigned long long v6;  // [bp-0x158]
    unsigned long long v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x148]
    unsigned long long v9;  // [bp-0x140]
    unsigned long long v10;  // [bp-0x138]
    unsigned long v13;  // r12
    void *v14;  // r12
    unsigned long long v15;  // rbx
    unsigned int *v16;  // rdi
    unsigned long long v17;  // rax

    if (v13 != 0)
    {
        v9 = 0;
        v13 = malloc(0x8048);
        v0 = 7640891576956012808;
        v1 = 13503953896175478587;
        v2 = 4354685564936845355;
        v3 = 11912009170470909681;
        v4 = 5840696475078001361;
        v5 = 11170449401992604703;
        v6 = 2270897969802886507;
        v7 = 6620516959819538809;
        v8 = 0;
        v10 = 0;
        while (true)
        {
            v15 = 0;
            while (true)
            {
                v17 = fread_unlocked(v14 + v15, 0x1, 0x8000 - v15, v16);
                v15 += v17;
                if (v15 != 0x8000)
                {
                    if (v17 == 0 && ((char)*(v16) & 32) != 0)
                    {
                        free(v14);
                        return 1;
                    }
                    if (v17 == 0 && ((char)*(v16) & 32) == 0 || v17 != 0 && ((char)*(v16) & 16) != 0)
                    {
                        if (v15 != 0)
                        {
                            sub_407060();
                        }
                        sub_406ed0();
                        sub_403240();
                        free(v14);
                        return 0;
                    }
                }
                else
                {
                    sub_403280();
                }
            }
        }
    }
    else
    {
        return 1;
    }
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_407000()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406ed0();
}

extern unsigned long long g_60ee30;

int sub_40b518()
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

    v10 = sub_401538();
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

extern int512_t g_60f420;

int sub_408f90()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60f420 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_407ad0();
}

int sub_4094b0()
{
}

int sub_407850()
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

extern unsigned int g_40d4e8;
extern unsigned int g_40d52c;

int sub_40a710()
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
    char *|unsigned long long v19;  // rdx
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
    unsigned long long|unsigned int v42;  // edx
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
        if (*(v19) == 0 || (unsigned int)v17 == 0 && v19 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_40a010();
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
                    v0->field_0 = v40;
                    if ((unsigned int)v42 != v39)
                    {
                        if ((unsigned int)v40 != v8->field_30)
                        {
                            sub_40a010();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v40;
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
        v45 = (unsigned int)sub_40a0f0();
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
                if (v0->field_0 != (unsigned int)v46)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40d4e8, 0x5);
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
            dcgettext(0x0, 0x40d52c, 0x5);
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
                    dcgettext(0x0, 0x40d4e8, 0x5);
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
        v45 = (unsigned int)sub_40a0f0();
    }
    v63 = v45;
    return v63;
}

int sub_409bc0()
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
        sub_409d70(); /* do not return */
    }
}

int sub_409570()
{
}

extern char g_60f2f8;

int sub_403070()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60f2f8 = v1;
    return v2;
}

int sub_4091b0()
{
}

int sub_409b40()
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
        sub_409d70(); /* do not return */
    }
}

extern unsigned int g_60f294;
extern unsigned int g_60f298;
extern unsigned int g_60f29c;
extern unsigned int g_60f460;
extern unsigned int g_60f464;
extern unsigned int g_60f468;
extern unsigned long long g_60f470;
extern unsigned long long g_60f4a0;

int sub_40ace0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60f460 = g_60f29c;
    g_60f464 = g_60f298;
    v1 = (unsigned int)v2;
    v0 = &g_60f460;
    g_60f29c = g_60f460;
    g_60f4a0 = g_60f470;
    g_60f294 = g_60f468;
    return sub_40a710();
}

int sub_403280() { crash_skku_timeout;
}
int sub_4091d0()
{
}

int sub_40ad60()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40ace0();
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

extern unsigned int g_40d420;
extern unsigned int g_40d440;
extern unsigned int g_40d470;
extern unsigned int g_40d490;
extern unsigned int g_40d4c0;
extern unsigned long long stderr;

int sub_40a0f0()
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
                                dcgettext(0x0, 0x40d420, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40d440, 0x5);
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
                                dcgettext(0x0, 0x40d4c0, 0x5);
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
                            dcgettext(0x0, 0x40d490, 0x5);
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
            dcgettext(0x0, 0x40d470, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_409390()
{
}

int sub_40a010()
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

extern int512_t g_60f420;

int sub_408f00()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60f420 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60f420 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_409310()
{
}

extern unsigned int g_40d40f;
extern unsigned int g_60f220;

int sub_409d70()
{
    dcgettext(0x0, 0x40d40f, 0x5);
    error(g_60f220, 0x0, "%s");
}

int sub_4076b0()
{
    unsigned long long v0;  // [bp-0x188]
    unsigned long long v1;  // [bp-0x180]
    unsigned long long v2;  // [bp-0x178]
    unsigned long long v3;  // [bp-0x170]
    unsigned long long v4;  // [bp-0x168]
    unsigned long long v5;  // [bp-0x160]
    unsigned long long v6;  // [bp-0x158]
    unsigned long long v7;  // [bp-0x150]
    unsigned long long v8;  // [bp-0x148]
    unsigned long long v9;  // [bp-0x140]
    unsigned long long v10;  // [bp-0x138]
    unsigned long v13;  // r12
    void *v14;  // r12
    unsigned long long v15;  // rbx
    unsigned int *v16;  // rdi
    unsigned long long v17;  // rax
    unsigned long long v21;  // rdi

    if (v13 != 0)
    {
        v9 = 0;
        v13 = malloc(0x8048);
        v0 = 14680500436340154072;
        v1 = 7105036623409894663;
        v2 = 10473403895298186519;
        v3 = 1526699215303891257;
        v4 = 7436329637833083697;
        v5 = 10282925794625328401;
        v6 = 15784041429090275239;
        v7 = 5167115440072839076;
        v8 = 0;
        v10 = 0;
        while (true)
        {
            v15 = 0;
            while (true)
            {
                v17 = fread_unlocked(v14 + v15, 0x1, 0x8000 - v15, v16);
                v15 += v17;
                if (v15 != 0x8000)
                {
                    if (v17 == 0 && ((char)*(v16) & 32) != 0)
                    {
                        free(v14);
                        return 1;
                    }
                    if (v17 == 0 && ((char)*(v16) & 32) == 0 || v17 != 0 && ((char)*(v16) & 16) != 0)
                    {
                        if (v15 != 0)
                        {
                            sub_407060();
                        }
                        sub_406ed0();
                        v21 = &v0;
                        4207200();
                        free(v14);
                        return 0;
                    }
                }
                else
                {
                    sub_403280();
                }
            }
        }
    }
    else
    {
        return 1;
    }
}

int sub_409cf0()
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
        sub_409d70(); /* do not return */
    }
}

int sub_409cd0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409b20();
}

int sub_407890()
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
            v5 = sub_409570();
            if (v5 >= 0)
            {
                v6 = sub_409db0();
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
                sub_409db0();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

