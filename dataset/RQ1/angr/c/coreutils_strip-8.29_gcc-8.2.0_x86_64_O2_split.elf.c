#include "decompile_angr.h"
int sub_406e00()
{
}

extern unsigned long long __progname_full;
extern unsigned long long g_60e778;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4053a0()
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
        g_60e778 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_4079ad()
{
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_405350()
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

int sub_4079f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_407920();
}

int sub_406e30()
{
}

int sub_406c70()
{
}

extern unsigned long long g_60e4c8;

int sub_403c0b()
{
    unsigned long long v1;  // rax

    v1 = &g_60e4c8;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_406f30()
{
}

extern unsigned long long g_60de30;

int sub_409918()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60de30;
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

extern uint128_t g_60e880;
extern uint128_t g_60e890;
extern uint128_t g_60e8a0;
extern unsigned long long g_60e8b0;

int sub_406eb0()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60e880;
    *((uint128_t *)&v1) = g_60e890;
    *((uint128_t *)&v2) = g_60e8a0;
    v4 = g_60e8b0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_406770();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_407690()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4078e0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_408d30()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408680();
}

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
} struct_3;

extern unsigned int g_409b13;
extern unsigned int g_409b58;
extern unsigned int g_409b6e;
extern unsigned int g_409b86;
extern unsigned int g_409ba4;
extern unsigned int g_409bbd;
extern unsigned int g_409bd2;
extern unsigned int g_409bec;
extern unsigned int g_409c09;
extern unsigned int g_409c5d;
extern unsigned int g_409c96;
extern unsigned int g_40a798;
extern unsigned int g_40a860;
extern unsigned int g_40a888;
extern unsigned int g_40a8b0;
extern unsigned int g_40a948;
extern unsigned int g_40a9b8;
extern unsigned int g_40c29f;
extern unsigned int g_60e290;
extern void *g_60e298;
extern char g_60e2a0;
extern unsigned int g_60e31c;
extern char g_60e540;
extern char g_60e541;
extern char g_60e542;
extern unsigned int g_60e560;
extern unsigned int g_60e578;
extern unsigned long long g_60e590;
extern unsigned long long g_60e598;
extern unsigned long long g_60e5f0;
extern char g_60e5f8[2];
extern char g_60e600[2];
extern unsigned long long g_60e608;
extern unsigned long long g_60e620;
extern unsigned int g_60e640;
extern unsigned int g_60e6c0;
extern char g_60e760[2];
extern char g_60e908[2];
extern unsigned long long stdout;

int main()
{
    unsigned long long v0;  // [bp-0x158]
    void tmp_0;  // tmp #0
    unsigned long long|unsigned int v1;  // [bp-0x140]
    unsigned int|char *|void *|unsigned long long|char v2;  // [bp-0x138]
    unsigned long|unsigned long long|unsigned int v3;  // [bp-0x130]
    unsigned long|unsigned long long|char v4;  // [bp-0x128]
    unsigned long long v5;  // [bp-0x120]
    unsigned long|unsigned int *|unsigned long long v6;  // [bp-0x118]
    unsigned long long|char v7;  // [bp-0x110]
    unsigned long long v8;  // [bp-0x108]
    unsigned long long v9;  // [bp-0x100]
    char *v10;  // [bp-0xf8]
    unsigned long long|char v11;  // [bp-0xf0]
    unsigned long v12;  // [bp-0xe8]
    char v13;  // [bp-0xda]
    char v14;  // [bp-0xd9]
    unsigned long v15;  // [bp-0xd8]
    unsigned long long v17;  // r15
    unsigned long long v18;  // r13
    unsigned int v19;  // edi
    unsigned int v20;  // ebp
    void *v21;  // rbx
    unsigned long long|char [2]|void * v24;  // rsi
    char v26[2];  // rax
    unsigned long long v27;  // eax
    char v28[2];  // r14
    char v29[2];  // r14
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    char v33[2];  // rdi
    char *v34;  // rdi
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rax
    char v37;  // cc_dep2
    unsigned long v38;  // d
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned long long v42;  // rax
    unsigned long long v44;  // rax
    char v45[2];  // rax
    char *v46;  // r14
    unsigned long v47;  // rsi
    unsigned long long v48;  // rbx
    unsigned long long v49;  // rbx
    unsigned long long v50;  // rbx
    unsigned long long v51;  // rbx
    char *v53;  // rax
    unsigned long long v55;  // rbx
    unsigned int v56;  // r12d
    unsigned long long v57;  // r9
    unsigned long long v59;  // r14
    unsigned long long v61;  // rsi
    char *v62;  // rdi
    unsigned long long v63;  // rcx
    char v64;  // cc_dep2
    unsigned long long v65;  // rsi
    unsigned long v66;  // rdx
    unsigned long long v67;  // rcx
    unsigned long long v68;  // rdi
    unsigned long long v69;  // rax
    void *v70;  // rax
    unsigned long long v71;  // rcx
    unsigned long long v72;  // rdx
    unsigned int v73;  // eax
    char *v74;  // rdi
    unsigned long long v75;  // rcx
    unsigned long long v76;  // rbx
    char v77;  // cc_dep2
    unsigned long long v78;  // rax
    unsigned long long v80;  // rax
    unsigned long long v83;  // rbp
    unsigned long long v84;  // rbx
    unsigned long long v85;  // rbx
    unsigned long long v86;  // rbp
    unsigned long long v87;  // rax
    unsigned long v88;  // rdx
    unsigned long long v89;  // rcx
    unsigned long long v90;  // r12
    unsigned long long v92;  // rbp
    unsigned int *v93;  // rax
    unsigned long long v94;  // rax
    unsigned long long v95;  // rax
    unsigned long long v96;  // r14
    unsigned long long v97;  // rbp
    unsigned long long v98;  // rbx
    unsigned long long v99;  // rax
    unsigned long long v100;  // r14
    unsigned long long v102;  // rbp
    unsigned long long v103;  // rbx
    unsigned long long v105;  // r13
    unsigned long long v107;  // rax
    unsigned long long v108;  // r12
    unsigned long|unsigned long long v109;  // r13
    unsigned long long v110;  // r15
    unsigned long long v111;  // r14
    unsigned long long v112;  // rax
    unsigned long long v114;  // r12
    unsigned long|unsigned long long v115;  // rbp
    char *|unsigned long long v116;  // rbx
    unsigned long|unsigned long long v117;  // r15
    unsigned long|unsigned long long v118;  // r14
    unsigned long long v119;  // r8
    char v120;  // dil
    unsigned long long v122;  // rax
    unsigned long long v124;  // r8
    unsigned long long v125;  // r12
    unsigned long long v128;  // rcx
    unsigned long long v130;  // rcx
    char *v131;  // rsi
    void *v132;  // rdi
    unsigned long long v134;  // r13
    unsigned long long v136;  // rbx
    char *v137;  // r13
    unsigned long long v138;  // rax
    unsigned long long v142;  // r10
    unsigned long long v143;  // rax
    unsigned long long v144;  // r13
    unsigned long long v145;  // r12
    unsigned long long v146;  // rbx
    unsigned int v149;  // rsi
    unsigned long long v150;  // rbx
    unsigned long long v152;  // rbp
    unsigned long long v153;  // rax
    unsigned long long v155;  // rbx
    unsigned long long v156;  // rbx
    unsigned long v157;  // rsi
    unsigned long long v158;  // rax
    unsigned long long v159;  // rdx
    unsigned long long v161;  // rax
    unsigned long long v162;  // rbx
    unsigned long long v164;  // r14
    unsigned long long v165;  // r15
    unsigned long long v166;  // rax
    unsigned long long v167;  // r11
    unsigned long long v168;  // rbp
    unsigned long long v169;  // rax
    unsigned long long v170;  // rdx
    unsigned long|unsigned long long v173;  // r12
    unsigned long long v174;  // rbx
    unsigned long long v175;  // rdx
    unsigned long long v176;  // r10
    char *v177;  // rbp
    unsigned long long v178;  // rbx
    unsigned long long v179;  // r8
    unsigned long long v180;  // r15
    unsigned long long v181;  // rax
    unsigned long long v182;  // rax
    unsigned long long v183;  // rbx
    unsigned long long v184;  // rax
    unsigned long long v186;  // rbp
    unsigned long long v187;  // rbx
    unsigned long|char v188;  // al
    unsigned long v189;  // cc_dep1
    unsigned long long v191;  // rax
    char *v193;  // r15
    unsigned long v194;  // rbp
    unsigned long long v195;  // rax
    void *v196;  // rbx
    unsigned long long v197;  // r13
    unsigned long long v198;  // rax
    struct_2 *v200;  // r14
    unsigned long long v201;  // rax
    unsigned long long v202;  // rax
    unsigned long long v203;  // rax
    unsigned long long v205;  // rax
    unsigned long long v206;  // rax
    unsigned long long v207;  // rax
    unsigned long long v208;  // r12
    unsigned long long v209;  // r13
    unsigned long long v210;  // r14
    unsigned long long v211;  // rax
    unsigned long long v216;  // rbx
    unsigned long long v217;  // rbx
    unsigned long v218;  // rbp
    unsigned long long v219;  // rax
    unsigned long long v221;  // rbx
    unsigned long long v222;  // rbx
    unsigned long long v223;  // rbx
    unsigned int *v224;  // r13
    unsigned long long v226;  // rbx
    unsigned long long v227;  // rbx
    unsigned long long v228;  // rbx
    unsigned long long|struct_3 * v229;  // rbp
    unsigned long long v230;  // r12
    unsigned long long v231;  // r13
    unsigned long long v234;  // rax
    unsigned long long v236;  // rbx

    v17 = 0;
    v18 = 0;
    v20 = v19;
    v21 = v24;
    v2 = getpagesize();
    sub_4053a0();
    setlocale(0x6, 0x40c29f);
    bindtextdomain(0x409b13, 0x40a798);
    textdomain(0x409b13);
    sub_409900();
    g_60e5f0 = "-";
    g_60e620 = "x";
    v1 = 0;
    v9 = 0;
    v5 = 0;
    while (true)
    {
        if (v3 == -1)
        {
            if (g_60e760 != 0 && v9 != 0)
            {
                v47 = "--filter does not process a chunk extracted to stdout";
            }
            if (g_60e760 == 0 || v9 == 0)
            {
                if (!((unsigned int)v18 != 0))
                {
                    v1 = 1000;
                    v18 = 3;
                }
                else if (v1 == 0)
                {
                    v55 = (unsigned int)sub_406fc0();
                    dcgettext(0x0, 0x409b86, 0x5);
                    error(0x0, 0x0, "%s: ");
                    sub_404cf0(); /* do not return */
                }
                if ((unsigned int)v18 == 0 || v1 != 0)
                {
                    if (g_60e290 < 0)
                    {
                        g_60e290 = 10;
                    }
                    v56 = (unsigned int)v18 - 5;
                    if (g_60e600 != 0)
                    {
                        g_60e2a0 = 0;
                        if (v56 <= 2)
                        {
                            v61 = v1;
                            v57 = v1;
                            if (sub_407a20() == 0)
                            {
                                if (v15 < v61 && !(rsi<8>) >= v15)
                                {
                                    v57 = v15 + v61;
                                }
                                if (!(rsi<8>) < v15 || v15 >= v61)
                                {
                                    v57 = v1;
                                }
                            }
                        }
                    }
                    else
                    {
                        v57 = v1;
                    }
                    if (v56 > 2)
                    {
                        v59 = 0;
                    }
                    else
                    {
                        v62 = g_60e298;
                        v63 = -1;
                        while (v63 != 0)
                        {
                            v63 -= 1;
                            v64 = *(v62);
                            v62 = &v62[v38];
                            break;
                        }
                        v65 = !(rcx<8>) - 1;
                        v66 = (0 CONCAT v57) % (!(rcx<8>) - 1) >> 64;
                        v67 = (0 CONCAT v57) % (!(rcx<8>) - 1);
                        v68 = 0;
                        if (v65 <= v57)
                        {
                            while (true)
                            {
                                v68 += 1;
                                v69 = (0 CONCAT v67) % v65;
                                if (v65 > v67)
                                {
                                    break;
                                }
                                v67 = v69;
                            }
                        }
                        g_60e2a0 = 0;
                        v59 = (char)(v66 != 0) + v68;
                        if (g_60e608 != 0 && v59 > g_60e608)
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a948, 0x5));
                        }
                    }
                    if (g_60e608 == 0)
                    {
                        *((int *)&g_60e608) = (2 <= v59? v59 : 2);
                    }
                    if (g_60e608 != 0 && (v59 <= g_60e608 || v56 > 2))
                    {
                        g_60e2a0 = 0;
                    }
                    if (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2)
                    {
                        v70 = (unsigned long long)g_60e31c;
                        if (g_60e31c < v20)
                        {
                            v24 = v70 * 8;
                            v71 = *((long long *)((char *)v21 + 0x8 * v70));
                            g_60e31c = (unsigned int)v70 + 1;
                            g_60e5f0 = v71;
                            if ((unsigned int)(v70 + 1) < v20)
                            {
                                v72 = *((long long *)(v21 + v24 + 8));
                                v73 = (unsigned int)v70 + 2;
                                g_60e31c = g_60e31c + 2;
                                g_60e620 = v72;
                                if (v73 < v20)
                                {
                                    v76 = (unsigned int)sub_406fc0();
                                }
                            }
                        }
                    }
                }
            }
        }
        else if (v3 != 101)
        {
            if (v3 > 101)
            {
                if (v3 == 120)
                {
                    v24 = "0123456789abcdef";
                }
                else if (v3 <= 120)
                {
                    if (v3 != 110)
                    {
                        if (v3 > 110)
                        {
                            if (v3 == 116)
                            {
                                v27 = g_60e908[0];
                                if (g_60e908[0] != 0)
                                {
                                    if (g_60e908[1] != 0)
                                    {
                                        v36 = strcmp(g_60e908, "\\");
                                        if (v36 == 0)
                                        {
                                            v27 = 0;
                                        }
                                        else
                                        {
                                            v50 = (unsigned int)sub_406fc0();
                                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409bec, 0x5));
                                        }
                                    }
                                    if (g_60e908[1] == 0 || v36 == 0)
                                    {
                                        if (g_60e290 >= 0 && g_60e290 != v27)
                                        {
                                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a860, 0x5));
                                        }
                                        if (g_60e290 < 0 || g_60e290 == v27)
                                        {
                                            *((unsigned long long *)&g_60e290) = v27;
                                        }
                                    }
                                }
                                else
                                {
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409bd2, 0x5));
                                }
                            }
                            if (v3 == 117)
                            {
                                g_60e540 = 1;
                            }
                        }
                        else if (v3 == 108)
                        {
                            if ((unsigned int)v18 == 0)
                            {
                                v18 = 3;
                                dcgettext(0x0, 0x409b86, 0x5);
                                v1 = (unsigned int)sub_4079f0();
                            }
                        }
                    }
                    else
                    {
                        if ((unsigned int)v18 == 0)
                        {
                            v26 = g_60e908;
                            while (true)
                            {
                                v29 = v26;
                                v26 = &v26[1];
                                if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)(char)*((char *)v24) << 1) + 1)) & 32) == 0)
                                {
                                    break;
                                }
                                *((char *[2])&g_60e908[0]) = v26;
                            }
                            v34 = "r/";
                            v35 = 2;
                            v24 = v29;
                            while (v35 != 0)
                            {
                                v35 -= 1;
                                v39 = v24[0];
                                v40 = *(v34);
                                v34 = &v34[v38];
                                v24 = &v24[v38];
                                break;
                            }
                            if ((v39 > v40) - 0 - (v39 < v40) == 0)
                            {
                                v18 = 7;
                                *((void **)&g_60e908[0]) = v24 + 2;
                            }
                            else
                            {
                                v18 = 5;
                                v44 = strncmp(v24, "l/", 0x2);
                                if (v44 == 0)
                                {
                                    v18 = 6;
                                    *((void **)&g_60e908[0]) = v24 + 2;
                                }
                            }
                            v46 = strchr(g_60e908, 0x2f);
                            if (v46 != 0)
                            {
                                dcgettext(0x0, 0x409ba4, 0x5);
                                v1 = (unsigned int)sub_4079f0();
                                *(v46) = 0;
                                dcgettext(0x0, 0x409bbd, 0x5);
                                v9 = (unsigned int)sub_4079f0();
                            }
                            else
                            {
                                dcgettext(0x0, 0x409ba4, 0x5);
                                v1 = (unsigned int)sub_4079f0();
                            }
                        }
                    }
                }
                else
                {
                    if (v3 == 129)
                    {
                        *((char *[2])&g_60e760[0]) = g_60e908;
                    }
                    else if (v3 > 129)
                    {
                        if (v3 == 130)
                        {
                            dcgettext(0x0, 0x409c09, 0x5);
                            v5 = (unsigned int)sub_4079f0();
                        }
                        else if (v3 == 131)
                        {
                            if (g_60e908 == v30)
                            {
                                *((char *[2])&g_60e5f8[0]) = g_60e908;
                            }
                            else
                            {
                                v49 = (unsigned int)sub_406fc0();
                            }
                        }
                        if (v3 == 131)
                        {
                            v30 = sub_405180();
                        }
                    }
                    else if (v3 == 128)
                    {
                        g_60e542 = 1;
                    }
                }
            }
            else
            {
                if (v3 > 57)
                {
                    if (v3 == 97)
                    {
                        dcgettext(0x0, 0x409b58, 0x5);
                        g_60e608 = (unsigned int)sub_4079f0();
                    }
                    else if (v3 > 97)
                    {
                        if (v3 == 98 && (unsigned int)v18 == 0)
                        {
                            v18 = 1;
                            dcgettext(0x0, 0x409b6e, 0x5);
                            v1 = (unsigned int)sub_4079f0();
                        }
                        if (v3 == 100)
                        {
                            v24 = "0123456789";
                        }
                    }
                    else if (v3 == 67)
                    {
                        if ((unsigned int)v18 == 0)
                        {
                            v18 = 2;
                            dcgettext(0x0, 0x409b6e, 0x5);
                            v1 = (unsigned int)sub_4079f0();
                        }
                    }
                }
                else
                {
                    if (v3 < 48)
                    {
                        if (v3 == -131)
                        {
                            v0 = 0;
                            sub_407550();
                            exit(0x0); /* do not return */
                        }
                        if (v3 == -130)
                        {
                            sub_404cf0(); /* do not return */
                        }
                    }
                }
            }
        }
        if (v3 == 101)
        {
            g_60e541 = 1;
        }
        if (v3 <= 57 && (unsigned int)v18 == 0 && v3 <= 101 && v3 != -1 && v3 != 101 && v3 >= 48 || (unsigned int)v18 == 4 && v3 <= 57 && v3 <= 101 && v17 != (g_60e31c == 0? 1 : g_60e31c) && v3 != -1 && v17 != 0 && (unsigned int)v18 != 0 && v3 != 101 && v3 >= 48)
        {
            v17 = (g_60e31c == 0? 1 : g_60e31c);
            v18 = 4;
            v1 = v3 - 48;
        }
        if ((unsigned int)v18 == 4 && v3 <= 57 && v17 == 0 && v3 <= 101 && v3 != -1 && (unsigned int)v18 != 0 && v3 != 101 && v3 >= 48 || (unsigned int)v18 == 4 && v17 == (g_60e31c == 0? 1 : g_60e31c) && v3 <= 57 && v3 <= 101 && v3 != -1 && v17 != 0 && (unsigned int)v18 != 0 && v3 != 101 && v3 >= 48)
        {
            v24 = v1;
            if (v1 <= 1844674407370955161)
            {
                v31 = v24 * 10 + (unsigned long long)v3 - 48;
                if (v24 * 10 + (unsigned long long)v3 - 48 >= v24)
                {
                    v1 = v31;
                    v17 = (unsigned int)(g_60e31c == 0? 1 : g_60e31c);
                }
            }
            if (v24 * 10 + (unsigned long long)v3 - 48 < v24 || v1 > 1844674407370955161)
            {
                v2 = v3;
                v48 = (unsigned int)sub_405350();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40a888, 0x5));
            }
        }
        if (v3 == 120 && v3 != -1 && v3 != 101 && v3 > 101 || v3 == 100 && v3 <= 101 && v3 != 98 && v3 != -1 && v3 > 97 && v3 > 57 && v3 != 101 && v3 != 97)
        {
            v28 = g_60e908;
            v3 = sub_408cd0();
            g_60e298 = v24;
            v32 = -1;
            v33 = g_60e908;
            while (v32 != 0)
            {
                v32 -= 1;
                v37 = v33[0];
                v33 = &v33[v38];
                break;
            }
            v4 = !(rcx<8>) - 1;
            v42 = strspn((unsigned int)g_60e908);
            if (v4 == v42)
            {
                if (g_60e908[0] == 48)
                {
                    v45 = &v28[1];
                    if (v28[1] != 0)
                    {
                        do
                        {
                            *((char *[2])&g_60e908[0]) = v45;
                            v28 = v45;
                            v45 = &v45[1];
                        }
                        while (v45[0] == 48 && v45[0] != 0);
                    }
                }
                *((char *[2])&g_60e600[0]) = v28;
            }
            else
            {
                v1 = v3;
                v51 = (unsigned int)sub_406fc0();
                if (v1 == 100)
                {
                    v53 = dcgettext(0x0, 0x40a8b0, 0x5);
                }
            }
        }
        if (v3 == 110 && v3 <= 120 && v3 != 120 && v3 != -1 && (unsigned int)v18 != 0 && v3 != 101 && v3 > 101 || v3 <= 57 && v3 <= 101 && (unsigned int)v18 != 4 && v3 != -1 && (unsigned int)v18 != 0 && v3 != 101 && v3 >= 48 || v3 <= 97 && v3 == 67 && v3 <= 101 && v3 != -1 && v3 > 57 && (unsigned int)v18 != 0 && v3 != 101 && v3 != 97 || v3 == 98 && v3 <= 101 && v3 != -1 && v3 > 97 && v3 > 57 && (unsigned int)v18 != 0 && v3 != 101 && v3 != 97 || v3 <= 120 && v3 == 108 && v3 <= 110 && v3 != 110 && v3 != 120 && v3 != -1 && (unsigned int)v18 != 0 && v3 != 101 && v3 > 101)
        {
            v47 = "cannot split in more than one way";
        }
        if (v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) < v20 && v73 >= v20 || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) >= v20 || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c >= v20)
        {
            v74 = g_60e600;
            if (g_60e600 != 0)
            {
                v75 = -1;
                v47 = "numerical suffix start value is too large for the suffix length";
                while (v75 != 0)
                {
                    v75 -= 1;
                    v77 = *(v74);
                    v74 = &v74[v38];
                    break;
                }
            }
        }
        if (v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) < v20 && v73 < v20 || v3 == 131 && v3 != 130 && v3 > 129 && v3 != 120 && v3 != -1 && v3 > 120 && v3 != 101 && v3 != 129 && g_60e908 != v30 && v3 > 101 || v4 != v42 && (v3 == 120 && v3 != -1 && v3 != 101 && v3 > 101 || v3 == 100 && v3 <= 101 && v3 != 98 && v3 != -1 && v3 > 97 && v3 > 57 && v3 != 101 && v3 != 97) && v1 != 100)
        {
            v53 = dcgettext(0x0, v24, 0x5);
        }
        if (v1 == 100 && v4 != v42 && (v3 == 120 && v3 != -1 && v3 != 101 && v3 > 101 || v3 == 100 && v3 <= 101 && v3 != 98 && v3 != -1 && v3 > 97 && v3 > 57 && v3 != 101 && v3 != 97) || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) < v20 && v73 < v20 || v3 == 131 && v3 != 130 && v3 > 129 && v3 != 120 && v3 != -1 && v3 > 120 && v3 != 101 && v3 != 129 && g_60e908 != v30 && v3 > 101 || v4 != v42 && (v3 == 120 && v3 != -1 && v3 != 101 && v3 > 101 || v3 == 100 && v3 <= 101 && v3 != 98 && v3 != -1 && v3 > 97 && v3 > 57 && v3 != 101 && v3 != 97) && v1 != 100)
        {
            error(0x0, 0x0, v53);
            sub_404cf0(); /* do not return */
        }
        if (...)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v47, 0x5));
        }
        if ((v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) < v20 && v73 >= v20 || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) >= v20 || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c >= v20) && g_60e600 != 0 && !(rcx<8>) - 1 <= g_60e608 || (v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) < v20 && v73 >= v20 || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c < v20 && (unsigned int)(v70 + 1) >= v20 || v3 == -1 && (g_60e760 == 0 || v9 == 0) && ((unsigned int)v18 == 0 || v1 != 0) && (g_60e608 == 0 || v59 <= g_60e608 || v56 > 2) && g_60e31c >= v20) && g_60e600 == 0)
        {
            v78 = strcmp(g_60e5f0, "-");
            if (v78 != 0)
            {
                v80 = sub_405260();
                if (v80 < 0)
                {
                    v83 = (unsigned int)sub_406d70();
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x409c5d, 0x5));
                }
            }
            if (v78 == 0 || v80 >= 0)
            {
                if (__fxstat(0x1, 0x0, 0x60e560) == 0)
                {
                    if (v5 == 0)
                    {
                        *((int *)&v5) = (g_60e598 - 0x20000 <= 0x1ffffffffffe0000? g_60e598 : 0x20000);
                    }
                    v85 = v2;
                    v86 = -1;
                    v87 = sub_407690();
                    v88 = (0 CONCAT v87 + v85 - 1) % v85 >> 64;
                    v2 = 9223372036854775807;
                    v89 = v87 + v85 - 1 - v88;
                    v10 = v87 + v85 - 1 - v88;
                    if (v56 <= 1)
                    {
                        v90 = 0;
                        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            v92 = v5;
                            while (true)
                            {
                                v94 = sub_406fe0();
                                if (v94 != 0)
                                {
                                    if (v94 == -1)
                                    {
                                        break;
                                    }
                                    v95 = v94 + v90;
                                    v90 = v95;
                                    if (v92 <= v90)
                                    {
                                        v96 = g_60e590;
                                        v97 = v90;
                                        if (g_60e590 != 0)
                                        {
                                            v98 = lseek(0x0, 0x0, 0x1) + v90;
                                            if (g_60e590 < v98 || ((unsigned short)g_60e578 & 0xd000) != 0x8000)
                                            {
                                                v96 = lseek(0x0, 0x0, 0x2);
                                                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))
                                                {
                                                    break;
                                                }
                                                if (v98 != v96)
                                                {
                                                    v99 = lseek(0x0, v98, 0x0);
                                                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))
                                                    {
                                                        break;
                                                    }
                                                    v96 = (v96 < v98? v98 : v96);
                                                }
                                            }
                                            v100 = v96 - v98;
                                            v90 = v100 + v97;
                                        }
                                        if (v100 + v97 == 9223372036854775807 || g_60e590 == 0)
                                        {
                                            *(__errno_location()) = 75;
                                        }
                                    }
                                }
                                if (v94 == 0 || v92 <= v90 && v100 + v97 != 9223372036854775807 && g_60e590 != 0)
                                {
                                    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))
                                    {
                                        break;
                                    }
                                    v86 = (v90 <= v5? v90 : v5);
                                    if (!((char)(v1 - 0 >> 63)))
                                    {
                                        *((int *)&v2) = (v90 < v1? v1 : v90);
                                    }
                                    else
                                    {
                                        sub_405350();
                                        v103 = (unsigned int)sub_406fc0();
                                        dcgettext(0x0, 0x409ba4, 0x5);
                                        error(0x1, 0x4b, "%s: ");
                                    }
                                }
                            }
                            if (v92 <= v90 && v94 != 0 && v94 != -1 && g_60e590 == 0 || v92 <= v90 && v94 != 0 && g_60e590 != 0 && v94 != -1 && (((unsigned short)g_60e578 & 0xd000) == 0x8000 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) || g_60e590 >= v98) && v100 + v97 == 9223372036854775807 || v92 <= v90 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) && v94 != 0 && g_60e590 != 0 && v98 != v96 && v94 != -1 && (g_60e590 < v98 || ((unsigned short)g_60e578 & 0xd000) != 0x8000) || v92 <= v90 && v94 != 0 && g_60e590 != 0 && v94 != -1 && (g_60e590 < v98 || ((unsigned short)g_60e578 & 0xd000) != 0x8000) || v92 <= v90 && v94 != 0 && g_60e590 != 0 && v94 != -1 && (((unsigned short)g_60e578 & 0xd000) == 0x8000 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) || g_60e590 >= v98) && v100 + v97 != 9223372036854775807 || v94 == 0 || v94 != 0)
                            {
                                v102 = (unsigned int)sub_406e40();
                                error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a9b8, 0x5));
                            }
                        }
                        else
                        {
                            v93 = __errno_location();
                            if (*(v93) == 29)
                            {
                                *(v93) = 0;
                            }
                        }
                        v102 = (unsigned int)sub_406e40();
                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40a9b8, 0x5));
                    }
                    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) || v56 > 1)
                    {
                        if (g_60e760 != 0)
                        {
                            sigemptyset(0x60e640);
                            sigaction();
                            if (v15 != 1)
                            {
                                sigaddset(0x60e640, 0xd);
                            }
                            sigprocmask(0x0, 0x60e640, 0x60e6c0);
                        }
                        v105 = (unsigned int)v18 - 2;
                        switch ((unsigned int)v105)
                        {
                        case 0:
                            v2 = 0;
                            v108 = 0;
                            v109 = 0;
                            v4 = 0;
                            v3 = 0;
                            while (true)
                            {
                                v115 = (unsigned int)sub_406fe0();
                                if (v115 == -1)
                                {
                                    v155 = (unsigned int)sub_406e40();
                                    error(0x1, *(__errno_location()), "%s");
                                }
                                else if (v115 != 0)
                                {
                                    v116 = v10;
                                    do
                                    {
                                        v6 = v108 + v109;
                                        v117 = v1 - (v108 + v109);
                                        if (v115 >= v1 - (v108 + v109))
                                        {
                                            v118 = &v116[v117 + -1];
                                            v119 = memrchr((unsigned int)v116);
                                        }
                                        else
                                        {
                                            v118 = 0;
                                            v117 = 0;
                                            v119 = memrchr((unsigned int)v116);
                                        }
                                        if (v108 != 0)
                                        {
                                            v120 = v109 == 0;
                                            if (v119 != 0 || v120 != 0)
                                            {
                                                v7 = v119;
                                                sub_4049a0();
                                                v122 = v5;
                                                v109 = v6;
                                                v119 = v7;
                                                v4 = v5;
                                                if (v108 > v5)
                                                {
                                                    v6 = v7;
                                                    v4 = v122;
                                                    v3 = (unsigned int)sub_4076f0();
                                                }
                                            }
                                        }
                                        if ((v108 != 0 || v119 != 0) && (v108 > v5 || v119 != 0) && (v108 == 0 || v108 <= v5 || v6 != 0) && (v108 == 0 || v119 != 0 || v120 != 0))
                                        {
                                            v124 = v119 + -0x1 * v116;
                                            v125 = v124 + 1;
                                            v109 += v124 + 1;
                                            v115 -= v124 + 1;
                                            v116 = &v116[1 + v124];
                                            sub_4049a0();
                                            if (v118 != 0)
                                            {
                                                v117 -= v125;
                                                v2 = v117 != v125;
                                                if (v117 == v125)
                                                {
                                                    v2 = 1;
                                                    v108 = 0;
                                                }
                                            }
                                            else
                                            {
                                                v2 = v115 != 0;
                                                if (v115 != 0)
                                                {
                                                    v117 = v115;
                                                }
                                                else
                                                {
                                                    v108 = 0;
                                                    v2 = 1;
                                                }
                                            }
                                        }
                                        if (v119 == 0 || v108 != 0)
                                        {
                                            if ((v119 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v6 == 0) && (v108 == 0 || v119 != 0 || v120 != 0))
                                            {
                                                v108 = 0;
                                            }
                                            if (v2 == 0 && (v119 == 0 || v119 == 0 || v108 > v5) && (v119 == 0 || v120 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v119 == 0 || v6 == 0) && (v108 == 0 || v108 <= v5 || v6 == 0 || v120 == 0))
                                            {
                                                if (v118 != 0)
                                                {
                                                    v115 -= v117;
                                                    v116 = &v116[v117];
                                                    sub_4049a0();
                                                    v109 = 0;
                                                }
                                                else
                                                {
                                                    v134 = v109 + v115;
                                                    sub_4049a0();
                                                }
                                            }
                                        }
                                        if (v118 == 0 && (v108 != 0 || v119 != 0) && (v108 > v5 || v119 != 0) && (v108 == 0 || v108 <= v5 || v6 != 0) && (v108 == 0 || v119 != 0 || v120 != 0) && v115 != 0 || v118 != 0 && (v108 != 0 || v119 != 0) && (v108 > v5 || v119 != 0) && (v108 == 0 || v108 <= v5 || v6 != 0) && (v108 == 0 || v119 != 0 || v120 != 0) && v117 != v125)
                                        {
                                            v108 = 0;
                                        }
                                        if ((v2 != 0 && (v119 == 0 || v108 != 0) && (v119 == 0 || v119 == 0 || v108 > v5) && (v119 == 0 || v120 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v119 == 0 || v6 == 0) && (v108 == 0 || v108 <= v5 || v6 == 0 || v120 == 0) && v118 != 0 && v117 == 0 || v2 != 0 && (v119 == 0 || v108 != 0) && (v119 == 0 || v119 == 0 || v108 > v5) && (v119 == 0 || v120 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v119 == 0 || v6 == 0) && (v108 == 0 || v108 <= v5 || v6 == 0 || v120 == 0) && v118 == 0) && v118 == 0 && v115 != 0)
                                        {
                                            v117 = v115;
                                        }
                                        if ((v2 != 0 && (v119 == 0 || v108 != 0) && (v119 == 0 || v119 == 0 || v108 > v5) && (v119 == 0 || v120 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v119 == 0 || v6 == 0) && (v108 == 0 || v108 <= v5 || v6 == 0 || v120 == 0) && v118 != 0 && v117 == 0 || v2 != 0 && (v119 == 0 || v108 != 0) && (v119 == 0 || v119 == 0 || v108 > v5) && (v119 == 0 || v120 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v119 == 0 || v6 == 0) && (v108 == 0 || v108 <= v5 || v6 == 0 || v120 == 0) && v118 == 0) && v118 == 0 && v115 != 0 || v2 != 0 && (v119 == 0 || v108 != 0) && (v119 == 0 || v119 == 0 || v108 > v5) && (v119 == 0 || v120 == 0 || v108 > v5) && (v108 == 0 || v108 <= v5 || v119 == 0 || v6 == 0) && (v108 == 0 || v108 <= v5 || v6 == 0 || v120 == 0) && v118 != 0 && v117 != 0 || v118 == 0 && (v108 != 0 || v119 != 0) && (v108 > v5 || v119 != 0) && (v108 == 0 || v108 <= v5 || v6 != 0) && (v108 == 0 || v119 != 0 || v120 != 0) && v115 != 0 || v118 != 0 && (v108 != 0 || v119 != 0) && (v108 > v5 || v119 != 0) && (v108 == 0 || v108 <= v5 || v6 != 0) && (v108 == 0 || v119 != 0 || v120 != 0) && v117 != v125)
                                        {
                                            v128 = v4;
                                            if (v4 - v108 < v117)
                                            {
                                                if (!((long long)(stack_base)[-288]) < v128)
                                                {
                                                    break;
                                                }
                                                v130 = v128 + (long long)(stack_base)[-288];
                                                v4 = v130;
                                                v3 = (unsigned int)sub_4076f0();
                                            }
                                            v131 = v116;
                                            v115 -= v117;
                                            v116 = &v116[v117];
                                            v132 = v3 + v108;
                                            v108 += v117;
                                            memcpy(v132, v131, v117);
                                        }
                                        if (...)
                                        {
                                            v109 = (v118 != 0? 0 : r13<8>);
                                            v2 = (v118 != 0? 0 : (unsigned int)(char)(char)(stack_base)[-312]);
                                        }
                                    }
                                    while (!(...));
                                    if (true)
                                    {
                                        v115 = (unsigned int)sub_406fe0();
                                    }
                                    else if (v4 - v108 < v117)
                                    {
                                        sub_4078e0(); /* do not return */
                                    }
                                }
                                else
                                {
                                    if (v108 != 0)
                                    {
                                        sub_4049a0();
                                    }
                                    free(v3);
                                }
                            }
                            if (v115 == 0)
                            {
                                v234 = close(0x0);
                            }
                            else
                            {
                                sub_4078e0(); /* do not return */
                            }
                        case 1: case 2:
                            v110 = v1;
                            v111 = 0;
                            while (true)
                            {
                                v2 = (unsigned long long)(unsigned int)sub_406fe0();
                                if (v2 != -1)
                                {
                                    v136 = v2 + v10;
                                    v137 = v10;
                                    *((char *)(v2 + v10)) = g_60e290;
                                    while (true)
                                    {
                                        v138 = sub_408dd0();
                                        if (v136 != v138)
                                        {
                                            v111 += 1;
                                            v1 = v138 + 1;
                                            v111 = 0;
                                            sub_4049a0();
                                            v137 = v1;
                                        }
                                        else
                                        {
                                            if (v136 != v137)
                                            {
                                                sub_4049a0();
                                            }
                                            if (v2 != 0)
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    if (true)
                                    {
                                        v2 = (unsigned long long)(unsigned int)sub_406fe0();
                                    }
                                    else if (v2 == 0)
                                    {
                                        v234 = close(0x0);
                                    }
                                }
                                else
                                {
                                    v156 = (unsigned int)sub_406e40();
                                    error(0x1, *(__errno_location()), "%s");
                                }
                            }
                        case 3:
                            if (v9 == 0)
                            {
                                sub_404ab0();
                            }
                            else
                            {
                                v112 = v1;
                                if (v9 <= v1 && v2 >= v112)
                                {
                                    v149 = (0 CONCAT v2) % v1 * (v9 - 1);
                                    v150 = (0 CONCAT v2) % v1 * (v9 - 1);
                                    if (v9 != v1)
                                    {
                                        v161 = v9 * (0 CONCAT v2) % v1;
                                        v2 = v161;
                                    }
                                    if (v86 > v149)
                                    {
                                        v168 = v86 - v149;
                                        v170 = v168;
                                        memmove(v10, &v10[v149], v170);
                                    }
                                    else
                                    {
                                        v168 = -1;
                                        v169 = lseek(0x0, v149, 0x1);
                                        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))
                                        {
                                            v221 = (unsigned int)sub_406e40();
                                            error(0x1, *(__errno_location()), "%s");
                                        }
                                    }
                                    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)) || v86 > v149)
                                    {
                                        v209 = v5;
                                        v210 = v2;
                                        for (v211 = v168; v210 > v150; v211 = -1)
                                        {
                                            if (v211 == -1)
                                            {
                                                v211 = sub_406fe0();
                                                if (v211 == -1)
                                                {
                                                    v228 = (unsigned int)sub_406e40();
                                                    error(0x1, *(__errno_location()), "%s");
                                                }
                                            }
                                            if (v211 != -1 || v211 != -1)
                                            {
                                                if (v211 == 0)
                                                {
                                                    break;
                                                }
                                                v218 = (!(r14<8> - rbx<8> <= v211)? v211 : r14<8> - rbx<8>);
                                                v219 = sub_4052d0();
                                                if (v218 != v219 && (g_60e760 == 0 || *((int *)v209) != 32))
                                                {
                                                    v209 = __errno_location();
                                                    sub_406e40();
                                                    error(0x1, *(v224), "%s");
                                                }
                                                if (v218 == v219 || *((int *)v209) == 32 && g_60e760 != 0)
                                                {
                                                    v150 += v218;
                                                }
                                            }
                                        }
                                    }
                                }
                                if (v2 < v112 || v9 > v1)
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                        case 4:
                            v107 = v1;
                            if (v9 <= v1 && v2 >= v107)
                            {
                                v142 = (0 CONCAT v2) % v1;
                                v143 = v9;
                                if (v9 > 1)
                                {
                                    v145 = v143 - 1;
                                    v4 = v142;
                                    v146 = (v143 - 1) * v142 - 1;
                                    v144 = (v143 - 1) * v142 - 1;
                                    if (v86 > (v143 - 1) * v142 - 1)
                                    {
                                        v86 -= v3;
                                        v159 = v86;
                                        memmove(v10, &v10[v3], v159);
                                        v3 = v146;
                                        v142 = v4;
                                        break;
                                    }
                                    else
                                    {
                                        v157 = v3 - v86;
                                        v86 = -1;
                                        v158 = lseek(0x0, v157, 0x1);
                                        v3 = v3;
                                        v142 = v4;
                                        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))
                                        {
                                            v174 = (unsigned int)sub_406e40();
                                            error(0x1, *(__errno_location()), "%s");
                                        }
                                    }
                                }
                                else
                                {
                                    v144 = v142 - 1;
                                    v145 = 1;
                                    v3 = 0;
                                    break;
                                    v14 = 0;
                                    v164 = v9;
                                    v4 = 1;
                                    v165 = v142;
                                    v166 = v86;
                                    v167 = v2 - 1;
                                    while (true)
                                    {
                                        if (v2 > v3)
                                        {
                                            if (v166 == -1)
                                            {
                                                v6 = v167;
                                                v166 = sub_406fe0();
                                                v167 = v6;
                                                if (v166 == -1)
                                                {
                                                    v216 = (unsigned int)sub_406e40();
                                                    error(0x1, *(__errno_location()), "%s");
                                                }
                                            }
                                            if (v166 != 0 && (v166 != -1 || v166 != -1))
                                            {
                                                v175 = v2 - v3;
                                                v14 = 0;
                                                v176 = v165;
                                                v177 = v10;
                                                v178 = v4;
                                                v179 = v1;
                                                *((int *)&v12) = (v2 - v3 <= v166? v175 : v166);
                                                v180 = &v10[(v2 - v3 <= v166? v175 : v166)];
                                                while (true)
                                                {
                                                    v166 = -1;
                                                    if (v89 != v177)
                                                    {
                                                        v7 = v167;
                                                        v6 = v176;
                                                        v4 = v179;
                                                        v181 = sub_408dd0();
                                                        v179 = v4;
                                                        v176 = v6;
                                                        v167 = v7;
                                                        if (v181 != 0)
                                                        {
                                                            v13 = 1;
                                                            v89 = v181 + 1;
                                                        }
                                                        else
                                                        {
                                                            v89 = v180;
                                                            v13 = 0;
                                                        }
                                                        v182 = v89 + -0x1 * v177;
                                                        v4 = v89 + -0x1 * v177;
                                                        if (v145 == v164)
                                                        {
                                                            v11 = v7;
                                                            v8 = v6;
                                                            v183 = v182;
                                                            v7 = v179;
                                                            v6 = v89;
                                                            v184 = sub_4052d0();
                                                            v89 = v6;
                                                            v179 = v7;
                                                            v176 = v8;
                                                            v167 = v11;
                                                            if (v183 != v184)
                                                            {
                                                                v217 = dcgettext(0x0, 0x409c96, 0x5);
                                                                error(0x1, *(__errno_location()), "%s");
                                                            }
                                                        }
                                                        else if (v164 == 0)
                                                        {
                                                            v11 = v7;
                                                            v8 = v6;
                                                            v7 = v179;
                                                            v6 = v89;
                                                            sub_4049a0();
                                                            v167 = v11;
                                                            v176 = v8;
                                                            v179 = v7;
                                                            v89 = v6;
                                                        }
                                                        if (v183 == v184 || v145 != v164)
                                                        {
                                                            v186 = v3 + v4;
                                                            v3 += v4;
                                                            v187 = v13;
                                                            while (true)
                                                            {
                                                                if (v187 == 0 && v186 <= v144)
                                                                {
                                                                    v188 = v14;
                                                                }
                                                                if (v187 != 0 || v186 > v144)
                                                                {
                                                                    v188 = (char)((unsigned int)v187 ^ 1) & v89 == v89;
                                                                    if (((char)((unsigned int)v187 ^ 1) & v89 == v89) == 0)
                                                                    {
                                                                        v145 += 1;
                                                                        v189 = !(v145 <= v164) & v164 != 0;
                                                                        if ((char)v189 != 0)
                                                                        {
                                                                            break;
                                                                        }
                                                                        tmp_0 = v144 + v176;
                                                                        v144 = (v145 == v179? v167 : v144 + v176);
                                                                        if (v186 > (v145 == v179? v167 : tmp_0))
                                                                        {
                                                                            v11 = v167;
                                                                            v8 = v176;
                                                                            v7 = v179;
                                                                            v6 = v89;
                                                                            sub_4049a0();
                                                                            v89 = v6;
                                                                            v179 = v7;
                                                                            v176 = v8;
                                                                            v167 = v11;
                                                                        }
                                                                        else
                                                                        {
                                                                            v187 = 0;
                                                                        }
                                                                    }
                                                                }
                                                                if (((char)((unsigned int)v187 ^ 1) & v89 == v89) != 0 || v187 == 0 && v186 <= v144)
                                                                {
                                                                    v177 = v89;
                                                                    v12 -= v4;
                                                                    *((unsigned long *)&v14) = v188;
                                                                    v178 = v13;
                                                                }
                                                            }
                                                            if (((char)((unsigned int)v187 ^ 1) & v89 == v89) != 0 || v187 == 0 && v186 <= v144)
                                                            {
                                                                v166 = -1;
                                                            }
                                                            else if (((char)((unsigned int)v187 ^ 1) & v89 == v89) == 0)
                                                            {
                                                                v234 = close(0x0);
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        *((unsigned long long *)&v4) = v178;
                                                        v165 = v176;
                                                    }
                                                }
                                                if (v89 != v177)
                                                {
                                                    v234 = close(0x0);
                                                }
                                            }
                                        }
                                        if (v2 <= v3 || v166 == 0 && v166 != -1 || v166 == 0 && v166 != -1)
                                        {
                                            v208 = v145 - -1 - (char)(v14 < 1);
                                            if (v9 == 0)
                                            {
                                                while (v208 <= v1)
                                                {
                                                    v208 += 1;
                                                    sub_4049a0();
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if (v2 < v107 || v9 > v1)
                            {
                                __assert_fail(); /* do not return */
                            }
                        case 5:
                            if (v9 == 0)
                            {
                                v114 = v1;
                                v88 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x20<64>, Load(addr=stack_base-320, size=8, endness=Iend_LE), cc_ndep<8>);
                                if (v88 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>)))
                                {
                                    v152 = 0;
                                    v153 = sub_407690();
                                    v8 = v153;
                                    v162 = v153;
                                    while (true)
                                    {
                                        sub_403cc0();
                                        v152 += 1;
                                        v162 += 32;
                                        *((int *)(v162 - 24)) = -1;
                                        *((unsigned long long *)(v162 - 32)) = (unsigned int)sub_4078c0();
                                        *((long long *)(v162 - 16)) = 0;
                                        *((int *)(v162 - 8)) = 0;
                                        if (v152 == v114)
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v3 = 0;
                                v173 = 1;
                                v7 = 0;
                                v4 = 0;
                                v11 = 0;
                                while (true)
                                {
                                    v191 = sub_406fe0();
                                    if (v191 != -1)
                                    {
                                        if (v191 != 0)
                                        {
                                            v2 = &v10[v191];
                                            v193 = v10;
                                            while (true)
                                            {
                                                v194 = v2 - v193;
                                                v195 = sub_408dd0();
                                                if (v195 != 0)
                                                {
                                                    v196 = v195 + 1;
                                                    v197 = 1;
                                                    v194 = 1 + v195 + -0x1 * v193;
                                                }
                                                else
                                                {
                                                    v196 = v2;
                                                    v197 = 0;
                                                }
                                                v198 = v9;
                                                if (v9 != 0)
                                                {
                                                    if (v198 == v173)
                                                    {
                                                        if (g_60e540 == 0)
                                                        {
                                                            v201 = fwrite_unlocked(v193, v194, 0x1, stdout);
                                                            if (v201 != 1)
                                                            {
                                                                clearerr_unlocked(stdout);
                                                                v227 = dcgettext(0x0, 0x409c96, 0x5);
                                                                error(0x1, *(__errno_location()), "%s");
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v202 = sub_4052d0();
                                                            if (v194 != v202)
                                                            {
                                                                v223 = dcgettext(0x0, 0x409c96, 0x5);
                                                                error(0x1, *(__errno_location()), "%s");
                                                            }
                                                        }
                                                    }
                                                    if (v197 != 0 && (v194 == v202 || g_60e540 == 0 || v198 != v173) && (v201 == 1 || v198 != v173 || g_60e540 != 0))
                                                    {
                                                        v173 = (v1 != v173? v173 + 1 : 1);
                                                    }
                                                }
                                                else
                                                {
                                                    v200 = v3 * 32 + v8;
                                                    v7 |= (char)sub_404500();
                                                    v6 = __errno_location();
                                                    if (g_60e540 == 0)
                                                    {
                                                        v203 = fwrite_unlocked(v193, v194, 0x1, v200->field_10);
                                                        if (v203 == 1)
                                                        {
                                                            v205 = (unsigned int)v203 & 1;
                                                        }
                                                        else if (g_60e760 == 0 || *(v6) != 32)
                                                        {
                                                            sub_406e40();
                                                            error(0x1, *(v6), "%s");
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_4052d0();
                                                        if (v194 == v6)
                                                        {
                                                            v205 = (unsigned int)v6 & v88;
                                                        }
                                                        else if (g_60e760 == 0 || *(v6) != 32)
                                                        {
                                                            sub_406e40();
                                                            error(0x1, *(v6), "%s");
                                                        }
                                                    }
                                                    if ((v194 == v6 || g_60e540 == 0) && (v203 == 1 || g_60e540 != 0))
                                                    {
                                                        v4 = (v205 == 0? 1 : (unsigned int)(char)(char)(stack_base)[-296]);
                                                    }
                                                    if (v7 != 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0))
                                                    {
                                                        v206 = sub_407e60();
                                                        if (v206 == 0)
                                                        {
                                                            v200->field_10 = 0;
                                                            v200->field_8 = -2;
                                                        }
                                                        else
                                                        {
                                                            sub_406e40();
                                                            error(0x1, *(v6), "%s");
                                                        }
                                                    }
                                                }
                                                if ((v9 == 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0) && v7 != 0 && v206 == 0 || v9 == 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0) && v7 == 0) && v197 != 0)
                                                {
                                                    v3 += 1;
                                                    if (v3 == v1)
                                                    {
                                                        if (v4 == 0)
                                                        {
                                                            break;
                                                        }
                                                        v3 = 0;
                                                        v207 = v4;
                                                        v4 = 0;
                                                        *((unsigned long long *)&v11) = v207;
                                                    }
                                                }
                                                if (v9 != 0 && (v194 == v202 || g_60e540 == 0 || v198 != v173) && (v201 == 1 || v198 != v173 || g_60e540 != 0) || v9 == 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0) && v7 != 0 && v206 == 0 || v9 == 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0) && v7 == 0)
                                                {
                                                    v193 = v196;
                                                    if (v2 == v196)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (...)
                                            {
                                                v191 = sub_406fe0();
                                            }
                                            else if ((v9 == 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0) && v7 != 0 && v206 == 0 || v9 == 0 && (v194 == v6 || *(v6) == 32 || g_60e540 == 0) && (v194 == v6 || g_60e540 == 0 || g_60e760 != 0) && (*(v6) == 32 || v203 == 1 || g_60e540 != 0) && (v203 == 1 || g_60e760 != 0 || g_60e540 != 0) && v7 == 0) && v197 != 0 && v3 == v1)
                                            {
                                                v226 = (int)v1;
                                            }
                                        }
                                        else
                                        {
                                            if (v9 != 0)
                                            {
                                                break;
                                            }
                                            if (v11 == 0 && v9 == 0)
                                            {
                                                v226 = (int)v3;
                                            }
                                        }
                                        if (v191 != 0 || v9 == 0 && v11 != 0)
                                        {
                                            v226 = (int)v1;
                                        }
                                        v229 = v8;
                                        v230 = 0;
                                        v231 = v1;
                                        do
                                        {
                                            if (v226 <= v230 && g_60e541 == 0)
                                            {
                                                sub_404500();
                                            }
                                            if (v229->field_8 >= 0)
                                            {
                                                sub_4046f0();
                                            }
                                            v230 += 1;
                                            v229->field_8 = -2;
                                            v229 = &v229[2].field_8;
                                        }
                                        while (v230 != v231);
                                    }
                                    else
                                    {
                                        v222 = (unsigned int)sub_406e40();
                                        error(0x1, *(__errno_location()), "%s");
                                    }
                                }
                            }
                        default:
                            sub_404ab0();
                        }
                        sub_4078e0(); /* do not return */
                        v234 = close(0x0);
                        sub_4046f0();
                        return 0;
                        v236 = (unsigned int)sub_406e40();
                        error(0x1, *(__errno_location()), "%s");
                    }
                }
                else
                {
                    v84 = (unsigned int)sub_406e40();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
        }
        if (...)
        {
            sub_404cf0(); /* do not return */
        }
    }
}

int sub_407730()
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
        sub_4078e0(); /* do not return */
    }
}

int sub_406e10()
{
}

int sub_4074d0()
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

int sub_406d00()
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
    return sub_406770();
}

int sub_40490c()
{
}

extern uint128_t g_60e880;
extern uint128_t g_60e890;
extern uint128_t g_60e8a0;
extern unsigned long long g_60e8b0;

int sub_406d8f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60e8b0;
    *((uint128_t *)&v0) = g_60e880;
    *((uint128_t *)&v1) = g_60e890;
    *((uint128_t *)&v2) = g_60e8a0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_406770();
}

extern unsigned int g_60e900;

int sub_409750()
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
        if (g_60e900 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_409750();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60e900 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_60e900 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_409750();
        }
        if ((*(v12) == 22 || g_60e900 < 0) && (g_60e900 < 0 || (unsigned int)v15 < 0) && (g_60e900 < 0 || (unsigned int)v15 >= 0) && (g_60e900 == -1 || g_60e900 >= 0) && ((unsigned int)v15 >= 0 || g_60e900 >= 0))
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

int sub_4051e0()
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

extern unsigned int g_60e314;
extern unsigned int g_60e318;
extern unsigned int g_60e31c;
extern unsigned int g_60e8c0;
extern unsigned int g_60e8c4;
extern unsigned int g_60e8c8;
extern unsigned long long g_60e8d0;
extern unsigned long long g_60e908;

int sub_408c50()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60e8c0 = g_60e31c;
    g_60e8c4 = g_60e318;
    v1 = (unsigned int)v2;
    v0 = &g_60e8c0;
    g_60e31c = g_60e8c0;
    g_60e908 = g_60e8d0;
    g_60e314 = g_60e8c8;
    return sub_408680();
}

int sub_409740()
{
}

int sub_405260()
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

int sub_406f70()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    unsigned short field_4;
} struct_0;

extern unsigned int g_40c2b0;
extern unsigned long long g_60e320;
extern int512_t g_60e324;

int sub_409040()
{
    unsigned int *v1;  // rcx
    unsigned long long v2;  // rdx
    char *v3;  // rsi
    struct_0 *v4;  // rbp
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rbx
    unsigned long long v8;  // r12
    unsigned long long v10;  // rax

    v1 = &g_60e320;
    v2 = 0;
    v4 = v3;
    v6 = v5;
    while (true)
    {
        if (*(v1) != (unsigned int)v5)
        {
            v2 = (unsigned int)v2 + 1;
            v1 = &v1[3];
            if ((unsigned int)v2 == 35)
            {
                v8 = __libc_current_sigrtmin();
                if ((unsigned int)v5 <= (unsigned int)v8 && (unsigned int)v5 >= (unsigned int)v8)
                {
                    if ((unsigned int)v8 < (unsigned int)v5)
                    {
                        v4->field_0 = 1095586898;
                        v8 = __libc_current_sigrtmax();
                        v4->field_4 = 88;
                    }
                    else
                    {
                        v4->field_0 = 1229804626;
                        v4->field_4 = 78;
                    }
                    v10 = v6 - v8;
                    if ((unsigned int)v6 != (unsigned int)v8)
                    {
                        __sprintf_chk((unsigned int)v4 + 5, 0x1, 0xffffffff, 0x40c2b0, v10);
                        return 0;
                    }
                }
                if ((unsigned int)v5 < (unsigned int)v8 || (unsigned int)v5 > (unsigned int)v8)
                {
                    v10 = -18446744069414584321;
                }
            }
        }
        else
        {
            strcpy(v3, 6349604 + 12 * v2);
            v10 = 0;
        }
        if (*(v1) == (unsigned int)v5 || (unsigned int)v2 == 35 && (unsigned int)v6 == (unsigned int)v8 || (unsigned int)v2 == 35 && (unsigned int)v5 < (unsigned int)v8 || (unsigned int)v2 == 35 && (unsigned int)v5 > (unsigned int)v8)
        {
            return v10;
        }
    }
}

int sub_408cb0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_408c50();
}

int sub_406f20()
{
}

int sub_403cb8() { crash_skku;
}
extern unsigned int g_40bdef;
extern unsigned int g_60e2b0;

int sub_4078e0()
{
    dcgettext(0x0, 0x40bdef, 0x5);
    error(g_60e2b0, 0x0, "%s");
    abort(); /* do not return */
}

int sub_407550()
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
        return sub_4070f0();
    }
}

int sub_404ab0()
{
    unsigned long long v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x4a]
    char v3;  // [bp-0x49]
    unsigned long v4;  // [bp-0x40]
    unsigned long v5;  // [bp-0x30]
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdi
    unsigned long v9;  // rdx
    unsigned long long v10;  // rcx
    char v11;  // al
    unsigned long long|unsigned int v12;  // rbp
    unsigned long v13;  // cc_dep1
    unsigned long v15;  // cc_dep1
    unsigned long long v16;  // rax
    unsigned long long v17;  // rsi
    unsigned long long v18;  // r9
    unsigned long long v19;  // r11b
    unsigned long long v20;  // cc_dep1
    unsigned long v21;  // cc_dep1
    unsigned long|unsigned long long|char v22;  // rbx
    unsigned long long v23;  // r12
    unsigned long long v24;  // r13
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rbx
    unsigned long long v28;  // r8
    unsigned long long v29;  // rax
    unsigned long|unsigned long long v30;  // rax

    v7 = 0;
    v23 = v8;
    v12 = 1;
    v22 = 1;
    v4 = v9;
    if (v10 != -1)
    {
        v24 = v10;
        v3 = v10 < v9;
    }
    while (true)
    {
        if (v12 == 0)
        {
            v0 = v0;
            v16 = lseek(0x0, v23, 0x1);
            v28 = v0;
            v23 = (v16 != -1? v8 : r12<8>);
            v22 = (unsigned int)(v16 != -1? 1 : (unsigned int)rbx<8>);
        }
        v0 = v28;
        v30 = sub_406fe0();
        v28 = v0;
        v24 = v30;
        if (v30 != -1)
        {
            v3 = v30 == 0;
            if (v24 >= v23)
            {
                v18 = v17;
                v19 = (char)(v0 == 0);
                while (true)
                {
                    v20 = v12 | v22;
                    v12 |= v22;
                    if ((char)v20 != 0)
                    {
                        v1 = v28;
                        *((unsigned long long *)&v2) = v19;
                        v0 = v18;
                        v30 = sub_4049a0();
                        v28 = v1;
                        v19 = v2;
                        v12 = v30;
                        v18 = v0;
                    }
                    v22 = v22;
                    v7 += v22;
                    v21 = (char)(v7 < v28) | v19;
                    v22 = (char)(v7 < v28) | v19;
                    if (v12 == 0 && (char)v21 == 0)
                    {
                        break;
                    }
                    v24 -= v23;
                    v18 += v23;
                    v23 = v8;
                    break;
                }
                if (v8 > v24 && (v12 != 0 || (char)v21 != 0))
                {
                    v0 = v0;
                    v12 = sub_4049a0();
                    v30 = v22;
                    v7 += v22;
                    v15 = v0 == v7 & (char)(v12 ^ 1);
                    if ((char)v15 != 0)
                    {
                        break;
                    }
                }
                else if (v8 > v24 && (v12 != 0 || (char)v21 != 0))
                {
                    if (v3 != 0)
                    {
                        break;
                    }
                }
                else if ((char)v21 == 0)
                {
                    return v30;
                }
            }
            else if (v24 != 0)
            {
                v11 = (char)v12 | v22;
                if ((char)v12 == 0 && v22 == 0)
                {
                    v30 = v11;
                    v12 = 0;
                    v7 += v30;
                    v13 = (char)(r8<8> == v7);
                    v22 = r8<8> == v7;
                    if ((char)v13 != 0)
                    {
                        break;
                    }
                }
                if (((char)v12 == 0 || (char)v15 == 0) && ((char)v15 == 0 || v22 == 0) && ((char)v13 == 0 || (char)v12 != 0 || v22 != 0))
                {
                    v23 -= v24;
                }
            }
            if ((v24 < v23 || (char)v15 != 0) && (v24 != 0 || v24 >= v23) && ((char)v12 != 0 || v22 != 0 || v24 >= v23))
            {
                v0 = v0;
            }
        }
        else
        {
            v26 = (unsigned int)sub_406e40();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    if (v30 != -1 && (v24 < v23 || (char)v15 != 0) && ((char)v12 == 0 || v24 == 0 || (char)v15 == 0 || v24 >= v23) && (v24 == 0 || (char)v15 == 0 || v22 == 0 || v24 >= v23) && (v24 == 0 || (char)v13 == 0 || (char)v12 != 0 || v22 != 0 || v24 >= v23))
    {
        v25 = v7 + 1;
    }
    else if (v30 != -1 && (v24 != 0 || v24 >= v23))
    {
        return v30;
    }
    if (v7 >= v0)
    {
        v25 = v7 + 1;
        return v30;
    }
    if (false)
    {
        while (true)
        {
            v0 = v28;
            sub_4049a0();
            v28 = v0;
            v29 = v25 + 1;
            if (v0 == v25)
            {
                break;
            }
            v25 = v29;
        }
        return v5;
    }
}

int sub_407860()
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
        sub_4078e0(); /* do not return */
    }
}

int sub_4078c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_408cf0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408680();
}

extern unsigned int g_409a76;
extern unsigned int g_409a90;
extern unsigned int g_409de8;
extern unsigned int g_409e18;
extern unsigned int g_409e40;
extern unsigned int *g_60e740;
extern unsigned int *g_60e750;
extern unsigned long long g_60e760;

int sub_4046f0()
{
    unsigned int v0;  // [bp-0x5c]
    unsigned int v1;  // [bp-0x4c]
    char v2;  // [bp-0x48]
    unsigned long v4;  // rdx
    unsigned int v5;  // r12d
    unsigned long v6;  // rdi
    unsigned int *v7;  // r13
    unsigned long long v8;  // rbx
    unsigned int v9;  // esi
    unsigned int *|unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned int *v13;  // rdi
    unsigned int *v14;  // rcx
    unsigned long long v15;  // rax
    unsigned int *v16;  // rbp
    unsigned long long v17;  // rbp
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rbx

    v5 = v4;
    if (v6 != 0)
    {
        v11 = sub_407e60();
        if ((unsigned int)v11 != 0)
        {
            v11 = __errno_location();
            v7 = v11;
            if (g_60e760 == 0 || *(v11) != 32)
            {
                sub_406e40();
                error(0x1, *(v7), "%s");
            }
        }
    }
    else if (v9 >= 0)
    {
        v11 = close(v9);
        if ((unsigned int)v11 < 0)
        {
            v8 = (unsigned int)sub_406e40();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    if ((v6 == 0 || v9 >= 0) && ((unsigned int)v11 == 0 || *(v11) == 32 || v6 == 0) && ((unsigned int)v11 >= 0 || v6 != 0) && (v9 >= 0 || v6 != 0) && ((unsigned int)v11 == 0 || v6 == 0 || g_60e760 != 0) && g_60e740 != 0)
    {
        if (v9 != *(g_60e750))
        {
            v12 = &g_60e750[1];
            v13 = (char *)&g_60e740[-1] + 3;
            v11 = 0;
            while (&((char *)&g_60e740[-1])[3] != v11)
            {
                v14 = v12;
                v11 += 1;
                v12 += 4;
                if (*(v14) == v9)
                {
                    break;
                }
            }
            if (&((char *)&g_60e740[-1])[3] != v11)
            {
                v11 = (unsigned int)*((int *)((char *)g_60e750 + 0x4 * v13));
                g_60e740 = v13;
                *(v14) = v11;
            }
        }
        else
        {
            v14 = g_60e750;
            v13 = (char *)&g_60e740[-1] + 3;
        }
        v11 = (unsigned int)*((int *)((char *)g_60e750 + 0x4 * v13));
        g_60e740 = v13;
        *(v14) = v11;
    }
    if (v9 < 0 && v6 == 0 || (unsigned int)v11 == 0 && v6 != 0 || v6 == 0 && (unsigned int)v11 >= 0 || *(v11) == 32 && g_60e760 != 0 && v6 != 0)
    {
        if (v5 > 0)
        {
            v1 = 0;
            v15 = waitpid(v5, (unsigned int)&v1, 0x0);
            if (v15 == -1)
            {
                v16 = __errno_location();
                if (*(v16) != 10)
                {
                    error(0x1, *(v16), (unsigned long long)dcgettext(0x0, 0x409a76, 0x5));
                }
            }
            if (*(v16) == 10 || v15 != -1)
            {
                v17 = v1 & 127;
                v11 = v17 + 1;
                if (v17 + 1 > 1)
                {
                    if ((unsigned int)v17 != 13)
                    {
                        if (sub_409040() != 0)
                        {
                            __sprintf_chk((unsigned int)&v2, 0x1, 0x13, 0x409a90, v17);
                        }
                        v20 = (unsigned int)sub_406e40();
                        error((unsigned int)v17 + 128, 0x0, (unsigned long long)dcgettext(0x0, 0x409de8, 0x5));
                    }
                }
                else
                {
                    if ((unsigned int)v17 == 0)
                    {
                    }
                    else
                    {
                        v0 = 0;
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409e40, 0x5));
                    }
                }
            }
        }
        if (v5 <= 0 || *(v16) == 10 && v17 + 1 <= 1 && (unsigned int)v17 == 0 || *(v16) == 10 && (unsigned int)v17 == 13 && v17 + 1 > 1 || v17 + 1 <= 1 && (unsigned int)v17 == 0 && v15 != -1 || (unsigned int)v17 == 13 && v17 + 1 > 1 && v15 != -1)
        {
            return v11;
        }
        if (false)
        {
            v19 = (unsigned int)sub_406e40();
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409e18, 0x5));
        }
    }
}

extern unsigned long long g_60e770;

int sub_4050c0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60e770 = v1;
    return v2;
}

int sub_408cd0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408c50();
}

extern unsigned int g_60e294;
extern char g_60e541;
extern unsigned long long g_60e760;

int sub_4049a0()
{
    char v1;  // dil
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbx
    unsigned int *v8;  // rbx
    unsigned long long v10;  // rax

    if (v1 != 0 && (g_60e541 == 0 || v2 != 0 || v3 != 0))
    {
        sub_4046f0();
        sub_403cc0();
        g_60e294 = sub_403fc0();
        if (g_60e294 < 0)
        {
            v7 = (unsigned int)sub_406e40();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    if (v1 == 0 || g_60e541 == 0 && g_60e294 >= 0 || v2 != 0 && g_60e294 >= 0 || g_60e294 >= 0 && v3 != 0)
    {
        v6 = sub_4052d0();
    }
    if ((v2 == 0 || v6 == v3) && (v6 == v3 || v3 == 0) && (v6 == v3 || v1 != 0) && (v6 == v3 || g_60e541 != 0) && (v2 == 0 || v1 == 0 || g_60e294 >= 0) && (v1 == 0 || v3 == 0 || g_60e294 >= 0) && (v1 == 0 || g_60e541 != 0 || g_60e294 >= 0))
    {
        v10 = 1;
    }
    if (v6 != v3 && (v1 == 0 || g_60e294 >= 0) && (v1 == 0 || g_60e541 == 0 || v2 != 0 || v3 != 0))
    {
        v8 = __errno_location();
        if (g_60e760 != 0)
        {
            v10 = 0;
        }
        if (g_60e760 == 0 || *(v8) != 32)
        {
            sub_406e40();
            error(0x1, *(v8), "%s");
        }
    }
    if (g_60e294 >= 0 || g_60e760 != 0 || *(v8) == 32)
    {
        return v10;
    }
}

int sub_405540()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long|unsigned long long|char v4;  // [bp-0xc0]
    unsigned long|unsigned long long|char v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char v9;  // [bp-0x98]
    unsigned long|unsigned long long v10;  // [bp-0x90]
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
    unsigned long long v39;  // r11
    unsigned long|unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
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
    unsigned long long|unsigned int v77;  // rsi
    unsigned long long|unsigned int v78;  // r13
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
    unsigned long long|char v89;  // rdx
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
            v26 = (unsigned int)sub_405440();
            v27 = (unsigned int)sub_405440();
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
                            v50 = v5;
                            v5 = v41;
                            v78 = 0;
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
                            v89 = (char)((unsigned int)v39 == 2);
                            v36 = 0;
                            v40 = 0;
                            break;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v89 = (unsigned int)v39 == 2;
                        if (v4 == 0)
                        {
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            v78 = 0;
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v89 = (unsigned int)v39 == 2;
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
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
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
                            *((unsigned long long *)&v4) = v4 & v87;
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            v76 += 1;
                            v80 += 1;
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
                            v76 = (unsigned int)sub_405540();
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
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_408d50();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
                    {
                        if ((int)v10 == 2 && v46 != 1 && v17 != 0)
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
                        v39 = (unsigned int)v10;
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
            if ((v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_405540();
            }
            if (v17 == 0 && v4 != 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v4 == 0 && v5 == 0 || v46 == 0 && (v15 != 1 || v89 != 0))
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

int sub_406b70()
{
}

extern unsigned int g_40bab2;
extern unsigned int g_40badd;
extern unsigned int g_40bd10;

int sub_407610()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bab2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40badd, 0x5));
    dcgettext(0x0, 0x40bd10, 0x5);
}

int sub_407f80()
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

int sub_406f50()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4074f0()
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
    return sub_4070f0();
}

int sub_408d10()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408c50();
}

extern int512_t g_60e880;

int sub_406a00()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60e880 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_405540();
}

extern char g_60e768;

int sub_4050d0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60e768 = v1;
    return v2;
}

int sub_406c82()
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
    return sub_406770();
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60e2f8;
extern uint128_t g_60e300;
extern unsigned int g_60e310;
extern int512_t g_60e780;

int sub_406770()
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
    v17 = g_60e2f8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60e310 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60e2f8 != 0x60e300)
            {
                v16 = sub_4076f0();
                g_60e2f8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4076f0();
                v17 = v15;
                g_60e2f8 = v15;
                *(v15) = g_60e300;
            }
            memset(&v17[(long long)(int)g_60e310], 0x0, (int)((unsigned int)v13 + 1 - g_60e310) * 16);
            g_60e310 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4078e0(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_60e310 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_405540();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6350720)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_407690();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_405540();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_406a72()
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

extern unsigned int g_40c240;
extern unsigned int g_40c284;

int sub_408680()
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
    char *v15[3];  // r12
    char v16[2];  // rdx
    unsigned long|unsigned int v17;  // eax
    unsigned long long v18;  // rax
    unsigned long long|char [2] v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9
    char *[3]|unsigned long long * v26;  // rax
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
    unsigned long long|unsigned int v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long|unsigned int v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char *|char [2] v50;  // r15
    char v51[3];  // rax
    unsigned int v52;  // ecx
    char *v53;  // r8
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
        if (v19[0] == 0 || (unsigned int)v17 == 0 && v19 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        v5 = v24;
                        sub_407f80();
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
                    v0->field_0 = v0->field_2c;
                    if ((unsigned int)v42 != v39)
                    {
                        if (v0->field_2c != v8->field_30)
                        {
                            sub_407f80();
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
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_408060();
        if ((unsigned int)v45 == -1)
        {
            v48 = v15[(long long)(int)v0->field_0];
        }
    }
    if (...)
    {
        v19 = &v48[1];
    }
    if (...)
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
                        dcgettext(0x0, 0x40c240, 0x5);
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
            dcgettext(0x0, 0x40c284, 0x5);
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
                v58 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40c240, 0x5);
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
        v45 = (unsigned int)sub_408060();
    }
    v63 = v45;
    return v63;
}

int sub_407760() { crash_skku;
}
int sub_406c40()
{
}

extern unsigned int g_409d50;
extern char *g_60e298;
extern char g_60e2a0;
extern unsigned long long *g_60e520;
extern unsigned long long g_60e528;
extern unsigned long long g_60e530;
extern unsigned long long g_60e538;
extern unsigned long long g_60e5f8;
extern unsigned long long g_60e600;
extern unsigned long long g_60e608;
extern char *g_60e610;
extern unsigned long long g_60e618;
extern unsigned long long g_60e620;

int sub_403cc0()
{
    void tmp_12;  // tmp #12
    void tmp_16;  // tmp #16
    unsigned long long v1;  // rbx
    char *v2;  // rax
    char *v3;  // rsi
    char *v4;  // rdx
    char *v5;  // rdx
    unsigned long long *v6;  // rcx
    unsigned long long v7;  // r12
    unsigned long long v8;  // rax
    unsigned long long v9;  // r13
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long *v12;  // r13
    char *v13;  // rcx
    char *v14;  // rbp
    char *v15;  // rax
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rax
    void *v19;  // rax
    unsigned long v21;  // rsi
    char *v24;  // rbx
    unsigned long v25;  // rbp
    void *v26;  // rcx
    void *v28;  // rax

    v1 = g_60e608;
    if (g_60e618 != 0)
    {
        v2 = v1 - 1;
        if (v1 != 0)
        {
            v3 = g_60e298;
            v6 = &g_60e520[v1 + -1];
            while (true)
            {
                v4 = *(v6) + 1;
                *(v6) = *(v6) + 1;
                if (v2 == 0 && g_60e2a0 != 0)
                {
                    if (g_60e298[1 + *(g_60e520)] == 0)
                    {
                        break;
                    }
                    v2 = (unsigned long long)(char)*((char *)(v3 + v4));
                    tmp_12 = *((char *)(v3 + v4));
                    *(g_60e610) = *((char *)(v3 + v4));
                    if (tmp_12 != 0)
                    {
                        break;
                    }
                    *(v6) = 0;
                    *(g_60e610) = *(v3);
                }
                if (g_60e2a0 == 0 || v2 != 0)
                {
                    v5 = (unsigned long long)(char)*((char *)(g_60e298 + v4));
                    *((char **)(g_60e610 + v2)) = v5;
                    *(v6) = 0;
                    v6 = &v6[-1];
                    *((char *)(g_60e610 + v2)) = *(g_60e298);
                    v2 = &v2[-1];
                    if (v2 == -1 || v5 != 0)
                    {
                        break;
                    }
                }
            }
            if (g_60e2a0 == 0 || v2 != 0 || g_60e298[1 + *(g_60e520)] != 0)
            {
                return v2;
            }
            else if (v2 == 0 && g_60e2a0 != 0)
            {
                v7 = g_60e538;
            }
            else if ((v2 == 0 || v5 == 0) && (v5 == 0 || g_60e2a0 != 0) && (g_60e2a0 == 0 || tmp_12 == 0 || v2 != 0) && (g_60e2a0 == 0 || v2 != 0 || g_60e298[1 + *(g_60e520)] != 0))
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409d50, 0x5));
            }
        }
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409d50, 0x5));
    }
    if (g_60e618 == 0 || v1 != 0)
    {
        v7 = g_60e538;
        if (g_60e538 == 0)
        {
            v8 = strlen(g_60e620);
            v9 = v8;
            g_60e530 = v8;
            v10 = 0;
            if (g_60e5f8 != 0)
            {
                v10 = strlen(g_60e5f8);
            }
            g_60e528 = v10;
            v17 = v10 + g_60e608 + v9;
            g_60e538 = v17;
            if (v9 <= g_60e538 + 1)
            {
                v19 = sub_4076f0();
                v16 = g_60e530;
                v14 = v19;
                g_60e618 = v19;
                memcpy(v19, g_60e620, g_60e530);
                v15 = g_60e298;
                v12 = g_60e520;
            }
        }
        else
        {
            g_60e538 = v7 + 2;
            g_60e608 = g_60e608 + 1;
            if (v7 + 3 >= g_60e530)
            {
                v11 = sub_4076f0();
                v12 = g_60e520;
                v13 = g_60e530;
                v14 = v11;
                g_60e618 = v11;
                v15 = g_60e298;
                tmp_16 = *(g_60e520);
                v16 = g_60e530 + 1;
                g_60e530 = g_60e530 + 1;
                *((char *)(v14 + v13)) = g_60e298[tmp_16];
            }
        }
        if ((v7 + 3 < g_60e530 || g_60e538 == 0) && (g_60e538 != 0 || v9 > g_60e538 + 1))
        {
            sub_4078e0(); /* do not return */
        }
        if ((g_60e538 == 0 || v7 + 3 >= g_60e530) && (v9 <= g_60e538 + 1 || g_60e538 != 0))
        {
            v21 = *(v15);
            g_60e610 = &v14[v16];
            if (g_60e5f8 != 0)
            {
                memcpy(memset(g_60e610, v21, g_60e608) + g_60e608, g_60e5f8, g_60e528);
            }
            v14[g_60e538] = 0;
            free(v12);
            v2 = sub_407860();
            v24 = v2;
            g_60e520 = &v2;
            if (g_60e600 != 0)
            {
                if (v7 == 0)
                {
                    v25 = strlen(g_60e600);
                    v2 = memcpy(&g_60e610[g_60e608 + -1 * v25], g_60e600, v25);
                    v26 = v25 - 1;
                    if (v25 != 0)
                    {
                        v28 = &v24[8 * g_60e608 + -8 * v25];
                        do
                        {
                            *((long long *)((char *)v28 + 0x8 * v26)) = (int)((unsigned int)(char)*(&((char *)v26)[g_60e600]) - 48);
                            v26 -= 1;
                        }
                        while (v26 != -1);
                        return v28;
                    }
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
        }
        if ((g_60e600 == 0 || v7 == 0 || g_60e618 != 0) && (g_60e600 == 0 || v25 == 0 || g_60e618 != 0) && (g_60e538 == 0 || v7 + 3 >= g_60e530 || g_60e618 != 0) && (v9 <= g_60e538 + 1 || g_60e538 != 0 || g_60e618 != 0))
        {
            return v2;
        }
    }
}

int sub_406e40()
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
    return sub_406770();
}

extern int512_t g_40ad0e;
extern int512_t g_40ad12;

int sub_405440()
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
        v3 = sub_4091d0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40ad0e : 4238617);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40ad12 : 4238613);
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

int sub_406910()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_407890();
}

int sub_407a20()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long|unsigned long long|unsigned int v5;  // rdi
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
    unsigned long long|unsigned int v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned long long|unsigned int v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned long long|unsigned int v39;  // rdi
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rcx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned int v48;  // cc_dep1
    unsigned long long v49;  // rax
    unsigned long long v50;  // r8

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
                                    /* goto *((long long *)(rdx<8> * 8 + 4243000)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi<8> * 2 + 1;
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
        if (...)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (...)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v41 = v30;
                v5 = 6;
                do
                {
                    v33 = v33 * v41;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v48 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v48 != 1);
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v49 = tmp_11 * v28 * v28;
                    v33 = v49;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
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
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v35;
                    v35 -= 1;
                }
                while (v44 != 1);
            case 18: case 50:
                v36 = v30;
                v37 = 4;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v37;
                    v37 -= 1;
                }
                while (v45 != 1);
                break;
            case 23:
                v40 = v30;
                v5 = 8;
                do
                {
                    v33 = v33 * v40;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
            case 24:
                v38 = v30;
                v39 = 7;
                do
                {
                    v33 = v33 * v38;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v39;
                    v39 -= 1;
                }
                while (v46 != 1);
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v50 = &v32[v31];
                *(v12) = v50;
            case 53:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 = -1;
                    break;
                }
                else
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

int sub_4076e0()
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

int sub_407f20()
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

int sub_4052d0()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v6 = v3;
        v5 = v1;
        v2 = 0;
        while (true)
        {
            v4 = sub_407040();
            if (v4 == -1)
            {
                break;
            }
            if (v4 != 0)
            {
                v2 += v4;
                v6 += v4;
                v5 -= v4;
                if (v5 == v4)
                {
                    break;
                }
            }
            else
            {
                *(__errno_location()) = 28;
                v8 = v2;
                return v8;
            }
        }
    }
    else
    {
        v2 = 0;
    }
    v7 = v2;
    return v7;
}

extern int512_t g_60e880;

int sub_406950()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60e880 : v1));
}

extern unsigned int g_409af8;
extern unsigned int g_409e68;
extern unsigned int g_409e90;
extern unsigned int g_409eb8;
extern unsigned int g_409f28;
extern unsigned int g_409f60;
extern unsigned int g_409fb0;
extern unsigned int g_40a3f8;
extern unsigned int g_40a470;
extern unsigned int g_40a4a0;
extern unsigned int g_40a4d8;
extern unsigned int g_40a578;
extern unsigned int g_40a6f8;
extern unsigned int g_40a740;
extern unsigned int g_40a760;
extern unsigned long long stdout;

int sub_404cf0()
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
    unsigned long long v30[2];  // rax
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
        dcgettext(0x0, 0x409e68, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409e90, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409eb8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409f28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409f60, 0x5), stdout);
        dcgettext(0x0, 0x409fb0, 0x5);
        __fprintf_chk();
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a3f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a470, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a4a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a4d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a578, 0x5), stdout);
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
            v32 = "split";
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
        if (v30[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409af8, 0x5));
            v41 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409af8, 0x5));
            v40 = setlocale(0x5, 0x0);
            if (v40 != 0)
            {
                v42 = strncmp(v40, "en_", 0x3);
            }
            if (v42 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a740, 0x5));
            }
        }
        if ((v30[1] == 0 || strncmp(v41, "en_", 0x3) != 0) && (v30[1] == 0 || v41 != 0) && (v42 != 0 || v30[1] != 0) && (v40 != 0 || v30[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a6f8, 0x5));
        }
        if (v30[1] != 0 || v42 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a740, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a760, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_409170()
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

extern struct_0 *g_60e2f8;
extern unsigned long long g_60e300;
extern unsigned long long g_60e308;
extern unsigned int g_60e310;
extern unsigned long long g_60e780;

int sub_406b80()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60e310;
    if (g_60e310 > 1)
    {
        v2 = &g_60e2f8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60e2f8[(unsigned long long)(g_60e310 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60e2f8->field_8 != 6350720)
    {
        v1 = free(g_60e2f8->field_8);
        g_60e300 = 0x100;
        g_60e308 = &g_60e780;
    }
    if (g_60e2f8 != 0x60e300)
    {
        v1 = free(g_60e2f8);
        g_60e2f8 = &g_60e300;
    }
    g_60e310 = 1;
    return v1;
}

int sub_409110()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_407e60();
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

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_2 *field_20;
} struct_1;

extern unsigned int g_40c178;
extern unsigned int g_40c198;
extern unsigned int g_40c1c8;
extern unsigned int g_40c1e8;
extern unsigned int g_40c218;
extern unsigned long long stderr;

int sub_408060()
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
    struct_1 *v9;  // [bp+0x8]
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
                                dcgettext(0x0, 0x40c178, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40c198, 0x5);
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
                                dcgettext(0x0, 0x40c218, 0x5);
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
                            dcgettext(0x0, 0x40c1e8, 0x5);
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
            dcgettext(0x0, 0x40c1c8, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_407e60()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_407ee0() != 0)
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

extern int512_t g_60e880;

int sub_4069b0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60e880 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60e880 : v1) + 4)) = v3;
    return v2;
}

int sub_4077f0() { crash_skku;
}
int sub_406fe0() { crash_skku;
}
int sub_406f80()
{
}

int sub_4070a0()
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

int sub_406d70()
{
}

extern int512_t g_60e288;

int sub_409900()
{
}

int sub_406fc0()
{
}

extern char g_60e508;
extern unsigned long long g_60e510;

int sub_403c61()
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

    if (g_60e508 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60e510 >= 0)
            {
                break;
            }
            g_60e510 = g_60e510 + 1;
            *((long long *)(6348352 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60e508 = 1;
        return sub_403c0b();
    }
    return v4;
}

extern int512_t g_60e320;
extern char g_60e324;

int sub_408ee0()
{
    char v0;  // [bp-0x30]
    char *v2;  // r13
    void *v3;  // rdi
    void *v5;  // rbp
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // r13
    unsigned long long v10;  // rbx
    char *v11;  // rdi
    unsigned long long v12;  // rcx
    void *v13;  // rsi
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // d
    unsigned long long v17;  // cc_dep1
    unsigned long long v18;  // rax
    char *v19;  // rdi
    unsigned long long v20;  // rcx
    unsigned long long v21;  // cc_dep1
    unsigned long long v22;  // cc_dep2
    unsigned long long v23;  // cc_dep1
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rax
    unsigned long long v26;  // r13
    unsigned long long v27;  // rax

    v2 = "HUP";
    v5 = v13;
    v6 = 0;
    if ((unsigned int)(char)*((char *)v3) - 48 <= 9)
    {
        v8 = strtol(v3, &v0, 0xa);
    }
    else
    {
        while (true)
        {
            v7 = strcmp(v2, v3);
            if (v7 != 0)
            {
                v6 = (unsigned int)v6 + 1;
                v2 = &v2[12];
                v9 = __libc_current_sigrtmin();
                v10 = __libc_current_sigrtmax();
                if ((unsigned int)v9 > 0)
                {
                    v11 = "RTMIN";
                    v12 = 5;
                    v13 = v3;
                    while (v12 != 0)
                    {
                        v12 -= 1;
                        v14 = (char)*((char *)v13);
                        v15 = *(v11);
                        v11 = &v11[v16];
                        v13 += v16;
                        break;
                    }
                    v17 = (v14 > v15) - 0 - (v14 < v15);
                    if ((char)v17 == 0)
                    {
                        v18 = strtol(v13 + 5, &v0, 0xa);
                        if (*((char *)*((long long *)&v0)) != 0)
                        {
                            break;
                        }
                        if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
                        {
                            break;
                        }
                        v24 = v10 - v9;
                        if (v18 > v24)
                        {
                            break;
                        }
                        v8 = v18 + v9;
                    }
                }
                if ((unsigned int)v9 <= 0 || (char)v17 != 0)
                {
                    if ((unsigned int)v10 <= 0)
                    {
                        break;
                    }
                    v19 = "RTMAX";
                    v20 = 5;
                    while (v20 != 0)
                    {
                        v20 -= 1;
                        v21 = (char)*((char *)v13);
                        v22 = *(v19);
                        v19 = &v19[v16];
                        v13 += v16;
                        break;
                    }
                    v23 = (v21 > v22) - 0 - (v21 < v22);
                    if ((char)v23 != 0)
                    {
                        break;
                    }
                    v26 = v9 - v10;
                    if (v25 < v26 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        break;
                    }
                    v25 = strtol(v13 + 5, &v0, 0xa);
                    if (*((char *)*((long long *)&v0)) != 0)
                    {
                        break;
                    }
                    v8 = v25 + v10;
                }
            }
            else
            {
                v8 = (unsigned int)*((int *)&((char *)&g_60e320)[12 * v6]);
            }
        }
        if ((unsigned int)v6 == 35 && v7 != 0 && ((unsigned int)v9 <= 0 || (char)v17 != 0) || (unsigned int)v6 == 35 && (unsigned int)v10 > 0 && v7 != 0 && ((unsigned int)v9 <= 0 || (char)v17 != 0) || (char)v23 == 0 && (unsigned int)v6 == 35 && (unsigned int)v10 > 0 && v7 != 0 && ((unsigned int)v9 <= 0 || (char)v17 != 0) || (char)v23 == 0 && *((char *)*((long long *)&v0)) == 0 && (unsigned int)v6 == 35 && (unsigned int)v10 > 0 && v7 != 0 && ((unsigned int)v9 <= 0 || (char)v17 != 0) && v25 >= v26 || *((char *)*((long long *)&v0)) == 0 && (char)v17 == 0 && (unsigned int)v6 == 35 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (unsigned int)v9 > 0 && v7 != 0 || *((char *)*((long long *)&v0)) == 0 && (char)v17 == 0 && (unsigned int)v6 == 35 && (unsigned int)v9 > 0 && v7 != 0 || (char)v17 == 0 && (unsigned int)v6 == 35 && (unsigned int)v9 > 0 && v7 != 0 || (char)v23 == 0 && *((char *)*((long long *)&v0)) == 0 && (unsigned int)v6 == 35 && (unsigned int)v10 > 0 && v7 != 0 && ((unsigned int)v9 <= 0 || (char)v17 != 0))
        {
            *((int *)v5) = -1;
            v27 = -18446744069414584321;
        }
        else if ((char)v23 == 0 && *((char *)*((long long *)&v0)) == 0 && (unsigned int)v6 == 35 && (unsigned int)v10 > 0 && v7 != 0 && ((unsigned int)v9 <= 0 || (char)v17 != 0) && v25 >= v26 && (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v7 == 0 || *((char *)*((long long *)&v0)) == 0 && (char)v17 == 0 && (unsigned int)v6 == 35 && v18 <= v24 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (unsigned int)v9 > 0 && v7 != 0)
        {
            *((unsigned int *)v5) = v8;
            v27 = v8 >> 31;
        }
    }
    if ((unsigned int)(char)*((char *)v3) - 48 > 9 || v8 <= 64 && *((char *)*((long long *)&v0)) == 0)
    {
        *((unsigned int *)v5) = v8;
        v27 = v8 >> 31;
    }
    if (v8 > 64 || (unsigned int)(char)*((char *)v3) - 48 > 9 || *((char *)*((long long *)&v0)) != 0)
    {
        *((int *)v5) = -1;
        v27 = -18446744069414584321;
    }
    return v27;
}

int sub_407840()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_407690();
}

int sub_404888()
{
    unsigned long long v1;  // [bp+0x48]
    unsigned long long v2;  // [bp+0x58]
    unsigned long long v3;  // [bp+0x60]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r12
    unsigned long long v6;  // r13
    unsigned long v7;  // rax

    v4 = v1;
    v5 = v2;
    v6 = v3;
    return v7;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_405180()
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

    v10 = sub_401970();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6348336 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern int512_t g_60e880;

int sub_406970()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60e880 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60e880 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_4076f0()
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
            sub_4078e0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_403fc0() { crash_skku;
}
extern unsigned int g_40ba6b;
extern unsigned int g_40ba6f;
extern unsigned int g_40ba7f;
extern unsigned int g_40ba96;
extern unsigned int g_40baf8;
extern unsigned int g_40bbc8;
extern unsigned int g_40bbe8;
extern unsigned int g_40bc10;
extern unsigned int g_40bc38;
extern unsigned int g_40bc68;

int sub_4070f0()
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
    dcgettext(0x0, 0x40ba6b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40baf8, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40ba6f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40ba7f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40ba96, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40bbc8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40bbe8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40bc10, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40bc38, 0x5);
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
        dcgettext(0x0, 0x40bc68, 0x5);
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

int sub_406d80()
{
}

int sub_406c50()
{
}

int sub_406fa0()
{
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40c29f;
extern char g_60e8f8[2];

int sub_4091d0()
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
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_60e8f8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40c29f : (unsigned long long)nl_langinfo(0xe));
    if (g_60e8f8 == 0)
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
            v9 = &g_40c29f;
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
                                        v9 = &g_40c29f;
                                        v10 = (tmp_10 == 0? &g_40c29f : tmp_10);
                                        free(NULL);
                                        sub_407e60();
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
                                        v61 = (unsigned int)*(v61);
                                        v62 = 1;
                                    }
                                    else
                                    {
                                        v61 = __uflow(v10);
                                        v62 = (char)((unsigned int)v61 != -1);
                                    }
                                }
                                while (v62 != 0 && v61 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v28 > 1 && v37 != 0)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v60 == 35 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v28 > 1 && v37 != 0) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40c29f : tmp_10);
                            sub_407e60();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1)
                    {
                        v9 = &g_40c29f;
                    }
                    else if (((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1) && v0 != 0 || ((unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40c29f;
            free(v17);
        }
        *((char *[2])&g_60e8f8[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40c29f : tmp_10), v9);
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

int sub_406c20()
{
}

extern char g_60e880;

int sub_4069d0()
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
    v3 = (v2 == 0? &g_60e880 : v2);
    *((int *)(tmp_11? &g_60e880 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60e880;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60e880;
        abort(); /* do not return */
    }
}

extern unsigned int g_409c96;
extern unsigned int g_60e2b0;
extern char g_60e768;
extern unsigned long long g_60e770;

int sub_4050e0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_409110();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60e768 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x409c96, 0x5);
            if (g_60e770 != 0)
            {
                sub_406e10();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60e768 != 0)
    {
        v3 = sub_409110();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60e768 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60e2b0);
        error(0x0, *(v2), "%s");
    }
}

int sub_405210()
{
    unsigned int v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x28]
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdx
    char v7;  // sil
    char *v8;  // rdi
    unsigned int v9;  // esi

    v3 = v5;
    v6 = 0;
    if ((v7 & 64) != 0)
    {
        v0 = 16;
        v6 = (unsigned int)v3;
        v1 = stack_base + 8;
        v2 = stack_base + -56;
    }
    open(v8, v9, v6);
    return sub_4070a0();
}

int sub_406a9b()
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
    v7 = (unsigned int)sub_405540();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_407690();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_405540();
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

int sub_4076b0()
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
        sub_4078e0(); /* do not return */
    }
}

int sub_408dd0()
{
    unsigned long long v1;  // rdx
    void *|char v2;  // dil
    unsigned long|char v3;  // rsi
    unsigned long long v4;  // r9
    void *v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdi

    if (v1 != 0)
    {
        if ((v2 & 7) != 0 && v3 != *((char *)v2))
        {
            do
            {
                v2 += 1;
                v1 -= 1;
            }
            while ((v2 & 7) != 0 && v1 != 1 && *((char *)v2) != (char)v3);
            if (v1 != 1)
            {
                v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
            }
            else if (true)
            {
                return 0;
            }
            else if ((v2 & 7) != 0 && v1 != 1)
            {
                v5 = v2;
            }
        }
        if ((v2 & 7) == 0 || v3 != *((char *)v2))
        {
            if ((v2 & 7) == 0 || v1 > 7)
            {
                v4 = (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000 | ((int)((unsigned int)v3 * 0x100 | (unsigned int)v3) | (int)((unsigned int)v3 * 0x100 | (unsigned int)v3) * 0x10000) * 0x100000000;
            }
            if (v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0)
            {
                while (true)
                {
                    v1 -= 8;
                    v2 += 8;
                    if (v1 > 7)
                    {
                        if ((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) + -72340172838076673) != 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                if (v1 <= 7)
                {
                    return 0;
                }
            }
        }
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && ((v2 & 7) == 0 || v1 > 7) && v1 <= 7) && v3 != *((char *)v2))
    {
        v6 = v2 + 1;
        v7 = v2 + v1;
        while (true)
        {
            v5 = v6;
            if (v6 != v7)
            {
                v6 += 1;
                if (*((char *)(v6 - 1)) == (char)v3)
                {
                    break;
                }
            }
        }
        if (v6 != v7)
        {
            return v5;
        }
        else if (v6 == v7)
        {
            return 0;
        }
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && ((v2 & 7) == 0 || v1 > 7) && v1 <= 7) && v3 == *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 && v1 > 7 || v3 == *((char *)v2) && v1 != 0 && (v2 & 7) != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && ((v2 & 7) == 0 || v1 > 7) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 && v1 > 7 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v1 <= 7 || v3 == *((char *)v2))
    {
        return v5;
    }
}

extern unsigned long long g_40c29f;

int sub_408d50()
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
        v5 = &g_40c29f;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_409170() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
} struct_3;

extern unsigned int g_60e758;

int sub_404500()
{
    unsigned int *v0;  // [bp-0x40]
    void tmp_9;  // tmp #9
    void tmp_12;  // tmp #12
    unsigned long v2;  // rsi
    unsigned long long v3;  // rdi
    unsigned long v4;  // rdx
    unsigned long long v6;  // r12
    struct_3 *v8;  // rbp
    unsigned long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned int v11;  // eax
    unsigned long v12;  // rax
    unsigned long long v13;  // rax
    unsigned int v17;  // eax
    unsigned long long v18;  // rbx

    if (*((int *)((v2 << 5) + v3 + 8)) < 0)
    {
        v6 = v3;
        v9 = (v2 == 0? v4 - 1 : v2 - 1);
        while (true)
        {
            v12 = sub_405210();
            while (true)
            {
                if (*(v0) - 23 > 1)
                {
                    v0 = v0;
                    sub_406e40();
                    error(0x1, *(v0), "%s");
                }
                else
                {
                    while (true)
                    {
                        v8 = v9 * 32 + v6;
                        if (*((int *)((v9 << 5) + v6 + 8)) < 0)
                        {
                            tmp_9 = v9 - 1;
                            tmp_12 = v9 == 0;
                            v9 = (v9 == 0? v4 - 1 : v9 - 1);
                            v0 = v0;
                            sub_406e40();
                            error(0x1, *(v0), "%s");
                        }
                        else
                        {
                            v0 = __errno_location();
                            v10 = sub_407e60();
                            if (v10 == 0)
                            {
                                v8->field_8 = -2;
                                v11 = *((int *)(v2 * 32 + v3 + 8));
                                v8->field_10 = 0;
                                break;
                            }
                            else
                            {
                                sub_406e40();
                                error(0x1, *(v0), "%s");
                            }
                        }
                    }
                    if (v10 == 0 && *((int *)((v9 << 5) + v6 + 8)) >= 0)
                    {
                        v12 = sub_405210();
                    }
                    else if (v10 == 0 && *((int *)((v9 << 5) + v6 + 8)) >= 0)
                    {
                        v12 = sub_403fc0();
                        if ((unsigned int)v12 >= 0)
                        {
                            break;
                        }
                    }
                    v12 = sub_403fc0();
                }
            }
            if (true)
            {
                v12 = sub_405210();
            }
            else if (v12 >= 0)
            {
                *((unsigned long *)(v2 * 32 + v3 + 8)) = v12;
                v13 = fdopen(v12, "a");
                *((unsigned long long *)(v2 * 32 + v3 + 16)) = v13;
            }
        }
        *((unsigned long *)(v2 * 32 + v3 + 8)) = v12;
        v13 = fdopen(v12, "a");
        *((unsigned long long *)(v2 * 32 + v3 + 16)) = v13;
        v17 = g_60e758;
        g_60e758 = 0;
        *((unsigned int *)(v2 * 32 + v3 + 24)) = v17;
        v18 = (unsigned int)sub_406e40();
        error(0x1, *(__errno_location()), "%s");
    }
    return stack_base + 0;
}

int sub_407ee0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_407f20();
    }
}

int sub_407040() { crash_skku;
}
int sub_407920()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    v2 = sub_407a20();
    if ((unsigned int)v2 == 0)
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
        v4 = v2;
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
    if (v0 < v3 || (unsigned int)v2 != 0 || v0 > v5)
    {
        sub_406fc0();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

int sub_407890()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_407690();
}

extern int512_t g_60e880;

int sub_406960()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60e880 : v1)) = v2;
    return &g_60e880;
}

