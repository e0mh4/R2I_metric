
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_404120()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_408d01;
extern unsigned int g_408d02;
extern unsigned int g_408e2e;

int sub_406790()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x110]
    void *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xe9]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0xe8]
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
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r15d
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbp
    unsigned long long v24;  // r13
    struct v25;  // rax
    unsigned long long v26;  // rdx
    void *v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v29;  // r13
    unsigned long v30;  // r14
    unsigned int v31;  // rax
    unsigned long long v33;  // r8
    unsigned long v38;  // rbx
    unsigned long v39;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // rbx
    unsigned int *v42;  // r12

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
        v17 = __lxstat(0x1, 0x408d02, (unsigned int)&v10);
        if (v17 >= 0)
        {
            v20 = *((long long *)&v10);
            v18 = v11;
            v0 = *((long long *)&v10);
            v19 = __lxstat(0x1, 0x408e2e, (unsigned int)&v10);
            if (v19 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = *((long long *)&v10);
                v5 = *((long long *)&v10) != *((long long *)&v10) | v11 != v11;
                if (v20 != *((long long *)&v10) || v18 != v11)
                {
                    v23 = 0;
                    v20 = -100;
                    v42 = __errno_location();
                    while (true)
                    {
                        v20 = openat(v20, 0x408d01, 0x0);
                        if ((unsigned int)v20 >= 0)
                        {
                            v21 = __fxstat(0x1, v20, (unsigned int)&v10);
                            if (v21 == 0)
                            {
                                if (v23 != 0)
                                {
                                    v22 = closedir();
                                }
                                if (v22 == 0 || v23 == 0)
                                {
                                    v1 = *((long long *)&v10);
                                    v9 = v11;
                                    v23 = fdopendir(v20);
                                    if (v23 != 0)
                                    {
                                        v24 = v5;
                                        while (true)
                                        {
                                            *(v42) = 0;
                                            v25 = readdir();
                                            if (v25 == 0)
                                            {
                                                v41 = *(v42);
                                                if (*(v42) == 0 && v24 != 0)
                                                {
                                                    rewinddir(v23);
                                                    v25 = readdir();
                                                    if (v25 != 0)
                                                    {
                                                        v24 = 0;
                                                    }
                                                    else
                                                    {
                                                        v41 = *(v42);
                                                    }
                                                }
                                                if (v25 == 0 || v24 == 0 || *(v42) != 0)
                                                {
                                                    if ((unsigned int)v41 != 0)
                                                    {
                                                        break;
                                                    }
                                                    *(v42) = 2;
                                                    v41 = 2;
                                                }
                                            }
                                            if (v25 != 0 || *(v42) == 0 && v25 != 0 && v24 != 0)
                                            {
                                                if (v24 != 0 && (v25->field_13 == 46 || v25 != 0) && (v25->field_13 != 46 || *((short *)&v25->field_14) != 46) && (v25->field_13 != 46 || v25->field_14 != 0) && (v25 != 0 || *((short *)&v25->field_14) != 46) && (v25 != 0 || v25->field_14 != 0))
                                                {
                                                    v24 = v26;
                                                }
                                                if ((v25 == 0 || v25->field_13 != 46 || *((short *)&v25->field_14) != 46) && (v25 == 0 || v25->field_13 != 46 || v25->field_14 != 0) && (v25 != 0 || *((short *)&v25->field_14) != 46 || v25->field_13 != 46) && (v25 != 0 || v25->field_13 != 46 || v25->field_14 != 0))
                                                {
                                                    v27 = &v25->field_13;
                                                    v28 = __fxstatat(0x1, v20, (unsigned int)v25 + 19, (unsigned int)&v10, 0x100);
                                                    v29 = &v6[-1 * v2];
                                                    v30 = strlen(v27);
                                                    if (v29 <= v30)
                                                    {
                                                        if (v15 == 0)
                                                        {
                                                            v31 = v4 + (v4 <= v30? v30 : v4);
                                                            *((int *)&v6) = (v4 <= v30? v30 : v4);
                                                            *((unsigned long long *)&v0) = v4 + (v4 <= v30? v30 : v4);
                                                            if (!(INVALID_IR) && v2 != 0)
                                                            {
                                                                v2 = realloc(v2, v31);
                                                                v6 = memcpy(v2 + v6 + v29, v2 + v29, v4 - v29);
                                                                v4 = *((long long *)&v0);
                                                            }
                                                            if (INVALID_IR || v2 == 0)
                                                            {
                                                                *(v42) = 12;
                                                                v41 = 12;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v42) = 34;
                                                            v41 = 34;
                                                        }
                                                    }
                                                    if (v29 > v30 || v15 == 0 && !(INVALID_IR) && v2 != 0)
                                                    {
                                                        v33 = memcpy(&v6[-1 * v30], v27, v30);
                                                        v6 = v33 - 1;
                                                        *((char *)(v33 - 1)) = 47;
                                                        v0 = v1;
                                                        if (v7 != v1 || v8 != v9)
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
                                        if (unknown)
                                        {
                                            v41 = *(v42);
                                        }
                                        else if (unknown)
                                        {
                                            v20 = openat(v20, 0x408d01, 0x0);
                                        }
                                        else if (unknown)
                                        {
                                            closedir();
                                        }
                                    }
                                }
                                if ((v23 == 0 || v22 != 0) && (v23 == 0 || v23 != 0))
                                {
                                    v41 = *(v42);
                                }
                            }
                            else
                            {
                                v41 = *(v42);
                                if (v23 != 0)
                                {
                                    closedir();
                                }
                            }
                            if ((v23 == 0 || v22 != 0 || v21 != 0) && (v23 == 0 || v23 != 0 || v21 != 0))
                            {
                                close(v20);
                            }
                        }
                        else
                        {
                            v41 = *(v42);
                        }
                        if (((unsigned int)v20 < 0 || v21 == 0) && ((unsigned int)v20 < 0 || v23 != 0) && (v22 == 0 || v23 == 0 || (unsigned int)v20 < 0) && (v23 != 0 || (unsigned int)v20 >= 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if ((unsigned int)v20 < 0 || v23 == 0 || v3 != 0 || v21 != 0 || v22 != 0 && v23 != 0)
                    {
                        free(v2);
                    }
                    else if (true)
                    {
                        v41 = *(v42);
                    }
                    else if (false)
                    {
                        if ((unsigned int)v20 < 0 || v23 == 0 || v3 != 0 || v21 != 0 || v22 != 0 && v23 != 0)
                        {
                            *((unsigned long long *)&v42) = v41;
                            v2 = 0;
                        }
                    }
                }
                v6[-1] = 47;
                v6 = &v6[-1];
                v38 = v16 + -0x1 * v6;
                v39 = v38;
                memmove(v2, v6, v39);
                if (v15 == 0)
                {
                    v3 = realloc(v2, v39);
                }
                *((int *)&v2) = (v3 == 0? v2 : v3);
            }
        }
        if (v17 < 0 || v19 < 0)
        {
            v42 = __errno_location();
        }
        if (v17 < 0 || v19 < 0 || v20 != *((long long *)&v10) || v18 != v11)
        {
            v41 = *(v42);
            free(v2);
            *((unsigned long long *)&v42) = v41;
            v2 = 0;
        }
    }
    return v2;
}

extern unsigned int g_409bd2;
extern unsigned int g_409bfd;
extern unsigned int g_409e30;

int sub_406450()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409bd2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409bfd, 0x5));
    dcgettext(0x0, 0x409e30, 0x5);
}

int sub_407d70()
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

extern unsigned int g_60c2b4;
extern unsigned int g_60c2b8;
extern unsigned int g_60c2bc;
extern unsigned int g_60c480;
extern unsigned int g_60c484;
extern unsigned int g_60c488;
extern unsigned long long g_60c490;
extern unsigned long long g_60c4c0;

int sub_407930()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60c480 = g_60c2bc;
    g_60c484 = g_60c2b8;
    v1 = (unsigned int)v2;
    v0 = &g_60c480;
    g_60c2bc = g_60c480;
    g_60c4c0 = g_60c490;
    g_60c2b4 = g_60c488;
    return sub_407360();
}

int sub_402ea0()
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
                    v4 = (0 | v2) % v7 >> 64;
                    v5 = (0 | v2) % v7 >> 64;
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

extern unsigned long long stdout;

int sub_402410()
{
    unsigned long long *v1;  // rsi
    char *v2;  // rdi
    unsigned long long *v5;  // rdx
    unsigned long long *v7;  // rdi
    unsigned long long v8;  // rbx

    if (*(v1) != 0)
    {
        v8 = strlen(v7);
        if (*(v5) <= v8)
        {
            return 1;
        }
        memcpy(*(v7), v7, v8 + 1);
        *(v1) = *(v1) + v8;
        *(v5) = *(v5) - v8;
        return 0;
    }
    fputs_unlocked(v2, stdout);
    return 0;
}

int sub_406700()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_4064f0()
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
        sub_406720(); /* do not return */
    }
}

extern char g_60c309;

int sub_402020()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    if (g_60c309 != 0 && v2 != 0)
    {
        free((unsigned long long)(unsigned int)sub_402690());
        return stack_base + 0;
    }
    if (v2 == 0 || g_60c309 == 0)
    {
        v2 = (unsigned int)sub_402690();
        return v3;
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_406330()
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
    return sub_405f30();
}

extern unsigned int g_4085db;
extern unsigned int g_4086b0;
extern unsigned int g_4086d8;
extern unsigned int g_4086f8;
extern unsigned int g_408748;
extern unsigned int g_4089c0;
extern unsigned int g_4089f0;
extern unsigned int g_408a50;
extern unsigned int g_408a98;
extern unsigned int g_408ab8;
extern unsigned long long stdout;

int sub_402100()
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
    unsigned long long *v26;  // rax
    char *v27;  // rdi
    char *v28;  // rsi
    unsigned long long v29;  // rcx
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // cc_dep2
    unsigned long v32;  // d
    char *v36;  // rax
    char *v37;  // rax
    unsigned long long v38;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x4086b0, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4086d8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4086f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408748, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4089c0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4089f0, 0x5), stdout);
        v0 = "[";
        v26 = &v0;
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
            v26 = &v2;
            v27 = v2;
            if (v2 == 0)
            {
                break;
            }
            v28 = "realpath";
            v29 = 9;
            if ((v30 > v31) - 0 - (v30 < v31) == 0)
            {
                break;
            }
            while (v29 != 0)
            {
                v29 -= 1;
                v30 = *(v28);
                v31 = *(v27);
                v27 = &v27[v32];
                v28 = &v28[v32];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4085db, 0x5));
            v37 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4085db, 0x5));
            v36 = setlocale(0x5, 0x0);
            if (v36 != 0)
            {
                v38 = strncmp(v36, "en_", 0x3);
            }
            if (v38 == 0 || v36 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408a98, 0x5));
            }
        }
        if ((v3 == 0 || v37 != 0) && (v3 == 0 || strncmp(v37, "en_", 0x3) != 0) && (v38 != 0 || v3 != 0) && (v36 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408a50, 0x5));
        }
        if (v3 != 0 || v38 != 0 && v36 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408a98, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408ab8, 0x5));
    }
    exit(v19); /* do not return */
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

extern unsigned int g_409fe8;
extern unsigned int g_40a02c;

int sub_407360()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // eax
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
        if (v19[0] == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || ((char)(v18 - 43) & 253) == 0 && v8->field_20 == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_406c60();
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
                            sub_406c60();
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_406d40();
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
                        dcgettext(0x0, 0x409fe8, 0x5);
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
            dcgettext(0x0, 0x40a02c, 0x5);
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
                    dcgettext(0x0, 0x409fe8, 0x5);
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
        v45 = (unsigned int)sub_406d40();
    }
    v63 = v45;
    return v63;
}

extern int512_t g_60c440;

int sub_405780()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60c440 : v1)) = v2;
    return &g_60c440;
}

// int sub_405a70()

extern unsigned int g_408564;

int sub_402080()
{
    char v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0x90]
    unsigned long v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al
    unsigned long long v7;  // rbp

    if (__xstat(0x1, v3, (unsigned int)&v0) == 0)
    {
        v5 = v1 & 0xf000;
        v6 = (v1 & 0xf000) == 0x4000;
        return rax;
    }
    v7 = (unsigned int)sub_405b90();
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x408564, 0x5));
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_403280()
{
    struct v1;  // rdi

    return v1->field_10;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_403570()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_402f60();
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

// int sub_405990()

extern char g_60c2e8;
extern unsigned long long g_60c2f0;

int sub_401f31()
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

    if (g_60c2e8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60c2f0 >= 0)
            {
                break;
            }
            g_60c2f0 = g_60c2f0 + 1;
            *((long long *)(6340160 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60c2e8 = 1;
        return sub_401edb();
    }
    return v4;
}

extern int512_t g_60c440;

int sub_405820()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60c440 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_404360();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    struct struct_0 *field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

int sub_403a50()
{
    void tmp_15;  // tmp #15
    void *v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    struct v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    struct v11;  // rdi
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
        if (!(INVALID_IR))
        {
            v18 = 0;
            v18 = (unsigned int)v13;
        }
        else
        {
            tmp_15 = v14;
            v16 = 0;
            v17 = tmp_15 >> 1 | (unsigned long long)((unsigned int)v14 & 1);
            v18 = xmm0 * 2;
        }
        xmm0 = (xmm0 / INVALID_IR)
;    }
    if (*((long long *)&v2) != 0 && (((char)(INVALID_IR) & 1) == 0 || v11->field_28->field_10 != 0) && (v11->field_28->field_10 != 0 || ((char)(INVALID_IR) & 1) != 0) && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) == 0)
    {
        if (v11->field_10 != *((long long *)&v2))
        {
            v0 = calloc(*((long long *)&v2), 0x10);
            if (v0 != 0)
            {
                v2 = (unsigned int)sub_402ea0();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_403130();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_403130();
                    if (v22 != 0)
                    {
                        v23 = sub_403130();
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
    if (((char)(INVALID_IR) & 1) == 0 && *((long long *)&v2) == 0 || v11->field_28->field_10 == 0 && ((char)(INVALID_IR) & 1) == 0 || ((char)(INVALID_IR) & 1) == 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 && v11->field_28->field_10 != 0 || ((char)(INVALID_IR) & 1) == 0 && v0 == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if (v11->field_10 != *((long long *)&v2) || (char)v21 != 0)
    {
        v24 = v21;
        return v24;
    }
}

int sub_407990()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_407930();
}

// int sub_405ba0()

int sub_406570()
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
        sub_406720(); /* do not return */
    }
}

extern unsigned int g_409b8b;
extern unsigned int g_409b8f;
extern unsigned int g_409b9f;
extern unsigned int g_409bb6;
extern unsigned int g_409c18;
extern unsigned int g_409ce8;
extern unsigned int g_409d08;
extern unsigned int g_409d30;
extern unsigned int g_409d58;
extern unsigned int g_409d88;

int sub_405f30()
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
    dcgettext(0x0, 0x409b8b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409c18, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x409b8f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x409b9f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x409bb6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x409ce8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x409d08, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x409d30, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x409d58, 0x5);
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
        dcgettext(0x0, 0x409d88, 0x5);
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

int sub_402e60()
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
        v8 = sub_4034c0() != 0;
        return rax;
    }
    return 0;
}

extern int512_t g_60c440;

int sub_405790()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60c440 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60c440 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_405c20()

// int sub_405f2b()

// int sub_405c30()

int sub_407c20()
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
    v5 = sub_407ce0();
    v6 = v5 + -0x1 * v3;
    if (v5 + -0x1 * v3 > rbp)
    {
        if (*((char *)(v5 - 1)) == 47)
        {
            for (v8 = v6 - 1; rbp != v8; v8 = v7)
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
    if (v5 + -0x1 * v3 <= rbp || *((char *)(v5 - 1)) != 47)
    {
        return v6;
    }
}

int sub_403650()
{
    unsigned long long v1[2];  // rdi
    unsigned long long *v2;  // r14
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

int sub_405aa2()
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
    return sub_405590();
}

int sub_404160()
{
    return 0;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_403710()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
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
extern int512_t g_60c340;

int sub_405590()
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
                v16 = sub_406530();
                g_60c298 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_406530();
                v17 = v15;
                g_60c298 = v15;
                *(v15) = g_60c2a0;
            }
            memset(&v17[(long long)(int)g_60c2b0], 0x0, (int)((unsigned int)v13 + 1 - g_60c2b0) * 16);
            g_60c2b0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_406720(); /* do not return */
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
        v21 = sub_404360();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6341440)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4064d0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_404360();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned long long g_40a047;

int sub_407a30()
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
        v5 = &g_40a047;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_407d70() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

// int sub_405f0b()

int sub_40417a()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al

    v5 = strcmp(*(v3), *(v1));
    v6 = (unsigned int)v5 == 0;
    return rax;
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

    v10 = sub_4015b0();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6340144 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern unsigned long long __progname_full;
extern unsigned long long g_60c320;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4041c0()
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
        g_60c320 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_403290()
{
    struct v1;  // rdi

    return v1->field_18;
}

int sub_406390()
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
        return sub_405f30();
    }
}

extern unsigned long long g_60be30;

int sub_408528()
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
        rax();
        v1 = &v1[-1];
    }
    return v4;
}

int sub_402f60()
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

int sub_402dd0()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x8]
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
        v5[0] = (unsigned int)sub_406700();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_403ed0();
        if (!(v13 != 0))
        {
            sub_406720(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_4064d0();
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

extern uint128_t g_60c440;
extern uint128_t g_60c450;
extern uint128_t g_60c460;
extern unsigned long long g_60c470;

int sub_405cd0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60c440;
    *((uint128_t *)&v1) = g_60c450;
    *((uint128_t *)&v2) = g_60c460;
    v4 = g_60c470;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_405590();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_405730()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4066d0();
}

int sub_407c00()
{
    unsigned long long v1;  // rax

    v1 = sub_407c80();
    if (v1 != 0)
    {
        return v1;
    }
    sub_406720(); /* do not return */
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

int sub_408440()
{
    unsigned long v0;  // [bp-0x18]
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_403370()
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
    struct v9;  // rax
    unsigned long long v10;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // rbx
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
    if (!(INVALID_IR))
    {
    }
    else
    {
        tmp_14 = v13;
    }
    __fprintf_chk();
}

extern uint128_t g_60c440;
extern uint128_t g_60c450;
extern uint128_t g_60c460;
extern unsigned long long g_60c470;

int sub_405baf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60c470;
    *((uint128_t *)&v0) = g_60c440;
    *((uint128_t *)&v1) = g_60c450;
    *((uint128_t *)&v2) = g_60c460;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_405590();
}

int sub_404130()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long long v7[3];  // rdi
    unsigned long long v8[3];  // rsi
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx

    if (v7[1] == v8[1] && v7[2] == v8[2])
    {
        v5 = v9;
        v4 = v10;
        v3 = v11;
        v2 = v12;
        v1 = stack_base + 0;
        v0 = v13;
    }
    if (v7[1] != v8[1] || v7[2] != v8[2])
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

extern int512_t g_402f40;
extern int512_t g_402f50;
extern int512_t g_408db0;

int sub_403730()
{
    unsigned long long v1;  // rbx
    struct v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // xmm1
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
            v4 = sub_4030b0();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_408db0;
            v3 = sub_4030b0();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2 == 0 || v2->field_10 == 0) && (v2 == 0 || v4 != 0) && (v2 != 0 || v3 != 0))
        {
            if (!(INVALID_IR))
            {
                v6 = 0;
                v6 = (unsigned int)v10;
            }
            else
            {
                v9 = 0;
                v11 = v10 % 2 | (unsigned long long)((unsigned int)v10 & 1);
                v6 = xmm0 * 2;
            }
            v12 = v6 / v5;
        }
        if ((v2 == 0 || v4 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2->field_10 != 0) && (v2 != 0 || v3 != 0) && (v2 != 0 || ((char)(INVALID_IR) & 1) != 0) && (v2->field_10 != 0 || ((char)(INVALID_IR) & 1) != 0))
        {
            v13 = (unsigned int)sub_402ea0();
            if (((char)(v13 >> 60) & 1) == 0 &&  amd64g_calculate_condition(0x8, 0x14, rdi, 0x0, cc_ndep) == 0)
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_402f40 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_402f50 : v17);
                        *((unsigned long *)(v1 + 64)) = v18;
                        *((long long *)(v1 + 72)) = 0;
                    }
                }
            }
        }
        if (unknown)
        {
            v19 = v1;
            v1 = 0;
            free(v19);
        }
    }
    v20 = v1;
    return v20;
}

int sub_406c60()
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

// int sub_405b90()

int sub_4034c0()
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
        v6 = sub_402f60();
        while (true)
        {
            if (v9 != v1)
            {
                v1 = v3;
                v7 = *((long long *)(r12 + 56))();
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

int sub_406310()
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

int sub_403520()
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

// int sub_405d50()

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_403130()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r14
    unsigned long long v3[4];  // rsi
    unsigned long long v4[4];  // r13
    struct v5;  // rdi
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
                        v8 = sub_402f60();
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
                    v13 = (unsigned long long)(unsigned int)sub_402f60();
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

int sub_4066a0()
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
        sub_406720(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_403970()
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
    struct v13;  // rdi
    void *v14;  // rbx
    struct v15;  // rdi
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
                    *((long long *)(r12 + 64))();
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

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    struct struct_1 *field_48;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_2 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_2;

int sub_403c50()
{
    void tmp_10;  // tmp #10
    void tmp_19;  // tmp #19
    unsigned long long v0[2];  // [bp-0x20]
    unsigned long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long *v4;  // r12
    struct v5;  // rdi
    struct v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rax
    uint128_t v10;  // xmm1
    unsigned int v11;  // ymm1
    struct v12;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // xmm1lq
    uint128_t v14;  // xmm0
    unsigned int v15;  // ymm0
    unsigned long long v16;  // xmm0lq
    unsigned long long v17;  // rax
    uint128_t v18;  // xmm0
    unsigned int v19;  // ymm0
    unsigned long long v20;  // xmm0lq
    struct v22;  // rdx
    uint128_t v23;  // xmm2
    unsigned int v24;  // ymm2
    uint128_t v25;  // xmm0
    uint128_t v26;  // xmm0
    unsigned int v27;  // ymm0
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // xmm1
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
        v7 = sub_402f90();
        if (v7 != 0)
        {
            if (v4 != 0)
            {
                *(v4) = v7;
            }
            return 0;
        }
        if (!(INVALID_IR))
        {
            v13 = 0;
            v12 = v6->field_28;
            v13 = v5->field_18;
            v9 = v6->field_10;
            v14 = 0;
            v15 = v9;
            xmm0 = INVALID_IR;
;        }
        else
        {
            v10 = 0;
            tmp_10 = v6->field_18 % 2 | (unsigned int)v6->field_18 & 1;
            v9 = v6->field_10;
            v11 = tmp_10;
            v12 = v6->field_28;
            v13 = (unsigned long long)(unsigned int)xmm1 * 2;
            tmp_19 = v9;
            v17 = (unsigned int)v9 & 1;
            v18 = 0;
            v19 = tmp_19 >> 1 | v17;
            xmm0 = INVALID_IR;
;        }
        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
        {
            sub_4030b0();
            v22 = v6->field_28;
            v23 = 0;
            v24 = v6->field_28->field_8;
            if (!(INVALID_IR))
            {
                v25 = 0;
                v25 = (unsigned int)v5->field_10;
            }
            else
            {
                v26 = 0;
                v27 = v5->field_10 >> 1 | (unsigned int)v5->field_10 & 1;
                v25 = xmm0 * 2;
            }
            if (!(INVALID_IR))
            {
                v28 = 0;
                v28 = v5->field_18;
            }
            else
            {
                v29 = 0;
                v30 = v5->field_18 >> 1 | (unsigned int)v5->field_18 & 1;
                v28 = (unsigned long long)(unsigned int)xmm1 * 2;
            }
            if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
            {
                xmm0 = (xmm0 * INVALID_IR)
;                if (v22->field_10 == 0)
                {
                    v31 *= xmm2;
                }
                if (((char)(INVALID_IR) & 1) != 0 && ((char)(INVALID_IR) & 1) == 0)
                {
                    v32 = sub_403a50();
                    if (v32 != 0)
                    {
                        v33 = sub_402f90();
                    }
                }
            }
        }
    }
    if (unknown)
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
    if (v2 == 0 || ((char)(INVALID_IR) & 1) == 0 && v7 == 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v32 != 0 && v33 != 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && ((char)(INVALID_IR) & 1) != 0)
    {
        abort(); /* do not return */
    }
    if (unknown)
    {
        return -18446744069414584321;
    }
    if (unknown)
    {
        v36 = v34[1];
        v35[0] = v2;
        v35[1] = v36;
        v34[1] = v35;
        v6->field_20 = v6->field_20 + 1;
        return 1;
    }
}

extern unsigned int g_4085f6;
extern unsigned int g_40861a;
extern unsigned int g_408af0;
extern unsigned int g_40a047;
extern char g_60c230;
extern unsigned int g_60c2bc;
extern unsigned long long g_60c2f8;
extern unsigned long long g_60c300;
extern char g_60c308;
extern char g_60c309;
extern unsigned long long g_60c4c0;
extern unsigned long long stdout[7];

int main()
{
    unsigned long long v1;  // r14
    unsigned long long v2;  // r13
    unsigned long long v5;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // ebx
    unsigned long v7;  // rdi
    unsigned int v8;  // r15d
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r13
    void *v21;  // r14
    unsigned long long v22;  // r13
    unsigned long long v23;  // rax
    char *v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // r13

    v1 = 0;
    v2 = 0;
    v6 = 1;
    sub_4041c0();
    setlocale(0x6, 0x40a047);
    bindtextdomain(0x4085f6, 0x408af0);
    textdomain(0x4085f6);
    sub_408510();
    while (true)
    {
        v5 = sub_4079b0();
        if ((unsigned int)v5 != -1)
        {
            if ((unsigned int)v5 != 109)
            {
                if (v5 > 109)
                {
                    if ((unsigned int)v5 == 122)
                    {
                        g_60c308 = 1;
                    }
                    else if (v5 <= 122)
                    {
                        if ((unsigned int)v5 == 113)
                        {
                            g_60c230 = 0;
                        }
                        if ((unsigned int)v5 == 115)
                        {
                            v6 |= 4;
                            g_60c309 = 0;
                        }
                    }
                    else
                    {
                        if ((unsigned int)v5 == 128)
                        {
                            v1 = g_60c4c0;
                        }
                        if ((unsigned int)v5 == 129)
                        {
                            v2 = g_60c4c0;
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v5 == 76)
                    {
                        v6 |= 4;
                        g_60c309 = 1;
                    }
                    else if (v5 > 76)
                    {
                        if ((unsigned int)v5 == 80)
                        {
                            v6 &= -5;
                            g_60c309 = 0;
                        }
                        if ((unsigned int)v5 == 101)
                        {
                            v6 &= -0x4;
                        }
                    }
                    else
                    {
                        if ((unsigned int)v5 == -131)
                        {
                            sub_406390();
                            exit(0x0); /* do not return */
                        }
                        if ((unsigned int)v5 == -130)
                        {
                            sub_402100(); /* do not return */
                        }
                    }
                }
            }
        }
        else
        {
            if (g_60c2bc < (unsigned int)v7)
            {
                v8 = v6 & 3;
                if (v1 == 0 && v2 != 0)
                {
                    v1 = v2;
                }
                if (v2 != 0 || v1 != 0)
                {
                    g_60c300 = (unsigned int)sub_402020();
                    if (g_60c300 == 0)
                    {
                        v13 = (unsigned int)sub_405c60();
                        error(0x1, *(__errno_location()), "%s");
                    }
                    else if (v8 == 0)
                    {
                        v12 = sub_402080();
                        if (v12 == 0)
                        {
                            sub_405c60();
                            error(0x1, 0x14, "%s");
                        }
                    }
                }
                if (v2 == 0 && v1 == 0 || g_60c300 != 0 && v8 != 0 || g_60c300 != 0 && v12 != 0)
                {
                    if (v2 != v1)
                    {
                        if (v2 == 0)
                        {
                            break;
                        }
                        if (g_60c2f8 != 0)
                        {
                            if (v8 == 0)
                            {
                                v16 = sub_402080();
                                if (v16 == 0)
                                {
                                    sub_405c60();
                                    error(0x1, 0x14, "%s");
                                }
                            }
                            if (v16 != 0 || v8 != 0)
                            {
                                if (sub_401f90() != 0)
                                {
                                    g_60c2f8 = (unsigned int)sub_402020();
                                }
                                else
                                {
                                    free(g_60c2f8);
                                    g_60c2f8 = g_60c300;
                                    g_60c300 = 0;
                                }
                            }
                        }
                        else
                        {
                            v17 = (unsigned int)sub_405c60();
                            error(0x1, *(__errno_location()), "%s");
                        }
                    }
                    else
                    {
                        g_60c2f8 = g_60c300;
                    }
                }
            }
            else
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40861a, 0x5));
            }
        }
        if ((unsigned int)v5 == 109)
        {
            v6 = v6 & -0x4 | 2;
        }
        if ((unsigned int)v5 == -1 && g_60c2bc >= (unsigned int)v7 || v5 <= 76 && v5 <= 109 && (unsigned int)v5 != -130 && (unsigned int)v5 != -1 && (unsigned int)v5 != 76 && (unsigned int)v5 != 109 && (unsigned int)v5 != -131 || v5 <= 122 && (unsigned int)v5 != 122 && (unsigned int)v5 != -1 && v5 > 109 && (unsigned int)v5 != 109 && (unsigned int)v5 != 115 && (unsigned int)v5 != 113 || v5 <= 109 && v5 > 76 && (unsigned int)v5 != -1 && (unsigned int)v5 != 101 && (unsigned int)v5 != 80 && (unsigned int)v5 != 76 && (unsigned int)v5 != 109 || (unsigned int)v5 != 122 && (unsigned int)v5 != 128 && (unsigned int)v5 != -1 && v5 > 122 && v5 > 109 && (unsigned int)v5 != 109 && (unsigned int)v5 != 129)
        {
            sub_402100(); /* do not return */
        }
    }
    v20 = 1;
    if (g_60c2bc < (unsigned int)v7)
    {
        do
        {
            v21 = (unsigned long long)(unsigned int)sub_402020();
            if (v21 != 0)
            {
                if (g_60c300 != 0 && g_60c2f8 != 0)
                {
                    v23 = sub_401f90();
                }
                if (sub_402490() == 0 || g_60c300 == 0 || v23 == 0 && g_60c2f8 != 0)
                {
                    fputs_unlocked(v21, stdout);
                }
                v26 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v26) = 0 - (unsigned int)(char)(g_60c308 < 1) & 10;
                }
                else
                {
                    __overflow();
                }
                free(v21);
            }
            else
            {
                v20 = g_60c230;
                if (g_60c230 != 0)
                {
                    v22 = (unsigned int)sub_405c60();
                    v20 = 0;
                    error(0x0, *(__errno_location()), "%s");
                }
            }
            v27 = g_60c2bc + 1;
            g_60c2bc = g_60c2bc + 1;
        }
        while ((unsigned int)v27 < (unsigned int)v7);
    }
    v28 = v20 ^ 1;
    return v28;
}

int sub_407ba0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_408380();
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

// int sub_405d70()

extern unsigned int g_408d22;
extern unsigned int g_60c240;
extern char g_60c310;
extern unsigned long long g_60c318;

int sub_402d30()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_407ba0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60c310 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x408d22, 0x5);
            if (g_60c318 != 0)
            {
                sub_405c30();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60c310 != 0)
    {
        v3 = sub_407ba0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60c310 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60c240);
        error(0x0, *(v2), "%s");
    }
}

int sub_402f40()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_4040f0()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 | (unsigned int)sub_407dd0() ^ v0) % v1 >> 64;
}

extern int512_t g_408db0;

int sub_4030b0()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4230576)
    {
        v3 = v2[1];
        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
        {
            v4 = 0;
            v5 = v2[0];
            if (((char)(INVALID_IR) & 1) == 0)
            {
                v6 = (unsigned long long)(unsigned int)xmm1 + 4568451461323476173;
            }
        }
        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || ((char)(INVALID_IR) & 1) != 0 || ((char)(INVALID_IR) & 1) != 0)
        {
            *(v1) = &g_408db0;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4032b0()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rdi
    struct v4;  // rdx
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

int sub_407c80()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_407c20();
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

int sub_408400()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_408440();
    }
}

int sub_407ce0()
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

int sub_4079d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_407360();
}

// int sub_405de0()

extern int512_t g_60c228;

// int sub_408510()

int sub_405e12()
{
    char v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    char v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp+0x0]
    unsigned long long v6;  // [bp+0x10]
    unsigned long long v7;  // [bp+0x18]
    unsigned long long v8;  // [bp+0x20]
    unsigned long long v9;  // [bp+0x28]
    unsigned long v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    void *v15;  // rbp
    void *v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // bl
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15

    v12 = (unsigned int)sub_407d40();
    v13 = sub_407d40();
    if (v12 == v13)
    {
        v14 = memcmp((unsigned long long)(unsigned int)sub_407ce0(), (unsigned long long)(unsigned int)sub_407ce0(), v12);
        if (v14 == 0)
        {
            v15 = (unsigned long long)(unsigned int)sub_407c00();
            v16 = (unsigned long long)(unsigned int)sub_407c00();
            v17 = __xstat(0x1, (unsigned int)v15, (unsigned int)&v0);
            if (v17 == 0)
            {
                v18 = __xstat(0x1, (unsigned int)v16, (unsigned int)&v2);
                if (v18 == 0)
                {
                    v19 = 0;
                    if (v1 == v3)
                    {
                        v19 = *((long long *)&v0) == *((long long *)&v2);
                    }
                    free(v15);
                    free(v16);
                }
                else
                {
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            else
            {
                error(0x1, *(__errno_location()), "%s");
            }
        }
    }
    if (v12 != v13 || v14 != 0 || v17 == 0 && v18 == 0)
    {
        v20 = v19;
        v21 = v4;
        v22 = v6;
        v23 = v7;
        v24 = v8;
        v25 = v9;
        return v20;
    }
}

int sub_406760()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_406720(); /* do not return */
        }
    }
    if (v2 != 0 || *(v3) != 12)
    {
        v2 = (unsigned int)sub_406790();
        return v5;
    }
}

int sub_4036d0()
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
            v4 = (0 | tmp_16) % v3 >> 64;
        }
        while ((char)v2 != 0);
    }
    return v4;
}

int sub_4079b0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_407930();
}

int sub_404360()
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
    unsigned long long v7;  // [bp-0xa8]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // [bp-0x5b]
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
    unsigned long long v39;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
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
    unsigned long long v63;  // r13
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
    unsigned long long v80;  // r12
    unsigned int v81;  // r13d
    unsigned long long v82;  // r11
    char v83;  // dl
    unsigned long long v84;  // rax
    unsigned long long v85;  // cc_dep1
    unsigned long long v86;  // dl
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
            v26 = (unsigned int)sub_404260();
            v27 = (unsigned int)sub_404260();
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
            v78 = (char)(v38 != v80);
            if (v38 == -1)
            {
                v78 = (char)(*((char *)(v7 + v80)) != 0);
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
                                    v89 = (char)((unsigned int)v39 == 2);
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
                                    if ((v77 > v76 || ((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3))
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
                                    v50 = v5;
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
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v48 = v5;
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
                            v5 = 0;
                            v89 = (char)((unsigned int)v39 == 2);
                            v36 = 0;
                            v40 = 0;
                            break;
                            v80 += 1;
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
                        v89 = (char)((unsigned int)v39 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (char)((unsigned int)v39 == 2);
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
                        }
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v89 = (char)((unsigned int)v39 == 2);
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
                            v89 = (char)((unsigned int)v39 == 2);
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
                            v76 = (unsigned int)sub_404360();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
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
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_407a30();
                    v58 = v46;
                    if (v46 != -2 && v46 != 0 && v46 != -1)
                    {
                        if ((int)v10 == 2 && v17 != 0 && v46 != 1)
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
                        v39 = (unsigned int)v10;
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
                        v39 = (unsigned int)v10;
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
                        v39 = (unsigned int)v10;
                        v89 = (char)((unsigned int)v78 ^ 1) & v4;
                    }
                }
                while (v28 <= 1);
                if (v46 == -2 || v46 == 0 || v46 == -1 || (unsigned int)v46 != 0)
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
                v55 = 0;
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
                    if ((v63 == 0 || v89 == 0) && (v89 == 0 || v80 < v64) && (v80 < v64 || v89 != 0))
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
                v76 = (unsigned int)sub_404360();
            }
            if (v25 == 0 && v5 == 0 || v25 == 0 && v17 == 0 && v5 != 0 || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v25 == 0 || v78 == 0) && (v25 == 0 || v76 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
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
        v18 = v84;
    }
}

int sub_406530()
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
            sub_406720(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_402f50()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_405c60()
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
    return sub_405590();
}

int sub_4058bb()
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
    v7 = (unsigned int)sub_404360();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4064d0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_404360();
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

extern unsigned int g_408d04;

int sub_402490()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v3;  // rsi
    unsigned long v4;  // r8
    unsigned long v5;  // rdi
    unsigned long v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long long v9;  // al
    unsigned long v10;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // edx
    unsigned long v12;  // r11
    char v13;  // r10b
    unsigned long v14;  // r11
    unsigned long long v15;  // r9
    unsigned long long v16;  // r10
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // rbp
    char *v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    char v21;  // dl
    unsigned long long v23;  // r12
    unsigned long long v24;  // rax

    v4 = (char)*((char *)(v3 + 1));
    v15 = (char)*((char *)(v5 + 1));
    v0 = v6;
    v1 = v7;
    v9 = 0;
    if (*((char *)(v3 + 1)) == 47 == *((char *)(v5 + 1)) == 47)
    {
        v11 = (char)*((char *)v5);
        v16 = (char)*((char *)v3);
        if (*((char *)v3) != 0)
        {
            v9  = unknown;            if (*((char *)v5) == 0 == 0 && v16 == v11)
            {
                v10 = 2;
                v11 = 0;
                while (true)
                {
                    v12 = v10 - 1;
                    v11 = (unsigned int)(v16 == 47? (unsigned int)(v10 - 1) : (unsigned int)rdx);
                    v13 = v15 == 0;
                    if (v13 == 0 && v4 == v15 && v4 != 0)
                    {
                        v14 = (char)*((char *)(v3 + v10));
                        v15 = (char)*((char *)(v5 + v10));
                        v16 = v4;
                        v10 += 1;
                        v4 = v14;
                    }
                    if ((unsigned int)v11 == 0 && (v13 == 0 || v4 != 0) && (v13 == 0 || v4 != 47) && (v15 != 47 || v4 != 0) && (v4 == 0 || v13 != 0 || v4 != v15))
                    {
                        break;
                    }
                    if (v15 == 47 && v4 == 0 || v4 == 0 && v13 != 0 || v4 == 47 && v13 != 0)
                    {
                        v11 = v12;
                    }
                    if (v15 == 47 && v4 == 0 || v4 == 0 && v13 != 0 || v4 == 0 && (unsigned int)v11 != 0 || v4 == 47 && v13 != 0 || v13 != 0 && (unsigned int)v11 != 0 || (unsigned int)v11 != 0 && v4 != v15)
                    {
                        v17 = v3 + v11;
                        v18 = v5 + v11;
                        v19 = (char)*((char *)(v3 + v11));
                        if (*((char *)(v3 + v11)) == 47)
                        {
                            v19 = v17[1];
                            v17 = &v17[1];
                        }
                        v20 = 0;
                        v21 = *(v18) == 47;
                        if (v19 == 0)
                        {
                            v23 = (unsigned int)sub_402410();
                        }
                        else
                        {
                            v23 = (unsigned int)sub_402410();
                            v24 = v17[0];
                            if (v17[0] != 0)
                            {
                                do
                                {
                                    if (v24 == 47)
                                    {
                                        v23 = (unsigned int)v23 | sub_402410();
                                    }
                                    v17 = &v17[1];
                                    v24 = *(v17);
                                }
                                while ((char)v24 != 0);
                            }
                            if (v18[rdx] != 0)
                            {
                                v23 = (unsigned int)v23 | sub_402410() | sub_402410();
                            }
                        }
                        if (v23 != 0)
                        {
                            dcgettext(0x0, 0x408d04, 0x5);
                            error(0x0, 0x24, "%s");
                        }
                        v9 = (unsigned int)v23 ^ 1;
                    }
                }
            }
            else
            {
                v9 = 0;
            }
        }
    }
    return v9;
}

int sub_4035e0()
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

extern int512_t g_60c440;

int sub_4057d0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60c440 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60c440 : v1) + 4)) = v3;
    return v2;
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

typedef struct struct_3 {
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int sub_403f10()
{
    unsigned long long *v0;  // [bp-0x20]
    void tmp_10;  // tmp #10
    void tmp_15;  // tmp #15
    struct v2;  // rdi
    unsigned long long v3[10];  // rbx
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // rax
    uint128_t v7;  // xmm0
    unsigned long long v8;  // rax
    unsigned int v9;  // ymm0
    unsigned long long v10;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    uint128_t v14;  // xmm1
    unsigned int v15;  // ymm1
    unsigned long long v16;  // xmm1lq
    struct v18;  // rdx
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm0
    unsigned int v21;  // ymm0
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // xmm1
    uint128_t v23;  // xmm1
    unsigned int v24;  // ymm1
    uint128_t v25;  // xmm2
    unsigned int v26;  // ymm2
    unsigned long long v27;  // xmm2lq
    uint128_t v28;  // xmm0
    struct v30;  // rdi
    void *v31;  // r12

    v3 = v2;
    if (sub_402f90() != 0)
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
                v11 = (unsigned long long)(unsigned int)xmm0 * 2;
            }
            if (!(INVALID_IR))
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
                v12 = xmm1 * 2;
            }
            xmm1 = INVALID_IR;
;            if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
            {
                sub_4030b0();
                v18 = v3[5];
                if (!(INVALID_IR))
                {
                    v19 = 0;
                    v19 = (unsigned int)v2->field_10;
                }
                else
                {
                    v20 = 0;
                    v21 = v2->field_10 >> 1 | (unsigned int)v2->field_10 & 1;
                    v19 = xmm0 * 2;
                }
                if (!(INVALID_IR))
                {
                    v22 = 0;
                    v22 = v2->field_18;
                }
                else
                {
                    v23 = 0;
                    v24 = v2->field_18 >> 1 | (unsigned int)v2->field_18 & 1;
                    v22 = (unsigned long long)(unsigned int)xmm1 * 2;
                }
                v25 = 0;
                v26 = *(v2->field_28);
                v27 = xmm2 * v19;
                if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
                {
                    xmm0 = (xmm0 * INVALID_IR)
;                    if (v18->field_10 == 0)
                    {
                        xmm0 = (xmm0 * INVALID_IR)
;                    }
                    if (sub_403a50() == 0)
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

extern struct g_60c298;
extern unsigned long long g_60c2a0;
extern unsigned long long g_60c2a8;
extern unsigned int g_60c2b0;
extern unsigned long long g_60c340;

int sub_4059a0()
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
    if (g_60c298->field_8 != 6341440)
    {
        v1 = free(g_60c298->field_8);
        g_60c2a0 = 0x100;
        g_60c2a8 = &g_60c340;
    }
    if (g_60c298 != 6341280)
    {
        v1 = free(g_60c298);
        g_60c298 = &g_60c2a0;
    }
    g_60c2b0 = 1;
    return v1;
}

extern unsigned long long g_60c318;

int sub_402d10()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60c318 = v1;
    return v2;
}

int sub_405892()
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

int sub_4079f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_407930();
}

int sub_4064d0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_406720(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

// int sub_405a40()

int sub_408380()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_408400() != 0)
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

extern unsigned int g_409f20;
extern unsigned int g_409f40;
extern unsigned int g_409f70;
extern unsigned int g_409f90;
extern unsigned int g_409fc0;
extern unsigned long long stderr;

int sub_406d40()
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
                                dcgettext(0x0, 0x409f20, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x409f40, 0x5);
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
                                dcgettext(0x0, 0x409fc0, 0x5);
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
                            dcgettext(0x0, 0x409f90, 0x5);
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
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v17) != 0))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x409f70, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

// int sub_405a60()

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40a047;
extern char g_60c4b8[2];

int sub_407e10()
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
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_60c4b8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40a047 : (unsigned long long)nl_langinfo(0xe));
    if (g_60c4b8 == 0)
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
            v9 = &g_40a047;
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
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v60 = *(v59);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1)
                        {
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
                                    v31 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax >> 16) : (unsigned int)rax);
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
                                        v63 = v40 + 1;
                                        v49 = v37 + v42 - 1;
                                        if ((unsigned int)v43 >= 8)
                                        {
                                            *((long long *)v49) = *((long long *)&v5);
                                            v43 = v63;
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
                                        v9 = &g_40a047;
                                        v10 = (tmp_10 == 0? &g_40a047 : tmp_10);
                                        free(NULL);
                                        sub_408380();
                                    }
                                }
                            }
                            if ((unsigned int)v60 == 35)
                            {
                                do
                                {
                                    v61 = *((long long *)(v10 + 8));
                                    if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                    {
                                        *((char **)(v10 + 8)) = &v61[1];
                                        v62 = *(v61);
                                        v63 = 1;
                                    }
                                    else
                                    {
                                        v62 = __uflow(v10);
                                        v63 = (char)(v62 != -1);
                                    }
                                }
                                while (v63 != 0 && v62 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v60 == 35 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40a047 : tmp_10);
                            sub_408380();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v60 != 32 && (unsigned int)v60 != 35 && (unsigned int)(v60 - 9) > 1 && v28 <= 1 || (unsigned int)v60 == 35 && (unsigned int)v60 != 32 && (unsigned int)(v60 - 9) > 1 && v62 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_40a047;
                    }
                    else if (((unsigned int)v60 != 32 && (unsigned int)v60 != 35 && (unsigned int)(v60 - 9) > 1 && v28 <= 1 || (unsigned int)v60 == 35 && (unsigned int)v60 != 32 && (unsigned int)(v60 - 9) > 1 && v62 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0 || v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40a047;
            free(v17);
        }
        *((char *[2])&g_60c4b8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40a047 : tmp_10), v9);
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

int sub_407d40()
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

int sub_407ab0()
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
            if (INVALID_IR)
            {
                v5 = __errno_location();
                if (*(v5) != 34)
                {
                    free(v8);
                }
            }
            if (*(v5) == 34 || !(INVALID_IR))
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
        if (v9 <= 9223372036854775806 && v9 <= v4 && v9 > 4611686018427387903 && (*(v5) == 34 || !(INVALID_IR)))
        {
            v7 = malloc(v9);
        }
        else if (v9 <= 4611686018427387903 || v9 > 9223372036854775806 || v9 > v4 || INVALID_IR && *(v5) != 34)
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

extern char g_60c440;

int sub_4057f0()
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
    v3 = (v2 == 0? &g_60c440 : v2);
    *((int *)(tmp_11? &g_60c440 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60c440;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_60c440;
        abort(); /* do not return */
    }
}

// int sub_406520()

int sub_405b20()
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
    return sub_405590();
}

extern unsigned int g_409f0f;
extern unsigned int g_60c240;

int sub_406720()
{
    dcgettext(0x0, 0x409f0f, 0x5);
    error(g_60c240, 0x0, "%s");
    abort(); /* do not return */
}

// int sub_405a90()

extern char g_60c310;

int sub_402d20()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60c310 = v1;
    return v2;
}

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_402f90()
{
    unsigned long long v1;  // rdi
    struct v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long *v6;  // rdx
    unsigned long long *v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long v10;  // rax
    unsigned long long v11[2];  // rax
    unsigned long long v12;  // rsi
    unsigned long long v14;  // rax
    struct v15;  // rbx
    unsigned long long v16;  // rsi
    struct v17;  // rax
    void v18;  // xmm0
    uint128_t v19;  // xmm0
    unsigned long v20;  // rcx
    void v21;  // xmm0

    v2 = v1;
    *(v6) = v7;
    v8 = *(v7);
    if (*(v7) != 0)
    {
        v7 = sub_402f60();
        if (v8 != v1)
        {
            v1 = v3;
            v10 = *((long long *)(r12 + 56))();
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
                            v14 = *((long long *)(r12 + 56))();
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

// int sub_405d40()

extern int512_t g_60c440;

int sub_405770()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60c440 : v1));
}

int sub_403ed0()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_403c50();
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

// int sub_405dc0()

int sub_4066d0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4064d0();
}

// int sub_405da0()

// int sub_405d90()

int sub_406680()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4064d0();
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_4032a0()
{
    struct v1;  // rdi

    return v1->field_20;
}

// int sub_405c50()

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_403300()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2[2];  // rcx
    struct v3;  // rax
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

extern int512_t g_408e36;
extern int512_t g_408e3a;

int sub_404260()
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
        v3 = sub_407e10();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_408e36 : 4230721);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_408e3a : 4230717);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if ((v3[1] & 223) == 84 && v3[4] == 56 && v1 == v2 && v3[5] == 0 && v3[3] == 45 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 || v3[4] == 48 && (v3[1] & 223) == 66 && v1 == v2 && v3[3] == 56 && v4 == 71 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

extern unsigned int g_408e2e;

int sub_402690()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xf4]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0xf0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xd8]
    unsigned int v6;  // [bp-0xd0]
    unsigned int v7;  // [bp-0xcc]
    char v8;  // [bp-0xc8]
    unsigned int v9;  // [bp-0xb0]
    unsigned int v11;  // esi
    char v12[2];  // rdi
    char v13[2];  // r15
    unsigned long long v14;  // rbx
    char *v15;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // rbp
    unsigned long long v17;  // rdx
    char v18[2];  // r13
    unsigned long v19;  // r8
    char *v20;  // r15
    char *v21;  // rdx
    unsigned long long v22;  // rbx
    unsigned long v23;  // rbp
    char *v25;  // r15
    unsigned long long v26;  // rsi
    char v27;  // al
    char *v28;  // rax
    unsigned long long v29;  // rax
    char *v31;  // r15
    unsigned long v32;  // r13
    unsigned long long v33;  // rdx
    char *v35;  // r15
    void *v38;  // rax
    char *v39;  // rdx
    unsigned long long v40;  // rdx
    char v41;  // cc_dep1
    char *v42;  // r14
    unsigned long long v43;  // rax
    char *v44;  // r15
    unsigned long long v45;  // r12
    unsigned int *v47;  // rdx
    unsigned int *v48;  // rdx
    char *v49;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v50;  // rcx
    unsigned int *v51;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v52;  // rcx
    unsigned long long v55;  // rax

    v1 = v11 & 3;
    if (((unsigned int)((unsigned long long)(v11 & 3) - 1) & v11 & 3) == 0)
    {
        v13 = v12;
        if (v12 != 0)
        {
            if (v12[0] != 0)
            {
                if (v12[0] != 47)
                {
                    v45 = (unsigned int)sub_406760();
                    if (v45 != 0)
                    {
                        v14 = strlen(v45);
                        if (v14 > 4095)
                        {
                            v15 = v14 + v45;
                            v16 = v15;
                        }
                        else
                        {
                            v45 = (unsigned int)sub_406530();
                            v15 = v14 + v45;
                            v16 = v45 + 0x1000;
                        }
                    }
                }
                else
                {
                    v45 = (unsigned int)sub_4064d0();
                    v16 = v45 + 0x1000;
                    v15 = v45 + 1;
                    *((char *)v45) = 47;
                }
                if (v12[0] == 47 || v45 != 0)
                {
                    *((char *[2])&v3[0]) = v13;
                    v43 = v13[0];
                    v6 = v11 & 4;
                    v2 = 0;
                    v5 = 0;
                    v4 = 0;
                    while (true)
                    {
                        if (v43 != 0)
                        {
                            v17 = v43;
                        }
                        if (v43 == 47)
                        {
                            do
                            {
                                v13 = &v13[1];
                                v17 = v13[0];
                            }
                            while (v13[0] == 47);
                        }
                        if (v43 == 47 && v17 != 0 || v43 != 47 && v43 != 0)
                        {
                            v18 = v13;
                            while (true)
                            {
                                v43 = v18[1];
                                v42 = &v18[1];
                                if (v18[1] == 0 || v43 == 47)
                                {
                                    break;
                                }
                                v18 = v42;
                            }
                        }
                        if (v43 == 0 || v42 == v13 || v17 == 0 && v43 == 47)
                        {
                            if (v15[-1] == 47 && v15 > v45 + 1)
                            {
                                v49 = v15;
                                v15 = &v15[-1];
                            }
                            if (v15 <= v45 + 1 || v15[-1] != 47)
                            {
                                v49 = &v15[1];
                            }
                            *(v15) = 0;
                            if (v16 != v49)
                            {
                                v45 = (unsigned int)sub_406530();
                            }
                            free(v4);
                            if (v2 == 0)
                            {
                                break;
                            }
                            sub_403970();
                        }
                        if (v42 != v13 && (v43 == 47 || v43 != 0) && (v17 != 0 || v43 != 47))
                        {
                            v19 = v42 - v13;
                            if (v17 == 46 && v0 == 2 && v13[1] == 46 && v42 - v13 != 1)
                            {
                                v20 = v42;
                                if (v15 > v45 + 1)
                                {
                                    v21 = &v15[-1];
                                    if (v15[-2] == 47 || v45 >= &v15[-1])
                                    {
                                        v15 = v21;
                                    }
                                }
                            }
                            if (v17 != 46 || v0 != 2 && v42 - v13 != 1 || v13[1] != 46 && v42 - v13 != 1)
                            {
                                if (v15[-1] != 47)
                                {
                                    *(v15) = 47;
                                    v15 = &v15[1];
                                }
                                if (v16 <= &v15[v0])
                                {
                                    v22 = &v15[-1 * v45];
                                    v0 = v19;
                                    v23 = (0x1000 <= v0? &v16[-1 * v45 + v0 + 1] : &v16[-1 * v45 + 0x1000]);
                                    v45 = (unsigned int)sub_406530();
                                    v16 = v23 + v45;
                                    v15 = v22 + v45;
                                }
                                *((unsigned long *)&v0) = v0;
                                memcpy(v15, v13, v0);
                                v15 = &v15[*((long long *)&v0)];
                                *(v15) = 0;
                                if (v6 == 0 || v1 != 2)
                                {
                                    v26 = v45;
                                    if (v6 != 0)
                                    {
                                        v27 = __xstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    else
                                    {
                                        v27 = __lxstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    if (v27 != 0)
                                    {
                                        v47 = __errno_location();
                                        v50 = *(v47);
                                        if (v1 == 1)
                                        {
                                            v7 = v50;
                                            v0 = v47;
                                            v28 = strspn((unsigned int)v42, 0x408e2e);
                                            v47 = v0;
                                            v50 = v7;
                                        }
                                    }
                                    else if (((unsigned short)v9 & 0xf000) == 0xa000)
                                    {
                                        if (v2 != 0)
                                        {
                                            v29 = sub_402e60();
                                            if (v29 == 0)
                                            {
                                                sub_402dd0();
                                                v31 = (unsigned long long)(unsigned int)sub_407ab0();
                                                if (v31 != 0)
                                                {
                                                    v32 = strlen(v31);
                                                    v33 = strlen(v42);
                                                    if (v5 == 0)
                                                    {
                                                        v0 = v33;
                                                        *((int *)&v5) = (0x1000 <= v0? v0 : 0x1000);
                                                        v4 = (unsigned int)sub_4064d0();
                                                    }
                                                    else if (v0 > v5)
                                                    {
                                                        v0 = v32 + v33 + 1;
                                                        v3 = v33;
                                                        v4 = (unsigned int)sub_406530();
                                                        v5 = v0;
                                                    }
                                                    memmove(v4 + v32, v42, v33 + 1);
                                                    v38 = memcpy(v4, v31, v32);
                                                    v39 = v45 + 1;
                                                    v42 = v38;
                                                    v3 = v38;
                                                    if (*(v31) == 47)
                                                    {
                                                        *((char *)v45) = 47;
                                                        v15 = v39;
                                                    }
                                                    else if (v15 > v15)
                                                    {
                                                        v40 = &v15[-1];
                                                        if (v45 < &v15[-1])
                                                        {
                                                            v41 = v15[-2];
                                                            v15 = v40;
                                                            if (v41 != 47)
                                                            {
                                                                do
                                                                {
                                                                    v15 = &v15[-1];
                                                                }
                                                                while (v45 != v15 && v15[-1] != 47);
                                                            }
                                                        }
                                                    }
                                                    free(v31);
                                                }
                                                else
                                                {
                                                    v48 = __errno_location();
                                                    v52 = *(v48);
                                                }
                                            }
                                            if ((v29 == 0 || v1 != 2) && (v31 == 0 || v29 != 0) && (v1 == 12 || v1 != 2))
                                            {
                                                *((unsigned long *)&v1) = v52;
                                                v0 = v48;
                                                free(v4);
                                                free(v45);
                                                v51 = v0;
                                                v52 = v1;
                                            }
                                        }
                                        else
                                        {
                                            v2 = (unsigned int)sub_403730();
                                            sub_406720(); /* do not return */
                                        }
                                    }
                                }
                                if ((v1 == 2 || v1 != 0) && (v1 == 2 || v1 != 1) && (v1 == 2 || v27 != 0) && (v6 != 0 || v1 != 0) && (v6 != 0 || v1 != 1) && (v6 != 0 || v27 != 0))
                                {
                                    v9 = 0;
                                }
                                if (v1 != 2)
                                {
                                    if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v29 != 0)
                                    {
                                        v48 = __errno_location();
                                    }
                                    if (*(v42) != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000))
                                    {
                                        v47 = __errno_location();
                                    }
                                }
                                if (((unsigned short)v9 & 0xf000) == 0x4000 && v27 == 0 && ((unsigned short)v9 & 0xf000) != 0xa000 && (v6 == 0 || v1 != 2) || v29 == 0 && v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v31 != 0 && (v6 == 0 || v1 != 2) || *(v42) == 0 && (v1 == 2 || v27 == 0 || v1 != 0) && (v1 == 2 || v27 == 0 || v1 != 1) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v1 == 2 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000) && (v27 == 0 || v6 != 0 || v1 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v6 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v6 != 0 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000) || v1 == 2 && *(v42) != 0 && (v1 == 2 || v27 == 0 || v1 != 0) && (v1 == 2 || v27 == 0 || v1 != 1) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v1 == 2 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000) && (v27 == 0 || v6 != 0 || v1 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v6 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v6 != 0 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000))
                                {
                                    v43 = *(v42);
                                    v44 = v42;
                                }
                                if (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && v1 != 0 && v27 != 0 && v7 != 2 && (v6 == 0 || v1 != 2) || v1 != 2 && *(v42) != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000))
                                {
                                    *((unsigned long *)&v1) = v50;
                                    v0 = v47;
                                    free(v4);
                                    free(v45);
                                    v51 = v0;
                                    v52 = v1;
                                }
                                if (v1 == 1 && *((char *)(v42 + v28)) == 0 && v1 != 0 && v27 != 0 && (v6 == 0 || v1 != 2) && v7 == 2 || v6 == 0 && v1 == 2 && v29 == 0 && v31 == 0 && v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v1 != 12 || v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v29 != 0 && (v6 == 0 || v1 != 2) && v1 == 2)
                                {
                                    v43 = v18[1];
                                    v35 = v42;
                                }
                                if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && (v6 == 0 || v1 != 2) && (v29 == 0 || v1 != 2) && (v31 == 0 || v29 != 0) && (v1 == 12 || v1 != 2) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && v1 != 0 && v27 != 0 && v7 != 2 && (v6 == 0 || v1 != 2) || v1 != 2 && *(v42) != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000)))
                                {
                                    *((unsigned long *)&v1) = v52;
                                    v0 = v51;
                                    sub_403970();
                                    v52 = v1;
                                    v51 = v0;
                                }
                                if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && (v6 == 0 || v1 != 2) && (v29 == 0 || v1 != 2) && (v31 == 0 || v29 != 0) && (v1 == 12 || v1 != 2) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && v1 != 0 && v27 != 0 && v7 != 2 && (v6 == 0 || v1 != 2) || v1 != 2 && *(v42) != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000)) || (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && v1 != 0 && v27 != 0 && v7 != 2 && (v6 == 0 || v1 != 2) || v1 != 2 && *(v42) != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000)) && v2 == 0)
                                {
                                    *((unsigned long *)&v51) = v52;
                                    v45 = 0;
                                }
                            }
                            if (v17 == 46 && (v45 < &v15[-1] || v42 - v13 == 1) && (v0 == 2 || v42 - v13 == 1) && (v13[1] == 46 || v42 - v13 == 1) && (v42 - v13 == 1 || v15 > v45 + 1) && (v42 - v13 == 1 || v15[-2] != 47))
                            {
                                v25 = v42;
                            }
                        }
                    }
                }
            }
            else
            {
                v45 = 0;
                *(__errno_location()) = 2;
            }
        }
    }
    if (v12 == 0 || ((unsigned int)((unsigned long long)(v11 & 3) - 1) & v11 & 3) != 0)
    {
        v45 = 0;
        *(__errno_location()) = 22;
    }
    v55 = v45;
    return v55;
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

int sub_401f90()
{
    char v1[3];  // rdi
    unsigned long long v2;  // rax
    struct v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    char *v6;  // rsi
    char *v7;  // rdi
    unsigned int v8;  // edx
    char v9;  // dl

    v2 = v1[1];
    if (v1[1] != 0)
    {
        if (v1[1] == 47 && v1[2] == 0)
        {
            return (unsigned long long)v1[1];
        }
        if (v1[2] != 0 || v1[1] != 47)
        {
            v2 = v1[1] != v3->field_1 | v3->field_1 == 0;
            if (v1[1] == v3->field_1 && v3->field_1 != 0)
            {
                v7 = &v1[1];
                v6 = &v3->field_1;
                while (true)
                {
                    v7 = &v7[1];
                    v4 = *(v7);
                    v6 = &v6[1];
                    if ((char)v4 != 0)
                    {
                        v5 = *(v6);
                        if (*(v6) == 0)
                        {
                            break;
                        }
                        return rax;
                    }
                    v8 = *(v6);
                    v9 = *(v6) == 0;
                    v2 = (unsigned int)rax | rdx;
                }
                return v2;
            }
            return 0;
        }
    }
    else
    {
        return (unsigned long long)v1[1];
    }
}

extern unsigned long long program_invocation_short_name;

int sub_401edb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4038c0()
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
                            rax();
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
                    v9 = rax();
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

int sub_407a10()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_407360();
}

