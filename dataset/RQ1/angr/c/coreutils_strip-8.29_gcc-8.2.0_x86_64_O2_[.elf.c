#include "decompile_angr.h"
int sub_404b80()
{
}

int sub_406350()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4063d0() != 0)
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

int sub_404b60()
{
}

extern unsigned long long g_40aed1;

int sub_405c40()
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
        v5 = &g_40aed1;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_405d80() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_404ec0()
{
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

int sub_4026c0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi
    unsigned long long v3;  // rcx

    v1 = 0;
    v3 = (unsigned int)v2->field_1 - 71;
    if (((unsigned int)v2->field_1 - 71 & 255) <= 51)
    {
        v1 = 1 << (v3 & 63);
        v1 = (char)((3232100262089121 & 1 << (v3 & 63)) != 0);
    }
    return v1;
}

extern unsigned int g_4090a1;
extern unsigned int g_4090af;
extern unsigned int g_4092e0;
extern unsigned int g_409308;
extern unsigned int g_409360;
extern unsigned int g_409398;
extern unsigned int g_4093c8;
extern unsigned int g_409400;
extern unsigned int g_409478;
extern unsigned int g_409578;
extern unsigned int g_409678;
extern unsigned int g_4097f0;
extern unsigned int g_4098b0;
extern unsigned int g_409960;
extern unsigned int g_409a78;
extern unsigned int g_409ba0;
extern unsigned int g_409cc0;
extern unsigned int g_409da8;
extern unsigned int g_409e28;
extern unsigned int g_409eb0;
extern unsigned int g_409f98;
extern unsigned int g_409fe0;
extern unsigned int g_40a000;
extern unsigned long long stdout;

int sub_402e30()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned int v3;  // edi
    unsigned long long v20;  // rbp
    char *v23;  // rax

    v0 = v2;
    if (v3 != 0)
    {
        dcgettext(0x0, 0x4092e0, 0x5);
        __fprintf_chk();
    }
    else
    {
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409308, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409360, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409398, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4093c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409400, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409478, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409578, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409678, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4097f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4098b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409960, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409a78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409ba0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409cc0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409da8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409e28, 0x5), stdout);
        v20 = dcgettext(0x0, 0x4090a1, 0x5);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409eb0, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4090af, 0x5));
        v23 = setlocale(0x5, 0x0);
        if (v23 != 0 && strncmp(v23, "en_", 0x3) != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409f98, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409fe0, 0x5));
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a000, 0x5));
    }
    exit(v3); /* do not return */
}

extern unsigned int g_40ae8b;
extern unsigned int g_40ae8f;
extern unsigned int g_40ae9f;
extern unsigned int g_40aeb6;
extern unsigned int g_40af18;
extern unsigned int g_40afe8;
extern unsigned int g_40b008;
extern unsigned int g_40b030;
extern unsigned int g_40b058;
extern unsigned int g_40b088;

int sub_405250()
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
    dcgettext(0x0, 0x40ae8b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40af18, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40ae8f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40ae9f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40aeb6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40afe8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40b008, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40b030, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40b058, 0x5);
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
        dcgettext(0x0, 0x40b088, 0x5);
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

int sub_405840()
{
}

int sub_404f20()
{
    void tmp_15;  // tmp #15
    char *v1;  // rdi
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned long|unsigned int v6;  // r8
    unsigned long|unsigned int v7;  // r9
    unsigned long|unsigned int v8;  // r8d
    unsigned int v9;  // ecx
    unsigned long long v10;  // rax
    char v11;  // al
    unsigned long long v12;  // rcx
    unsigned int v13;  // edx
    unsigned int v14;  // eax
    char v15;  // al
    unsigned int v17;  // edx
    unsigned long|char * v18;  // rsi
    unsigned long long v19;  // r8
    unsigned long long v20;  // rcx
    unsigned int v21;  // eax
    char v22;  // al
    unsigned int v24;  // edx
    unsigned int v25;  // eax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rax
    char v29;  // al

    v2 = *(v1);
    if (!(*(v1) != 45))
    {
        do
        {
            v1 = &v1[1];
            v26 = *(v1);
        }
        while (*(v1) == 48);
        v6 = v26;
        if (*(v18) != 45)
        {
            if (v7 > 9)
            {
                for (v7 = v26 - 48; v5 == 48; v5 = *(v18))
                {
                    v18 = &v18[1];
                }
                v13 = (unsigned int)v5 - 48;
                v14 = 0;
                v15 = v13 <= 9;
                return 0 - rax<4>;
            }
            return -18446744069414584321;
        }
        do
        {
            v18 = &v18[1];
            v4 = *(v18);
        }
        while (*(v18) == 48);
        if (v26 == v4)
        {
            while (true)
            {
                if (v7 <= 9)
                {
                    v1 = &v1[1];
                    v18 = &v18[1];
                    v6 = *(v1);
                    v4 = *(v18);
                    v7 = v6 - 48;
                    if (*(v1) != *(v18))
                    {
                        break;
                    }
                }
                else
                {
                    v12 = v4;
                    v25 = (unsigned int)v4 - v6;
                }
            }
            if (v7 <= 9)
            {
                v12 = v4;
                v25 = (unsigned int)v4 - v6;
            }
            else if (v7 > 9)
            {
                v19 = 0;
            }
        }
        if (v26 != v4 || v7 > 9)
        {
            v12 = v4;
            v25 = (unsigned int)v4 - v6;
            if ((v7 <= 9 || (unsigned int)(v12 - 48) <= 9) && ((unsigned int)(v12 - 48) <= 9 || v7 > 9))
            {
                v20 = 0;
                do
                {
                    tmp_15 = (char)*((char *)(v18 + v20 + 1));
                    v20 += 1;
                }
                while ((unsigned int)tmp_15 - 48 <= 9);
                if (v19 != v20)
                {
                    return (0 - (unsigned int)(char)(v19 < v20) & 2) - 1;
                }
            }
        }
        if (v7 <= 9)
        {
            if (v26 != v4)
            {
                v19 = 0;
                do
                {
                    tmp_15 = v1[1 + v19];
                    v19 += 1;
                }
                while ((unsigned int)tmp_15 - 48 <= 9);
                if ((unsigned int)(v12 - 48) > 9)
                {
                    v21 = 0;
                    v22 = v19 != 0;
                    return 0 - rax<4>;
                }
            }
        }
        else
        {
            v19 = 0;
        }
    }
    else if (*(v18) != 45)
    {
        for (v5 = *(v18); v2 == 48; v2 = *(v1))
        {
            v1 = &v1[1];
        }
        for (; v5 == 48; v5 = *(v18))
        {
            v18 = &v18[1];
        }
        v26 = v2;
        v8 = v2 - 48;
        if (v5 == v2)
        {
            while (true)
            {
                if (v8 <= 9)
                {
                    v1 = &v1[1];
                    v18 = &v18[1];
                    v26 = *(v1);
                    v5 = *(v18);
                    v8 = v26 - 48;
                    if (*(v1) != *(v18))
                    {
                        break;
                    }
                }
                else
                {
                    v25 = v26 - v5;
                }
            }
            if (v8 <= 9)
            {
                v25 = v26 - v5;
            }
            else if (v8 > 9)
            {
                v17 = (unsigned int)v5 - 48;
                v19 = 0;
            }
        }
        if (v8 > 9 || v5 != v2)
        {
            v25 = v26 - v5;
            if ((v8 <= 9 || v17 <= 9) && (v24 <= 9 || v8 > 9))
            {
                v27 = 0;
                do
                {
                    tmp_15 = (char)*((char *)(v18 + v27 + 1));
                    v27 += 1;
                }
                while ((unsigned int)tmp_15 - 48 <= 9);
                if (v19 != v27)
                {
                    return 0 - (unsigned int)(char)(v19 < v27) | 1;
                }
            }
        }
        if (!(v8 <= 9))
        {
            v17 = (unsigned int)v5 - 48;
            v19 = 0;
        }
        else if (v5 != v2)
        {
            v19 = 0;
            do
            {
                tmp_15 = v1[1 + v19];
                v19 += 1;
            }
            while ((unsigned int)tmp_15 - 48 <= 9);
            v24 = (unsigned int)v5 - 48;
            if (v24 > 9)
            {
                v28 = 0;
                v29 = v19 != 0;
                return rax<8>;
            }
        }
    }
    else
    {
        do
        {
            v18 = &v18[1];
            v3 = *(v18);
        }
        while (*(v18) == 48);
        if ((unsigned int)(v3 - 48) <= 9)
        {
            return 1;
        }
        for (; v2 == 48; v2 = *(v1))
        {
            v1 = &v1[1];
        }
        v9 = (unsigned int)v2 - 48;
        v10 = 0;
        v11 = v9 <= 9;
        return rax<8>;
    }
    if ((*(v1) == 45 || v8 > 9) && (*(v1) == 45 || v17 > 9) && (*(v1) == 45 || *(v18) != 45) && (*(v18) == 45 || *(v1) != 45) && (v7 > 9 || *(v18) != 45) && (*(v18) != 45 || (unsigned int)(v12 - 48) > 9))
    {
        return 0;
    }
    if (*(v1) != 45 && *(v18) != 45 && (v8 <= 9 || v17 <= 9) && (v24 <= 9 || v8 > 9) && (v8 > 9 || v5 != v2) && v19 == v27 || *(v1) == 45 && *(v18) == 45 && (v7 <= 9 || (unsigned int)(v12 - 48) <= 9) && ((unsigned int)(v12 - 48) <= 9 || v7 > 9) && (v26 != v4 || v7 > 9) && v19 == v20)
    {
        return (v19 == 0? 0 : (unsigned int)rax<8>);
    }
}

extern unsigned int g_40a0ab;
extern unsigned int g_60d1f8;
extern char g_60d2a8;
extern unsigned long long g_60d2b0;

int sub_4031f0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_405d20();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60d2a8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40a0ab, 0x5);
            if (g_60d2b0 != 0)
            {
                sub_404d50();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60d2a8 != 0)
    {
        v3 = sub_405d20();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60d2a8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60d1f8);
        error(0x0, *(v2), "%s");
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

int sub_406410()
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

extern unsigned long long g_60d298;
extern unsigned int g_60d2a4;

int sub_401d00()
{
    char v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x8c]
    unsigned int v3;  // [bp-0x88]
    unsigned long v4;  // [bp-0x78]
    unsigned long long v26;  // dl
    unsigned int *v40;  // rbx
    unsigned long long v42;  // rax
    unsigned int *v43;  // rbx
    unsigned long long v45;  // rax
    unsigned int *v46;  // rbx
    unsigned long long v48;  // rax

    switch ((unsigned int)(char)*((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 1)) - 71 & 255)
    {
    case 0:
        sub_401cd0();
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            *(v46) = 0;
            v48 = getegid();
            if (v48 == -1)
            {
                v26 = 0;
            }
            if (*(__errno_location()) == 0 || v48 != -1)
            {
                v26 = (char)(v3 == v48);
            }
        }
    case 5: case 33:
        sub_401cd0();
        v26 = 0;
        if (__lxstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0xa000);
        }
    case 8:
        sub_401cd0();
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            *(v43) = 0;
            v45 = geteuid();
            if (v45 == -1)
            {
                v26 = 0;
            }
            if (*(__errno_location()) == 0 || v45 != -1)
            {
                v26 = (char)(v2 == v45);
            }
        }
    case 12:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0xc000);
        }
    case 26: case 30:
        sub_401cd0();
        v26 = (char)(__xstat(0x1, *((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3) - 8)), (unsigned int)&v0) == 0);
        break;
    case 27:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0x6000);
        }
    case 28:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0x2000);
        }
    case 29:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0x4000);
        }
    case 31:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0x8000);
        }
    case 32:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (unsigned int)((unsigned long long)v1 >> 10) & 1;
        }
    case 36:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (unsigned int)((unsigned long long)v1 >> 9) & 1;
        }
    case 39:
        sub_401cd0();
        v26 = (char)(*((char *)*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3) - 8))) != 0);
        break;
    case 41:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)((v1 & 0xf000) == 0x1000);
        }
    case 43:
        sub_401cd0();
        v26 = (char)(euidaccess(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3) - 8)), 0x4) == 0);
        break;
    case 44:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (char)(0 < v4);
        }
    case 45:
        sub_401cd0();
        *(v40) = 0;
        v42 = strtol((unsigned long long)(unsigned int)sub_401bb0(), NULL, 0xa);
        v26 = 0;
        if (*(__errno_location()) != 34 && v42 <= 2147483647)
        {
            v26 = (char)(isatty(v42) != 0);
        }
    case 46:
        sub_401cd0();
        v26 = 0;
        if (__xstat(0x1, *((long long *)(g_60d298 + (int)g_60d2a4 * 8 - 8)), (unsigned int)&v0) == 0)
        {
            v26 = (unsigned int)((unsigned long long)v1 >> 11) & 1;
        }
    case 48:
        sub_401cd0();
        v26 = (char)(euidaccess(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3) - 8)), 0x2) == 0);
        break;
    case 49:
        sub_401cd0();
        v26 = (char)(euidaccess(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3) - 8)), 0x1) == 0);
        break;
    case 51:
        sub_401cd0();
        v26 = (char)(*((char *)*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3) - 8))) == 0);
        break;
    default:
        v26 = 0;
        break;
    }
    return v26;
}

extern unsigned int g_60d2a0;
extern unsigned int g_60d2a4;

int sub_401cd0()
{
    unsigned long v0;  // [bp-0x8]

    g_60d2a4 = v0 + 1;
    if ((unsigned int)(v0 + 1) < g_60d2a0)
    {
        g_60d2a4 = g_60d2a4 + 2;
        return (unsigned int)v0 + 2;
    }
    v0 = g_60d2a4;
    sub_401c90(); /* do not return */
}

int sub_4063d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_406410();
    }
}

extern struct_0 *g_60d238;
extern unsigned long long g_60d240;
extern unsigned long long g_60d248;
extern unsigned int g_60d250;
extern unsigned long long g_60d2c0;

int sub_404ac0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60d250;
    if (g_60d250 > 1)
    {
        v2 = &g_60d238[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60d238[(unsigned long long)(g_60d250 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60d238->field_8 != 6345408)
    {
        v1 = free(g_60d238->field_8);
        g_60d240 = 0x100;
        g_60d248 = &g_60d2c0;
    }
    if (g_60d238 != 6345280)
    {
        v1 = free(g_60d238);
        g_60d238 = &g_60d240;
    }
    g_60d250 = 1;
    return v1;
}

int sub_404cc0()
{
}

int sub_404850()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4059f0();
}

extern int512_t g_60d3c0;

int sub_4048a0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60d3c0 : v1)) = v2;
    return &g_60d3c0;
}

int sub_401980()
{
    char *v1;  // rdi
    unsigned long long v3;  // cc_dep1
    unsigned long long v4;  // cc_dep2
    unsigned long v5;  // d
    char *v6;  // rsi
    unsigned long long v7;  // rcx
    char *v8;  // rdi
    unsigned long long v9;  // cc_dep1
    char *v10;  // rdi
    unsigned long long v11;  // rcx
    unsigned long long v12;  // cc_dep1
    unsigned long long v13;  // cc_dep2
    unsigned long long v14;  // cc_dep1
    char *v15;  // rdi
    unsigned long long v16;  // rcx
    unsigned long long v17;  // cc_dep1
    unsigned long long v18;  // cc_dep2
    unsigned long long v19;  // cc_dep1
    char *v20;  // rdi
    unsigned long long v21;  // rcx
    unsigned long long v22;  // cc_dep1
    unsigned long long v23;  // cc_dep2
    unsigned long long v24;  // cc_dep1
    char *v25;  // rdi
    unsigned long long v26;  // rcx
    unsigned long long v27;  // cc_dep1
    unsigned long long v28;  // cc_dep2
    unsigned long long v29;  // cc_dep1
    char *v30;  // rdi
    unsigned long long v31;  // rcx
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long long v34;  // cc_dep1
    char *v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned long long v37;  // cc_dep1
    unsigned long long v38;  // cc_dep2
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long long v42;  // rcx
    char *v43;  // rdi
    unsigned long long v44;  // cc_dep1
    char *v45;  // rdi
    unsigned long long v46;  // rcx
    unsigned long long v47;  // cc_dep1
    unsigned long long v48;  // cc_dep2
    unsigned long long v49;  // cc_dep1
    char *v50;  // rdi
    unsigned long long v51;  // rcx
    unsigned long long v52;  // cc_dep1
    unsigned long long v53;  // cc_dep2
    unsigned long long v54;  // cc_dep1
    unsigned long long v55;  // rdx
    unsigned long long v56;  // rax
    char v57;  // al

    v7 = 2;
    v8 = "=";
    v6 = v1;
    while (v7 != 0)
    {
        v7 -= 1;
        v3 = *(v6);
        v4 = *(v8);
        v8 = &v8[v5];
        v6 = &v6[v5];
        break;
    }
    v9 = (v3 > v4) - 0 - (v3 < v4);
    if ((char)v9 != 0)
    {
        v10 = "!";
        v11 = 3;
        while (v11 != 0)
        {
            v11 -= 1;
            v12 = *(v6);
            v13 = *(v10);
            v10 = &v10[v5];
            v6 = &v6[v5];
            break;
        }
        v14 = (v12 > v13) - 0 - (v12 < v13);
        if ((char)v14 != 0)
        {
            v15 = "==";
            v16 = 3;
            while (v16 != 0)
            {
                v16 -= 1;
                v17 = *(v6);
                v18 = *(v15);
                v15 = &v15[v5];
                v6 = &v6[v5];
                break;
            }
            v19 = (v17 > v18) - 0 - (v17 < v18);
            if ((char)v19 != 0)
            {
                v20 = "-nt";
                v21 = 4;
                while (v21 != 0)
                {
                    v21 -= 1;
                    v22 = *(v6);
                    v23 = *(v20);
                    v20 = &v20[v5];
                    v6 = &v6[v5];
                    break;
                }
                v24 = (v22 > v23) - 0 - (v22 < v23);
                if ((char)v24 != 0)
                {
                    v25 = "-ot";
                    v26 = 4;
                    while (v26 != 0)
                    {
                        v26 -= 1;
                        v27 = *(v6);
                        v28 = *(v25);
                        v25 = &v25[v5];
                        v6 = &v6[v5];
                        break;
                    }
                    v29 = (v27 > v28) - 0 - (v27 < v28);
                    if ((char)v29 != 0)
                    {
                        v30 = "-ef";
                        v31 = 4;
                        while (v31 != 0)
                        {
                            v31 -= 1;
                            v32 = *(v6);
                            v33 = *(v30);
                            v30 = &v30[v5];
                            v6 = &v6[v5];
                            break;
                        }
                        v34 = (v32 > v33) - 0 - (v32 < v33);
                        if ((char)v34 != 0)
                        {
                            v35 = "-eq";
                            v36 = 4;
                            while (v36 != 0)
                            {
                                v36 -= 1;
                                v37 = *(v6);
                                v38 = *(v35);
                                v35 = &v35[v5];
                                v6 = &v6[v5];
                                break;
                            }
                            v39 = (v37 > v38) - 0 - (v37 < v38);
                            if ((char)v39 != 0)
                            {
                                v43 = "-ne";
                                v42 = 4;
                                while (v42 != 0)
                                {
                                    v42 -= 1;
                                    v40 = *(v6);
                                    v41 = *(v43);
                                    v43 = &v43[v5];
                                    v6 = &v6[v5];
                                    break;
                                }
                                v44 = (v40 > v41) - 0 - (v40 < v41);
                                if ((char)v44 != 0)
                                {
                                    v45 = "-lt";
                                    v46 = 4;
                                    while (v46 != 0)
                                    {
                                        v46 -= 1;
                                        v47 = *(v6);
                                        v48 = *(v45);
                                        v45 = &v45[v5];
                                        v6 = &v6[v5];
                                        break;
                                    }
                                    v49 = (v47 > v48) - 0 - (v47 < v48);
                                    if ((char)v49 != 0)
                                    {
                                        v50 = "-le";
                                        v51 = 4;
                                        while (v51 != 0)
                                        {
                                            v51 -= 1;
                                            v52 = *(v6);
                                            v53 = *(v50);
                                            v50 = &v50[v5];
                                            v6 = &v6[v5];
                                            break;
                                        }
                                        v54 = (v52 > v53) - 0 - (v52 < v53);
                                        if ((char)v54 != 0)
                                        {
                                            v55 = (unsigned int)strcmp(v6, "-gt");
                                            if ((unsigned int)v55 != 0)
                                            {
                                                v56 = strcmp(v6, "-ge");
                                                v57 = (unsigned int)v56 == 0;
                                                return rax<8>;
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
    if (...)
    {
        return 1;
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405650()
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
    return sub_405250();
}

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405a80()
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
            v11 = ((char)[D] amd64g_calculate_condition(0x2<64>, 0x4<64>, rbx<8>, Call (target: 0x401470<64>, prototype: (char*) -> unsigned long (64 bits), args: [Load(addr=rdx<8>, size=8, endness=Iend_LE)]), cc_ndep<8>)? -1 : rbx<8> + strlen(*((long long *)rdx<8>)));
            v12 -= 1;
        }
        while (v12 != 1);
        if (v11 <= 2147483647)
        {
            v13 = (unsigned long long)(unsigned int)sub_4057f0();
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
        v13 = (unsigned long long)(unsigned int)sub_4057f0();
    }
    if (v5 == 0 || v11 <= 2147483647)
    {
        *(v13) = 0;
    }
    return stack_base + 0;
}

int sub_404d70()
{
}

extern char g_60d2a8;

int sub_4031e0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60d2a8 = v1;
    return v2;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60d238;
extern uint128_t g_60d240;
extern unsigned int g_60d250;
extern int512_t g_60d2c0;

int sub_4046b0()
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
    v17 = g_60d238;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60d250 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60d238 != 6345280)
            {
                v16 = sub_405850();
                g_60d238 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405850();
                v17 = v15;
                g_60d238 = v15;
                *(v15) = g_60d240;
            }
            memset(&v17[(long long)(int)g_60d250], 0x0, (int)((unsigned int)v13 + 1 - g_60d250) * 16);
            g_60d250 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405a40(); /* do not return */
        }
    }
    if (g_60d250 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_403480();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6345408)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4057f0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_403480();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_404bd0()
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
    return sub_4046b0();
}

extern unsigned int g_408fc1;

int sub_401c90()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rbx

    v0 = v2;
    v3 = (unsigned int)sub_404f00();
    dcgettext(0x0, 0x408fc1, 0x5);
    sub_401b10(); /* do not return */
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

    v10 = sub_401330();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6344240 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_405810()
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
        sub_405a40(); /* do not return */
    }
}

int sub_405950() { crash_skku;
}
extern unsigned int g_409068;
extern unsigned long long g_60d298;
extern unsigned int g_60d2a0;
extern unsigned int g_60d2a4;

int sub_402790()
{
    void tmp_16;  // tmp #16
    unsigned long long *v0;  // [bp-0x48]
    char v1;  // [bp-0x3a]
    char v2;  // [bp-0x39]
    unsigned long long v3;  // [bp-0x30]
    unsigned long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp-0x8]
    unsigned long v10;  // rdi
    unsigned long long v11;  // rax
    char v12;  // al
    unsigned long long *v13;  // rax
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // d
    char *v17;  // rdi
    char *v18;  // rsi
    unsigned long long v19;  // rcx
    unsigned long long v20;  // cc_dep1
    char *v21;  // rdi
    unsigned long long v22;  // rcx
    unsigned int v23;  // eax
    unsigned long long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long long v26;  // cc_dep1
    unsigned long long v27;  // rax
    char *v28;  // rdi
    unsigned long long v29;  // rcx
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // cc_dep2
    unsigned long long v32;  // cc_dep1
    unsigned long long v34;  // r15
    unsigned long long v35;  // r14
    unsigned long long v36;  // r13
    unsigned long long v37;  // r12
    unsigned long long v38;  // rbx
    char *v39[3];  // r10
    unsigned long long v40;  // rbx
    char *v41[3];  // rbp
    unsigned long long v42;  // rax
    unsigned int v43;  // ecx
    char *v45[3];  // rbx
    unsigned int|char *|unsigned long long|char [3] v46;  // rsi
    unsigned long|unsigned long long|unsigned int v47;  // r12
    unsigned long long v48;  // r13
    char v49[3];  // r15
    unsigned long|unsigned int v50;  // eax
    unsigned long long v51;  // cc_dep1
    char *v52;  // rdi
    unsigned long long v53;  // rcx
    unsigned long long v54;  // rax
    unsigned long long v55;  // cc_dep1
    unsigned long long v56;  // cc_dep2
    unsigned long long *v57;  // r10
    unsigned int v58;  // r8d
    unsigned long long v59;  // cc_dep1
    unsigned long long v60;  // rcx
    char *v61;  // rdi
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep2
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long *v67;  // rbx
    unsigned long long v68;  // r14
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    char *v72;  // rdi
    unsigned long long v73;  // r8
    unsigned long long v74;  // rcx
    char *v75;  // rsi
    unsigned long long v76;  // cc_dep1
    unsigned long long v77;  // cc_dep2
    unsigned long long v78;  // cc_dep1
    char *v79;  // rdi
    unsigned long long v80;  // rcx
    char *v81;  // rsi
    unsigned long long v82;  // cc_dep1
    unsigned long long v83;  // cc_dep2
    unsigned long long v84;  // cc_dep1
    unsigned long long v87;  // rbx
    unsigned long long v88;  // rbx
    unsigned long long v89;  // r12
    unsigned long long v90;  // r13
    unsigned long long v91;  // r14
    unsigned long long v92;  // r15
    unsigned long long v93;  // rbp
    unsigned long long v94;  // rbx
    unsigned long long v95;  // rbx

    if ((unsigned int)v10 != 2)
    {
        if (v10 > 2)
        {
            if ((unsigned int)v10 != 3 && (unsigned int)v10 == 4)
            {
                if ((char)v20 == 0)
                {
                    v23 = g_60d2a4 + 1;
                    g_60d2a4 = g_60d2a4 + 1;
                    if (v23 < g_60d2a0)
                    {
                        v27 = (unsigned int)(sub_402cd0() ^ 1);
                    }
                }
                else
                {
                    v21 = "(";
                    v22 = 2;
                    v46 = *((long long *)(g_60d298 + (int)g_60d2a4 * 8));
                    while (v22 != 0)
                    {
                        v22 -= 1;
                        v24 = *(v46);
                        v25 = *(v21);
                        v21 = &v21[v16];
                        v46 = &v46[v16];
                        break;
                    }
                    v26 = (v24 > v25) - 0 - (v24 < v25);
                    if ((char)v26 == 0)
                    {
                        v46 = *((long long *)(g_60d298 + (int)g_60d2a4 * 8 + 24));
                        v28 = ")";
                        v29 = 2;
                        while (v29 != 0)
                        {
                            v29 -= 1;
                            v30 = *(v46);
                            v31 = *(v28);
                            v28 = &v28[v16];
                            v46 = &v46[v16];
                            break;
                        }
                        v32 = (v30 > v31) - 0 - (v30 < v31);
                        if ((char)v32 == 0)
                        {
                            g_60d2a4 = g_60d2a4 + 1;
                            v27 = sub_4026f0();
                            g_60d2a4 = g_60d2a4 + 1;
                        }
                    }
                }
                if (((char)v26 == 0 || (char)v20 == 0) && ((char)v32 == 0 || (char)v20 == 0) && (v23 < g_60d2a0 || (char)v20 != 0))
                {
                    return v27;
                }
            }
            if ((unsigned int)v10 == 4)
            {
                v17 = "!";
                v19 = 2;
                v13 = g_60d2a4;
                v18 = *((long long *)(g_60d298 + (int)g_60d2a4 * 8));
                while (v19 != 0)
                {
                    v19 -= 1;
                    v14 = *(v18);
                    v15 = *(v17);
                    v17 = &v17[v16];
                    v18 = &v18[v16];
                    break;
                }
                v20 = (v14 > v15) - 0 - (v14 < v15);
            }
        }
        else if ((unsigned int)v10 == 1)
        {
            tmp_16 = (int)g_60d2a4;
            g_60d2a4 = (int)g_60d2a4 + 1;
            v11 = *((long long *)(g_60d298 + tmp_16 * 8));
            v12 = *((char *)*((long long *)(g_60d298 + (tmp_16 << 3)))) != 0;
            return rax<8>;
        }
        if (v10 <= 2 && (unsigned int)v10 != 1 || v10 > 2 && (unsigned int)v10 != 3)
        {
            if (v10 <= 2 || (unsigned int)v10 != 4)
            {
                v13 = (unsigned long long)g_60d2a4;
            }
            if ((v10 <= 2 || (unsigned int)v10 != 4 || (char)v26 != 0 && (char)v20 != 0 || (char)v32 != 0 && (char)v20 != 0) && v13 < g_60d2a0)
            {
                v8 = v34;
                v7 = v35;
                v6 = v36;
                v5 = v37;
                v4 = stack_base + 0;
                v3 = v38;
                v45 = (unsigned long long)g_60d2a4;
                v68 = g_60d2a0;
                v2 = 0;
                while (true)
                {
                    v1 = 1;
                    if ((unsigned int)v45 >= (unsigned int)v68)
                    {
                        break;
                    }
                    while (true)
                    {
                        v39 = g_60d298;
                        v49 = *((long long *)(g_60d298 + v45 * 8));
                        v48 = (char)*((char *)*((long long *)(g_60d298 + v45 * 8)));
                        if (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33)
                        {
                            v47 = 0;
                            if (v49[1] == 0 && v48 == 40)
                            {
                                g_60d2a4 = (unsigned int)v45 + 1;
                                if ((unsigned int)(char *[3])((char *)v45 + 1) >= (unsigned int)v68)
                                {
                                    break;
                                }
                                v54 = (char *)v45 + 2;
                                if ((unsigned int)(char *[3])((char *)v45 + 2) < (unsigned int)v68)
                                {
                                    v57 = g_60d298 + v54 * 8;
                                    v58 = (unsigned int)(char *[3])(-1 + v68 + -0x1 * v45);
                                    while (true)
                                    {
                                        v46 = *(v57);
                                        v60 = 2;
                                        v61 = ")";
                                        while (v60 != 0)
                                        {
                                            v60 -= 1;
                                            v62 = *(v46);
                                            v63 = *(v61);
                                            v61 = &v61[v16];
                                            v46 = &v46[v16];
                                            break;
                                        }
                                        if ((v62 > v63) - 0 - (v62 < v63) == 0)
                                        {
                                            break;
                                        }
                                        v57 = &v57[1];
                                    }
                                }
                                v66 = sub_402790();
                                if (*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) != 0)
                                {
                                    if (*((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 1)) == 0 && *((char *)*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3)))) == 41)
                                    {
                                        v67 = (unsigned long long)(g_60d2a4 + 1);
                                        v68 = g_60d2a0;
                                        g_60d2a4 = g_60d2a4 + 1;
                                    }
                                    if (*((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 1)) != 0 || *((char *)*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3)))) != 41)
                                    {
                                        v93 = (unsigned int)sub_404ee0();
                                        v95 = (unsigned int)sub_404ee0();
                                        dcgettext(0x0, 0x409068, 0x5);
                                        sub_401b10(); /* do not return */
                                    }
                                }
                                else
                                {
                                    v94 = (unsigned int)sub_404f00();
                                }
                            }
                        }
                        else if (v49[1] == 0)
                        {
                            v40 = (unsigned int)v45 + 1;
                            g_60d2a4 = v40;
                            if (g_60d2a4 >= (unsigned int)v68)
                            {
                                break;
                            }
                            v41 = (unsigned long long)g_60d2a4;
                            v42 = 0;
                            v47 = 1;
                            while (true)
                            {
                                v49 = *((long long *)((char *)v39 + 0x8 * v41));
                                v43 = (unsigned int)v41;
                                v45 = v41;
                                v46 = (char)*((char *)*((long long *)((char *)v39 + 0x8 * v41)));
                                if (*((char *)*((long long *)((char *)v39 + 0x8 * v41))) != 33)
                                {
                                    if (v42 != 0)
                                    {
                                        g_60d2a4 = (unsigned int)v41;
                                    }
                                    v48 = v46;
                                }
                                else if (v49[1] == 0)
                                {
                                    v41 = (char *)v41 + 1;
                                    if ((unsigned int)v68 > (unsigned int)v41)
                                    {
                                        v47 ^= 1;
                                        v42 = 1;
                                    }
                                    else
                                    {
                                        g_60d2a4 = v43 + 1;
                                        sub_401c90(); /* do not return */
                                    }
                                }
                                else
                                {
                                    if (v42 == 0)
                                    {
                                        break;
                                    }
                                    g_60d2a4 = (unsigned int)v41;
                                }
                            }
                            if (*((char *)*((long long *)((char *)v39 + 0x8 * v41))) == 33 && v49[1] != 0)
                            {
                                v50 = (unsigned int)(char *[3])(v68 + -0x1 * v45);
                                v51 = v68 + -0x1 * v45;
                            }
                        }
                        else
                        {
                            v47 = 0;
                        }
                        if (v48 != 40 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 && v49[1] != 0 || v49[1] != 0 && *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33)
                        {
                            v50 = (unsigned int)(char *[3])(v68 + -0x1 * v45);
                            v51 = v68 + -0x1 * v45;
                        }
                        if ((unsigned int)(char *[3])(v68 + -0x1 * v45) > 3 && (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 || v49[1] != 0 || v48 != 40) && (v48 != 40 || v49[1] != 0 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33))
                        {
                            v52 = "-l";
                            v53 = 3;
                            v46 = v49;
                            while (v53 != 0)
                            {
                                v53 -= 1;
                                v55 = v46[0];
                                v56 = *(v52);
                                v52 = &v52[v16];
                                v46 = &v46[v16];
                                break;
                            }
                            v59 = (v55 > v56) - 0 - (v55 < v56);
                            if ((char)v59 == 0)
                            {
                                v0 = g_60d298;
                                v65 = sub_401980();
                                if (v65 != 0)
                                {
                                    v66 = sub_402210();
                                    v67 = (unsigned long long)g_60d2a4;
                                    v68 = g_60d2a0;
                                }
                            }
                        }
                        if ((v51 == 3 || (unsigned int)(char *[3])(v68 + -0x1 * v45) > 3) && (v65 == 0 || (unsigned int)(char *[3])(v68 + -0x1 * v45) <= 3 || (char)v59 != 0) && (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 || v49[1] != 0 || v48 != 40) && (v48 != 40 || v49[1] != 0 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33))
                        {
                            v50 = sub_401980();
                            if (v50 != 0)
                            {
                                v66 = sub_402210();
                                v67 = (unsigned long long)g_60d2a4;
                                v68 = g_60d2a0;
                            }
                        }
                        if (((v51 == 3 || (unsigned int)(char *[3])(v68 + -0x1 * v45) > 3) && (v65 == 0 || (unsigned int)(char *[3])(v68 + -0x1 * v45) <= 3 || (char)v59 != 0) && (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 || v49[1] != 0 || v48 != 40) && (v48 != 40 || v49[1] != 0 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33) && v50 == 0 && v48 == 45 || (unsigned int)(char *[3])(v68 + -0x1 * v45) <= 3 && v51 != 3 && (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 || v49[1] != 0 || v48 != 40) && (v48 != 40 || v49[1] != 0 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33) && v48 == 45) && v49[1] != 0 && v49[2] == 0)
                        {
                            v70 = sub_4026c0();
                            if (v70 != 0)
                            {
                                v66 = sub_401d00();
                                v67 = (unsigned long long)g_60d2a4;
                                v68 = g_60d2a0;
                            }
                            else
                            {
                                v87 = (unsigned int)sub_404f00();
                            }
                        }
                        if (...)
                        {
                            v67 = (unsigned long long)((unsigned int)v45 + 1);
                            v69 = v50 ^ v47;
                            g_60d2a4 = (unsigned int)v67;
                            *((unsigned long long *)&v1) = v1 & v69;
                        }
                        if (((v51 == 3 || (unsigned int)(char *[3])(v68 + -0x1 * v45) > 3) && (v65 == 0 || (unsigned int)(char *[3])(v68 + -0x1 * v45) <= 3 || (char)v59 != 0) && (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 || v49[1] != 0 || v48 != 40) && (v48 != 40 || v49[1] != 0 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33) && v50 == 0 && v48 == 45 || (unsigned int)(char *[3])(v68 + -0x1 * v45) <= 3 && v51 != 3 && (*((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33 || v49[1] != 0 || v48 != 40) && (v48 != 40 || v49[1] != 0 || *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33) && v48 == 45) && v49[1] != 0 && v49[2] == 0 && v70 == 0 || v49[1] == 0 && v48 == 40 && *((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) == 0 && *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33)
                        {
                            dcgettext(0x0, v46, 0x5);
                            sub_401b10(); /* do not return */
                        }
                        if (...)
                        {
                            v71 = v66 ^ v47;
                            *((unsigned long long *)&v1) = v1 & v71;
                        }
                        if (...)
                        {
                            v2 |= v1;
                        }
                        if (...)
                        {
                            v72 = "-a";
                            v73 = *((long long *)(g_60d298 + v67 * 8));
                            v74 = 3;
                            v75 = *((long long *)(g_60d298 + v67 * 8));
                            while (v74 != 0)
                            {
                                v74 -= 1;
                                v76 = *(v75);
                                v77 = *(v72);
                                v72 = &v72[v16];
                                v75 = &v75[v16];
                                break;
                            }
                            v78 = (v76 > v77) - 0 - (v76 < v77);
                            if ((char)v78 == 0)
                            {
                                v45 = (unsigned long long)((unsigned int)v67 + 1);
                                g_60d2a4 = (unsigned int)v45;
                                if ((unsigned int)v45 >= (unsigned int)v68)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v79 = "-o";
                                v80 = 3;
                                v81 = v73;
                                v2 |= v1;
                                while (v80 != 0)
                                {
                                    v80 -= 1;
                                    v82 = *(v81);
                                    v83 = *(v79);
                                    v79 = &v79[v16];
                                    v81 = &v81[v16];
                                    break;
                                }
                                v84 = (v82 > v83) - 0 - (v82 < v83);
                                if ((char)v84 == 0)
                                {
                                    v45 = (unsigned long long)((unsigned int)v67 + 1);
                                    g_60d2a4 = (unsigned int)v45;
                                }
                            }
                        }
                        if (...)
                        {
                            v88 = v3;
                            v89 = v5;
                            v90 = v6;
                            v91 = v7;
                            v92 = v8;
                            return (unsigned long long)v2;
                        }
                    }
                    if (v49[1] == 0 && v48 == 40 && *((char *)*((long long *)(g_60d298 + (v45 << 3)))) != 33 || (char)v78 == 0 && ((unsigned int)v68 > (unsigned int)v67 || (unsigned int)v68 > (unsigned int)v67) || v49[1] == 0 && *((char *)*((long long *)(g_60d298 + (v45 << 3)))) == 33)
                    {
                        sub_401c90(); /* do not return */
                    }
                }
                sub_401c90(); /* do not return */
            }
        }
        if ((unsigned int)v10 == 4 && (char)v20 == 0 && v23 >= g_60d2a0 && v10 > 2 && (unsigned int)v10 != 3 || v13 >= g_60d2a0 && (v10 <= 2 || (unsigned int)v10 != 3) && ((unsigned int)v10 != 1 || v10 > 2) && (v10 <= 2 || (unsigned int)v10 != 4 || (char)v20 != 0) && (v10 <= 2 || (char)v26 != 0 || (char)v32 != 0 || (unsigned int)v10 != 4))
        {
            sub_401c90(); /* do not return */
        }
    }
}

int sub_401978() { crash_skku;
}
int sub_4059a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4057f0();
}

extern unsigned long long g_60ce30;

int sub_408f48()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60ce30;
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

int sub_4081b0() { crash_skku;
}
extern int512_t g_60d3c0;

int sub_4048b0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60d3c0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60d3c0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_403480()
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
    unsigned long long v27;  // [bp+0x18]
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
            v26 = (unsigned int)sub_403380();
            v27 = (unsigned int)sub_403380();
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
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v89 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v41 = v5;
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
                                            v33 = rax<8>;
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
                            v40 = 32;
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
                            v76 = (unsigned int)sub_403480();
                        }
                    }
                }
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
            {
                v88 = v13;
                if (v86 != 0 && v13 != 0)
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
                    v46 = sub_405c40();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
                    {
                        if (v10 == 2 && v17 != 0 && v46 != 1)
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
                v49 = 0;
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
                    if ((v80 < v64 || v89 == 0) && (v89 == 0 || v63 == 0) && (v80 < v64 || v89 != 0))
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
            if ((v78 == 0 || v25 == 0) && (v76 == 0 || v25 == 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_403480();
            }
            if ((v46 == 0 || v25 == 0) && (v25 == 0 || v89 != 0) && (v17 == 0 || v5 == 0 || v46 == 0) && (v17 == 0 || v5 == 0 || v89 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v18 != 0 && v6 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v25 == 0) && (v76 == 0 || v25 == 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
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

int sub_405a20()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern uint128_t g_60d3c0;
extern uint128_t g_60d3d0;
extern uint128_t g_60d3e0;
extern unsigned long long g_60d3f0;

int sub_404ccf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60d3f0;
    *((uint128_t *)&v0) = g_60d3c0;
    *((uint128_t *)&v1) = g_60d3d0;
    *((uint128_t *)&v2) = g_60d3e0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4046b0();
}

extern unsigned int g_40aed2;
extern unsigned int g_40aefd;
extern unsigned int g_40b130;

int sub_405770()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40aed2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40aefd, 0x5));
    dcgettext(0x0, 0x40b130, 0x5);
}

int sub_401ad0()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    unsigned long long v4;  // rsi
    unsigned long long v5[2];  // rbx
    unsigned int v6;  // edi
    unsigned long long v7;  // rax
    char v8;  // al

    v5 = v4;
    v7 = __xstat(0x1, v6, (unsigned int)&v0);
    v8 = (unsigned int)v7 == 0;
    if ((unsigned int)v7 == 0)
    {
        v5[0] = v1;
        v5[1] = v2;
    }
    return rax<8>;
}

extern char g_60d3c0;

int sub_404910()
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
    v3 = (v2 == 0? &g_60d3c0 : v2);
    *((int *)(tmp_11? &g_60d3c0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60d3c0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60d3c0;
        abort(); /* do not return */
    }
}

extern int512_t g_60d3c0;

int sub_404940()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60d3c0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_403480();
}

int sub_4058c0() { crash_skku;
}
int sub_405890()
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
        sub_405a40(); /* do not return */
    }
}

extern uint128_t g_60d3c0;
extern uint128_t g_60d3d0;
extern uint128_t g_60d3e0;
extern unsigned long long g_60d3f0;

int sub_404df0()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60d3c0;
    *((uint128_t *)&v1) = g_60d3d0;
    *((uint128_t *)&v2) = g_60d3e0;
    v4 = g_60d3f0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4046b0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_405bb0()
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
        while (*((char *)(v2 + (v3 << 1) + 1)) == 115 && v4 == 37 && (char)v4 != 0);
        if (true)
        {
            return sub_405a80();
        }
    }
    if (*((char *)v2) == 0 || *((char *)(v2 + 1)) == 115 && *((char *)v2) == 37)
    {
        return sub_405a80();
    }
    if (*((char *)v2) == 37 || *((char *)v2) != 0)
    {
        if (sub_405cc0() >= 0)
        {
            return v0;
        }
        else if (*(__errno_location()) != 12)
        {
            return 0;
        }
        sub_405a40(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_403290()
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

int sub_4059c0()
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
        sub_405a40(); /* do not return */
    }
}

int sub_404e90()
{
}

int sub_404b90()
{
}

int sub_405a6c()
{
    abort(); /* do not return */
}

int sub_404ab0()
{
}

extern unsigned int g_40ae58;

int sub_405171()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r14
    unsigned long v7;  // r13
    unsigned long v8;  // r12
    unsigned long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned int v11;  // rdx
    unsigned int v14;  // edi
    unsigned int v15;  // esi
    unsigned int v16;  // ecx

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = stack_base + 0;
    v0 = v9;
    v10 = sub_405bb0();
    if (!(v10 != 0))
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ae58, 0x5));
        abort(); /* do not return */
    }
    else if (v11 != 0)
    {
        error_at_line(v14, v15, v11, v16, 0x40a0bb, v10);
    }
    else
    {
        error(v14, v15, "%s");
    }
}

int sub_405d80()
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

int sub_4049b2()
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

int sub_405cc0()
{
    unsigned long long v0;  // [bp-0x10]
    void *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long *v4;  // rdi

    v2 = sub_406470();
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

int main() { crash_skku;
}
int sub_404e60()
{
}

int sub_404c40()
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
    return sub_4046b0();
}

extern unsigned int g_40b20f;
extern unsigned int g_60d1f8;

int sub_405a40()
{
    dcgettext(0x0, 0x40b20f, 0x5);
    error(g_60d1f8, 0x0, "%s");
}

int sub_404d50()
{
}

extern char g_60d288;
extern unsigned long long g_60d290;

int sub_401921()
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

    if (g_60d288 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60d290 >= 0)
            {
                break;
            }
            g_60d290 = g_60d290 + 1;
            *((long long *)(6344256 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60d288 = 1;
        return sub_4018cb();
    }
    return v4;
}

int sub_405d20()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_406350();
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

int sub_404bb0()
{
}

extern int512_t g_60d1e8;

int sub_408f30()
{
}

extern int512_t g_60d3c0;

int sub_4048f0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60d3c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60d3c0 : v1) + 4)) = v3;
    return v2;
}

extern int512_t g_40a106;
extern int512_t g_40a10a;

int sub_403380()
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
        v3 = sub_405de0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40a106 : 4235537);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40a10a : 4235533);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[4] == 56 && (v3[2] & 223) == 70 && (v3[1] & 223) == 84 && v1 == v2 && v3[5] == 0 && (v3[0] & 223) == 85 || (v3[1] & 223) == 66 && v4 == 71 && v1 == v2 && v3[3] == 56 && v3[2] == 49 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

extern unsigned long long g_60d2b0;

int sub_4031d0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60d2b0 = v1;
    return v2;
}

int sub_404d80()
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
    return sub_4046b0();
}

int sub_405850()
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
            sub_405a40(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_405240()
{
}

int sub_404f00()
{
}

extern unsigned int g_408fae;

int sub_401bb0()
{
    char *v1;  // r8
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    char v6;  // cl
    char v7[2];  // rcx
    char *v8;  // rax
    char *v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rbx

    v1 = *((long long *)(unsigned long long)__ctype_b_loc());
    v8 = v2;
    while (true)
    {
        v3 = *(v8);
        v4 = *(v8);
        if ((v1[2 * (unsigned long long)*(v8)] & 1) == 0)
        {
            break;
        }
        v8 = &v8[1];
    }
    if (v3 != 43)
    {
        v5 = 0;
        v6 = v4 == 45;
        v7 = &v8[rcx<8>];
    }
    else
    {
        v7 = &v8[1];
        v8 = &v8[1];
    }
    v9 = &v7[1];
    if ((unsigned int)v7[0] - 48 <= 9)
    {
        v10 = v7[1];
        if ((unsigned int)v10 - 48 <= 9)
        {
            do
            {
                v9 = &v9[1];
                v10 = *(v9);
            }
            while ((unsigned int)*(v9) - 48 <= 9);
        }
        if ((v1[2 * v10] & 1) != 0)
        {
            do
            {
                v9 = &v9[1];
                v11 = *(v9);
                v10 = *(v9);
            }
            while ((v1[2 * v11] & 1) != 0);
        }
        if (v10 == 0)
        {
            return v8;
        }
    }
    if ((unsigned int)v7[0] - 48 > 9 || v10 != 0)
    {
        v12 = (unsigned int)sub_404f00();
        dcgettext(0x0, 0x408fae, 0x5);
        sub_401b10(); /* do not return */
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_60d2b8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4032e0()
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
        g_60d2b8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_404eb0()
{
}

int sub_404d40()
{
}

int sub_4057f0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405a40(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_401b10()
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
    v2 = stack_base + 8;
    v0 = 8;
    v1 = 48;
    v3 = stack_base + -184;
    sub_405240();
    exit(0x2); /* do not return */
}

int sub_404e70()
{
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40aed1;
extern char g_60d3f8[2];

int sub_405de0()
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
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_60d3f8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40aed1 : (unsigned long long)nl_langinfo(0xe));
    if (g_60d3f8 == 0)
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
        if (*(v15) == 0 || v15 == 0)
        {
            v13 = 115;
            v14 = 101;
            v16 = 100;
            v15 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (*(v15) == 0 || v15 == 0 || v11 != 0 && v15[v11 + -1] != 47)
        {
            v17 = malloc(v13);
        }
        if (v17 == 0 || v17 == 0)
        {
            v9 = &g_40aed1;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v11 != 0) && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v11 != 0 && v15[v11 + -1] != 47 && v17 != 0 || v11 == 0 && *(v15) != 0 && v17 != 0 && v15 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v17 != 0 && v15 != 0)
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
                            if ((unsigned int)v27 != 32 && (unsigned int)v27 != 35)
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
                                        v63 = v41 + 1;
                                        v50 = v38 + v43 - 1;
                                        if ((unsigned int)v44 >= 8)
                                        {
                                            *((long long *)v50) = *((long long *)&v5);
                                            v44 = v63;
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
                                        v9 = &g_40aed1;
                                        v10 = (tmp_10 == 0? &g_40aed1 : tmp_10);
                                        free(NULL);
                                        sub_406350();
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
                                        v62 = (unsigned int)*(v62);
                                        v63 = 1;
                                    }
                                    else
                                    {
                                        v62 = __uflow(v10);
                                        v63 = (char)((unsigned int)v62 != -1);
                                    }
                                }
                                while (v62 != 10 && v63 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v29 > 1)
                        {
                            v61 = __uflow(v10);
                        }
                        if ((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v62 == -1 || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v29 > 1) && (unsigned int)v61 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40aed1 : tmp_10);
                            sub_406350();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v29 <= 1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v62 == -1)
                    {
                        v9 = &g_40aed1;
                    }
                    else if (v38 == 0 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v29 <= 1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1 || v38 != 0) && v62 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40aed1;
            free(v17);
        }
        *((char *[2])&g_60d3f8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40aed1 : tmp_10), v9);
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

int sub_407f90() { crash_skku;
}
int sub_404cb0()
{
}

extern unsigned int g_409020;
extern unsigned long long g_60d298;
extern unsigned int g_60d2a0;
extern unsigned int g_60d2a4;

int sub_402210()
{
    char v0;  // [bp-0x148]
    char v1;  // [bp-0xb8]
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long *v5;  // rdx
    char *v6[4];  // r12
    char *v7[4];  // rbx
    char *v8;  // rdi
    unsigned long long v9;  // rcx
    unsigned long long v10;  // cc_dep1
    unsigned long long v11;  // cc_dep2
    unsigned long v12;  // d
    char *v13;  // rsi
    unsigned long long v15;  // rbp
    char v16[4];  // rsi
    unsigned long long *v17;  // r13
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rcx
    char *v22;  // rdi
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rdx
    unsigned long long v25;  // cc_dep1
    unsigned long long v26;  // cc_dep2
    unsigned long long v27;  // cc_dep1
    char v28;  // bpl
    char v30;  // bpl
    unsigned long v32;  // rsi
    unsigned long long v33;  // r12
    unsigned long long v34;  // r14
    unsigned long long v35;  // rbp
    unsigned long long v37;  // r12
    unsigned long long v38;  // rbp
    unsigned long long v39;  // rbx
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rsi
    unsigned long long v48;  // rcx

    v4 = v3;
    v5 = (unsigned long long)g_60d2a4 + 1;
    if (v3 != 0)
    {
        g_60d2a4 = (unsigned long long)g_60d2a4 + 1;
        v5 = (unsigned long long)g_60d2a4 + 2;
    }
    v6 = g_60d298;
    v7 = v5;
    v15 = 0;
    if ((unsigned int)((unsigned long long)g_60d2a0 - 2) > (unsigned int)v5)
    {
        v13 = *((long long *)(g_60d298 + v7 * 8 + 8));
        v9 = 3;
        v8 = "-l";
        while (v9 != 0)
        {
            v9 -= 1;
            v10 = *(v13);
            v11 = *(v8);
            v8 = &v8[v12];
            v13 = &v13[v12];
            break;
        }
        if ((v10 > v11) - 0 - (v10 < v11) == 0)
        {
            g_60d2a4 = (unsigned int)v5;
            v15 = 1;
        }
    }
    v16 = *((long long *)((char *)v6 + 0x8 * v7));
    v17 = v7 * 8;
    v18 = (char)*((char *)*((long long *)((char *)v6 + 0x8 * v7)));
    if (*((char *)*((long long *)((char *)v6 + 0x8 * v7))) != 45)
    {
        if (v18 == 61)
        {
            v20 = v16[1];
            if ((v16[1] == 0 || v20 == 61) && (v16[1] == 0 || v16[2] == 0))
            {
                v28 = strcmp(v6[(long long)(int)g_60d2a4], v6[2 + (long long)(int)g_60d2a4]) == 0;
                g_60d2a4 = g_60d2a4 + 3;
            }
        }
        if (v18 != 61 || v16[1] != 0 && v20 != 61 || v16[1] != 0 && v16[2] != 0)
        {
            v22 = "!";
            v23 = 3;
            while (v23 != 0)
            {
                v23 -= 1;
                v25 = v16[0];
                v26 = *(v22);
                v22 = &v22[v12];
                v16 = &v16[v12];
                break;
            }
            v27 = (v25 > v26) - 0 - (v25 < v26);
            if ((char)v27 != 0)
            {
                abort(); /* do not return */
            }
            v30 = strcmp(v6[(long long)(int)g_60d2a4], v6[2 + (long long)(int)g_60d2a4]) != 0;
            g_60d2a4 = g_60d2a4 + 3;
        }
    }
    else
    {
        v19 = v16[1];
        if (v19 == 103 || v16[1] == 108)
        {
            v21 = v16[2];
        }
        if ((v19 != 103 || v21 != 116) && (v19 != 103 || v16[2] != 101) && (v16[1] != 108 || v21 != 116) && (v16[1] != 108 || v16[2] != 101))
        {
            if (v19 != 101)
            {
            }
            else
            {
                v24 = v16[2];
            }
            if (v19 == 110)
            {
                v21 = v16[2];
            }
        }
        if (v19 != 110 && (v19 == 103 || v16[1] == 108 || v19 != 101) && (v21 == 116 || v16[2] == 101 || v19 != 101) && (v16[3] != 0 || v19 != 103 || v21 != 116) && (v16[3] != 0 || v19 != 103 || v16[2] != 101) && (v16[3] != 0 || v16[1] != 108 || v21 != 116) && (v16[3] != 0 || v16[1] != 108 || v16[2] != 101))
        {
            if (v19 == 111 && v16[2] == 116 && v16[3] == 0)
            {
                g_60d2a4 = g_60d2a4 + 3;
                if ((char)v15 == 0 && v4 == 0)
                {
                    v34 = (unsigned int)sub_401ad0();
                    v38 = (unsigned int)sub_401ad0();
                }
                else
                {
                    v32 = "-ot does not accept -l";
                }
            }
            if (v19 == 101)
            {
                v24 = v16[2];
            }
        }
    }
    if ((*((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && v19 == 110 && v16[3] != 0 && (v19 == 103 || v16[1] == 108) && (v21 == 116 || v16[2] == 101) || *((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && v19 == 110 && v19 != 101 && v16[2] != 101 && (v19 != 103 || v21 != 116) && (v19 != 103 || v16[2] != 101) && (v16[1] != 108 || v21 != 116) && (v16[1] != 108 || v16[2] != 101)) && v21 == 116 && v16[3] == 0)
    {
        g_60d2a4 = g_60d2a4 + 3;
        if (v15 == 0 && v4 == 0)
        {
            v35 = (unsigned int)sub_401ad0();
            sub_401ad0();
        }
        else
        {
            v32 = "-nt does not accept -l";
        }
    }
    if (*((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && (v19 == 103 || v16[1] == 108) && (v21 == 116 || v16[2] == 101) && v16[3] == 0 || (*((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && v19 == 101 && v16[2] == 113 && (v19 != 103 || v21 != 116) && (v19 != 103 || v16[2] != 101) && (v16[1] != 108 || v21 != 116) && (v16[1] != 108 || v16[2] != 101) || *((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && v19 == 110 && v16[2] == 101 && v19 != 101 && (v19 != 103 || v21 != 116) && (v19 != 103 || v16[2] != 101) && (v16[1] != 108 || v21 != 116) && (v16[1] != 108 || v16[2] != 101)) && v16[3] == 0)
    {
        if (v4 != 0)
        {
            strlen(*((long long *)(v6 + v17 - 8)));
            v37 = (unsigned int)sub_403290();
        }
        else
        {
            v33 = (unsigned int)sub_401bb0();
        }
        if (v15 != 0)
        {
            strlen(*((long long *)&((char *)v17)[16 + g_60d298]));
            v46 = (unsigned int)sub_403290();
        }
        else
        {
            v45 = (unsigned int)sub_401bb0();
        }
        sub_404f20();
        v48 = (char)*((char *)(*((long long *)(g_60d298 + v7 * 8)) + 1));
        g_60d2a4 = g_60d2a4 + 3;
    }
    if ((*((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && v19 == 101 && v16[2] != 113 && (v19 != 103 || v21 != 116) && (v19 != 103 || v16[2] != 101) && (v16[1] != 108 || v21 != 116) && (v16[1] != 108 || v16[2] != 101) || *((char *)*((long long *)((char *)v6 + 0x8 * v7))) == 45 && v19 == 101 && v19 != 111 && v19 != 110 && (v19 == 103 || v16[1] == 108 || v19 != 101) && (v21 == 116 || v16[2] == 101 || v19 != 101) && (v16[3] != 0 || v19 != 103 || v21 != 116) && (v16[3] != 0 || v19 != 103 || v16[2] != 101) && (v16[3] != 0 || v16[1] != 108 || v21 != 116) && (v16[3] != 0 || v16[1] != 108 || v16[2] != 101)) && v24 == 102 && v16[3] == 0)
    {
        g_60d2a4 = g_60d2a4 + 3;
        if (v15 == 0 && v4 == 0)
        {
        }
        else
        {
            v32 = "-ef does not accept ";
        }
    }
    if (...)
    {
        v39 = (unsigned int)sub_404f00();
        dcgettext(0x0, 0x409020, 0x5);
        sub_401b10(); /* do not return */
    }
    if (...)
    {
        dcgettext(0x0, v32, 0x5);
        sub_401b10(); /* do not return */
    }
    if (...)
    {
        return stack_base + 0;
    }
}

int sub_405630()
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

int sub_4059f0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4057f0();
}

int sub_4056b0()
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
        return sub_405250();
    }
}

extern int512_t g_60d3c0;

int sub_404890()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60d3c0 : v1));
}

extern unsigned int g_409084;
extern unsigned long long g_60d298;
extern unsigned int g_60d2a0;
extern unsigned int g_60d2a4;

int sub_402cd0()
{
    unsigned long long v1;  // rax
    char *v2;  // rdi
    unsigned long long v3;  // cc_dep1
    unsigned long long v4;  // cc_dep2
    unsigned long v5;  // d
    unsigned long long v6;  // rcx
    char *v7;  // rsi
    unsigned long long v8;  // cc_dep1
    char *v9;  // rdi
    unsigned long long v10;  // rcx
    char *v11;  // rsi
    unsigned int v12;  // ebx
    unsigned long long v13;  // cc_dep1
    unsigned long long v14;  // cc_dep2
    unsigned long long v15;  // cc_dep1
    char *v16;  // rsi
    char *v17;  // rdi
    unsigned long long v18;  // rcx
    unsigned long long v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    unsigned long long v21;  // cc_dep1
    char *v22;  // rdi
    unsigned long long v23;  // rcx
    char *v24;  // rsi
    unsigned long long v25;  // cc_dep1
    unsigned long long v26;  // cc_dep2
    unsigned long long v27;  // cc_dep1
    char *v28;  // rdi
    unsigned long long v29;  // rcx
    char *v30;  // rsi
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    unsigned long long v33;  // cc_dep1
    unsigned long long v35;  // rbx

    v1 = sub_401980();
    if (v1 == 0)
    {
        v2 = "!";
        v6 = 2;
        v7 = *((long long *)(g_60d298 + ((int)g_60d2a4 + 1) * 8 - 8));
        while (v6 != 0)
        {
            v6 -= 1;
            v3 = *(v7);
            v4 = *(v2);
            v2 = &v2[v5];
            v7 = &v7[v5];
            break;
        }
        v8 = (v3 > v4) - 0 - (v3 < v4);
        if ((char)v8 == 0)
        {
            v12 = g_60d2a4 + 1;
            g_60d2a4 = g_60d2a4 + 1;
            if (v12 < g_60d2a0)
            {
                v1 = (unsigned int)(sub_4026f0() ^ 1);
            }
        }
        else
        {
            v9 = "(";
            v10 = 2;
            v11 = *((long long *)(g_60d298 + ((int)g_60d2a4 + 1) * 8 - 8));
            while (v10 != 0)
            {
                v10 -= 1;
                v13 = *(v11);
                v14 = *(v9);
                v9 = &v9[v5];
                v11 = &v11[v5];
                break;
            }
            v15 = (v13 > v14) - 0 - (v13 < v14);
            if ((char)v15 == 0)
            {
                v16 = *((long long *)(g_60d298 + ((int)g_60d2a4 + 1) * 8 + 8));
                v17 = ")";
                v18 = 2;
                while (v18 != 0)
                {
                    v18 -= 1;
                    v19 = *(v16);
                    v20 = *(v17);
                    v17 = &v17[v5];
                    v16 = &v16[v5];
                    break;
                }
                v21 = (v19 > v20) - 0 - (v19 < v20);
                if ((char)v21 == 0)
                {
                    v1 = (char)(*((char *)*((long long *)(g_60d298 + ((int)g_60d2a4 + 1 << 3)))) != 0);
                    g_60d2a4 = g_60d2a4 + 3;
                }
            }
            if ((char)v21 != 0 || (char)v15 != 0)
            {
                v22 = "-a";
                v23 = 3;
                v24 = *((long long *)(g_60d298 + ((int)g_60d2a4 + 1) * 8));
                while (v23 != 0)
                {
                    v23 -= 1;
                    v25 = *(v24);
                    v26 = *(v22);
                    v22 = &v22[v5];
                    v24 = &v24[v5];
                    break;
                }
                v27 = (v25 > v26) - 0 - (v25 < v26);
                if ((char)v27 != 0)
                {
                    v28 = "-o";
                    v29 = 3;
                    v30 = *((long long *)(g_60d298 + ((int)g_60d2a4 + 1) * 8));
                    while (v29 != 0)
                    {
                        v29 -= 1;
                        v31 = *(v30);
                        v32 = *(v28);
                        v28 = &v28[v5];
                        v30 = &v30[v5];
                        break;
                    }
                    v33 = (v31 > v32) - 0 - (v31 < v32);
                    if ((char)v33 != 0)
                    {
                        v35 = (unsigned int)sub_404f00();
                        dcgettext(0x0, 0x409084, 0x5);
                        sub_401b10(); /* do not return */
                    }
                }
            }
        }
        if (((char)v8 == 0 || (char)v21 == 0) && ((char)v8 == 0 || (char)v15 == 0) && (v12 < g_60d2a0 || (char)v8 != 0))
        {
            return v1;
        }
        if (((char)v8 == 0 || g_60d2a4 >= g_60d2a0) && ((char)v8 == 0 || (char)v27 == 0 || (char)v33 == 0) && (v12 >= g_60d2a0 || (char)v8 != 0) && ((char)v8 == 0 || (char)v21 != 0 || (char)v15 != 0))
        {
            sub_401c90(); /* do not return */
        }
    }
}

extern unsigned int g_40903e;
extern unsigned long long g_60d298;
extern unsigned int g_60d2a4;

int sub_4026f0()
{
    unsigned long v0;  // [bp-0x8]
    char *v2;  // rdi
    unsigned long long v3;  // rcx
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long v6;  // d
    char *v7;  // rsi
    char *v9;  // rax
    char v10;  // al
    unsigned long v11;  // rbx
    unsigned long long v14;  // rbx

    v2 = "!";
    v3 = 2;
    v7 = *((long long *)(g_60d298 + (int)g_60d2a4 * 8));
    while (v3 != 0)
    {
        v3 -= 1;
        v4 = *(v7);
        v5 = *(v2);
        v2 = &v2[v6];
        v7 = &v7[v6];
        break;
    }
    if ((v4 > v5) - 0 - (v4 < v5) != 0)
    {
        v0 = v11;
        if (*((char *)*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3)))) == 45 && *((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 1)) != 0 && *((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 2)) == 0 && sub_4026c0() == 0)
        {
            v14 = (unsigned int)sub_404f00();
            dcgettext(0x0, 0x40903e, 0x5);
            sub_401b10(); /* do not return */
        }
        if (*((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 1)) == 0 || *((char *)*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3)))) != 45 || *((char *)(*((long long *)(g_60d298 + ((long long)(int)g_60d2a4 << 3))) + 2)) != 0)
        {
            sub_401c90(); /* do not return */
        }
    }
    else
    {
        v9 = *((long long *)(g_60d298 + (int)g_60d2a4 * 8 + 8));
        g_60d2a4 = g_60d2a4 + 2;
        v10 = *(v9) == 0;
        return rax<8>;
    }
}

extern unsigned long long g_60d258;

int sub_4018cb()
{
    unsigned long long v1;  // rax

    v1 = &g_60d258;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_406470() { crash_skku;
}
int sub_404ee0()
{
}

int sub_4049db()
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
    v7 = (unsigned int)sub_403480();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4057f0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_403480();
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

