
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_405140()
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

extern char g_612560;

int sub_406c20()
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
    v3 = (v2 == 0? &g_612560 : v2);
    *((int *)(tmp_11? &g_612560 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_612560;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_612560;
        abort(); /* do not return */
    }
}

int sub_404e10()
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

int sub_408fd0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408f10();
}

int sub_407610()
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

int sub_406f50()
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
    return sub_4069c0();
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

int sub_4081e0()
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

extern unsigned int g_40c30f;
extern unsigned int g_612268;
extern char g_612448;
extern unsigned long long g_612450;

int sub_4051b0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_409170();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_612448 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40c30f, 0x5);
            if (g_612450 != 0)
            {
                sub_407060();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_612448 != 0)
    {
        v3 = sub_409170();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_612448 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_612268);
        error(0x0, *(v2), "%s");
    }
}

extern int512_t g_800000;

int sub_405390()
{
    void tmp_106;  // tmp #106
    void tmp_185;  // tmp #185
    void tmp_189;  // tmp #189
    void tmp_230;  // tmp #230
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x58]
    unsigned short v2;  // [bp-0x43]
    unsigned long v4;  // rdx
    unsigned int v5;  // ymm0
    void v6;  // xmm0
    unsigned long long v7;  // xmm0lq
    unsigned long long v8;  // rbx
    char v10;  // bl
    unsigned long long v11;  // rbp
    unsigned long v12;  // rsi
    unsigned long v13;  // rdi
    unsigned long v14;  // cc_dep1
    unsigned long long v15;  // rbx

    tmp_106 = (unsigned int)v4 & 1;
    v2 = 11557;
    tmp_185 = (unsigned int)v4 % 2 & 1;
    tmp_189 = (unsigned int)v4 % 4 & 1;
    *(&((char *)stack_base)[(unsigned long long)((unsigned int)v4 & 1) + -66]) = 43;
    v1 = v5;
    *(&((char *)stack_base)[((unsigned int)v4 % 2 & 1) + (unsigned long long)((unsigned int)v4 & 1) + -66]) = 32;
    v7 = (unsigned long long)((v6 ^ 0x80000000) & v6 < 0 | !(v6 < 0) & v6);
    *(&((char *)stack_base)[((unsigned int)v4 % 4 & 1) + (unsigned long long)((unsigned int)v4 % 2 & 1) + ((unsigned int)v4 & 1) + -66]) = 48;
    tmp_230 = (unsigned int)v4 % 8 & 1;
    v8 = 0;
    *((short *)&((char *)stack_base)[((unsigned int)v4 % 4 & 1) + (unsigned long long)((unsigned int)v4 % 2 & 1) + ((unsigned int)v4 & 1) + ((unsigned int)v4 % 8 & 1) + -66]) = 11818;
    *(&((char *)stack_base)[((unsigned int)v4 % 4 & 1) + (unsigned long long)((unsigned int)v4 % 2 & 1) + ((unsigned int)v4 & 1) + ((unsigned int)v4 % 8 & 1) + -64]) = 42;
    *(&((char *)stack_base)[tmp_189 + tmp_185 + tmp_106 + tmp_230 + -62]) = 0;
    *((unsigned long long *)&((char *)stack_base)[tmp_189 + tmp_185 + tmp_106 + tmp_230 + -63]) = (0 - (unsigned int)(char)(((unsigned int)v4 & 16) < 1) & 32) + 71;
    v10 = (((unsigned long long)(unsigned int)(INVALID_IR) >> 0 | (unsigned long long)(unsigned int)(INVALID_IR) >> 6) & 1) == 1;
    v15 = rbx * 5 + 1;
    while (true)
    {
        v0 = v15;
        v11 = __snprintf_chk();
        if ((unsigned int)v11 < 0)
        {
            break;
        }
        if ((unsigned int)v15 > 8)
        {
            break;
        }
        if (v11 < v12)
        {
            strtof(v13, 0x0);
            v14 = (unsigned int)(INVALID_IR);
            if (INVALID_IR && ((char)((unsigned long long)(unsigned int)(INVALID_IR) >> 2) & 1) == 0)
            {
                break;
            }
        }
        v15 = (unsigned int)v15 + 1;
    }
    return stack_base + 0;
}

extern char g_612321;

int sub_403050()
{
    unsigned long v0;  // [bp-0x60]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x3f]
    unsigned long v4;  // rcx
    unsigned long long v5;  // rdi
    unsigned long v6;  // rsi
    unsigned long long v7;  // rdx
    unsigned long long v8;  // r9
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdi
    char *v11;  // rdx
    unsigned long long v12;  // r13
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14

    v0 = v4;
    if (v5 > v6)
    {
        v12 = v7;
        v15 = v5;
        v14 = v8 * (v5 - 1);
        while (true)
        {
            v15 -= 1;
            if (g_612321 != 0)
            {
                v11 = v12 + 7;
                v9 = &v1;
                do
                {
                    v10 = *(v11);
                    v9 = &v2;
                    v11 = &v11[-1];
                    *((unsigned long long *)&v1) = v10;
                }
                while (stack_base + -56 != v9);
            }
            v12 += 8;
            v14 -= v8;
            if (v15 == v6)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

extern unsigned int g_40c300;
extern unsigned int g_40c30f;
extern unsigned long long g_6123c8;
extern unsigned long long g_6123d0;
extern char *stdout;

int sub_4038f0()
{
    unsigned long long v1;  // rbx
    char *v2;  // rdi
    unsigned long long v3;  // cc_dep1
    unsigned long long v4;  // cc_dep2
    unsigned long v5;  // d
    unsigned long long v6;  // rcx
    char *v7;  // rsi
    unsigned long long v8;  // rbx
    unsigned long long v9;  // cc_dep1
    unsigned int v10;  // edi
    unsigned long long v11;  // rax
    char *v12;  // rdi
    unsigned long long v13;  // rcx
    char *v14;  // rsi
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // cc_dep2
    unsigned long v17;  // d
    unsigned long long v19;  // rbx
    unsigned long long v21;  // rax

    v1 = 1;
    if (g_6123c8 != 0)
    {
        if ((*((char *)g_6123c8) & 32) == 0)
        {
            v2 = "-";
            v6 = 2;
            v7 = *((long long *)(g_6123d0 - 8));
            while (v6 != 0)
            {
                v6 -= 1;
                v3 = *(v7);
                v4 = *(v2);
                v2 = &v2[v5];
                v7 = &v7[v5];
                break;
            }
            v9 = (v3 > v4) - 0 - (v3 < v4);
            if ((char)v9 != 0)
            {
                v11 = sub_408120();
                if (v11 != 0)
                {
                    v19 = (unsigned int)sub_407090();
                    v1 = 0;
                    error(0x0, *(__errno_location()), "%s");
                }
            }
            if ((char)v9 == 0 || v11 == 0)
            {
                v1 = 1;
            }
        }
        else
        {
            v8 = (unsigned int)sub_407090();
            error(0x0, v10, (unsigned long long)dcgettext(0x0, 0x40c300, 0x5));
            v12 = "-";
            v13 = 2;
            v14 = *((long long *)(g_6123d0 - 8));
            while (v13 != 0)
            {
                v13 -= 1;
                v15 = *(v14);
                v16 = *(v12);
                v12 = &v12[v17];
                v14 = &v14[v17];
                break;
            }
            v1 = 0;
            if ((v15 > v16) - 0 - (v15 < v16) != 0)
            {
                sub_408120();
            }
        }
        g_6123c8 = 0;
    }
    if ((*(stdout) & 32) == 0)
    {
        v21 = v1;
        return v21;
    }
    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c30f, 0x5));
    return 0;
}

extern struct g_6122b8;
extern unsigned long long g_6122c0;
extern unsigned long long g_6122c8;
extern unsigned int g_6122d0;
extern unsigned long long g_612460;

int sub_406dd0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_6122d0;
    if (g_6122d0 > 1)
    {
        v2 = &g_6122b8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6122b8[(unsigned long long)(g_6122d0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_6122b8->field_8 != 6366304)
    {
        v1 = free(g_6122b8->field_8);
        g_6122c0 = 0x100;
        g_6122c8 = &g_612460;
    }
    if (g_6122b8 != 6365888)
    {
        v1 = free(g_6122b8);
        g_6122b8 = &g_6122c0;
    }
    g_6122d0 = 1;
    return v1;
}

int sub_407bc0()
{
    unsigned int v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    unsigned long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa0]
    unsigned long v6;  // [bp-0x98]
    unsigned long v7;  // [bp-0x90]
    void v8;  // [bp-0x88]
    void v9;  // [bp-0x78]
    void v10;  // [bp-0x68]
    void v11;  // [bp-0x58]
    void v12;  // [bp-0x48]
    void v13;  // [bp-0x38]
    void v14;  // [bp-0x28]
    void v15;  // [bp-0x18]
    unsigned long v17;  // rdx
    unsigned long v18;  // rcx
    unsigned long v19;  // r8
    unsigned long v20;  // r9
    char v21;  // al
    void v22;  // xmm0
    void v23;  // xmm1
    void v24;  // xmm2
    void v25;  // xmm3
    void v26;  // xmm4
    void v27;  // xmm5
    void v28;  // xmm6
    void v29;  // xmm7

    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    if (v21 != 0)
    {
        v8 = v22;
        v9 = v23;
        v10 = v24;
        v11 = v25;
        v12 = v26;
        v13 = v27;
        v14 = v28;
        v15 = v29;
    }
    v0 = 16;
    v2 = stack_base + 8;
    v1 = 48;
    v3 = stack_base + -184;
    return sub_407b60();
}

// int sub_406ec0()

int sub_407830()
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
            sub_407a20(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_612458;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4055f0()
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
        g_612458 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern char g_612321;

int sub_403680()
{
    unsigned long v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x5c]
    unsigned long v3;  // rdi
    unsigned long v4;  // rsi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r12
    unsigned long long v7;  // r9
    unsigned int v9;  // eax
    char v10;  // ah
    unsigned int v11;  // r13d
    unsigned long long v12;  // r15
    unsigned long long v15;  // r14

    if (v3 > v4)
    {
        v6 = v5;
        v12 = 0;
        v0 = v3 - v4;
        v15 = v7 * (v3 - 1);
        while (true)
        {
            if (g_612321 != 0)
            {
                v9 = r13;
                v10 = *((char *)(v6 + v12 * 4 + 2));
                v1 = rax | (unsigned int)((unsigned long long)(char)*((char *)(v6 + v12 * 4 + 1)) * 0x10000) | (unsigned int)((unsigned long long)(char)*((char *)(v6 + v12 * 4)) * 0x1000000);
                v11 = rax | (unsigned int)((unsigned long long)(char)*((char *)(v6 + v12 * 4 + 1)) * 0x10000) | (unsigned int)((unsigned long long)(char)*((char *)(v6 + v12 * 4)) * 0x1000000);
            }
            v12 += 1;
            sub_405390();
            v15 -= v7;
            if (v0 == v12)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

int sub_408f70()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_408f10();
}

extern unsigned int g_40c31b;
extern char g_6123c4;
extern unsigned long long g_6123c8;
extern unsigned long long *g_6123d0;
extern unsigned long long g_6123d8;
extern char g_612410;
extern char g_612432;
extern unsigned long long stdin;

int sub_403a50()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rdx
    unsigned long long v3;  // cc_dep1
    unsigned long long v4;  // cc_dep2
    unsigned long v5;  // d
    char *v6;  // rsi
    unsigned long long v7;  // rcx
    char *v8;  // rdi
    void *v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rax

    v1 = 1;
    while (true)
    {
        v2 = *(g_6123d0);
        g_6123d8 = *(g_6123d0);
        if (v2 == 0)
        {
            break;
        }
        v8 = "-";
        v7 = 2;
        v6 = *(g_6123d0);
        while (v7 != 0)
        {
            v7 -= 1;
            v3 = *(v6);
            v4 = *(v8);
            v8 = &v8[v5];
            v6 = &v6[v5];
            break;
        }
        g_6123d0 = &g_6123d0[1];
        if ((v3 > v4) - 0 - (v3 < v4) == 0)
        {
            g_6123c4 = 1;
            g_6123d8 = dcgettext(0x0, 0x40c31b, 0x5);
            v10 = stdin;
            g_6123c8 = stdin;
        }
        else
        {
            v10 = fopen(*(g_6123d0), "r");
            g_6123c8 = v10;
            if (v10 == 0)
            {
                v11 = (unsigned int)sub_407090();
                v1 = 0;
                error(0x0, *(__errno_location()), "%s");
                v10 = g_6123c8;
            }
        }
        if (g_612410 == 0 || g_612432 != 0)
        {
            break;
        }
        setvbuf(v10, NULL, 0x2, 0x0);
    }
    v13 = v1;
    return v13;
}

extern unsigned long long g_6123c8;
extern unsigned long long g_6123e0;

int sub_4048a0()
{
    unsigned long long v1;  // rdi
    unsigned long long *v3;  // rdx
    unsigned long long *v4;  // rbx
    unsigned long v5;  // r14
    unsigned long v6;  // rsi
    void *v7;  // rdi
    unsigned long long v8;  // rax
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rdi

    if (v1 != 0 && g_6123e0 >= v1)
    {
        v4 = v3;
        *(v3) = 0;
        if (g_6123c8 != 0)
        {
            v12 = 0;
            v11 = 1;
            while (true)
            {
                v5 = v1 - v12;
                v7 = v12 + v6;
                v8 = fread_unlocked(v7, 0x1, v5, g_6123c8);
                *(v4) = *(v4) + v8;
                if (v5 == v8)
                {
                    break;
                }
                __errno_location();
                v11 = (unsigned int)v11 & sub_4038f0() & sub_403a50();
                if (g_6123c8 == 0)
                {
                    break;
                }
                v12 = *(v4);
            }
        }
        return stack_base + 0;
    }
    if (g_6123e0 < v1 || v1 == 0)
    {
        __assert_fail(); /* do not return */
    }
}

int sub_408fb0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408940();
}

extern char g_612308;
extern unsigned long long g_612310;

int sub_402ce1()
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

    if (g_612308 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_612310 >= 0)
            {
                break;
            }
            g_612310 = g_612310 + 1;
            *((long long *)(6364736 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_612308 = 1;
        return sub_402c8b();
    }
    return v4;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6122b8;
extern uint128_t g_6122c0;
extern unsigned int g_6122d0;
extern int512_t g_612460;

int sub_4069c0()
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
    v17 = g_6122b8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_6122d0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_6122b8 != 6365888)
            {
                v16 = sub_407830();
                g_6122b8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_407830();
                v17 = v15;
                g_6122b8 = v15;
                *(v15) = g_6122c0;
            }
            memset(&v17[(long long)(int)g_6122d0], 0x0, (int)((unsigned int)v13 + 1 - g_6122d0) * 16);
            g_6122d0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_407a20(); /* do not return */
        }
    }
    if (g_6122d0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_405790();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6366304)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4077d0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_405790();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned int g_40c403;
extern unsigned int g_40d4c8;
extern unsigned int g_40d4f0;
extern unsigned int g_40d598;
extern unsigned int g_40d650;
extern unsigned int g_40d688;
extern unsigned int g_40d810;
extern unsigned int g_40d860;
extern unsigned int g_40d980;
extern unsigned int g_40dba8;
extern unsigned int g_40dbd8;
extern unsigned int g_40dc10;
extern unsigned int g_40dd50;
extern unsigned int g_40de68;
extern unsigned int g_40df10;
extern unsigned int g_40e010;
extern unsigned int g_40e108;
extern unsigned int g_40e168;
extern unsigned int g_40e240;
extern unsigned int g_40e288;
extern unsigned int g_40e2a8;
extern unsigned long long g_612458;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_404960()
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
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40d4c8, 0x5), g_612458);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d4f0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d598, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d650, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d688, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d810, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d860, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d980, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dba8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dbd8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dc10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dd50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40de68, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40df10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e010, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e108, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e168, 0x5), stdout);
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
            v39 = "od";
            v40 = 3;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c403, 0x5));
            v48 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c403, 0x5));
            v47 = setlocale(0x5, 0x0);
            if (v47 != 0)
            {
                v49 = strncmp(v47, "en_", 0x3);
            }
            if (v47 == 0 || v49 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e288, 0x5));
            }
        }
        if ((v37[1] == 0 || v48 != 0) && (v37[1] == 0 || strncmp(v48, "en_", 0x3) != 0) && (v37[1] != 0 || v47 != 0) && (v37[1] != 0 || v49 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e240, 0x5));
        }
        if (v37[1] != 0 || v47 != 0 && v49 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e288, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e2a8, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_402ec0()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long v7;  // rdi
    unsigned long v8;  // rsi
    unsigned long v9;  // rax
    unsigned long v10;  // r15
    unsigned long v11;  // r14
    unsigned long v12;  // r13
    unsigned long v13;  // r12
    unsigned long v14;  // rbx

    if (v7 > v8)
    {
        v5 = v10;
        v4 = v11;
        v3 = v12;
        v2 = v13;
        v1 = stack_base + 0;
        v0 = v14;
    }
    else
    {
        return v9;
    }
}

int sub_405790()
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
            v26 = (unsigned int)sub_405690();
            v27 = (unsigned long long)(unsigned int)sub_405690();
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
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v89 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v41 = v5;
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
                            v89 = (char)((unsigned int)v39 == 2);
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
                        v89 = (char)((unsigned int)v39 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (char)((unsigned int)v39 == 2);
                        v35 = 0;
                    case 35: case 126:
                        v89 = (unsigned int)v39 == 2;
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
                        if (v43 == 0)
                        {
                            break;
                        }
                        else
                        {
                            v55 = 0;
                            break;
                        }
                        if (v17 == 0 || v43 != 0)
                        {
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            v78 = 0;
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
                            v76 = (unsigned int)sub_405790();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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
                    v46 = sub_409010();
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
                v50 = 0;
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
                v76 = (unsigned int)sub_405790();
            }
            if ((v25 == 0 || v76 >= v79) && (v17 == 0 || v5 == 0 || v76 >= v79) && (v25 == 0 || v15 != 1 || v89 != 0) && (v17 == 0 || v5 == 0 || v15 != 1 || v89 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v25 == 0 || v78 == 0) && (v25 == 0 || v76 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
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

extern unsigned int g_40f312;
extern unsigned int g_40f33d;
extern unsigned int g_40f570;

int sub_407750()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f312, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40f33d, 0x5));
    dcgettext(0x0, 0x40f570, 0x5);
}

extern unsigned int g_6122d4;
extern unsigned int g_6122d8;
extern unsigned int g_6122dc;
extern unsigned int g_6125a0;
extern unsigned int g_6125a4;
extern unsigned int g_6125a8;
extern unsigned long long g_6125b0;
extern unsigned long long g_6125e0;

int sub_408f10()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6125a0 = g_6122dc;
    g_6125a4 = g_6122d8;
    v1 = (unsigned int)v2;
    v0 = &g_6125a0;
    g_6122dc = g_6125a0;
    g_6125e0 = g_6125b0;
    g_6122d4 = g_6125a8;
    return sub_408940();
}

int sub_4097a0()
{
    unsigned int *v1;  // rdi
    unsigned long v2;  // rax

    *(v1) = *(v1) | 32;
    return v2;
}

extern int512_t g_612560;

int sub_406bc0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_612560 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_612560 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_406e70()

// int sub_406fd0()

int sub_402e40()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    char *v4;  // rdi
    unsigned long long v5;  // rbx
    char *v6;  // rbx
    unsigned long v7;  // rcx
    unsigned long long v8;  // rax
    unsigned long long v10;  // rbx
    char v11;  // al

    if (*(v4) != 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v6 = v4;
        v0 = v7;
        if (*(v4) == 43)
        {
            v6 = &v4[1];
        }
        v8 = strchr(v6, 0x2e);
        v10 = v1;
        v11 = (unsigned int)sub_407ce0() == 0;
        return rax;
    }
    return 0;
}

extern char g_612321;

int sub_403120()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    unsigned long v3;  // rcx
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbp
    unsigned long long v8;  // r9
    unsigned int v10;  // eax
    char v11;  // ah
    unsigned int v12;  // r14d
    unsigned long long v13;  // r15
    unsigned long long v15;  // r13

    v0 = v3;
    if (v4 > v5)
    {
        v7 = v6;
        v13 = 0;
        v1 = v4 - v5;
        v15 = v8 * (v4 - 1);
        while (true)
        {
            if (g_612321 != 0)
            {
                v10 = r14;
                v11 = *((char *)(v7 + v13 * 4 + 2));
                v12 = rax | (unsigned int)((unsigned long long)(char)*((char *)(v7 + v13 * 4 + 1)) * 0x10000) | (unsigned int)((unsigned long long)(char)*((char *)(v7 + v13 * 4)) * 0x1000000);
            }
            v13 += 1;
            v15 -= v8;
            if (v1 == v13)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

int sub_409170()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_408120();
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

extern unsigned long long g_611e30;

int sub_40c288()
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
        rax();
        v1 = &v1[-1];
    }
    return v4;
}

extern int512_t g_612560;

int sub_406ba0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_612560 : v1));
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

    v10 = sub_401748();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6364720 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_407090()
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
    return sub_4069c0();
}

// int sub_4071a0()

// int sub_4071d0()

int sub_407870()
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
        sub_407a20(); /* do not return */
    }
}

// int sub_407080()

int sub_408f90()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408f10();
}

int sub_404090()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rbx

    v0 = v3;
    sub_402d50();
    v1 = stack_base + 0;
    v0 = v0;
}

int sub_403780()
{
    unsigned long v0;  // [bp-0x60]
    unsigned int v1;  // [bp-0x58]
    char v2;  // [bp-0x51]
    unsigned long v3;  // [bp-0x50]
    char v4;  // [bp-0x3c]
    unsigned int v6;  // r8d
    unsigned long v7;  // rdi
    unsigned long v8;  // rsi
    unsigned long v9;  // r9
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r8
    unsigned long long v12;  // rdx
    unsigned long long v13;  // r15
    unsigned long long v15;  // r14

    v1 = v6;
    if (v7 > v8)
    {
        v13 = v9 * (v7 - 1);
        v15 = v10;
        v0 = v10 + v7 - v8;
        while (true)
        {
            v15 += 1;
            v11 = (char)*((char *)(v15 - 1));
            v12 = (char)*((char *)(v15 - 1));
            switch (v2)
            {
            case 0:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            case 12:
                break;
            case 13:
                break;
            default:
                v3 = v12;
                *((unsigned long long *)&v2) = v11;
                __sprintf_chk((unsigned int)&v4, 0x1, 0x4, ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (v3 << 1) + 1)) & 64) == 0? "%03" : "%"), v2, v9);
                break;
            }
            v13 -= v9;
            if (v15 == v0)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

typedef struct struct_0 {
    char padding_0[4257536];
    unsigned long long field_40f700;
} struct_0;

extern int512_t g_40f700;
extern unsigned int g_612268;

int sub_407c50()
{
    char v0;  // [bp-0x2a]
    char v1;  // [bp-0x29]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r13
    unsigned int v7;  // edi
    struct v8;  // rdi
    unsigned long v9;  // r12
    unsigned long v10;  // rbx
    unsigned long long v11;  // rsi
    unsigned long v13;  // rsi
    char v14;  // dl

    v4 = v6;
    v8 = (unsigned long long)v7 - 1;
    v3 = v9;
    v2 = v10;
    if ((unsigned int)v8 > 3)
    {
        abort(); /* do not return */
    }
    v13 = *((long long *)(0x8 * v8 + (char *)&g_40f700));
    if ((unsigned int)v11 < 0)
    {
        v0 = v14;
        v1 = 0;
    }
    error(g_612268, 0x0, (unsigned long long)dcgettext(0x0, v13, 0x5));
}

int sub_406ceb()
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
    v7 = (unsigned int)sub_405790();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4077d0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_405790();
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

extern char g_612321;

int sub_403200()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    unsigned long v3;  // rcx
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6;  // r9
    unsigned long long v8;  // r15
    unsigned long long v9;  // r13

    v0 = v3;
    if (v4 > v5)
    {
        v8 = 0;
        v1 = v4 - v5;
        v9 = v6 * (v4 - 1);
        while (true)
        {
            v8 += 1;
            v9 -= v6;
            if (v1 == v8)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

// int sub_407180()

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

extern unsigned int g_40fb60;
extern unsigned int g_40fba1;
extern unsigned long long stderr;

int sub_408940()
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
    char *v34;  // rsi
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    unsigned long long v38;  // cc_dep1
    unsigned int v39;  // ecx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // edx
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
    char *v53;  // r8
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
                        sub_408240();
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
                    v35 = *(v34);
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
                            sub_408240();
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
        *((unsigned long long *)&v0->field_0) = v42;
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
        v45 = (unsigned int)sub_408320();
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
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fb60, 0x5), *(v15));
                    }
                    v0->field_8 = v45;
                    v62 = 0;
                    v63 = *(v50) != 58;
                    v45 = r14 * 5 + 58;
                }
            }
        }
    }
    if (unknown)
    {
        if ((unsigned int)v49 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fba1, 0x5), *(v15));
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (unknown)
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
                v60 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v60;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fb60, 0x5), *(v15));
                }
                v0->field_8 = v45;
                v64 = 0;
                v65 = *(v50) != 58;
                v45 = r14 * 5 + 58;
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
        v45 = (unsigned int)sub_408320();
    }
    v66 = v45;
    return v66;
}

// int sub_4071c0()

int sub_402d40()
{
    unsigned long v1;  // rax

    return v1;
}

extern uint128_t g_612560;
extern uint128_t g_612570;
extern uint128_t g_612580;
extern unsigned long long g_612590;

int sub_407100()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_612560;
    *((uint128_t *)&v1) = g_612570;
    *((uint128_t *)&v2) = g_612580;
    v4 = g_612590;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4069c0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_403410()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long v3;  // rcx
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r9
    unsigned long long v9;  // r13
    unsigned long long v10;  // r15

    v0 = v3;
    if (v4 > v5)
    {
        v10 = v6;
        v1 = v6 + v4 - v5;
        v9 = v7 * (v4 - 1);
        while (true)
        {
            v10 += 1;
            v9 -= v7;
            if (v10 == v1)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

// int sub_404e00()

int sub_407ac0()
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
    return sub_407a60();
}

// int sub_407bb7()

int sub_402ef1()
{
    unsigned long v0;  // [bp-0x20]
    char v1;  // [bp-0xa]
    char v2;  // [bp-0x9]
    unsigned long long v3;  // [bp+0x0]
    unsigned long long v5;  // [bp+0x10]
    unsigned long long v6;  // [bp+0x18]
    unsigned long long v7;  // [bp+0x20]
    unsigned long long v8;  // [bp+0x28]
    unsigned long v9;  // rax
    unsigned long long v11;  // r14
    unsigned long v14;  // r12
    unsigned long long v15;  // r15
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned long long v21;  // r15

    v0 = v9;
    while (true)
    {
        v11 = r14 + 1;
        if (v1 > 32 && (*((char *)(v11 - 1)) & 127) != 127)
        {
            *((unsigned long long *)&v1) = (char)(*((char *)(v11 - 1)) & 127);
            v2 = 0;
        }
        v15 = r15 - v14;
        if (v11 == v0)
        {
            break;
        }
    }
    v17 = v3;
    v18 = v5;
    v19 = v6;
    v20 = v7;
    v21 = v8;
    return sub_407ac0();
}

extern uint128_t g_612560;
extern uint128_t g_612570;
extern uint128_t g_612580;
extern unsigned long long g_612590;

int sub_406fdf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_612590;
    *((uint128_t *)&v0) = g_612560;
    *((uint128_t *)&v1) = g_612570;
    *((uint128_t *)&v2) = g_612580;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4069c0();
}

int sub_407a4c()
{
    abort(); /* do not return */
}

// int sub_407820()

extern int512_t g_612560;

int sub_406bb0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_612560 : v1)) = v2;
    return &g_612560;
}

extern int512_t g_612560;

int sub_406c00()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_612560 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_612560 : v1) + 4)) = v3;
    return v2;
}

int sub_405250()
{
    void tmp_105;  // tmp #105
    void tmp_177;  // tmp #177
    void tmp_181;  // tmp #181
    void tmp_221;  // tmp #221
    unsigned long v0;  // [bp-0x68]
    unsigned short v1;  // [bp-0x43]
    unsigned long v3;  // rdx
    uint128_t v4;  // xmm0
    uint128_t v5;  // xmm0
    unsigned long long v7;  // rbp
    unsigned long v8;  // rsi
    unsigned long v9;  // rdi
    unsigned long v10;  // cc_dep1
    unsigned long long v11;  // rbx

    tmp_105 = (unsigned int)v3 & 1;
    v1 = 11557;
    tmp_177 = (unsigned int)v3 % 2 & 1;
    tmp_181 = (unsigned int)v3 % 4 & 1;
    *(&((char *)stack_base)[(unsigned long long)((unsigned int)v3 & 1) + -66]) = 43;
    *(&((char *)stack_base)[((unsigned int)v3 % 2 & 1) + (unsigned long long)((unsigned int)v3 & 1) + -66]) = 32;
    v5 = (v4 ^ 0x8000000000000000) & v4 < 0 | !(v4 < 0) & v4;
    *(&((char *)stack_base)[((unsigned int)v3 % 4 & 1) + (unsigned long long)((unsigned int)v3 % 2 & 1) + ((unsigned int)v3 & 1) + -66]) = 48;
    tmp_221 = (unsigned int)v3 % 8 & 1;
    *((short *)&((char *)stack_base)[((unsigned int)v3 % 4 & 1) + (unsigned long long)((unsigned int)v3 % 2 & 1) + ((unsigned int)v3 & 1) + ((unsigned int)v3 % 8 & 1) + -66]) = 11818;
    *(&((char *)stack_base)[((unsigned int)v3 % 4 & 1) + (unsigned long long)((unsigned int)v3 % 2 & 1) + ((unsigned int)v3 & 1) + ((unsigned int)v3 % 8 & 1) + -64]) = 42;
    *(&((char *)stack_base)[tmp_181 + tmp_177 + tmp_105 + tmp_221 + -62]) = 0;
    *((unsigned long long *)&((char *)stack_base)[tmp_181 + tmp_177 + tmp_105 + tmp_221 + -63]) = (0 - (unsigned int)(char)(((unsigned int)v3 & 16) < 1) & 32) + 71;
    v11 = (unsigned int)((((unsigned long long)(unsigned int)(INVALID_IR) >> 0 | (unsigned long long)(unsigned int)(INVALID_IR) >> 6) & 1) == 1? 15 : 1);
    while (true)
    {
        v0 = v11;
        v7 = __snprintf_chk();
        if ((unsigned int)v7 < 0)
        {
            break;
        }
        if ((unsigned int)v11 > 16)
        {
            break;
        }
        if (v7 < v8)
        {
            strtod(v9, 0x0);
            v10 = (unsigned int)(INVALID_IR);
            if (INVALID_IR && ((char)((unsigned long long)(unsigned int)(INVALID_IR) >> 2) & 1) == 0)
            {
                break;
            }
        }
        v11 = (unsigned int)v11 + 1;
    }
    return stack_base + 0;
}

extern unsigned int g_40e475;
extern unsigned int g_40e490;

int sub_404f30()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40e475, 0x5);
    }
    dcgettext(0x0, 0x40e490, 0x5);
    sub_4071f0();
    sub_406ee0();
}

extern unsigned int g_612440;
extern unsigned int g_612444;
extern unsigned long long stdout;

int sub_402d50()
{
    char v0;  // [bp-0x12]
    void tmp_19;  // tmp #19
    char v1;  // [bp-0x11]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r8
    char v6;  // sil
    unsigned long long v7;  // rdx
    char *v8;  // rcx
    unsigned long v9;  // cc_dep1
    unsigned long v10;  // cc_dep2
    unsigned long long v11;  // rax
    unsigned long v12;  // cc_dep1
    unsigned long v13;  // cc_dep2
    char *v14;  // rdi

    v5 = v4;
    v8 = &v1;
    v2 = 0;
    v1 = v6;
    v14 = &(&v1)[-1 * (long long)(int)g_612440];
    if (!(g_612444 != 10))
    {
        while (true)
        {
            v8 = &v0;
            v7 = v5 * 14757395258967641293 >> 64 >> 3;
            v0 = (unsigned int)(v5 - (v5 * 14757395258967641293 >> 64 >> 3) * 10) + 48;
            if (v5 <= 9)
            {
                break;
            }
            v5 = v7;
        }
    }
    else if (!(g_612444 != 16))
    {
        do
        {
            v8 = &v0;
            tmp_19 = (unsigned int)v5 & 15;
            v9 = v5 % 16;
            v10 = v5 % 8;
            v5 = v5 % 16;
            v0 = *((char *)(4244164 + tmp_19));
        }
        while (!(INVALID_IR));
    }
    else if (g_612444 == 8)
    {
        do
        {
            v8 = &v0;
            v11 = ((unsigned int)v5 & 7) + 48;
            v12 = v5 % 8;
            v13 = v5 % 4;
            v5 = v5 % 8;
            *((unsigned long long *)&v0) = v11;
        }
        while (!(INVALID_IR));
    }
    if (g_612444 == 10 && &(&v1)[-1 * (long long)(int)g_612440] >= v8 || &(&v1)[-1 * (long long)(int)g_612440] >= v8 && g_612444 != 10)
    {
        v14 = v8;
    }
    if (&(&v1)[-1 * (long long)(int)g_612440] < v8 && g_612444 == 10 || &(&v1)[-1 * (long long)(int)g_612440] < v8 && g_612444 != 10)
    {
        do
        {
            v8 = &v8[-1];
            *(v8) = 48;
        }
        while (&(&v1)[-1 * (long long)(int)g_612440] != v8);
    }
    return fputs_unlocked(v14, stdout);
}

extern unsigned long long stdout[7];

int sub_404017()
{
    unsigned long long v0;  // [bp+0x0]
    char *v2;  // rax
    char *v3;  // rax
    char v4;  // bl
    unsigned long long v5;  // rbx

    v2 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v2) = 40;
    }
    else
    {
        __overflow();
    }
    v3 = sub_402d50();
    if (v4 != 0)
    {
        v3 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v3) = v4;
        }
    }
    if (v4 == 0 || stdout[5] < stdout[6])
    {
        v5 = v0;
        return v3;
    }
}

int sub_408ff0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408940();
}

// int sub_406ea0()

extern unsigned int g_40d3c8;
extern unsigned int *g_6123c8;

int sub_403b50()
{
    char v0;  // [bp-0x20b8]
    void tmp_2;  // tmp #2
    void tmp_13;  // tmp #13
    unsigned int v1;  // [bp-0x20a0]
    unsigned long v2;  // [bp-0x2088]
    char v4;  // [bp-0x2028]
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r12
    unsigned int *v8;  // rbp
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12d
    unsigned long long v16;  // rax

    if (v6 != 0)
    {
        v8 = g_6123c8;
        if (g_6123c8 != 0)
        {
            v12 = v6;
            v7 = 1;
            while (true)
            {
                v9 = __fxstat(0x1, fileno(v8), (unsigned int)&v0);
                if (v9 == 0)
                {
                    if (((unsigned short)v1 & 0xd000) == 0x8000 && v2 > (!((long long)(stack_base)[-8320] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-8320]))
                    {
                        if (v2 < v6)
                        {
                            v14 = v6 - v2;
                        }
                        else
                        {
                            v7 = (unsigned int)(sub_4081e0() != 0? 0 : (unsigned int)r12);
                        }
                    }
                    if (v2 <= (!((long long)(stack_base)[-8320] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-8320]) || ((unsigned short)v1 & 0xd000) != 0x8000)
                    {
                        v13 = 0x2000;
                        do
                        {
                            tmp_2 = v13;
                            tmp_13 = !(v13 <= v12);
                            v13 = (!(v13 <= v12)? v12 : v13);
                            v11 = __fread_unlocked_chk((unsigned int)&v4, 0x2000, 0x1, (tmp_13? v12 : tmp_2), (unsigned int)g_6123c8);
                            v12 -= v11;
                            if (v11 != v13)
                            {
                                if (((char)*(g_6123c8) & 32) != 0)
                                {
                                    v7 = 0;
                                }
                                else if (((char)*(g_6123c8) & 16) != 0)
                                {
                                    if (v12 != 0)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        while (v12 != 0 || ((char)*(g_6123c8) & 32) != 0 && v11 != v13 || ((char)*(g_6123c8) & 16) != 0 && v11 != v13);
                        if (((char)*(g_6123c8) & 32) == 0 && ((char)*(g_6123c8) & 16) != 0 && v11 != v13)
                        {
                            v15 = v7 & sub_4038f0();
                            v8 = g_6123c8;
                            v7 = v15 & sub_403a50();
                            if (g_6123c8 == 0)
                            {
                                break;
                            }
                        }
                        else if (((char)*(g_6123c8) & 16) == 0 || v11 == v13 || v12 == 0 || ((char)*(g_6123c8) & 32) != 0)
                        {
                            v16 = v7;
                            return v16;
                        }
                    }
                }
                else
                {
                    v7 = 0;
                    v10 = (unsigned int)sub_407090();
                    error(0x0, *(__errno_location()), "%s");
                }
                if (v2 <= (!((long long)(stack_base)[-8320] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-8320]) || v2 < v6 || v9 != 0 || ((unsigned short)v1 & 0xd000) != 0x8000)
                {
                    v15 = v7 & sub_4038f0();
                }
            }
            if (true)
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d3c8, 0x5));
            }
            else if (v2 <= (!((long long)(stack_base)[-8320] - 1 <= 2305843009213693951)? 0x200 : (long long)(stack_base)[-8320]) || ((unsigned short)v1 & 0xd000) != 0x8000 || v9 == 0 && v2 >= v6)
            {
                v16 = v7;
                return v16;
            }
        }
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40d3c8, 0x5));
    }
    else
    {
        v7 = 1;
    }
    if (v6 == 0 || g_6123c8 != 0)
    {
        v16 = v7;
        return v16;
    }
}

extern unsigned int g_40f2b8;
extern unsigned int g_40f2c4;
extern unsigned int g_40f2cb;
extern unsigned int g_40f2cf;
extern unsigned int g_40f2df;
extern unsigned int g_40f2f6;
extern unsigned int g_40f358;
extern unsigned int g_40f428;
extern unsigned int g_40f448;
extern unsigned int g_40f470;
extern unsigned int g_40f498;
extern unsigned int g_40f4c8;
extern unsigned int g_40f620;

int sub_407230()
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
        __fprintf_chk(v15, 0x1, 0x40f2b8, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x40f2c4, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x40f620, dcgettext(0x0, 0x40f2cb, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40f358, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40f2cf, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40f2df, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40f2f6, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x40f428, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x40f448, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x40f470, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x40f498, 0x5);
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
        v32 = dcgettext(0x0, 0x40f4c8, 0x5);
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

extern char g_612321;

int sub_402f80()
{
    unsigned long v0;  // [bp-0x60]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x3f]
    unsigned long v4;  // rcx
    unsigned long long v5;  // rdi
    unsigned long v6;  // rsi
    unsigned long long v7;  // rdx
    unsigned long long v8;  // r9
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdi
    char *v11;  // rdx
    unsigned long long v12;  // r13
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14

    v0 = v4;
    if (v5 > v6)
    {
        v12 = v7;
        v15 = v5;
        v14 = v8 * (v5 - 1);
        while (true)
        {
            v15 -= 1;
            if (g_612321 != 0)
            {
                v11 = v12 + 7;
                v9 = &v1;
                do
                {
                    v10 = *(v11);
                    v9 = &v2;
                    v11 = &v11[-1];
                    *((unsigned long long *)&v1) = v10;
                }
                while (stack_base + -56 != v9);
            }
            v12 += 8;
            v14 -= v8;
            if (v15 == v6)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

extern int512_t g_612560;

int sub_406c50()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_612560 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_405790();
}

int sub_407ce0()
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
                    v18 = (char)*((char *)v1);
                    if (*((char *)v1) != 0)
                    {
                        *((unsigned long long *)&v1[0]) = v1;
                        v20 = strchr(v9, v18);
                        v32 = v1;
                    }
                }
            }
            else
            {
                v1 = v9;
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
        if (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *((char *)v1) != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx * 8 + 4257624)); */
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
        if ((*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *((char *)v1) != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *((char *)v1) != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && *((char *)v1) != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v38 = v30;
                v5 = 6;
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
                v34 = v30;
                v35 = 5;
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
            case 18: case 50:
                v40 = v30;
                v5 = 4;
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
            case 23:
                v39 = v30;
                v5 = 8;
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
                break;
            case 24:
                v36 = v30;
                v37 = 7;
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

int sub_4079d0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4077d0();
}

int sub_408240()
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

int sub_407690()
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
        return sub_407230();
    }
}

extern unsigned long long g_40fbbc;

int sub_409010()
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
        v5 = &g_40fbbc;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4091d0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_403380()
{
    unsigned long v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long v3;  // rcx
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r9
    unsigned long long v9;  // r13
    unsigned long long v10;  // r15

    v0 = v3;
    if (v4 > v5)
    {
        v10 = v6;
        v1 = v6 + v4 - v5;
        v9 = v7 * (v4 - 1);
        while (true)
        {
            v10 += 1;
            v9 -= v7;
            if (v10 == v1)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

int sub_407cb3()
{
    abort(); /* do not return */
}

int sub_4081a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4081e0();
    }
}

int sub_4079a0()
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
        sub_407a20(); /* do not return */
    }
}

int sub_4077f0()
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
        sub_407a20(); /* do not return */
    }
}

int sub_406b60()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4079d0();
}

extern unsigned long long g_612450;

int sub_405190()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_612450 = v1;
    return v2;
}

extern unsigned int g_40f660;
extern unsigned int g_612268;

int sub_407b60()
{
    unsigned long v2;  // rax
    unsigned int v3;  // edi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    if ((unsigned int)v2 < 0)
    {
        v4 = ferror(v3);
        if (v4 == 0)
        {
            error(g_612268, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40f660, 0x5));
        }
    }
    if (v4 != 0 || (unsigned int)v2 >= 0)
    {
        v2 = (unsigned int)sub_409090();
        return v5;
    }
}

// int sub_407060()

extern char g_612448;

int sub_4051a0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_612448 = v1;
    return v2;
}

extern char g_612321;

int sub_4032c0()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x48]
    unsigned long v3;  // rcx
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6;  // r9
    unsigned long long v8;  // r15
    unsigned long long v9;  // r13

    v0 = v3;
    if (v4 > v5)
    {
        v8 = 0;
        v1 = v4 - v5;
        v9 = v6 * (v4 - 1);
        while (true)
        {
            v8 += 1;
            v9 -= v6;
            if (v1 == v8)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

// int sub_407170()

int sub_406ee0()
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
    return sub_4069c0();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40fbbc;
extern char g_6125d8[2];

int sub_409230()
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
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_6125d8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40fbbc : (unsigned long long)nl_langinfo(0xe));
    if (g_6125d8 == 0)
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
            v9 = &g_40fbbc;
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
                        v59 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v26 = *(v59);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1)
                        {
                            if ((unsigned int)v26 != 32 && (unsigned int)v26 != 35)
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
                                        v9 = &g_40fbbc;
                                        v10 = (tmp_10 == 0? &g_40fbbc : tmp_10);
                                        free(NULL);
                                        sub_408120();
                                    }
                                }
                            }
                            if ((unsigned int)v26 == 35)
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
                                while (v62 != 10 && v63 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)v26 != 35 && v37 != 0)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)v26 != 35 && v37 != 0) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40fbbc : tmp_10);
                            sub_408120();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1)
                    {
                        v9 = &g_40fbbc;
                    }
                    else if (((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1) && v0 != 0 || ((unsigned int)v26 != 32 && v28 > 1 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40fbbc;
            free(v17);
        }
        *((char *[2])&g_6125d8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40fbbc : tmp_10), v9);
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

extern int512_t g_612248;

// int sub_40c270()

int sub_4091d0()
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

extern unsigned int g_40e4ad;
extern unsigned int g_40e4c2;
extern unsigned int g_40e4ca;
extern unsigned long long stderr[7];

int sub_404fb0()
{
    unsigned long long v1;  // r14
    void *v2;  // rsi
    unsigned long long v4[2];  // rdi
    unsigned int v5;  // rdx
    unsigned long long v6;  // rax
    void *v7;  // rbp
    unsigned long long v8;  // rbx
    char *v9;  // rax

    v1 = 0;
    v7 = v2;
    v8 = 0;
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e4ad, 0x5), stderr);
    if (*(v4) != 0)
    {
        while (true)
        {
            if (v8 != 0)
            {
                v6 = memcmp(v1, v7, v5);
                if (v6 == 0)
                {
                    v8 += 1;
                    v7 += v5;
                    __fprintf_chk((unsigned int)stderr, 0x1, 0x40e4ca, sub_407210());
                    if (v4[v8] == 0)
                    {
                        break;
                    }
                }
            }
            if (v8 == 0 || v6 != 0)
            {
                v8 += 1;
                v1 = v7;
                v7 += v5;
                __fprintf_chk((unsigned int)stderr, 0x1, 0x40e4c2, sub_407210());
                if (v4[v8] == 0)
                {
                    break;
                }
            }
        }
    }
    v9 = stderr[5];
    if (stderr[5] < stderr[6])
    {
        stderr[5] = stderr[5] + 1;
        *(v9) = 10;
        return v9;
    }
}

extern int512_t g_40e576;
extern int512_t g_40e57a;

int sub_405690()
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
        v3 = sub_409230();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40e576 : 4253057);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40e57a : 4253053);
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

// int sub_409150()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_407630()
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
    return sub_407230();
}

// int sub_406fc0()

extern unsigned int g_40f660;
extern unsigned int g_612268;
extern unsigned long long stdout;

int sub_407a60()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if ((unsigned int)v2 < 0)
    {
        v3 = ferror(stdout);
        if (v3 == 0)
        {
            error(g_612268, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40f660, 0x5));
        }
    }
    if (v3 != 0 || (unsigned int)v2 >= 0)
    {
        v2 = (unsigned int)sub_409150();
        return v4;
    }
}

int sub_407a00()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

// int sub_406e90()

// int sub_4071f0()

int sub_4050d0()
{
    unsigned long long v1;  // rax

    v1 = sub_404e10();
    if (INVALID_IR)
    {
        sub_404f30();
        sub_404fb0();
        r9();
        v1 = -1;
    }
    return v1;
}

extern char g_612321;

int sub_403590()
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x67]
    unsigned long long v3;  // rdi
    unsigned long v4;  // rsi
    unsigned long long v5;  // r15
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r9
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rax
    char *v10;  // rdx
    unsigned long long v11;  // r13
    unsigned long long v14;  // r14

    if (v3 > v4)
    {
        v5 = v3;
        v11 = v6;
        v14 = v7 * (v3 - 1);
        while (true)
        {
            v5 -= 1;
            if (g_612321 != 0)
            {
                v10 = v11 + 7;
                v9 = &v0;
                do
                {
                    v8 = *(v10);
                    v9 = &v1;
                    v10 = &v10[-1];
                    *((unsigned long long *)&v0) = v8;
                }
                while (stack_base + -96 != v9);
            }
            v11 += 8;
            sub_405250();
            v14 -= v7;
            if (v5 == v4)
            {
                break;
            }
        }
    }
    return sub_407ac0();
}

typedef struct struct_4 {
    char padding_0[24];
    char field_18;
} struct_4;

extern int512_t g_40d220;
extern char g_612250;
extern char g_612251;
extern char g_612320;
extern unsigned long long g_6123e0;
extern unsigned long long g_6123f0;
extern unsigned long long g_6123f8;
extern unsigned long long stdout[7];

int sub_403d80()
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void *v4;  // rcx
    unsigned long v6;  // rsi
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdi
    void *v9;  // rdx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rcx
    unsigned long long v12;  // r13
    unsigned long v13;  // rdx
    unsigned long long v14;  // r12
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdi
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdi
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rcx
    unsigned long long v23;  // r9
    unsigned long long v24;  // r8
    unsigned long long v29;  // rbx
    unsigned long long v31;  // rcx
    unsigned long long v32;  // rax
    char *v33;  // rdx
    char *v34;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // rax
    unsigned long long v36;  // rbp

    v7 = v6;
    v2 = v8;
    if (g_612251 != 0 && g_612250 == 0 && g_6123e0 == v6)
    {
        v35 = memcmp(v9, v4, v6);
        if ((unsigned int)v35 == 0 && g_612320 == 0)
        {
            v35 = puts("*");
            g_612320 = 1;
        }
    }
    if (g_612251 == 0 || g_6123e0 != v6 || g_612250 != 0 || (unsigned int)v35 != 0)
    {
        g_612320 = 0;
        if (g_6123f0 != 0)
        {
            v36 = 0;
            v1 = v4 + v6;
            do
            {
                v10 = v36 * 40;
                v11 = *((int *)&((char *)&g_40d220)[4 * (unsigned long long)(unsigned int)*((int *)(g_6123f8 + v36 * 40 + 4))]);
                v12 = (0 | g_6123e0) % *((int *)&((char *)&g_40d220)[4 * (unsigned long long)(unsigned int)*((int *)(g_6123f8 + v36 * 40 + 4))]);
                v0 = (0 | g_6123e0) % *((int *)&((char *)&g_40d220)[4 * (unsigned long long)(unsigned int)*((int *)(g_6123f8 + v36 * 40 + 4))]);
                v13 = (0 | g_6123e0 - v7) % *((int *)&((char *)&g_40d220)[4 * (unsigned long long)(unsigned int)*((int *)(g_6123f8 + v36 * 40 + 4))]) >> 64;
                v14 = (0 | g_6123e0 - v7) % *((int *)&((char *)&g_40d220)[4 * (unsigned long long)(unsigned int)*((int *)(g_6123f8 + v36 * 40 + 4))]);
                if (v36 == 0)
                {
                    v15 = 0;
                    v16 = v2;
                    *((long long *)6366240)();
                }
                else
                {
                    __printf_chk(0x1, "%*s");
                }
                v19 = v14;
                v20 = v12;
                v21 = v4;
                v22 = g_6123f8 + v10 + 16;
                v23 = (unsigned int)*((int *)(g_6123f8 + v10 + 32));
                v24 = (unsigned int)*((int *)(g_6123f8 + v10 + 28));
                *((long long *)(g_6123f8 + v10 + 8))();
                if (*((char *)(v10 + g_6123f8 + 24)) != 0)
                {
                    __printf_chk(0x1, "%*s");
                    fwrite_unlocked("  >", 0x1, 0x3, stdout);
                    if (v7 != 0)
                    {
                        v29 = v21;
                        do
                        {
                            v29 += 1;
                            v31 = (char)*((char *)(v29 - 1));
                            v32 = (char)*((char *)(v29 - 1));
                            if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (v31 << 1) + 1)) & 64) == 0)
                            {
                                v32 = 46;
                            }
                            v33 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *((unsigned long long *)&v33) = v32;
                            }
                            else
                            {
                                __overflow();
                            }
                        }
                        while (v29 != v1);
                    }
                    v34 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v34) = 60;
                    }
                    else
                    {
                        __overflow();
                    }
                }
                v35 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v35) = 10;
                }
                else
                {
                    v35 = __overflow();
                }
                v36 = 1;
            }
            while (g_6123f0 > 1);
        }
    }
    g_612250 = 0;
    return v35;
}

extern unsigned long long program_invocation_short_name;

int sub_402c8b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern unsigned int g_40f64f;
extern unsigned int g_612268;

int sub_407a20()
{
    dcgettext(0x0, 0x40f64f, 0x5);
    error(g_612268, 0x0, "%s");
}

int sub_408120()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4081a0() != 0)
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

int sub_409090()
{
    unsigned long long v0;  // [bp-0x800]
    void *v2;  // rax
    unsigned long long v3;  // rbx
    void *v4;  // rbp
    void *v5;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    v0 = 2000;
    v2 = sub_4097b0();
    v3 = v0;
    if (false)
    {
        *(__errno_location()) = 75;
    }
    if (stack_base + 0 != 0)
    {
        v4 = v2;
        if (!(fwrite(v2, 0x1, 0x7d0, v5) >= 2000))
        {
            v3 = -18446744069414584321;
            if (v4 != stack_base + -2040)
            {
                free(v4);
                *(__errno_location()) = *(v7);
            }
        }
        else if (v4 != stack_base + -2040)
        {
            free(v4);
        }
    }
    else
    {
        v3 = -18446744069414584321;
        sub_4097a0();
    }
    v9 = v3;
    return v9;
}

// int sub_406dc0()

// int sub_407050()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40fa98;
extern unsigned int g_40fab8;
extern unsigned int g_40fae8;
extern unsigned int g_40fb08;
extern unsigned int g_40fb38;
extern unsigned int g_40fb89;
extern unsigned long long stderr;

int sub_408320()
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
    char v11;  // [bp+0x18]
    char *v12;  // r14
    char *v13;  // rdx
    unsigned long v14;  // r8
    char *v15;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v17;  // r13
    unsigned long long v18;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r12
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v43;  // rbp
    unsigned long long v46;  // rax
    unsigned int *v47;  // rdx
    unsigned long long v48;  // r14

    v12 = v9->field_20;
    v3 = v13;
    v2 = v14;
    v15 = v9->field_20;
    *((struct struct_1 *)&v5) = *(v9->field_20);
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
                            else if (v29 != 0 || *((int *)(v19 + 24)) != *((int *)(v27 + 24)) || *((long long *)(v19 + 16)) != *((long long *)(v27 + 16)) || *((int *)(v19 + 8)) != *((int *)(v27 + 8)))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fa98, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fab8, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x40fb89, *((long long *)&v11));
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
            if ((v22 == 0 || *(v19) == 0) && (v22 == 0 || v4 == 0) && (v22 == 0 || v1 == 0) && (*(v19) == 0 || v23 == v17) && (v4 == 0 || v23 == v17) && (v1 == 0 || v23 == v17))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fb38, 0x5), *(v34));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fb08, 0x5), *(v34));
                        }
                        v9->field_8 = *((int *)(v19 + 24));
                        v46 = 63;
                    }
                }
                if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v25 && *(v15) == 0 || *(v15) == 0 && v32 != 1 || *(v15) != 0 && v32 != 0)
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
        if (unknown)
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
        if ((v36 != 0 || *((long long *)v18) != 0) && (*((char *)(v34[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v18) != 0))
        {
            return v46;
        }
    }
    if (v29 == 0 && *((long long *)v18) == 0 || v36 == 0 && v29 != 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40fae8, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

// int sub_407210()

int sub_407980()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4077d0();
}

int sub_406cc2()
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

extern unsigned long long g_6123c8;

int sub_403d20()
{
    unsigned long long v1;  // rbp
    unsigned int *v2;  // rdi
    unsigned long long v3;  // rax

    v1 = 1;
    *(v2) = -1;
    if (g_6123c8 != 0)
    {
        while (true)
        {
            v3 = fgetc(g_6123c8);
            *((unsigned long long *)&v2) = v3;
            if (v3 != -1)
            {
                break;
            }
            __errno_location();
            v1 = (unsigned int)v1 & sub_4038f0() & sub_403a50();
            if (g_6123c8 == 0)
            {
                break;
            }
        }
    }
    return stack_base + 0;
}

// int sub_407abb()

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4077d0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_407a20(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

