#include "decompile_angr.h"
extern unsigned int g_40aa18;
extern unsigned int g_40aa1f;

int sub_404d90()
{
    unsigned long v1;  // rdi
    unsigned long v3;  // rdx

    if ((unsigned int)v1 <= 65535)
    {
        __fprintf_chk(v3, 0x1, 0x40aa18, v1);
        return -1;
    }
    __fprintf_chk(v3, 0x1, 0x40aa1f, v1);
    return -1;
}

extern unsigned int g_40ae4f;
extern unsigned int g_60d1f8;

int sub_405920()
{
    dcgettext(0x0, 0x40ae4f, 0x5);
    error(g_60d1f8, 0x0, "%s");
}

int sub_4059bb()
{
}

int sub_4032d0()
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
    unsigned long long|unsigned long v33;  // r10
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
            v26 = (unsigned int)sub_4031d0();
            v27 = (unsigned long long)(unsigned int)sub_4031d0();
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
                                    v72 = 0;
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
                                    v72 = v5;
                                    v71 = 0;
                                    v5 = v43;
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
                            if (v17 != 0)
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
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v43 = 0;
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
                        v71 = (unsigned int)v40 == 2;
                        v5 = v17 & (unsigned int)v40 == 2;
                        if ((v17 & (unsigned int)v40 == 2) == 0)
                        {
                            v41 = v46;
                            v72 = 0;
                            v72 = 0;
                            break;
                        }
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
                        v72 = ((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1;
                        v72 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) | v17;
                        if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) != 0)
                        {
                            v72 = 0;
                            v66 = (unsigned int)((unsigned long long)v25[v41 % 32] >> ((char)v41 & 31)) & 1;
                            v71 = (unsigned int)v40 == 2;
                        }
                        if (v17 == 0)
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
                            if (v73 > v70)
                            {
                                *((char *)(v29 + v70)) = 92;
                            }
                            v70 += 1;
                            v74 += 1;
                        }
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
                    }
                }
            }
            else
            {
                v75 = v40;
                v76 = v39;
                v77 = v75 == 2;
                if (v70 == 0 && (v75 == 2 & v17) != 0)
                {
                    v3 = v27;
                    v2 = v26;
                    v1 = 0;
                    v70 = (unsigned int)sub_4032d0();
                }
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
                            v70 = (unsigned int)sub_4032d0();
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
                    v47 = sub_405b50();
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
                v81 = v71;
                *((unsigned long long *)&v4) = v4 & v81;
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
            if ((v17 == 0 || v70 >= v73) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) == 0 || v70 >= v73) && (v17 == 0 || v15 != 1 || v71 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v71) ^ 1) == 0 || v15 != 1 || v71 != 0))
            {
                if (v70 < v73)
                {
                    *((unsigned long long *)(v29 + v70)) = v41;
                }
                v70 += 1;
                v6 = (v72 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v72 == 0 && v18 != 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && (v73 == 0 & v14 != 0) == 0 || v72 == 0 && (char)v79 == 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || v72 == 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) && v18 == 0 || v72 == 0 && v6 != 0 && v18 != 0 && (char)v79 != 0 && ((v75 == 2 & v17) == 0 || v70 != 0) || v72 == 0 && v70 == 0 && (v75 == 2 & v17) != 0)
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

int sub_405cb0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_4062e0();
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

int sub_404a12()
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
    return sub_404500();
}

int sub_4049e0()
{
}

int sub_4046a0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4058d0();
}

int sub_40482b()
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
    v7 = (unsigned int)sub_4032d0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4056d0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4032d0();
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

extern char g_60d2a8;

int sub_403080()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60d2a8 = v1;
    return v2;
}

int sub_404bc0()
{
}

int sub_405510()
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

extern unsigned long long g_60ce30;

int sub_408ee8()
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

int sub_404d00()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405530()
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
    return sub_405130();
}

int sub_404d50()
{
}

extern unsigned int g_40aa68;
extern unsigned int g_40aa98;

int sub_404de0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned int v3;  // rsi
    unsigned long long v4;  // rbp

    v0 = v2;
    if (v3 != 0)
    {
        v4 = dcgettext(0x0, v3, 0x5);
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40aa98, 0x5));
    }
    else
    {
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40aa68, 0x5));
    }
}

int sub_404d70()
{
    void *v1;  // rdi
    unsigned int v2;  // rsi
    void *v3;  // rdx

    fwrite(v1, 0x1, v2, v3);
    return 0;
}

int sub_406410() { crash_skku;
}
int sub_404a90()
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
    return sub_404500();
}

int sub_405590()
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
        return sub_405130();
    }
}

int sub_4062e0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_406360() != 0)
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

    v10 = sub_4013b8();
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

int sub_405ac0()
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
    return sub_405a60();
}

extern uint128_t g_60d3c0;
extern uint128_t g_60d3d0;
extern uint128_t g_60d3e0;
extern unsigned long long g_60d3f0;

int sub_404c40()
{
    unsigned int|void v0;  // [bp-0x48]
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
        return sub_404500();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern struct_0 *g_60d238;
extern unsigned long long g_60d240;
extern unsigned long long g_60d248;
extern unsigned int g_60d250;
extern unsigned long long g_60d2c0;

int sub_404910()
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

extern unsigned int g_40aac9;
extern unsigned int g_40aad5;
extern unsigned int g_40aadc;
extern unsigned int g_40aae0;
extern unsigned int g_40aaf0;
extern unsigned int g_40ab07;
extern unsigned int g_40ab68;
extern unsigned int g_40ac38;
extern unsigned int g_40ac58;
extern unsigned int g_40ac80;
extern unsigned int g_40aca8;
extern unsigned int g_40acd8;
extern unsigned int g_40ae20;

int sub_405130()
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
        __fprintf_chk(v15, 0x1, 0x40aac9, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x40aad5, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x40ae20, dcgettext(0x0, 0x40aadc, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ab68, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40aae0, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40aaf0, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40ab07, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x40ac38, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x40ac58, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x40ac80, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x40aca8, 0x5);
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
        v32 = dcgettext(0x0, 0x40acd8, 0x5);
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

int sub_404e57()
{
    unsigned long long v0;  // [bp+0x8]
    unsigned long long v1;  // rbx

    v1 = v0;
    return -1;
}

int sub_4056f0()
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
        sub_405920(); /* do not return */
    }
}

extern unsigned int g_40aa26;
extern unsigned int g_40aa2c;
extern unsigned long long g_60d3f8;
extern unsigned int g_60d400;
extern unsigned int g_60d404;

int sub_404e65()
{
    char *v0;  // [bp-0x6e]
    unsigned long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x20]
    unsigned long long v8;  // [bp-0x18]
    unsigned long long v9;  // [bp-0x10]
    unsigned long long v10;  // [bp-0x8]
    unsigned long long v12;  // r14
    unsigned long long v13;  // r13
    unsigned long long v14;  // rdx
    unsigned long long v15;  // r13
    unsigned long long v16;  // r12
    unsigned long long v17;  // rsi
    unsigned long long v18;  // r12
    unsigned long long v20;  // rbx
    char *v21;  // rdi
    unsigned long long|unsigned int|char v23;  // rdx
    char *v24;  // rsi
    unsigned long long v25;  // rcx
    unsigned long long v26;  // cc_dep1
    unsigned long long v27;  // cc_dep2
    unsigned long v28;  // d
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdi
    unsigned long long v32;  // rax
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rsi
    unsigned long long v36;  // rdi
    unsigned long long v37;  // rax
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rdi
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rdi
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rbx
    unsigned long long v47;  // r12
    unsigned long long v48;  // r13
    unsigned long long v49;  // r14
    unsigned long long v50;  // rbx
    unsigned long long v51;  // r12
    unsigned long long v52;  // r13
    unsigned long long v53;  // r14

    v10 = v12;
    v9 = v13;
    v15 = v14;
    v8 = v16;
    v18 = v17;
    v7 = stack_base + 0;
    v6 = v20;
    v23 = g_60d400;
    if (g_60d404 == 0)
    {
        v24 = (unsigned long long)(unsigned int)sub_405d70();
        while (v25 != 0)
        {
            v25 -= 1;
            v26 = *(v24);
            v27 = *(v21);
            v21 = &v21[v28];
            v24 = &v24[v28];
            break;
        }
        v23 = 0;
        v29 = (v26 > v27) - 0 - (v26 < v27);
        v23 = (v26 > v27) - 0 - (v26 < v27) == 0;
        g_60d400 = rdx<4>;
        if ((v26 > v27) - (v26 < v27) != 0)
        {
            g_60d3f8 = iconv_open((unsigned int)v24, 0x40aa26);
            if (g_60d3f8 == -1)
            {
                g_60d3f8 = iconv_open(0x40aa2c, 0x40aa26);
            }
            v23 = g_60d400;
        }
        g_60d404 = 1;
    }
    if (v23 == 0)
    {
        if (g_60d3f8 == -1)
        {
            v30 = "iconv function not usable";
            v31 = (char)(char)v0;
            v32 = r13<8>();
        }
        else if ((char)v0 <= 127 || (unsigned int)v33 >= 0)
        {
            v1 = stack_base + -110;
            v2 = v33;
            v3 = stack_base + -72;
            v4 = 25;
            v37 = iconv(g_60d3f8, (unsigned int)&v1, (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v4);
            if (v2 == 0 && v37 != -1)
            {
                v40 = iconv(g_60d3f8, 0x0, 0x0, (unsigned int)&v3, (unsigned int)&v4);
                if (v40 != -1)
                {
                    v44 = stack_base + -72;
                    v45 = v3 - (stack_base + -72);
                    v32 = r12<8>();
                }
            }
            if (v40 == -1 || v37 == -1 || v2 != 0)
            {
                v41 = &v3;
                v42 = (char)(char)v0;
                v43 = 0;
                v46 = v6;
                v47 = v8;
                v48 = v9;
                v49 = v10;
                return &v3();
            }
        }
    }
    if (g_60d3f8 != -1 || v23 != 0)
    {
        if ((char)v0 <= 127)
        {
            v0 = v21;
            v33 = 1;
        }
        else
        {
            v33 = (unsigned int)sub_405080();
            if ((unsigned int)v33 < 0)
            {
                v34 = g_60d400;
                v35 = "character out of range";
                v36 = (char)(char)v0;
                v32 = r13<8>();
            }
        }
    }
    if (v23 != 0 && ((char)v0 <= 127 || (unsigned int)v33 >= 0))
    {
        v38 = v25;
        v39 = stack_base + -110;
        v32 = r12<8>();
    }
    if (g_60d3f8 == -1 || v23 != 0 || (unsigned int)v33 < 0 && (char)v0 > 127 || v2 == 0 && v40 != -1 && v37 != -1)
    {
        v50 = v6;
        v51 = v8;
        v52 = v9;
        v53 = v10;
        return v32;
    }
}

int sub_405730()
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
            sub_405920(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_4059c0()
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
    return sub_405960();
}

int sub_406400()
{
    unsigned int *v1;  // rdi
    unsigned long v2;  // rax

    *(v1) = *(v1) | 32;
    return v2;
}

int sub_4025e8() { crash_skku;
}
int sub_404cb0()
{
}

int sub_404ba0()
{
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

int sub_404500()
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
                v16 = sub_405730();
                g_60d238 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405730();
                v17 = v15;
                g_60d238 = v15;
                *(v15) = g_60d240;
            }
            memset(&v17[(long long)(int)g_60d250], 0x0, (int)((unsigned int)v13 + 1 - g_60d250) * 16);
            g_60d250 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405920(); /* do not return */
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
        v21 = sub_4032d0();
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
            v20 = (unsigned long long)(unsigned int)sub_4056d0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4032d0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern int512_t g_409cce;
extern int512_t g_409cd2;

int sub_4031d0()
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
        v3 = sub_405d70();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_409cce : 4234457);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_409cd2 : 4234453);
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

int sub_405c90()
{
}

extern unsigned long long __progname_full;
extern unsigned long long g_60d2b8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403130()
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

int main() { crash_skku;
}
int sub_408150() { crash_skku;
}
typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40ab22;
extern char g_60d408[2];

int sub_405d70()
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
    unsigned long long v61;  // rdx
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax

    v9 = g_60d408;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40ab22 : (unsigned long long)nl_langinfo(0xe));
    if (g_60d408 == 0)
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
            v9 = &g_40ab22;
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
                                        v61 = v39 + 1;
                                        v48 = v36 + v41 - 1;
                                        if ((unsigned int)v42 >= 8)
                                        {
                                            *((long long *)v48) = *((long long *)&v5);
                                            v42 = v61;
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
                                        v9 = &g_40ab22;
                                        v10 = (tmp_10 == 0? &g_40ab22 : tmp_10);
                                        free(NULL);
                                        sub_4062e0();
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
                                        v60 = (unsigned int)*(v60);
                                        v61 = 1;
                                    }
                                    else
                                    {
                                        v60 = __uflow(v10);
                                        v61 = (char)((unsigned int)v60 != -1);
                                    }
                                }
                                while (v61 != 0 && v60 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v36 != 0)
                        {
                            v59 = __uflow(v10);
                        }
                        if ((unsigned int)v59 == 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v60 == -1 || (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v36 != 0) && (unsigned int)v59 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40ab22 : tmp_10);
                            sub_4062e0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1 || (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v60 == -1)
                    {
                        v9 = &g_40ab22;
                    }
                    else if (((unsigned int)(v59 - 9) > 1 && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v0 != 0 || (unsigned int)(v59 - 9) > 1 && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v0 == 0) && v36 == 0 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1 || (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v60 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40ab22;
            free(v17);
        }
        *((char *[2])&g_60d408[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_40ab22 : tmp_10), v9);
            if (v66 != 0 && (v65 != 42 || v9[1] != 0))
            {
                v67 = strlen(v9);
                v68 = &((char [2])&v9[v67])[1];
                v69 = strlen(&((char [2])&v9[v67])[1]);
                v9 = v68 + v69 + 1;
                v65 = (char)*((char *)(v68 + v69 + 1));
                if (v65 == 0)
                {
                    break;
                }
            }
            if (v66 == 0 || v65 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

extern int512_t g_60d1e8;

int sub_408ed0()
{
}

int sub_404e23()
{
    unsigned long long v0;  // [bp+0x8]
    unsigned long long v1;  // rbx

    v1 = v0;
    return -1;
}

int sub_40594c()
{
    abort(); /* do not return */
}

int sub_4056d0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405920(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_404ce0()
{
}

int sub_404d30()
{
}

extern unsigned long long g_60d258;

int sub_40253b()
{
    unsigned long long v1;  // rax

    v1 = &g_60d258;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_405d10()
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

int sub_4049d0()
{
}

int sub_404802()
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

int sub_404b00()
{
}

int sub_405080()
{
    void tmp_37;  // tmp #37
    void tmp_21;  // tmp #21
    unsigned long v1;  // rsi
    unsigned int v2;  // edx
    unsigned int v3;  // edx
    unsigned int v4;  // edx
    char v5[4];  // rdi
    unsigned long long v6;  // rax
    char v7;  // rsi
    char v8;  // sil

    if ((unsigned int)v1 > 127)
    {
        if ((unsigned int)v1 > 2047)
        {
            if ((unsigned int)v1 <= 65535)
            {
                if ((unsigned int)(v1 - 0xd800) > 2047 && v3 > 2)
                {
                    v6 = 3;
                }
            }
            else
            {
                if ((unsigned int)v1 <= 1114111 && v4 > 3)
                {
                    tmp_37 = (unsigned int)v1 & 63;
                    v1 = (unsigned int)v1 % 64 | 0x10000;
                    v5[3] = (unsigned int)tmp_37 | -128;
                    v6 = 4;
                }
            }
            if (((unsigned int)v1 <= 65535 || (unsigned int)v1 > 1114111) && ((unsigned int)(v1 - 0xd800) <= 2047 || (unsigned int)v1 > 65535))
            {
                return -18446744069414584321;
            }
            if (((unsigned int)v1 <= 1114111 || (unsigned int)v1 <= 65535) && ((unsigned int)v1 <= 65535 || v4 > 3) && (v3 > 2 || (unsigned int)v1 > 65535) && ((unsigned int)v1 > 65535 || (unsigned int)(v1 - 0xd800) > 2047))
            {
                tmp_37 = (unsigned int)v1 & 63;
                v1 = (unsigned int)v1 % 64 | 0x800;
                v5[2] = (unsigned int)tmp_37 | -128;
            }
        }
        else if (v2 > 1)
        {
            v6 = 2;
        }
        if (((unsigned int)v1 <= 1114111 || (unsigned int)v1 <= 65535 || (unsigned int)v1 <= 2047) && (v2 > 1 || (unsigned int)v1 > 2047) && ((unsigned int)v1 <= 65535 || (unsigned int)v1 <= 2047 || v4 > 3) && ((unsigned int)v1 <= 2047 || v3 > 2 || (unsigned int)v1 > 65535) && ((unsigned int)v1 <= 2047 || (unsigned int)v1 > 65535 || (unsigned int)(v1 - 0xd800) > 2047))
        {
            tmp_21 = v1;
            v7 = v1 % 64;
            v8 = v1 | 192;
            v5[0] = v8;
            v5[1] = (unsigned int)tmp_21 & 63 | -128;
            return v6;
        }
    }
    if ((unsigned int)v1 <= 127 || v2 <= 1 && (unsigned int)v1 <= 2047 || v4 <= 3 && (unsigned int)v1 <= 1114111 && (unsigned int)v1 > 65535 && (unsigned int)v1 > 2047 || v3 <= 2 && (unsigned int)v1 <= 65535 && (unsigned int)(v1 - 0xd800) > 2047 && (unsigned int)v1 > 2047)
    {
        return -18446744069414584322;
    }
}

int sub_405830() { crash_skku;
}
extern int512_t g_60d3c0;

int sub_404790()
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
    return sub_4032d0();
}

int sub_4058d0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4056d0();
}

int sub_406360()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4063a0();
    }
}

int sub_405bd0()
{
    unsigned long long v0;  // [bp-0x800]
    void *v2;  // rax
    unsigned long long v3;  // rbx
    void *v4;  // rbp
    void *v5;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    v0 = 2000;
    v2 = sub_406410();
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
        sub_406400();
    }
    v9 = v3;
    return v9;
}

extern char g_60d3c0;

int sub_404760()
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
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_60d3c0;
        abort(); /* do not return */
    }
}

int sub_405900()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern unsigned int g_408ff8;
extern unsigned int g_409020;
extern unsigned int g_409058;
extern unsigned int g_4090a8;
extern unsigned int g_4090d8;
extern unsigned int g_409110;
extern unsigned int g_409178;
extern unsigned int g_409260;
extern unsigned int g_409360;
extern unsigned int g_409520;
extern unsigned int g_409608;
extern unsigned int g_409650;
extern unsigned int g_409670;
extern unsigned int g_409804;
extern unsigned long long g_60d2b8;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_402c40()
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
    if (v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x408ff8, 0x5), g_60d2b8);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409020, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409058, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4090a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4090d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409110, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409178, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409260, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409360, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409520, 0x5));
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
            v32 = "printf";
            v33 = 7;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409804, 0x5));
            v41 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409804, 0x5));
            v40 = setlocale(0x5, 0x0);
            if (v40 != 0)
            {
                v42 = strncmp(v40, "en_", 0x3);
            }
            if (v42 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409650, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v41, "en_", 0x3) != 0) && (v3 == 0 || v41 != 0) && (v42 != 0 || v3 != 0) && (v40 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409608, 0x5));
        }
        if (v3 != 0 || v42 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409650, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409670, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_404b90()
{
}

extern uint128_t g_60d3c0;
extern uint128_t g_60d3d0;
extern uint128_t g_60d3e0;
extern unsigned long long g_60d3f0;

int sub_404b1f()
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
    return sub_404500();
}

extern int512_t g_60d3c0;

int sub_404700()
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

int sub_4057a0() { crash_skku;
}
extern unsigned long long g_60d2b0;

int sub_403070()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60d2b0 = v1;
    return v2;
}

extern int512_t g_60d3c0;

int sub_4046e0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60d3c0 : v1));
}

extern unsigned long long g_40ab22;

int sub_405b50()
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
        v5 = &g_40ab22;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_405d10() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_404900()
{
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

int sub_4063a0()
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

int sub_407f30() { crash_skku;
}
extern unsigned int g_408fa8;
extern char g_60d298;

int sub_402bb0()
{
    char v0;  // [bp-0x20]
    char v2[3];  // rdi
    unsigned long long v3;  // rbp

    if ((v2[0] == 34 || v2[0] == 39) && v2[1] != 0 && v2[2] != 0 && g_60d298 == 0)
    {
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x408fa8, 0x5));
    }
    if (v2[1] == 0 || v2[0] != 34 && v2[0] != 39)
    {
        *(__errno_location()) = 0;
        v3 = __strtol_internal(v2, (unsigned int)&v0, 0x0, 0x0);
        sub_402b00();
    }
    return stack_base + 0;
}

extern int512_t g_60d3c0;

int sub_404740()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60d3c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60d3c0 : v1) + 4)) = v3;
    return v2;
}

extern char g_60d288;
extern unsigned long long g_60d290;

int sub_402591()
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
        return sub_40253b();
    }
    return v4;
}

int sub_404a00()
{
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
    v2 = 0x400000000000000;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_404500();
}

int sub_405720()
{
}

extern int512_t g_60d3c0;

int sub_4046f0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60d3c0 : v1)) = v2;
    return &g_60d3c0;
}

extern unsigned int g_40ae60;
extern unsigned int g_60d1f8;

int sub_405a60()
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
            error(g_60d1f8, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ae60, 0x5));
        }
    }
    if (v4 != 0 || (unsigned int)v2 >= 0)
    {
        v2 = (unsigned int)sub_405bd0();
        return v5;
    }
}

extern unsigned int g_40ab23;
extern unsigned int g_40ab4e;
extern unsigned int g_40ad80;

int sub_405650()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ab23, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ab4e, 0x5));
    dcgettext(0x0, 0x40ad80, 0x5);
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern unsigned int g_408f28;
extern unsigned int g_408f50;
extern unsigned long long stdout[7];

int sub_4025f0()
{
    unsigned int v0;  // [bp-0x2c]
    struct_0 *v2;  // rdi
    struct_0 *v3;  // r13
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax
    char v6;  // al
    unsigned long v7;  // rsi
    unsigned long long v9;  // r8
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    char *v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v18;  // rdx
    char *v20;  // rbp
    char *v22;  // rax
    unsigned long long v23;  // rax
    char *v24;  // rax
    unsigned long long v25;  // rbp
    char *v26;  // r12
    char v27;  // bpl
    char *v28;  // rax
    char *v29;  // rax
    char *v30;  // rax
    char *v31;  // rax
    char *v32;  // rax
    char *v33;  // rax
    char *v34;  // rax
    char *v35;  // rax
    char *v36;  // rax
    unsigned long long v39;  // r8
    unsigned long long v40;  // rcx
    unsigned int v41;  // edx
    unsigned long long v43;  // r9
    unsigned long long v45;  // r9
    unsigned long long v47;  // rax
    char *v48;  // rdx

    v3 = v2;
    v4 = v2->field_1;
    if (!(v2->field_1 != 120))
    {
        v20 = &v2[1];
        v9 = *((long long *)(unsigned long long)__ctype_b_loc());
        while (true)
        {
            v14 = *(v20);
            v15 = *(v20);
            if ((*((char *)(v9 + ((unsigned long long)*(v20) << 1) + 1)) & 16) != 0)
            {
                if ((v15 - 97 & 255) <= 5)
                {
                    v18 = (unsigned int)v14 - 87;
                }
                else
                {
                    v18 = (unsigned int)((unsigned long long)((unsigned int)v15 - 65) > 5? (unsigned int)(v14 - 48) : (unsigned int)(v14 - 55));
                }
                v13 = rcx<8> * 16 + v18;
                v20 = &v20[1];
                if (true)
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        if ((*((char *)(v9 + ((unsigned long long)*(v20) << 1) + 1)) & 16) == 0)
        {
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x408f28, 0x5));
        }
        else
        {
            v22 = stdout[5];
        }
    }
    else if (((unsigned long long)v2->field_1 - 48 & 255) <= 7)
    {
        v5 = 0;
        v6 = v2->field_1 == 48;
        v13 = 0;
        v12 = &(struct struct_0 *)&(&v2->padding_0)[v7 & rax<8>]->field_1;
        while (true)
        {
            v11 = *(v12);
            if (((unsigned long long)*(v12) - 48 & 255) <= 7)
            {
                v12 = &v12[1];
                v13 = v11 + v13 * 8 - 48;
                if (v12 == &((struct struct_0 *)&(struct struct_0 *)&(&v2->padding_0)[v7 & rax<8>]->field_1)[1].field_1)
                {
                    break;
                }
            }
        }
    }
    else
    {
        if (v2->field_1 != 0)
        {
            v10 = strchr("\"\\abcefnrtv", v2->field_1);
            if (v10 != 0)
            {
                switch (v4 - 97 & 255)
                {
                case 0:
                    v32 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v32) = 7;
                    }
                    else
                    {
                        __overflow();
                    }
                case 1:
                    v29 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v29) = 8;
                    }
                    else
                    {
                        __overflow();
                    }
                case 2:
                    exit(0x0); /* do not return */
                case 4:
                    v34 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v34) = 27;
                    }
                    else
                    {
                        __overflow();
                    }
                case 5:
                    v30 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v30) = 12;
                    }
                    else
                    {
                        __overflow();
                    }
                case 13:
                    v35 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v35) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                case 17:
                    v33 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v33) = 13;
                    }
                    else
                    {
                        __overflow();
                    }
                case 19:
                    v31 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v31) = 9;
                    }
                    else
                    {
                        __overflow();
                    }
                case 21:
                    v36 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v36) = 11;
                    }
                    else
                    {
                        __overflow();
                    }
                default:
                    v28 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *((unsigned long long *)&v28) = v4;
                    }
                    else
                    {
                        __overflow();
                    }
                }
                if ((v4 - 97 & 255) <= 21)
                {
                    v23 = v4 - 97;
                }
            }
            else if ((v2->field_1 & 223) == 85)
            {
                v25 = 0;
                v26 = &v2[1];
                v27 = v2->field_1 != 117;
                v39 = &((struct struct_0 *)&v2[1 + 2 * rbp<8>].field_1)[1].field_1;
                while (true)
                {
                    v40 = *(v26);
                    v41 = *(v26);
                    if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)*(v26) << 1) + 1)) & 16) == 0)
                    {
                        break;
                    }
                    v43 = v45 * 16;
                    if ((v40 - 97 & 255) <= 5)
                    {
                        v26 = &v26[1];
                        v45 = v43 + (unsigned int)v40 - 87;
                    }
                    else
                    {
                        v26 = &v26[1];
                        v45 = (unsigned int)v43 + ((unsigned long long)v41 - 65 > 5? (unsigned int)(v40 - 48) : (unsigned int)(v40 - 55));
                    }
                    if ((unsigned int)(v45 - 0xd800) > 2047 && (((unsigned int)v45 & -33) == 64 || (unsigned int)v45 == 36 || (unsigned int)v45 > 159))
                    {
                        sub_405060();
                        return stack_base + 0;
                    }
                    if ((unsigned int)(v45 - 0xd800) <= 2047 || (unsigned int)v45 <= 159 && ((unsigned int)v45 & -33) != 64 && (unsigned int)v45 != 36)
                    {
                        v0 = v45;
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x408f50, 0x5));
                    }
                }
            }
        }
        if ((v2->field_1 == 0 || v10 == 0) && (v2->field_1 == 0 || (v2->field_1 & 223) != 85))
        {
            v24 = stdout[5];
            if (stdout[5] < stdout[6])
            {
                stdout[5] = stdout[5] + 1;
                *(v24) = 92;
            }
            else
            {
                __overflow();
            }
            v47 = v3->field_1;
            if (v3->field_1 != 0)
            {
                v48 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *((unsigned long long *)&v48) = v47;
                }
                else
                {
                    __overflow();
                }
            }
        }
    }
    if (((unsigned long long)v2->field_1 - 48 & 255) <= 7 || v2->field_1 == 120)
    {
        v22 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *((unsigned long long *)&v22) = v13;
        }
        else
        {
            __overflow();
        }
    }
    if (v2->field_1 == 120 || v10 == 0 && (v2->field_1 & 223) == 85 && v2->field_1 != 0 && ((unsigned long long)v2->field_1 - 48 & 255) > 7)
    {
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x408f28, 0x5));
    }
    return stack_base + 0;
}

int sub_4058a0()
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
        sub_405920(); /* do not return */
    }
}

int sub_405880()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4056d0();
}

int sub_404b10()
{
}

extern unsigned int g_409c6d;
extern unsigned long long g_60d2a0;

int sub_402ff0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rsi
    unsigned long v3;  // rdi

    v1 = g_60d2a0;
    if (g_60d2a0 == 0)
    {
        v1 = newlocale(0x1fbf, 0x409c6d, 0x0);
        g_60d2a0 = v1;
    }
    if (g_60d2a0 == 0)
    {
        if (v2 != 0)
        {
            *(v2) = v3;
            [D] PutI(904:F64x8)[t2,0] = t5
            [D] PutI(968:I8x8)[t2,0] = 0x01
        }
        else
        {
            [D] PutI(904:F64x8)[t0,0] = t3
            [D] PutI(968:I8x8)[t0,0] = 0x01
        }
        return v1;
    }
}

int sub_404d10()
{
}

int sub_4049b0()
{
}

extern unsigned int g_409c6f;
extern unsigned int g_60d1f8;
extern char g_60d2a8;
extern unsigned long long g_60d2b0;

int sub_403090()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_405cb0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60d2a8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x409c6f, 0x5);
            if (g_60d2b0 != 0)
            {
                sub_404ba0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60d2a8 != 0)
    {
        v3 = sub_405cb0();
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

extern unsigned int g_60d29c;

int sub_402b00()
{
    char v0;  // [bp-0x18]
    unsigned int *v2;  // rax
    char *v3;  // rsi
    unsigned long v5;  // rdi
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx

    v2 = __errno_location();
    if (*(v2) == 0)
    {
        if (*(v3) != 0)
        {
            if (v5 != v3)
            {
                v7 = (unsigned int)sub_404d50();
            }
            else
            {
                v6 = (unsigned int)sub_404d50();
            }
            v2 = error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v3, 0x5));
            g_60d29c = 1;
        }
        return v2;
    }
    sub_404d50();
    g_60d29c = 1;
    return (unsigned long long)error(0x0, *((int *)*((long long *)&v0)), "%s");
}

int sub_405770()
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
        sub_405920(); /* do not return */
    }
}

int sub_404cc0()
{
}

extern unsigned int g_40ae60;
extern unsigned int g_60d1f8;
extern unsigned long long stdout;

int sub_405960()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if ((unsigned int)v2 < 0)
    {
        v3 = ferror(stdout);
        if (v3 == 0)
        {
            error(g_60d1f8, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ae60, 0x5));
        }
    }
    if (v3 != 0 || (unsigned int)v2 >= 0)
    {
        v2 = (unsigned int)sub_405c90();
        return v4;
    }
}

int sub_405060()
{
}

int sub_405ab7()
{
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

