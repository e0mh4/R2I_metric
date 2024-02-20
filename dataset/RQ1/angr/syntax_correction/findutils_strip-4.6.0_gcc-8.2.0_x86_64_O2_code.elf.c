
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
// int sub_403ef0()

int sub_401d19()
{
    abort(); /* do not return */
}

extern uint128_t g_6074a0;
extern uint128_t g_6074b0;
extern uint128_t g_6074c0;
extern unsigned long long g_6074d0;

int sub_4036bf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6074d0;
    *((uint128_t *)&v0) = g_6074a0;
    *((uint128_t *)&v1) = g_6074b0;
    *((uint128_t *)&v2) = g_6074c0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4030a0();
}

// int sub_403580()

int sub_403fe0()
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
        sub_4040d0(); /* do not return */
    }
}

extern unsigned int g_40598b;
extern unsigned int g_40598f;
extern unsigned int g_40599f;
extern unsigned int g_4059b6;
extern unsigned int g_405a18;
extern unsigned int g_405ae8;
extern unsigned int g_405b08;
extern unsigned int g_405b30;
extern unsigned int g_405b58;
extern unsigned int g_405b88;

int sub_403910()
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
        fprintf(v20, "%s (%s) ", (unsigned int)v13, v17, v18);
    }
    else
    {
        fprintf(v20, "%s %s\n", v14, v15);
    }
    fprintf(v20, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(0x0, 0x40598b, 0x5), 2015);
    fputs((unsigned long long)dcgettext(0x0, 0x405a18, 0x5), v20);
    switch (v23)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40598f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40599f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4059b6, 0x5);
        break;
    case 4:
        dcgettext(0x0, 0x405ae8, 0x5);
        break;
    case 5:
        v30 = dcgettext(0x0, 0x405b08, 0x5);
        *((unsigned long long [9])&v4) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        v30 = dcgettext(0x0, 0x405b30, 0x5);
        *((unsigned long long [9])&v5) = v11[5];
        *((unsigned long long [9])&v4) = v11[4];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        v29 = dcgettext(0x0, 0x405b58, 0x5);
        *((unsigned long long [9])&v4) = v11[6];
        *((unsigned long long [9])&v3) = v11[5];
        *((unsigned long long [9])&v2) = v11[4];
    case 8:
        *((unsigned long long [9])&v8) = v12[3];
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        v29 = dcgettext(0x0, 0x405b88, 0x5);
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

int sub_403ed0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi

    if (INVALID_IR)
    {
        v0 = v2 * v3;
        sub_4040d0(); /* do not return */
    }
}

extern unsigned int g_404abb;
extern unsigned int g_6071d8;
extern char g_607388;
extern unsigned long long g_607390;

int sub_401e50()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_404350();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_607388 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x404abb, 0x5);
            if (g_607390 != 0)
            {
                sub_403740();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_607388 != 0)
    {
        v3 = sub_404350();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_607388 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6071d8);
        error(0x0, *(v2), "%s");
    }
}

// int sub_4038b0()

int sub_402090()
{
    void tmp_2;  // tmp #2
    unsigned long long v0;  // [bp-0x1d8]
    void tmp_1;  // tmp #1
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long v3;  // [bp-0xc8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0xac]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x90]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x80]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x78]
    unsigned long long v12;  // [bp-0x70]
    unsigned long v13;  // [bp-0x68]
    unsigned int v14;  // [bp-0x60]
    char v15;  // [bp-0x5b]
    unsigned long long v16;  // [bp-0x5a]
    char v17;  // [bp-0x59]
    unsigned long long v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    char v20;  // [bp-0x44]
    unsigned long long v21;  // [bp-0x40]
    unsigned int *v22;  // [bp+0x8]
    unsigned long long v23;  // [bp+0x10]
    void *v24;  // [bp+0x18]
    unsigned long long v25;  // rdi
    unsigned long long v26;  // r15
    unsigned long v27;  // r9
    unsigned long long v28;  // rcx
    unsigned int v29;  // r8d
    unsigned long long v30;  // cc_dep1
    unsigned long long v32;  // r11
    unsigned long v33;  // r11
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // r12
    unsigned long long v38;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // r10
    unsigned long long v40;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // r8
    unsigned long long v42;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v43;  // rax
    unsigned long long v44;  // r9
    char v45;  // al
    unsigned long long v46;  // rbp
    char v47;  // bpl
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rax
    char v50;  // al
    /*INVALID_EQUAL_UNDEFINED*/
undefined v51;  // rbp
    unsigned long long v52;  // rcx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rdx
    unsigned short v56;  // dx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v57;  // rdx
    unsigned long long v58;  // rbx
    unsigned long long v59;  // r14
    unsigned long long v60;  // r12
    unsigned long long v61;  // r15
    char *v62;  // rdx
    unsigned long long v63;  // r8
    unsigned long long v64;  // rcx
    unsigned long long v65;  // rcx
    unsigned long long v67;  // rax
    unsigned long long v68;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v69;  // rax
    unsigned long long v71;  // rax
    char v72;  // al
    unsigned int v73;  // eax
    char v74;  // al
    unsigned int v76;  // eax
    char v77;  // al
    unsigned long long v79;  // rdx
    char v80;  // dl
    unsigned long long v81;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v82;  // rsi
    unsigned long long v83;  // r14
    unsigned long long v84;  // r13
    unsigned long long v85;  // rax
    char v87;  // al
    unsigned long long v88;  // rax
    unsigned long long v89;  // rax
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax

    v26 = v25;
    v83 = v82;
    v51 = (unsigned int)v27 & 2;
    v6 = v43;
    v5 = v28;
    v4 = v29;
    v14 = v27;
    v13 = __ctype_get_mb_cur_max();
    v30 = v4;
    switch (v4)
    {
    case 0:
        v15 = 0;
        v81 = 0;
        v4 = 0;
        v7 = 0;
        v12 = 0;
    case 1:
        v15 = 1;
        v81 = 0;
        v32 = 2;
        v4 = 0;
        v7 = 1;
        v12 = "'";
    case 2:
        if (((char)v27 & 2) == 0)
        {
            v4 = 0;
        }
        else
        {
            v15 = 1;
            v81 = 0;
            v4 = 0;
            v7 = 1;
            v12 = "'";
        }
    case 3:
        v15 = 1;
        v81 = 0;
        v32 = 2;
        v4 = 1;
        v7 = 1;
        v12 = "'";
    case 4:
        if (((char)v27 & 2) == 0)
        {
            v4 = 1;
            if (v82 != 0)
            {
                *((char *)v25) = 39;
            }
            v15 = 0;
            v81 = 1;
            v32 = 2;
            v7 = 1;
            v12 = "'";
        }
    case 5:
        if (((char)v27 & 2) == 0)
        {
            if (v82 != 0)
            {
                *((char *)v25) = 34;
            }
            v15 = 0;
            v81 = 1;
            v4 = 1;
            v7 = 1;
            v12 = "\"";
        }
        else
        {
            v15 = 1;
            v81 = 0;
            v4 = 1;
            v7 = 1;
            v12 = "\"";
        }
    case 6:
        v15 = 1;
        v81 = 0;
        v32 = 5;
        v4 = 1;
        v7 = 1;
        v12 = "\"";
    case 7:
        v15 = 0;
        v81 = 0;
        v4 = 1;
        v7 = 0;
        v12 = 0;
    case 8: case 9: case 10:
        if (v30 != 10)
        {
            v5 = v5;
            v4 = v33;
            v23 = (unsigned int)sub_401f90();
            v24 = (unsigned long long)(unsigned int)sub_401f90();
        }
        v81 = 0;
        if (((char)v27 & 2) == 0)
        {
            v34 = (char)*((char *)v23);
            if (*((char *)v23) != 0)
            {
                do
                {
                    if (v82 > v81)
                    {
                        *((unsigned long long *)(v25 + v81)) = v34;
                    }
                    v81 += 1;
                    v34 = (char)*((char *)(v23 + v81));
                }
                while ((char)v34 != 0);
            }
        }
        *((unsigned long *)&v8) = v33;
        v5 = v33;
        v15 = ((unsigned int)v27 & 2) != 0;
        v4 = 1;
        v7 = strlen(v24);
        v32 = v8;
        v12 = v24;
    default:
        abort(); /* do not return */
    }
    v35 = v32;
    v33 = v5;
    v39 = v35;
    v84 = 0;
    v41 = 0;
    while (true)
    {
        v51 = (char)(v40 != v84);
        if (v40 == -1)
        {
            v51 = (char)(*((char *)(v6 + v84)) != 0);
        }
        if (v51 != 0)
        {
            v44 = v6 + v84;
            v5 = (unsigned int)v39 != 2 & v4;
            if (((unsigned int)v39 != 2 & v4) != 0)
            {
                v36 = v7;
                if (v7 != 0)
                {
                    v37 = v84 + v36;
                    if (v40 == -1 && v36 > 1)
                    {
                        v10 = v39;
                        v9 = v41;
                        v8 = v44;
                        v40 = strlen(v6);
                    }
                    if (v37 <= v40)
                    {
                        v11 = v39;
                        v10 = v40;
                        v9 = v41;
                        v8 = v44;
                        v38 = memcmp(v44, v12, v7);
                        v44 = v8;
                        v41 = (char)v9;
                        v40 = v10;
                        v39 = v11;
                        if (v38 == 0 && v15 == 0)
                        {
                            v42 = (char)*((char *)v44);
                            switch (*((char *)v44))
                            {
                            case 0:
                                v43 = (char)((unsigned int)v39 == 2);
                                v49 = (unsigned int)(0 ^ 1);
                                v50 = (char)(0 ^ 1) & (unsigned int)v39 == 2;
                                if (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0)
                                {
                                    if (v81 < v82)
                                    {
                                        *((char *)(v25 + v81)) = 39;
                                    }
                                    if (v82 > v81 + 1)
                                    {
                                        *((char *)(v25 + v81 + 1)) = 36;
                                    }
                                    if (v82 > v81 + 2)
                                    {
                                        *((char *)(v25 + v81 + 2)) = 39;
                                    }
                                    v52 = v81 + 3;
                                    v81 += 4;
                                    v84 = 1;
                                    v41 = rax;
                                    v42 = 48;
                                    v41 = rax;
                                }
                                else
                                {
                                    v52 = v81;
                                    *((char *)(v25 + v52)) = 92;
                                    v81 = v52 + 1;
                                    v84 = 1;
                                    v42 = 48;
                                    v42 = 48;
                                    if (1 < v40)
                                    {
                                        v82 = v6;
                                        if (((unsigned int)(char)*((char *)(v6 + 1)) - 48 & 255) <= 9)
                                        {
                                            if (v83 > v81)
                                            {
                                                *((char *)(v25 + v81)) = 48;
                                            }
                                            if (v83 > v52 + 2)
                                            {
                                                *((char *)(v25 + v52 + 2)) = 48;
                                            }
                                            v81 = v52 + 3;
                                            v42 = 48;
                                        }
                                    }
                                }
                            case 13:
                                v42 = 13;
                                v48 = 114;
                                v43 = (unsigned int)v39 == 2;
                            case 32: case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                v43 = 0;
                            case 35: case 126:
                                v43 = 0;
                            case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                v51 = 0;
                            case 92:
                                v46 = v4;
                                v47 = v4 & v15;
                                v42 = 92;
                                v48 = 92;
                                v43 = rbp;
                                v43 = (char)rbp & v7 != 0;
                                if (((char)rbp & v7 != 0) != 0)
                                {
                                    v84 = 1;
                                    v51 = 0;
                                }
                            }
                        }
                    }
                }
                if (v7 == 0 || v38 != 0 || v37 > v40)
                {
                    v42 = (char)*((char *)v44);
                    switch (*((char *)v44))
                    {
                    case 0:
                        if (v15 == 0)
                        {
                            v5 = 0;
                        }
                    case 7:
                        v42 = 97;
                        v43 = 0;
                        break;
                    case 8:
                        v42 = 98;
                        v43 = 0;
                        break;
                    case 9:
                        v42 = 116;
                        v43 = 0;
                        break;
                    case 10:
                        v42 = 110;
                        v43 = 0;
                        break;
                    case 11:
                        v42 = 118;
                        v43 = 0;
                        break;
                    case 12:
                        v42 = 102;
                        v43 = 0;
                        break;
                        if (v15 == 0)
                        {
                            v84 += 1;
                            v79 = (unsigned int)v41 ^ 1;
                            v80 = (char)((unsigned int)v41 ^ 1) & v43;
                            if (((char)((unsigned int)v41 ^ 1) & v43) != 0)
                            {
                                if (v83 > v81)
                                {
                                    *((char *)(v26 + v81)) = 39;
                                }
                                if (v83 > v81 + 1)
                                {
                                    *((char *)(v26 + v81 + 1)) = 36;
                                }
                                if (v83 > v81 + 2)
                                {
                                    *((char *)(v26 + v81 + 2)) = 39;
                                }
                                v81 += 3;
                                v41 = rdx;
                            }
                            if (v81 < v83)
                            {
                                *((char *)(v26 + v81)) = 92;
                            }
                            v81 += 1;
                        }
                    case 13:
                        v5 = 0;
                    case 32: case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v5 = 0;
                    case 35: case 126:
                        v5 = 0;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v5 = 0;
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
                v42 = (char)*((char *)v44);
                switch (*((char *)v44))
                {
                case 0:
                    if (v4 == 0)
                    {
                        v84 += 1;
                        v84 += 1;
                        v51 = v41;
                        v42 = 0;
                        v51 = 0;
                        v42 = 0;
                        v5 = 0;
                        v42 = 0;
                        v82 = v22;
                        v43 = (unsigned int)v39 == 2;
                        v43 = (unsigned int)v39 == 2;
                        v84 += 1;
                        v51 = (v51 ^ 1) & (unsigned int)v41;
                    }
                case 7:
                    v42 = 7;
                    v48 = 97;
                    v43 = (unsigned int)v39 == 2;
                case 8:
                    v42 = 8;
                    v48 = 98;
                    v43 = (unsigned int)v39 == 2;
                case 9:
                    v42 = 9;
                    v48 = 116;
                case 10:
                    v42 = 10;
                    v48 = 110;
                    v43 = (unsigned int)v39 == 2;
                    v5 = v15 & (unsigned int)v39 == 2;
                    if ((v15 & (unsigned int)v39 == 2) != 0)
                    {
                        tmp_2 = v39;
                    }
                case 11:
                    v42 = 11;
                    v48 = 118;
                    v43 = (unsigned int)v39 == 2;
                case 12:
                    v42 = 12;
                    v48 = 102;
                    v43 = (unsigned int)v39 == 2;
                    if (v4 == 0)
                    {
                        v51 = ((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1;
                        v51 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1) | v15;
                        v84 += 1;
                        v51 = (v51 ^ 1) & (unsigned int)v41;
                        v43 = (unsigned int)v39 == 2;
                        if (v51 != 0)
                        {
                            if (v81 < v83)
                            {
                                *((char *)(v26 + v81)) = 39;
                            }
                            if (v83 > v81 + 1)
                            {
                                *((char *)(v26 + v81 + 1)) = 39;
                            }
                            v81 += 2;
                            v41 = 0;
                        }
                    }
                    else
                    {
                        v43 = v43;
                        v42 = v48;
                    }
                case 13:
                    v42 = 13;
                    v48 = 114;
                case 32: case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                    v43 = (char)((unsigned int)v39 == 2);
                case 35: case 126:
                    v43 = (unsigned int)v39 == 2;
                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                    v43 = (char)((unsigned int)v39 == 2);
                    break;
                case 39:
                    v43 = 0;
                    v42 = 39;
                    if ((unsigned int)v39 == 2)
                    {
                        if (v81 < v82)
                        {
                            *((char *)(v25 + v81)) = 39;
                        }
                        if (v82 > v81 + 1)
                        {
                            *((char *)(v25 + v81 + 1)) = 92;
                        }
                        if (v82 > v81 + 2)
                        {
                            *((char *)(v25 + v81 + 2)) = 39;
                        }
                        v81 += 3;
                        v84 = 1;
                        v41 = 0;
                        v42 = 39;
                    }
                case 63:
                    if ((unsigned int)v39 != 2)
                    {
                        v42 = 63;
                        v43 = (char)((unsigned int)v39 == 2);
                        break;
                        v43 = 0;
                        v42 = 63;
                        break;
                        v43 = 0;
                        v42 = 63;
                        v82 = v6;
                        v42 = (char)*((char *)(v82 + 2));
                        v82 = 0x7000a38200000000;
                        v0 = 0x7000a38200000000;
                        v42 = 63;
                        break;
                        if (v81 < v83)
                        {
                            *((char *)(v25 + v81)) = 63;
                        }
                        if (v83 > v81 + 1)
                        {
                            *((char *)(v25 + v81 + 1)) = 34;
                        }
                        if (v83 > v81 + 2)
                        {
                            *((char *)(v25 + v81 + 2)) = 34;
                        }
                        if (v83 > v81 + 3)
                        {
                            *((char *)(v25 + v81 + 3)) = 63;
                        }
                        v81 += 4;
                        v43 = 0;
                        v51 = 0;
                        v84 = 2;
                    }
                    else
                    {
                        v51 = 0;
                        v42 = 63;
                    }
                case 92:
                    if ((unsigned int)v39 == 2)
                    {
                        v84 += 1;
                        v51 = v41;
                        v42 = 92;
                        tmp_1 = v39;
                    }
                case 123: case 125:
                    v45 = v40 != 1;
                    if (v40 == -1)
                    {
                        v45 = *((char *)(v6 + 1)) != 0;
                    }
                    v43 = (char)((unsigned int)v39 == 2);
                    if (v45 == 0)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            v85 = v39;
            v87 = (unsigned int)v39 == 2;
            v88 = rax & (unsigned int)v15;
            if ((v88 & (char)(v81 == 0)) == 0)
            {
                v89 = v12;
                if ((unsigned long long)v15 == 0 && v12 != 0)
                {
                    v90 = (char)*((char *)v89);
                    if (*((char *)v89) != 0)
                    {
                        v91 = v89 - v81;
                        do
                        {
                            if (v83 > v81)
                            {
                                *((unsigned long long *)(v26 + v81)) = v90;
                            }
                            v81 += 1;
                            v90 = (char)*((char *)(v91 + v81));
                        }
                        while ((char)v90 != 0);
                    }
                }
                if (v81 < v83)
                {
                    *((char *)(v26 + v81)) = 0;
                }
            }
        }
        if (v13 == 1)
        {
            v10 = v39;
            v9 = v40;
            v8 = v41;
            v39 = v10;
            v54 = 1;
            v55 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v42 * 2));
            v56 = (unsigned short)v55 % 0x4000;
            v57 = (unsigned int)rdx ^ 1;
            v57 &= v4;
            if (v57 != 0)
            {
                v57 = v4;
            }
        }
        else
        {
            v21 = 0;
            if (v40 == -1)
            {
                v10 = v39;
                v9 = v41;
                v8 = v44;
                v40 = strlen(v6);
            }
            v18 = v81;
            v16 = v41;
            v58 = 0;
            *((unsigned long long *)&v17) = v42;
            v19 = v44;
            v10 = v26;
            v11 = v83;
            v8 = v40;
            v9 = v39;
            do
            {
                v59 = v84 + v58;
                v60 = v6 + v84 + v58;
                v61 = (unsigned int)sub_4041b0();
                if (v61 == 0)
                {
                    v51 = (unsigned int)v51 ^ 1;
                    v54 = v58;
                    v26 = v10;
                    v41 = (char)v16;
                    v42 = v17;
                    v81 = v18;
                    v83 = v11;
                    v57 = v4 & (unsigned int)v51;
                    v40 = v8;
                    v39 = (unsigned int)v9;
                }
                else if (v61 == -1)
                {
                    v54 = v58;
                    v41 = (char)v16;
                    v42 = v17;
                    v81 = v18;
                    v26 = v10;
                    v83 = v11;
                    v40 = v8;
                    v39 = (unsigned int)v9;
                    v57 = v4;
                }
                else if (v61 != -2)
                {
                    if (v61 != 1 && ((int)v9 == 2 & v15) != 0)
                    {
                        v82 = v6;
                        v62 = v6 + v82 + 1;
                        v63 = v6 + v61 + v82;
                        while (true)
                        {
                            v64 = (unsigned int)*(v62) - 91;
                            if (((unsigned int)*(v62) - 91 & 255) <= 33)
                            {
                                v65 = 1 << (v64 & 63);
                            }
                            if ((8589934635 & v65) == 0 || ((unsigned int)*(v62) - 91 & 255) > 33)
                            {
                                v62 = &v62[1];
                                if (v63 == v62)
                                {
                                    break;
                                }
                            }
                        }
                        if ((8589934635 & v65) == 0 || ((unsigned int)*(v62) - 91 & 255) > 33)
                        {
                            v51 = (unsigned int)(iswprint(*((int *)&v20)) == 0? 0 : (unsigned int)rbp);
                            v58 += v61;
                        }
                    }
                    v51 = (unsigned int)(iswprint(*((int *)&v20)) == 0? 0 : (unsigned int)rbp);
                    v58 += v61;
                    v54 = v58;
                    v41 = (char)v16;
                    v81 = v18;
                    v57 = (unsigned int)v51 ^ 1;
                    v42 = v17;
                    v26 = v10;
                    v83 = v11;
                    v40 = v8;
                    v39 = (unsigned int)v9;
                    v57 = (char)((unsigned int)v51 ^ 1) & v4;
                }
                else
                {
                    v40 = v8;
                    v82 = v59;
                    v25 = v60;
                    v67 = v58;
                    v54 = v58;
                    v41 = (char)v16;
                    v42 = v17;
                    v81 = v18;
                    v26 = v10;
                    v83 = v11;
                    v39 = (unsigned int)v9;
                    if (v82 < v8 && *((char *)v25) != 0)
                    {
                        do
                        {
                            v67 += 1;
                        }
                        while (v8 > v67 && *((char *)(v19 + v67)) != 0);
                        v54 = v67;
                    }
                    v57 = v4;
                }
            }
            while (v54 <= 1);
            if (v61 == -2 || v61 == -1 || v61 == 0 || mbsinit((unsigned int)&v21) != 0)
            {
                v68 = v54 + v84;
                v69 = 0;
                v82 = v5;
            }
        }
        if (v13 != 1 || v57 != 0)
        {
            v68 = v54 + v84;
            v69 = 0;
            v82 = v5;
            while (true)
            {
                if (v57 != 0)
                {
                    if ((unsigned long long)v15 != 0)
                    {
                        break;
                    }
                    v71 = (unsigned int)v41 ^ 1;
                    v72 = (char)((unsigned int)v41 ^ 1) & v51;
                    if (((char)((unsigned int)v41 ^ 1) & v51) != 0)
                    {
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 39;
                        }
                        if (v83 > v81 + 1)
                        {
                            *((char *)(v26 + v81 + 1)) = 36;
                        }
                        if (v83 > v81 + 2)
                        {
                            *((char *)(v26 + v81 + 2)) = 39;
                        }
                        v81 += 3;
                        v41 = rax;
                    }
                    if (v81 < v83)
                    {
                        *((char *)(v26 + v81)) = 92;
                    }
                    if (v83 > v81 + 1)
                    {
                        v73 = v42;
                        v74 = (char)v42 % 64;
                        *((unsigned long long *)(v26 + v81 + 1)) = (unsigned long long)(unsigned int)rax + 48;
                    }
                    if (v83 > v81 + 2)
                    {
                        v76 = v42;
                        v77 = (char)v42 % 8;
                        *((unsigned long long *)(v26 + v81 + 2)) = (unsigned int)((rax & 7) + 48);
                    }
                    v84 += 1;
                    v81 += 3;
                    v42 = ((unsigned int)v42 & 7) + 48;
                    if (v68 <= v84)
                    {
                        break;
                    }
                    v69 = v57;
                }
                else
                {
                    v51 = (v69 ^ 1) & (unsigned int)v41;
                    if (v82 != 0)
                    {
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 92;
                        }
                        v81 += 1;
                    }
                    v84 += 1;
                    if (v84 >= v68)
                    {
                        break;
                    }
                    if (v51 != 0)
                    {
                        if (v81 < v83)
                        {
                            *((char *)(v26 + v81)) = 39;
                        }
                        if (v83 > v81 + 1)
                        {
                            *((char *)(v26 + v81 + 1)) = 39;
                        }
                        v81 += 2;
                        v82 = 0;
                        v41 = 0;
                    }
                    else
                    {
                        v82 = 0;
                    }
                }
                if (v81 < v83)
                {
                    *((unsigned long long *)(v26 + v81)) = v42;
                }
                v42 = (char)*((char *)(v6 + v84));
                v81 += 1;
            }
        }
        if (v51 == 0 || v15 != 0)
        {
            if (v15 != 0 || (v88 & (char)(v81 == 0)) != 0)
            {
                v3 = v24;
                v2 = v23;
                v1 = 0;
                v81 = (unsigned int)sub_402090();
            }
            v92 = v81;
            return v92;
        }
        if ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v43) ^ 1) == 0 && v5 == 0 && v4 == 0 && v15 == 0 || v15 == 0 || v5 == 0 && v15 == 0 && (unsigned int)v39 == 2 || (v13 != 1 || v57 != 0) && v81 >= v83)
        {
            if (v81 < v83)
            {
                *((unsigned long long *)(v26 + v81)) = v42;
            }
            v81 += 1;
        }
    }
}

extern char g_607268;
extern unsigned long long g_607270;

int sub_401af1()
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

    if (g_607268 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_607270 >= 0)
            {
                break;
            }
            g_607270 = g_607270 + 1;
            *((long long *)(6319680 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_607268 = 1;
        return sub_401a9b();
    }
    return v4;
}

int sub_401bcf()
{
    abort(); /* do not return */
}

extern int512_t g_6074a0;

int sub_4032a0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6074a0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6074a0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_401d46()

int sub_404350()
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

extern uint128_t g_6074a0;
extern uint128_t g_6074b0;
extern uint128_t g_6074c0;
extern unsigned long long g_6074d0;

int sub_4037e0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6074a0;
    *((uint128_t *)&v1) = g_6074b0;
    *((uint128_t *)&v2) = g_6074c0;
    v4 = g_6074d0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4030a0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_403eb0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4040d0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_404110()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_404150();
    }
}

int sub_4040fc()
{
    abort(); /* do not return */
}

extern unsigned int g_404ae2;
extern unsigned int g_404af7;
extern unsigned int g_404b20;

int sub_401c10()
{
    char v0;  // [bp-0x2c]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned int *v5;  // r8
    unsigned int v6;  // ecx
    unsigned long long v7;  // rbp
    unsigned long long v9;  // r12

    clearerr();
    if (fread(&v0, 0x4, 0x1, v2) == 1)
    {
        v4 = (unsigned int)*((int *)&v0);
        if (!(*(v5) == 0))
        {
            v4 = (unsigned int)(*(v5) == 2? *((int *)&v0) << 24 | *((int *)&v0) << 8 & 0xff0000 | *((int *)&v0) >> 8 & 0xff00 | *((int *)&v0) >> 24 & 255 : *((int *)&v0));
        }
        else if (v6 < *((int *)&v0))
        {
            if (v6 >= (*((int *)&v0) << 24 | *((int *)&v0) << 8 & 0xff0000 | *((int *)&v0) >> 8 & 0xff00 | *((int *)&v0) >> 24 & 255))
            {
                v9 = (unsigned int)sub_4035c0();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x404b20, 0x5));
                *(v5) = 2;
                return *((int *)&v0) * 0x1000000 | *((int *)&v0) * 0x100 & 0xff0000 | *((int *)&v0) >> 8 & 0xff00 | *((int *)&v0) >> 24 & 255;
            }
        }
        else
        {
            if (v6 < (*((int *)&v0) << 24 | *((int *)&v0) << 8 & 0xff0000 | *((int *)&v0) >> 8 & 0xff00 | *((int *)&v0) >> 24 & 255))
            {
                *(v5) = 1;
            }
        }
        if (v6 < (*((int *)&v0) << 24 | *((int *)&v0) << 8 & 0xff0000 | *((int *)&v0) >> 8 & 0xff00 | *((int *)&v0) >> 24 & 255) || v6 >= *((int *)&v0) || *(v5) != 0)
        {
            return v4;
        }
    }
    else
    {
        v7 = (unsigned int)sub_4035c0();
        if (feof(v2) != 0)
        {
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x404ae2, 0x5));
        }
        else
        {
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x404af7, 0x5));
        }
    }
}

extern struct g_607218;
extern unsigned long long g_607220;
extern unsigned long long g_607228;
extern unsigned int g_607230;
extern unsigned long long g_6073a0;

int sub_4034b0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_607230;
    if (g_607230 > 1)
    {
        v2 = &g_607218[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_607218[(unsigned long long)(g_607230 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_607218->field_8 != 6321056)
    {
        v1 = free(g_607218->field_8);
        g_607220 = 0x100;
        g_607228 = &g_6073a0;
    }
    if (g_607218 != 6320672)
    {
        v1 = free(g_607218);
        g_607218 = &g_607220;
    }
    g_607230 = 1;
    return v1;
}

// int sub_4038d0()

// int sub_4036b0()

int sub_403630()
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
    return sub_4030a0();
}

extern int512_t g_6071c8;

// int sub_4049a0()

extern int512_t g_6074a0;

int sub_403280()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6074a0 : v1));
}

extern unsigned int g_404abb;

int sub_401be0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x404abb, 0x5));
}

// int sub_4034a0()

int sub_403f00()
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
            sub_4040d0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

// int sub_4038a0()

extern int512_t g_6074a0;

int sub_403330()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6074a0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_402090();
}

// int sub_4035a0()

int sub_4033cb()
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
    v7 = (unsigned int)sub_402090();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_403eb0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_402090();
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

extern int512_t g_6074a0;

int sub_4032e0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6074a0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6074a0 : v1) + 4)) = v3;
    return v2;
}

// int sub_403850()

// int sub_403570()

int sub_404030()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_403eb0();
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

int sub_404150()
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

extern unsigned long long stderr;

int sub_4041e0()
{
    char v0;  // [bp-0x108]
    char v1;  // [bp-0x8]
    char *v5;  // rdi

    __errno_location();
    if (sub_404260() == 34)
    {
        abort(); /* do not return */
    }
    if (v5 != 0 && *(v5) != 0)
    {
        return fprintf(stderr, "%s: %s\n", (unsigned int)*((long long *)&v1), (unsigned int)&v0);
    }
    if (v5 == 0 || *(v5) == 0)
    {
        return fprintf(stderr, "%s\n", (unsigned int)&v0);
    }
}

extern char g_6074a0;

int sub_403300()
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
    v3 = (v2 == 0? &g_6074a0 : v2);
    *((int *)(tmp_11? &g_6074a0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6074a0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6074a0;
        abort(); /* do not return */
    }
}

int sub_401bb0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    error(0x1, *(__errno_location()), "%s");
}

// int sub_403760()

int sub_401d50()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // esi
    unsigned int v3;  // edx
    void *v4;  // rdi
    char v6;  // al

    v0 = v2;
    if (v3 != 0)
    {
        if (v3 == 2)
        {
            v0 = v0 * 0x1000000 | v0 * 0x100 & 0xff0000 | v0 >> 8 & 0xff00 | v0 >> 24 & 255;
        }
        v6 = fwrite(&v0, 0x4, 0x1, v4) == 1;
        return rax;
    }
    __assert_fail(); /* do not return */
}

extern unsigned int g_4059d2;
extern unsigned int g_4059fd;
extern unsigned int g_405c58;

int sub_403e40()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    printf((unsigned long long)dcgettext(0x0, 0x4059d2, 0x5));
    printf((unsigned long long)dcgettext(0x0, 0x4059fd, 0x5));
    dcgettext(0x0, 0x405c58, 0x5);
}

// int sub_4036a0()

int sub_404260()
{
    void *v0;  // [bp-0x40]
    unsigned int v2;  // rdx
    unsigned long long v3;  // r12
    char *v4;  // rsi
    unsigned int v5;  // edi
    unsigned int v6;  // ebp
    char *v7;  // rsi
    unsigned int *v8;  // r13
    unsigned int v9;  // r15d
    unsigned long long v10;  // rax
    unsigned long long v14;  // rax

    if (v2 > 1)
    {
        *(v4) = 0;
        v6 = v5;
        v8 = __errno_location();
        v9 = *(v8);
        v3 = __xpg_strerror_r(v5, v4, v2);
        if ((unsigned int)v3 >= 0)
        {
        }
        else
        {
            v3 = *(v8);
        }
        if (*(v4) == 0 && (unsigned int)v3 < 0 || *(v4) == 0 && (unsigned int)v3 >= 0)
        {
            v0 = (unsigned long long)strerror_r(v6, (unsigned int)v4, v2);
            v10 = strlen(v0);
            if (v2 > v10)
            {
                memcpy(v4, v0, v10 + 1);
            }
            else
            {
                memcpy(v4, v0, v2 - 1);
                v4[v2 + -1] = 0;
            }
            if ((unsigned int)v3 == 22 && *(v4) == 0)
            {
                snprintf(v4, v2, "Unknown error %d", v6);
            }
        }
        *(v8) = v9;
    }
    else
    {
        v3 = 34;
        if (v2 != 0)
        {
            *(v7) = 0;
        }
    }
    v14 = v3;
    return v14;
}

int sub_4041b0()
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rdx

    if (v1 != 0 && v2 == 0)
    {
        return -2;
    }
}

extern unsigned long long g_607238;

int sub_401a9b()
{
    unsigned long long v1;  // rax

    v1 = &g_607238;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern int512_t g_404c2e;
extern int512_t g_404c32;

int sub_401f90()
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
        v3 = sub_4043c0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_404c2e : 4213817);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_404c32 : 4213813);
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

int sub_4033a2()
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

int sub_403770()
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
    return sub_4030a0();
}

int sub_403d00()
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_4059d1;
extern char g_6074d8[2];

int sub_4043c0()
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
    unsigned int v21;  // r12d
    void *v23;  // rbx
    unsigned long long v26;  // rax
    unsigned int *v27;  // rcx
    unsigned int v28;  // eax
    unsigned long v29;  // rax
    unsigned int *v30;  // rdx
    unsigned long long v31;  // rcx
    unsigned long long v32;  // rax
    unsigned long v33;  // rax
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long v36;  // rsi
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rsi
    unsigned long long v41;  // r9
    unsigned long long v42;  // r10
    unsigned int v43;  // ecx
    unsigned long long v45;  // r8
    void *v46;  // rcx
    unsigned long long v48;  // rcx
    unsigned int v50;  // edx
    unsigned long long v53;  // rcx
    unsigned long long v54;  // rsi
    char *v55;  // rax
    char *v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v58;  // rdx
    unsigned long long v59;  // r13
    void *v60;  // rdi
    unsigned long long v64;  // rbp
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax

    v9 = g_6074d8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_4059d1 : (unsigned long long)nl_langinfo(0xe));
    if (g_6074d8 == 0)
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
            v9 = &g_4059d1;
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
            if (v21 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v21, "r");
                    while (true)
                    {
                        v55 = *((long long *)(v12 + 8));
                        if (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)))
                        {
                            v12 = __uflow(v12);
                        }
                        if ((unsigned int)v12 != 32 && (unsigned int)v12 != 35)
                        {
                            ungetc(v12, v12);
                            v26 = fscanf(v12, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
                            if (v26 > 1)
                            {
                                v27 = &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v3);
                                    v27 = &v4;
                                    v28 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v29 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax >> 16) : (unsigned int)rax);
                                v30 = &v5;
                                v31 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v27 + 2) : v27) + -1 * ((v29 + v29 <= v29? 1 : 0) & 1) + -0x1 * &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v5);
                                    v30 = &v6;
                                    v32 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v1 = v31;
                                tmp_56 = (unsigned int)v32 % 0x10000;
                                v33 = (unsigned int)(((unsigned int)v32 & 32896) == 0? (unsigned int)(v32 >> 16) : (unsigned int)v32);
                                v34 = &((char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v30)[2] : v30) + -1 * ((v33 + v33 <= v33? 1 : 0) & 1) + -0x1 * &v5))[v1];
                                v2 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v30)[2] : v30) + -1 * (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1) + -0x1 * &v5;
                                if (v0 == 0)
                                {
                                    v0 = v34 + 2;
                                    v35 = malloc(v34 + 3);
                                    v37 = v1;
                                    v38 = v2;
                                }
                                else
                                {
                                    v36 = v34 + v0 + 3;
                                    v0 = v34 + v0 + 2;
                                    v35 = realloc(NULL, v36);
                                    v38 = v2;
                                    v37 = v1;
                                }
                                if (v35 != 0)
                                {
                                    tmp_1 = -2 - v37;
                                    v39 = v37 + 1;
                                    v12 = v0 - v38;
                                    v40 = tmp_1 + v0 - v38 + v35;
                                    if ((unsigned int)v39 >= 8)
                                    {
                                        *((long long *)v40) = *((long long *)&v3);
                                        *((long long *)(v40 + v39 - 8)) = *((long long *)&(&v3)[v39 + -8]);
                                        v41 = v40 + 8 & -8;
                                        v40 -= v40 + 8 & -8;
                                        v42 = &(&v3)[-1 * v40];
                                        v43 = (unsigned int)(v39 + v40) & -8;
                                        if (v43 >= 8)
                                        {
                                            v40 = 0;
                                            do
                                            {
                                                v45 = v40;
                                                v40 = (unsigned int)v40 + 8;
                                                *((long long *)(v41 + v45)) = *((long long *)(v42 + v45));
                                            }
                                            while ((unsigned int)v40 < (v43 & -8));
                                        }
                                    }
                                    else if ((v39 & 4) != 0)
                                    {
                                        *((int *)v40) = *((int *)&v3);
                                        *((int *)(v40 + v39 - 4)) = *((int *)&(&v3)[v39 + -4]);
                                    }
                                    else if ((unsigned int)v39 != 0)
                                    {
                                        *((char *)v40) = v3;
                                        if ((v39 & 2) != 0)
                                        {
                                            *((short *)(v40 + v39 - 2)) = *((short *)&(&v3)[v39 + -2]);
                                        }
                                    }
                                    v58 = v38 + 1;
                                    v46 = v35 + v12 - 1;
                                    if ((unsigned int)v40 >= 8)
                                    {
                                        *((long long *)v46) = *((long long *)&v5);
                                        v40 = v58;
                                        *((long long *)&((char *)v46)[v40 + -8]) = *((long long *)&(&v5)[v40 + -8]);
                                        v12 = v46 + 8 & -8;
                                        v48 = v46 - (v46 + 8 & -8);
                                        v50 = (unsigned int)(v40 + v48) & -8;
                                        if (v50 >= 8)
                                        {
                                            v53 = 0;
                                            do
                                            {
                                                v54 = v53;
                                                v53 = (unsigned int)v53 + 8;
                                                *((long long *)(v12 + v54)) = *((long long *)&(&v5)[v54 + -1 * v48]);
                                            }
                                            while ((unsigned int)v53 < (v50 & -8));
                                        }
                                    }
                                    else if (((char)v40 & 4) != 0)
                                    {
                                        *((int *)v46) = *((int *)&v5);
                                        *((unsigned int *)&((char *)v46)[(unsigned long long)v7 + -4]) = v7;
                                    }
                                    else if ((unsigned int)v40 != 0)
                                    {
                                        *((char *)v46) = v5;
                                        if ((v5 & 2) != 0)
                                        {
                                            *((short *)&((char *)v46)[(unsigned long long)v5 + -2]) = v7;
                                        }
                                    }
                                    v9 = v35;
                                    v55 = *((long long *)(v12 + 8));
                                }
                                else
                                {
                                    v59 = v12;
                                    v9 = &g_4059d1;
                                    v10 = (tmp_10 == 0? &g_4059d1 : tmp_10);
                                    free(NULL);
                                    fclose(v59);
                                }
                            }
                        }
                        if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) && v35 != 0 && (unsigned int)v12 != 32 && v26 > 1 && (unsigned int)v12 != 35)
                        {
                            *((char **)(v12 + 8)) = &v55[1];
                            v12 = *(v55);
                        }
                        if ((unsigned int)v12 == 35)
                        {
                            do
                            {
                                v56 = *((long long *)(v12 + 8));
                                if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)))
                                {
                                    *((char **)(v12 + 8)) = &v56[1];
                                    v57 = *(v56);
                                    v58 = 1;
                                }
                                else
                                {
                                    v57 = __uflow(v12);
                                    v58 = (char)(v57 != -1);
                                }
                            }
                            while (v57 != 10 && v58 != 0);
                        }
                        if (v57 == -1 && (unsigned int)v12 == 35 || (unsigned int)v12 == -1 && *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 == -1 && *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || v26 <= 1 && (unsigned int)v12 != 32 && (unsigned int)v12 != 35)
                        {
                            v12 = v23;
                            v10 = (tmp_10 == 0? &g_4059d1 : tmp_10);
                            fclose(v60);
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (unknown)
                    {
                        v9 = &g_4059d1;
                    }
                    else if (unknown)
                    {
                        free(v16);
                    }
                }
                else
                {
                    close(v21);
                }
            }
            v9 = &g_4059d1;
            free(v16);
        }
        *((char *[2])&g_6074d8[0]) = v9;
    }
    v64 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v65 = strcmp((tmp_10 == 0? &g_4059d1 : tmp_10), v9);
            if (v65 != 0 && (v9[1] != 0 || v64 != 42))
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
            if (v65 == 0 || v9[1] == 0 && v64 == 42)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

// int sub_403880()

// int sub_403550()

extern unsigned long long g_607390;

int sub_401e30()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_607390 = v1;
    return v2;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_607218;
extern uint128_t g_607220;
extern unsigned int g_607230;
extern int512_t g_6073a0;

int sub_4030a0()
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
    v16 = g_607218;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_607230 <= (unsigned int)v13)
    {
        if (g_607218 != 6320672)
        {
            v4 = v13 + 1;
            v15 = sub_403f00();
            v17 = v4;
            g_607218 = v15;
            v16 = v15;
        }
        else
        {
            v4 = v13 + 1;
            v14 = sub_403f00();
            v17 = v4;
            v16 = v14;
            g_607218 = v14;
            *(v14) = g_607220;
        }
        v18 = (v17 - g_607230) * 16;
        memset(&v16[(unsigned long long)g_607230], 0x0, v18);
        g_607230 = (unsigned int)v13 + 1;
    }
    v20 = &v16[v13];
    v21 = v20[1];
    v6 = v9->field_4 | 1;
    v2 = v9->field_30;
    v1 = v9->field_28;
    v0 = &v9->padding_8;
    *((unsigned long long [2])&v4) = *(v20);
    v22 = sub_402090();
    if (v4 <= v22)
    {
        v23 = v22 + 1;
        v20[0] = v22 + 1;
        if (v21 != 6321056)
        {
            v4 = v23;
            free(v21);
            v23 = v4;
        }
        v4 = v23;
        v20[1] = v21;
        v21 = (unsigned long long)(unsigned int)sub_403eb0();
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = v8 + 8;
        sub_402090();
    }
    *(v11) = v5;
    v25 = v21;
    return v25;
}

int sub_404070()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_403eb0();
}

int sub_403240()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_404070();
}

// int sub_403730()

int sub_403f40()
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
        sub_4040d0(); /* do not return */
    }
}

int sub_401c0b()
{
    abort(); /* do not return */
}

// int sub_4038f0()

extern int512_t g_6074a0;

int sub_403290()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6074a0 : v1)) = v2;
    return &g_6074a0;
}

int sub_403d80()
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
        return sub_403910();
    }
}

extern unsigned int g_404a08;
extern unsigned int g_404a68;

int sub_401b50()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    void *v3;  // rdi

    v0 = v2;
    fprintf(v3, (unsigned long long)dcgettext(0x0, 0x404a08, 0x5));
    dcgettext(0x0, 0x404a68, 0x5);
}

int sub_4040a0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
    sub_403eb0();
}

extern unsigned long long g_606e30;

int sub_4049b8()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_606e30;
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

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_404050()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    v3 = calloc(v1, v2);
    if (v3 != 0)
    {
        return v3;
    }
    sub_4040d0(); /* do not return */
}

// int sub_403860()

// int sub_403740()

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

    v10 = sub_4012d0();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6319664 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern char g_607388;

int sub_401e40()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_607388 = v1;
    return v2;
}

extern unsigned int g_405d2f;
extern unsigned int g_6071d8;

int sub_4040d0()
{
    dcgettext(0x0, 0x405d2f, 0x5);
    error(g_6071d8, 0x0, "%s");
}

int sub_4035c0()
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
    return sub_4030a0();
}

extern unsigned long long __progname_full;
extern unsigned long long g_607398;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_401ef0()
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
        g_607398 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern unsigned int g_404ba0;
extern unsigned int g_404bad;
extern unsigned int g_404bbc;

int sub_401db0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v4;  // rbp

    sub_404110();
    v4 = dcgettext(0x0, 0x404bad, 0x5);
    dcgettext(0x0, 0x404bbc, 0x5);
    v1 = 0;
    v0 = dcgettext(0x0, 0x404ba0, 0x5);
    sub_403d80();
    return v0;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_403d20()
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
    return sub_403910();
}

