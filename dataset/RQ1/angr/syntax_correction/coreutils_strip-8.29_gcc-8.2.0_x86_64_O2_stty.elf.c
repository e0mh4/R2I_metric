
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_406e00()
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
        sub_406e80(); /* do not return */
    }
}

int sub_406122()
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

extern int512_t g_40c3c8;
extern unsigned long long g_40c3d8;

int sub_402680()
{
    char *v1;  // rsi
    unsigned long long v2;  // rbx
    char *v3;  // rdi
    unsigned long long v4;  // rax

    v1 = "0";
    v2 = &g_40c3d8;
    while (true)
    {
        v4 = strcmp(v3, v1);
        if (v4 != 0)
        {
            v2 += 24;
            v1 = *((long long *)(v2 - 24));
            return -18446744069414584321;
        }
        return *((int *)(0x18 * stack_base + (char *)&g_40c3c8));
    }
}

int sub_4026e0()
{
    unsigned long long v0;  // [bp-0x18]
    char v1;  // [bp-0x10]
    unsigned short v2;  // [bp-0xe]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v4 = ioctl(0x1, 0x5413, (unsigned int)&v1);
    if (v4 == 0)
    {
        v5 = v2;
    }
    if (v2 == 0 || v4 != 0)
    {
        v6 = getenv("COLUMNS");
        if (v6 != 0)
        {
            v7 = sub_406fc0();
            if (v7 == 0)
            {
                v5 = v0;
            }
        }
        if (v6 == 0 || v0 - 1 > 2147483646 || v7 != 0)
        {
            v5 = 80;
        }
    }
    return v5;
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

extern unsigned int g_410f10;
extern unsigned int g_410f30;
extern unsigned int g_410f60;
extern unsigned int g_410f80;
extern unsigned int g_410fb0;
extern unsigned long long stderr;

int sub_407d70()
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
                                dcgettext(0x0, 0x410f10, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x410f30, 0x5);
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
                                dcgettext(0x0, 0x410fb0, 0x5);
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
                            dcgettext(0x0, 0x410f80, 0x5);
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
        if ((*((long long *)v17) != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45) && (*((long long *)v17) != 0 || v34 != 0))
        {
            return v42;
        }
    }
    if (*((long long *)v17) == 0 && v28 == 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0 || v34 == 0 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x410f60, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern unsigned int g_41084f;
extern unsigned int g_613240;

int sub_406e80()
{
    dcgettext(0x0, 0x41084f, 0x5);
    error(g_613240, 0x0, "%s");
}

int sub_406e30()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406c30();
}

int sub_4089e0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408960();
}

int sub_406340()
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
    return sub_405e20();
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

int sub_409230()
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

int sub_408b40()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_409170();
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

extern unsigned long long __progname_full;
extern unsigned long long g_6133f8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_404a50()
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
        g_6133f8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern int512_t g_613500;

int sub_406020()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_613500 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_613500 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_4089c0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_408960();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_406a90()
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
    return sub_406690();
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[8];
    struct struct_3 *field_10;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
    char field_8;
    char padding_9[7];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned int field_8;
    char field_c;
    char padding_d[3];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

extern unsigned int g_40bf34;
extern unsigned int g_40c060;
extern unsigned long long g_40c7e0;
extern unsigned long long g_40c9c0;
extern unsigned int g_40f590;
extern unsigned int g_40f600;
extern unsigned int g_40f628;
extern unsigned int g_40f678;
extern unsigned int g_40f6b0;
extern unsigned int g_40f6d8;
extern unsigned int g_411037;
extern unsigned int g_613230;
extern unsigned int g_6132b8;
extern unsigned int g_6132bc;
extern char g_613320;
extern unsigned int g_613328;
extern unsigned int g_613360;
extern unsigned int g_613364;
extern unsigned int g_613368;
extern char g_61336c;
extern int512_t g_613370;
extern char g_613371;
extern unsigned int g_6133dc;
extern unsigned int g_6133e0;
extern unsigned long long g_613580;
extern unsigned long long stdout[7];

int main()
{
    unsigned long v0;  // [bp-0x78]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x58]
    char v4;  // [bp-0x4b]
    char v5;  // [bp-0x4a]
    char v6;  // [bp-0x49]
    char v7;  // [bp-0x3a]
    char v8;  // [bp-0x39]
    unsigned long long v10;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // r13
    unsigned long long v12;  // rsi
    struct v13;  // rbx
    char *v17;  // rdi
    unsigned long long v18;  // rcx
    unsigned long long v19;  // rbp
    char *v21;  // rsi
    unsigned long long v22;  // rsi
    unsigned long long v23;  // cc_dep1
    unsigned long long v24;  // cc_dep2
    unsigned long v25;  // d
    unsigned long long *v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v31;  // rax
    unsigned long v33;  // r9
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rbp
    unsigned long long v42;  // rbx
    unsigned long long v47;  // rbx
    unsigned long long v51;  // rdx
    char *v55;  // rax
    char *v56;  // rax
    char *v57;  // rax
    unsigned long long v58;  // rbx
    unsigned long long v60;  // rbx
    unsigned long long v61;  // r13
    char *v62;  // rbp
    unsigned long long v63;  // rax
    struct v67;  // rbx
    char *v68;  // rbp
    unsigned long long v69;  // rax
    unsigned long long v70;  // r12
    struct v74;  // rbx
    char *v78;  // rax
    char *v79;  // rax
    unsigned long long v80;  // rbx
    struct v81;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v82;  // r12
    struct v83;  // rbx
    unsigned long long v84;  // rbp
    unsigned long long v85;  // r12
    unsigned int v86;  // ebp
    char *v87;  // rax
    unsigned int *v88;  // rax
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rdx
    char *v93;  // rax
    unsigned int *v94;  // rax
    unsigned long long v95;  // rdx
    unsigned long long v96;  // rcx
    unsigned long long v97;  // rdx
    char *v101;  // rax

    v10 = 1;
    v11 = 0;
    v19 = 0;
    v13 = v12;
    sub_404a50();
    setlocale(0x6, 0x411037);
    bindtextdomain(0x40bf34, 0x40f590);
    textdomain(0x40bf34);
    sub_40bd50();
    v6 = 1;
    g_6132b8 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v2 = v12 + 8;
    while (true)
    {
        if ((unsigned int)v1 != -1)
        {
            if ((unsigned int)v1 != 70)
            {
                if (v1 > 70)
                {
                    if ((unsigned int)v1 == 97)
                    {
                        v5 = 1;
                        v11 = 1;
                    }
                    if ((unsigned int)v1 == 103)
                    {
                        v4 = 1;
                        v11 = 2;
                    }
                }
                else
                {
                    if ((unsigned int)v1 == -131)
                    {
                        sub_406af0();
                        exit(0x0); /* do not return */
                    }
                    if ((unsigned int)v1 == -130)
                    {
                        sub_402d90(); /* do not return */
                    }
                }
                if ((v1 <= 70 || (unsigned int)v1 != 103) && (v1 <= 70 || (unsigned int)v1 != 97) && ((unsigned int)v1 != -131 || v1 > 70) && (v1 > 70 || (unsigned int)v1 != -130))
                {
                    v17 = "-";
                    v18 = 7;
                    v19 = 1;
                    v21 = v13->field_8;
                    while (v18 != 0)
                    {
                        v18 -= 1;
                        v23 = *(v21);
                        v24 = *(v17);
                        v17 = &v17[v25];
                        v21 = &v21[v25];
                        break;
                    }
                    if ((v23 > v24) - 0 - (v23 < v24) != 0)
                    {
                        v6 = (strcmp(v13->field_8, "drain") != 0? 0 : (unsigned int)(char)(char)(stack_base)[-73]);
                    }
                    g_6132bc = 0;
                    v10 = 1;
                }
            }
            else if (v3 == 0)
            {
                v3 = g_613580;
            }
            else
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40f600, 0x5));
            }
            if ((v3 == 0 || (unsigned int)v1 != 70) && ((unsigned int)v1 == 70 || v1 > 70) && ((unsigned int)v1 == 103 || (unsigned int)v1 == 97 || (unsigned int)v1 == 70))
            {
                v22 = g_6132bc;
                if (g_6132bc > (unsigned int)v10)
                {
                    v26 = &(&v13->padding_0)[v19 + 8 * v10];
                    v27 = v2 + ((unsigned long long)g_6132bc - 1 - v10 + v10 + v19) * 8;
                    do
                    {
                        *(v26) = 0;
                        v26 = &v26[1];
                    }
                    while (v26 != v27);
                }
                else
                {
                    v22 = v10;
                }
                v10 = v22;
            }
        }
        else if ((v4 & v5) == 0)
        {
            if (v6 == 0)
            {
                if (v5 == 0 && v4 == 0)
                {
                    if (v3 != 0)
                    {
                        *((int *)&v1) = sub_4089e0();
                        v0 = stack_base + -58;
                        sub_403bd0();
                    }
                    else
                    {
                        v3 = dcgettext(0x0, 0x40c060, 0x5);
                        v1 = v33;
                        v0 = stack_base + -58;
                        sub_403bd0();
                        v36 = tcgetattr(0x0, 0x613360);
                    }
                }
                if (v5 != 0 || v4 != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40f678, 0x5));
                }
            }
            else if (v3 == 0)
            {
                v3 = dcgettext(0x0, 0x40c060, 0x5);
                v31 = tcgetattr(0x0, 0x613360);
            }
            if (v3 != 0 && (v5 == 0 || v6 != 0) && (v4 == 0 || v6 != 0))
            {
                v35 = sub_4049e0();
                if (v35 >= 0)
                {
                    v37 = sub_407b50();
                    if (v37 != -1)
                    {
                        v39 = sub_407b50();
                        if (v39 >= 0)
                        {
                            v40 = tcgetattr(0x0, 0x613360);
                        }
                    }
                }
                else
                {
                    v38 = (unsigned int)sub_4064f0();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            if ((v6 == 0 || v35 >= 0) && (v6 == 0 || v3 != 0) && (v6 == 0 || v39 < 0 || v37 == -1) && (v35 >= 0 || v5 != 0 || v4 != 0) && (v5 != 0 || v4 != 0 || v3 != 0) && (v39 < 0 || v37 == -1 || v5 != 0 || v4 != 0))
            {
                v41 = (unsigned int)sub_4064f0();
                error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40f6b0, 0x5));
            }
            if (v5 == 0 && v6 == 0 && v4 == 0 && v3 == 0 && v36 != 0 || v35 >= 0 && v3 != 0 && v39 >= 0 && v37 != -1 && (v5 == 0 || v6 != 0) && (v4 == 0 || v6 != 0) && v40 != 0 || v3 == 0 && v6 != 0 && v31 != 0)
            {
                v42 = (unsigned int)sub_4064f0();
                error(0x1, *(__errno_location()), "%s");
            }
            if (v5 == 0 && v6 == 0 && v4 == 0 && v40 == 0 && v35 >= 0 && v3 != 0 && v39 >= 0 && v37 != -1 && v5 != 0 || v40 == 0 && v35 >= 0 && v3 != 0 && v39 >= 0 && v37 != -1 && (v5 == 0 || v6 != 0) && (v4 == 0 || v6 != 0) && !(v4 == 0 && v6 == 0) || v3 == 0 && v6 != 0 && v31 == 0)
            {
                g_6133dc = 0;
                g_6133e0 = sub_4026e0();
                if (v11 == 1)
                {
                    sub_402930();
                    sub_402ca0();
                    sub_4027c0();
                    v55 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v55) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                    g_6133dc = 0;
                    v67 = &g_40c7e0;
                    while (true)
                    {
                        v62 = v67->field_0;
                        v63 = strcmp(v67->field_0, "min");
                        if (v63 == 0)
                        {
                            break;
                        }
                        if (strcmp(v62, "flush") != 0)
                        {
                            if (*((char *)(v67->field_10 + &g_613371)) != 0)
                            {
                                sub_402b00();
                            }
                            sub_4027c0();
                        }
                        v67 = &v67[1];
                    }
                    sub_4027c0();
                    if (g_6133dc != 0)
                    {
                        v78 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *(v78) = 10;
                        }
                        else
                        {
                            __overflow();
                        }
                    }
                    g_6133dc = 0;
                    v81 = &g_40c9c0;
                    for (v82 = 0; v81->field_0 != 0; v81 = &v81[1])
                    {
                        if ((v81->field_c & 8) == 0)
                        {
                            v86 = v81->field_8;
                            if (v81->field_8 != v82)
                            {
                                v87 = stdout[5];
                                if (stdout[5] < stdout[6])
                                {
                                    stdout[5] = stdout[5] + 1;
                                    *(v87) = 10;
                                }
                                else
                                {
                                    __overflow();
                                }
                                g_6133dc = 0;
                                v82 = v86;
                            }
                            v88 = sub_402750();
                            v89 = v81->field_18;
                            if (v81->field_18 == 0)
                            {
                                v89 = v81->field_10;
                            }
                            if (v88 != 0)
                            {
                                v90 = v89 & *(v88);
                                if (v90 == v81->field_10)
                                {
                                    sub_4027c0();
                                }
                                else if ((v81->field_c & 4) != 0)
                                {
                                    sub_4027c0();
                                }
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                    }
                }
                else if (v11 != 2)
                {
                    sub_402930();
                    sub_4027c0();
                    v57 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v57) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                    g_6133dc = 0;
                    v74 = &g_40c7e0;
                    v61 = 1;
                    while (true)
                    {
                        v68 = v74->field_0;
                        v69 = strcmp(v74->field_0, "min");
                        if (v69 == 0)
                        {
                            break;
                        }
                        v70 = (char)*((char *)(v74->field_10 + &g_613371));
                        if (*((char *)(v74->field_10 + &g_613371)) != v74->field_8 && strcmp(v68, "flush") != 0)
                        {
                            if (v70 != 0)
                            {
                                sub_402b00();
                            }
                            sub_4027c0();
                            v61 = 0;
                        }
                        v74 = &v74[1];
                    }
                    if ((g_61336c & 2) == 0)
                    {
                        sub_4027c0();
                    }
                    else if (v61 == 0)
                    {
                        v79 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *(v79) = 10;
                        }
                        else
                        {
                            __overflow();
                        }
                    }
                    v83 = &g_40c9c0;
                    v84 = 0;
                    v85 = 1;
                    g_6133dc = 0;
                    while (true)
                    {
                        if (v83->field_0 != 0)
                        {
                            if ((v83->field_c & 8) == 0)
                            {
                                if (v83->field_8 != (unsigned int)v84)
                                {
                                    if (v85 == 0)
                                    {
                                        v93 = stdout[5];
                                        if (stdout[5] < stdout[6])
                                        {
                                            stdout[5] = stdout[5] + 1;
                                            *(v93) = 10;
                                        }
                                        else
                                        {
                                            __overflow();
                                        }
                                        g_6133dc = 0;
                                    }
                                    v85 = 1;
                                    v84 = v83->field_8;
                                }
                                v94 = sub_402750();
                                v95 = v83->field_18;
                                if (v83->field_18 == 0)
                                {
                                    v95 = v83->field_10;
                                }
                                if (v94 != 0)
                                {
                                    v96 = v83->field_c;
                                    v97 = v95 & *(v94);
                                    if (v97 != v83->field_10)
                                    {
                                        if ((unsigned long long)((unsigned int)v96 & 5) == 5)
                                        {
                                            v85 = 0;
                                            sub_4027c0();
                                        }
                                    }
                                    else if ((v96 & 2) != 0)
                                    {
                                        v85 = 0;
                                        sub_4027c0();
                                    }
                                }
                                else
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                            if (v94 != 0 || (v83->field_c & 8) != 0)
                            {
                                v83 = &v83[1];
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (v83->field_0 == 0)
                    {
                        v101 = stdout[5];
                    }
                    else if (v83->field_0 == 0)
                    {
                        g_6133dc = 0;
                    }
                }
                if (v11 == 2)
                {
                    v47 = 0;
                    __printf_chk(0x1, "%lx:%lx:%lx", g_613360, g_613364, g_613368, *((int *)&g_61336c));
                    while (true)
                    {
                        v47 += 1;
                        v51 = (char)*(&((char *)&g_613370)[v47]);
                        __printf_chk(0x1, ":%lx", v51);
                        if (v47 == 32)
                        {
                            break;
                        }
                    }
                    v56 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v56) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                }
                if (v11 == 1 || stdout[5] >= stdout[6] && v11 != 2)
                {
                    v101 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v101) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                    g_6133dc = 0;
                }
            }
            if (v5 == 0 && v6 == 0 && v4 == 0 && v3 == 0 && v36 == 0 || v5 == 0 && v6 == 0 && v4 == 0 && v40 == 0 && v35 >= 0 && v3 != 0 && v39 >= 0 && v37 != -1)
            {
                v8 = 0;
                v7 = 0;
                v1 = &g_613360;
                v0 = stack_base + -58;
                sub_403bd0();
                if (v7 == 0)
                {
                    break;
                }
                if (!(tcsetattr(0x0, g_613230, 0x613360) == 0))
                {
                    v58 = (unsigned int)sub_4064f0();
                    error(0x1, *(__errno_location()), "%s");
                }
                else if (tcgetattr(0x0, 0x613320) == 0)
                {
                    if (memcmp(&g_613360, &g_613320, 0x3c) == 0)
                    {
                        break;
                    }
                    g_613328 = g_613328 & 4025548799;
                    if (v8 == 0)
                    {
                        if (memcmp(&g_613360, &g_613320, 0x3c) == 0)
                        {
                            break;
                        }
                    }
                    v80 = (unsigned int)sub_4064f0();
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40f6d8, 0x5));
                }
                else
                {
                    v60 = (unsigned int)sub_4064f0();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40f628, 0x5));
        }
    }
    return 0;
}

typedef struct struct_15 {
    char padding_0[12];
    char field_c;
    char padding_d[3];
    char field_10;
    char padding_11[7];
    unsigned int field_18;
} struct_15;

typedef struct struct_13 {
    char padding_0[16];
    unsigned long long field_10;
} struct_13;

typedef struct struct_9 {
    char padding_0[8];
    unsigned int field_8;
} struct_9;

typedef struct struct_7 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_7;

typedef struct struct_10 {
    char padding_0[19];
    unsigned short field_13;
} struct_10;

typedef struct struct_14 {
    unsigned long long field_0;
    char padding_8[4];
    char field_c;
    char padding_d[3];
    char field_10;
    char padding_11[7];
    unsigned int field_18;
} struct_14;

typedef struct struct_4 {
    char padding_0[12];
    unsigned int field_c;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    char field_10;
} struct_0;

typedef struct struct_11 {
    unsigned long long field_0;
    unsigned int field_8;
} struct_11;

typedef struct struct_3 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[4];
    unsigned int field_c;
    char padding_10[6];
    unsigned short field_16;
} struct_3;

typedef struct struct_8 {
    unsigned long long field_0;
    char padding_8[4];
    unsigned int field_c;
} struct_8;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

typedef struct struct_6 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[1];
    char field_11;
    char padding_12[1];
    unsigned short field_13;
} struct_6;

extern unsigned int g_40c007;
extern unsigned long long g_40c7e0;
extern unsigned long long g_40c7f8;
extern unsigned long long g_40c9c0;
extern unsigned int g_613230;
extern unsigned int g_6133dc;
extern unsigned int g_6133e0;

int sub_403bd0()
{
    unsigned long v0;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x60]
    char *v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    char *v6;  // [bp+0x8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // ecx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // rbp
    unsigned long v9;  // rdx
    unsigned long v10;  // rsi
    char *v11;  // rbx
    unsigned long long v12;  // r13
    char *v13;  // rdi
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // d
    unsigned long long v18;  // r15
    char *v19;  // r14
    unsigned int v20;  // r13d
    unsigned long long v21;  // r12
    unsigned long long v22;  // rax
    struct v23;  // r12
    unsigned long long v24;  // rax
    unsigned long long v25;  // cc_dep1
    unsigned long long v26;  // r14
    unsigned long long v27;  // r12
    char *v28;  // r13
    unsigned long long v29;  // rax
    unsigned int *v30;  // rax
    char *v31;  // rdi
    unsigned long long v32;  // rcx
    unsigned int *v33;  // rax
    unsigned long long v34;  // cc_dep1
    unsigned long long v35;  // cc_dep2
    char v36[2];  // r15
    unsigned long long v37;  // rax
    unsigned long long v38;  // cc_dep1
    char *v39;  // rdi
    char *v40;  // rsi
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep2
    unsigned long long v45;  // rax
    unsigned long long v46;  // cc_dep1
    unsigned long long v47;  // cc_dep2
    char *v48;  // rsi
    char *v49;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v50;  // rax
    unsigned long long v51;  // rdi
    struct v52;  // rbx
    unsigned long long v53;  // cc_dep1
    unsigned long long v54;  // rax
    unsigned long long v55;  // cc_dep1
    char *v56;  // rdi
    char *v57;  // rsi
    unsigned long long v58;  // rax
    char *v60;  // rdi
    unsigned long long v61;  // rcx
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep2
    unsigned long long v64;  // rax
    unsigned long long v65;  // cc_dep1
    unsigned long long v66;  // cc_dep2
    unsigned long long v67;  // rdi
    unsigned long long v69;  // cc_dep1
    unsigned long long v71;  // cc_dep1
    char *v72;  // r9
    unsigned long long v73;  // r13
    char *v75;  // rdi
    unsigned long long v76;  // r14
    unsigned long long v77;  // rax
    unsigned long long v78;  // cc_dep1
    unsigned long long v79;  // cc_dep2
    unsigned long long v80;  // rdi
    unsigned long long v81;  // rsi
    unsigned long long v82;  // r12
    unsigned long long v83;  // rax
    unsigned long long v84;  // cc_dep1
    unsigned long long v85;  // rax
    struct v87;  // rsi
    unsigned long long v88;  // rax
    unsigned long long v90;  // rax
    unsigned long long v91;  // rdx
    char v92;  // dh
    unsigned long long v93;  // rax
    unsigned long long v95;  // rdi
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long long v98;  // rax
    unsigned long v101;  // r8
    struct v102;  // rbx
    unsigned long long v103;  // rax
    unsigned long long v104;  // rax
    unsigned int *v105;  // rax
    unsigned int *v106;  // rax
    unsigned long long v109;  // rax
    unsigned int v111;  // edx
    unsigned long long v112;  // rax
    unsigned long long v114;  // rax
    struct v116;  // rsi
    unsigned int v117;  // eax
    char *v119;  // r12
    unsigned long long v120;  // r13
    unsigned int *v121;  // r14
    unsigned long long v122;  // rbx
    unsigned long long v123;  // rax
    unsigned long long v125;  // rcx
    unsigned long long v126;  // r13
    unsigned long long v127;  // r15
    unsigned long long v129;  // rax
    unsigned long long v130;  // rax
    unsigned long long v132;  // rax
    char *v133;  // rdx
    char v134;  // r15b
    unsigned long long v135;  // rax
    unsigned long long v140;  // rax
    unsigned long long v143;  // rax
    unsigned long long v144;  // rax
    struct v146;  // rsi
    unsigned long long v147;  // rdx
    unsigned int v148;  // eax
    unsigned long long v149;  // rax
    unsigned long long v152;  // rbx
    unsigned long long v153;  // rbx
    unsigned long long v154;  // rbx

    if (v7 > 1)
    {
        v8 = 1;
        v0 = v9;
        v2 = v10;
        while (true)
        {
            v50 = v8;
            v1 = v8 * 8;
            v11 = *((long long *)(v0 + v8 * 8));
            if (*((long long *)(v0 + (v8 << 3))) != 0)
            {
                v12 = 0;
                if (*(v11) == 45)
                {
                    v11 = &v11[1];
                    v12 = 1;
                }
                v13 = "drain";
                v7 = 6;
                v48 = v11;
                while (v7 != 0)
                {
                    v7 -= 1;
                    v14 = *(v48);
                    v15 = *(v13);
                    v13 = &v13[v16];
                    v48 = &v48[v16];
                    break;
                }
                v50 = (v14 > v15) - 0 - (v14 < v15);
                if ((v14 > v15) - 0 - (v14 < v15) == 0)
                {
                    v20 = (unsigned int)v12 ^ 1;
                    g_613230 = v20;
                }
                else
                {
                    v18 = 0;
                    v19 = "parenb";
                    while (true)
                    {
                        v21 = v18;
                        v22 = strcmp(v11, v19);
                        if (v22 != 0)
                        {
                            v18 += 1;
                            v19 = (&g_40c9c0)[4 * v18];
                            if ((&g_40c9c0)[4 * v18] == 0 && v12 == 0)
                            {
                                v26 = &g_40c7f8;
                                v27 = 0;
                                v28 = "intr";
                                while (true)
                                {
                                    v29 = strcmp(v11, v28);
                                    if (v29 != 0)
                                    {
                                        v26 += 24;
                                        v28 = *((long long *)(v26 - 24));
                                        v27 = (unsigned int)v27 + 1;
                                        if (*((long long *)(v26 - 24)) == 0)
                                        {
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        if (v7 - 1 == 1)
                                        {
                                            break;
                                        }
                                        v36 = *((long long *)(v0 + v1 + 8));
                                        if (*((long long *)(v0 + v1 + 8)) == 0)
                                        {
                                            break;
                                        }
                                        v39 = "min";
                                        v7 = 4;
                                        v40 = v28;
                                        v8 = 2;
                                        while (v7 != 0)
                                        {
                                            v7 -= 1;
                                            v43 = *(v40);
                                            v44 = *(v39);
                                            v39 = &v39[v16];
                                            v40 = &v40[v16];
                                            break;
                                        }
                                        v52 = &(&g_40c7e0)[3 * v27];
                                        v53 = (v43 > v44) - 0 - (v43 < v44);
                                        if ((char)v53 != 0)
                                        {
                                            v56 = "time";
                                            v7 = 5;
                                            v57 = v28;
                                            while (v7 != 0)
                                            {
                                                v7 -= 1;
                                                v62 = *(v57);
                                                v63 = *(v56);
                                                v56 = &v56[v16];
                                                v57 = &v57[v16];
                                                break;
                                            }
                                            v69 = (v62 > v63) - 0 - (v62 < v63);
                                            if ((char)v69 != 0)
                                            {
                                                v73 = v36[0];
                                                if (v36[0] != 0)
                                                {
                                                    v76 = v36[1];
                                                    if (v36[1] != 0)
                                                    {
                                                        v82 = 0;
                                                        v83 = strcmp(v36, "^-");
                                                        if (v83 != 0)
                                                        {
                                                            v90 = strcmp(v36, "undef");
                                                            if (v73 == 94 && v90 != 0)
                                                            {
                                                                if (v76 != 63)
                                                                {
                                                                    v82 = (unsigned int)v76 & 159;
                                                                }
                                                                else
                                                                {
                                                                    v82 = 127;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                if (v36[0] == 0 || v36[1] == 0)
                                                {
                                                    v82 = v73;
                                                }
                                            }
                                        }
                                        if ((char)v69 == 0 || (char)v53 == 0 || v73 != 94 && v36[0] != 0 && v90 != 0 && v36[1] != 0 && v83 != 0)
                                        {
                                            v82 = (unsigned int)sub_402ab0();
                                        }
                                        *((unsigned long long *)(v101 + v52->field_10 + 17)) = v82;
                                        v50 = v6;
                                        *(v6) = 1;
                                    }
                                }
                                if (v29 != 0)
                                {
                                    v31 = "i";
                                    v32 = 7;
                                    v48 = v11;
                                }
                                else if (v29 == 0)
                                {
                                    v152 = (unsigned int)sub_406670();
                                }
                                else if (unknown)
                                {
                                    v8 = (unsigned long long)v8 + 1;
                                }
                            }
                        }
                        else
                        {
                            v23 = &(&g_40c9c0)[4 * v21];
                            v24 = v23->field_c;
                            v25 = v23->field_c & 16;
                            if ((char)v25 == 0)
                            {
                                if (v12 == 0)
                                {
                                    v30 = sub_402750();
                                    if (v30 != 0)
                                    {
                                        *(v30) = !(v23->field_18) & *(v30) | *((int *)&v23->field_10);
                                        v50 = v6;
                                        *(v6) = 1;
                                    }
                                    else
                                    {
                                        v37 = strcmp(v19, "evenp");
                                        if (v37 != 0)
                                        {
                                            v45 = strcmp(v19, "parity");
                                            if (v45 != 0)
                                            {
                                                v58 = strcmp(v19, "oddp");
                                                if (v58 == 0)
                                                {
                                                    v1 = *((int *)(v101 + 8));
                                                    *((int *)(v101 + 8)) = *((int *)(v101 + 8)) & -817 | 800;
                                                }
                                            }
                                        }
                                        if (v37 == 0 || v45 == 0)
                                        {
                                            v1 = *((int *)(v101 + 8));
                                            *((int *)(v101 + 8)) = *((int *)(v101 + 8)) & -817 | 288;
                                            v50 = v6;
                                            *(v6) = 1;
                                        }
                                    }
                                }
                                else if ((v24 & 4) != 0)
                                {
                                    v33 = sub_402750();
                                    if (v33 != 0)
                                    {
                                        *(v33) = *(v33) & !((unsigned int)*((long long *)(r12 + 16)) | *((int *)(r12 + 24)));
                                        v50 = v6;
                                        *(v6) = 1;
                                    }
                                    else
                                    {
                                        v41 = strcmp(v19, "evenp");
                                        if (v41 != 0)
                                        {
                                            v54 = strcmp(v19, "parity");
                                            if (v54 != 0)
                                            {
                                                v64 = strcmp(v19, "oddp");
                                            }
                                        }
                                        if (v64 == 0 || v54 == 0 || v41 == 0)
                                        {
                                            v1 = *((int *)(v101 + 8));
                                            *((int *)(v101 + 8)) = *((int *)(v101 + 8)) & -305 | 48;
                                        }
                                    }
                                }
                                else
                                {
                                    *(v6) = 1;
                                }
                            }
                        }
                        if ((&g_40c9c0)[4 * v18] == 0 || v22 == 0)
                        {
                            if (v12 == 0 && v22 != 0 || v22 == 0 && (char)v25 != 0)
                            {
                                v31 = "i";
                                v32 = 7;
                                v48 = v11;
                                while (v32 != 0)
                                {
                                    v32 -= 1;
                                    v34 = *(v48);
                                    v35 = *(v31);
                                    v31 = &v31[v16];
                                    v48 = &v48[v16];
                                    break;
                                }
                                v38 = (v34 > v35) - 0 - (v34 < v35);
                                if ((char)v38 != 0)
                                {
                                    v49 = "ospeed";
                                    v42 = 7;
                                    v48 = v11;
                                    while (v42 != 0)
                                    {
                                        v42 -= 1;
                                        v46 = *(v48);
                                        v47 = *(v49);
                                        v49 = &v49[v16];
                                        v48 = &v48[v16];
                                        break;
                                    }
                                    v55 = (v46 > v47) - 0 - (v46 < v47);
                                    if ((char)v55 != 0)
                                    {
                                        v60 = "rows";
                                        v61 = 5;
                                        v48 = v11;
                                        while (v61 != 0)
                                        {
                                            v61 -= 1;
                                            v65 = *(v48);
                                            v66 = *(v60);
                                            v60 = &v60[v16];
                                            v48 = &v48[v16];
                                            break;
                                        }
                                        v71 = (v65 > v66) - 0 - (v65 < v66);
                                        if ((char)v71 != 0)
                                        {
                                            v75 = "cols";
                                            v7 = 5;
                                            v48 = v11;
                                            while (v7 != 0)
                                            {
                                                v7 -= 1;
                                                v78 = *(v48);
                                                v79 = *(v75);
                                                v75 = &v75[v16];
                                                v48 = &v48[v16];
                                                break;
                                            }
                                            v84 = (v78 > v79) - 0 - (v78 < v79);
                                            if ((char)v84 != 0)
                                            {
                                                v88 = strcmp(v11, "columns");
                                                if (v88 != 0)
                                                {
                                                    v50 = strcmp(v11, "size");
                                                    if ((unsigned int)v50 != 0)
                                                    {
                                                        v98 = strcmp(v11, "line");
                                                        if (v98 != 0)
                                                        {
                                                            v50 = strcmp(v11, "speed");
                                                            if ((unsigned int)v50 != 0)
                                                            {
                                                                v50 = sub_402680();
                                                                if ((unsigned int)v50 != -1)
                                                                {
                                                                    if (v75 != 0)
                                                                    {
                                                                        break;
                                                                    }
                                                                    cfsetispeed(v101, v50);
                                                                }
                                                                else
                                                                {
                                                                    v119 = v11;
                                                                    v120 = 0;
                                                                    v121 = __errno_location();
                                                                    while (true)
                                                                    {
                                                                        *(v121) = 0;
                                                                        if (*(v3) == 58 && *(v121) == 0 && v3 != v119)
                                                                        {
                                                                            v125 = strtoul();
                                                                            v4 = v125;
                                                                            v120 += 1;
                                                                            v119 = &v3[1];
                                                                            v126 = 0;
                                                                            v127 = 58;
                                                                            *((long long *)v101) = *((long long *)&v4);
                                                                            *((unsigned long *)(v101 + 8)) = v5;
                                                                            while (true)
                                                                            {
                                                                                *(v121) = 0;
                                                                                v132 = strtoul();
                                                                                if (*(v121) != 0)
                                                                                {
                                                                                    break;
                                                                                }
                                                                                v133 = v3;
                                                                                v134 = v119 == v133;
                                                                                if ((v132 & -0x100) != 0)
                                                                                {
                                                                                    break;
                                                                                }
                                                                                v119 = &v133[1];
                                                                                *((unsigned long long *)(v101 + v126 + 17)) = v132;
                                                                                v126 += 1;
                                                                                v7 = 58;
                                                                                if (v119 == v133 || v126 == 32 || *(v3) != v127)
                                                                                {
                                                                                    break;
                                                                                }
                                                                                v127 = (unsigned int)(v126 != 31? 58 : (unsigned int)r15);
                                                                            }
                                                                            if (*(v3) == v127 && (v132 & -0x100) == 0 && *(v121) == 0 && v119 != v133)
                                                                            {
                                                                                v50 = v6;
                                                                                *(v6) = 1;
                                                                            }
                                                                            else
                                                                            {
                                                                                v153 = (unsigned int)sub_406670();
                                                                            }
                                                                        }
                                                                        v153 = (unsigned int)sub_406670();
                                                                    }
                                                                    if (v120 == 4)
                                                                    {
                                                                        v50 = v6;
                                                                        *(v6) = 1;
                                                                    }
                                                                    else if (v3 == v119 || v120 == 4 || *(v3) != 58 || *(v121) != 0)
                                                                    {
                                                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v48, 0x5));
                                                                        sub_402d90(); /* do not return */
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                if (v75 != 0)
                                                                {
                                                                    break;
                                                                }
                                                                g_6133e0 = sub_4026e0();
                                                                v50 = sub_402930();
                                                            }
                                                        }
                                                        else if (v7 - 1 != 1)
                                                        {
                                                            if (*((long long *)(v0 + v1 + 8)) != 0)
                                                            {
                                                                v8 = 2;
                                                                v112 = sub_402ab0();
                                                                v7 = v101;
                                                                *((unsigned long long *)(v101 + 16)) = v112;
                                                                if ((v112 & -0x100) != 0)
                                                                {
                                                                    v122 = (unsigned int)sub_406670();
                                                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c007, 0x5));
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if (v75 != 0)
                                                        {
                                                            break;
                                                        }
                                                        g_6133dc = 0;
                                                        g_6133e0 = sub_4026e0();
                                                        v50 = sub_402ca0();
                                                    }
                                                }
                                            }
                                        }
                                        else if (v7 - 1 != 1)
                                        {
                                            v50 = v0;
                                            v7 = v1;
                                            v80 = *((long long *)(v0 + v1 + 8));
                                            if (*((long long *)(v0 + v1 + 8)) != 0)
                                            {
                                                v8 = 2;
                                                if (v75 != 0)
                                                {
                                                    break;
                                                }
                                                sub_402ab0();
                                                v50 = sub_402bd0();
                                            }
                                        }
                                    }
                                    else if (v7 - 1 != 1)
                                    {
                                        v50 = v0;
                                        v7 = v1;
                                        v67 = *((long long *)(v0 + v1 + 8));
                                        if (*((long long *)(v0 + v1 + 8)) != 0)
                                        {
                                            v8 = 2;
                                            if (v75 != 0)
                                            {
                                                break;
                                            }
                                            v81 = (unsigned int)sub_402680();
                                        }
                                    }
                                }
                                else if (v7 - 1 != 1)
                                {
                                    v50 = v0;
                                    v7 = v1;
                                    v51 = *((long long *)(v0 + v1 + 8));
                                    if (*((long long *)(v0 + v1 + 8)) != 0)
                                    {
                                        v8 = 2;
                                        if (v75 != 0)
                                        {
                                            break;
                                        }
                                        v8 = (unsigned int)(2 + 1);
                                        cfsetispeed(v101, sub_402680());
                                        *(v72) = 1;
                                        v50 = v6;
                                        *(v6) = 1;
                                        break;
                                    }
                                }
                            }
                            if (v12 != 0 && ((char)v25 == 0 || v22 != 0) && ((v24 & 4) == 0 || v22 != 0))
                            {
                                v154 = (unsigned int)sub_406670();
                            }
                        }
                        if ((char)v25 == 0 && v33 == 0 && v22 == 0 && v64 != 0 && v54 != 0 && v12 != 0 && (v24 & 4) != 0 && v41 != 0 || (char)v25 == 0 && v30 == 0 && v12 == 0 && v22 == 0 && v37 != 0 && v45 != 0 && v58 != 0)
                        {
                            v77 = strcmp(v19, "nl");
                            if (v77 == 0)
                            {
                                v87 = v101;
                                v7 = -17179869441 & *((long long *)v101);
                                if (v12 != 0)
                                {
                                    v91 = (unsigned int)(*((int *)v101) & -449);
                                    v92 = (char)((*((int *)v101) & -449) >> 8) | 1;
                                    v87->field_4 = *((int *)(v101 + 4)) & -45 | 4;
                                    v50 = v6;
                                    *((unsigned int *)&v87->field_0) = rdx;
                                    *(v6) = 1;
                                }
                                else
                                {
                                    *((long long *)v101) = -17179869441 & *((long long *)v101);
                                    v50 = v6;
                                    *(v6) = 1;
                                }
                            }
                            else
                            {
                                v85 = strcmp(v19, "ek");
                                if (v85 == 0)
                                {
                                    *((short *)(v101 + 19)) = 5503;
                                    v50 = v6;
                                    *(v6) = 1;
                                }
                                else
                                {
                                    v93 = strcmp(v19, "sane");
                                    if (v93 != 0)
                                    {
                                        v97 = strcmp(v19, "cbreak");
                                        if (v97 != 0)
                                        {
                                            v103 = strcmp(v19, "pass8");
                                            if (v103 == 0)
                                            {
                                                v7 = v101;
                                                v111 = *((int *)v101);
                                                v1 = *((int *)(v101 + 8));
                                                if (v12 != 0)
                                                {
                                                    *((int *)(v7 + 8)) = *((int *)(v101 + 8)) & -305 | 288;
                                                    v50 = v6;
                                                    *((unsigned int *)v7) = v111 | 32;
                                                    *(v6) = 1;
                                                }
                                                else
                                                {
                                                    *((int *)(v101 + 8)) = *((int *)(v101 + 8)) & -305 | 48;
                                                    v50 = v6;
                                                    *((unsigned int *)v101) = v111 & -33;
                                                    *(v6) = 1;
                                                }
                                            }
                                            else
                                            {
                                                v109 = strcmp(v19, "litout");
                                                if (v109 == 0)
                                                {
                                                    v116 = v101;
                                                    v7 = -4294967329 & *((long long *)v101);
                                                    v1 = *((int *)(v101 + 8));
                                                    v117 = *((int *)(v101 + 8)) & -305;
                                                    if (v12 != 0)
                                                    {
                                                        v116->field_0 = 4294967328 | *((long long *)v101);
                                                        v116->field_8 = v117 | 288;
                                                        v50 = v6;
                                                        *(v6) = 1;
                                                    }
                                                    else
                                                    {
                                                        *((int *)(v101 + 8)) = *((int *)(v101 + 8)) & -305 | 48;
                                                        v50 = v6;
                                                        *((unsigned long *)v101) = v7;
                                                        *(v6) = 1;
                                                    }
                                                }
                                                else
                                                {
                                                    v114 = strcmp(v19, "raw");
                                                    if (v114 != 0)
                                                    {
                                                        v123 = strcmp(v19, "cooked");
                                                        if (v123 != 0)
                                                        {
                                                            v130 = strcmp(v19, "decctlq");
                                                            if (v130 != 0)
                                                            {
                                                                v135 = strcmp(v19, "tabs");
                                                                if (v135 != 0)
                                                                {
                                                                    v140 = strcmp(v19, "lcase");
                                                                    if (v140 != 0)
                                                                    {
                                                                        v143 = strcmp(v19, "LCASE");
                                                                        if (v143 != 0)
                                                                        {
                                                                            v144 = strcmp(v19, "crt");
                                                                            if (v144 == 0)
                                                                            {
                                                                                *((int *)(v101 + 12)) = *((int *)(v101 + 12)) | 2576;
                                                                                v50 = v6;
                                                                                *(v6) = 1;
                                                                            }
                                                                            else
                                                                            {
                                                                                v149 = strcmp(v19, "dec");
                                                                                if (v149 == 0)
                                                                                {
                                                                                    *((int *)v101) = *((int *)v101) & -2049;
                                                                                    *((char *)(v101 + 17)) = 3;
                                                                                    *((short *)(v101 + 19)) = 5503;
                                                                                    *((int *)(v101 + 12)) = *((int *)(v101 + 12)) | 2576;
                                                                                    v50 = v6;
                                                                                    *(v6) = 1;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                else if (v12 != 0)
                                                                {
                                                                    *((int *)(v101 + 4)) = *((int *)(v101 + 4));
                                                                    v50 = v6;
                                                                    *(v6) = 1;
                                                                }
                                                                else
                                                                {
                                                                    *((int *)(v101 + 4)) = *((int *)(v101 + 4));
                                                                    v50 = v6;
                                                                    *(v6) = 1;
                                                                }
                                                            }
                                                            else if (v12 != 0)
                                                            {
                                                                *((int *)v101) = *((int *)v101);
                                                                v50 = v6;
                                                                *(v6) = 1;
                                                            }
                                                            else
                                                            {
                                                                *((int *)v101) = *((int *)v101);
                                                                v50 = v6;
                                                                *(v6) = 1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        else if (v12 != 0)
                                        {
                                            *((int *)(v101 + 12)) = *((int *)(v101 + 12)) | 2;
                                            v50 = v6;
                                            *(v6) = 1;
                                        }
                                        else
                                        {
                                            *((int *)(v101 + 12)) = *((int *)(v101 + 12)) & -3;
                                            v50 = v6;
                                            *(v6) = 1;
                                        }
                                    }
                                    else
                                    {
                                        v96 = &g_40c7e0;
                                        while (true)
                                        {
                                            v96 += 24;
                                            if (*((long long *)(v96 - 24)) == 0)
                                            {
                                                break;
                                            }
                                            v7 = (char)*((char *)(v96 - 16));
                                            *((char *)(v101 + *((long long *)(v96 - 8)) + 17)) = *((char *)(v96 - 16));
                                        }
                                        for (v102 = &g_40c9c0; v102->field_0 != 0; v102 = (char *)&v102[1].field_0 + 4)
                                        {
                                            v104 = v102->field_c;
                                            if ((v102->field_c & 16) == 0)
                                            {
                                                if ((v104 & 1) != 0)
                                                {
                                                    v105 = sub_402750();
                                                    if (v105 != 0)
                                                    {
                                                        *(v105) = !(v102->field_18) & *(v105) | *((int *)&v102->field_10);
                                                    }
                                                    else
                                                    {
                                                        __assert_fail(); /* do not return */
                                                    }
                                                }
                                                else if ((v104 & 2) != 0)
                                                {
                                                    v106 = sub_402750();
                                                    if (v106 != 0)
                                                    {
                                                        *(v106) = *(v106) & !((unsigned int)*((long long *)(rbx + 16)) | *((int *)(rbx + 24)));
                                                    }
                                                    else
                                                    {
                                                        __assert_fail(); /* do not return */
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (((char)v71 != 0 && (char)v55 != 0 && (char)v84 != 0 && (char)v38 != 0 && ((&g_40c9c0)[4 * v18] == 0 || v22 == 0) && (v12 == 0 || v22 == 0) && ((char)v25 != 0 || v22 != 0) && v88 == 0 || (char)v71 != 0 && (char)v55 != 0 && (char)v38 != 0 && ((&g_40c9c0)[4 * v18] == 0 || v22 == 0) && (v12 == 0 || v22 == 0) && ((char)v25 != 0 || v22 != 0) && (char)v84 == 0) && v7 - 1 != 1)
                        {
                            v50 = v0;
                            v7 = v1;
                            v95 = *((long long *)(v0 + v1 + 8));
                            if (*((long long *)(v0 + v1 + 8)) != 0)
                            {
                                v8 = 2;
                                if (v75 != 0)
                                {
                                    break;
                                }
                                sub_402ab0();
                                v50 = sub_402bd0();
                            }
                        }
                        if (unknown)
                        {
                            v129 = *(v19);
                            if (*(v19) == 114 && v12 == 0 || v129 != 99 && *(v19) != 114 || *(v19) != 114 && v12 != 0)
                            {
                                *((int *)v101) = 0;
                                *((int *)(v101 + 4)) = *((int *)(v101 + 4)) & -2;
                                *((int *)(v101 + 12)) = *((int *)(v101 + 12)) & -8;
                                *((short *)(v101 + 22)) = 0x100;
                                v50 = v6;
                                *(v6) = 1;
                            }
                            else
                            {
                                *((int *)(v101 + 12)) = *((int *)(v101 + 12)) | 3;
                                *((long long *)v101) = *((long long *)v101) | 4294968614;
                                v50 = v6;
                                *(v6) = 1;
                            }
                        }
                        if (unknown)
                        {
                            v152 = (unsigned int)sub_406670();
                        }
                        if ((char)v71 != 0 && (char)v55 != 0 && (char)v84 != 0 && (char)v38 != 0 && ((&g_40c9c0)[4 * v18] == 0 || v22 == 0) && (v12 == 0 || v22 == 0) && ((char)v25 != 0 || v22 != 0) && v88 != 0 && (unsigned int)v50 != 0 && v98 != 0 && (unsigned int)v50 != 0 && (unsigned int)v50 != -1 || (char)v55 == 0 && v7 - 1 != 1 && *((long long *)(v0 + v1 + 8)) != 0 && (char)v38 != 0 && ((&g_40c9c0)[4 * v18] == 0 || v22 == 0) && (v12 == 0 || v22 == 0) && ((char)v25 != 0 || v22 != 0))
                        {
                            cfsetospeed();
                            *(v72) = 1;
                        }
                        if (unknown)
                        {
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v48, 0x5));
                            sub_402d90(); /* do not return */
                        }
                        if (unknown)
                        {
                            v146 = v101;
                            v7 = -8589935105 & *((long long *)v101);
                            v147 = 0x200000200 | *((long long *)v101);
                            v148 = *((int *)(v101 + 12));
                            if (v12 != 0)
                            {
                                v146->field_0 = -8589935105 & *((long long *)v101);
                                v146->field_c = v148 & -5;
                                v50 = v6;
                                *(v6) = 1;
                            }
                            else
                            {
                                *((int *)(v101 + 12)) = *((int *)(v101 + 12)) | 4;
                                v50 = v6;
                                *((unsigned long long *)v101) = v147;
                                *(v6) = 1;
                            }
                        }
                        if (unknown)
                        {
                            v50 = v6;
                            *(v6) = 1;
                        }
                    }
                    if (unknown)
                    {
                        v8 = (unsigned long long)v8 + 1;
                    }
                    else if (v75 == 0 && (char)v38 == 0 && v7 - 1 != 1 && *((long long *)(v0 + v1 + 8)) != 0 && ((&g_40c9c0)[4 * v18] == 0 || v22 == 0) && (v12 == 0 || v22 == 0) && ((char)v25 != 0 || v22 != 0))
                    {
                        return v50;
                    }
                    else if (v75 == 0 && (char)v38 == 0 && v7 - 1 != 1 && *((long long *)(v0 + v1 + 8)) != 0 && ((&g_40c9c0)[4 * v18] == 0 || v22 == 0) && (v12 == 0 || v22 == 0) && ((char)v25 != 0 || v22 != 0))
                    {
                        v50 = v8;
                        v1 = v8 * 8;
                        v11 = *((long long *)(v0 + v8 * 8));
                    }
                }
            }
            v8 = (unsigned long long)v8 + 1;
        }
    }
    return v50;
}

int sub_404bf0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
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
    unsigned long long v27;  // [bp+0x18]
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
            v26 = (unsigned int)sub_404af0();
            v27 = (unsigned int)sub_404af0();
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
                                    v40 = 32;
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                    if (v25 != 0)
                                    {
                                        v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                        v89 = (unsigned int)v39 == 2;
                                    }
                                    else
                                    {
                                        v89 = (unsigned int)v39 == 2;
                                        v80 += 1;
                                        v46 = (v78 ^ 1) & (unsigned int)v33;
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
                                            v33 = rax;
                                        }
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
                                        *((unsigned long long *)&v4) = v4 & v87;
                                        if (v79 > v76)
                                        {
                                            *((char *)(v29 + v76)) = 92;
                                        }
                                        v76 += 1;
                                        v80 += 1;
                                    }
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
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
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
                            v76 = (unsigned int)sub_404bf0();
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
                    v46 = sub_408a60();
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
            }
            if (v89 != 0)
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
            if ((v25 == 0 || v78 == 0) && (v25 == 0 || v76 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_404bf0();
            }
            if ((v25 == 0 || v46 == 0) && (v25 == 0 || v89 != 0) && (v17 == 0 || v46 == 0 || v5 == 0) && (v17 == 0 || v5 == 0 || v89 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && v6 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v25 == 0 || v78 == 0) && (v25 == 0 || v76 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
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

extern unsigned int g_4104cb;
extern unsigned int g_4104cf;
extern unsigned int g_4104df;
extern unsigned int g_4104f6;
extern unsigned int g_410558;
extern unsigned int g_410628;
extern unsigned int g_410648;
extern unsigned int g_410670;
extern unsigned int g_410698;
extern unsigned int g_4106c8;

int sub_406690()
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
    dcgettext(0x0, 0x4104cb, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x410558, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4104cf, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4104df, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4104f6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x410628, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x410648, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x410670, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x410698, 0x5);
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
        dcgettext(0x0, 0x4106c8, 0x5);
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

extern unsigned int g_6133dc;
extern unsigned int g_6133e0;
extern unsigned long long stdout[7];

int sub_4027c0()
{
    char v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd0]
    unsigned int v2;  // [bp-0xcc]
    unsigned long v3;  // [bp-0xc8]
    unsigned long v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    unsigned long v8;  // [bp-0x98]
    unsigned long v9;  // [bp-0x90]
    void v10;  // [bp-0x88]
    void v11;  // [bp-0x78]
    void v12;  // [bp-0x68]
    void v13;  // [bp-0x58]
    void v14;  // [bp-0x48]
    void v15;  // [bp-0x38]
    void v16;  // [bp-0x28]
    void v17;  // [bp-0x18]
    unsigned long v19;  // rsi
    unsigned long v20;  // rdx
    unsigned long v21;  // rcx
    unsigned long v22;  // r8
    unsigned long v23;  // r9
    char v24;  // al
    void v25;  // xmm0
    void v26;  // xmm1
    void v27;  // xmm2
    void v28;  // xmm3
    void v29;  // xmm4
    void v30;  // xmm5
    void v31;  // xmm6
    void v32;  // xmm7
    unsigned int v33;  // ebx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v34;  // rax
    unsigned long long v35[7];  // rdi
    char *v37;  // rcx
    unsigned int v38;  // eax

    v5 = v19;
    v6 = v20;
    v7 = v21;
    v8 = v22;
    v9 = v23;
    if (v24 != 0)
    {
        v10 = v25;
        v11 = v26;
        v12 = v27;
        v13 = v28;
        v14 = v29;
        v15 = v30;
        v16 = v31;
        v17 = v32;
    }
    v3 = stack_base + 8;
    v1 = 8;
    v2 = 48;
    v4 = stack_base + -184;
    v33 = sub_408ae0();
    if (v33 >= 0)
    {
        v34 = g_6133dc;
        v35 = stdout;
        if (g_6133dc > 0)
        {
            v37 = stdout[5];
            if (g_6133e0 - g_6133dc < v33)
            {
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v37) = 10;
                }
                else
                {
                    __overflow();
                }
                g_6133dc = 0;
                v35 = stdout;
            }
            else
            {
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v37) = 32;
                }
                else
                {
                    __overflow();
                    v34 = g_6133dc;
                }
                v38 = v34 + 1;
                v35 = stdout;
                g_6133dc = v38;
            }
        }
        fputs_unlocked(*((long long *)&v0), v35);
        g_6133dc = g_6133dc + v33;
        return (unsigned long long)free(*((long long *)&v0));
    }
    sub_406e80(); /* do not return */
}

extern int512_t g_613228;

// int sub_40bd50()

int sub_406e60()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern unsigned long long g_6133f0;

int sub_404920()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6133f0 = v1;
    return v2;
}

// int sub_4065e0()

extern unsigned int g_410512;
extern unsigned int g_41053d;
extern unsigned int g_410770;

int sub_406bb0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x410512, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41053d, 0x5));
    dcgettext(0x0, 0x410770, 0x5);
}

// int sub_406430()

// int sub_4065d0()

extern int512_t g_613500;

int sub_406000()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_613500 : v1));
}

int sub_408a00()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408390();
}

extern unsigned int g_40f70c;
extern unsigned int g_613240;
extern char g_6133e8;
extern unsigned long long g_6133f0;

int sub_404940()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_408b40();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_6133e8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40f70c, 0x5);
            if (g_6133f0 != 0)
            {
                sub_4064c0();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_6133e8 != 0)
    {
        v3 = sub_408b40();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_6133e8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_613240);
        error(0x0, *(v2), "%s");
    }
}

extern int512_t g_613500;

int sub_406010()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_613500 : v1)) = v2;
    return &g_613500;
}

// int sub_406220()

extern unsigned int g_40bdc5;

int sub_402ab0()
{
    unsigned long long v0;  // [bp-0x28]

    dcgettext(0x0, 0x40bdc5, 0x5);
    v0 = 0;
    return sub_406ec0();
}

// int sub_406320()

int sub_408a40()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408390();
}

// int sub_4064e0()

extern unsigned int g_613538;

int sub_407b50()
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
        if (g_613538 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_407b50();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_613538 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_613538 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_407b50();
        }
        if ((*(v12) == 22 || g_613538 < 0) && (g_613538 < 0 || (unsigned int)v15 < 0) && (g_613538 == -1 || g_613538 >= 0) && (g_613538 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_613538 >= 0))
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

int sub_406cd0()
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
        sub_406e80(); /* do not return */
    }
}

int sub_408ae0()
{
    unsigned long long v0;  // [bp-0x10]
    void *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long *v4;  // rdi

    v2 = sub_409290();
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

int sub_402750()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rsi
    unsigned long v4;  // rsi
    unsigned long v5;  // rsi

    switch ((unsigned int)v1)
    {
    case 0:
        return v4 + 8;
    case 1:
        return v3;
    case 2:
        return v5 + 4;
    case 3:
        return v2 + 12;
    case 4:
        return 0;
    default:
        abort(); /* do not return */
    }
}

extern char g_6133e8;

int sub_404930()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_6133e8 = v1;
    return v2;
}

extern uint128_t g_613500;
extern uint128_t g_613510;
extern uint128_t g_613520;
extern unsigned long long g_613530;

int sub_40643f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_613530;
    *((uint128_t *)&v0) = g_613500;
    *((uint128_t *)&v1) = g_613510;
    *((uint128_t *)&v2) = g_613520;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_405e20();
}

int sub_407c90()
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

int sub_40614b()
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
    v7 = (unsigned int)sub_404bf0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_406c30();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_404bf0();
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

int sub_4064f0()
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
    return sub_405e20();
}

int sub_409170()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4091f0() != 0)
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

extern char g_6132e8;
extern unsigned long long g_6132f0;

int sub_402621()
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

    if (g_6132e8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_6132f0 >= 0)
            {
                break;
            }
            g_6132f0 = g_6132f0 + 1;
            *((long long *)(6368832 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_6132e8 = 1;
        return sub_4025cb();
    }
    return v4;
}

// int sub_406620()

int sub_406af0()
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
        return sub_406690();
    }
}

int sub_406de0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406c30();
}

int sub_406c30()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_406e80(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

// int sub_4062f0()

int sub_407710()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // rdi
    unsigned long long v36;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // rdi
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
                                    /* goto *((long long *)(rdx * 8 + 4262864)); */
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
        if ((*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v34 = v30;
                v35 = 6;
                do
                {
                    v33 = v33 * v34;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v43 = v35;
                    v35 -= 1;
                }
                while (v43 != 1);
            case 5: case 37:
                v28 = v30;
                if (!(INVALID_IR))
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
                v37 = 5;
                do
                {
                    v33 = v33 * v36;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v44 = v37;
                    v37 -= 1;
                }
                while (v44 != 1);
            case 18: case 50:
                v38 = v30;
                v5 = 4;
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
                break;
            case 23:
                v40 = v30;
                v5 = 8;
                do
                {
                    v33 = v33 * v40;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
            case 24:
                v39 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v39;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
            case 32:
                if (INVALID_IR)
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v49 = &v32[v31];
                *(v12) = v49;
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
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

extern unsigned long long *g_613298;
extern unsigned long long g_6132a0;
extern unsigned long long g_6132a8;
extern unsigned int g_6132b0;
extern unsigned long long g_613400;

int sub_406230()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_6132b0;
    if (g_6132b0 > 1)
    {
        v2 = &g_613298[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_613298[2 * (unsigned long long)(g_6132b0 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_613298[1] != 0x613400)
    {
        v1 = free(g_613298[1]);
        g_6132a0 = 0x100;
        g_6132a8 = &g_613400;
    }
    if (g_613298 != 6369952)
    {
        v1 = free(g_613298);
        g_613298 = &g_6132a0;
    }
    g_6132b0 = 1;
    return v1;
}

int sub_405fc0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_406e30();
}

extern int512_t g_613500;

int sub_4060b0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_613500 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_404bf0();
}

// int sub_406600()

// int sub_4064b0()

int sub_406eac()
{
    abort(); /* do not return */
}

int sub_406ec0()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    if (rbp == 0)
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
        rbp = sub_407710();
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
    if (v0 < v3 || v0 > v5 || rbp != 0)
    {
        sub_406670();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

extern unsigned long long program_invocation_short_name;

int sub_4025cb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_406630()

int sub_406fc0()
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long *v1;  // [bp-0x58]
    char v2;  // [bp-0x49]
    char v3;  // [bp-0x40]
    unsigned long v5;  // rcx
    unsigned int v6;  // edx
    char **v7;  // rsi
    unsigned long long *v8;  // rbx
    unsigned int *v9;  // r13
    unsigned int *v10;  // r13
    char v11[3];  // r15
    unsigned int v12;  // eax
    unsigned long long v13;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // r12
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rax
    char *v17;  // r8
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rsi
    char v23;  // sil
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13
    unsigned long long v26;  // r13
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rax
    unsigned long long v34;  // r9
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rax
    unsigned long long v37;  // r9
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // r10
    unsigned long long v43;  // rcx
    unsigned long long v44;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v45;  // rdi
    unsigned long long v46;  // rax
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rdi
    unsigned long long v49;  // rcx
    unsigned long long v50;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v51;  // edi
    unsigned long long v52;  // rcx
    unsigned long long v53;  // r9
    unsigned long long v54;  // cc_dep1
    unsigned long long v55;  // cc_dep1
    unsigned long v56;  // rax
    unsigned int v57;  // cc_dep1
    unsigned int v58;  // cc_dep1
    unsigned int v59;  // cc_dep1
    unsigned int v60;  // cc_dep1
    char *v61;  // rsi
    unsigned long long v62;  // rax

    v1 = v5;
    if (v6 <= 36)
    {
        v8 = (v7 == 0? &v3 : v7);
        *(v9) = 0;
        v9 = __errno_location();
        v11 = *(v8);
        v15 = strtol(v51, v7, v6);
        if (*(v8) != v51)
        {
            v12 = *(v10);
            if (*(v10) == 0)
            {
                v14 = 0;
            }
            else
            {
                v14 = 4;
                if (v12 == 34)
                {
                    v14 = 1;
                }
            }
            if ((v12 == 34 || *(v10) == 0) && v17 != 0)
            {
                v13 = v11[0];
                if (v11[0] != 0)
                {
                    v18 = strchr(v17, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
        }
        else
        {
            if (v17 != 0)
            {
                v13 = v11[0];
                v14 = 4;
                if (v11[0] != 0)
                {
                    v15 = 1;
                    v14 = 0;
                    v16 = strchr(v17, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
            if ((v16 == 0 || v17 == 0) && (v17 == 0 || v11[0] != 0))
            {
                v14 = 4;
            }
        }
        if (*(v8) == v51 && v11[0] != 0 && v17 != 0 && v16 != 0 || *(v8) != v51 && v11[0] != 0 && v17 != 0 && (v12 == 34 || *(v10) == 0) && v18 != 0)
        {
            v19 = v13 - 69;
            if ((v13 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v2) = v19;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0)
                {
                    v20 = strchr(v17, 0x30);
                    if (v20 != 0 && v11[1] != 68)
                    {
                        if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 105)
                        {
                            v24 = v2;
                            if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 66)
                            {
                                /* goto *((long long *)(rdx * 8 + 4262472)); */
                            }
                        }
                        else
                        {
                            v22 = 0;
                            v21 = 0x400;
                            v23 = v11[2] == 66;
                            v38 = rsi * 2 + 1;
                        }
                    }
                }
            }
        }
        if ((*(v8) == v51 && v11[0] != 0 && v17 != 0 && v16 != 0 || *(v8) != v51 && v11[0] != 0 && v17 != 0 && (v12 == 34 || *(v10) == 0) && v18 != 0) && (v13 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0 && v20 == 0 || (*(v8) == v51 && v11[0] != 0 && v17 != 0 && v16 != 0 || *(v8) != v51 && v11[0] != 0 && v17 != 0 && (v12 == 34 || *(v10) == 0) && v18 != 0) && (v13 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) == 0 || (*(v8) == v51 && v11[0] != 0 && v17 != 0 && v16 != 0 || *(v8) != v51 && v11[0] != 0 && v17 != 0 && (v12 == 34 || *(v10) == 0) && v18 != 0) && (v13 - 69 & 255) > 47)
        {
            v38 = 1;
            v21 = 0x400;
        }
        if (unknown)
        {
            v38 = 2;
            v21 = 1000;
        }
        if (unknown)
        {
            v25 = (unsigned int)v13 - 66;
            switch (v25)
            {
            case 0:
                if (v15 >= -0x20000000000000 && v15 <= 9007199254740991)
                {
                    v15 *= 0x400;
                    break;
                }
            case 3:
                v39 = v21;
                v27 = (-1 | 0x8000000000000000) % v21;
                v40 = v27;
            case 5: case 37:
                v43 = v21;
                v28 = (-1 | 0x8000000000000000) % v21;
                v44 = v28;
                v45 = 3;
                v42 = 0;
                do
                {
                    if (v15 < v44)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 | 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v43 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v55 = v45;
                    v45 -= 1;
                }
                while (v55 != 1);
            case 9: case 41:
                v47 = v21;
                v46 = (-1 | 0x8000000000000000) % v21;
            case 11: case 43:
                v47 = v21;
                v29 = (-1 | 0x8000000000000000) % v21;
                v48 = v29;
                if (v15 >= v48)
                {
                    v56 = (0 | 9223372036854775807) % v47;
                    if (v15 <= (0 | 9223372036854775807) % v47)
                    {
                        v15 = v47 * v15;
                        if (v15 >= v48 && v56 >= v15)
                        {
                            v15 = v47 * v15;
                            break;
                        }
                    }
                }
            case 14:
                v49 = v21;
                v30 = (-1 | 0x8000000000000000) % v21;
                v50 = v30;
                v51 = 5;
                v42 = 0;
                do
                {
                    if (v50 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 | 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v49 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v57 = v51;
                    v51 = (unsigned long long)v51 - 1;
                }
                while (v57 != 1);
            case 18: case 50:
                v52 = v21;
                v31 = (-1 | 0x8000000000000000) % v21;
                v53 = v31;
                v51 = 4;
                v42 = 0;
                do
                {
                    if (v53 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 | 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v52 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v58 = v51;
                    v51 = (unsigned long long)v51 - 1;
                }
                while (v58 != 1);
                v14 = (unsigned int)v14 | v42;
                break;
            case 23:
                v32 = v21;
                v33 = (-1 | 0x8000000000000000) % v21;
                v34 = v33;
                v51 = 8;
                v42 = 0;
                do
                {
                    if (v34 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 | 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v32 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v59 = v51;
                    v51 = (unsigned long long)v51 - 1;
                }
                while (v59 != 1);
            case 24:
                v35 = v21;
                v36 = (-1 | 0x8000000000000000) % v21;
                v37 = v36;
                v51 = 7;
                v42 = 0;
                do
                {
                    if (v37 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 | 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v35 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v60 = v51;
                    v51 = (unsigned long long)v51 - 1;
                }
                while (v60 != 1);
            case 33:
                break;
            case 53:
                if (!(v15 >= 0xc000000000000000))
                {
                    v15 = 0x8000000000000000;
                    v14 = 1;
                    break;
                    v61 = &v11[v38];
                    *(v8) = v61;
                    v14  = unknown;                }
                else if (v15 <= 4611686018427387903)
                {
                    v15 *= 2;
                    break;
                }
                else
                {
                    v15 = 9223372036854775807;
                    v14 = 1;
                    break;
                }
            default:
                v14 = (unsigned int)v14 | 2;
                *(v1) = v15;
            }
            if (v25 <= 53)
            {
                v26 = v25;
            }
        }
        v38 = 1;
        if (v15 >= -0x40000000000000 && v15 <= 18014398509481983)
        {
            v15 *= 0x200;
        }
        v38 = 1;
        v47 = 0x400;
        v46 = -0x20000000000000;
        if (v15 >= v46)
        {
            v56 = (0 | 9223372036854775807) % v47;
        }
        v38 = 1;
        v35 = 0x400;
        v37 = -0x20000000000000;
        v38 = 1;
        v47 = 0x400;
        v48 = -0x20000000000000;
        v38 = 1;
        v38 = 1;
        v49 = 0x400;
        v50 = -0x20000000000000;
        v38 = 1;
        v39 = 0x400;
        v40 = -0x20000000000000;
        v41 = 6;
        v42 = 0;
        do
        {
            if (v15 < v40)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 | 9223372036854775807) % v39 >= v15)
            {
                v15 = v39 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v54 = v41;
            v41 -= 1;
        }
        while (v54 != 1);
        v38 = 1;
        v52 = 0x400;
        v53 = -0x20000000000000;
        v38 = 1;
        v43 = 0x400;
        v44 = -0x20000000000000;
        v38 = 1;
        v32 = 0x400;
        v34 = -0x20000000000000;
        if ((v15 < 0xc000000000000000 || *(v8) != v51) && (v11[0] == 0 || v15 < 0xc000000000000000 || v17 == 0) && (v12 == 34 || v15 < 0xc000000000000000 || *(v10) == 0))
        {
            *(v1) = v15;
        }
        v62 = v14;
        return v62;
    }
    __assert_fail(); /* do not return */
}

extern unsigned int g_40be02;
extern unsigned int g_40be18;
extern unsigned int g_40be46;
extern unsigned int g_40be5e;
extern unsigned int g_40bf19;
extern unsigned int g_40c195;
extern unsigned int g_40c256;
extern unsigned int g_40d550;
extern unsigned int g_40d578;
extern unsigned int g_40d610;
extern unsigned int g_40d640;
extern unsigned int g_40d690;
extern unsigned int g_40d768;
extern unsigned int g_40d798;
extern unsigned int g_40d7d0;
extern unsigned int g_40d860;
extern unsigned int g_40d898;
extern unsigned int g_40d908;
extern unsigned int g_40d940;
extern unsigned int g_40d9e8;
extern unsigned int g_40da28;
extern unsigned int g_40da58;
extern unsigned int g_40da90;
extern unsigned int g_40db38;
extern unsigned int g_40db78;
extern unsigned int g_40dbb0;
extern unsigned int g_40dc00;
extern unsigned int g_40dc68;
extern unsigned int g_40dcc0;
extern unsigned int g_40dcf0;
extern unsigned int g_40dd18;
extern unsigned int g_40dd98;
extern unsigned int g_40de28;
extern unsigned int g_40dea0;
extern unsigned int g_40df10;
extern unsigned int g_40df40;
extern unsigned int g_40df80;
extern unsigned int g_40e0b8;
extern unsigned int g_40e0f0;
extern unsigned int g_40e1f8;
extern unsigned int g_40e248;
extern unsigned int g_40e2e8;
extern unsigned int g_40e328;
extern unsigned int g_40e368;
extern unsigned int g_40e3b8;
extern unsigned int g_40e488;
extern unsigned int g_40e4c0;
extern unsigned int g_40e500;
extern unsigned int g_40e538;
extern unsigned int g_40e570;
extern unsigned int g_40e5a8;
extern unsigned int g_40e5f8;
extern unsigned int g_40e648;
extern unsigned int g_40e688;
extern unsigned int g_40e6c8;
extern unsigned int g_40e700;
extern unsigned int g_40e748;
extern unsigned int g_40e770;
extern unsigned int g_40e7e8;
extern unsigned int g_40e820;
extern unsigned int g_40e878;
extern unsigned int g_40e910;
extern unsigned int g_40e958;
extern unsigned int g_40e980;
extern unsigned int g_40e9a8;
extern unsigned int g_40ea08;
extern unsigned int g_40ea30;
extern unsigned int g_40ea78;
extern unsigned int g_40eac0;
extern unsigned int g_40eb08;
extern unsigned int g_40eb30;
extern unsigned int g_40eb98;
extern unsigned int g_40ec30;
extern unsigned int g_40ec58;
extern unsigned int g_40eca8;
extern unsigned int g_40ecf0;
extern unsigned int g_40ed18;
extern unsigned int g_40ed60;
extern unsigned int g_40ee10;
extern unsigned int g_40ee60;
extern unsigned int g_40ee88;
extern unsigned int g_40ef20;
extern unsigned int g_40ef50;
extern unsigned int g_40efb8;
extern unsigned int g_40f028;
extern unsigned int g_40f0f8;
extern unsigned int g_40f1f0;
extern unsigned int g_40f3b0;
extern unsigned int g_40f4f0;
extern unsigned int g_40f538;
extern unsigned int g_40f558;
extern unsigned int g_613230;
extern unsigned long long stdout;

int sub_402d90()
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
    unsigned long long v41;  // rbp
    unsigned long long v42;  // rbp
    unsigned long long v107;  // cc_dep1
    unsigned long long v108;  // cc_dep2
    unsigned long v109;  // d
    char *v110;  // rdi
    char *v111;  // rsi
    unsigned long long v112;  // rcx
    unsigned long long *v114;  // rax
    char *v117;  // rax
    char *v118;  // rax
    unsigned long long v119;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x40d550, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d578, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d610, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d640, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d690, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d768, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d798, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d7d0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40be02, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d860, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d898, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d908, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d940, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d9e8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40da28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40da58, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40da90, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40db38, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40db78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dbb0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dc00, 0x5), stdout);
        if (g_613230 != 1)
        {
            v42 = dcgettext(0x0, 0x40c256, 0x5);
        }
        else
        {
            v41 = dcgettext(0x0, 0x40c195, 0x5);
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40dc68, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dcc0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dcf0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dd18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dd98, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40de28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dea0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40df10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40df40, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40df80, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e0b8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e0f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e1f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e248, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e2e8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e328, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e368, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e3b8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40be18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e488, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e4c0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e500, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e538, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e570, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e5a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e5f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e648, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e688, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e6c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e700, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e748, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e770, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e7e8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e820, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e878, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e910, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e958, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e980, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e9a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ea08, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ea30, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ea78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eac0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eb08, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40eb30, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eb98, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ec30, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ec58, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40eca8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40be46, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ecf0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ed18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ed60, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40be5e, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ee10, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ee60, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ee88, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ef20, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ef50, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40efb8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40f028, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f0f8, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f1f0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40f3b0, 0x5), stdout);
        v0 = "[";
        v114 = &v0;
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
            v114 = &v2;
            v110 = v2;
            if (v2 == 0)
            {
                break;
            }
            v111 = "stty";
            v112 = 5;
            if ((v107 > v108) - 0 - (v107 < v108) == 0)
            {
                break;
            }
            while (v112 != 0)
            {
                v112 -= 1;
                v107 = *(v111);
                v108 = *(v110);
                v110 = &v110[v109];
                v111 = &v111[v109];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bf19, 0x5));
            v118 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bf19, 0x5));
            v117 = setlocale(0x5, 0x0);
            if (v117 != 0)
            {
                v119 = strncmp(v117, "en_", 0x3);
            }
            if (v117 == 0 || v119 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f538, 0x5));
            }
        }
        if ((v3 == 0 || v118 != 0) && (v3 == 0 || strncmp(v118, "en_", 0x3) != 0) && (v117 != 0 || v3 != 0) && (v119 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f4f0, 0x5));
        }
        if (v3 != 0 || v117 != 0 && v119 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f538, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f558, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned long long g_40c3e0;
extern unsigned int g_6133dc;

int sub_402930()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // ebp
    unsigned long long v3;  // rsi
    unsigned long long v5;  // rax
    unsigned int v6;  // r12d
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rdi

    v2 = v1;
    v5 = cfgetispeed();
    if (v5 != 0)
    {
        v6 = cfgetispeed();
        v7 = cfgetospeed(v2);
        if (v6 != v7)
        {
            v8 = cfgetospeed(v2);
            if (v8 != 0)
            {
                v10 = &g_40c3e0;
                for (v11 = "50"; v11 != 0; v11 = *((long long *)(v10 - 8)))
                {
                    v10 += 24;
                }
                if (false)
                {
                    v14 = cfgetispeed();
                }
            }
            v14 = cfgetispeed();
            if (v14 != 0)
            {
                v16 = &g_40c3e0;
                for (v17 = "50"; v17 != 0; v17 = *((long long *)(v16 - 8)))
                {
                    v16 += 24;
                }
                if (false)
                {
                    v15 = sub_4027c0();
                }
            }
            v15 = sub_4027c0();
        }
    }
    if (v6 == v7 || v5 == 0)
    {
        v9 = cfgetospeed(v1);
        if (v9 != 0)
        {
            v12 = &g_40c3e0;
            for (v13 = "50"; v13 != 0; v13 = *((long long *)(v12 - 8)))
            {
                v12 += 24;
            }
        }
        v15 = sub_4027c0();
    }
    if (v3 == 0)
    {
        g_6133dc = 0;
    }
    return v15;
}

extern int512_t g_613500;

int sub_406060()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_613500 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_613500 : v1) + 4)) = v3;
    return v2;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

// int sub_406f4d()

// int sub_4062d0()

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

    v10 = sub_401630();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6368816 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

// int sub_406c80()

extern char g_613500;

int sub_406080()
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
    v3 = (v2 == 0? &g_613500 : v2);
    *((int *)(tmp_11? &g_613500 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_613500;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_613500;
        abort(); /* do not return */
    }
}

extern unsigned long long g_612e30;

int sub_40bd68()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_612e30;
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

int sub_406c90()
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
            sub_406e80(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_406c50()
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
        sub_406e80(); /* do not return */
    }
}

extern unsigned int g_6132b4;
extern unsigned int g_6132b8;
extern unsigned int g_6132bc;
extern unsigned int g_613540;
extern unsigned int g_613544;
extern unsigned int g_613548;
extern unsigned long long g_613550;
extern unsigned long long g_613580;

int sub_408960()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_613540 = g_6132bc;
    g_613544 = g_6132b8;
    v1 = (unsigned int)v2;
    v0 = &g_613540;
    g_6132bc = g_613540;
    g_613580 = g_613550;
    g_6132b4 = g_613548;
    return sub_408390();
}

// int sub_406300()

int sub_408a20()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408960();
}

// int sub_406420()

extern unsigned long long g_411037;

int sub_408a60()
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
        v5 = &g_411037;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_408ba0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_4091f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_409230();
    }
}

extern uint128_t g_613500;
extern uint128_t g_613510;
extern uint128_t g_613520;
extern unsigned long long g_613530;

int sub_406560()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_613500;
    *((uint128_t *)&v1) = g_613510;
    *((uint128_t *)&v2) = g_613520;
    v4 = g_613530;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_405e20();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern unsigned short g_613300;
extern char g_613301;
extern unsigned short g_613302;
extern char g_613303;
extern unsigned long long g_613304;

int sub_402b00()
{
    char v1;  // dil
    unsigned int v2;  // edi
    unsigned int v4;  // edi
    unsigned int v6;  // edi
    void *v8;  // rax

    if (v1 > 31)
    {
        if (v1 <= 126)
        {
            *((char *)&g_613300) = v1;
            v8 = &g_613301;
        }
        else if (v1 != 127)
        {
            g_613300 = 11597;
            if (!(v1 > 159))
            {
                *((char *)&g_613302) = 94;
                v8 = &g_613304;
                *((unsigned long long *)&g_613303) = (unsigned long long)v4 - 64;
            }
            else if (v1 != 255)
            {
                v8 = &g_613303;
                *((unsigned long long *)&g_613302) = (unsigned long long)v6 - 128;
            }
            else
            {
                g_613302 = 16222;
                v8 = &g_613304;
            }
        }
        else
        {
            v8 = &g_613302;
            g_613300 = 16222;
        }
        *((char *)v8) = 0;
        return &g_613300;
    }
    *((char *)&g_613300) = 94;
    *((unsigned long long *)&g_613301) = (unsigned long long)v2 + 64;
    *((char *)&g_613302) = 0;
    return &g_613300;
}

extern unsigned int g_40d528;
extern unsigned int g_6133dc;

int sub_402ca0()
{
    char v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x8]
    unsigned long v4;  // rdi
    unsigned int *v5;  // r12
    unsigned long long v8;  // rbx

    if (ioctl(0x0, 0x5413, (unsigned int)&v0) != 0)
    {
        v5 = __errno_location();
        if (*(v5) == 22)
        {
            if ((char)v4 != 0)
            {
                return v1;
            }
            v8 = (unsigned int)sub_4064f0();
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d528, 0x5));
        }
        else
        {
            sub_4064f0();
            error(0x1, *(v5), "%s");
        }
    }
    else if ((char)v4 == 0)
    {
        g_6133dc = 0;
        return sub_4027c0();
    }
    else
    {
        return sub_4027c0();
    }
}

int sub_4049e0()
{
    char *v1;  // rsi
    unsigned int v2;  // edx
    unsigned short v3;  // cx
    unsigned int v5;  // edi
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int *v9;  // rdi

    if (v5 != (unsigned int)v6 && (unsigned int)v6 >= 0)
    {
        close(v5);
        *(v9) = *(v9);
        return dup2(v6, (unsigned int)__errno_location());
    }
    if (v5 == (unsigned int)v6 || (unsigned int)v6 < 0)
    {
        v6 = (unsigned int)open(v1, v2, v3);
        return v7;
    }
}

int sub_406f90()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_406ec0();
}

int sub_4063b0()
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
    return sub_405e20();
}

extern int512_t g_40f766;
extern int512_t g_40f76a;

int sub_404af0()
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
        v3 = sub_408c00();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40f766 : 4257649);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40f76a : 4257645);
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

// int sub_4064c0()

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_613298;
extern uint128_t g_6132a0;
extern unsigned int g_6132b0;
extern int512_t g_613400;

int sub_405e20()
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
    v17 = g_613298;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_6132b0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_613298 != 6369952)
            {
                v16 = sub_406c90();
                g_613298 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_406c90();
                v17 = v15;
                g_613298 = v15;
                *(v15) = g_6132a0;
            }
            memset(&v17[(long long)(int)g_6132b0], 0x0, (int)((unsigned int)v13 + 1 - g_6132b0) * 16);
            g_6132b0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_406e80(); /* do not return */
        }
    }
    if (g_6132b0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_404bf0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 0x613400)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_406c30();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_404bf0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

// int sub_406670()

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

extern unsigned int g_410fd8;
extern unsigned int g_41101c;

int sub_408390()
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
    unsigned long v13;  // rdi
    unsigned long v14;  // rsi
    char *v15[3];  // r12
    char v16[2];  // rdx
    unsigned int v17;  // eax
    unsigned long long v18;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v24;  // r9d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    unsigned long long *v27;  // rdx
    char *v29[3];  // rax
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
        if (!(v17 != 0))
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
        if (v17 == 0 || v0->field_18 == 0)
        {
            v0->field_30 = v17;
            v0->field_2c = v17;
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
        if (v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)
        {
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13);
        }
        if (v19[0] == 0 || v17 == 0 && v19 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && v17 != 0 && v0->field_18 != 0)
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
                        sub_407c90();
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
                            v26 = v0->field_0;
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
                            sub_407c90();
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
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_407d70();
        if ((unsigned int)v45 == -1)
        {
            v48 = v15[(long long)(int)v0->field_0];
        }
    }
    if (unknown)
    {
        v19 = &v48[1];
    }
    if (unknown)
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
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x410fd8, 0x5);
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
            dcgettext(0x0, 0x41101c, 0x5);
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
            else if ((unsigned int)v46 != v8->field_0)
            {
                v58 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x410fd8, 0x5);
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
        v45 = (unsigned int)sub_407d70();
    }
    v63 = v45;
    return v63;
}

int sub_406a70()
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

int sub_402bd0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x30]
    unsigned short v1;  // [bp-0x2e]
    unsigned long long v3;  // rax
    unsigned int *v4;  // r13
    unsigned long v6;  // rdi
    unsigned long v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx

    v3 = ioctl(0x0, 0x5413, (unsigned int)&v0);
    if (v3 != 0)
    {
        v4 = __errno_location();
        if (*(v4) == 22)
        {
            v0 = 0;
        }
        else
        {
            sub_4064f0();
            error(0x1, *(v4), "%s");
        }
    }
    if (*(v4) == 22 || v3 == 0)
    {
        if ((unsigned int)v6 >= 0)
        {
            v0 = v6;
        }
        if ((unsigned int)v7 >= 0)
        {
            v1 = v7;
        }
        v8 = ioctl(0x0, 0x5414, (unsigned int)&v0);
        if ((unsigned int)v8 == 0)
        {
            return v8;
        }
        v9 = (unsigned int)sub_4064f0();
        error(0x1, *(__errno_location()), "%s");
    }
}

// int sub_406650()

int sub_408ba0()
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_411037;
extern char g_613578[2];

int sub_408c00()
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

    v9 = g_613578;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_411037 : (unsigned long long)nl_langinfo(0xe));
    if (g_613578 == 0)
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
            v9 = &g_411037;
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
                        v58 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v59 = __uflow(v10);
                        }
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
                                    v9 = &g_411037;
                                    v10 = (tmp_10 == 0? &g_411037 : tmp_10);
                                    free(NULL);
                                    sub_409170();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v36 != 0 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 > 1)
                        {
                            *((char **)(v10 + 8)) = &v58[1];
                            v59 = *(v58);
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
                            while (v61 != 10 && v62 != 0);
                        }
                        if (v61 == -1 && (unsigned int)v59 == 35 || (unsigned int)v59 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v59 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v27 <= 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_411037 : tmp_10);
                            sub_409170();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1)
                    {
                        v9 = &g_411037;
                    }
                    else if (((unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1) && v0 != 0 || v36 == 0 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_411037;
            free(v17);
        }
        *((char *[2])&g_613578[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_411037 : tmp_10), v9);
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

