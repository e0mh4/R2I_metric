
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_406170()
{
    unsigned int v1;  // edi
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdi
    unsigned long long *v5;  // rsi

    if (((unsigned short)v1 & 258) != 0)
    {
        v2 = sub_4095a0();
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
            sub_408bd0();
            return 1;
        }
    }
    if (v4 == 0 || ((unsigned short)v1 & 258) != 0)
    {
        return v2;
    }
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
} struct_0;

int sub_405a20()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi

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

// int sub_405110()

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_408db0;
extern int512_t g_408dc0;
extern int512_t g_40c9d0;

int sub_4095a0()
{
    unsigned long long v1;  // rbx
    struct v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    uint128_t v5;  // xmm1
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
            v4 = sub_408f20();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_40c9d0;
            v3 = sub_408f20();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2 == 0 || v2->field_10 == 0) && (v2 == 0 || v4 != 0) && (v3 != 0 || v2 != 0))
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
            v12 = v6 / v8;
        }
        if ((((char)(INVALID_IR) & 1) == 0 || v2 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2->field_10 != 0) && (v2 == 0 || v4 != 0) && (v3 != 0 || v2 != 0) && (v2 != 0 || ((char)(INVALID_IR) & 1) != 0) && (((char)(INVALID_IR) & 1) != 0 || v2->field_10 != 0))
        {
            v13 = (unsigned int)sub_408d10();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_408db0 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_408dc0 : v17);
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

int sub_405940()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405740();
}

int sub_405e10()
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

int sub_409390()
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

int sub_408a50()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_4089f0();
}

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int sub_406030()
{
    struct v1;  // rdi
    unsigned int v3;  // esi
    char v4;  // dl
    unsigned long long v5;  // rax
    unsigned long v6;  // rdi

    if (v1->field_2c == v3 && v1->field_2c != -100)
    {
        abort(); /* do not return */
    }
    if (v1->field_2c == -100 || v1->field_2c != v3)
    {
        if (!(v4 == 0))
        {
            v5 = sub_409f90();
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

int sub_409730()
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

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[104];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_0;

int sub_4064a0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned int v3;  // edi
    struct v4;  // rdx
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
        v6 = sub_409d80();
        if (v6 != 0)
        {
            return (unsigned long long)free(v6);
        }
    }
    if ((((unsigned short)v3 & 258) == 0 || v6 == 0) && ((*(v7))[2] == 0 || ((unsigned short)v3 & 258) != 0) && (!((char)(v4->field_8->field_58 - 0 >> 63)) || ((unsigned short)v3 & 258) != 0) && (v4->field_8 != 0 || ((unsigned short)v3 & 258) != 0))
    {
        abort(); /* do not return */
    }
}

extern unsigned int g_40a9c9;
extern unsigned int g_40ab20;
extern unsigned int g_40ab48;
extern unsigned int g_40abd0;
extern unsigned int g_40ac40;
extern unsigned int g_40ad10;
extern unsigned int g_40ad90;
extern unsigned int g_40add8;
extern unsigned int g_40ae20;
extern unsigned int g_40ae50;
extern unsigned int g_40ae88;
extern unsigned int g_40af00;
extern unsigned int g_40af48;
extern unsigned int g_40af68;
extern unsigned long long stdout;

int sub_4029c0()
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
    unsigned long long *v30;  // rax
    char *v31;  // rdi
    char *v32;  // rsi
    unsigned long long v33;  // rcx
    unsigned long long v34;  // cc_dep1
    unsigned long long v35;  // cc_dep2
    unsigned long v36;  // d
    char *v40;  // rax
    char *v41;  // rax
    unsigned long long v42;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x40ab20, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ab48, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40abd0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ac40, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ad10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ad90, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40add8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae20, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ae88, 0x5), stdout);
        v0 = "[";
        v30 = &v0;
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
            v30 = &v2;
            v31 = v2;
            if (v2 == 0)
            {
                break;
            }
            v32 = "chmod";
            v33 = 6;
            if ((v34 > v35) - 0 - (v34 < v35) == 0)
            {
                break;
            }
            while (v33 != 0)
            {
                v33 -= 1;
                v34 = *(v32);
                v35 = *(v31);
                v31 = &v31[v36];
                v32 = &v32[v36];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a9c9, 0x5));
            v41 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a9c9, 0x5));
            v40 = setlocale(0x5, 0x0);
            if (v40 != 0)
            {
                v42 = strncmp(v40, "en_", 0x3);
            }
            if (v42 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40af48, 0x5));
            }
        }
        if ((v3 == 0 || v41 != 0) && (v3 == 0 || strncmp(v41, "en_", 0x3) != 0) && (v3 != 0 || v42 != 0) && (v3 != 0 || v40 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40af00, 0x5));
        }
        if (v3 != 0 || v42 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40af48, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40af68, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_4036b0()
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
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rbp
    unsigned long long v37;  // rax
    unsigned long long v38;  // r8
    unsigned long long v39;  // r9
    unsigned long long v40;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // rbp
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    char v44;  // al
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v47;  // rax
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v71;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v72;  // r13
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
            v26 = (unsigned int)sub_4035b0();
            v27 = (unsigned long long)(unsigned int)sub_4035b0();
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
                            if (v17 == 0 && v37 == 0)
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
                                        v33 = rax;
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
                            if (v17 == 0)
                            {
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
                                    v33 = rax;
                                }
                                if (v73 > v70)
                                {
                                    *((char *)(v29 + v70)) = 92;
                                }
                                v70 += 1;
                                v74 += 1;
                            }
                            else
                            {
                                v81 = v71;
                                *((unsigned long long *)&v4) = v4 & v81;
                            }
                        case 11:
                            v41 = 118;
                            break;
                        case 12:
                            v41 = 102;
                            break;
                            if (v17 == 0)
                            {
                                v72 = 0;
                            }
                            else
                            {
                                v81 = 0;
                            }
                        case 13:
                            v5 = 0;
                        case 32:
                            v42 = 0;
                            v41 = 32;
                            v72 = v5;
                            v5 = v42;
                            v72 = 0;
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
                        if (v4 == 0)
                        {
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
                        }
                        else
                        {
                            v41 = v46;
                            v72 = 0;
                        }
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
                        v71 = (unsigned int)v40 == 2;
                        v5 = v17 & (unsigned int)v40 == 2;
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
                        if (v17 != 0)
                        {
                            break;
                        }
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
                            v70 = (unsigned int)sub_4036b0();
                        }
                    }
                }
            }
            if (v6 == 0 && v72 == 0 && (char)v79 != 0 && v18 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && (v73 == 0 & v14 != 0) == 0 || v72 == 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && v18 == 0 || (char)v79 == 0 && v72 == 0 && ((v75 == 2 & v17) == 0 || v70 != 0))
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
                    v47 = sub_408af0();
                    v53 = v47;
                    if (v47 != -1 && v47 != -2 && v47 != 0)
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
                                v72 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13);
                                v50 += v53;
                                v47 = mbsinit((unsigned int)&v24);
                            }
                        }
                        v72 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13);
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
                    if (v47 == 0 || (unsigned int)v47 != 0 && v47 != -1 && v47 != -2)
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
                if (v47 == -1 || v47 == -2 || v47 == 0 || (unsigned int)v47 != 0)
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
            if (v71 != 0)
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
                                *((unsigned long long *)(v29 + v70 + 1)) = (unsigned long long)(unsigned int)rax + 48;
                            }
                            v47 = v70 + 2;
                            if (v73 > v70 + 2)
                            {
                                v64 = v41;
                                v65 = (char)v41 % 8;
                                v47 = (unsigned int)((rax & 7) + 48);
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
                    if ((v71 == 0 || v57 == 0) && (v71 == 0 || v74 < v58) && (v74 < v58 || v71 != 0))
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
            if ((v70 == 0 || v17 != 0) && (v72 == 0 || v17 != 0) && (v17 != 0 || (v75 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v70 = (unsigned int)sub_4036b0();
            }
            if (v17 == 0 || v17 == 0 && v5 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) == 0 && v4 == 0 || v71 != 0 && v70 >= v73)
            {
                if (v70 < v73)
                {
                    *((unsigned long long *)(v29 + v70)) = v41;
                }
                v70 += 1;
                v6 = (v72 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v72 == 0 && (char)v79 != 0 && v18 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && (v73 == 0 & v14 != 0) == 0 || v72 == 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && v18 == 0 || (char)v79 == 0 && v72 == 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || v72 == 0 && v6 != 0 && (char)v79 != 0 && v18 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || (v70 == 0 || v17 != 0) && (v72 == 0 || v17 != 0) && (v17 != 0 || (v75 == 2 & v17) != 0))
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

int sub_4094c0()
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

int sub_40a590()
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
    return sub_40a5e0();
}

int sub_405a50()
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
    return rax;
}

int sub_405580()
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

int sub_40a830()
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

extern unsigned long long *g_60f2b8;
extern unsigned long long g_60f2c0;
extern unsigned long long g_60f2c8;
extern unsigned int g_60f2d0;
extern unsigned long long g_60f360;

int sub_404cf0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60f2d0;
    if (g_60f2d0 > 1)
    {
        v2 = &g_60f2b8[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60f2b8[2 * (unsigned long long)(g_60f2d0 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_60f2b8[1] != 6353760)
    {
        v1 = free(g_60f2b8[1]);
        g_60f2c0 = 0x100;
        g_60f2c8 = &g_60f360;
    }
    if (g_60f2b8 != 6353600)
    {
        v1 = free(g_60f2b8);
        g_60f2b8 = &g_60f2c0;
    }
    g_60f2d0 = 1;
    return v1;
}

extern int512_t g_60f460;

int sub_404ad0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60f460 : v1)) = v2;
    return &g_60f460;
}

int sub_405aa0()
{
    unsigned long long v1;  // rax
    struct struct_0 *v2;  // rdi
    struct struct_0 *v3;  // rsi

    v1 = -18446744069414584321;
    if (*(v2)->field_80 >= *(v3)->field_80)
    {
        v1 = (char)(*(v2)->field_80 > *(v3)->field_80);
    }
    return v1;
}

int sub_4061d0()
{
    unsigned int v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x28]
    char *v5;  // rdx
    unsigned long v7;  // rsi
    unsigned long v9;  // rsi
    char *v10;  // rdi
    unsigned long long v11;  // rdx

    if (((unsigned short)v7 & 0x200) == 0)
    {
        v9 = (unsigned int)v7 * 0x2000 & 0x20000 | (unsigned int)v7 * 128 & 0x40000 | 0x90900;
        v10 = v5;
        v3 = (unsigned int)v7 * 0x2000 & 0x20000 | (unsigned int)v7 * 128 & 0x40000 | 0x90900;
        v11 = 0;
        if ((v9 & 64) != 0)
        {
            v0 = 16;
            v11 = (unsigned int)v3;
            v1 = stack_base + 8;
            v2 = stack_base + -56;
        }
        open(v10, v9, v11);
        return sub_40a5e0();
    }
}

int sub_409450()
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

int sub_402e30()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edi
    struct v3;  // rsi
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

int sub_40a5e0()
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

extern unsigned long long g_40c917;

int sub_408af0()
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
        v5 = &g_40c917;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_408cb0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern char g_60f308;
extern unsigned long long g_60f310;

int sub_402961()
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

    if (g_60f308 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60f310 >= 0)
            {
                break;
            }
            g_60f310 = g_60f310 + 1;
            *((long long *)(6352448 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60f308 = 1;
        return sub_40290b();
    }
    return v4;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_408fa0()
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
                        v8 = sub_408dd0();
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
                    v13 = (unsigned long long)(unsigned int)sub_408dd0();
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

// int sub_405130()

int sub_4057a0()
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
            sub_405990(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_404be2()
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

extern int512_t g_40c9d0;

int sub_408f20()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4245968)
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
        if (unknown)
        {
            *(v1) = &g_40c9d0;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

int sub_405a80()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | *(v1)) % v2 >> 64;
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

    v10 = sub_401790();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6352432 + rbx * 8))();
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
    char field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_0;

int sub_403390()
{
    void tmp_87;  // tmp #87
    struct v1;  // rcx
    unsigned long long v2;  // r11
    unsigned int v3;  // edi
    unsigned int v6;  // r12d
    char v7;  // sil
    unsigned int v8;  // r10
    unsigned int v9;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // r9
    unsigned long v11;  // r13
    unsigned long long v12;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // r9
    unsigned int v16;  // cc_dep1
    unsigned int v20;  // r10d
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbx
    unsigned int *v23;  // r8

    v2 = v1->field_1;
    v21 = v3 & 4095;
    v22 = 0;
    if (v1->field_1 != 0)
    {
        while (true)
        {
            v6 = v1->field_4;
            v10 = v1->field_8;
            if (v7 == 0)
            {
                v8 = -1;
                v9 = 0;
            }
            else
            {
                v8 = v1->field_c | -3073;
                v9 = !(v1->field_c) & 0xc00;
            }
            if (v2 != 2 || v7 == 0 && (v21 & 73) == 0)
            {
                v12 = v1->field_0;
                v13 = v10 & v8;
            }
            if (v2 == 2)
            {
                v12 = v1->field_0;
                v13 = ((unsigned int)v10 | 73) & v8;
            }
            else if (v2 == 3)
            {
                v10 = (unsigned int)v10 & (unsigned int)v21;
                tmp_87 = !(0 - (unsigned int)(char)(((unsigned int)v10 & 292) < 1)) & 292;
                v10 = (unsigned int)v10 | ((v10 & 73) != 0? ((v10 & 146) != 0? (unsigned int)v11 : tmp_87) | 73 : ((v10 & 146) != 0? (unsigned int)v11 : tmp_87));
            }
            if (v6 == 0)
            {
                v14 = v13 & !((unsigned int)rdx);
            }
            else
            {
                v14 = v13 & v6;
                if (v12 != 45)
                {
                    v16 = v12;
                }
                if (v12 == 61)
                {
                    v9 |= !((unsigned int)r12);
                    v8 = !((unsigned int)cc_dep1);
                }
            }
            if (v12 == 45 && v6 == 0 || v12 == 45 && v6 != 0)
            {
                v22 |= v14;
                v21 = (unsigned int)v21 & !((unsigned int)r9);
            }
            if (v6 == 0 && v12 != 45 || v6 != 0 && v12 != 45)
            {
                if (v12 == 43 && (v6 == 0 || v12 != 61) && (v12 != 61 || v6 != 0))
                {
                    v22 |= v14;
                    v21 = (unsigned int)v21 | v14;
                }
                if ((v12 == 61 || v6 == 0) && (v12 == 61 || v6 != 0))
                {
                    v1 = &v1[1];
                    v2 = v1->field_1;
                    v20 = v8 & 4095;
                    v22 |= v20;
                    v21 = (unsigned int)v21 & v9 | v14;
                    if ((char)v2 == 0)
                    {
                        break;
                    }
                }
            }
            if (v12 != 61 || v12 != 61)
            {
                v1 = &v1[1];
                v2 = v1->field_1;
                if ((char)v2 == 0)
                {
                    break;
                }
            }
        }
    }
    if (v23 != 0)
    {
        *((unsigned long long *)&v23) = v22;
    }
    return v21;
}

// int sub_4050c0()

int sub_403330()
{
    unsigned int v0;  // [bp-0x80]
    unsigned long long v3;  // rax

    v3 = 0;
    if (__xstat(0x1) == 0)
    {
        v3 = sub_405740();
        *((short *)v3) = 317;
        *((int *)(v3 + 4)) = 4095;
        *((unsigned int *)(v3 + 8)) = v0;
        *((int *)(v3 + 12)) = 4095;
        *((char *)(v3 + 17)) = 0;
    }
    return v3;
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
    char field_49;
} struct_0;

int sub_406220()
{
    unsigned long v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    struct v4;  // rdi
    struct v5;  // r15
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // r12
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
                v21 = (unsigned int)sub_409f80();
                if ((char)v21 == 0)
                {
                    v18 = (unsigned int)sub_409fd0();
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
    else
    {
        if ((unsigned int)v18 < 0 && (((unsigned short)v10 & 0x200) == 0 || (unsigned int)v18 < 0 || v8 == 0 || (char)v17 != 0 || (char)v21 != 0))
        {
            v18 = sub_4061d0();
            if (v18 < 0)
            {
                v19 = -18446744069414584321;
            }
        }
        if (((char)v17 == 0 || (unsigned int)v18 >= 0 || v18 >= 0) && ((char)v21 == 0 || (unsigned int)v18 >= 0 || v18 >= 0) && ((unsigned int)v18 >= 0 || ((unsigned short)v10 & 0x200) != 0 || v18 >= 0) && ((unsigned int)v18 >= 0 || v18 >= 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || v18 >= 0 || v8 != 0))
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
                        sub_406030();
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
            if (((*(&((char *)&v5->field_48)[1]) & 2) == 0 || v7[15] != *((long long *)&v1) || (unsigned int)v19 != 0 || v7[16] != v2) && v22 < 0)
            {
                v24 = *(v22);
                close(v18);
                *(__errno_location()) = v24;
            }
        }
    }
    v26 = v19;
    return v26;
}

int sub_409540()
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

// int sub_404ef0()

extern int512_t g_60f248;

// int sub_40a910()

extern int512_t g_60f460;

int sub_404ae0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60f460 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60f460 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_408dd0()
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

extern unsigned int g_40c432;
extern unsigned int g_40c45d;
extern unsigned int g_40c690;

int sub_4056c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c432, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c45d, 0x5));
    dcgettext(0x0, 0x40c690, 0x5);
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

typedef struct struct_4 {
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
} struct_4;

typedef struct struct_7 {
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
} struct_7;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
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
} struct_2;

typedef struct struct_8 {
    char padding_0[1];
    char field_1;
} struct_8;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
} struct_5;

int fts_read()
{
    void tmp_11;  // tmp #11
    void tmp_9;  // tmp #9
    void tmp_8;  // tmp #8
    void tmp_13;  // tmp #13
    void tmp_10;  // tmp #10
    struct v1;  // rdi
    struct v2;  // rbp
    unsigned long long v3;  // rax
    struct v4;  // r12
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // rbx
    unsigned long long v8;  // rax
    char *v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    void *v12;  // rdi
    unsigned long long v15;  // rax
    unsigned int v16;  // eax
    struct v19;  // rbp
    void *v20;  // rdi
    unsigned long long v22;  // rax
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    struct v27;  // rax
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v48;  // edi
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
                    v5 = sub_405ad0();
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
                        v11 = sub_4061d0();
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
            if (v1->field_0->field_70 != 1 && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000))
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
                            v10 = sub_405ad0();
                            *((unsigned long long *)&v7->field_70) = v10;
                            if (((char)v1->field_48 & 4) == 0 && v10 == 1)
                            {
                                v15 = sub_4061d0();
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
                            v8 = sub_4060a0();
                            if (v8 == 0)
                            {
                                v12 = *((long long *)&v1->padding_4a[11]);
                                if (((unsigned short)v4->field_48 & 258) == 0)
                                {
                                    free(v12);
                                }
                                else if (v12 != 0)
                                {
                                    sub_4097e0();
                                }
                                tmp_11 = v7->field_60;
                                v19 = &v7[1].field_58;
                                v20 = v4->field_20;
                                v7->field_48 = v7->field_60;
                                memmove(v20, &v7[1].field_58, tmp_11 + 1);
                                v22 = strrchr();
                                if (v22 != 0 && (v19->field_1 != 0 || v19 != v22))
                                {
                                    v37 = strlen(v22 + 1);
                                    memmove(v19, v22 + 1, v37 + 1);
                                    v7->field_60 = v37;
                                }
                                tmp_9 = v4->field_20;
                                v7->field_38 = v4->field_20;
                                v7->field_30 = tmp_9;
                                sub_406170();
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
                            v7 = (unsigned long long)(unsigned int)sub_406540();
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
                                                sub_406030();
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
                                        v32 = sub_406220();
                                    }
                                }
                                else
                                {
                                    v29 = sub_4060a0();
                                }
                                if (v7->field_58 == 0 && v29 == 0 || v32 == 0 && v7->field_58 != 0 || v7->field_58 != 0 && (v28 & 1) != 0 || v7->field_58 != 0 && ((char)*((short *)&v7->field_72) & 2) != 0)
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
                                if (v7->field_70 != 2 || v7->field_58 == 0 && v29 != 0 || (v28 & 1) == 0 && ((char)*((short *)&v7->field_72) & 2) == 0 && v7->field_58 != 0 && v32 != 0)
                                {
                                    if (v7->field_40 == 0)
                                    {
                                        v7->field_70 = 6;
                                        sub_4064a0();
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
                if (!(unknown))
                {
                    if (v7->field_58 == 0 && v8 == 0 && v2->field_10 != 0)
                    {
                        v4->field_0 = v7;
                    }
                    else if (v7->field_58 == -1 && v2->field_10 == 0 && ((*(&((char *)&v4->field_48)[1]) & 64) == 0 || v2->field_8->field_18 == 0) && (v2->field_8->field_18 == 0 || v7 == 0))
                    {
                        return stack_base + 0;
                    }
                    else if (unknown)
                    {
                        tmp_13 = v7;
                        return tmp_13;
                    }
                    else if ((v2->field_10 == 0 || v7->field_58 != 0) && (v2->field_10 == 0 || v7->field_74 != 4) && (v2->field_8->field_18 != 0 || v2->field_10 != 0) && (v7 != 0 || v2->field_10 != 0))
                    {
                        tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
                        *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
                        memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
                        v49 = v7->field_70;
                    }
                    else if (v2->field_10 == 0 && v7->field_58 != -1 && ((*(&((char *)&v4->field_48)[1]) & 64) == 0 || v2->field_8->field_18 == 0) && (v2->field_8->field_18 == 0 || v7 == 0))
                    {
                        abort(); /* do not return */
                    }
                }
            }
        }
        else
        {
            v2->field_70 = sub_405ad0();
        }
    }
    if ((v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000) && v2->field_78 == v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000) && ((char)v1->field_48 & 64) == 0) && v1->field_8 != 0)
    {
        if (!(((char)(v1->field_48 >> 8) & 32) == 0))
        {
            v1->field_48 = v1->field_48;
            sub_405e10();
            v1->field_8 = 0;
        }
        else if (sub_406220() != 0)
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
    if (v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && (v1->field_0->field_74 != 2 || (unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000) && v2->field_78 != v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0->field_74 != 2 && v1->field_0 != 0 && v1->field_0->field_74 == 4)
    {
        if ((v2->field_72 & 2) != 0)
        {
            close(v2->field_44);
        }
        if (v1->field_8 != 0)
        {
            sub_405e10();
            v1->field_8 = 0;
        }
        v2->field_70 = 6;
        sub_4064a0();
    }
    if (unknown)
    {
        v7 = (unsigned int)sub_406540();
        v1->field_8 = v7;
        if (v7 == 0 && ((unsigned short)v1->field_48 & 0x4000) == 0)
        {
            if (v2->field_40 != 0 && v2->field_70 != 4)
            {
                v2->field_70 = 7;
            }
            sub_4064a0();
        }
    }
    if (unknown)
    {
        v1->field_8 = 0;
    }
    if (unknown)
    {
        tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
        *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
        memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
        v49 = v7->field_70;
    }
    if (unknown)
    {
        v4->field_0 = v7;
    }
    if (unknown)
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
                v46 = sub_405fc0();
                if (v46 == 2)
                {
                    v49 = v7->field_70;
                }
            }
        }
    }
    if (unknown)
    {
        abort(); /* do not return */
    }
    if (unknown)
    {
        v49 = sub_405ad0();
        tmp_10 = v7->field_90;
        *((unsigned long long *)&v7->field_70) = v49;
        if (((unsigned short)tmp_10 & 0xf000) == 0x4000 && v7->field_58 != 0 && v45[13] - 1 <= -3)
        {
            v45[13] = v45[13] - 1;
        }
    }
    if (unknown)
    {
        v4->field_18 = v7->field_78;
    }
    if (unknown)
    {
        *(__errno_location()) = 12;
    }
    if (unknown)
    {
        tmp_13 = v7;
        return tmp_13;
    }
    if (unknown)
    {
        return stack_base + 0;
    }
}

// int sub_405790()

int sub_405760()
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
        sub_405990(); /* do not return */
    }
}

extern unsigned long long g_60f350;

int sub_402d70()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60f350 = v1;
    return v2;
}

// int sub_404de0()

int sub_408a70()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4089f0();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[12];
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_409fd0()
{
    struct v1;  // rdi
    struct v2;  // rdx
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

extern unsigned int g_40c3eb;
extern unsigned int g_40c3ef;
extern unsigned int g_40c3ff;
extern unsigned int g_40c416;
extern unsigned int g_40c478;
extern unsigned int g_40c548;
extern unsigned int g_40c568;
extern unsigned int g_40c590;
extern unsigned int g_40c5b8;
extern unsigned int g_40c5e8;

int sub_4051a0()
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
    dcgettext(0x0, 0x40c3eb, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c478, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40c3ef, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40c3ff, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40c416, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40c548, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40c568, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40c590, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40c5b8, 0x5);
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
        dcgettext(0x0, 0x40c5e8, 0x5);
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

int sub_404c0b()
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
    v7 = (unsigned int)sub_4036b0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_405740();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4036b0();
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

int sub_40a630()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40a7f0() != 0)
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

extern unsigned int g_60f4e0;

int sub_40a6b0()
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
        if (g_60f4e0 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40a6b0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60f4e0 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_60f4e0 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40a6b0();
        }
        if (((unsigned int)v15 < 0 || g_60f4e0 < 0) && (g_60f4e0 < 0 || *(v12) == 22) && (g_60f4e0 == -1 || g_60f4e0 >= 0) && (g_60f4e0 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_60f4e0 >= 0))
        {
            v13 = fcntl(v15, 0x1);
            if (v13 >= 0)
            {
                v14 = fcntl(v15, 0x2);
            }
            if (v14 == -1 || v13 < 0)
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

typedef struct struct_7 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
} struct_7;

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

typedef struct struct_5 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    unsigned int field_48;
    char field_49;
} struct_5;

typedef struct struct_1 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[32];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_1;

typedef struct struct_4 {
    char padding_0[24];
    unsigned long long field_18;
} struct_4;

typedef struct struct_0 {
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
} struct_0;

typedef struct struct_8 {
    char padding_0[72];
    unsigned int field_48;
} struct_8;

typedef struct struct_10 {
    unsigned long long field_0;
    char padding_8[10];
    char field_12;
    char field_13;
    char field_14;
} struct_10;

typedef struct struct_9 {
    char padding_0[4245440];
    unsigned int field_40c7c0;
} struct_9;

typedef struct struct_6 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[56];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
} struct_6;

extern int512_t g_405aa0;
extern char g_40c7c0;

int sub_406540()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x90]
    void tmp_20;  // tmp #20
    unsigned long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    char v11;  // [bp-0x3a]
    char v12;  // [bp-0x39]
    unsigned int v14;  // [bp+0x100008]
    struct v15;  // rdi
    struct v17;  // r13
    unsigned int v18;  // esi
    unsigned long long v19;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v21;  // ebx
    unsigned long long v22;  // rax
    unsigned short v23;  // cc_dep1
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v31;  // rdi
    unsigned long long v32;  // rax
    unsigned long long v33;  // rdi
    unsigned long long v34;  // rbp
    void *v39;  // rcx
    struct v40;  // rbx
    struct v41;  // r14
    unsigned long long v42;  // r13
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // r8
    void *v46;  // rsi
    unsigned long long v47;  // rax
    unsigned int v49;  // eax
    unsigned int v50;  // esi
    struct v51;  // rdx
    unsigned long long v52;  // rax
    unsigned long long v53;  // r15
    unsigned long long v54;  // rbp
    unsigned long long v55;  // r12
    struct v56;  // r13
    struct v57;  // r13
    struct v58;  // r13
    unsigned int v59;  // ebx
    struct v60;  // r15
    unsigned int v61;  // eax
    unsigned long long v67[8];  // rax
    unsigned long long v68;  // rcx
    unsigned long long v69;  // rdx
    unsigned long long v70;  // rdx
    unsigned long long v71[12];  // rax
    unsigned long long v72;  // rdx
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rdx
    char v75;  // al
    unsigned long long v77;  // rax
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax

    v17 = v15->field_0;
    v10 = v18;
    v31 = v15->field_0->field_18;
    v9 = v31;
    if (v9 != 0)
    {
        v19 = dirfd();
        if (v19 >= 0)
        {
            if (v21->field_40 != 0)
            {
                v6 = -1;
            }
            else
            {
                v6 = 100000;
                v31 = v21->field_48;
                v12 = 1;
            }
        }
        else
        {
            closedir();
            v4->field_18 = 0;
        }
    }
    else if (((unsigned short)v21->field_48 & 516) != 0x200)
    {
        v21 = sub_40a590();
        if (v21 >= 0)
        {
            v22 = fdopendir(v21);
            if (v22 != 0)
            {
                v23 = v4->field_70;
                v4->field_18 = v22;
                if (!(v23 != 11))
                {
                    v4->field_70 = sub_405ad0();
                }
                else if (((unsigned short)v21->field_48 & 0x100) != 0)
                {
                    sub_4064a0();
                    sub_405ad0();
                    v27 = sub_4063f0();
                    if (v27 == 0)
                    {
                        v2 = 0;
                        *(__errno_location()) = 12;
                    }
                }
                if (v23 == 11 || ((unsigned short)v21->field_48 & 0x100) == 0 || v27 != 0)
                {
                    v6 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(v21->field_40 < 1)) & 100001) - 1;
                    if (v10 != 2 && ((char)v21->field_48 & 56) == 24 && v4->field_88 == 2)
                    {
                        v29 = sub_405fc0();
                        if (v29 != 0 && v10 == 3)
                        {
                            v30 = 0;
                            v55 = 1;
                        }
                    }
                }
            }
            else
            {
                close(v21);
                *(__errno_location()) = v14;
            }
        }
        if (v21 < 0 || v22 == 0)
        {
            v4->field_18 = 0;
        }
    }
    if ((v9 == 0 || v19 < 0) && (v9 != 0 || ((unsigned short)v21->field_48 & 516) != 0x200) && (v21 < 0 || v22 == 0 || v9 != 0))
    {
        if (v10 == 3)
        {
            v4->field_70 = 4;
            v4->field_40 = *(__errno_location());
        }
        v2 = 0;
    }
    if (v9 == 0 && v10 != 2 && ((unsigned short)v21->field_48 & 516) != 0x200 && v21 >= 0 && v22 != 0 && (v23 == 11 || ((unsigned short)v21->field_48 & 0x100) == 0 || v27 != 0) && ((char)v21->field_48 & 56) == 24 && v4->field_88 == 2 && v29 == 0 || v9 == 0 && v10 != 2 && ((unsigned short)v21->field_48 & 516) != 0x200 && v21 >= 0 && v22 != 0 && (v23 == 11 || ((unsigned short)v21->field_48 & 0x100) == 0 || v27 != 0) && ((char)v21->field_48 & 56) == 24 && v4->field_88 != 2 || v9 == 0 && v10 != 2 && ((unsigned short)v21->field_48 & 516) != 0x200 && v21 >= 0 && v22 != 0 && (v23 == 11 || ((unsigned short)v21->field_48 & 0x100) == 0 || v27 != 0) && ((char)v21->field_48 & 56) != 24)
    {
        v30 = 1;
        v55 = (char)(v10 == 3);
    }
    if (v9 == 0 && v10 != 2 && ((unsigned short)v21->field_48 & 516) != 0x200 && v21 >= 0 && v22 != 0 && (v23 == 11 || ((unsigned short)v21->field_48 & 0x100) == 0 || v27 != 0) && ((char)v21->field_48 & 56) == 24 && v4->field_88 == 2 && v29 != 0 && v10 != 3 || v9 == 0 && ((unsigned short)v21->field_48 & 516) != 0x200 && v21 >= 0 && v22 != 0 && (v23 == 11 || ((unsigned short)v21->field_48 & 0x100) == 0 || v27 != 0) && v10 == 2)
    {
        v12 = 0;
        v31 = v21->field_48;
    }
    if (unknown)
    {
        v21 = (unsigned long long)(unsigned int)sub_40a6b0();
        if ((unsigned int)v21 < 0)
        {
            v33 = v4->field_18;
            v34 = (unsigned int)v4->field_72 | 1;
        }
    }
    if (unknown)
    {
        v32 = sub_406220();
        if (v32 != 0)
        {
            v33 = v4->field_18;
            v34 = (unsigned int)v4->field_72 | 1;
        }
    }
    if (unknown)
    {
        v12 = 1;
        v31 = v21->field_48;
    }
    if (unknown)
    {
        v4->field_72 = (unsigned int)v4->field_72 | 1;
        closedir();
        v31 = v21->field_48;
    }
    if (unknown)
    {
        v0 = v33;
        v4->field_40 = *(__errno_location());
    }
    if (unknown)
    {
        *((unsigned long long *)&v4->field_72) = v34;
        closedir();
        v31 = v21->field_48;
        v4->field_18 = 0;
        if (((unsigned short)v31 & 0x200) != 0 && v21 >= 0)
        {
            close(v21);
            v31 = v21->field_48;
        }
    }
    if (unknown)
    {
        v4->field_18 = 0;
        v12 = 0;
    }
    if (unknown)
    {
        v1 = v4->field_48;
        v8 = v4->field_48 - 1;
        if (*((char *)(v4->field_38 + v4->field_48 - 1)) != 47)
        {
            v8 = v4->field_48;
            v1 = &v8[1];
        }
        v7 = 0;
        if (((char)v31 & 4) != 0)
        {
            v39 = &v8[v21->field_20 + 1];
            v8[v21->field_20] = 47;
            v7 = v39;
        }
        v11 = 0;
        v54 = 0;
        v3 = v21->field_30 - v1;
        v21 = v15;
        v0 = 0;
        v4 = v17;
        v5 = *((long long *)&v4->padding_50[8]) + 1;
        v2 = 0;
        while (true)
        {
            v60 = v4->field_18;
            if (v4->field_18 != 0)
            {
                *((int *)v55) = 0;
                v55 = __errno_location();
                v41 = (unsigned long long)readdir();
                if (v41 != 0)
                {
                    if (v41->field_13 == 46 && (v60->field_48 & 32) == 0 && (*((short *)&v41->field_14) == 46 || v41->field_14 == 0))
                    {
                        v53 = v0;
                    }
                    if (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || *((short *)&v41->field_14) != 46 && v41->field_14 != 0)
                    {
                        v42 = strlen(&v41->field_13);
                        v53 = (unsigned int)sub_405d80();
                        if (v3 <= v42 && v53 != 0)
                        {
                            v3 = v60->field_20;
                            v43 = sub_406100();
                            if (v43 != 0)
                            {
                                v44 = v60->field_20;
                                if (v60->field_20 != v3)
                                {
                                    *((int *)&v7) = ((v60->field_48 & 4) == 0? v7 : rdx + (long long)(stack_base)[-136]);
                                }
                                else
                                {
                                    v43 = v11;
                                }
                                *((unsigned long long *)&v11) = v43;
                                v3 = v60->field_30 - v1;
                            }
                        }
                    }
                }
                else
                {
                    v61 = *((int *)v55);
                    v56 = v4;
                    if (*((int *)v55) != 0)
                    {
                        v56->field_40 = v61;
                        v56->field_70 = (0 - (unsigned int)(char)((v9 | v54) < 1) & -3) + 7;
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
                v56 = v4;
            }
            if (v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 <= v42 && v43 == 0 || v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v53 == 0)
            {
                v58 = v4;
                v59 = *((int *)v55);
                free(v53);
                sub_405e10();
                closedir();
                v58->field_18 = 0;
                v58->field_70 = 7;
                v2 = 0;
                *((int *)(v53 + 72)) = *((int *)(v53 + 72)) | 0x4000;
                *((unsigned int *)v55) = v59;
            }
            if (v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 <= v42 && v43 != 0 || v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 > v42)
            {
                v45 = v42 + v1;
                if (!(INVALID_IR))
                {
                    v46 = v53 + 264;
                    *((unsigned long *)(v53 + 88)) = v5;
                    tmp_20 = v60->field_0;
                    *((unsigned long long *)(v53 + 72)) = v45;
                    *((long long *)(v53 + 8)) = tmp_20;
                    *((unsigned long long *)(v53 + 128)) = v41->field_0;
                    v47 = (unsigned int)*((int *)&v60->field_48);
                    if (((char)*((int *)&v60->field_48) & 4) == 0)
                    {
                        *((void **)(v53 + 48)) = v46;
                    }
                    else
                    {
                        *((long long *)(v53 + 48)) = *((long long *)(v53 + 56));
                        memmove(v7, v46, *((long long *)(v53 + 96)) + 1);
                        v47 = (unsigned int)*((int *)&v60->field_48);
                    }
                    if ((v47 & 4) == 0 && v60->field_40 != 0)
                    {
                        *((unsigned short *)(v53 + 112)) = sub_405ad0();
                    }
                    if (v60->field_40 == 0 || (v47 & 4) != 0)
                    {
                        v49 = (unsigned int)v47 & 24;
                        v50 = v41->field_12;
                        v51 = (unsigned long long)((unsigned int)v41->field_12 - 1);
                        if (v49 == 24 && ((char)v50 & 251) != 0)
                        {
                            *((short *)(v53 + 112)) = 11;
                            if ((unsigned int)v51 > 11)
                            {
                                *((int *)(v53 + 144)) = 0;
                                v52 = 1;
                            }
                            else
                            {
                                *((int *)(v53 + 144)) = *((int *)(0x4 * v51 + &g_40c7c0));
                                v52 = 1;
                            }
                        }
                        if (((char)v50 & 251) == 0 || v49 != 24)
                        {
                            *((short *)(v53 + 112)) = 11;
                            if ((unsigned int)v51 > 11)
                            {
                                *((int *)(v53 + 144)) = 0;
                                v52 = 2;
                            }
                            else
                            {
                                *((int *)(v53 + 144)) = *((int *)(0x4 * v51 + &g_40c7c0));
                                v52 = 2;
                            }
                        }
                        *((unsigned long long *)(v53 + 168)) = v52;
                    }
                    *((long long *)(v53 + 16)) = 0;
                    if (v2 != 0)
                    {
                        v54 += 1;
                        *((unsigned long long *)(v0 + 16)) = v53;
                    }
                    else
                    {
                        v2 = v53;
                        v54 += 1;
                    }
                }
                else
                {
                    v57 = v4;
                    free(v53);
                    sub_405e10();
                    closedir();
                    v57->field_18 = 0;
                    v57->field_70 = 7;
                    v2 = 0;
                    *((int *)&v60->field_48) = *((int *)&v60->field_48) | 0x4000;
                    *((int *)v55) = 36;
                }
            }
            if ((v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 <= v42 && v43 != 0 || v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 > v42) && !(INVALID_IR) && v2 == 0 && v54 < v6 || (v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 <= v42 && v43 != 0 || v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 > v42) && !(INVALID_IR) && v2 != 0 && v54 < v6 || v41->field_13 == 46 && (v60->field_48 & 32) == 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) == 46 || v41->field_14 == 0))
            {
                v0 = v53;
            }
            if ((v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 <= v42 && v43 != 0 || v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 > v42) && !(INVALID_IR) && v2 == 0 && v54 >= v6 || (v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 <= v42 && v43 != 0 || v53 != 0 && v41 != 0 && v4->field_18 != 0 && (*((short *)&v41->field_14) != 46 || v41->field_13 != 46 || (v60->field_48 & 32) != 0) && (v41->field_13 != 46 || (v60->field_48 & 32) != 0 || v41->field_14 != 0) && v3 > v42) && !(INVALID_IR) && v2 != 0 && v54 >= v6)
            {
                v56 = v4;
                v60 = v40;
            }
            if (unknown)
            {
                v67 = v60->field_8;
                v68 = v60->field_20;
                if (v60->field_8 != 0)
                {
                    do
                    {
                        v69 = v67[6];
                        if (v67[6] != &v67[33])
                        {
                            v70 = v69 - v67[7] + v68;
                            v67[6] = v70;
                        }
                        v67[7] = v68;
                        v67 = v67[2];
                    }
                    while (v67 != 0);
                }
                for (v71 = v2; !((char)(v71[11] - 0 >> 63)); v71 = v74)
                {
                    v72 = v71[6];
                    if (v71[6] != &v71[33])
                    {
                        v73 = v72 - v71[7] + v68;
                        v71[6] = v73;
                    }
                    v74 = v71[2];
                    v71[7] = v68;
                    if (v74 == 0)
                    {
                        v74 = v71[1];
                    }
                }
            }
            if (unknown)
            {
                if ((v60->field_48 & 4) != 0)
                {
                    if (v54 == 0 || v60->field_30 == v1)
                    {
                        v7 -= 1;
                    }
                    *((char *)v7) = 0;
                }
                if (v9 == 0 && v12 != 0 && (v10 == 1 || v54 == 0))
                {
                    if (v56->field_58 == 0)
                    {
                        v75 = sub_4060a0() != 0;
                    }
                    else
                    {
                        v75 = sub_406220() != 0;
                    }
                    if (v75 != 0)
                    {
                        v56->field_70 = 7;
                        *((int *)&v60->field_48) = *((int *)&v60->field_48) | 0x4000;
                        sub_405e10();
                        v2 = 0;
                    }
                }
                if (v54 == 0 && (v12 == 0 || v75 == 0 || v9 != 0))
                {
                    if (v10 == 3)
                    {
                        v78 = v56->field_70;
                        if (v56->field_70 != 4 && v78 != 7)
                        {
                            v56->field_70 = 6;
                        }
                    }
                    sub_405e10();
                    v2 = 0;
                }
                if (v54 != 0 && (v12 == 0 || v75 == 0 || v9 != 0 || v10 != 1))
                {
                    v77 = v60->field_40;
                    if (v77 == 0 && v54 > 10000)
                    {
                        v79 = sub_405ea0();
                        if (v79 != 16914836 && v79 != 26985)
                        {
                            v60->field_40 = &g_405aa0;
                            v60->field_40 = 0;
                            v2 = (unsigned int)sub_405c80();
                        }
                        if (v79 == 16914836 || v79 == 26985)
                        {
                            v77 = v60->field_40;
                        }
                    }
                    if (v77 == 0 && v54 <= 10000 || v54 == 1 && v54 <= 10000 || v77 == 0 && v79 == 16914836 && v77 == 0 || v77 == 0 && v79 == 26985 && v77 == 0 || v79 == 16914836 && v54 == 1 && v77 == 0 || v79 == 26985 && v54 == 1 && v77 == 0)
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
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_409f90()
{
    struct v1;  // rdi
    struct v2;  // rcx
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

// int sub_404db0()

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4090f0()
{
    struct v1;  // rdi

    return v1->field_10;
}

int sub_404a80()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_405940();
}

int sub_404fb0()
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
    return sub_4048e0();
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

int sub_405d80()
{
    struct v1;  // rdi
    struct v2;  // r12
    unsigned long v3;  // rdx
    unsigned long long v4;  // rbp
    unsigned long v6;  // rax
    void *v7;  // rsi
    struct v9;  // rax
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

int sub_405ad0()
{
    struct v1;  // rsi
    struct v2;  // rbp
    struct v3;  // rbx
    unsigned long long v4;  // cc_dep1
    struct v6;  // rdi
    char v7;  // dl
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned int v10;  // eax
    unsigned int *v11;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // rax
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
        v9 = __fxstatat(0x1, v6->field_2c, v1->field_30, (unsigned int)v2, 0x100);
        if (v9 != 0)
        {
            v12 = (unsigned int)*(__errno_location());
        }
    }
    if (v7 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v4 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0)
    {
        v8 = __xstat(0x1);
    }
    if (v8 != 0 && (v4 == 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0) && (v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0 || ((char)*((int *)&v6->field_48) & 2) != 0))
    {
        v11 = __errno_location();
        v12 = *(v11);
        if ((unsigned int)v12 == 2)
        {
            v12 = __lxstat(0x1, v3->field_30, (unsigned int)v2);
            if (v12 == 0)
            {
                *(v11) = 0;
                return 13;
            }
            v12 = *(v11);
        }
    }
    if (v8 == 0 && v7 != 0 || v8 == 0 && ((char)*((int *)&v6->field_48) & 2) != 0 || v4 == 0 && v8 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0 || v9 == 0 && v7 == 0 && ((char)*((int *)&v6->field_48) & 1) == 0 && ((char)*((int *)&v6->field_48) & 2) == 0 || v9 == 0 && v7 == 0 && ((char)*((int *)&v6->field_48) & 2) == 0 && v4 != 0)
    {
        v10 = v3->field_90 & 0xf000;
        if (!(((unsigned short)v3->field_90 & 0xf000) != 0x4000))
        {
            v13 = v3->field_88;
            if (v3->field_88 > 1 && v3->field_58 > 0)
            {
                v15 = ((v6->field_48 & 32) == 0? v13 - 2 : v13);
            }
            if (v3->field_88 <= 1 || v3->field_58 <= 0)
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
        else if (v10 != 0xa000)
        {
            v14 = (unsigned long long)(char)(v10 == 0x8000) * 5 + 3;
        }
        else
        {
            v14 = 12;
        }
        return v14;
    }
    if ((v7 == 0 || v8 != 0) && (((char)*((int *)&v6->field_48) & 2) == 0 || v8 != 0) && (v7 == 0 || (unsigned int)v12 != 2 || v12 != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v4 != 0 || v8 != 0) && (((char)*((int *)&v6->field_48) & 2) == 0 || (unsigned int)v12 != 2 || v12 != 0) && (v4 == 0 || v9 != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v4 != 0 || (unsigned int)v12 != 2 || v12 != 0) && (v9 != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0 || ((char)*((int *)&v6->field_48) & 2) != 0))
    {
        *((unsigned long *)&v3->field_40) = v12;
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4091e0()
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

int sub_405740()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405990(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern unsigned int g_40c76f;
extern unsigned int g_60f260;

int sub_405990()
{
    dcgettext(0x0, 0x40c76f, 0x5);
    error(g_60f260, 0x0, "%s");
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

double sub_408e00()
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
        v7 = sub_408dd0();
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
        if ((v15->field_8 == 0 || v10 == 0 || (char)v20 == 0) && (v15->field_8 == 0 || (char)v20 == 0 || v8 != v1) && (v8 == v1 || v10 != 0 || v15->field_8 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v10 == 0 && v15->field_8 == 0 && v8 != v1 || v10 == 0 && v8 != v1 && v1 != *(v11))
    {
        return v18;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4093e0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_408dd0();
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

// int sub_404f70()

int sub_408ab0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4089f0();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40c917;
extern char g_60f4d8[2];

int sub_40a020()
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
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_60f4d8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40c917 : (unsigned long long)nl_langinfo(0xe));
    if (g_60f4d8 == 0)
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
            v9 = &g_40c917;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47) && (*(v15) == 0 || v15 == 0 || v11 != 0))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v15[v11 + -1] != 47 && v17 != 0 && v11 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v17 != 0 && v15 != 0 || v11 == 0 && *(v15) != 0 && v17 != 0 && v15 != 0)
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
                                        v9 = &g_40c917;
                                        v10 = (tmp_10 == 0? &g_40c917 : tmp_10);
                                        free(NULL);
                                        sub_40a630();
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
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40c917 : tmp_10);
                            sub_40a630();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (unknown)
                    {
                        v9 = &g_40c917;
                    }
                    else if (unknown)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40c917;
            free(v17);
        }
        *((char *[2])&g_60f4d8[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40c917 : tmp_10), v9);
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
    char field_10;
} struct_0;

int sub_409580()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

// int sub_402fb0()

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

int sub_4063f0()
{
    void tmp_10;  // tmp #10
    unsigned long long v1;  // rdx
    struct v2;  // rbx
    unsigned int v3;  // edi
    unsigned long long v4;  // rax
    unsigned long long v5[3];  // rbp
    struct v6;  // r12
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
            v6 = (unsigned long long)(unsigned int)sub_409d40();
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
        if ((v6 == 0 || v5 == 0) && (v5 == 0 || v5 != v6))
        {
            return 0;
        }
    }
    else
    {
        v4 = sub_408be0();
        if (v4 != 0)
        {
            v2->field_0 = v2;
            v2->field_70 = 2;
            return v4;
        }
    }
    if ((v4 == 0 || ((unsigned short)v3 & 258) != 0) && (((unsigned short)v3 & 258) == 0 || v5 != 0) && (((unsigned short)v3 & 258) == 0 || v5 == v6 || v6 != 0))
    {
        return 1;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4097e0()
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
    if ((v4[8] == 0 || v4[4] == 0 || *(v4) < v4[1]) && v12 < v11)
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

int sub_408a90()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408420();
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

int sub_409f60()
{
    struct v1;  // rdi
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

int sub_40a7f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40a830();
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_60f358;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403510()
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
        g_60f358 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_405a90()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax;
}

int sub_4059d0()
{
    unsigned long long v1;  // rax

    v1 = fts_open();
    if (v1 != 0)
    {
        return v1;
    }
    else if (*(__errno_location()) != 22)
    {
        sub_405990(); /* do not return */
    }
    __assert_fail(); /* do not return */
}

extern int512_t g_40b686;
extern int512_t g_40b68a;

int sub_4035b0()
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
        v3 = sub_40a020();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40b686 : 4241041);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40b68a : 4241037);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[5] == 0 && v1 == v2 && (v3[1] & 223) == 84 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 && v3[4] == 56 || v4 == 71 && v3[3] == 56 && (v3[1] & 223) == 66 && v1 == v2 && v3[4] == 48 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

// int sub_4050e0()

int sub_408b70()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40a630();
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_405a70()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

int sub_4057e0()
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
        sub_405990(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_409170()
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
            if (*(v2) == 0 || v2[1] == 0)
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

int sub_4058f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405740();
}

int sub_409d40()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_409ac0();
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

extern unsigned int g_40b67e;

int sub_405150()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v3[2];  // rax
    unsigned long v4;  // rdi

    v3 = __lxstat(0x1, 0x40b67e, (unsigned int)&v0);
    if (v3 == 0)
    {
        v3[0] = v1;
        v3[1] = *((long long *)&v0);
        return v4;
    }
    return 0;
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    char padding_18[32];
    unsigned long long field_38;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_405c80()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3[8];  // rdi
    struct v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long v6[2];  // rdi
    unsigned long long v7[2];  // rdx
    struct v8;  // rbx
    unsigned long long v9[2];  // r8
    unsigned long long v11[2];  // rdx
    struct v12;  // rsi
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdi
    struct v15;  // rdx

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

int sub_405e60()
{
    unsigned long long v1;  // rax

    while (true)
    {
        v1 = sub_409f80();
        if (v1 == 0)
        {
            close(sub_409fd0());
        }
        else
        {
            return v1;
        }
    }
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

int sub_409d80()
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
    if (sub_408e00() != 0)
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
                sub_408f20();
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
                    if (sub_4098c0() == 0)
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

typedef struct struct_0 {
    char padding_0[28];
    char field_1c;
} struct_0;

int sub_409f80()
{
    struct v1;  // rdi

    return (unsigned long long)v1->field_1c;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[56];
    unsigned int field_48;
    char field_49;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[56];
    unsigned int field_48;
    char field_49;
} struct_3;

int fts_children()
{
    struct v1;  // rdi
    struct v2;  // rbx
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
                    sub_405e10();
                }
                if (v4 == 0x2000)
                {
                    v2->field_48 = v2->field_48 | 0x2000;
                }
                if (v1->field_0->field_58 == 0 && *(v1->field_0->field_30) != 47 && ((char)v1->field_48 & 4) == 0)
                {
                    v6 = sub_4061d0();
                    v7 = v6;
                    if ((unsigned int)v6 >= 0)
                    {
                        v2->field_8 = (unsigned int)sub_406540();
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
                            sub_406030();
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
                if (*(v1->field_0->field_30) == 47 || ((char)v1->field_48 & 4) != 0 || v1->field_0->field_58 != 0)
                {
                    v8 = sub_406540();
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

extern unsigned int g_60f2d4;
extern unsigned int g_60f2d8;
extern unsigned int g_60f2dc;
extern unsigned int g_60f4a0;
extern unsigned int g_60f4a4;
extern unsigned int g_60f4a8;
extern unsigned long long g_60f4b0;
extern unsigned long long g_60f4e8;

int sub_4089f0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60f4a0 = g_60f2dc;
    g_60f4a4 = g_60f2d8;
    v1 = (unsigned int)v2;
    v0 = &g_60f4a0;
    g_60f2dc = g_60f4a0;
    g_60f4e8 = g_60f4b0;
    g_60f2d4 = g_60f4a8;
    return sub_408420();
}

// int sub_404fa0()

extern int512_t g_60f460;

int sub_404ac0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60f460 : v1));
}

int sub_404e70()
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
    return sub_4048e0();
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

extern unsigned int g_40c7f0;
extern unsigned int g_40c810;
extern unsigned int g_40c840;
extern unsigned int g_40c860;
extern unsigned int g_40c890;
extern unsigned long long stderr;

int sub_407e00()
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
    if (*(v9->field_20) == 0 || *(v9->field_20) == 61)
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
                            else if (*((int *)(v18 + 24)) != *((int *)(v26 + 24)) || *((int *)(v18 + 8)) != *((int *)(v26 + 8)) || v28 != 0 || *((long long *)(v18 + 16)) != *((long long *)(v26 + 16)))
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
                                dcgettext(0x0, 0x40c7f0, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40c810, 0x5);
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
            if ((*(v18) == 0 || v21 == 0) && (*(v18) == 0 || v22 == v16) && (v21 == 0 || v4 == 0) && (v21 == 0 || v1 == 0) && (v4 == 0 || v22 == v16) && (v1 == 0 || v22 == v16))
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
                                dcgettext(0x0, 0x40c890, 0x5);
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
                            dcgettext(0x0, 0x40c860, 0x5);
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
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v17) != 0))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x40c840, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x50]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // r15
    void *v18;  // rax
    unsigned long long v19[14];  // rcx
    unsigned long long v20;  // r12
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rax
    struct v24;  // rax
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
                    *((int *)(v9 + 72)) = rax | 4;
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
                v1 = sub_406100();
                if (v1 != 0)
                {
                    v17 = *(v15);
                    if (*(v15) != 0)
                    {
                        v18 = sub_405d80();
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
                                if (v20 != 0 && v1 != 0)
                                {
                                    *((long long *)&((char *)&g_a8)[v20]) = 2;
                                    *((unsigned long long **)&((char *)&g_70)[v20]) = &g_8;
                                    if (v10 == 0)
                                    {
                                        *((long long *)&((char *)&g_10)[v20]) = 0;
                                    }
                                }
                                if (v20 == 0 || v1 == 0)
                                {
                                    *((unsigned short *)&((char *)&g_70)[v20]) = sub_405ad0();
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
                                    v20 = (unsigned int)sub_405d80();
                                }
                                if (v10 == 0 && (v20 != 0 || v20 != 0) && (v20 != 0 || v1 != 0))
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
                                v20 = (unsigned int)sub_405c80();
                            }
                            if (v15[v21] == 0 && v20 != 0)
                            {
                                v24 = sub_405d80();
                                *((struct_0 **)v9) = v24;
                            }
                            else
                            {
                                sub_405e10();
                                free(v0);
                            }
                        }
                        if ((*(v15) == 0 || v17 == 0) && (v10 == 0 || v17 == 0))
                        {
                            v20 = 0;
                        }
                        if ((*(v15) == 0 || v17 == 0 || v24 != 0) && (v10 == 0 || v17 == 0 || v24 != 0))
                        {
                            v24 = sub_405d80();
                            *((struct_0 **)v9) = v24;
                        }
                        if (v24 != 0)
                        {
                            *((unsigned long long *)(v24 + &g_10)) = v20;
                            *((unsigned long long **)(v24 + &g_70)) = &g_8;
                            v25 = sub_406170();
                            if (v25 != 0)
                            {
                                if (((unsigned short)*((int *)(v9 + 72)) & 516) == 0)
                                {
                                    v27 = sub_4061d0();
                                    *((unsigned long long *)(v9 + 40)) = v27;
                                    if (v27 < 0)
                                    {
                                        *((int *)(v9 + 72)) = *((int *)(v9 + 72)) | 4;
                                    }
                                }
                                sub_409f60();
                            }
                        }
                        if (v25 == 0 || v24 == 0)
                        {
                            sub_405e10();
                            free(v0);
                        }
                    }
                    if ((v18 == 0 || v25 == 0 || v24 == 0) && (v25 == 0 || v24 == 0 || *(v15) != 0))
                    {
                        free(*((long long *)(v9 + 32)));
                    }
                }
                if (v25 == 0 || v24 == 0 || v1 == 0 || v18 == 0 && *(v15) != 0)
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
    char padding_0[80];
    struct struct_1 *field_50;
    char padding_58[32];
    unsigned long long field_78;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int sub_405ea0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    struct v6;  // rdi
    unsigned long long v7;  // r12
    struct v8;  // rax
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
            v7 = (unsigned int)sub_4095a0();
            v6->field_50->field_50 = v7;
            if (v7 == 0)
            {
                v9 = fstatfs(v6->field_50->field_2c, (unsigned int)&v0);
            }
        }
        if (v6->field_50->field_50 != 0 || v7 != 0)
        {
            v0 = v6->field_78;
            v8 = sub_409330();
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
                        v16 = sub_409d40();
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
            if ((v10 == 0 || v8 != 0) && (v13 == 0 || v16 == 0 || v8 != 0))
            {
                v19 = v1;
                v20 = v2;
                return v14;
            }
        }
    }
    if ((v6->field_50->field_49 & 2) == 0 || v6->field_50->field_50 == 0 && v7 == 0 && v9 != 0 || v8 == 0 && v6->field_50->field_50 != 0 && v10 != 0 || v8 == 0 && v7 != 0 && v10 != 0)
    {
        v11 = v1;
        v12 = v2;
        return 0;
    }
    if (v9 == 0 && v6->field_50->field_50 == 0 && v7 == 0 && (v6->field_50->field_49 & 2) != 0 || v8 == 0 && v13 == v16 && v10 == 0 && v13 != 0 && v16 != 0 && (v6->field_50->field_49 & 2) != 0 && (v6->field_50->field_50 != 0 || v7 != 0))
    {
        v17 = v1;
        v18 = v2;
        return v0;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_408be0()
{
    void tmp_9;  // tmp #9
    unsigned long v0;  // [bp-0x8]
    struct v2;  // rdi
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
            if (*(v5) != v2->field_8 || v2->field_0 != v5[1])
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
        if (v2->field_10 == 0 || (v3 + 1 & v3) == 0 && *(v5) != v2->field_8 && v2->field_10 + 1 != 0 || (v3 + 1 & v3) == 0 && v2->field_0 != v5[1] && v2->field_10 + 1 != 0)
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

int sub_408ad0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408420();
}

extern int512_t g_60f460;

int sub_404b70()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60f460 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4036b0();
}

int sub_404e00()
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
    return sub_4048e0();
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_408bd0()
{
    struct v1;  // rdi
    unsigned long v2;  // rax

    v1->field_10 = 0;
    v1->field_18 = 9827862;
    return v2;
}

extern char g_60f348;

int sub_402d80()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60f348 = v1;
    return v2;
}

int sub_408dc0()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_405970()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

// int sub_404ce0()

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
    struct v1;  // rdi
    struct v2;  // rbp
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
        sub_405e10();
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
            if (((unsigned int)v12 == 0 || v8 == 0) && (v8 == 0 || v13 != 0) && (v8 != 0 || v10 != 0))
            {
                v12 = *(v11);
            }
        }
    }
    if (v9 == 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || ((char)(v2->field_48 >> 8) & 2) == 0 && (v6 & 4) != 0 || v2->field_2c < 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || ((char)(v2->field_48 >> 8) & 2) == 0 && v8 == 0 && v10 == 0)
    {
        v12 = 0;
    }
    sub_405e60();
    if (v2->field_50 != 0)
    {
        sub_4097e0();
    }
    v16 = v2->field_58;
    if (!(((unsigned short)v2->field_48 & 258) != 0))
    {
        free(v16);
    }
    else if (v16 != 0)
    {
        sub_4097e0();
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

// int sub_405090()

int sub_407d20()
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

int sub_408cb0()
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

extern char g_60f460;

int sub_404b40()
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
    v3 = (v2 == 0? &g_60f460 : v2);
    *((int *)(tmp_11? &g_60f460 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60f460;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60f460;
        abort(); /* do not return */
    }
}

// int sub_40a890()

int sub_408db0()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
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

int sub_4098c0()
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
                v2 = (unsigned int)sub_408d10();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_408fa0();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_408fa0();
                    if (v22 != 0)
                    {
                        v23 = sub_408fa0();
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
    if (v11->field_28->field_10 == 0 && ((char)(INVALID_IR) & 1) == 0 || ((char)(INVALID_IR) & 1) == 0 && *((long long *)&v2) == 0 || ((char)(INVALID_IR) & 1) == 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || v11->field_28->field_10 != 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || v0 == 0 && ((char)(INVALID_IR) & 1) == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_10 != *((long long *)&v2) && v11->field_28->field_10 != 0)
    {
        v21 = 0;
    }
    if ((char)v21 != 0 || v11->field_10 != *((long long *)&v2))
    {
        v24 = v21;
        return v24;
    }
}

typedef struct struct_2 {
    char padding_0[44];
    unsigned int field_2c;
} struct_2;

typedef struct struct_1 {
    char padding_0[56];
    unsigned long long field_38;
    char padding_40[48];
    unsigned short field_70;
} struct_1;

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
    char padding_88[8];
    unsigned int field_90;
} struct_0;

extern unsigned int g_40a9e4;
extern unsigned int g_40aa1f;
extern unsigned int g_40aa38;
extern unsigned int g_40aa49;
extern unsigned int g_40aa83;
extern unsigned int g_40aa9e;
extern unsigned int g_40aabb;
extern unsigned int g_40afa0;
extern unsigned int g_40b088;
extern unsigned int g_40b0a8;
extern unsigned int g_40b0d0;
extern unsigned int g_40b190;
extern unsigned int g_40b1c0;
extern unsigned int g_40b200;
extern unsigned int g_40b238;
extern unsigned int g_40b270;
extern unsigned int g_40b298;
extern unsigned int g_40b2d0;
extern unsigned int g_40b310;
extern unsigned int g_40c917;
extern unsigned int g_60f250;
extern unsigned int g_60f2dc;
extern unsigned long long g_60f330[2];
extern char g_60f338;
extern char g_60f339;
extern char g_60f33a;
extern unsigned int g_60f33c;
extern unsigned long long g_60f340;
extern unsigned long long g_60f4e8;

int main()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    unsigned int v2;  // [bp-0x110]
    unsigned int v3;  // [bp-0x10c]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x108]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x100]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0xf8]
    unsigned long v7;  // [bp-0xf0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0xe0]
    char v9;  // [bp-0xca]
    char v10;  // [bp-0xc8]
    char v11;  // [bp-0xbe]
    unsigned int v12;  // [bp-0xb0]
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v16;  // r13
    unsigned long long *v17;  // rsi
    unsigned long long *v18;  // rbx
    unsigned long long v21;  // rax
    unsigned int v22;  // eax
    unsigned long long v23;  // r12
    unsigned long long v26;  // rcx
    unsigned long long v27;  // r9
    unsigned long long *v30;  // rax
    unsigned long long *v32;  // rdx
    unsigned long v34;  // rdi
    unsigned long v36;  // rsi
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rbp
    unsigned long long v41;  // r12b
    unsigned long long v42;  // cc_dep1
    struct v44;  // rbp
    unsigned long long v45;  // rbx
    char *v46;  // r12
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v51;  // r15
    unsigned long long v52;  // r15
    unsigned long long v53;  // r12
    unsigned long long v54;  // r15
    unsigned int v56;  // r15d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v57;  // rax
    unsigned long long v58;  // r12
    unsigned long long v59;  // r15
    unsigned long long v60;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v61;  // r15
    unsigned long long v62;  // r12
    unsigned long long v64;  // rax
    unsigned long long v65;  // r15
    unsigned int v67;  // eax
    unsigned long long v70;  // r15
    unsigned long long v85;  // r12
    unsigned long long v87;  // ebx
    struct v88;  // rax
    struct v89;  // r13
    unsigned long long v91;  // rbx

    v14 = 0;
    v15 = 0;
    v16 = 0;
    v23 = 0;
    v18 = v17;
    v8 = 0;
    sub_403510();
    setlocale(0x6, 0x40c917);
    bindtextdomain(0x40a9e4, 0x40afa0);
    textdomain(0x40a9e4);
    sub_40a910();
    g_60f338 = 0;
    g_60f339 = 0;
    g_60f33a = 0;
    while (true)
    {
        v21 = sub_408a70();
        if ((unsigned int)v21 == -1)
        {
            if (!(v14 != 0))
            {
                v30 = (long long)(int)g_60f2dc;
                if (v15 != 0)
                {
                    if ((unsigned int)v34 <= g_60f2dc)
                    {
                        v32 = (long long)(int)g_60f2dc;
                    }
                }
                else
                {
                    v32 = (char *)v30 + 1;
                    v15 = *((long long *)((char *)v17 + 0x8 * v30));
                    g_60f2dc = (unsigned int)v30 + 1;
                }
                if (v15 == 0 && (unsigned int)(unsigned long long *)&((char *)v30)[1] < (unsigned int)v34 || v15 != 0 && (unsigned int)v34 > g_60f2dc)
                {
                    g_60f340 = (unsigned int)sub_402fc0();
                    if (g_60f340 != 0)
                    {
                        g_60f33c = umask(0x0);
                    }
                    else
                    {
                        v38 = (unsigned int)sub_405130();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40aa38, 0x5));
                        sub_4029c0(); /* do not return */
                    }
                }
                if (*((long long *)&((char *)((char *)v17 + 0x8 * v32))[-8]) == v15 && (v15 == 0 || (unsigned int)v34 <= g_60f2dc) && (v15 != 0 || (unsigned int)(unsigned long long *)&((char *)v30)[1] >= (unsigned int)v34) && (v15 != 0 || v17[(long long)(int)g_60f2dc] != 0))
                {
                    v37 = (unsigned int)sub_405130();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40aa1f, 0x5));
                }
            }
            else if (!(v15 == 0))
            {
                v36 = "cannot combine mode and --reference options";
            }
            else if ((unsigned int)v34 > g_60f2dc)
            {
                g_60f340 = (unsigned int)sub_403330();
                if (g_60f340 == 0)
                {
                    v39 = (unsigned int)sub_404ee0();
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40b088, 0x5));
                }
            }
            if (g_60f340 != 0 && (v15 == 0 || v14 == 0) && (v15 == 0 || (unsigned int)v34 > g_60f2dc) && (v14 == 0 || (unsigned int)v34 > g_60f2dc) && ((unsigned int)(unsigned long long *)&((char *)v30)[1] < (unsigned int)v34 || v15 != 0 || v14 != 0))
            {
                v41 = v23 & g_60f33a;
                v6 = __errno_location();
                v42 = v41;
                if ((char)v42 == 0)
                {
                    g_60f330[0] = 0;
                }
                else
                {
                    g_60f330[0] = (unsigned int)sub_405150();
                    if (g_60f330 == 0)
                    {
                        v45 = (unsigned int)sub_404ee0();
                        error(0x1, *(v6), (unsigned long long)dcgettext(0x0, 0x40b088, 0x5));
                    }
                }
                if ((char)v42 == 0 || g_60f330 != 0)
                {
                    v87 = 1;
                    v44 = (unsigned long long)(unsigned int)sub_4059d0();
                    v5 = stack_base + -199;
                    v88 = fts_read();
                    v89 = v88;
                    if (v88 != 0)
                    {
                        while (true)
                        {
                            v46 = v88->field_38;
                            if ((unsigned long long)v88->field_70 << 48 <= 0xd000000000000)
                            {
                                v47 = v88->field_70;
                                /* goto *((long long *)(v47 * 8 + 4240192)); */
                                if (*((long long *)(v47 * 8 + 4240192)) == 4202778)
                                {
                                    v48 = sub_405a20();
                                    if (v48 != 0)
                                    {
                                        v61 = 0;
                                        v53 = (unsigned int)sub_404fb0();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b0d0, 0x5));
                                    }
                                }
                                if (*((long long *)(v47 * 8 + 4240192)) == 4202474)
                                {
                                    v61 = 1;
                                }
                                if (*((long long *)(v47 * 8 + 4240192)) == 4203072)
                                {
                                    if (v89->field_58 == 0 && v89->field_20 == 0)
                                    {
                                        v89->field_20 = 1;
                                        v61 = 1;
                                        fts_set();
                                    }
                                    if (g_60f339 == 0 && (v89->field_58 != 0 || v89->field_20 != 0))
                                    {
                                        v54 = (unsigned int)sub_404ee0();
                                    }
                                }
                                if (g_60f339 == 0 && *((long long *)(v47 * 8 + 4240192)) == 4202566)
                                {
                                    v51 = (unsigned int)sub_404ee0();
                                }
                                if (*((long long *)(v47 * 8 + 4240192)) == 4203004 && g_60f339 == 0)
                                {
                                    v52 = (unsigned int)sub_404ee0();
                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b0a8, 0x5));
                                }
                                if (*((long long *)(v47 * 8 + 4240192)) == 4203160 && g_60f339 == 0)
                                {
                                    sub_404fb0();
                                    error(0x0, v89->field_40, "%s");
                                }
                                if (g_60f339 == 0 && (*((long long *)(v47 * 8 + 4240192)) == 4202566 || *((long long *)(v47 * 8 + 4240192)) == 4203072) && (*((long long *)(v47 * 8 + 4240192)) == 4202566 || v89->field_58 != 0 || v89->field_20 != 0))
                                {
                                    error(0x0, v89->field_40, (unsigned long long)dcgettext(0x0, v17, 0x5));
                                }
                            }
                            if (v89->field_78 == g_60f330[1] && v89->field_80 == *(g_60f330) && g_60f330 != 0 && (v48 == 0 || *((long long *)(v47 * 8 + 4240192)) == 4202797 || (unsigned long long)v88->field_70 << 48 > 0xd000000000000) && (*((long long *)(v47 * 8 + 4240192)) == 4202778 || *((long long *)(v47 * 8 + 4240192)) == 4202797 || (unsigned long long)v88->field_70 << 48 > 0xd000000000000))
                            {
                                if (strcmp(v46, "/") == 0)
                                {
                                    v58 = (unsigned int)sub_404ee0();
                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b190, 0x5));
                                }
                                else
                                {
                                    v59 = (unsigned int)sub_404e00();
                                    v60 = (unsigned int)sub_404e00();
                                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b1c0, 0x5));
                                }
                                v61 = 0;
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b200, 0x5));
                                fts_set();
                                fts_read();
                            }
                            if (g_60f330 == 0 && *((long long *)(v47 * 8 + 4240192)) == 4202797 || g_60f330 == 0 && (unsigned long long)v88->field_70 << 48 > 0xd000000000000 || *((long long *)(v47 * 8 + 4240192)) == 4202797 && v89->field_78 != g_60f330[1] || *((long long *)(v47 * 8 + 4240192)) == 4202797 && v89->field_80 != *(g_60f330) || v48 == 0 && *((long long *)(v47 * 8 + 4240192)) == 4202778 && g_60f330 == 0 || v89->field_78 != g_60f330[1] && (unsigned long long)v88->field_70 << 48 > 0xd000000000000 || v89->field_80 != *(g_60f330) && (unsigned long long)v88->field_70 << 48 > 0xd000000000000 || v48 == 0 && *((long long *)(v47 * 8 + 4240192)) == 4202778 && v89->field_78 != g_60f330[1] || v48 == 0 && *((long long *)(v47 * 8 + 4240192)) == 4202778 && v89->field_80 != *(g_60f330))
                            {
                                v4 = v89->field_30;
                                v56 = v89->field_90 & 0xf000;
                                v3 = v89->field_90;
                                v2 = sub_403390();
                                if (v56 != 0xa000)
                                {
                                    v57 = fchmodat(v44->field_2c, v4);
                                    if (v57 == 0)
                                    {
                                        if (g_60f250 != 2)
                                        {
                                            v57 = v2;
                                            if (((char)(v2 >> 8) & 14) != 0)
                                            {
                                                v64 = __fxstatat(0x1, v44->field_2c, v4, (unsigned int)&v10, 0x0);
                                                if (v64 == 0)
                                                {
                                                    v57 = v12;
                                                }
                                                else if (g_60f339 == 0)
                                                {
                                                    v70 = (unsigned int)sub_404ee0();
                                                    error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x40aa9e, 0x5));
                                                }
                                            }
                                            if (v64 == 0 || ((char)(v2 >> 8) & 14) == 0)
                                            {
                                                v67 = v57 ^ v3;
                                                if (((unsigned short)v67 & 4095) != 0)
                                                {
                                                    sub_402e30();
                                                    v9 = 0;
                                                    sub_402e30();
                                                    v11 = 0;
                                                    sub_404ee0();
                                                    v1 = 4;
                                                    v0 = stack_base + -211;
                                                    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b298, 0x5));
                                                }
                                            }
                                            if (g_60f250 == 0 && (((unsigned short)v67 & 4095) == 0 || v64 != 0) && (((unsigned short)v67 & 4095) == 0 || ((char)(v2 >> 8) & 14) != 0))
                                            {
                                                sub_402e30();
                                                v9 = 0;
                                                sub_402e30();
                                                v11 = 0;
                                                sub_404ee0();
                                                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b310, 0x5));
                                            }
                                        }
                                        v61 = g_60f338;
                                        if (g_60f338 != 0 && (!((int)(stack_base)[-264]) & v2) != 0)
                                        {
                                            v4 = sub_403390();
                                            v61 = 0;
                                            sub_402e30();
                                            sub_402e30();
                                            v11 = 0;
                                            v9 = 0;
                                            v85 = (unsigned int)sub_404fb0();
                                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b270, 0x5));
                                        }
                                    }
                                    else if (g_60f339 == 0)
                                    {
                                        v65 = (unsigned int)sub_404ee0();
                                        error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x40aa83, 0x5));
                                    }
                                }
                                else if (g_60f250 == 0)
                                {
                                    v61 = 1;
                                    v62 = (unsigned int)sub_404ee0();
                                    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b238, 0x5));
                                }
                            }
                            if (unknown)
                            {
                                if (g_60f250 == 2 || g_60f250 != 0)
                                {
                                    v61 = 0;
                                }
                                if (g_60f250 == 0)
                                {
                                    sub_402e30();
                                    v9 = 0;
                                    sub_402e30();
                                    v11 = 0;
                                    sub_404ee0();
                                    v1 = 5;
                                    v61 = 0;
                                    v0 = stack_base + -211;
                                    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b2d0, 0x5));
                                }
                            }
                            if (unknown)
                            {
                                v61 = 1;
                            }
                            if (unknown)
                            {
                                fts_set();
                            }
                            v87 &= v61;
                            v88 = fts_read();
                            v89 = v88;
                            if (v88 == 0)
                            {
                                break;
                            }
                        }
                    }
                    if (*(v6) != 0)
                    {
                        v87 = g_60f339;
                        if (g_60f339 != 0)
                        {
                            v87 = 0;
                        }
                        else
                        {
                            error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x40aa49, 0x5));
                        }
                    }
                    if (fts_close() != 0)
                    {
                        v87 = 0;
                        error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x40aabb, 0x5));
                    }
                    v91 = v87 ^ 1;
                    return v91;
                }
            }
        }
        else if ((unsigned int)v21 != 99)
        {
            if (v21 > 99)
            {
                if ((unsigned int)v21 == 118)
                {
                    g_60f250 = 0;
                }
                else if (v21 > 118)
                {
                    if ((unsigned int)v21 == 128)
                    {
                        v23 = 0;
                    }
                    else if (v21 > 128)
                    {
                        if ((unsigned int)v21 == 129)
                        {
                            v23 = 1;
                        }
                        if ((unsigned int)v21 == 130)
                        {
                            v14 = g_60f4e8;
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v21 != 111 && v21 <= 111 && (unsigned int)v21 == 102)
                    {
                        g_60f339 = 1;
                    }
                }
            }
            else
            {
                if ((unsigned int)v21 <= 55)
                {
                    if ((unsigned int)v21 < 48)
                    {
                        if ((unsigned int)v21 == -130)
                        {
                            sub_4029c0(); /* do not return */
                        }
                        else if (v21 > -18446744069414584450)
                        {
                            v22 = (unsigned int)v21 - 43;
                        }
                        else if ((unsigned int)v21 == -131)
                        {
                            v0 = 0;
                            sub_405600();
                            exit(0x0); /* do not return */
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v21 == 82)
                    {
                        g_60f33a = 1;
                    }
                }
            }
        }
        if ((unsigned int)v21 == 99)
        {
            g_60f250 = 1;
        }
        if ((unsigned int)v21 == -1 && v14 == 0 && (v15 == 0 || (unsigned int)v34 <= g_60f2dc) && (v15 != 0 || (unsigned int)(unsigned long long *)&((char *)v30)[1] >= (unsigned int)v34) && (v15 != 0 || v17[(long long)(int)g_60f2dc] != 0) && *((long long *)&((char *)((char *)v17 + 0x8 * v32))[-8]) != v15 || v15 == 0 && (unsigned int)v21 == -1 && v14 == 0 && (unsigned int)(unsigned long long *)&((char *)v30)[1] >= (unsigned int)v34 && v17[(long long)(int)g_60f2dc] == 0 || v15 == 0 && (unsigned int)v21 == -1 && v14 != 0 && (unsigned int)v34 <= g_60f2dc)
        {
            v36 = "missing operand";
        }
        if ((unsigned int)v21 == -1 && v14 == 0 && (v15 == 0 || (unsigned int)v34 <= g_60f2dc) && (v15 != 0 || (unsigned int)(unsigned long long *)&((char *)v30)[1] >= (unsigned int)v34) && (v15 != 0 || v17[(long long)(int)g_60f2dc] != 0) && *((long long *)&((char *)((char *)v17 + 0x8 * v32))[-8]) != v15 || v15 == 0 && (unsigned int)v21 == -1 && v14 == 0 && (unsigned int)(unsigned long long *)&((char *)v30)[1] >= (unsigned int)v34 && v17[(long long)(int)g_60f2dc] == 0 || v15 == 0 && (unsigned int)v21 == -1 && v14 != 0 && (unsigned int)v34 <= g_60f2dc || (unsigned int)v21 == -1 && v15 != 0 && v14 != 0)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v36, 0x5));
        }
        if ((unsigned int)v21 <= 55 && v21 <= 99 && (unsigned int)v21 != -1 && (unsigned int)v21 >= 48 && (unsigned int)v21 != 99 || (unsigned int)v21 == 111 && v21 <= 118 && (unsigned int)v21 != -1 && (unsigned int)v21 != 99 && v21 > 99 && (unsigned int)v21 != 118 || (unsigned int)v21 == 61 && v21 <= 82 && v21 <= 99 && (unsigned int)v21 != 82 && (unsigned int)v21 > 55 && (unsigned int)v21 != -1 && (unsigned int)v21 != 99 || v21 <= 99 && (unsigned int)v21 == 88 && (unsigned int)v21 != 82 && (unsigned int)v21 > 55 && (unsigned int)v21 != -1 && v21 > 82 && (unsigned int)v21 != 99 || (unsigned int)v21 <= 55 && (unsigned int)v21 < 48 && v22 <= 1 && v21 <= 99 && (unsigned int)v21 != -1 && v21 > -18446744069414584450 && (unsigned int)v21 != 99 && (unsigned int)v21 != -130 || (unsigned int)v21 == 97 && v21 <= 99 && (unsigned int)v21 != 82 && (unsigned int)v21 > 55 && (unsigned int)v21 != -1 && v21 > 82 && (unsigned int)v21 != 99 && (unsigned int)v21 != 88 || (unsigned int)v21 <= 120 && v21 <= 128 && (unsigned int)v21 != 128 && (unsigned int)v21 != -1 && (unsigned int)v21 != 99 && v21 > 99 && (unsigned int)v21 != 118 && v21 > 118 || v21 <= 118 && (unsigned int)v21 != -1 && (unsigned int)v21 >= 114 && (unsigned int)v21 != 111 && (unsigned int)v21 != 99 && v21 > 99 && v21 > 111 && (unsigned int)v21 != 118 || (unsigned int)v21 == 103 && v21 <= 111 && v21 <= 118 && (unsigned int)v21 != -1 && (unsigned int)v21 != 111 && (unsigned int)v21 != 99 && v21 > 99 && (unsigned int)v21 != 102 && (unsigned int)v21 != 118)
        {
            v4 = v18[(long long)(int)g_60f2dc + -1];
            v26 = rcx + v16;
            v27 = v7 + v6;
            if (v8 <= v7 + v6)
            {
                v7 = strlen(v18[(long long)(int)g_60f2dc + -1]);
                v6 = v26;
                v5 = v4;
                v4 = v27;
                v8 = v27 + 1;
                v15 = (unsigned int)sub_4058a0();
                v27 = v4;
            }
            *((char *)(v15 + v16)) = 44;
            v4 = v27;
            memcpy(v15 + v6, v5, v7 + 1);
            g_60f338 = 1;
            v16 = v4;
        }
        if (unknown)
        {
            sub_4029c0(); /* do not return */
        }
    }
}

int sub_405600()
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
        return sub_4051a0();
    }
}

int sub_409330()
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
        v6 = sub_408dd0();
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

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_409110()
{
    struct v1;  // rdi

    return v1->field_20;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60f2b8;
extern uint128_t g_60f2c0;
extern unsigned int g_60f2d0;
extern int512_t g_60f360;

int sub_4048e0()
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
    v17 = g_60f2b8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60f2d0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60f2b8 != 6353600)
            {
                v16 = sub_4057a0();
                g_60f2b8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4057a0();
                v17 = v15;
                g_60f2b8 = v15;
                *(v15) = g_60f2c0;
            }
            memset(&v17[(long long)(int)g_60f2d0], 0x0, (int)((unsigned int)v13 + 1 - g_60f2d0) * 16);
            g_60f2d0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405990(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_60f2d0 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4036b0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6353760)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_405740();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4036b0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_405fc0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    char v4;  // dl
    unsigned int v5;  // edx
    char v6;  // dl

    v1 = sub_405ea0();
    if (v1 != 40864)
    {
        if (!(v1 > 40864))
        {
            v2 = 0;
            if (v1 != 0)
            {
                v3 = 0;
                v4 = v1 != 26985;
                return rdx;
            }
        }
        else if (v1 != 1397113167)
        {
            v2 = 2;
            if (v1 != 1481003842)
            {
                v5 = 0;
                v6 = v1 == 1382369651;
                v2 = (unsigned long long)(unsigned int)rdx + 1;
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

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_409100()
{
    struct v1;  // rdi

    return v1->field_18;
}

int sub_4059bc()
{
    abort(); /* do not return */
}

extern uint128_t g_60f460;
extern uint128_t g_60f470;
extern uint128_t g_60f480;
extern unsigned long long g_60f490;

int sub_404eff()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60f490;
    *((uint128_t *)&v0) = g_60f460;
    *((uint128_t *)&v1) = g_60f470;
    *((uint128_t *)&v2) = g_60f480;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4048e0();
}

// int sub_404d90()

extern uint128_t g_60f460;
extern uint128_t g_60f470;
extern uint128_t g_60f480;
extern unsigned long long g_60f490;

int sub_405020()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60f460;
    *((uint128_t *)&v1) = g_60f470;
    *((uint128_t *)&v2) = g_60f480;
    v4 = g_60f490;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4048e0();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

extern unsigned int g_40b525;
extern unsigned int g_60f260;
extern char g_60f348;
extern unsigned long long g_60f350;

int sub_402d90()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_408b70();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60f348 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40b525, 0x5);
            if (g_60f350 != 0)
            {
                sub_404f80();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60f348 != 0)
    {
        v3 = sub_408b70();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_60f348 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60f260);
        error(0x0, *(v2), "%s");
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

extern unsigned int g_40c8b8;
extern unsigned int g_40c8fc;

int sub_408420()
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
    unsigned long v15;  // r12
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
undefined v24;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // rdx
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
    unsigned int v40;  // eax
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
    char v53[3];  // r8
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char *v58;  // rax
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
        if (v0->field_18 == 0 || (unsigned int)v17 == 0)
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
                if (v23 != 0 || v9 != 0)
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
        if (v0->field_18 == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)
        {
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13);
        }
        if (v19[0] == 0 || v0->field_18 == 0 && v19 == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && v0->field_18 != 0 && (unsigned int)v17 != 0)
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
                        sub_407d20();
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
                            v26 = v0->field_0;
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
                            sub_407d20();
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_407e00();
        if ((unsigned int)v45 == -1)
        {
            v48 = *((long long *)(v15 + (int)v0->field_0 * 8));
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
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40c8b8, 0x5);
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
            dcgettext(0x0, 0x40c8fc, 0x5);
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
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40c8b8, 0x5);
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
        v45 = (unsigned int)sub_407e00();
    }
    v63 = v45;
    return v63;
}

int sub_406100()
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

int sub_4060a0()
{
    unsigned int v1[19];  // rdi
    char v4;  // bpl

    if (((char)v1[9] & 4) == 0)
    {
        if (((char)(v1[9] >> 8) & 2) != 0)
        {
            sub_406030();
        }
        else
        {
            v4 = fchdir(v1[5]) != 0;
        }
    }
    sub_405e60();
    return stack_base + 0;
}

extern unsigned long long g_60ee30;

int sub_40a928()
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
        rax();
        v1 = &v1[-1];
    }
    return v4;
}

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    struct struct_2 *field_48;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_0 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_0;

int sub_409ac0()
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
        v7 = sub_408e00();
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
            sub_408f20();
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
                    v32 = sub_4098c0();
                    if (v32 != 0)
                    {
                        v33 = sub_408e00();
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
    if (v2 == 0 || ((char)(INVALID_IR) & 1) == 0 && v7 == 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v33 != 0 && ((char)(INVALID_IR) & 1) != 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v32 != 0)
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

// int sub_404ee0()

extern int512_t g_60f460;

int sub_404b20()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60f460 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60f460 : v1) + 4)) = v3;
    return v2;
}

int sub_408d10()
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
            if (v3 != 0 && v2 > 9)
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

// int sub_404f80()

int sub_405910()
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
        sub_405990(); /* do not return */
    }
}

// int sub_4050f0()

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_409120()
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

typedef struct struct_0 {
    char padding_0[116];
    unsigned short field_74;
} struct_0;

int fts_set()
{
    unsigned long v1;  // rdx
    struct v2;  // rsi

    if ((unsigned int)v1 <= 4)
    {
        *((unsigned long *)&v2->field_74) = v1;
        return 0;
    }
    *(__errno_location()) = 22;
    return 1;
}

extern unsigned long long program_invocation_short_name;

int sub_40290b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_404dc0()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4055a0()
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
    return sub_4051a0();
}

// int sub_4050a0()

