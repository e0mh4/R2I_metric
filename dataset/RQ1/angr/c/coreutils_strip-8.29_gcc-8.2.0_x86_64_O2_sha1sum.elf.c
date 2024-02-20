#include "decompile_angr.h"
int sub_4060cb()
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
    v7 = (unsigned int)sub_404b70();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_406bc0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_404b70();
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

int sub_4061a0()
{
}

int sub_407e40()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_407d80();
}

extern unsigned int g_408681;
extern unsigned int g_4087a8;
extern unsigned int g_4087d0;
extern unsigned int g_408818;
extern unsigned int g_408850;
extern unsigned int g_408880;
extern unsigned int g_4088c8;
extern unsigned int g_408900;
extern unsigned int g_408938;
extern unsigned int g_408af0;
extern unsigned int g_408b20;
extern unsigned int g_408b58;
extern unsigned int g_408cb0;
extern unsigned int g_408cf8;
extern unsigned int g_408d18;
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
        dcgettext(0x0, 0x4087a8, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4087d0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408818, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408850, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408880, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4088c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408900, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408938, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408af0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408b20, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408b58, 0x5));
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
            v33 = "sha1sum";
            v34 = 8;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408681, 0x5));
            v42 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408681, 0x5));
            v41 = setlocale(0x5, 0x0);
            if (v41 != 0)
            {
                v43 = strncmp(v41, "en_", 0x3);
            }
            if (v43 == 0 || v41 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408cf8, 0x5));
            }
        }
        if ((v3 == 0 || v42 != 0) && (v3 == 0 || strncmp(v42, "en_", 0x3) != 0) && (v43 != 0 || v3 != 0) && (v41 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408cb0, 0x5));
        }
        if (v3 != 0 || v43 != 0 && v41 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408cf8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408d18, 0x5));
    }
    exit(v19); /* do not return */
}

extern int512_t g_60c420;

int sub_405f90()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60c420 : v1)) = v2;
    return &g_60c420;
}

extern int512_t g_60c420;

int sub_406030()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60c420 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_404b70();
}

typedef struct struct_1 {
    char padding_0[4231960];
    unsigned long long field_409318;
    unsigned int field_40931c;
    unsigned short field_40931e;
} struct_1;

extern int512_t g_409318;
extern int512_t g_40931c;
extern int512_t g_40931e;
extern int512_t g_409320;

int sub_404320()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned int v3[8];  // rdi
    unsigned int v4[8];  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // r8
    unsigned long long v7;  // rdi
    unsigned long long v8;  // cc_dep2
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rcx
    void *v12;  // rdx
    struct_1 *v13;  // rcx
    unsigned long long *v14;  // rdi
    unsigned long long v15;  // rdx
    unsigned long long *v16;  // rsi
    unsigned long long v17;  // rcx
    unsigned long v18;  // d

    v0 = v2;
    v4 = v3;
    v5 = v3[3 + 1];
    v10 = v3[3];
    v6 = (0 - (unsigned long long)(char)(v3[3 + 1] < 56) & -64) - -128;
    v7 = (0 - (unsigned long long)(char)(v3[3 + 1] < 56) & -0x10) + 31;
    v8 = v4[2 + 1];
    v9 = (unsigned int)v5 + v4[2 + 1];
    v4[2 + 1] = (unsigned int)v5 + v4[2 + 1];
    if ((char)[D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rax<8>, cc_dep2<8>, Conv(1->64, (Conv(64->32, rax<8>) < 0x38<32>))))
    {
        v10 = (unsigned int)v10 + 1;
        v4[3] = v10;
    }
    v4[19 + (0 - (unsigned long long)(char)((unsigned int)v5 < 56) & -0x10)] = ((unsigned int)v10 * 8 | (unsigned int)v9 % 0x20000000) * 0x1000000 | ((unsigned int)v10 * 8 | (unsigned int)v9 % 0x20000000) * 0x100 & 0xff0000 | ((unsigned int)v10 * 8 | (unsigned int)v9 % 0x20000000) >> 8 & 0xff00 | ((unsigned int)v10 * 8 | (unsigned int)v9 % 0x20000000) >> 24 & 255;
    v4[4 + v7] = (unsigned int)v9 * 0x800 & 0xff0000 | (unsigned int)(v9 * 8 >> 24) | (unsigned int)v9 * 0x8000000 | (unsigned int)(v9 * 8 >> 8) & 0xff00;
    v12 = (char *)&v4[4] + v5;
    v13 = v6 - v5 - 8;
    if (!(v6 - v5 - 8 < 8))
    {
        v14 = v12 + 8 & -8;
        *((long long *)v12) = 128;
        *((long long *)(v12 + v13 - 8)) = *((long long *)(v13 + &g_409318));
        v15 = v12 - (v12 + 8 & -8);
        v16 = (char *)&g_409320 + -1 * v15;
        for (v17 = &v13->padding_0[v15] >> 3; v17 != 0; v16 = &v16[v18])
        {
            v17 -= 1;
            *(v14) = *(v16);
            v14 = &v14[v18];
        }
    }
    else if (!((v13 & 4) == 0))
    {
        *((int *)v12) = 128;
        *((int *)(v12 + v13 - 4)) = *((int *)(v13 + &g_40931c));
    }
    else if (v13 != 0)
    {
        *((char *)v12) = 128;
        if ((v13 & 2) != 0)
        {
            *((short *)(v12 + v13 - 2)) = *((short *)(v13 + &g_40931e));
        }
    }
    sub_403180();
}

int sub_406610()
{
}

int sub_406e50()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_407010() != 0)
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

extern int512_t g_60c420;

int sub_405fa0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60c420 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60c420 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_4060a2()
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

extern unsigned int g_60c294;
extern unsigned int g_60c298;
extern unsigned int g_60c29c;
extern unsigned int g_60c460;
extern unsigned int g_60c464;
extern unsigned int g_60c468;
extern unsigned long long g_60c470;
extern unsigned long long g_60c4a0;

int sub_407d80()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60c460 = g_60c29c;
    g_60c464 = g_60c298;
    v1 = (unsigned int)v2;
    v0 = &g_60c460;
    g_60c29c = g_60c460;
    g_60c4a0 = g_60c470;
    g_60c294 = g_60c468;
    return sub_4077b0();
}

int sub_405f40()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_406dc0();
}

typedef struct struct_2 {
    char padding_0[4231520];
    char field_409160;
} struct_2;

extern unsigned int g_40869c;
extern unsigned int g_4086d8;
extern unsigned int g_4086e7;
extern unsigned int g_408721;
extern unsigned int g_408730;
extern unsigned int g_408d50;
extern unsigned int g_408fc0;
extern unsigned int g_408ff0;
extern unsigned int g_409028;
extern unsigned int g_409058;
extern unsigned int g_409088;
extern unsigned int g_4090b8;
extern unsigned int g_4090e8;
extern unsigned int g_409118;
extern unsigned int g_40a5c7;
extern unsigned int g_60c210;
extern unsigned int g_60c29c;
extern char g_60c2d8;
extern char g_60c2d9;
extern char g_60c2da;
extern char g_60c2db;
extern char g_60c2dc;
extern unsigned long long g_60c2e0;
extern unsigned long long g_60c2e8;
extern char g_60c2f0;
extern unsigned long long stdin;
extern unsigned long long stdout[7];

int main()
{
    unsigned long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long *v2;  // [bp-0xe8]
    unsigned long|char * v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd5]
    unsigned int v5;  // [bp-0xd4]
    unsigned long|unsigned long long v6;  // [bp-0xd0]
    unsigned long|char *|unsigned long long|char v7;  // [bp-0xc8]
    unsigned long|unsigned long long v8;  // [bp-0xc0]
    char *|unsigned long long v9;  // [bp-0xb8]
    unsigned long long *v10;  // [bp-0xb0]
    unsigned long|unsigned long long v11;  // [bp-0xa8]
    char v12;  // [bp-0xa0]
    char v13;  // [bp-0x9f]
    unsigned long long v14;  // [bp-0x9e]
    char v15;  // [bp-0x9d]
    unsigned int v16;  // [bp-0x9c]
    char v17;  // [bp-0x89]
    unsigned long long v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    char v20;  // [bp-0x78]
    char v21;  // [bp-0x58]
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
    struct_2 *v87;  // rsi
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
    sub_4049d0();
    setlocale(0x6, 0x40a5c7);
    bindtextdomain(0x40869c, 0x408d50);
    textdomain(0x40869c);
    sub_4085a0();
    setvbuf(stdout, NULL, 0x1, 0x0);
    while (true)
    {
        v32 = sub_407e00();
        if ((unsigned int)v32 == -1)
        {
            g_60c2e8 = 42;
            g_60c2e0 = 40;
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
                        if (g_60c2da != 0)
                        {
                            v35 = "the --ignore-missing option is meaningful only when verifying checksums";
                        }
                        else if (g_60c2dc != 0)
                        {
                            v35 = "the --status option is meaningful only when verifying checksums";
                        }
                        else if (g_60c2db != 0)
                        {
                            v35 = "the --warn option is meaningful only when verifying checksums";
                        }
                        else if (g_60c2d9 == 1)
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
                    g_60c2dc = 0;
                    g_60c2db = 0;
                    g_60c2d9 = 1;
                }
                else if (v32 <= 130)
                {
                    if ((unsigned int)v32 == 128)
                    {
                        g_60c2da = 1;
                    }
                    if ((unsigned int)v32 == 129)
                    {
                        g_60c2dc = 1;
                        g_60c2db = 0;
                        g_60c2d9 = 0;
                    }
                }
                else
                {
                    if ((unsigned int)v32 == 131)
                    {
                        g_60c2d8 = 1;
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
                            sub_406a80();
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
            g_60c2dc = 0;
            g_60c2db = 1;
            g_60c2d9 = 0;
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
            if (g_60c29c == (unsigned int)v26)
            {
                *(v10) = "-";
                v10 = &v10[1];
            }
            v2 = v28 + (int)g_60c29c * 8;
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
                            g_60c2f0 = 1;
                            v41 = stdin;
                            v3 = dcgettext(0x0, 0x4086d8, 0x5);
                        }
                        else
                        {
                            v41 = (unsigned long long)(unsigned int)sub_404930();
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
                                if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
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
                                        v48 = "SHA1";
                                        v74 = 4;
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
                                            v54 = (char)*((char *)(0 + v46 + 4));
                                            v55 = v46 + 4;
                                            if (*((char *)(0 + v46 + 4)) == 32)
                                            {
                                                v54 = (char)*((char *)(0 + v46 + 5));
                                                v55 = v46 + 5;
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
                                            v58 = rax<8> + g_60c2e8;
                                            if (&v45[-1 * v46] >= v58)
                                            {
                                                v59 = v46 + g_60c2e0;
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
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 != 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] == 1) && g_60c210 != 0)
                                {
                                    g_60c210 = 1;
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 == 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) == 32) && g_60c210 != 1)
                                {
                                    g_60c210 = 0;
                                    v65 = v64 + 2;
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 != 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] == 1) && g_60c210 != 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 == 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) == 32)
                                {
                                    v62 = 0 + v65;
                                    if ((char)v8 != 0)
                                    {
                                        v71 = (char)(sub_4029b0() != 0);
                                    }
                                }
                                if (v54 == 40 && (char)v53 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && *((char *)v18) != 35 && v60 != v74 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41) && v47 != 0 && v68 != 0 || v54 == 40 && (char)v53 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && *((char *)v18) != 35 && v60 != v74 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41) && v47 == 0)
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
                                    if (g_60c2db != 0)
                                    {
                                        v82 = (unsigned int)sub_406470();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x408fc0, 0x5));
                                    }
                                }
                                if (...)
                                {
                                    v81 = 0;
                                    if (g_60c2dc == 0)
                                    {
                                        v81 = 0;
                                        v81 = strchr(v62, 0xa) != 0;
                                    }
                                    if ((char)v7 == 0)
                                    {
                                        v6 += 1;
                                        if (g_60c2dc == 0)
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
                                    else if (v17 == 0 || g_60c2da == 0)
                                    {
                                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                        {
                                            v8 = g_60c2e0 >> 1;
                                            *((unsigned long long *)&v7) = (unsigned int)sub_402af0();
                                            v85 = *((long long *)(unsigned long long)__ctype_tolower_loc());
                                            while (true)
                                            {
                                                v87 = (unsigned long long)v21;
                                                v88 = (unsigned long long)v21 >> 4;
                                                if (v85[(unsigned long long)v72[2 * v64]] == (char)*((char *)(4231520 + (unsigned long long)((unsigned int)rsi<8> & 15))) && v85[(unsigned long long)v72[1 + 2 * v64]] == (char)*((char *)(4231520 + (unsigned long long)(v21 & 15))))
                                                {
                                                    v64 += 1;
                                                    v64 = v8;
                                                }
                                                if (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)(v21 & 15))))
                                                {
                                                    v11 += 1;
                                                    break;
                                                    if (g_60c2dc != 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)(v21 & 15))))
                                            {
                                                v94 = (char)v4;
                                            }
                                            else if (g_60c2dc == 0 && (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)(v21 & 15)))))
                                            {
                                                v91 = stdout[5];
                                            }
                                            else if (v85[(unsigned long long)v72[2 * v64]] == (char)*((char *)(4231520 + (unsigned long long)((unsigned int)rsi<8> & 15))) && v8 == v64 && v85[(unsigned long long)v72[1 + 2 * v64]] == (char)*((char *)(4231520 + (unsigned long long)(v21 & 15))))
                                            {
                                                v13 = g_60c2dc;
                                            }
                                            else if (g_60c2dc == 0 && (v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)((unsigned int)rsi<8> & 15))) || v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4231520 + (unsigned long long)(v21 & 15)))))
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
                                        if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0)
                                        {
                                            v13 = g_60c2dc;
                                            if (g_60c2dc == 0)
                                            {
                                                v13 = g_60c2d9;
                                                if (g_60c2d9 == 0)
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
                                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || g_60c2dc == 0 && g_60c2d9 == 0 && v81 != 0)
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
                                                    v7 = g_60c2e0 >> 1;
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
                                    if ((g_60c2dc == 0 && g_60c2d9 == 0 && v81 == 0 && (char)v7 != 0 && (v17 == 0 || g_60c2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) || (char)v7 != 0 && (v17 == 0 || g_60c2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60c2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60c2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 == v8) && g_60c2d9 == 0)
                                    {
                                        v89 = "OK";
                                    }
                                    if (g_60c2dc == 0 && (char)v7 == 0 || (g_60c2dc == 0 && g_60c2d9 == 0 && v81 == 0 && (char)v7 != 0 && (v17 == 0 || g_60c2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) || (char)v7 != 0 && (v17 == 0 || g_60c2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60c2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60c2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 == v8) && g_60c2d9 == 0 || (char)v7 != 0 && (v17 == 0 || g_60c2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60c2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60c2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 != v8)
                                    {
                                        __printf_chk(0x1, ": %s\n", dcgettext(0x0, v89, 0x5));
                                    }
                                    v94 = (char)v4;
                                }
                                if (...)
                                {
                                    v95 += 1;
                                    v115 = (unsigned int)sub_406470();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4086e7, 0x5));
                                }
                                if (...)
                                {
                                    free(v18);
                                    v98 = *((int *)v41) & 32;
                                    if (((char)*((int *)v41) & 32) == 0)
                                    {
                                        if (v5 != 0)
                                        {
                                            v99 = sub_406e50();
                                        }
                                        if (v5 == 0 || v99 == 0)
                                        {
                                            if (v94 != 0)
                                            {
                                                if (g_60c2dc == 0)
                                                {
                                                    if (v80 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x409058, 0x409028, v80, 0x5));
                                                    }
                                                    if (v6 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x4090b8, 0x409088, v6, 0x5));
                                                    }
                                                    if (v11 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x409118, 0x4090e8, v11, 0x5));
                                                    }
                                                    if (v13 == 0 && g_60c2da != 0)
                                                    {
                                                        v114 = (unsigned int)sub_406470();
                                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x408730, 0x5));
                                                    }
                                                }
                                                if (v6 == 0 && v11 == 0 && v13 != 0)
                                                {
                                                    v98 = (unsigned int)g_60c2d8 ^ 1 | v98;
                                                }
                                            }
                                            else
                                            {
                                                v107 = (unsigned int)sub_406470();
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x408ff0, 0x5));
                                            }
                                            v103 = v98 & 1;
                                        }
                                    }
                                    else
                                    {
                                        v100 = (unsigned int)sub_406470();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x408721, 0x5));
                                        v103 = 0;
                                    }
                                }
                            }
                            if (...)
                            {
                                *((unsigned long long *)&v12) = v12 & v103;
                            }
                            else if (...)
                            {
                                v106 = (unsigned int)sub_406470();
                                error(0x0, *(__errno_location()), "%s");
                                v103 = 0;
                            }
                        }
                        v106 = (unsigned int)sub_406470();
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
                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60c2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                        {
                            v108 = 0;
                            while (true)
                            {
                                v108 += 1;
                                __printf_chk(0x1, "%02x", (unsigned int)v20);
                                if (g_60c2e0 >> 1 <= v108)
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
                            fwrite_unlocked("SHA1", 0x1, 0x4, stdout);
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
            if (g_60c2f0 != 0)
            {
                if ((char)(sub_406e50() + 1 == 0))
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
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4086d8, 0x5));
}

int sub_404760()
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]

    v0 = 17279655951921914625;
    v1 = 1167088121787636990;
    v2 = 3285377520;
    v3 = 0;
    sub_404460();
    return sub_404320();
}

int sub_4062c0()
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
    return sub_405da0();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_406a20()
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
    return sub_406620();
}

extern unsigned int g_40a48f;
extern unsigned int g_60c220;

int sub_406e10()
{
    dcgettext(0x0, 0x40a48f, 0x5);
    error(g_60c220, 0x0, "%s");
}

extern int512_t g_60c420;

int sub_405f80()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60c420 : v1));
}

int sub_406e3c()
{
    abort(); /* do not return */
}

extern unsigned int g_40a152;
extern unsigned int g_40a17d;
extern unsigned int g_40a3b0;

int sub_406b40()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a152, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a17d, 0x5));
    dcgettext(0x0, 0x40a3b0, 0x5);
}

int sub_406dc0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406bc0();
}

int sub_406280()
{
}

int sub_406430()
{
}

int sub_406270()
{
}

int sub_4065d0()
{
}

int sub_406580()
{
}

int sub_40314d()
{
    unsigned int v1[5];  // rsi
    unsigned int v2[5];  // rdi

    v1[0] = v2[0] * 0x1000000 | v2[0] * 0x100 & 0xff0000 | v2[0] >> 8 & 0xff00 | v2[0] >> 24 & 255;
    v1[1] = v2[1] * 0x1000000 | v2[1] * 0x100 & 0xff0000 | v2[1] >> 8 & 0xff00 | v2[1] >> 24 & 255;
    v1[1] = v2[1] * 0x1000000 | v2[1] * 0x100 & 0xff0000 | v2[1] >> 8 & 0xff00 | v2[1] >> 24 & 255;
    v1[1 + 1] = v2[1 + 1] * 0x1000000 | v2[1 + 1] * 0x100 & 0xff0000 | v2[1 + 1] >> 8 & 0xff00 | v2[1 + 1] >> 24 & 255;
    v1[2] = v2[2] * 0x1000000 | v2[2] * 0x100 & 0xff0000 | v2[2] >> 8 & 0xff00 | v2[2] >> 24 & 255;
    return v1;
}

extern char g_60c2da;
extern char g_60c2f0;
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
        g_60c2f0 = 1;
        sub_404900();
        v13 = sub_4047c0();
    }
    else
    {
        v11 = (unsigned int)sub_404930();
        if (v11 != 0)
        {
            sub_404900();
            v15 = sub_4047c0();
            if (v15 == 0)
            {
                v18 = sub_406e50();
                if (v18 != 0)
                {
                    v16 = 0;
                    v21 = (unsigned int)sub_406470();
                    error(0x0, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            v16 = g_60c2da;
            v17 = __errno_location();
            if (g_60c2da != 0 && *(v17) == 2)
            {
                *(v9) = 1;
            }
            if (g_60c2da == 0 || *(v17) != 2)
            {
                v16 = 0;
                sub_406470();
                error(0x0, *(v17), "%s");
            }
        }
    }
    if ((char)v10 == 0 || v11 != 0)
    {
        if (((char)v10 == 0 || v15 != 0) && (v13 != 0 || (char)v10 != 0))
        {
            v16 = 0;
            v20 = (unsigned int)sub_406470();
            error(0x0, *(__errno_location()), "%s");
            if (stdin != v11)
            {
                sub_406e50();
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

extern char g_60c420;

int sub_406000()
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
    v3 = (v2 == 0? &g_60c420 : v2);
    *((int *)(tmp_11? &g_60c420 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60c420;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60c420;
        abort(); /* do not return */
    }
}

int sub_4047c0()
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    unsigned long v6;  // r12
    void *v7;  // r12
    unsigned long long v8;  // rbx
    unsigned int *v9;  // rdi
    unsigned long long v10;  // rax

    if (v6 != 0)
    {
        v3 = 0;
        v6 = malloc(0x8048);
        v0 = 17279655951921914625;
        v1 = 1167088121787636990;
        v2 = 3285377520;
        while (true)
        {
            v8 = 0;
            while (true)
            {
                v10 = fread_unlocked(v7 + v8, 0x1, 0x8000 - v8, v9);
                v8 += v10;
                if (v8 != 0x8000)
                {
                    if (v10 == 0 && ((char)*(v9) & 32) != 0)
                    {
                        free(v7);
                        return 1;
                    }
                    if (v10 == 0 && ((char)*(v9) & 32) == 0 || ((char)*(v9) & 16) != 0 && v10 != 0)
                    {
                        if (v8 != 0)
                        {
                            sub_404460();
                        }
                        sub_404320();
                        free(v7);
                        return 0;
                    }
                }
                else
                {
                    sub_403180();
                }
            }
        }
    }
    else
    {
        return 1;
    }
}

int sub_406440()
{
}

int sub_406be0()
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
        sub_406e10(); /* do not return */
    }
}

int sub_4065b0()
{
}

extern int512_t g_60c420;

int sub_405fe0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60c420 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60c420 : v1) + 4)) = v3;
    return v2;
}

int sub_403180()
{
    void tmp_87;  // tmp #87
    void tmp_369;  // tmp #369
    void tmp_377;  // tmp #377
    void tmp_419;  // tmp #419
    void tmp_694;  // tmp #694
    void tmp_758;  // tmp #758
    void tmp_849;  // tmp #849
    void tmp_904;  // tmp #904
    void tmp_919;  // tmp #919
    void tmp_439;  // tmp #439
    void tmp_530;  // tmp #530
    void tmp_585;  // tmp #585
    void tmp_621;  // tmp #621
    void tmp_676;  // tmp #676
    void tmp_697;  // tmp #697
    void tmp_424;  // tmp #424
    void tmp_551;  // tmp #551
    void tmp_641;  // tmp #641
    void tmp_854;  // tmp #854
    void tmp_926;  // tmp #926
    void tmp_314;  // tmp #314
    void tmp_445;  // tmp #445
    void tmp_607;  // tmp #607
    void tmp_614;  // tmp #614
    unsigned int v0;  // [bp-0xd0]
    void tmp_686;  // tmp #686
    void tmp_326;  // tmp #326
    void tmp_364;  // tmp #364
    void tmp_523;  // tmp #523
    void tmp_628;  // tmp #628
    void tmp_813;  // tmp #813
    void tmp_841;  // tmp #841
    void tmp_925;  // tmp #925
    void tmp_284;  // tmp #284
    void tmp_398;  // tmp #398
    void tmp_400;  // tmp #400
    void tmp_425;  // tmp #425
    void tmp_513;  // tmp #513
    void tmp_531;  // tmp #531
    void tmp_583;  // tmp #583
    void tmp_599;  // tmp #599
    void tmp_627;  // tmp #627
    void tmp_679;  // tmp #679
    void tmp_719;  // tmp #719
    void tmp_724;  // tmp #724
    void tmp_729;  // tmp #729
    void tmp_842;  // tmp #842
    void tmp_891;  // tmp #891
    void tmp_914;  // tmp #914
    void tmp_929;  // tmp #929
    void tmp_930;  // tmp #930
    void tmp_546;  // tmp #546
    void tmp_557;  // tmp #557
    void tmp_567;  // tmp #567
    void tmp_600;  // tmp #600
    void tmp_601;  // tmp #601
    void tmp_605;  // tmp #605
    void tmp_820;  // tmp #820
    void tmp_932;  // tmp #932
    void tmp_512;  // tmp #512
    void tmp_544;  // tmp #544
    void tmp_611;  // tmp #611
    void tmp_661;  // tmp #661
    void tmp_685;  // tmp #685
    void tmp_783;  // tmp #783
    void tmp_833;  // tmp #833
    void tmp_908;  // tmp #908
    void tmp_383;  // tmp #383
    void tmp_388;  // tmp #388
    void tmp_393;  // tmp #393
    void tmp_468;  // tmp #468
    void tmp_529;  // tmp #529
    void tmp_552;  // tmp #552
    void tmp_636;  // tmp #636
    void tmp_649;  // tmp #649
    void tmp_707;  // tmp #707
    void tmp_771;  // tmp #771
    void tmp_779;  // tmp #779
    void tmp_781;  // tmp #781
    void tmp_784;  // tmp #784
    void tmp_836;  // tmp #836
    void tmp_344;  // tmp #344
    void tmp_389;  // tmp #389
    void tmp_401;  // tmp #401
    void tmp_457;  // tmp #457
    void tmp_595;  // tmp #595
    void tmp_625;  // tmp #625
    void tmp_708;  // tmp #708
    void tmp_730;  // tmp #730
    void tmp_878;  // tmp #878
    void tmp_322;  // tmp #322
    void tmp_382;  // tmp #382
    void tmp_501;  // tmp #501
    void tmp_508;  // tmp #508
    void tmp_624;  // tmp #624
    void tmp_714;  // tmp #714
    void tmp_838;  // tmp #838
    void tmp_839;  // tmp #839
    void tmp_906;  // tmp #906
    void tmp_363;  // tmp #363
    void tmp_704;  // tmp #704
    void tmp_753;  // tmp #753
    void tmp_251;  // tmp #251
    void tmp_309;  // tmp #309
    unsigned int v1;  // [bp-0xcc]
    unsigned int v2;  // [bp-0xc8]
    unsigned int v3;  // [bp-0xc4]
    unsigned int v4;  // [bp-0xc0]
    unsigned int v5;  // [bp-0xbc]
    unsigned int v6;  // [bp-0xb8]
    unsigned int v7;  // [bp-0xb4]
    unsigned int v8;  // [bp-0xb0]
    unsigned int v9;  // [bp-0xac]
    unsigned int v10;  // [bp-0xa8]
    unsigned int v11;  // [bp-0xa4]
    unsigned int v12;  // [bp-0xa0]
    unsigned int v13;  // [bp-0x9c]
    unsigned int v14;  // [bp-0x98]
    unsigned int v15;  // [bp-0x94]
    unsigned int v16;  // [bp-0x90]
    unsigned int v17;  // [bp-0x8c]
    unsigned long v18;  // [bp-0x88]
    unsigned int v19[6];  // [bp-0x80]
    unsigned int v20;  // [bp-0x78]
    unsigned int v21;  // [bp-0x74]
    unsigned int v22;  // [bp-0x70]
    unsigned int v23;  // [bp-0x6c]
    unsigned int v24;  // [bp-0x68]
    unsigned int v25;  // [bp-0x64]
    unsigned int v26;  // [bp-0x60]
    unsigned int v27;  // [bp-0x5c]
    unsigned int v28;  // [bp-0x58]
    unsigned int v29;  // [bp-0x54]
    unsigned int v30;  // [bp-0x50]
    unsigned int v31;  // [bp-0x4c]
    unsigned int v32;  // [bp-0x48]
    unsigned int v33;  // [bp-0x44]
    unsigned int v34;  // [bp-0x40]
    unsigned int v35;  // [bp-0x3c]
    unsigned long long v36;  // [bp-0x10]
    unsigned int v38;  // r10d
    unsigned long long v39;  // r14
    unsigned long long v40;  // rdi
    unsigned long v42;  // rsi
    unsigned int v44[7];  // rdx
    unsigned int v45[7];  // rbx
    unsigned long long v46;  // rdi
    char v47;  // r10b
    unsigned long long v49;  // r8
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdx
    unsigned long long v52;  // r9
    unsigned long v53;  // rcx
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rdi
    unsigned long long v57;  // rsi
    unsigned long long v59;  // r10
    unsigned int v61;  // ebx
    unsigned long long v62;  // r13
    unsigned long long v63;  // r14
    unsigned long long v64;  // rbp
    unsigned long v65;  // rax
    unsigned long long v66;  // rsi
    unsigned long long v67;  // r8
    unsigned long v68;  // r9
    unsigned long v69;  // rdi
    unsigned long long v70;  // rdx
    unsigned long long v71;  // r15
    unsigned long long v72;  // r15
    unsigned long long v73;  // r11
    unsigned long long v74;  // r10
    unsigned long v75;  // r8
    unsigned long long v76;  // rsi
    unsigned long v77;  // rdi
    unsigned long long v79;  // rdx
    unsigned long v80;  // rax
    unsigned long long v81;  // r9
    unsigned long long v82;  // r8
    unsigned long long v83;  // rdi
    unsigned long v84;  // rbx
    unsigned int v85;  // esi
    unsigned long v86;  // r15
    unsigned long long v87;  // rdx
    unsigned long v88;  // r14
    unsigned long long v89;  // rax
    unsigned long v90;  // rbp
    unsigned long v91;  // r13
    unsigned long long v92;  // r12
    unsigned long v93;  // r15
    unsigned long long v94;  // r13
    unsigned long long v95;  // r12
    unsigned long v96;  // r14
    unsigned long long v97;  // r11
    unsigned long v98;  // rbp
    unsigned long long v99;  // r15
    unsigned long long v100;  // r14
    unsigned long long v101;  // r13
    unsigned long v102;  // r11
    unsigned long long v103;  // r12
    unsigned long v104;  // r10
    unsigned long long v105;  // r8
    unsigned long long v106;  // rsi
    unsigned long v107;  // r9
    unsigned long long v108;  // rdi
    unsigned long long v109;  // rbx
    unsigned long long v110;  // r11
    unsigned long v111;  // rdx
    unsigned long v112;  // r9
    unsigned long long v113;  // rdi
    unsigned long long v114;  // r10
    unsigned int v115;  // ebx
    unsigned long long v116;  // rsi
    unsigned long v117;  // cc_ndep
    unsigned long v118;  // r8
    unsigned long long v119;  // rbp
    unsigned long long v120;  // rax
    unsigned long v121;  // rdx
    unsigned long long v122;  // rbx
    unsigned long long v123;  // rbp
    unsigned long v124;  // r9
    unsigned long long v125;  // rdi
    unsigned long v126;  // r8
    unsigned long long v127;  // r14
    unsigned long v128;  // cc_ndep
    unsigned long long v129;  // r15
    unsigned long long v130;  // r10
    unsigned long long v131;  // rax
    unsigned long long v132;  // r14
    unsigned long long v133;  // r13
    unsigned long v134;  // rdx
    unsigned long long v135;  // r12
    unsigned long v136;  // rbx
    unsigned long long v137;  // r10
    unsigned long v138;  // r9
    unsigned long long v139;  // rdi
    unsigned long long v140;  // rax
    unsigned long long v141;  // cc_dep1
    unsigned long v142;  // cc_ndep
    unsigned long long v143;  // r8
    unsigned long long v144;  // rsi
    unsigned long v145;  // rdx
    unsigned long long v146;  // r11
    unsigned long long v147;  // r10
    unsigned long v148;  // r9
    unsigned long long v149;  // rbx
    unsigned long long v151;  // rdi
    unsigned long v152;  // cc_ndep
    unsigned long long v153;  // rsi
    unsigned long long v154;  // r8
    unsigned long long v155;  // rbx
    unsigned long v156;  // r10
    unsigned long long v157;  // r15
    unsigned long long v158;  // rbp
    unsigned long long v159;  // rdi
    unsigned long long v160;  // r11
    unsigned long v161;  // r8
    unsigned long v162;  // cc_ndep
    unsigned long v163;  // rdx
    unsigned long long v164;  // rsi
    unsigned long long v165;  // r9
    unsigned long long v166;  // rbp
    unsigned long long v167;  // r8
    unsigned long long v168;  // rdi
    unsigned long long v169;  // rbx
    unsigned long v170;  // r10
    unsigned long v171;  // r11
    unsigned long long v172;  // rsi
    unsigned long v173;  // r15
    unsigned long long v174;  // r14
    unsigned long long v175;  // rdx
    unsigned long long v176;  // rax
    unsigned long v177;  // r12
    unsigned long long v178;  // r9
    unsigned long long v179;  // r14
    unsigned long v180;  // r15
    unsigned long long v181;  // rbx
    unsigned long v182;  // rbp
    unsigned long long v184;  // r13
    unsigned long long v185;  // r8
    unsigned long long v186;  // r11
    unsigned long v188;  // r8
    unsigned int v190;  // r14d
    unsigned long long v191;  // r14

    v38 = 0;
    v36 = v39;
    v45 = v44;
    tmp_87 = (unsigned int)v42 + v44[2 + 1];
    v46 = v44[1];
    *((unsigned int *[7])&v19[0]) = v44;
    v47 = [D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rsi<8>, Conv(32->64, Load(addr=(rdx<8> + 0x14<64>), size=4, endness=Iend_LE)), cc_ndep<8>);
    v49 = v44[1 + 1];
    v18 = (v42 & -4) + v40;
    v50 = v44[0];
    v51 = v44[1];
    v52 = v45[2];
    v45[2 + 1] = tmp_87;
    v45[3] = v45[3] + (unsigned int)v42 % 0x100000000 + r10<4>;
    if (v53 < v18)
    {
        v15 = v45[2];
        v54 = v46;
        v53 = v40;
        v14 = v49;
        v12 = v51;
        v17 = v50;
        v13 = v46;
        v56 = v14;
        do
        {
            v57 = 0;
            do
            {
                v20 = *((int *)(v55 + v57)) * 0x1000000 | *((int *)(v55 + v57)) * 0x100 & 0xff0000 | *((int *)(v55 + v57)) >> 8 & 0xff00 | *((int *)(v55 + v57)) >> 24 & 255;
                v57 += 4;
            }
            while (v57 != 64);
            v59 = v21;
            v61 = v22;
            v62 = v24;
            v63 = v25;
            tmp_369 = v22 + v54 + 1518500249;
            tmp_377 = (((unsigned int)v54 ^ (unsigned int)v56) & (unsigned int)v51 ^ (unsigned int)v56) + ((unsigned int)v50 * 32 | (unsigned int)v50 >> 27) + (unsigned int)(v20 + v52 + 1518500249);
            tmp_419 = (((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ (unsigned int)v54) & (unsigned int)v50 ^ (unsigned int)v54;
            v64 = v23;
            tmp_694 = ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 2 | (((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 0x40000000;
            tmp_758 = ((((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) & ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) + (unsigned int)(v64 + ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) + 1518500249) + ((((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 32 | ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 27) >> 2 | (((((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) & ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) + (unsigned int)(v64 + ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) + 1518500249) + ((((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 32 | ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 27)) * 0x40000000;
            tmp_849 = ((((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000) ^ (((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 2 | (((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 0x40000000)) & ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) + (unsigned int)(v62 + ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) + 1518500249) + ((((((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) & ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) + (unsigned int)(v64 + ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) + 1518500249) + ((((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 32 | ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 27)) * 32 | ((((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) & ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) + (unsigned int)(v64 + ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) + 1518500249) + ((((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 32 | ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 27) >> 27) >> 2 | (((((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000) ^ (((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 2 | (((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 0x40000000)) & ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) + (unsigned int)(v62 + ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) + 1518500249) + ((((((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) & ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) + (unsigned int)(v64 + ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) + 1518500249) + ((((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 32 | ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 27)) * 32 | ((((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000) ^ ((unsigned int)tmp_377 >> 2 | (unsigned int)tmp_377 * 0x40000000)) & ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) + (unsigned int)(v64 + ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) + 1518500249) + ((((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369) * 32 | ((((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249)) * 32 | ((unsigned int)tmp_377 * 32 | (unsigned int)tmp_377 >> 27) + (unsigned int)(tmp_419 + v59 + v56 + 1518500249) >> 27) + ((((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000) ^ ((unsigned int)v50 >> 2 | (unsigned int)v50 * 0x40000000)) & (unsigned int)tmp_377 ^ ((unsigned int)v51 >> 2 | (unsigned int)v51 * 0x40000000)) + (unsigned int)tmp_369 >> 27) >> 27)) * 0x40000000;
            tmp_904 = ...;
            tmp_919 = ...;
            v65 = ...;
            v66 = (unsigned long long)v28 + tmp_758 + 1518500249;
            v67 = ((unsigned int)tmp_919 ^ (unsigned int)tmp_758) + (unsigned int)((unsigned long long)v27 + tmp_694 + 1518500249) + ((unsigned int)tmp_904 * 32 | (unsigned int)tmp_904 >> 27);
            v68 = (unsigned int)tmp_904 >> 2 | (unsigned int)tmp_904 * 0x40000000;
            v69 = ((unsigned int)tmp_849 ^ (unsigned int)v65) & (unsigned int)tmp_904 ^ (unsigned int)tmp_849;
            v70 = (unsigned long long)v29 + tmp_849 + 1518500249;
            v71 = v30;
            tmp_439 = (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000;
            tmp_530 = (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 2 | ((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 0x40000000;
            tmp_585 = ((((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000) ^ ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) & (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) + (unsigned int)(v31 + v68 + 1518500249) + (((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27)) * 32 | (((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) >> 27);
            tmp_621 = (((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) >> 2 | ((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27)) * 0x40000000;
            tmp_676 = ((((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000) ^ ((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 2 | ((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 0x40000000)) & (((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) ^ ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) + (unsigned int)((unsigned long long)(v32 + ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) + 1518500249) + ((((((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000) ^ ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) & (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) + (unsigned int)(v31 + v68 + 1518500249) + (((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27)) * 32 | (((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) >> 27)) * 32 | ((((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000) ^ ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) & (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) + (unsigned int)(v31 + v68 + 1518500249) + (((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27)) * 32 | (((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) >> 27) >> 27);
            tmp_697 = (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 2 | ((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 0x40000000) ^ ((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) >> 2 | ((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27)) * 0x40000000)) & ((((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000) ^ ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) & (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) + (unsigned int)(v31 + v68 + 1518500249) + (((((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27)) * 32 | (((unsigned int)v68 ^ ((unsigned int)v67 >> 2 | (unsigned int)v67 * 0x40000000)) & (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) ^ (unsigned int)v68) + (unsigned int)(v71 + v65 + 1518500249) + (((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 32 | (((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 27) >> 27) ^ ((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27) >> 2 | ((((unsigned int)v65 ^ (unsigned int)v68) & (unsigned int)v67 ^ (unsigned int)v65) + (unsigned int)v70 + (((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 32 | (unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 27)) * 0x40000000);
            v72 = v35;
            v73 = (v20 ^ v61 ^ v28 ^ v33) * 2 | (v20 ^ v61 ^ v28 ^ v33) >> 31;
            v74 = ((unsigned int)v59 ^ (unsigned int)v64 ^ v29 ^ v34) * 2 | ((unsigned int)v59 ^ (unsigned int)v64 ^ v29 ^ v34) >> 31;
            v75 = (unsigned int)(tmp_697 + (unsigned long long)(v33 + ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) >> 2 | ((unsigned int)(tmp_697 + (unsigned long long)(v33 + ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27) >> 2 | ((unsigned int)(v69 + v66) + ((unsigned int)v67 * 32 | (unsigned int)v67 >> 27)) * 0x40000000)) + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27)) * 0x40000000;
            v76 = ((((unsigned int)tmp_585 >> 2 | (unsigned int)tmp_585 * 0x40000000) ^ ((unsigned int)tmp_676 >> 2 | (unsigned int)tmp_676 * 0x40000000)) & (unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) ^ ((unsigned int)tmp_585 >> 2 | (unsigned int)tmp_585 * 0x40000000)) + (unsigned int)(v72 + tmp_621 + 1518500249) + (((((unsigned int)tmp_621 ^ ((unsigned int)tmp_585 >> 2 | (unsigned int)tmp_585 * 0x40000000)) & (unsigned int)tmp_676 ^ (unsigned int)tmp_621) + (unsigned int)((unsigned long long)v34 + tmp_530 + 1518500249) + (((unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27)) * 32 | (unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) >> 27)) * 32 | (((unsigned int)tmp_621 ^ ((unsigned int)tmp_585 >> 2 | (unsigned int)tmp_585 * 0x40000000)) & (unsigned int)tmp_676 ^ (unsigned int)tmp_621) + (unsigned int)((unsigned long long)v34 + tmp_530 + 1518500249) + (((unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27)) * 32 | (unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) >> 27) >> 27);
            v77 = (((unsigned int)tmp_621 ^ ((unsigned int)tmp_585 >> 2 | (unsigned int)tmp_585 * 0x40000000)) & (unsigned int)tmp_676 ^ (unsigned int)tmp_621) + (unsigned int)((unsigned long long)v34 + tmp_530 + 1518500249) + (((unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27)) * 32 | (unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) >> 27) >> 2 | ((((unsigned int)tmp_621 ^ ((unsigned int)tmp_585 >> 2 | (unsigned int)tmp_585 * 0x40000000)) & (unsigned int)tmp_676 ^ (unsigned int)tmp_621) + (unsigned int)((unsigned long long)v34 + tmp_530 + 1518500249) + (((unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27)) * 32 | (unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) >> 27)) * 0x40000000;
            v79 = ...;
            v80 = (unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27) >> 2 | ((unsigned int)(tmp_697 + (unsigned long long)v33 + tmp_439 + 1518500249) + ((unsigned int)tmp_676 * 32 | (unsigned int)tmp_676 >> 27)) * 0x40000000;
            tmp_424 = (((unsigned int)v80 ^ (unsigned int)v77) & (unsigned int)v76 ^ (unsigned int)v75) + (unsigned int)((unsigned long long)(((v21 ^ v23 ^ v29 ^ v34) * 2 | (v21 ^ v23 ^ v29 ^ v34) >> 31) + ((unsigned int)tmp_676 >> 2 | (unsigned int)tmp_676 * 0x40000000)) + 1518500249) + ((unsigned int)v79 * 32 | (unsigned int)v79 >> 27);
            v81 = (v30 ^ v61 ^ (unsigned int)v62 ^ (unsigned int)v72) * 2 | (v30 ^ v61 ^ (unsigned int)v62 ^ (unsigned int)v72) >> 31;
            tmp_551 = ...;
            v82 = ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) * 2 | ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) >> 31;
            tmp_641 = ((((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) ^ ((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000)) & (unsigned int)tmp_424 ^ ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000)) + (unsigned int)((((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) * 2 | ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) >> 31) + v77 + 1518500249) + ((unsigned int)tmp_551 * 32 | (unsigned int)tmp_551 >> 27);
            v83 = (v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) * 2 | (v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) >> 31;
            v84 = (unsigned int)tmp_641 >> 2 | (unsigned int)tmp_641 * 0x40000000;
            v85 = (v27 ^ (unsigned int)v63 ^ v33 ^ (unsigned int)v81) * 2 | (v27 ^ (unsigned int)v63 ^ v33 ^ (unsigned int)v81) >> 31;
            tmp_854 = ((unsigned int)tmp_551 >> 2 | (unsigned int)tmp_551 * 0x40000000) ^ ((unsigned int)tmp_641 >> 2 | (unsigned int)tmp_641 * 0x40000000) ^ ((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551);
            v86 = ((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551) >> 2 | (((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551)) * 0x40000000;
            tmp_919 = ((unsigned int)tmp_641 >> 2 | (unsigned int)tmp_641 * 0x40000000) ^ (((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551) >> 2 | (((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551)) * 0x40000000);
            tmp_926 = ((((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551)) * 32 | ((unsigned int)tmp_641 * 32 | (unsigned int)tmp_641 >> 27) + (unsigned int)(v83 + ((unsigned int)v76 >> 2 | (unsigned int)v76 * 0x40000000) + 1859775393) + (((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000) ^ ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ (unsigned int)tmp_551) >> 27) + (unsigned int)((unsigned long long)(((v27 ^ (unsigned int)v63 ^ v33 ^ (unsigned int)v81) * 2 | (v27 ^ (unsigned int)v63 ^ v33 ^ (unsigned int)v81) >> 31) + ((unsigned int)v79 >> 2 | (unsigned int)v79 * 0x40000000)) + 1859775393) + (((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) ^ ((unsigned int)tmp_551 >> 2 | (unsigned int)tmp_551 * 0x40000000) ^ (unsigned int)tmp_641);
            v87 = (v26 ^ v28 ^ v34 ^ (((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) * 2 | ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) >> 31)) * 2 | (v26 ^ v28 ^ v34 ^ (((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) * 2 | ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) >> 31)) >> 31;
            v88 = ((unsigned int)tmp_926 * 32 | (unsigned int)tmp_926 >> 27) + (unsigned int)((unsigned long long)(((v26 ^ v28 ^ v34 ^ (((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) * 2 | ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) >> 31)) * 2 | (v26 ^ v28 ^ v34 ^ (((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) * 2 | ((unsigned int)v64 ^ (unsigned int)v63 ^ v31 ^ (unsigned int)v73) >> 31)) >> 31) + ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000)) + 1859775393 + tmp_854);
            v89 = (v27 ^ v29 ^ v35 ^ ((v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) * 2 | (v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) >> 31)) * 2 | (v27 ^ v29 ^ v35 ^ ((v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) * 2 | (v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) >> 31)) >> 31;
            v90 = (unsigned int)tmp_926 >> 2 | (unsigned int)tmp_926 * 0x40000000;
            v91 = ((((unsigned int)tmp_926 * 32 | (unsigned int)tmp_926 >> 27) + (unsigned int)(v87 + ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) + 1859775393 + tmp_854)) * 32 | ((unsigned int)tmp_926 * 32 | (unsigned int)tmp_926 >> 27) + (unsigned int)(v87 + ((unsigned int)tmp_424 >> 2 | (unsigned int)tmp_424 * 0x40000000) + 1859775393 + tmp_854) >> 27) + (unsigned int)((unsigned long long)(((v27 ^ v29 ^ v35 ^ ((v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) * 2 | (v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) >> 31)) * 2 | (v27 ^ v29 ^ v35 ^ ((v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) * 2 | (v26 ^ (unsigned int)v62 ^ v32 ^ (unsigned int)v74) >> 31)) >> 31) + ((unsigned int)tmp_551 >> 2 | (unsigned int)tmp_551 * 0x40000000)) + 1859775393) + ((unsigned int)tmp_919 ^ (unsigned int)tmp_926);
            v4 = v73;
            v92 = (v28 ^ v30 ^ (unsigned int)v73 ^ v85) * 2 | (v28 ^ v30 ^ (unsigned int)v73 ^ v85) >> 31;
            v6 = v92;
            tmp_314 = (unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000;
            v7 = (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) * 2 | (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) >> 31;
            tmp_445 = (unsigned int)v91 >> 2 | (unsigned int)v91 * 0x40000000;
            v8 = (v30 ^ v32 ^ (unsigned int)v81 ^ (unsigned int)v89) * 2 | (v30 ^ v32 ^ (unsigned int)v81 ^ (unsigned int)v89) >> 31;
            tmp_607 = ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 2 | (((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 0x40000000;
            tmp_614 = (((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000) ^ ((unsigned int)v91 >> 2 | (unsigned int)v91 * 0x40000000) ^ ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) + (unsigned int)(((v30 ^ v32 ^ (unsigned int)v81 ^ (unsigned int)v89) * 2 | (v30 ^ v32 ^ (unsigned int)v81 ^ (unsigned int)v89) >> 31) + v90 + 1859775393) + ((((((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 32 | ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 27) + ((unsigned int)v90 ^ ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000) ^ (unsigned int)v91) + (unsigned int)(((v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) * 2 | (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) >> 31) + v86 + 1859775393)) * 32 | ((((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 32 | ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 27) + ((unsigned int)v90 ^ ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000) ^ (unsigned int)v91) + (unsigned int)(((v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) * 2 | (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) >> 31) + v86 + 1859775393) >> 27);
            v0 = (v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31;
            tmp_686 = ((unsigned int)v91 >> 2 | (unsigned int)v91 * 0x40000000) ^ (((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 2 | (((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 0x40000000) ^ ((((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 32 | ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 27) + ((unsigned int)v90 ^ ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000) ^ (unsigned int)v91) + (unsigned int)(((v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) * 2 | (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) >> 31) + v86 + 1859775393);
            v93 = ((((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 32 | ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 27) + ((unsigned int)v90 ^ ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000) ^ (unsigned int)v91) + (unsigned int)(((v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) * 2 | (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) >> 31) + v86 + 1859775393) >> 2 | (((((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88)) * 32 | ((unsigned int)v91 * 32 | (unsigned int)v91 >> 27) + (unsigned int)(v92 + v84 + 1859775393) + ((unsigned int)v86 ^ (unsigned int)v90 ^ (unsigned int)v88) >> 27) + ((unsigned int)v90 ^ ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000) ^ (unsigned int)v91) + (unsigned int)(((v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) * 2 | (v29 ^ v31 ^ (unsigned int)v74 ^ (unsigned int)v87) >> 31) + v86 + 1859775393)) * 0x40000000;
            v1 = (v32 ^ v34 ^ (unsigned int)v83 ^ v7) * 2 | (v32 ^ v34 ^ (unsigned int)v83 ^ v7) >> 31;
            v94 = ((((unsigned int)tmp_614 * 32 | (unsigned int)tmp_614 >> 27) + (unsigned int)(tmp_686 + (unsigned long long)(((v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31) + ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000)) + 1859775393)) * 32 | ((unsigned int)tmp_614 * 32 | (unsigned int)tmp_614 >> 27) + (unsigned int)(tmp_686 + (unsigned long long)(((v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31) + ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000)) + 1859775393) >> 27) + ((unsigned int)tmp_607 ^ (unsigned int)v93 ^ (unsigned int)tmp_614) + (unsigned int)((unsigned long long)(((v32 ^ v34 ^ (unsigned int)v83 ^ v7) * 2 | (v32 ^ v34 ^ (unsigned int)v83 ^ v7) >> 31) + ((unsigned int)v91 >> 2 | (unsigned int)v91 * 0x40000000)) + 1859775393);
            v9 = (v33 ^ v35 ^ v85 ^ v8) * 2 | (v33 ^ v35 ^ v85 ^ v8) >> 31;
            v95 = ...;
            v96 = ((unsigned int)tmp_614 * 32 | (unsigned int)tmp_614 >> 27) + (unsigned int)(tmp_686 + (unsigned long long)(((v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31) + ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000)) + 1859775393) >> 2 | (((unsigned int)tmp_614 * 32 | (unsigned int)tmp_614 >> 27) + (unsigned int)(tmp_686 + (unsigned long long)(((v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31) + ((unsigned int)v88 >> 2 | (unsigned int)v88 * 0x40000000)) + 1859775393)) * 0x40000000;
            v97 = (v4 ^ v34 ^ (unsigned int)v87 ^ v0) * 2 | (v4 ^ v34 ^ (unsigned int)v87 ^ v0) >> 31;
            v98 = ((unsigned int)tmp_614 >> 2 | (unsigned int)tmp_614 * 0x40000000) ^ (((unsigned int)tmp_614 * 32 | (unsigned int)tmp_614 >> 27) + (unsigned int)(tmp_686 + (unsigned long long)((v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31) + tmp_314 + 1859775393) >> 2 | (((unsigned int)tmp_614 * 32 | (unsigned int)tmp_614 >> 27) + (unsigned int)(tmp_686 + (unsigned long long)((v31 ^ v33 ^ (unsigned int)v82 ^ v6) * 2 | (v31 ^ v33 ^ (unsigned int)v82 ^ v6) >> 31) + tmp_314 + 1859775393)) * 0x40000000);
            v2 = v97;
            tmp_326 = (unsigned int)v94 >> 2 | (unsigned int)v94 * 0x40000000;
            tmp_364 = ((unsigned int)v98 ^ (unsigned int)v94) + (unsigned int)(v97 + v93 + 1859775393) + ((unsigned int)v95 * 32 | (unsigned int)v95 >> 27);
            v3 = (v35 ^ (unsigned int)v74 ^ (unsigned int)v89 ^ v1) * 2 | (v35 ^ (unsigned int)v74 ^ (unsigned int)v89 ^ v1) >> 31;
            tmp_523 = (unsigned int)((unsigned long long)(((v35 ^ (unsigned int)v74 ^ (unsigned int)v89 ^ v1) * 2 | (v35 ^ (unsigned int)v74 ^ (unsigned int)v89 ^ v1) >> 31) + ((unsigned int)tmp_614 >> 2 | (unsigned int)tmp_614 * 0x40000000)) + 1859775393) + ((unsigned int)v96 ^ ((unsigned int)v94 >> 2 | (unsigned int)v94 * 0x40000000) ^ (unsigned int)v95) + ((((unsigned int)v98 ^ (unsigned int)v94) + (unsigned int)(v97 + v93 + 1859775393) + ((unsigned int)v95 * 32 | (unsigned int)v95 >> 27)) * 32 | ((unsigned int)v98 ^ (unsigned int)v94) + (unsigned int)(v97 + v93 + 1859775393) + ((unsigned int)v95 * 32 | (unsigned int)v95 >> 27) >> 27);
            v99 = (v4 ^ (unsigned int)v81 ^ v6 ^ v9) * 2 | (v4 ^ (unsigned int)v81 ^ v6 ^ v9) >> 31;
            tmp_628 = (((unsigned int)v94 >> 2 | (unsigned int)v94 * 0x40000000) ^ ((unsigned int)v95 >> 2 | (unsigned int)v95 * 0x40000000) ^ (unsigned int)tmp_364) + (unsigned int)(((v4 ^ (unsigned int)v81 ^ v6 ^ v9) * 2 | (v4 ^ (unsigned int)v81 ^ v6 ^ v9) >> 31) + v96 + 1859775393) + ((unsigned int)tmp_523 * 32 | (unsigned int)tmp_523 >> 27);
            v100 = ((unsigned int)v74 ^ (unsigned int)v82 ^ v7 ^ v2) * 2 | ((unsigned int)v74 ^ (unsigned int)v82 ^ v7 ^ v2) >> 31;
            tmp_813 = (unsigned int)v83 ^ (unsigned int)v87 ^ v1 ^ (((unsigned int)v74 ^ (unsigned int)v82 ^ v7 ^ v2) * 2 | ((unsigned int)v74 ^ (unsigned int)v82 ^ v7 ^ v2) >> 31);
            tmp_841 = (((unsigned int)v95 >> 2 | (unsigned int)v95 * 0x40000000) ^ ((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000) ^ (unsigned int)tmp_523) + (unsigned int)(v100 + ((unsigned int)v94 >> 2 | (unsigned int)v94 * 0x40000000) + 1859775393) + ((unsigned int)tmp_628 * 32 | (unsigned int)tmp_628 >> 27);
            v101 = ((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) * 2 | ((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) >> 31;
            v102 = (unsigned int)tmp_628 >> 2 | (unsigned int)tmp_628 * 0x40000000;
            tmp_925 = (((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000) ^ ((unsigned int)tmp_523 >> 2 | (unsigned int)tmp_523 * 0x40000000) ^ (unsigned int)tmp_628) + (unsigned int)((unsigned long long)((((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) * 2 | ((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) >> 31) + ((unsigned int)v95 >> 2 | (unsigned int)v95 * 0x40000000)) + 1859775393) + (((((unsigned int)v95 >> 2 | (unsigned int)v95 * 0x40000000) ^ ((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000) ^ (unsigned int)tmp_523) + (unsigned int)(v100 + tmp_326 + 1859775393) + ((unsigned int)tmp_628 * 32 | (unsigned int)tmp_628 >> 27)) * 32 | (((unsigned int)v95 >> 2 | (unsigned int)v95 * 0x40000000) ^ ((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000) ^ (unsigned int)tmp_523) + (unsigned int)(v100 + tmp_326 + 1859775393) + ((unsigned int)tmp_628 * 32 | (unsigned int)tmp_628 >> 27) >> 27);
            v103 = ((unsigned int)v82 ^ v85 ^ v0 ^ ((v4 ^ (unsigned int)v81 ^ v6 ^ v9) * 2 | (v4 ^ (unsigned int)v81 ^ v6 ^ v9) >> 31)) * 2 | ((unsigned int)v82 ^ v85 ^ v0 ^ ((v4 ^ (unsigned int)v81 ^ v6 ^ v9) * 2 | (v4 ^ (unsigned int)v81 ^ v6 ^ v9) >> 31)) >> 31;
            v104 = (unsigned int)tmp_841 >> 2 | (unsigned int)tmp_841 * 0x40000000;
            v105 = (((unsigned int)tmp_523 >> 2 | (unsigned int)tmp_523 * 0x40000000) ^ ((unsigned int)tmp_628 >> 2 | (unsigned int)tmp_628 * 0x40000000) ^ (unsigned int)tmp_841) + (unsigned int)((unsigned long long)((((unsigned int)v82 ^ v85 ^ v0 ^ ((v4 ^ (unsigned int)v81 ^ v6 ^ v9) * 2 | (v4 ^ (unsigned int)v81 ^ v6 ^ v9) >> 31)) * 2 | ((unsigned int)v82 ^ v85 ^ v0 ^ ((v4 ^ (unsigned int)v81 ^ v6 ^ v9) * 2 | (v4 ^ (unsigned int)v81 ^ v6 ^ v9) >> 31)) >> 31) + ((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000)) + 1859775393) + ((unsigned int)tmp_925 * 32 | (unsigned int)tmp_925 >> 27);
            v106 = (v85 ^ (unsigned int)v89 ^ v9 ^ (((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) * 2 | ((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) >> 31)) * 2 | (v85 ^ (unsigned int)v89 ^ v9 ^ (((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) * 2 | ((unsigned int)v81 ^ (unsigned int)v83 ^ v8 ^ v3) >> 31)) >> 31;
            v4 = (unsigned int)tmp_813 * 2 | (unsigned int)tmp_813 >> 31;
            v107 = (unsigned int)tmp_925 >> 2 | (unsigned int)tmp_925 * 0x40000000;
            v108 = (((unsigned int)tmp_628 >> 2 | (unsigned int)tmp_628 * 0x40000000) ^ ((unsigned int)tmp_841 >> 2 | (unsigned int)tmp_841 * 0x40000000) ^ (unsigned int)tmp_925) + (unsigned int)((unsigned long long)(((unsigned int)tmp_813 * 2 | (unsigned int)tmp_813 >> 31) + ((unsigned int)tmp_523 >> 2 | (unsigned int)tmp_523 * 0x40000000)) + 1859775393);
            v109 = ((((unsigned int)tmp_523 >> 2 | (unsigned int)tmp_523 * 0x40000000) ^ ((unsigned int)tmp_628 >> 2 | (unsigned int)tmp_628 * 0x40000000) ^ (unsigned int)tmp_841) + (unsigned int)(v103 + ((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000) + 1859775393) + ((unsigned int)tmp_925 * 32 | (unsigned int)tmp_925 >> 27)) * 32 | (((unsigned int)tmp_523 >> 2 | (unsigned int)tmp_523 * 0x40000000) ^ ((unsigned int)tmp_628 >> 2 | (unsigned int)tmp_628 * 0x40000000) ^ (unsigned int)tmp_841) + (unsigned int)(v103 + ((unsigned int)tmp_364 >> 2 | (unsigned int)tmp_364 * 0x40000000) + 1859775393) + ((unsigned int)tmp_925 * 32 | (unsigned int)tmp_925 >> 27) >> 27;
            v5 = v106;
            tmp_284 = v6;
            tmp_398 = v8;
            tmp_400 = ((unsigned int)v87 ^ v6 ^ v2 ^ (unsigned int)v103) * 2 | ((unsigned int)v87 ^ v6 ^ v2 ^ (unsigned int)v103) >> 31;
            v6 = ((unsigned int)v87 ^ v6 ^ v2 ^ (unsigned int)v103) * 2 | ((unsigned int)v87 ^ v6 ^ v2 ^ (unsigned int)v103) >> 31;
            tmp_425 = v7;
            tmp_513 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((((((Conv(64->32, r10<8>) ^ Conv(64->32, r9<8>)) ^ Conv(64->32, r8<8>)) + Conv(64->32, ((rsi<8> + r11<8>) + 0x6ed9eba1<64>))) + ((Conv(64->32, (rdi<8> + rbx<8>)) << 0x5<8>) | (Conv(64->32, (rdi<8> + rbx<8>)) >> 0x1b<8>))) << 0x5<8>) | (((((Conv(64->32, r10<8>) ^ Conv(64->32, r9<8>)) ^ Conv(64->32, r8<8>)) + Conv(64->32, ((rsi<8> + r11<8>) + 0x6ed9eba1<64>))) + ((Conv(64->32, (rdi<8> + rbx<8>)) << 0x5<8>) | (Conv(64->32, (rdi<8> + rbx<8>)) >> 0x1b<8>))) >> 0x1b<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_530 = ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27);
            tmp_531 = ((unsigned int)v89 ^ v7 ^ v3 ^ v4) * 2 | ((unsigned int)v89 ^ v7 ^ v3 ^ v4) >> 31;
            v7 = ((unsigned int)v89 ^ v7 ^ v3 ^ v4) * 2 | ((unsigned int)v89 ^ v7 ^ v3 ^ v4) >> 31;
            tmp_583 = ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 2 | (((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 0x40000000;
            tmp_599 = ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27) & (((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 2 | (((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 0x40000000);
            tmp_627 = ((((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27)) * 32 | ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27) >> 27) + (((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) ^ ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) + (unsigned int)(tmp_531 + v107 + 1859775393);
            tmp_679 = ((unsigned int)tmp_284 ^ v8 ^ (unsigned int)v99 ^ v5) * 2 | ((unsigned int)tmp_284 ^ v8 ^ (unsigned int)v99 ^ v5) >> 31;
            v8 = ((unsigned int)tmp_284 ^ v8 ^ (unsigned int)v99 ^ v5) * 2 | ((unsigned int)tmp_284 ^ v8 ^ (unsigned int)v99 ^ v5) >> 31;
            tmp_719 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Load(addr=stack_base-208, size=4, endness=Iend_LE) ^ Conv(64->32, t425)) ^ Conv(64->32, r14<8>)) ^ Load(addr=stack_base-184, size=4, endness=Iend_LE))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_724 = (((((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27)) * 32 | ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27) >> 27) + (((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) ^ ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) + (unsigned int)(tmp_531 + v107 + 1859775393)) * 32 | ((((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27)) * 32 | ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27) >> 27) + (((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) ^ ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) + (unsigned int)(tmp_531 + v107 + 1859775393) >> 27;
            tmp_729 = (((((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27)) * 32 | ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27) >> 27) + (((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) ^ ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) + (unsigned int)(tmp_531 + v107 + 1859775393)) * 32 | ((((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27)) * 32 | ((unsigned int)v107 ^ ((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ (unsigned int)(v108 + v109)) + (unsigned int)(tmp_400 + v104 + 1859775393) + ((((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) * 32 | ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27) >> 27) >> 27) + (((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) ^ ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) ^ ((unsigned int)v104 ^ (unsigned int)v107 ^ (unsigned int)v105) + (unsigned int)(v106 + v102 + 1859775393) + ((unsigned int)(v108 + v109) * 32 | (unsigned int)(v108 + v109) >> 27)) + (unsigned int)(tmp_531 + v107 + 1859775393) >> 27;
            v110 = (v0 ^ (unsigned int)tmp_425 ^ (unsigned int)v100 ^ v6) * 2 | (v0 ^ (unsigned int)tmp_425 ^ (unsigned int)v100 ^ v6) >> 31;
            v111 = (unsigned int)tmp_530 >> 2 | (unsigned int)tmp_530 * 0x40000000;
            tmp_842 = (unsigned int)(tmp_679 + (unsigned long long)((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) - 1894007588 + tmp_729) + (((unsigned int)tmp_530 | (unsigned int)tmp_583) & ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) | (unsigned int)tmp_599);
            v112 = (unsigned int)tmp_627 >> 2 | (unsigned int)tmp_627 * 0x40000000;
            tmp_891 = (unsigned int)(tmp_679 + (unsigned long long)((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) - 1894007588 + tmp_729) + (((unsigned int)tmp_530 | (unsigned int)tmp_583) & ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) | (unsigned int)tmp_599);
            tmp_914 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((Conv(64->32, t627) & ((Conv(64->32, t530) >> 0x2<8>) | (Conv(64->32, t530) << 0x1e<8>))) | ((Conv(64->32, t627) | ((Conv(64->32, t530) >> 0x2<8>) | (Conv(64->32, t530) << 0x1e<8>))) & Conv(64->32, t583)))), Sub((r11<8> + Conv(32->64, ((Conv(64->32, (rdi<8> + rbx<8>)) >> 0x2<8>) | (Conv(64->32, (rdi<8> + rbx<8>)) << 0x1e<8>)))), 0x70e44324<64>), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_929 = ((unsigned int)(tmp_679 + (unsigned long long)((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) - 1894007588 + tmp_729) + (((unsigned int)tmp_530 | (unsigned int)tmp_583) & ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) | (unsigned int)tmp_599)) * 32 | (unsigned int)(tmp_679 + (unsigned long long)((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) - 1894007588 + tmp_729) + (((unsigned int)tmp_530 | (unsigned int)tmp_583) & ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) | (unsigned int)tmp_599) >> 27;
            tmp_930 = ((unsigned int)tmp_627 & ((unsigned int)tmp_530 >> 2 | (unsigned int)tmp_530 * 0x40000000) | ((unsigned int)tmp_627 | (unsigned int)tmp_530 >> 2 | (unsigned int)tmp_530 * 0x40000000) & (unsigned int)tmp_583) + (unsigned int)(v110 + ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) - 1894007588);
            v113 = (((unsigned int)(tmp_679 + (unsigned long long)((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) - 1894007588 + tmp_729) + (((unsigned int)tmp_530 | (unsigned int)tmp_583) & ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) | (unsigned int)tmp_599)) * 32 | (unsigned int)(tmp_679 + (unsigned long long)((unsigned int)v105 >> 2 | (unsigned int)v105 * 0x40000000) - 1894007588 + tmp_729) + (((unsigned int)tmp_530 | (unsigned int)tmp_583) & ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) | (unsigned int)tmp_599) >> 27) + ((unsigned int)tmp_627 & ((unsigned int)tmp_530 >> 2 | (unsigned int)tmp_530 * 0x40000000) | ((unsigned int)tmp_627 | (unsigned int)tmp_530 >> 2 | (unsigned int)tmp_530 * 0x40000000) & (unsigned int)tmp_583) + (unsigned int)(v110 + ((unsigned int)(v108 + v109) >> 2 | (unsigned int)(v108 + v109) * 0x40000000) - 1894007588);
            v114 = (unsigned int)tmp_891 & ((unsigned int)tmp_627 >> 2 | (unsigned int)tmp_627 * 0x40000000);
            v10 = (v1 ^ (unsigned int)tmp_398 ^ (unsigned int)v101 ^ v7) * 2 | (v1 ^ (unsigned int)tmp_398 ^ (unsigned int)v101 ^ v7) >> 31;
            v115 = v9;
            v116 = (unsigned int)((unsigned long long)((v1 ^ (unsigned int)tmp_398 ^ (unsigned int)v101 ^ v7) * 2 | (v1 ^ (unsigned int)tmp_398 ^ (unsigned int)v101 ^ v7) >> 31) + tmp_583 - 1894007588) + ((unsigned int)v113 * 32 | (unsigned int)v113 >> 27);
            v117 = [D] amd64g_calculate_rflags_all(0x3<64>, Sub((Conv(32->64, (((((Load(addr=stack_base-204, size=4, endness=Iend_LE) ^ Conv(64->32, t398)) ^ Conv(64->32, r13<8>)) ^ Load(addr=stack_base-180, size=4, endness=Iend_LE)) << 0x1<8>) | ((((Load(addr=stack_base-204, size=4, endness=Iend_LE) ^ Conv(64->32, t398)) ^ Conv(64->32, r13<8>)) ^ Load(addr=stack_base-180, size=4, endness=Iend_LE)) >> 0x1f<8>))) + t583), 0x70e44324<64>), Conv(32->64, ((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v118 = (unsigned int)tmp_842 >> 2 | (unsigned int)tmp_842 * 0x40000000;
            v119 = v0 ^ v9;
            v120 = (unsigned int)tmp_842 | (unsigned int)tmp_627 >> 2 | (unsigned int)tmp_627 * 0x40000000;
            v0 = ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31;
            v9 = (v1 ^ v2 ^ v4 ^ (unsigned int)v110) * 2 | (v1 ^ v2 ^ v4 ^ (unsigned int)v110) >> 31;
            tmp_546 = (unsigned int)(((v1 ^ v2 ^ v4 ^ (unsigned int)v110) * 2 | (v1 ^ v2 ^ v4 ^ (unsigned int)v110) >> 31) + v112 - 1894007588) + (((((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588)) * 32 | (((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588) >> 27) + (((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) | (unsigned int)v113 >> 2 | (unsigned int)v113 * 0x40000000) & (unsigned int)v118 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) & ((unsigned int)v113 >> 2 | (unsigned int)v113 * 0x40000000));
            tmp_557 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, (Conv(64->32, ((Conv(32->64, (((((Load(addr=stack_base-204, size=4, endness=Iend_LE) ^ Load(addr=stack_base-200, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-192, size=4, endness=Iend_LE)) ^ Conv(64->32, r11<8>)) << 0x1<8>) | ((((Load(addr=stack_base-204, size=4, endness=Iend_LE) ^ Load(addr=stack_base-200, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-192, size=4, endness=Iend_LE)) ^ Conv(64->32, r11<8>)) >> 0x1f<8>))) + r9<8>) - 0x70e44324<64>)) + ((((((Conv(64->32, rsi<8>) + ((Conv(64->32, rax<8>) & Conv(64->32, rdx<8>)) | Conv(64->32, r10<8>))) << 0x5<8>) | ((Conv(64->32, rsi<8>) + ((Conv(64->32, rax<8>) & Conv(64->32, rdx<8>)) | Conv(64->32, r10<8>))) >> 0x1b<8>)) + (((Conv(64->32, rdi<8>) & Conv(64->32, r8<8>)) | ((Conv(64->32, rdi<8>) | Conv(64->32, r8<8>)) & Conv(64->32, r9<8>))) + Conv(64->32, ((Conv(32->64, ((((Conv(64->32, rbp<8>) ^ Conv(64->32, r12<8>)) ^ Load(addr=stack_base-176, size=4, endness=Iend_LE)) << 0x1<8>) | (((Conv(64->32, rbp<8>) ^ Conv(64->32, r12<8>)) ^ Load(addr=stack_base-176, size=4, endness=Iend_LE)) >> 0x1f<8>))) + rdx<8>) - 0x70e44324<64>)))) << 0x5<8>) | (((((Conv(64->32, rsi<8>) + ((Conv(64->32, rax<8>) & Conv(64->32, rdx<8>)) | Conv(64->32, r10<8>))) << 0x5<8>) | ((Conv(64->32, rsi<8>) + ((Conv(64->32, rax<8>) & Conv(64->32, rdx<8>)) | Conv(64->32, r10<8>))) >> 0x1b<8>)) + (((Conv(64->32, rdi<8>) & Conv(64->32, r8<8>)) | ((Conv(64->32, rdi<8>) | Conv(64->32, r8<8>)) & Conv(64->32, r9<8>))) + Conv(64->32, ((Conv(32->64, ((((Conv(64->32, rbp<8>) ^ Conv(64->32, r12<8>)) ^ Load(addr=stack_base-176, size=4, endness=Iend_LE)) << 0x1<8>) | (((Conv(64->32, rbp<8>) ^ Conv(64->32, r12<8>)) ^ Load(addr=stack_base-176, size=4, endness=Iend_LE)) >> 0x1f<8>))) + rdx<8>) - 0x70e44324<64>)))) >> 0x1b<8>)))), Conv(32->64, ((((Conv(64->32, rsi<8>) + ((Conv(64->32, rax<8>) & Conv(64->32, rdx<8>)) | Conv(64->32, r10<8>))) | ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) & Conv(64->32, r8<8>)) | ((Conv(64->32, rsi<8>) + ((Conv(64->32, rax<8>) & Conv(64->32, rdx<8>)) | Conv(64->32, r10<8>))) & ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_567 = (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 2 | ((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 0x40000000;
            tmp_600 = ((((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588) | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 2 | ((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 0x40000000) & ((unsigned int)v113 >> 2 | (unsigned int)v113 * 0x40000000);
            tmp_601 = ((((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588) | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 2 | ((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 0x40000000) & ((unsigned int)v113 >> 2 | (unsigned int)v113 * 0x40000000);
            tmp_605 = (((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588);
            v121 = (((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588) >> 2 | ((((unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114)) * 32 | (unsigned int)v116 + ((unsigned int)v120 & (unsigned int)v111 | (unsigned int)v114) >> 27) + ((unsigned int)v113 & (unsigned int)v118 | ((unsigned int)v113 | (unsigned int)v118) & (unsigned int)v112) + (unsigned int)((((unsigned int)v119 ^ (unsigned int)v103 ^ v8) * 2 | ((unsigned int)v119 ^ (unsigned int)v103 ^ v8) >> 31) + v111 - 1894007588)) * 0x40000000;
            v122 = (v5 ^ v115 ^ v3 ^ v10) * 2 | (v5 ^ v115 ^ v3 ^ v10) >> 31;
            v16 = v122;
            v123 = (v2 ^ (unsigned int)v99 ^ v6 ^ v0) * 2 | (v2 ^ (unsigned int)v99 ^ v6 ^ v0) >> 31;
            tmp_820 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (Conv(64->32, t546) | Conv(64->32, rdx<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v124 = (unsigned int)tmp_546 >> 2 | (unsigned int)tmp_546 * 0x40000000;
            v125 = (unsigned int)(v123 + ((unsigned int)v113 >> 2 | (unsigned int)v113 * 0x40000000) - 1894007588) + ((((unsigned int)tmp_546 * 32 | (unsigned int)tmp_546 >> 27) + ((unsigned int)tmp_605 & (unsigned int)tmp_567 | (unsigned int)tmp_601) + (unsigned int)(v122 + v118 - 1894007588)) * 32 | ((unsigned int)tmp_546 * 32 | (unsigned int)tmp_546 >> 27) + ((unsigned int)tmp_605 & (unsigned int)tmp_567 | (unsigned int)tmp_601) + (unsigned int)(v122 + v118 - 1894007588) >> 27) + (((unsigned int)tmp_546 | (unsigned int)v121) & (unsigned int)tmp_567 | (unsigned int)tmp_546 & (unsigned int)v121);
            tmp_891 = v3 ^ (unsigned int)v100 ^ v7 ^ v9;
            v1 = (v3 ^ (unsigned int)v100 ^ v7 ^ v9) * 2 | (v3 ^ (unsigned int)v100 ^ v7 ^ v9) >> 31;
            tmp_932 = ((unsigned int)tmp_546 * 32 | (unsigned int)tmp_546 >> 27) + ((unsigned int)tmp_605 & (unsigned int)tmp_567 | (unsigned int)tmp_601) + (unsigned int)(v122 + v118 - 1894007588) & ((unsigned int)tmp_546 >> 2 | (unsigned int)tmp_546 * 0x40000000) | (((unsigned int)tmp_546 * 32 | (unsigned int)tmp_546 >> 27) + ((unsigned int)tmp_605 & (unsigned int)tmp_567 | (unsigned int)tmp_601) + (unsigned int)(v122 + v118 - 1894007588) | (unsigned int)tmp_546 >> 2 | (unsigned int)tmp_546 * 0x40000000) & (unsigned int)v121;
            v126 = ((unsigned int)tmp_546 * 32 | (unsigned int)tmp_546 >> 27) + ((unsigned int)tmp_605 & (unsigned int)tmp_567 | (unsigned int)tmp_601) + (unsigned int)(v122 + v118 - 1894007588) >> 2 | (((unsigned int)tmp_546 * 32 | (unsigned int)tmp_546 >> 27) + ((unsigned int)tmp_605 & (unsigned int)tmp_567 | (unsigned int)tmp_601) + (unsigned int)(v122 + v118 - 1894007588)) * 0x40000000;
            v127 = (unsigned int)v100 ^ (unsigned int)v103;
            v128 = [D] amd64g_calculate_rflags_all(0x13<64>, r14<8>, 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v129 = ((unsigned int)v99 ^ (unsigned int)v101 ^ v8 ^ (unsigned int)v122) * 2 | ((unsigned int)v99 ^ (unsigned int)v101 ^ v8 ^ (unsigned int)v122) >> 31;
            v130 = v125;
            v131 = tmp_932 + (unsigned long long)v1 + tmp_567 - 1894007588;
            v132 = ((unsigned int)v127 ^ (unsigned int)v110 ^ (unsigned int)v123) * 2 | ((unsigned int)v127 ^ (unsigned int)v110 ^ (unsigned int)v123) >> 31;
            tmp_512 = (((unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126)) * 32 | (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126) >> 27) + (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 | (unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) & (unsigned int)v126) + (unsigned int)(v132 + v124 - 1894007588);
            tmp_531 = (((unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126)) * 32 | (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126) >> 27) + (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 | (unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) & (unsigned int)v126) + (unsigned int)(v132 + v124 - 1894007588);
            tmp_544 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Load(addr=stack_base-192, size=4, endness=Iend_LE) ^ Conv(64->32, r13<8>)) ^ Load(addr=stack_base-168, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-204, size=4, endness=Iend_LE))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v133 = (v4 ^ (unsigned int)v101 ^ v10 ^ v1) * 2 | (v4 ^ (unsigned int)v101 ^ v10 ^ v1) >> 31;
            tmp_601 = (unsigned int)(v133 + v126 - 1894007588) + (((((unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126)) * 32 | (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126) >> 27) + (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 | (unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) & (unsigned int)v126) + (unsigned int)(v132 + v124 - 1894007588)) * 32 | (((unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126)) * 32 | (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126) >> 27) + (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 | (unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) & (unsigned int)v126) + (unsigned int)(v132 + v124 - 1894007588) >> 27);
            tmp_611 = (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126) | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000;
            tmp_614 = (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126);
            tmp_627 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, ((r15<8> + rdx<8>) - 0x70e44324<64>)) + (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x5<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x1b<8>))) + (((Conv(64->32, rdi<8>) | Conv(64->32, r8<8>)) & Conv(64->32, r9<8>)) | (Conv(64->32, r10<8>) & Conv(64->32, r8<8>)))) | (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v134 = (unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126) >> 2 | ((unsigned int)(v129 + v121 - 1894007588) + ((((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 32 | ((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 27) + (((unsigned int)v125 | (unsigned int)v126) & (unsigned int)v124 | (unsigned int)v130 & (unsigned int)v126)) * 0x40000000;
            tmp_661 = (unsigned int)tmp_611 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (unsigned int)tmp_614 & (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000);
            tmp_685 = v0 ^ (unsigned int)v103 ^ v5 ^ (unsigned int)v129;
            v135 = (v0 ^ (unsigned int)v103 ^ v5 ^ (unsigned int)v129) * 2 | (v0 ^ (unsigned int)v103 ^ v5 ^ (unsigned int)v129) >> 31;
            tmp_724 = [D] amd64g_calculate_rflags_all(0x27<64>, r12<8>, 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v136 = (unsigned int)tmp_512 >> 2 | (unsigned int)tmp_512 * 0x40000000;
            tmp_783 = v4 ^ v6 ^ v9 ^ (unsigned int)v132;
            tmp_833 = (v4 ^ v6 ^ v9 ^ (unsigned int)v132) * 2 | (v4 ^ v6 ^ v9 ^ (unsigned int)v132) >> 31;
            v11 = (v4 ^ v6 ^ v9 ^ (unsigned int)v132) * 2 | (v4 ^ v6 ^ v9 ^ (unsigned int)v132) >> 31;
            v137 = ((unsigned int)((unsigned long long)((unsigned int)tmp_611 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (unsigned int)tmp_614 & (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000)) + tmp_601) * 32 | (unsigned int)((unsigned long long)((unsigned int)tmp_611 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (unsigned int)tmp_614 & (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000)) + tmp_601) >> 27) + ((unsigned int)tmp_531 & (unsigned int)v134 | ((unsigned int)tmp_512 | (unsigned int)v134) & (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000)) + (unsigned int)(v135 + ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) - 1894007588);
            tmp_908 = [D] amd64g_calculate_rflags_all(0x3<64>, Sub(Conv(32->64, ((((((Load(addr=stack_base-192, size=4, endness=Iend_LE) ^ Load(addr=stack_base-184, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-172, size=4, endness=Iend_LE)) ^ Conv(64->32, r14<8>)) << 0x1<8>) | ((((Load(addr=stack_base-192, size=4, endness=Iend_LE) ^ Load(addr=stack_base-184, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-172, size=4, endness=Iend_LE)) ^ Conv(64->32, r14<8>)) >> 0x1f<8>)) + (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>)))), 0x70e44324<64>), Conv(32->64, (((((Conv(64->32, (Conv(32->64, ((Conv(64->32, t611) & ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) | (Conv(64->32, t614) & (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>))))) + t601)) << 0x5<8>) | (Conv(64->32, (Conv(32->64, ((Conv(64->32, t611) & ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) | (Conv(64->32, t614) & (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>))))) + t601)) >> 0x1b<8>)) + (((Conv(64->32, t531) & Conv(64->32, rdx<8>)) | ((Conv(64->32, t512) | Conv(64->32, rdx<8>)) & (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>)))) + Conv(64->32, ((r12<8> + Conv(32->64, ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>)))) - 0x70e44324<64>)))) << 0x5<8>) | ((((Conv(64->32, (Conv(32->64, ((Conv(64->32, t611) & ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) | (Conv(64->32, t614) & (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>))))) + t601)) << 0x5<8>) | (Conv(64->32, (Conv(32->64, ((Conv(64->32, t611) & ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) | (Conv(64->32, t614) & (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>))))) + t601)) >> 0x1b<8>)) + (((Conv(64->32, t531) & Conv(64->32, rdx<8>)) | ((Conv(64->32, t512) | Conv(64->32, rdx<8>)) & (((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) >> 0x2<8>) | ((((Conv(64->32, rdi<8>) << 0x5<8>) | (Conv(64->32, rdi<8>) >> 0x1b<8>)) + Conv(64->32, rax<8>)) << 0x1e<8>)))) + Conv(64->32, ((r12<8> + Conv(32->64, ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>)))) - 0x70e44324<64>)))) >> 0x1b<8>))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v138 = (unsigned int)((unsigned long long)((unsigned int)tmp_611 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (unsigned int)tmp_614 & (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000)) + tmp_601) >> 2 | (unsigned int)((unsigned long long)((unsigned int)tmp_611 & ((unsigned int)v125 >> 2 | (unsigned int)v125 * 0x40000000) | (unsigned int)tmp_614 & (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131 >> 2 | (((unsigned int)v125 * 32 | (unsigned int)v125 >> 27) + (unsigned int)v131) * 0x40000000)) + tmp_601) * 0x40000000;
            v139 = ...;
            v140 = (unsigned int)v137 & ((unsigned int)(tmp_661 + tmp_601) >> 2 | (unsigned int)(tmp_661 + tmp_601) * 0x40000000);
            v141 = (v5 ^ v7 ^ v16 ^ (unsigned int)v133) * 2 | (v5 ^ v7 ^ v16 ^ (unsigned int)v133) >> 31;
            v142 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Load(addr=stack_base-188, size=4, endness=Iend_LE) ^ Load(addr=stack_base-180, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-144, size=4, endness=Iend_LE)) ^ Conv(64->32, r13<8>))), 0x0<64>, t908);
            v143 = (v5 ^ v7 ^ v16 ^ (unsigned int)v133) * 2 | (v5 ^ v7 ^ v16 ^ (unsigned int)v133) >> 31;
            v144 = v137;
            v5 = v143;
            tmp_383 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Load(addr=stack_base-184, size=4, endness=Iend_LE) ^ Load(addr=stack_base-176, size=4, endness=Iend_LE)) ^ Conv(64->32, rbp<8>)) ^ Conv(64->32, r12<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_388 = (v6 ^ v8 ^ (unsigned int)v123 ^ (unsigned int)v135) * 2 | (v6 ^ v8 ^ (unsigned int)v123 ^ (unsigned int)v135) >> 31;
            tmp_393 = (v6 ^ v8 ^ (unsigned int)v123 ^ (unsigned int)v135) * 2 | (v6 ^ v8 ^ (unsigned int)v123 ^ (unsigned int)v135) >> 31;
            v6 = (v6 ^ v8 ^ (unsigned int)v123 ^ (unsigned int)v135) * 2 | (v6 ^ v8 ^ (unsigned int)v123 ^ (unsigned int)v135) >> 31;
            tmp_468 = (unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000;
            tmp_529 = v7 ^ (unsigned int)v110 ^ v1 ^ v11;
            tmp_552 = (v7 ^ (unsigned int)v110 ^ v1 ^ v11) * 2 | (v7 ^ (unsigned int)v110 ^ v1 ^ v11) >> 31;
            v7 = (v7 ^ (unsigned int)v110 ^ v1 ^ v11) * 2 | (v7 ^ (unsigned int)v110 ^ v1 ^ v11) >> 31;
            tmp_636 = ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 2 | (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 0x40000000;
            tmp_649 = (((unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000))) * 32 | (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) >> 27) + (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) | (unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) + (unsigned int)(tmp_552 + v138 - 1894007588);
            tmp_676 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r11<8>) ^ Load(addr=stack_base-208, size=4, endness=Iend_LE)) ^ Conv(64->32, r14<8>)) ^ Load(addr=stack_base-184, size=4, endness=Iend_LE))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_686 = ((unsigned int)v110 ^ v0 ^ (unsigned int)v132 ^ v6) * 2 | ((unsigned int)v110 ^ v0 ^ (unsigned int)v132 ^ v6) >> 31;
            v2 = ((unsigned int)v110 ^ v0 ^ (unsigned int)v132 ^ v6) * 2 | ((unsigned int)v110 ^ v0 ^ (unsigned int)v132 ^ v6) >> 31;
            tmp_707 = v8 ^ v10 ^ (unsigned int)v129 ^ v5;
            tmp_724 = (v8 ^ v10 ^ (unsigned int)v129 ^ v5) * 2 | (v8 ^ v10 ^ (unsigned int)v129 ^ v5) >> 31;
            tmp_729 = (v8 ^ v10 ^ (unsigned int)v129 ^ v5) * 2 | (v8 ^ v10 ^ (unsigned int)v129 ^ v5) >> 31;
            v8 = (v8 ^ v10 ^ (unsigned int)v129 ^ v5) * 2 | (v8 ^ v10 ^ (unsigned int)v129 ^ v5) >> 31;
            tmp_771 = (unsigned int)(tmp_729 + (unsigned long long)((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) - 1894007588) + (((((unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000))) * 32 | (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) >> 27) + (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) | (unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) + (unsigned int)(tmp_552 + v138 - 1894007588)) * 32 | (((unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000))) * 32 | (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) >> 27) + (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) | (unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) + (unsigned int)(tmp_552 + v138 - 1894007588) >> 27);
            tmp_779 = (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 2 | (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 0x40000000;
            tmp_781 = (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 2 | (((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 0x40000000;
            tmp_784 = (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000));
            v145 = (unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000)) >> 2 | ((unsigned int)(tmp_393 + v136 - 1894007588) + ((((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588)) * 32 | ((unsigned int)v139 * 32 | (unsigned int)v139 >> 27) + ((unsigned int)v140 | ((unsigned int)v144 | (unsigned int)v138) & (unsigned int)v136) + (unsigned int)(v143 + v134 - 1894007588) >> 27) + (((unsigned int)v139 | (unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000) & (unsigned int)v138 | (unsigned int)v139 & ((unsigned int)v137 >> 2 | (unsigned int)v137 * 0x40000000))) * 0x40000000;
            v146 = v9;
            tmp_836 = (unsigned int)tmp_781 & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (unsigned int)tmp_784 & (unsigned int)tmp_636;
            v147 = (unsigned long long)((unsigned int)tmp_781 & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (unsigned int)tmp_784 & (unsigned int)tmp_636) + tmp_771;
            tmp_904 = ((unsigned int)tmp_649 | (unsigned int)v145) & (unsigned int)tmp_636;
            v148 = (unsigned int)tmp_649 >> 2 | (unsigned int)tmp_649 * 0x40000000;
            v3 = (v10 ^ v9 ^ (unsigned int)v133 ^ v7) * 2 | (v10 ^ v9 ^ (unsigned int)v133 ^ v7) >> 31;
            v149 = v16;
            v151 = ((unsigned int)((unsigned long long)((unsigned int)tmp_781 & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (unsigned int)tmp_784 & (unsigned int)tmp_636) + tmp_771) * 32 | (unsigned int)((unsigned long long)((unsigned int)tmp_781 & ((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) | (unsigned int)tmp_784 & (unsigned int)tmp_636) + tmp_771) >> 27) + ((unsigned int)tmp_649 & (unsigned int)v145 | ((unsigned int)tmp_649 | (unsigned int)v145) & (unsigned int)tmp_636) + (unsigned int)(tmp_686 + (unsigned long long)((unsigned int)v139 >> 2 | (unsigned int)v139 * 0x40000000) - 1894007588);
            v152 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((Conv(64->32, (t836 + t771)) << 0x5<8>) | (Conv(64->32, (t836 + t771)) >> 0x1b<8>))), Conv(32->64, (((Conv(64->32, t649) & Conv(64->32, rdx<8>)) | ((Conv(64->32, t649) | Conv(64->32, rdx<8>)) & Conv(64->32, t636))) + Conv(64->32, ((t686 + Conv(32->64, ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) * 0x40000000<32>)))) - 0x70e44324<64>)))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v153 = (unsigned int)((unsigned long long)((v10 ^ v9 ^ (unsigned int)v133 ^ v7) * 2 | (v10 ^ v9 ^ (unsigned int)v133 ^ v7) >> 31) + tmp_636 - 1894007588) + ((((unsigned int)(tmp_836 + tmp_771) * 32 | (unsigned int)(tmp_836 + tmp_771) >> 27) + ((unsigned int)tmp_649 & (unsigned int)v145 | ((unsigned int)tmp_649 | (unsigned int)v145) & (unsigned int)tmp_636) + (unsigned int)(tmp_686 + tmp_468 - 1894007588)) * 32 | ((unsigned int)(tmp_836 + tmp_771) * 32 | (unsigned int)(tmp_836 + tmp_771) >> 27) + ((unsigned int)tmp_649 & (unsigned int)v145 | ((unsigned int)tmp_649 | (unsigned int)v145) & (unsigned int)tmp_636) + (unsigned int)(tmp_686 + tmp_468 - 1894007588) >> 27);
            v154 = (unsigned int)(tmp_836 + tmp_771) | (unsigned int)tmp_649 >> 2 | (unsigned int)tmp_649 * 0x40000000;
            tmp_344 = (unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148;
            v4 = ((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) * 2 | ((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) >> 31;
            tmp_389 = v1;
            tmp_401 = v0 ^ (unsigned int)v149 ^ (unsigned int)v135 ^ v8;
            v0 = (v0 ^ (unsigned int)v149 ^ (unsigned int)v135 ^ v8) * 2 | (v0 ^ (unsigned int)v149 ^ (unsigned int)v135 ^ v8) >> 31;
            tmp_457 = (unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000;
            tmp_595 = ((((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588)) * 32 | ((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588) >> 27) + (((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) ^ ((unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000) ^ (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153)) + (unsigned int)((((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) * 2 | ((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) >> 31) + v148 - 899497514);
            tmp_625 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((Load(addr=stack_base-188, size=4, endness=Iend_LE) ^ (Conv(64->32, rbx<8>) ^ Load(addr=stack_base-204, size=4, endness=Iend_LE))) ^ Load(addr=stack_base-196, size=4, endness=Iend_LE))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v155 = (v5 ^ (unsigned int)v149 ^ v1 ^ v3) * 2 | (v5 ^ (unsigned int)v149 ^ v1 ^ v3) >> 31;
            v9 = v155;
            tmp_707 = (unsigned int)(v155 + ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) - 899497514) + (((unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000) ^ ((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 2 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 0x40000000) ^ ((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588));
            tmp_708 = (((((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588)) * 32 | ((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588) >> 27) + (((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) ^ ((unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000) ^ (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153)) + (unsigned int)((((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) * 2 | ((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) >> 31) + v148 - 899497514)) * 32 | ((((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588)) * 32 | ((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588) >> 27) + (((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) ^ ((unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000) ^ (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153)) + (unsigned int)((((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) * 2 | ((unsigned int)v146 ^ (unsigned int)v123 ^ v11 ^ v2) >> 31) + v148 - 899497514) >> 27;
            tmp_730 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rbp<8>) ^ Conv(64->32, r15<8>)) ^ Load(addr=stack_base-184, size=4, endness=Iend_LE)) ^ Load(addr=stack_base-208, size=4, endness=Iend_LE))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v156 = ((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588) >> 2 | (((unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) * 32 | (unsigned int)(((unsigned int)v154 & (unsigned int)v145 | (unsigned int)v147 & (unsigned int)v148) + v153) >> 27) + ((unsigned int)v151 & ((unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) | ((unsigned int)v151 | (unsigned int)v147 >> 2 | (unsigned int)v147 * 0x40000000) & (unsigned int)v148) + (unsigned int)(v0 + v145 - 1894007588)) * 0x40000000;
            tmp_771 = ((unsigned int)v123 ^ (unsigned int)v129 ^ v6 ^ v0) * 2 | ((unsigned int)v123 ^ (unsigned int)v129 ^ v6 ^ v0) >> 31;
            v1 = ((unsigned int)v123 ^ (unsigned int)v129 ^ v6 ^ v0) * 2 | ((unsigned int)v123 ^ (unsigned int)v129 ^ v6 ^ v0) >> 31;
            v157 = ((unsigned int)v129 ^ (unsigned int)v133 ^ v8 ^ (unsigned int)v155) * 2 | ((unsigned int)v129 ^ (unsigned int)v133 ^ v8 ^ (unsigned int)v155) >> 31;
            tmp_878 = [D] amd64g_calculate_rflags_all(0x27<64>, r15<8>, 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v158 = v157;
            v20 = v157;
            v159 = ((unsigned int)(tmp_708 + tmp_707) * 32 | (unsigned int)(tmp_708 + tmp_707) >> 27) + (((unsigned int)(tmp_344 + v153) >> 2 | (unsigned int)(tmp_344 + v153) * 0x40000000) ^ (unsigned int)v156 ^ (unsigned int)tmp_595) + (unsigned int)(tmp_771 + (unsigned long long)((unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000) - 899497514);
            v160 = ((unsigned int)tmp_389 ^ (unsigned int)v132 ^ v7 ^ v4) * 2 | ((unsigned int)tmp_389 ^ (unsigned int)v132 ^ v7 ^ v4) >> 31;
            v161 = (unsigned int)(tmp_708 + tmp_707) >> 2 | (unsigned int)(tmp_708 + tmp_707) * 0x40000000;
            v162 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, t595) >> 0x2<8>) | (Conv(64->32, t595) << 0x1e<8>)) ^ ((Conv(64->32, (t708 + t707)) >> 0x2<8>) | (Conv(64->32, (t708 + t707)) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v163 = ((unsigned int)tmp_595 >> 2 | (unsigned int)tmp_595 * 0x40000000) ^ ((unsigned int)(tmp_708 + tmp_707) >> 2 | (unsigned int)(tmp_708 + tmp_707) * 0x40000000) ^ ((unsigned int)(tmp_708 + tmp_707) * 32 | (unsigned int)(tmp_708 + tmp_707) >> 27) + (((unsigned int)(tmp_344 + v153) >> 2 | (unsigned int)(tmp_344 + v153) * 0x40000000) ^ (unsigned int)v156 ^ (unsigned int)tmp_595) + (unsigned int)(tmp_771 + tmp_457 - 899497514);
            v164 = ((((unsigned int)(tmp_708 + tmp_707) * 32 | (unsigned int)(tmp_708 + tmp_707) >> 27) + (((unsigned int)(tmp_344 + v153) >> 2 | (unsigned int)(tmp_344 + v153) * 0x40000000) ^ (unsigned int)v156 ^ (unsigned int)tmp_595) + (unsigned int)(tmp_771 + tmp_457 - 899497514)) * 32 | ((unsigned int)(tmp_708 + tmp_707) * 32 | (unsigned int)(tmp_708 + tmp_707) >> 27) + (((unsigned int)(tmp_344 + v153) >> 2 | (unsigned int)(tmp_344 + v153) * 0x40000000) ^ (unsigned int)v156 ^ (unsigned int)tmp_595) + (unsigned int)(tmp_771 + tmp_457 - 899497514) >> 27) + ((unsigned int)v156 ^ ((unsigned int)tmp_595 >> 2 | (unsigned int)tmp_595 * 0x40000000) ^ (unsigned int)(tmp_708 + tmp_707)) + (unsigned int)((unsigned long long)((((unsigned int)tmp_389 ^ (unsigned int)v132 ^ v7 ^ v4) * 2 | ((unsigned int)tmp_389 ^ (unsigned int)v132 ^ v7 ^ v4) >> 31) + ((unsigned int)(tmp_344 + v153) >> 2 | (unsigned int)(tmp_344 + v153) * 0x40000000)) - 899497514);
            tmp_322 = (unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000;
            v21 = ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31;
            tmp_382 = v5;
            v10 = v160;
            v5 = v158;
            tmp_501 = ((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 2 | (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 0x40000000;
            tmp_508 = ((unsigned int)v161 ^ ((unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000) ^ (unsigned int)v164) + (unsigned int)((unsigned long long)((((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31) + ((unsigned int)tmp_595 >> 2 | (unsigned int)tmp_595 * 0x40000000)) - 899497514) + ((((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 32 | ((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 27);
            v165 = ((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) * 2 | ((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) >> 31;
            v22 = ((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) * 2 | ((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) >> 31;
            tmp_599 = ((((unsigned int)v161 ^ ((unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000) ^ (unsigned int)v164) + (unsigned int)((unsigned long long)((((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31) + ((unsigned int)tmp_595 >> 2 | (unsigned int)tmp_595 * 0x40000000)) - 899497514) + ((((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 32 | ((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 27)) * 32 | ((unsigned int)v161 ^ ((unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000) ^ (unsigned int)v164) + (unsigned int)((unsigned long long)((((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31) + ((unsigned int)tmp_595 >> 2 | (unsigned int)tmp_595 * 0x40000000)) - 899497514) + ((((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 32 | ((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 27) >> 27) + (unsigned int)((((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) * 2 | ((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) >> 31) + v161 - 899497514) + (((unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000) ^ ((unsigned int)v164 >> 2 | (unsigned int)v164 * 0x40000000) ^ ((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163));
            tmp_624 = v0 ^ (unsigned int)v135 ^ (unsigned int)tmp_382 ^ (unsigned int)v158;
            v166 = v6;
            v6 = ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31;
            v167 = (unsigned int)tmp_624 * 2 | (unsigned int)tmp_624 >> 31;
            v23 = (unsigned int)tmp_624 * 2 | (unsigned int)tmp_624 >> 31;
            tmp_714 = ((unsigned int)tmp_599 * 32 | (unsigned int)tmp_599 >> 27) + (unsigned int)(v167 + ((unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000) - 899497514) + (((unsigned int)v164 >> 2 | (unsigned int)v164 * 0x40000000) ^ (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 2 | (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 0x40000000) ^ (unsigned int)tmp_508);
            v168 = (v4 ^ v11 ^ (unsigned int)v166 ^ (((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31)) * 2 | (v4 ^ v11 ^ (unsigned int)v166 ^ (((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31)) >> 31;
            v24 = (v4 ^ v11 ^ (unsigned int)v166 ^ (((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31)) * 2 | (v4 ^ v11 ^ (unsigned int)v166 ^ (((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31)) >> 31;
            tmp_838 = (unsigned int)((unsigned long long)(((v4 ^ v11 ^ (unsigned int)v166 ^ (((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31)) * 2 | (v4 ^ v11 ^ (unsigned int)v166 ^ (((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) * 2 | ((unsigned int)v132 ^ (unsigned int)v135 ^ v2 ^ v1) >> 31)) >> 31) + ((unsigned int)v164 >> 2 | (unsigned int)v164 * 0x40000000)) - 899497514) + ((((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 2 | (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 0x40000000) ^ ((unsigned int)tmp_508 >> 2 | (unsigned int)tmp_508 * 0x40000000) ^ (unsigned int)tmp_599);
            tmp_839 = (((unsigned int)tmp_599 * 32 | (unsigned int)tmp_599 >> 27) + (unsigned int)(v167 + tmp_322 - 899497514) + (((unsigned int)v164 >> 2 | (unsigned int)v164 * 0x40000000) ^ (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 2 | (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 0x40000000) ^ (unsigned int)tmp_508)) * 32 | ((unsigned int)tmp_599 * 32 | (unsigned int)tmp_599 >> 27) + (unsigned int)(v167 + tmp_322 - 899497514) + (((unsigned int)v164 >> 2 | (unsigned int)v164 * 0x40000000) ^ (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163) >> 2 | (((unsigned int)v164 * 32 | (unsigned int)v164 >> 27) + (unsigned int)(v157 + v156 - 899497514 + v163)) * 0x40000000) ^ (unsigned int)tmp_508) >> 27;
            v169 = v7;
            v170 = (unsigned int)tmp_599 >> 2 | (unsigned int)tmp_599 * 0x40000000;
            tmp_906 = (unsigned int)tmp_382 ^ v7 ^ v9 ^ (((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) * 2 | ((unsigned int)v133 ^ v11 ^ v3 ^ (unsigned int)v160) >> 31);
            v171 = (unsigned int)tmp_714 >> 2 | (unsigned int)tmp_714 * 0x40000000;
            v172 = (unsigned int)tmp_906 * 2 | (unsigned int)tmp_906 >> 31;
            v25 = (unsigned int)tmp_906 * 2 | (unsigned int)tmp_906 >> 31;
            v173 = (unsigned int)(tmp_839 + tmp_838) >> 2 | (unsigned int)(tmp_839 + tmp_838) * 0x40000000;
            v174 = ((unsigned int)(tmp_839 + tmp_838) * 32 | (unsigned int)(tmp_839 + tmp_838) >> 27) + (unsigned int)((unsigned long long)((unsigned int)tmp_906 * 2 | (unsigned int)tmp_906 >> 31) + tmp_501 - 899497514) + (((unsigned int)tmp_508 >> 2 | (unsigned int)tmp_508 * 0x40000000) ^ ((unsigned int)tmp_599 >> 2 | (unsigned int)tmp_599 * 0x40000000) ^ (unsigned int)tmp_714);
            v175 = ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31;
            v26 = ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31;
            tmp_363 = ((unsigned int)v174 * 32 | (unsigned int)v174 >> 27) + (unsigned int)((unsigned long long)((((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31) + ((unsigned int)tmp_508 >> 2 | (unsigned int)tmp_508 * 0x40000000)) - 899497514 + (((unsigned int)tmp_599 >> 2 | (unsigned int)tmp_599 * 0x40000000) ^ ((unsigned int)tmp_714 >> 2 | (unsigned int)tmp_714 * 0x40000000) ^ (unsigned int)(tmp_839 + tmp_838)));
            v176 = (v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) * 2 | (v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) >> 31;
            v27 = (v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) * 2 | (v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) >> 31;
            v28 = (v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31;
            v177 = ...;
            tmp_661 = ...;
            tmp_704 = (v2 ^ v0 ^ v6 ^ (((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31)) * 2 | (v2 ^ v0 ^ v6 ^ (((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31)) >> 31;
            v29 = (v2 ^ v0 ^ v6 ^ (((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31)) * 2 | (v2 ^ v0 ^ v6 ^ (((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) * 2 | ((unsigned int)v166 ^ v8 ^ v1 ^ (unsigned int)v167) >> 31)) >> 31;
            tmp_753 = ...;
            v178 = ((unsigned int)v165 ^ v3 ^ v4 ^ ((v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) * 2 | (v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) >> 31)) * 2 | ((unsigned int)v165 ^ v3 ^ v4 ^ ((v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) * 2 | (v2 ^ (unsigned int)v169 ^ v10 ^ (unsigned int)v168) >> 31)) >> 31;
            v30 = v178;
            v179 = ...;
            v180 = (unsigned int)tmp_661 >> 2 | (unsigned int)tmp_661 * 0x40000000;
            v181 = (((v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31) ^ (unsigned int)v167 ^ v0 ^ v9) * 2 | (((v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31) ^ (unsigned int)v167 ^ v0 ^ v9) >> 31;
            v182 = (unsigned int)tmp_753 >> 2 | (unsigned int)tmp_753 * 0x40000000;
            v31 = (((v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31) ^ (unsigned int)v167 ^ v0 ^ v9) * 2 | (((v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31) ^ (unsigned int)v167 ^ v0 ^ v9) >> 31;
            v184 = v10;
            v185 = ((unsigned int)v177 ^ ((unsigned int)tmp_661 >> 2 | (unsigned int)tmp_661 * 0x40000000) ^ (unsigned int)tmp_753) + (unsigned int)((unsigned long long)(((((v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31) ^ (unsigned int)v167 ^ v0 ^ v9) * 2 | (((v3 ^ v8 ^ v5 ^ (unsigned int)v172) * 2 | (v3 ^ v8 ^ v5 ^ (unsigned int)v172) >> 31) ^ (unsigned int)v167 ^ v0 ^ v9) >> 31) + ((unsigned int)tmp_363 >> 2 | (unsigned int)tmp_363 * 0x40000000)) - 899497514) + ((unsigned int)v179 * 32 | (unsigned int)v179 >> 27);
            v186 = ((unsigned int)tmp_704 ^ (unsigned int)v168 ^ v4 ^ v1) * 2 | ((unsigned int)tmp_704 ^ (unsigned int)v168 ^ v4 ^ v1) >> 31;
            v32 = v186;
            tmp_251 = (unsigned int)((((unsigned int)tmp_661 >> 2 | (unsigned int)tmp_661 * 0x40000000) ^ ((unsigned int)tmp_753 >> 2 | (unsigned int)tmp_753 * 0x40000000) ^ (unsigned int)v179) + v186 + v177 - 899497514) + ((unsigned int)v185 * 32 | (unsigned int)v185 >> 27);
            tmp_309 = (unsigned int)v182 ^ ((unsigned int)v179 >> 2 | (unsigned int)v179 * 0x40000000) ^ (unsigned int)v185;
            v188 = (unsigned int)v185 >> 2 | (unsigned int)v185 * 0x40000000;
            v33 = ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31;
            v15 += (unsigned int)v188;
            v14 += (unsigned int)tmp_251 >> 2 | (unsigned int)tmp_251 * 0x40000000;
            v34 = ((unsigned int)v181 ^ (unsigned int)v175 ^ v1 ^ v5) * 2 | ((unsigned int)v181 ^ (unsigned int)v175 ^ v1 ^ v5) >> 31;
            tmp_523 = (((unsigned int)v179 >> 2 | (unsigned int)v179 * 0x40000000) ^ (unsigned int)v188 ^ (unsigned int)tmp_251) + (unsigned int)((((unsigned int)v181 ^ (unsigned int)v175 ^ v1 ^ v5) * 2 | ((unsigned int)v181 ^ (unsigned int)v175 ^ v1 ^ v5) >> 31) + v182 - 899497514) + (((unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27)) * 32 | (unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27) >> 27);
            v12 += (((unsigned int)v179 >> 2 | (unsigned int)v179 * 0x40000000) ^ (unsigned int)v188 ^ (unsigned int)tmp_251) + (unsigned int)((((unsigned int)v181 ^ (unsigned int)v175 ^ v1 ^ v5) * 2 | ((unsigned int)v181 ^ (unsigned int)v175 ^ v1 ^ v5) >> 31) + v182 - 899497514) + (((unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27)) * 32 | (unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27) >> 27);
            v35 = ((unsigned int)v186 ^ (unsigned int)v176 ^ v6 ^ (unsigned int)v184) * 2 | ((unsigned int)v186 ^ (unsigned int)v176 ^ v6 ^ (unsigned int)v184) >> 31;
            v13 += (unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27) >> 2 | ((unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27)) * 0x40000000;
            v190 = ((unsigned int)v179 >> 2 | (unsigned int)v179 * 0x40000000) + (unsigned int)((unsigned long long)(v17 + v35) - 899497514) + ((unsigned int)v188 ^ ((unsigned int)tmp_251 >> 2 | (unsigned int)tmp_251 * 0x40000000) ^ (unsigned int)(tmp_309 + (((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) * 2 | ((unsigned int)v178 ^ (unsigned int)v172 ^ v9 ^ (unsigned int)v184) >> 31) + v180 - 899497514) + ((unsigned int)tmp_251 * 32 | (unsigned int)tmp_251 >> 27));
            v50 = ((unsigned int)tmp_523 * 32 | (unsigned int)tmp_523 >> 27) + v190;
            v19[1] = v12;
            v19[0] = ((unsigned int)tmp_523 * 32 | (unsigned int)tmp_523 >> 27) + v190;
            v19[1] = v13;
            v17 = ((unsigned int)tmp_523 * 32 | (unsigned int)tmp_523 >> 27) + v190;
            v19[1 + 1] = v14;
            v19[2] = v15;
        }
        while (v55 + 64 < v18);
    }
    v191 = v36;
    return v50;
}

extern unsigned long long g_60be30;

int sub_4085b8()
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
        rax<8>();
        v1 = &v1[-1];
    }
    return v4;
}

int sub_406df0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_407de0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_407d80();
}

int sub_406a00()
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

extern char g_60c2c8;
extern unsigned long long g_60c2d0;

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

    if (g_60c2c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60c2d0 >= 0)
            {
                break;
            }
            g_60c2d0 = g_60c2d0 + 1;
            *((long long *)(6340160 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60c2c8 = 1;
        return sub_40289b();
    }
    return v4;
}

int sub_407e20()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4077b0();
}

extern unsigned int g_60c458;

int sub_406ed0()
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
        if (g_60c458 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_406ed0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60c458 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_60c458 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_406ed0();
        }
        if ((*(v12) == 22 || g_60c458 < 0) && (g_60c458 < 0 || (unsigned int)v15 < 0) && (g_60c458 < 0 || (unsigned int)v15 >= 0) && (g_60c458 == -1 || g_60c458 >= 0) && (g_60c458 >= 0 || (unsigned int)v15 >= 0))
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

extern uint128_t g_60c420;
extern uint128_t g_60c430;
extern uint128_t g_60c440;
extern unsigned long long g_60c450;

int sub_4064e0()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60c420;
    *((uint128_t *)&v1) = g_60c430;
    *((uint128_t *)&v2) = g_60c440;
    v4 = g_60c450;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_405da0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_403120()
{
    unsigned long long v1[4];  // rdi

    v1[3] = 0;
    v1[0] = 17279655951921914625;
    v1[1] = 1167088121787636990;
    v1[2] = 3285377520;
    return 3285377520;
}

int sub_407010()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_407050();
    }
}

int sub_406a80()
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
        return sub_406620();
    }
}

int sub_404930()
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
            v5 = sub_406610();
            if (v5 >= 0)
            {
                v6 = sub_406e50();
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
                sub_406e50();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

int sub_406330()
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
    return sub_405da0();
}

int sub_406c10()
{
}

int sub_406550()
{
}

extern unsigned long long g_60c2e0;

int sub_402950()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v2 = v1;
    if (g_60c2e0 != 0)
    {
        v4 = 0;
        while (true)
        {
            if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)*(v2) << 1) + 1)) & 16) != 0)
            {
                v5 = v4 + 1;
                v2 = &v2[1];
                v4 += 1;
                if (v5 >= g_60c2e0)
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

int sub_407050()
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

int sub_406470()
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
    return sub_405da0();
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

extern unsigned int g_40a4a0;
extern unsigned int g_40a4c0;
extern unsigned int g_40a4f0;
extern unsigned int g_40a510;
extern unsigned int g_40a540;
extern unsigned long long stderr;

int sub_407190()
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
                                dcgettext(0x0, 0x40a4a0, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40a4c0, 0x5);
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
                                dcgettext(0x0, 0x40a540, 0x5);
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
                            dcgettext(0x0, 0x40a510, 0x5);
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
            dcgettext(0x0, 0x40a4f0, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern unsigned int g_40a10b;
extern unsigned int g_40a10f;
extern unsigned int g_40a11f;
extern unsigned int g_40a136;
extern unsigned int g_40a198;
extern unsigned int g_40a268;
extern unsigned int g_40a288;
extern unsigned int g_40a2b0;
extern unsigned int g_40a2d8;
extern unsigned int g_40a308;

int sub_406620()
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
    dcgettext(0x0, 0x40a10b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a198, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40a10f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40a11f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40a136, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40a268, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40a288, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40a2b0, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40a2d8, 0x5);
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
        dcgettext(0x0, 0x40a308, 0x5);
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

extern unsigned long long g_60c300;

int sub_403060()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60c300 = v1;
    return v2;
}

int sub_407e60()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4077b0();
}

int sub_4065f0()
{
}

int sub_407f00()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_406e50();
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

int sub_4070b0()
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

extern unsigned int g_409305;
extern unsigned int g_60c220;
extern char g_60c2f8;
extern unsigned long long g_60c300;

int sub_403080()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_407f00();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60c2f8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x409305, 0x5);
            if (g_60c300 != 0)
            {
                sub_406440();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60c2f8 != 0)
    {
        v3 = sub_407f00();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60c2f8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60c220);
        error(0x0, *(v2), "%s");
    }
}

int sub_407e00()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_407d80();
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

extern unsigned int g_40a568;
extern unsigned int g_40a5ac;

int sub_4077b0()
{
    struct_1 *|struct_0 * v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned int|char v5;  // [bp-0x4c]
    char v6[2];  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    struct_0 *v8;  // [bp+0x8]
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
    unsigned long long|unsigned int v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long long *v46;  // rbp
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
        v46 = (unsigned int)v13;
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
                        sub_4070b0();
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
                            sub_4070b0();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v0->field_2c;
                        v42 = v40;
                    }
                    *((unsigned long long **)&v0->field_30) = v46;
                    *((unsigned long long **)&v0->field_0) = v46;
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
                v46 = (unsigned long long)v0->field_30;
                v42 = v0->field_2c;
            }
        }
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
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
        v45 = (unsigned int)sub_407190();
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
                if (v0->field_0 != v46)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40a568, 0x5);
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
            dcgettext(0x0, 0x40a5ac, 0x5);
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
            else if (v46 != v8->field_0)
            {
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40a568, 0x5);
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
        v45 = (unsigned int)sub_407190();
    }
    v63 = v45;
    return v63;
}

int sub_406250()
{
}

int sub_406d70()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_406bc0();
}

int sub_4065a0()
{
}

extern struct_0 *g_60c278;
extern unsigned long long g_60c280;
extern unsigned long long g_60c288;
extern unsigned int g_60c290;
extern unsigned long long g_60c320;

int sub_4061b0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60c290;
    if (g_60c290 > 1)
    {
        v2 = &g_60c278[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60c278[(unsigned long long)(g_60c290 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60c278->field_8 != 6341408)
    {
        v1 = free(g_60c278->field_8);
        g_60c280 = 0x100;
        g_60c288 = &g_60c320;
    }
    if (g_60c278 != 6341248)
    {
        v1 = free(g_60c278);
        g_60c278 = &g_60c280;
    }
    g_60c290 = 1;
    return v1;
}

int sub_402948() { crash_skku;
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

extern int512_t g_60c208;

int sub_4085a0()
{
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

int sub_4062a0()
{
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40a5c7;
extern char g_60c498[2];

int sub_407fc0()
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

    v9 = g_60c498;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40a5c7 : (unsigned long long)nl_langinfo(0xe));
    if (g_60c498 == 0)
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
            v9 = &g_40a5c7;
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
                                        v9 = &g_40a5c7;
                                        v10 = (tmp_10 == 0? &g_40a5c7 : tmp_10);
                                        free(NULL);
                                        sub_406e50();
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
                                while (v60 != 10 && v61 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v36 != 0 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1)
                        {
                            v59 = __uflow(v10);
                        }
                        if ((unsigned int)v59 == 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v60 == -1 || (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v36 != 0 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1) && (unsigned int)v59 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40a5c7 : tmp_10);
                            sub_406e50();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1 || (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v60 == -1)
                    {
                        v9 = &g_40a5c7;
                    }
                    else if (v36 == 0 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 > 1 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1 || (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v27 <= 1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && v60 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40a5c7;
            free(v17);
        }
        *((char *[2])&g_60c498[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_40a5c7 : tmp_10), v9);
            if (v66 != 0 && (v9[1] != 0 || v65 != 42))
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
            if (v66 == 0 || v9[1] == 0 && v65 == 42)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_4048f0()
{
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

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_404b70()
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
            v26 = (unsigned int)sub_404a70();
            v27 = (unsigned long long)(unsigned int)sub_404a70();
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
                                    v77 = 0;
                                    v78 = 0;
                                    v40 = 98;
                                case 13:
                                    v40 = 13;
                                    v45 = 114;
                                    v77 = (unsigned int)v39 == 2;
                                case 32:
                                    v41 = v5;
                                    v40 = 32;
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                case 35: case 126:
                                    v42 = v5;
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
                            v77 = 0;
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
                            v77 = 0;
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
                            v77 = (unsigned int)v39 == 2;
                            v36 = 0;
                            v40 = 0;
                            break;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v77 = (unsigned int)v39 == 2;
                    case 8:
                        v40 = 8;
                        v45 = 98;
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
                    case 9:
                        v40 = 9;
                        v45 = 116;
                        v77 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                    case 10:
                        v40 = 10;
                        v45 = 110;
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
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v77 = (unsigned int)v39 == 2;
                        v35 = 0;
                    case 35: case 126:
                        v77 = (unsigned int)v39 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
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
                            v76 = (unsigned int)sub_404b70();
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
                    v46 = sub_407e80();
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
                v76 = (unsigned int)sub_404b70();
            }
            if (v17 == 0 && v4 != 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 && v4 == 0 && v5 == 0 || v77 != 0 && v76 >= v79)
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
            v10 = *((long long *)(6340144 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern uint128_t g_60c420;
extern uint128_t g_60c430;
extern uint128_t g_60c440;
extern unsigned long long g_60c450;

int sub_4063bf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60c450;
    *((uint128_t *)&v0) = g_60c420;
    *((uint128_t *)&v1) = g_60c430;
    *((uint128_t *)&v2) = g_60c440;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_405da0();
}

int sub_406c60()
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
        sub_406e10(); /* do not return */
    }
}

int sub_406bc0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_406e10(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_406c90() { crash_skku;
}
extern char g_60c2f8;

int sub_403070()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60c2f8 = v1;
    return v2;
}

int sub_406d20() { crash_skku;
}
int sub_406d90()
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
        sub_406e10(); /* do not return */
    }
}

int sub_406560()
{
}

int sub_407f60()
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

int sub_406c20()
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
            sub_406e10(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned long long g_40a5c7;

int sub_407e80()
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
        v5 = &g_40a5c7;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_407f60() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60c278;
extern uint128_t g_60c280;
extern unsigned int g_60c290;
extern int512_t g_60c320;

int sub_405da0()
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
    v17 = g_60c278;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60c290 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60c278 != 6341248)
            {
                v16 = sub_406c20();
                g_60c278 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_406c20();
                v17 = v15;
                g_60c278 = v15;
                *(v15) = g_60c280;
            }
            memset(&v17[(long long)(int)g_60c290], 0x0, (int)((unsigned int)v13 + 1 - g_60c290) * 16);
            g_60c290 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_406e10(); /* do not return */
        }
    }
    if (g_60c290 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_404b70();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6341408)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_406bc0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_404b70();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_4063a0()
{
}

int sub_4063b0()
{
}

int sub_404900()
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

int sub_406460()
{
}

extern unsigned long long __progname_full;
extern unsigned long long g_60c308;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4049d0()
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
        g_60c308 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    char field_20;
} struct_0;

int sub_404460()
{
    void tmp_11;  // tmp #11
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    struct_0 *v3;  // rdx
    struct_0 *v4;  // r12
    void *v5;  // rdi
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r15
    unsigned long v8;  // r14
    unsigned long long|void * v9;  // rax
    unsigned int v10;  // esi
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rdx
    unsigned int v16;  // r15d
    unsigned long long v17;  // rcx
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rcx
    uint128_t *v23;  // rbx
    uint128_t v24[4];  // rbp
    void *v25;  // r14
    unsigned long long v26;  // r15
    uint128_t v27;  // xmm0
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    void *v31;  // rsi
    unsigned long long v33;  // r14
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rsi
    unsigned long v36;  // r13

    v2 = v1;
    v4 = v3;
    v23 = v5;
    v9 = v3->field_1c;
    if (v3->field_1c != 0)
    {
        v6 = v9;
        v7 = &v4->field_20;
        v8 = (!(128 - v9 <= v1)? v1 : 128 - v9);
        v9 = memcpy(&(struct struct_0 *)&v4->field_20->padding_0[v9], v5, (!(128 - v9 <= v1)? v1 : 128 - v9));
        v10 = v4->field_1c + (unsigned int)v8;
        v4->field_1c = v4->field_1c + (unsigned int)v8;
        if (v10 > 64)
        {
            sub_403180();
            v12 = v4->field_1c;
            v9 = &(struct struct_0 *)&v3->field_20->padding_0[v6 + v8 & -64];
            v13 = v4->field_1c & 63;
            v4->field_1c = v4->field_1c & 63;
            if (!((unsigned int)v12 < 8))
            {
                *((long long *)&v4->field_20) = *((long long *)v9);
                v12 = v13;
                *((long long *)(v7 + v12 - 8)) = *((long long *)&((char *)v9)[v12 + -8]);
                v9 -= v7 - (&v4[1].padding_0[7] & -8);
                v16 = (unsigned int)(v7 - (&v4[1].padding_0[7] & -8) + v12) & -8;
                if (v16 >= 8)
                {
                    v19 = 0;
                    do
                    {
                        v22 = v19;
                        v19 = (unsigned int)v19 + 8;
                        *((long long *)((&v4[1].padding_0[7] & -8) + v22)) = *((long long *)(v9 + v22));
                    }
                    while ((unsigned int)v19 < (v16 & -8));
                }
            }
            else if (!((v12 & 4) == 0))
            {
                v17 = (unsigned int)*((int *)v9);
                *((int *)&v4->field_20) = *((int *)v9);
                v9 = (unsigned int)*((int *)&((char *)v9)[v12 + -4]);
                *((unsigned int *)(v7 + v12 - 4)) = v9;
            }
            else if ((unsigned int)v12 != 0)
            {
                v21 = (unsigned int)v12 & 2;
                v4->field_20 = *((char *)v9);
                if (((unsigned int)v12 & 2) != 0)
                {
                    v9 = (unsigned short)*((short *)&((char *)v9)[v12 + -2]);
                    *((unsigned long long *)(v7 + v12 - 2)) = v9;
                }
            }
        }
        v23 = v5 + v8;
        v2 -= v8;
    }
    if (v2 > 63)
    {
        if ((v23 & 3) != 0)
        {
            v24 = &v4->field_20;
            if (v2 != 64)
            {
                v26 = v2 - 65 >> 6;
                v25 = &v23[4 + 4 * (v2 - 65 >> 6)];
                while (true)
                {
                    v27 = *(v23);
                    v23 = &v23[4];
                    *((uint128_t *)&v24) = v27;
                    *((uint128_t *)&v24[2]) = v23[-3];
                    *((uint128_t *)&v24[4]) = v23[-2];
                    *((uint128_t *)&v24[6]) = v23[-1];
                    sub_403180();
                    if (v23 == v25)
                    {
                        break;
                    }
                }
                v2 = v2 + (0 - v26) * 64 - 64;
            }
            else
            {
                v25 = v23;
            }
        }
        else
        {
            tmp_11 = v2;
            v2 = (unsigned int)v2 & 63;
            v23 = (char *)v23 + (tmp_11 & -64);
            v9 = sub_403180();
        }
    }
    if ((v23 & 3) == 0 || v2 <= 63)
    {
        if (v2 == 0)
        {
            return v9;
        }
        v24 = &v4->field_20;
        v25 = v23;
    }
    if (v2 != 0 || (v23 & 3) != 0 && v2 > 63)
    {
        v29 = v4->field_1c;
        v30 = v2;
        v31 = (char *)v24 + (unsigned long long)v4->field_1c;
        if (!((unsigned int)v2 < 8))
        {
            *((long long *)v31) = *((long long *)v25);
            *((long long *)&((char *)v31)[v2 + -8]) = *((long long *)&((char *)v25)[v2 + -8]);
            v33 = v25 - (v31 - (v31 + 8 & -8));
            v30 = (unsigned int)(v31 - (v31 + 8 & -8) + v2) & -8;
            if (((unsigned int)(v31 - (v31 + 8 & -8) + v2) & -8) >= 8)
            {
                v30 = (unsigned int)v30 & -8;
                v34 = 0;
                do
                {
                    v35 = v34;
                    v34 = (unsigned int)v34 + 8;
                    *((long long *)((v31 + 8 & -8) + v35)) = *((long long *)(v33 + v35));
                }
                while ((unsigned int)v34 < (unsigned int)v30);
            }
        }
        else if (!((v2 & 4) == 0))
        {
            *((int *)v31) = *((int *)v25);
            v30 = (unsigned int)*((int *)&((char *)v25)[v2 + -4]);
            *((int *)&((char *)v31)[v2 + -4]) = *((int *)&((char *)v25)[v2 + -4]);
        }
        else if ((unsigned int)v2 != 0)
        {
            *((char *)v31) = *((char *)v25);
            if ((v30 & 2) != 0)
            {
                v30 = (unsigned short)*((short *)&((char *)v25)[v2 + -2]);
                *((short *)&((char *)v31)[v2 + -2]) = *((short *)&((char *)v25)[v2 + -2]);
            }
        }
        v36 = v2 + v29;
        if (v36 > 63)
        {
            v36 -= 64;
            sub_403180();
            v30 = memcpy(v24, (char *)&v4[2].field_1c + 2, v36);
        }
        v4->field_1c = v36;
        return v30;
    }
}

extern int512_t g_4093a6;
extern int512_t g_4093aa;

int sub_404a70()
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
        v3 = sub_407fc0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_4093a6 : 4232113);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_4093aa : 4232109);
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

