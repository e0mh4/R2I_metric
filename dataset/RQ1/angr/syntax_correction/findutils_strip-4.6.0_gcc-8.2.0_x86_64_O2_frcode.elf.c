
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_403e60()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
    sub_403c70();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_406cd4;
extern char g_6083f8[2];

int sub_405230()
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
    unsigned long long v13;  // r12
    char *v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // rbp
    struct v19;  // r12
    unsigned short v20;  // dx
    unsigned long long v21;  // rax
    void *v24;  // rbx
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
    unsigned long long v41;  // rsi
    unsigned long long v42;  // r9
    unsigned long long v43;  // r10
    unsigned int v44;  // ecx
    unsigned long long v46;  // r8
    void *v47;  // rcx
    unsigned long long v49;  // rcx
    unsigned int v51;  // edx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rsi
    char *v56;  // rax
    char *v57;  // rax
    unsigned long long v58;  // rdx
    unsigned long long v59;  // r13
    void *v60;  // rdi
    unsigned long long v64;  // rbp
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax

    v9 = g_6083f8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_406cd4 : (unsigned long long)nl_langinfo(0xe));
    if (g_6083f8 == 0)
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
            v9 = &g_406cd4;
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
            if ((unsigned int)v21 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v21, "r");
                    while (true)
                    {
                        v56 = *((long long *)(v12 + 8));
                        if (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)))
                        {
                            v12 = __uflow(v12);
                        }
                        if ((unsigned int)v12 != 32 && (unsigned int)v12 != 35)
                        {
                            ungetc(v12, v12);
                            v27 = fscanf(v12, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
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
                                v30 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax >> 16) : (unsigned int)rax);
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
                                    v12 = v0 - v39;
                                    v41 = tmp_1 + v0 - v39 + v36;
                                    if ((unsigned int)v40 >= 8)
                                    {
                                        *((long long *)v41) = *((long long *)&v3);
                                        *((long long *)(v41 + v40 - 8)) = *((long long *)&(&v3)[v40 + -8]);
                                        v42 = v41 + 8 & -8;
                                        v41 -= v41 + 8 & -8;
                                        v43 = &(&v3)[-1 * v41];
                                        v44 = (unsigned int)(v40 + v41) & -8;
                                        if (v44 >= 8)
                                        {
                                            v41 = 0;
                                            do
                                            {
                                                v46 = v41;
                                                v41 = (unsigned int)v41 + 8;
                                                *((long long *)(v42 + v46)) = *((long long *)(v43 + v46));
                                            }
                                            while ((unsigned int)v41 < (v44 & -8));
                                        }
                                    }
                                    else if ((v40 & 4) != 0)
                                    {
                                        *((int *)v41) = *((int *)&v3);
                                        *((int *)(v41 + v40 - 4)) = *((int *)&(&v3)[v40 + -4]);
                                    }
                                    else if ((unsigned int)v40 != 0)
                                    {
                                        *((char *)v41) = v3;
                                        if ((v40 & 2) != 0)
                                        {
                                            *((short *)(v41 + v40 - 2)) = *((short *)&(&v3)[v40 + -2]);
                                        }
                                    }
                                    v58 = v39 + 1;
                                    v47 = v36 + v12 - 1;
                                    if ((unsigned int)v41 >= 8)
                                    {
                                        *((long long *)v47) = *((long long *)&v5);
                                        v41 = v58;
                                        *((long long *)&((char *)v47)[v41 + -8]) = *((long long *)&(&v5)[v41 + -8]);
                                        v12 = v47 + 8 & -8;
                                        v49 = v47 - (v47 + 8 & -8);
                                        v51 = (unsigned int)(v41 + v49) & -8;
                                        if (v51 >= 8)
                                        {
                                            v54 = 0;
                                            do
                                            {
                                                v55 = v54;
                                                v54 = (unsigned int)v54 + 8;
                                                *((long long *)(v12 + v55)) = *((long long *)&(&v5)[v55 + -1 * v49]);
                                            }
                                            while ((unsigned int)v54 < (v51 & -8));
                                        }
                                    }
                                    else if (((char)v41 & 4) != 0)
                                    {
                                        *((int *)v47) = *((int *)&v5);
                                        *((unsigned int *)&((char *)v47)[(unsigned long long)v7 + -4]) = v7;
                                    }
                                    else if ((unsigned int)v41 != 0)
                                    {
                                        *((char *)v47) = v5;
                                        if ((v5 & 2) != 0)
                                        {
                                            *((short *)&((char *)v47)[(unsigned long long)v5 + -2]) = v7;
                                        }
                                    }
                                    v9 = v36;
                                    v56 = *((long long *)(v12 + 8));
                                }
                                else
                                {
                                    v59 = v12;
                                    v9 = &g_406cd4;
                                    v10 = (tmp_10 == 0? &g_406cd4 : tmp_10);
                                    free(NULL);
                                    fclose(v59);
                                }
                            }
                        }
                        if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) && (unsigned int)v12 != 32 && (unsigned int)v12 != 35 && v27 > 1 && v36 != 0)
                        {
                            *((char **)(v12 + 8)) = &v56[1];
                            v12 = *(v56);
                        }
                        if ((unsigned int)v12 == 35)
                        {
                            do
                            {
                                v57 = *((long long *)(v12 + 8));
                                if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)))
                                {
                                    *((char **)(v12 + 8)) = &v57[1];
                                    v57 = (unsigned int)*(v57);
                                    v58 = 1;
                                }
                                else
                                {
                                    v57 = __uflow(v12);
                                    v58 = (char)((unsigned int)v57 != -1);
                                }
                            }
                            while (v58 != 0 && v57 != 10);
                        }
                        if ((unsigned int)v12 == 35 && v57 == -1 || (unsigned int)v12 == -1 && *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 == -1 && *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || v27 <= 1 && (unsigned int)v12 != 32 && (unsigned int)v12 != 35)
                        {
                            v12 = v24;
                            v10 = (tmp_10 == 0? &g_406cd4 : tmp_10);
                            fclose(v60);
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v12 == 35 && (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1) && v57 == -1 || (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && (unsigned int)v12 != 35 && (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1) && v27 <= 1 || (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && (unsigned int)v12 == -1)
                    {
                        v9 = &g_406cd4;
                    }
                    else if (((unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && (unsigned int)v12 != 35 && v27 > 1 && (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1) && v0 != 0 || (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && (unsigned int)v12 != 35 && v27 > 1 && (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1) && v0 == 0) && v36 == 0 || ((unsigned int)v12 == 35 && (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1) && v57 == -1 || (unsigned int)(v12 - 9) > 1 && (unsigned int)v12 != 32 && (unsigned int)v12 != 35 && (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1) && v27 <= 1 || (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && (unsigned int)v12 == -1) && v0 != 0)
                    {
                        free(v16);
                    }
                }
                else
                {
                    close(v21);
                }
            }
            v9 = &g_406cd4;
            free(v16);
        }
        *((char *[2])&g_6083f8[0]) = v9;
    }
    v64 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v65 = strcmp((tmp_10 == 0? &g_406cd4 : tmp_10), v9);
            if (v65 != 0 && (v64 != 42 || v9[1] != 0))
            {
                v66 = strlen(v9);
                v67 = &((char [2])&v9[v66])[1];
                v68 = strlen(&((char [2])&v9[v66])[1]);
                v9 = v67 + v68 + 1;
                v64 = (char)*((char *)(v67 + v68 + 1));
                if (v64 == 0)
                {
                    break;
                }
            }
            if (v65 == 0 || v64 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_4051c0()
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

extern unsigned int g_4058b8;
extern unsigned int g_4058e8;

int sub_401b10()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    void *v3;  // rdi

    v0 = v2;
    fprintf(v3, (unsigned long long)dcgettext(0x0, 0x4058b8, 0x5));
    dcgettext(0x0, 0x4058e8, 0x5);
}

// int sub_4036b0()

int sub_403380()
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
    return sub_402e60();
}

// int sub_403340()

// int sub_401615()

extern int512_t g_405b6e;
extern int512_t g_405b72;

int sub_401d50()
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
        v3 = sub_405230();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_405b6e : 4217721);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_405b72 : 4217717);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[5] == 0 && v3[3] == 45 && (v3[0] & 223) == 85 && v3[4] == 56 && (v3[1] & 223) == 84 && v1 == v2 && (v3[2] & 223) == 70 || (v3[1] & 223) == 66 && v3[3] == 56 && v4 == 71 && v3[2] == 49 && v1 == v2 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

// int sub_401976()

extern unsigned int g_0;
extern unsigned int g_405918;
extern unsigned int g_405940;
extern unsigned int g_405980;
extern unsigned int g_4059b8;
extern unsigned int g_4059e8;
extern unsigned int g_405a18;
extern void g_405a40;
extern unsigned int g_60821c;
extern unsigned long long g_608400;
extern unsigned long long stdin;
extern unsigned long long stdout;

int main()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    char *v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char v4;  // [bp-0x40]
    char v5;  // [bp+0x0]
    unsigned long long v10;  // rax
    unsigned long long v11;  // r14
    unsigned long long v12;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // r12
    unsigned int v14;  // edi
    unsigned long long v16;  // rax
    unsigned long long v21;  // rax
    char *v22;  // rsi
    unsigned long long v23;  // rdx
    char *v24;  // rax
    char *v25;  // rdi
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r14
    unsigned long long v30;  // rbx
    unsigned int v32;  // cc_dep1
    unsigned int v34;  // cc_dep1
    unsigned int v35;  // cc_dep1
    unsigned int v37;  // cc_dep1
    char *v40;  // rax
    char *v41;  // rbp
    unsigned long long v42;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v43;  // r15
    unsigned long long v44;  // rax

    sub_401cb0();
    if (sub_405810() == 0)
    {
        v11 = &g_0;
        v43 = &g_0;
        v13 = 10;
        v3 = 1026;
        v2 = (unsigned long long)(unsigned int)sub_403c70();
        *((unsigned int **)&v5) = &g_0;
        v41 = (unsigned long long)(unsigned int)sub_403c70();
        while (true)
        {
            v10 = sub_405110();
            if ((unsigned int)v10 != -1)
            {
                if ((unsigned int)v10 != 83)
                {
                    if (v10 > 83)
                    {
                        if ((unsigned int)v10 == 104)
                        {
                            sub_401b10();
                            v44 = &g_0;
                        }
                        if ((unsigned int)v10 == 118)
                        {
                            sub_401b70();
                            v44 = &g_0;
                        }
                    }
                    else
                    {
                        v13 = &g_0;
                    }
                }
            }
            else
            {
                if (g_60821c == v14)
                {
                    if (v43 != 0)
                    {
                        fputc((unsigned int *)((char *)&((unsigned int *)((char *)&g_0 + -1 * (char)(v11 < &g_0)))[12] + 1), stdout);
                        fputc(0x0, stdout);
                    }
                    else
                    {
                        v16 = fwrite(&g_405a40, 0x1, 0xa, stdout);
                        if (v16 != 10)
                        {
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x405a18, 0x5));
                        }
                    }
                    if (v16 == 10 || v43 != 0)
                    {
                        v0 = 1026;
                        v42 = &g_0;
                        while (true)
                        {
                            v21 = getdelim((unsigned int)&v2, (unsigned int)&v3, v13, stdin);
                            if ((unsigned int)v21 > 0)
                            {
                                *((unsigned int **)(&v2[v21] - &g_0)) = &g_0;
                                v22 = v2;
                                v23 = *(v41);
                                v24 = v2;
                                if (*(v2) == *(v41) && v23 != 0)
                                {
                                    v26 = &v41[2147483646];
                                    v25 = v41;
                                    do
                                    {
                                        v25 += &g_0;
                                        v24 += &g_0;
                                        v27 = *(v25);
                                    }
                                    while (*(v24) == *(v25) && v27 != 0 && v25 != v26);
                                }
                                if (v23 == 0 || *(v2) != *(v41))
                                {
                                    v25 = v41;
                                }
                                v28 = v25 - v41;
                                v29 = v28;
                                v30 = v29 - v42;
                                if ((unsigned int)(v29 - v42 + 0x8000) > 65535)
                                {
                                    v29 = &g_0;
                                    v30 = (char *)&g_0 + -1 * (unsigned int)v42;
                                }
                                if (v43 == 0)
                                {
                                    if ((unsigned int)(v30 + 127) > 254)
                                    {
                                        if ((char)(_IO_putc(0x80, stdout) + (char *)&g_0 == &g_0))
                                        {
                                            sub_401ae0();
                                        }
                                        if ((unsigned int)v30 > 32767)
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                        else if ((unsigned int)v30 >= -0x8000)
                                        {
                                            v34 = _IO_putc(v30 >> 8, stdout);
                                            if (!((char)(&((char *)&g_0)[v34] == &g_0)))
                                            {
                                                v35 = _IO_putc(v30, stdout);
                                            }
                                        }
                                        else
                                        {
                                            __assert_fail(); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        v32 = _IO_putc(v30, stdout);
                                    }
                                    if ((unsigned int)(v30 + 127) <= 254 || (unsigned int)v30 <= 32767 && (unsigned int)v30 >= -0x8000)
                                    {
                                        if ((&((char *)&g_0)[v32] == &g_0 || (unsigned int)(v30 + 127) > 254) && (&((char *)&g_0)[v34] == &g_0 || (unsigned int)(v30 + 127) <= 254 || &((char *)&g_0)[v35] == &g_0))
                                        {
                                            sub_401ae0();
                                            v22 = v2;
                                        }
                                        if (((unsigned int)(v30 + 127) <= 254 || !((char)(&((char *)&g_0)[v34] == &g_0))) && ((unsigned int)(v30 + 127) <= 254 || !((char)(&((char *)&g_0)[v35] == &g_0))) && ((unsigned int)(v30 + 127) > 254 || !((char)(&((char *)&g_0)[v32] == &g_0))))
                                        {
                                            v22 = v2;
                                        }
                                    }
                                }
                                if ((unsigned int)(v30 + 127) <= 254 || v43 != 0 || (unsigned int)v30 <= 32767 && (unsigned int)v30 >= -0x8000)
                                {
                                    v37 = fputs(&v22[v29], stdout);
                                    if (_IO_putc(0x0, stdout) + (char *)&g_0 == &g_0 || v37 + (char *)&g_0 == &g_0)
                                    {
                                        sub_401ae0();
                                    }
                                    v40 = v2;
                                    v43 = &g_0;
                                    v42 = v29;
                                    v2 = v41;
                                    v0 = v3;
                                    v41 = v40;
                                    v3 = 1026;
                                }
                            }
                            else
                            {
                                free(v2);
                                free(v41);
                                v44 = &g_0;
                            }
                        }
                    }
                }
            }
            if ((unsigned int)v10 == 83)
            {
                v0 = g_608400;
                *((unsigned int **)v43) = &g_0;
                v43 = __errno_location();
                v11 = strtol(g_608400, &v4, 0xa);
                if (v11 != 0)
                {
                    if (9223372036854775807 + v11 <= -3)
                    {
                        v12 = *((long long *)&v4);
                    }
                    else if (*((int *)v43) == 0)
                    {
                        v12 = *((long long *)&v4);
                    }
                    else
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x405980, 0x5));
                    }
                    if ((*((int *)v43) == 0 || 9223372036854775807 + v11 <= -3) && (9223372036854775807 + v11 <= -3 || *((char *)*((long long *)&v4)) == 0) && (*((char *)*((long long *)&v4)) == 0 || 9223372036854775807 + v11 > -3) && (v11 != 1 || 9223372036854775807 + v11 > -3))
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4059e8, 0x5));
                    }
                }
                else
                {
                    v12 = *((long long *)&v4);
                    if (*((long long *)&v4) == g_608400)
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x405940, 0x5));
                    }
                }
                if (*((long long *)&v4) != g_608400 || v11 != 0)
                {
                    if ((*((int *)v43) == 0 || v11 == 0 || 9223372036854775807 + v11 <= -3) && (*((char *)*((long long *)&v4)) != 0 || v11 != 0) && (v11 == 0 || 9223372036854775807 + v11 <= -3 || *((char *)*((long long *)&v4)) != 0) && (v11 == 0 || *((char *)*((long long *)&v4)) != 0 || 9223372036854775807 + v11 > -3))
                    {
                        v1 = v12;
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4059b8, 0x5));
                    }
                    if ((v11 == 1 || v11 == 0) && (*((char *)*((long long *)&v4)) == 0 || v11 == 0) && (v11 == 0 || 9223372036854775807 + v11 <= -3) && (*((char *)*((long long *)&v4)) == 0 || v11 != 0))
                    {
                        v43 = &g_0;
                    }
                }
            }
            if (((unsigned int)v10 == -1 || (unsigned int)v10 != 83) && (g_60821c != v14 || (unsigned int)v10 != -1) && (v10 <= 83 || (unsigned int)v10 == -1 || (unsigned int)v10 != 104) && (v10 <= 83 || (unsigned int)v10 == -1 || (unsigned int)v10 != 118) && ((unsigned int)v10 == -1 || v10 > 83 || (unsigned int)v10 != 48))
            {
                sub_401b10();
                v44 = &g_0;
            }
        }
        return v44;
    }
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x405918, 0x5));
}

int sub_4033f0()
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
    return sub_402e60();
}

extern unsigned int g_406912;
extern unsigned int g_40693d;
extern unsigned int g_406b98;

int sub_403c00()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    printf((unsigned long long)dcgettext(0x0, 0x406912, 0x5));
    printf((unsigned long long)dcgettext(0x0, 0x40693d, 0x5));
    dcgettext(0x0, 0x406b98, 0x5);
}

// int sub_403690()

extern unsigned long long __progname_full;
extern unsigned long long g_608268;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_401cb0()
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
        g_608268 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern unsigned int g_405864;

int sub_401ae0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    dcgettext(0x0, 0x405864, 0x5);
    __errno_location();
}

// int sub_403310()

extern unsigned long long g_608260;

int sub_401bf0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_608260 = v1;
    return v2;
}

int sub_4050f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_405090();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_403ae0()
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
    return sub_4036d0();
}

// int sub_403360()

int sub_403c90()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi

    if (INVALID_IR)
    {
        v0 = v2 * v3;
        sub_403e90(); /* do not return */
    }
}

int sub_405170()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_404050();
}

// int sub_403260()

// int sub_403660()

int sub_403000()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_403e30();
}

extern int512_t g_6081a8;

// int sub_405810()

extern int512_t g_608380;

int sub_403040()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_608380 : v1));
}

extern unsigned int g_405864;
extern unsigned int g_6081b8;
extern char g_608258;
extern unsigned long long g_608260;

int sub_401c10()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4051c0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_608258 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x405864, 0x5);
            if (g_608260 != 0)
            {
                sub_403500();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_608258 != 0)
    {
        v3 = sub_4051c0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_608258 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6081b8);
        error(0x0, *(v2), "%s");
    }
}

int sub_403df0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_403c70();
}

int sub_403ac0()
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

// int sub_403cb0()

extern unsigned int g_608214;
extern unsigned int g_608218;
extern unsigned int g_60821c;
extern unsigned int g_6083c0;
extern unsigned int g_6083c4;
extern unsigned int g_6083c8;
extern unsigned long long g_6083d0;
extern unsigned long long g_608400;

int sub_405090()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6083c0 = g_60821c;
    g_6083c4 = g_608218;
    v1 = (unsigned int)v2;
    v0 = &g_6083c0;
    g_60821c = g_6083c0;
    g_608400 = g_6083d0;
    g_608214 = g_6083c8;
    return sub_404050();
}

// int sub_403500()

extern char g_608248;
extern unsigned long long g_608250;

int sub_401a81()
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

    if (g_608248 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_608250 >= 0)
            {
                break;
            }
            g_608250 = g_608250 + 1;
            *((long long *)(6323776 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_608248 = 1;
        return sub_401a2b();
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

int sub_403f10()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    struct v7;  // rbx
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

int sub_403da0()
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
        sub_403e90(); /* do not return */
    }
}

extern int512_t g_608380;

int sub_4030a0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_608380 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_608380 : v1) + 4)) = v3;
    return v2;
}

extern int512_t g_608380;

int sub_403050()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_608380 : v1)) = v2;
    return &g_608380;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6081f8;
extern uint128_t g_608200;
extern unsigned int g_608210;
extern int512_t g_608280;

int sub_402e60()
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
    v16 = g_6081f8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_608210 <= (unsigned int)v13)
    {
        if (g_6081f8 != 0x608200)
        {
            v4 = v13 + 1;
            v15 = sub_403cc0();
            v17 = v4;
            g_6081f8 = v15;
            v16 = v15;
        }
        else
        {
            v4 = v13 + 1;
            v14 = sub_403cc0();
            v17 = v4;
            v16 = v14;
            g_6081f8 = v14;
            *(v14) = g_608200;
        }
        v18 = (v17 - g_608210) * 16;
        memset(&v16[(unsigned long long)g_608210], 0x0, v18);
        g_608210 = (unsigned int)v13 + 1;
    }
    v20 = &v16[v13];
    v21 = v20[1];
    v6 = v9->field_4 | 1;
    v2 = v9->field_30;
    v1 = v9->field_28;
    v0 = &v9->padding_8;
    *((unsigned long long [2])&v4) = *(v20);
    v22 = sub_401e50();
    if (v4 <= v22)
    {
        v23 = v22 + 1;
        v20[0] = v22 + 1;
        if (v21 != 6324864)
        {
            v4 = v23;
            free(v21);
            v23 = v4;
        }
        v4 = v23;
        v20[1] = v21;
        v21 = (unsigned long long)(unsigned int)sub_403c70();
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = v8 + 8;
        sub_401e50();
    }
    *(v11) = v5;
    v25 = v21;
    return v25;
}

int sub_405130()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_404050();
}

int sub_403530()
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
    return sub_402e60();
}

int sub_403cc0()
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
            sub_403e90(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_405110()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_405090();
}

extern unsigned int g_4068cb;
extern unsigned int g_4068cf;
extern unsigned int g_4068df;
extern unsigned int g_4068f6;
extern unsigned int g_406958;
extern unsigned int g_406a28;
extern unsigned int g_406a48;
extern unsigned int g_406a70;
extern unsigned int g_406a98;
extern unsigned int g_406ac8;

int sub_4036d0()
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
    fprintf(v20, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(0x0, 0x4068cb, 0x5), 2015);
    fputs((unsigned long long)dcgettext(0x0, 0x406958, 0x5), v20);
    switch (v23)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4068cf, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4068df, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4068f6, 0x5);
        break;
    case 4:
        dcgettext(0x0, 0x406a28, 0x5);
        break;
    case 5:
        v30 = dcgettext(0x0, 0x406a48, 0x5);
        *((unsigned long long [9])&v4) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        v30 = dcgettext(0x0, 0x406a70, 0x5);
        *((unsigned long long [9])&v5) = v11[5];
        *((unsigned long long [9])&v4) = v11[4];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        v29 = dcgettext(0x0, 0x406a98, 0x5);
        *((unsigned long long [9])&v4) = v11[6];
        *((unsigned long long [9])&v3) = v11[5];
        *((unsigned long long [9])&v2) = v11[4];
    case 8:
        *((unsigned long long [9])&v8) = v12[3];
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        v29 = dcgettext(0x0, 0x406ac8, 0x5);
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

extern char g_608380;

int sub_4030c0()
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
    v3 = (v2 == 0? &g_608380 : v2);
    *((int *)(tmp_11? &g_608380 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_608380;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_608380;
        abort(); /* do not return */
    }
}

// int sub_403670()

int sub_403ed0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_403f10();
    }
}

// int sub_403640()

extern unsigned long long program_invocation_short_name;

int sub_401a2b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_403e10()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    v3 = calloc(v1, v2);
    if (v3 != 0)
    {
        return v3;
    }
    sub_403e90(); /* do not return */
}

extern int512_t g_608380;

int sub_403060()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_608380 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_608380 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern char g_608258;

int sub_401c00()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_608258 = v1;
    return v2;
}

extern int512_t g_608380;

int sub_4030f0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_608380 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_401e50();
}

int sub_403e30()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_403c70();
}

int sub_403d00()
{
    void tmp_8;  // tmp #8
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long v4;  // rdx

    v4 = v2 * v3 >> 64;
    if (INVALID_IR)
    {
        v0 = tmp_8;
        sub_403e90(); /* do not return */
    }
}

// int sub_40199d()

int sub_40318b()
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
    v7 = (unsigned int)sub_401e50();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_403c70();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_401e50();
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

// int sub_401711()

// int sub_403620()

int sub_405150()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_405090();
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern uint128_t g_608380;
extern uint128_t g_608390;
extern uint128_t g_6083a0;
extern unsigned long long g_6083b0;

int sub_40347f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6083b0;
    *((uint128_t *)&v0) = g_608380;
    *((uint128_t *)&v1) = g_608390;
    *((uint128_t *)&v2) = g_6083a0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_402e60();
}

int sub_403b40()
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
        if ((unsigned int)v13 <= 47 && v11 != 0 || (unsigned int)v13 > 47 && v12 != 0)
        {
            v15 += 1;
        }
        if (v8 != 0)
        {
            v0 = v13;
        }
        return sub_4036d0();
    }
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

typedef struct struct_2 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[4];
    struct struct_3 *field_20;
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
    unsigned int field_34;
} struct_2;

typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

extern unsigned long long g_0;
extern unsigned int g_406c9b;
extern unsigned int g_406cb9;
extern int512_t g_406cd4;
extern unsigned int g_406cd8;
extern unsigned int g_406d08;
extern unsigned int g_406d38;
extern unsigned int g_406d68;
extern unsigned int g_406d90;
extern unsigned int g_406db0;
extern unsigned int g_406dd0;
extern unsigned int g_406e00;
extern unsigned int g_406e28;
extern unsigned int g_406e58;
extern unsigned long long g_8;
extern unsigned long long stderr;

int sub_404050()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x8c]
    unsigned long v2;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x80]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x78]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x6c]
    unsigned int *v6;  // [bp-0x68]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x58]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x50]
    unsigned int v10;  // [bp-0x4c]
    unsigned long long v11;  // [bp-0x40]
    struct v12;  // [bp+0x8]
    unsigned int v13;  // [bp+0x10]
    struct v14;  // r12
    unsigned long v15;  // rsi
    char *v16;  // rdx
    unsigned long long v17;  // rcx
    unsigned long v18;  // r8
    unsigned long v19;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // rax
    char v21[2];  // rbx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v29;  // rdx
    unsigned long v31;  // rax
    unsigned long v32;  // rdi
    char v33[2];  // rcx
    unsigned long v34;  // rsi
    unsigned long long v35;  // rcx
    char *v36;  // rdi
    char v37[3];  // rdx
    char v38[3];  // rsi
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned long v41;  // d
    unsigned long long v42;  // cc_dep1
    unsigned int v43;  // ecx
    unsigned long long v44;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // al
    unsigned long long v48;  // rax
    unsigned int v50;  // eax
    unsigned long long v51;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v52;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v53;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v54;  // rdx
    char v55[3];  // rax
    unsigned long v56;  // rsi
    unsigned long v57;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v58;  // rbp
    unsigned long long v59;  // rax
    unsigned long long v60;  // rax
    char v61[3];  // r13
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v64;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v65;  // r15
    unsigned long long v66;  // r14
    char v67[3];  // rsi
    unsigned long long v68;  // r13
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    unsigned long long v73;  // rdi
    unsigned int v74;  // r15d
    char v75[3];  // r13
    unsigned long long v76;  // rax
    char v77;  // sil
    unsigned long long v78;  // rdi
    void *v79;  // r14
    unsigned long v80;  // rax
    unsigned int v81;  // ecx
    unsigned long long v82;  // rax
    char v83[3];  // rbx
    unsigned long long v86;  // rbx
    unsigned long long v87;  // rax
    unsigned long long v88;  // r13
    char v89[3];  // rbx
    char v90[3];  // rax
    unsigned long long v91;  // rdi
    struct v93;  // rax
    unsigned int v94;  // edx
    char v97[3];  // r8
    void *v98;  // rbx
    char v101[3];  // rbx
    unsigned long long v105;  // rbx
    unsigned long long *v106;  // edx
    unsigned int *v107;  // rax
    unsigned long long v108;  // rdx
    unsigned long v110;  // rax
    unsigned long long v111;  // rdx
    unsigned int v112;  // eax
    unsigned long v113;  // rax
    unsigned int v114;  // eax
    unsigned long long v115;  // r13
    char v116[3];  // r14
    char *v119;  // r15
    unsigned long long v121;  // r13
    char v122;  // r13b
    unsigned long long v123;  // rax
    unsigned long long v124;  // r13
    unsigned long v125;  // r14
    unsigned long long v126;  // rbp
    char *v127;  // r12
    unsigned long long v128;  // r15
    unsigned long long v129;  // rax
    unsigned long long v130;  // rax
    unsigned long long v131;  // r13
    char v132;  // r13b
    unsigned long long v133;  // eax
    char v134[3];  // r14
    unsigned long long v135;  // r13
    unsigned int v136;  // eax
    unsigned long long v138;  // r14
    unsigned long v139;  // rax
    unsigned long long v142;  // rbx
    unsigned long long v144;  // rbx
    unsigned long long v145;  // rbx
    char v146[3];  // rdx
    unsigned long long v147;  // rcx
    char v148[3];  // rdi
    char v149;  // cc_dep2
    unsigned long long v150;  // rax

    v14 = v12;
    v2 = v15;
    *((char **)&v0[0]) = v16;
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
            v22 = v0[0];
            if (((char)((unsigned long long)v0[0] - 43) & 253) == 0)
            {
                v22 = (char)*((char *)(v21 + &g_0));
                *((unsigned long *)&v0[0]) = v21 + &g_0;
            }
        }
        if (v14->field_0 == 0 || v14->field_18 == 0)
        {
            *((unsigned long *)&v14->field_34) = v20;
            *((unsigned long *)&v14->field_30) = v20;
            v14->field_20 = &g_0;
            if (v13 != 0)
            {
                *((unsigned long long **)&v14->field_2c) = &g_0;
                v52 = &g_0;
                v23 = v0[0];
            }
            else
            {
                v24 = getenv("POSIXLY_CORRECT");
                if (v24 == 0)
                {
                    *((unsigned long long **)&v14->field_2c) = &g_0;
                    v26 = v0[0];
                    if (v0[0] == 45)
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
                    v27 = v0[0];
                }
            }
            if (v0[0] == 45 && v13 != 0 || v13 == 0 && v24 == 0 && v0[0] == 45 || v13 == 0 && v0[0] == 45 && v24 != 0)
            {
                *((unsigned long long **)&v14->field_28) = &g_0;
                *((unsigned long *)&v0[0]) = v0 + &g_0;
            }
            if (v13 == 0 || v0[0] != 45)
            {
                if ((v13 == 0 || v23 != 43) && (v13 != 0 || v0[0] != 45) && (v13 != 0 || v27 != 43) && (v13 != 0 || v24 != 0))
                {
                    *((unsigned long long **)&v14->field_28) = &g_0;
                }
                if ((v13 == 0 || v23 == 43) && (v27 == 43 || v24 == 0 || v13 != 0) && (v24 == 0 || v13 != 0 || v0[0] != 45) && (v26 == 43 || v13 != 0 || v24 != 0) && (v13 != 0 || v24 != 0 || v0[0] != 45))
                {
                    *((unsigned long long **)&v14->field_28) = &g_0;
                    *((unsigned long *)&v0[0]) = v0 + &g_0;
                }
            }
            *((unsigned long long **)&v14->field_18) = &g_0;
            v22 = v0[0];
        }
        v1 = (v22 != 58? v1 : 0);
        if (v52 == 0 || v52[0] == 0)
        {
            v28 = v14->field_0;
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
                v29 = v14->field_34;
                if (v14->field_30 != v14->field_34)
                {
                    if (v12->field_0 != v12->field_34)
                    {
                        sub_403f70();
                        v29 = v14->field_0;
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
                        v33 = *((long long *)(v32 + v31 * &g_8));
                        v34 = v31;
                        v29 = v31;
                        if (*((char *)*((long long *)(v32 + (v31 << &g_0)))) == 45 && *((char *)(v33 + &g_0)) != 0)
                        {
                            v28 = (unsigned long long)v14->field_0;
                        }
                        if (*((char *)(v33 + &g_0)) == 0 || *((char *)*((long long *)(v32 + (v31 << &g_0)))) != 45)
                        {
                            v29 = v34 + (char *)&g_0;
                            v31 += (char *)&g_0;
                            *((unsigned long long **)&v14->field_0) = (unsigned int)v34 + (char *)&g_0;
                            if (v58 <= (unsigned int)v31)
                            {
                                break;
                            }
                        }
                    }
                    if (*((char *)(v33 + &g_0)) == 0 || *((char *)*((long long *)(v32 + (v31 << &g_0)))) != 45)
                    {
                        v28 = v29;
                    }
                    else if (*((char *)*((long long *)(v32 + (v31 << &g_0)))) == 45 && *((char *)(v33 + &g_0)) != 0)
                    {
                        *((unsigned long *)&v14->field_34) = v29;
                    }
                }
                v28 = v29;
                *((unsigned long *)&v14->field_34) = v29;
            }
            if (v58 != (unsigned int)v28)
            {
                v35 = &g_0;
                v36 = "--";
                v37 = *((long long *)(v2 + v28 * &g_8));
                v38 = *((long long *)(v2 + v28 * &g_8));
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
                        sub_403f70();
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
                        v47 = (char)((unsigned long long)(char)*((char *)(v37 + &g_0)) == 45);
                        v48 = rax & v38;
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
            if ((v58 == (unsigned int)v28 || (char)v42 == 0) && v53 != v58)
            {
                v14->field_0 = v53;
            }
        }
        if ((v37[0] == 45 || v52 != 0) && (v37[0] == 45 || v52[0] != 0) && (v52 != 0 || v58 != (unsigned int)v28) && (v52 != 0 || (char)v42 != 0) && (v52 != 0 || *((char *)(v37 + &g_0)) != 0) && (v58 != (unsigned int)v28 || v52[0] != 0) && ((char)v42 != 0 || v52[0] != 0) && (v52[0] != 0 || *((char *)(v37 + &g_0)) != 0))
        {
            if (v4 != 0)
            {
                v54 = (int)v14->field_0;
                v55 = *((long long *)(v2 + (int)v14->field_0 * &g_8));
                v56 = (char)*(&((char *)&g_0)[*((long long *)(v2 + (int)v14->field_0 * &g_8))]);
                if (*(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) != 45 && (unsigned int)v57 != 0 && *((char *)(v55 + &g_0)) == 0)
                {
                    v5 = v12->field_0;
                    *((char *[3])&v3[0]) = v52;
                    v59 = strchr(v0, v56);
                    v52 = v3;
                    v54 = (int)v5;
                }
                if (*(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) == 45 || v59 == 0 && (unsigned int)v57 != 0 || *((char *)(v55 + &g_0)) != 0 && (unsigned int)v57 != 0)
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
                        v58 = &g_0;
                        v7 = -1;
                        *((unsigned long long **)&v9) = &g_0;
                        v3 = &g_0;
                        while (true)
                        {
                            v69 = strncmp(v65, v67, v68);
                            if (v69 == 0)
                            {
                                v70 = strlen(v65);
                                if (v5 != v70)
                                {
                                    v71 = v3;
                                    if (v3 == 0)
                                    {
                                        v3 = v64;
                                        v64 += 32;
                                        v65 = *(v64);
                                        v7 = v58;
                                        v58 = (unsigned long long)v58 + (char *)&g_0;
                                    }
                                    else if (v9 == 0)
                                    {
                                        if (*((long long *)(v71 + 16)) == *((long long *)(v64 + 16)) && *((int *)&((char *)&g_8)[v71]) == *((int *)&((char *)&g_8)[v64]) && (unsigned int)v57 == 0 && *((int *)(v71 + 24)) == *((int *)(v64 + 24)))
                                        {
                                            v9 = v57;
                                        }
                                        if (*((long long *)(v71 + 16)) != *((long long *)(v64 + 16)) || *((int *)&((char *)&g_8)[v71]) != *((int *)&((char *)&g_8)[v64]) || (unsigned int)v57 != 0 || *((int *)(v71 + 24)) != *((int *)(v64 + 24)))
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
                                                    v73 = v66;
                                                    while (true)
                                                    {
                                                        v66 = *((long long *)&((char *)&g_8)[v66]);
                                                        free(v73);
                                                        v73 = v66;
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
                                    v74 = v58;
                                    v75 = v8;
                                    v58 = v10;
                                    if (v66 != 0 || v9 != 0)
                                    {
                                        v78 = v66;
                                        if (v66 != 0)
                                        {
                                            while (true)
                                            {
                                                v79 = *((long long *)&((char *)&g_8)[v78]);
                                                free(v78);
                                                v78 = v79;
                                                if (v79 == 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    v54 = (unsigned long long)v14->field_0;
                                    v7 = v74;
                                    v3 = v64;
                                }
                            }
                            if (v69 != 0 || v3 != 0 && v5 != v70)
                            {
                                v64 = v4 + 32;
                                v65 = *(v64);
                                v58 = &g_0;
                            }
                            if (v69 != 0 || v5 != v70)
                            {
                                if ((v69 == 0 || *(v64) != 0) && (v3 == 0 || *(v64) != 0) && (v69 != 0 || v3 != 0 || *(v64) != 0))
                                {
                                    v67 = v14->field_20;
                                }
                                if (*(v64) == 0 && v69 != 0 || *(v64) == 0 && v3 != 0 || v69 == 0 && v3 == 0 && *(v64) == 0)
                                {
                                    v76 = (char)v9;
                                    v75 = v8;
                                    v58 = v10;
                                    v77 = v66 != &g_0;
                                    v54 = (long long)(int)v14->field_0;
                                    if (v77 == 0 && v3 == 0 && (char)v9 == 0)
                                    {
                                        break;
                                    }
                                    if (v77 != 0 || (char)v9 != 0)
                                    {
                                        if (v1 != 0)
                                        {
                                            if (v77 != 0)
                                            {
                                                v11 = v66;
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406cd8, 0x5));
                                                v87 = v3;
                                                while (true)
                                                {
                                                    fprintf(stderr, " '--%s", (unsigned int)*((long long *)v87));
                                                    if (v11 == 0)
                                                    {
                                                        break;
                                                    }
                                                    v87 = *((long long *)v11);
                                                }
                                                fputc(0xa, stderr);
                                            }
                                            else if (v76 != 0)
                                            {
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406c9b, 0x5));
                                            }
                                            if (v76 != 0 || v77 != 0)
                                            {
                                                v101 = v14->field_20;
                                                *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                                                *((unsigned long long **)(v14 + &g_8)) = &g_0;
                                                v105 = &v101[strlen(v14->field_20)];
                                                v14->field_20 = v105;
                                            }
                                        }
                                        if (v1 == 0 || v76 == 0 && v77 == 0)
                                        {
                                            v83 = v14->field_20;
                                            v0 = v12->field_0;
                                            *((unsigned long long **)(v14 + &g_8)) = &g_0;
                                            v86 = &v83[strlen(v14->field_20)];
                                            v14->field_20 = v86;
                                            *((unsigned long long **)&v14->field_0) = v0 + (char *)&g_0;
                                            if (v66 == 0)
                                            {
                                                break;
                                            }
                                            v91 = v66;
                                            while (true)
                                            {
                                                v98 = *((long long *)&((char *)&g_8)[v91]);
                                                free(v91);
                                                v91 = v98;
                                                if (v98 == 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0))
                            {
                                v80 = v54 + &g_0;
                                *((unsigned long long **)&v14->field_0) = (unsigned int)v54 + (char *)&g_0;
                                v81 = *((int *)&((char *)&g_8)[v3]);
                                if (v75[0] != 0)
                                {
                                    if (v81 != 0)
                                    {
                                        v88 = v75 + &g_0;
                                        v14->field_10 = v88;
                                    }
                                    else
                                    {
                                        if (v1 != 0)
                                        {
                                            v93 = *((long long *)(v2 + v80 * &g_8 + -0x1 * &g_8));
                                            if (*((char *)(v93 + &g_0)) != 45)
                                            {
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406d38, 0x5));
                                            }
                                            else
                                            {
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406d08, 0x5));
                                            }
                                        }
                                        v51 = 63;
                                        v14->field_20 = v12->field_20 + strlen(v14->field_20);
                                        *((int *)(v14 + &g_8)) = *((int *)(v3 + 24));
                                    }
                                }
                                else
                                {
                                    if (v81 == 1)
                                    {
                                        if ((unsigned int)v80 < v58)
                                        {
                                            v94 = (unsigned long long *)((unsigned int)v54 + (char *)&g_0);
                                            v14->field_0 = v94;
                                            v14->field_10 = *((long long *)(v2 + v80 * &g_8));
                                        }
                                        else
                                        {
                                            if (v1 != 0)
                                            {
                                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406d68, 0x5));
                                            }
                                            v14->field_20 = v12->field_20 + strlen(v14->field_20);
                                            *((int *)(v14 + &g_8)) = *((int *)(v3 + 24));
                                            break;
                                        }
                                    }
                                }
                                if ((unsigned int)v80 < v58 && v75[0] == 0 || v75[0] == 0 && v81 != 1 || v81 != 0 && v75[0] != 0)
                                {
                                    v14->field_20 = v12->field_20 + strlen(v14->field_20);
                                    if (v6 != 0)
                                    {
                                        *(v6) = v7;
                                    }
                                    v107 = *((long long *)(v3 + 16));
                                    v51 = (unsigned int)*((int *)(v3 + 24));
                                    break;
                                }
                            }
                        }
                        if (unknown)
                        {
                            v51 = 63;
                        }
                        else if ((v75[0] == 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 == 1 && (unsigned int)v80 < v58 || v75[0] != 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 != 0 || v75[0] == 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 != 1) && v6 != 0 || (v75[0] == 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 == 1 && (unsigned int)v80 < v58 || v75[0] != 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 != 0 || v75[0] == 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 != 1) && v6 == 0)
                        {
                            *(v107) = v51;
                            v51 = &g_0;
                        }
                        else if (v75[0] == 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 == 1 && (unsigned int)v80 >= v58 && v1 != 0 || v75[0] == 0 && (v69 == 0 || v77 == 0) && (v69 == 0 || *(v64) == 0) && (v69 == 0 || (char)v9 == 0) && (v77 == 0 || v5 == v70) && (*(v64) == 0 || v5 == v70) && (v5 == v70 || (char)v9 == 0) && (v69 == 0 || v3 != 0) && (v5 == v70 || v3 != 0) && v81 == 1 && (unsigned int)v80 >= v58 && v1 == 0)
                        {
                            v51 = 58;
                        }
                        else if (unknown)
                        {
                            v150 = v51;
                            return v150;
                        }
                    }
                    if (v1 != 0 && (*(&((char *)&g_0)[*((long long *)(v2 + (v54 << &g_0)))]) == 45 || (unsigned int)v57 == 0) && (*(&((char *)&g_0)[*((long long *)(v2 + (v54 << &g_0)))]) == 45 || (unsigned int)v57 != 0))
                    {
                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406d90, 0x5));
                        v54 = (unsigned long long)v14->field_0;
                    }
                }
                if ((unsigned int)v57 != 0)
                {
                    if ((v59 == 0 || *(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) == 45 || *((char *)(v55 + &g_0)) != 0) && *(&((char *)&g_0)[*((long long *)(v2 + (v54 << &g_0)))]) != 45)
                    {
                        v5 = (unsigned int)v54;
                        *((struct struct_3 *)&v3[0]) = v14->field_20;
                        v82 = strchr(v0, v14->field_20->field_0);
                        v52 = v3;
                        v54 = (unsigned long long)v5;
                    }
                }
                else
                {
                    if (*(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) == 45 && v1 != 0)
                    {
                        v52 = v14->field_20;
                    }
                }
                if (unknown)
                {
                    v110 = (int)v14->field_0;
                    if (*((char *)(v97 + &g_0)) != 0)
                    {
                        v112 = (unsigned long long *)(v12->field_0 + (char *)&g_0);
                        v14->field_10 = v89;
                        v14->field_0 = v112;
                    }
                    else if (v58 != v12->field_0)
                    {
                        v14->field_0 = (unsigned int)(unsigned long long *)((long long)(int)v12->field_0 + (char *)&g_0);
                        v89 = *((long long *)(v2 + v110 * &g_8));
                        v14->field_10 = *((long long *)(v2 + v110 * &g_8));
                    }
                    else
                    {
                        if (v1 != 0)
                        {
                            fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406dd0, 0x5));
                        }
                        *((unsigned int *)(v14 + &g_8)) = v97[0];
                        v121 = &g_0;
                        v122 = v0[0] != 58;
                        v51 = r13 * &g_0 + 58;
                    }
                }
            }
            if (v4 == 0 || (unsigned int)v57 == 0 && *(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) != 45 || *((char *)(v55 + &g_0)) == 0 && v59 != 0 && *(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) != 45 || v82 != 0 && *(&((char *)&g_0)[*((long long *)(v2 + (v54 << &g_0)))]) != 45 && (unsigned int)v57 != 0)
            {
                v89 = v97 + &g_0;
                *((char *[3])&v3[0]) = v97;
                v14->field_20 = v97 + &g_0;
                v51 = v97[0];
                v90 = strchr(v0, v97[0]);
                v97 = v3;
                if (*((char *)(v3 + &g_0)) == 0)
                {
                    *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                }
            }
            if ((unsigned int)v57 == 0 && *(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) == 45 && v4 != 0 && v1 != 0 && *(&((char *)&g_0)[*((long long *)(v2 + (v54 << &g_0)))]) != 45 || v82 == 0 && *(&((char *)&g_0)[*((long long *)(v2 + (v54 << &g_0)))]) != 45 && v4 != 0 && (unsigned int)v57 != 0 && (v59 == 0 || *(&((char *)&g_0)[*((long long *)(v2 + ((int)v14->field_0 << &g_0)))]) == 45 || *((char *)(v55 + &g_0)) != 0) && v1 != 0)
            {
                *((char *[3])&v0[0]) = v52;
                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406db0, 0x5));
                v54 = v14->field_0;
            }
            if (unknown)
            {
                v106 = v54 + &g_0;
                v51 = 63;
                v14->field_20 = &g_406cd4;
                *((unsigned long long **)&v14->field_0) = v106;
                *((unsigned long long **)(v14 + &g_8)) = &g_0;
            }
            if (unknown)
            {
                v108 = (char)*((char *)(v90 + &g_0));
            }
            if (unknown)
            {
                if (v1 != 0)
                {
                    fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406cb9, 0x5));
                }
                *((unsigned int *)(v14 + &g_8)) = v97[0];
                v51 = 63;
            }
            if (unknown)
            {
                v111 = (char)*((char *)(v3 + &g_0));
                if (*((char *)(v90 + &g_0)) != 58)
                {
                    v113 = (int)v14->field_0;
                    if (v111 != 0)
                    {
                        v114 = (unsigned long long *)(v12->field_0 + (char *)&g_0);
                        v14->field_10 = v89;
                        v14->field_0 = v114;
                    }
                    else
                    {
                        if (v58 != v12->field_0)
                        {
                            v14->field_0 = (unsigned int)(unsigned long long *)((long long)(int)v12->field_0 + (char *)&g_0);
                            v14->field_10 = *((long long *)(v2 + v113 * &g_8));
                        }
                        else
                        {
                            if (v1 != 0)
                            {
                                fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406dd0, 0x5));
                            }
                            *((unsigned int *)(v14 + &g_8)) = v97[0];
                            v131 = &g_0;
                            v132 = v0[0] != 58;
                            v51 = r13 * &g_0 + 58;
                        }
                    }
                }
                else if (v111 != 0)
                {
                    v14->field_10 = v89;
                    *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                }
                else
                {
                    v14->field_10 = &g_0;
                }
                v14->field_20 = &g_0;
            }
            if (unknown)
            {
                v14->field_20 = &v89[0];
                v115 = v89[0];
                v116 = v89;
                if (v89[0] != 0)
                {
                    while (v115 != 61)
                    {
                        v116 += &g_0;
                        v115 = v116[0];
                        if ((char)v115 == 0)
                        {
                            break;
                        }
                    }
                }
                v119 = *((long long *)v4);
                if (*((long long *)v4) != 0)
                {
                    *((unsigned long long *)&v9) = v115;
                    v123 = v116 - v89;
                    *((char *[3])&v7[0]) = v116;
                    v124 = &g_0;
                    v8 = v58;
                    v125 = v116 - v89;
                    v126 = v4;
                    v12 = &v14->field_0;
                    v127 = v119;
                    v128 = &g_0;
                    *((unsigned long long **)&v5) = &g_0;
                    *((unsigned long long **)&v4) = &g_0;
                    v3 = v123;
                    while (true)
                    {
                        v129 = strncmp(v127, v89, v125);
                        if (v129 == 0)
                        {
                            v130 = strlen(v127);
                            if (v3 == v130)
                            {
                                v133 = v124;
                                v134 = v7;
                                v135 = v9;
                                v14 = v12;
                                v5 = v133;
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
                                v5 = v124;
                                v128 = v126;
                            }
                        }
                        if (v3 != v130 || v129 != 0)
                        {
                            v126 += 32;
                            v127 = *((long long *)v126);
                            v124 += (char *)&g_0;
                            if (*((long long *)v126) == 0)
                            {
                                v135 = v9;
                                v134 = v7;
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
                                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406e00, 0x5));
                                        v89 = v12->field_20;
                                    }
                                    v51 = 63;
                                    *((unsigned long long **)&v14->field_0) = v14->field_0 + (char *)&g_0;
                                    v142 = &v89[strlen(v89)];
                                    v14->field_20 = v142;
                                }
                            }
                        }
                        if ((*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0))
                        {
                            v136 = *((int *)&((char *)&g_8)[v128]);
                            if (v135 != 0)
                            {
                                if (v136 != 0)
                                {
                                    v138 = v134 + &g_0;
                                    v14->field_10 = v138;
                                }
                                else
                                {
                                    if (v1 != 0)
                                    {
                                        fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406e28, 0x5));
                                        v89 = v14->field_20;
                                    }
                                    v51 = 63;
                                    v145 = &v89[strlen(v89)];
                                    v14->field_20 = v145;
                                }
                            }
                            else
                            {
                                if (v136 != 1)
                                {
                                    v14->field_10 = &g_0;
                                }
                                else
                                {
                                    v139 = (int)v14->field_0;
                                    if (v14->field_0 < v126)
                                    {
                                        *((unsigned long long **)&v14->field_0) = (unsigned int)v139 + (char *)&g_0;
                                        v14->field_10 = *((long long *)(v2 + v139 * &g_8));
                                    }
                                    else
                                    {
                                        if (v1 != 0)
                                        {
                                            fprintf(stderr, (unsigned long long)dcgettext(0x0, 0x406e58, 0x5));
                                        }
                                        v146 = v14->field_20;
                                        v147 = -1;
                                        v148 = v14->field_20;
                                        while (v147 != 0)
                                        {
                                            v147 += -0x1 * &g_0;
                                            v149 = v148[0];
                                            v148 = &v148[v41];
                                            break;
                                        }
                                        v14->field_20 = &v146[!(rcx)] - &g_0;
                                        if (v0[0] != 58)
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                            if (v135 == 0 && v14->field_0 < v126 || v135 == 0 && v136 != 1 || v135 != 0 && v136 != 0)
                            {
                                v144 = &v89[strlen(v89)];
                                v14->field_20 = v144;
                                if (v6 != 0)
                                {
                                    *(v6) = v5;
                                }
                                v107 = *((long long *)(v128 + 16));
                                v51 = (unsigned int)*((int *)(v128 + 24));
                                if (*((long long *)(v128 + 16)) != 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    if (v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 >= v126 && v1 != 0 || v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 >= v126 && v1 == 0)
                    {
                        v51 = 63;
                    }
                    else if ((v135 == 0 && v136 != 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 != 0 && v136 != 0 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 < v126) && v6 != 0 || (v135 == 0 && v136 != 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 != 0 && v136 != 0 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 < v126) && v6 == 0)
                    {
                        *(v107) = v51;
                        v51 = &g_0;
                    }
                    else if (*((long long *)v126) == 0 && v4 == 0)
                    {
                        v14->field_20 = &g_0;
                        v51 = 87;
                    }
                    else if ((v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 >= v126 && v1 != 0 || v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 >= v126 && v1 == 0) && v0[0] == 58)
                    {
                        v51 = 58;
                    }
                    else if (v136 == 0 && v135 != 0 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v1 != 0 || v136 == 0 && v135 != 0 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v1 == 0 || *((long long *)v126) == 0 && v4 != 0 || ((v135 == 0 && v136 != 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 != 0 && v136 != 0 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 < v126) && v6 != 0 || (v135 == 0 && v136 != 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 != 0 && v136 != 0 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) || v135 == 0 && v136 == 1 && (*((long long *)v126) == 0 || v3 == v130) && (*((long long *)v126) == 0 || v129 == 0) && (v3 == v130 || v4 == 0) && (v129 == 0 || v4 == 0) && (v3 == v130 || v128 != 0) && (v129 == 0 || v128 != 0) && v14->field_0 < v126) && v6 == 0) && *((long long *)(v128 + 16)) == 0)
                    {
                        v150 = v51;
                        return v150;
                    }
                }
            }
            if (unknown)
            {
                v51 = 58;
                *(v107) = v51;
                v51 = &g_0;
                v51 = 63;
            }
            if (unknown)
            {
                v14->field_20 = &g_0;
                v51 = 87;
            }
        }
    }
    if ((unsigned int)v19 > 0 && (v52 == 0 || v52[0] == 0) && (v58 == (unsigned int)v28 || (char)v42 == 0) || v58 != (unsigned int)v28 && (unsigned int)v19 > 0 && (char)v42 != 0 && (v52 == 0 || v52[0] == 0) && (*((char *)(v37 + &g_0)) == 0 || v37[0] != 45) && v14->field_28 == 0 || (unsigned int)v19 <= 0)
    {
        v51 = -18446744069414584321;
    }
    v150 = v51;
    return v150;
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

    v10 = sub_4011b8();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6323760 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern unsigned int g_405ae0;
extern unsigned int g_405aed;
extern unsigned int g_405afc;

int sub_401b70()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v4;  // rbp

    sub_403ed0();
    v4 = dcgettext(0x0, 0x405aed, 0x5);
    dcgettext(0x0, 0x405afc, 0x5);
    v1 = 0;
    v0 = dcgettext(0x0, 0x405ae0, 0x5);
    sub_403b40();
    return v0;
}

int sub_403162()
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

// int sub_403330()

extern uint128_t g_608380;
extern uint128_t g_608390;
extern uint128_t g_6083a0;
extern unsigned long long g_6083b0;

int sub_4035a0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_608380;
    *((uint128_t *)&v1) = g_608390;
    *((uint128_t *)&v2) = g_6083a0;
    v4 = g_6083b0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_402e60();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_403f70()
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

// int sub_403460()

// int sub_403520()

// int sub_4034f0()

// int sub_40194b()

// int sub_403610()

int sub_403c70()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_403e90(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern struct g_6081f8;
extern unsigned long long g_608200;
extern unsigned long long g_608208;
extern unsigned int g_608210;
extern unsigned long long g_608280;

int sub_403270()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_608210;
    if (g_608210 > 1)
    {
        v2 = &g_6081f8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6081f8[(unsigned long long)(g_608210 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_6081f8->field_8 != 6324864)
    {
        v1 = free(g_6081f8->field_8);
        g_608200 = 0x100;
        g_608208 = &g_608280;
    }
    if (g_6081f8 != 0x608200)
    {
        v1 = free(g_6081f8);
        g_6081f8 = &g_608200;
    }
    g_608210 = 1;
    return v1;
}

extern unsigned int g_406c6f;
extern unsigned int g_6081b8;

int sub_403e90()
{
    dcgettext(0x0, 0x406c6f, 0x5);
    error(g_6081b8, 0x0, "%s");
    abort(); /* do not return */
}

// int sub_403470()

int sub_405190()
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rdx

    if (v1 != 0 && v2 == 0)
    {
        return -2;
    }
}

extern unsigned long long g_607e30;

int sub_405828()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_607e30;
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

