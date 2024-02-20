
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

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

extern unsigned int g_412bbb;

int sub_40da70()
{
    struct v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (v1->field_8 == 0)
    {
        v2 = unsetenv(0x412bbb);
    }
    else
    {
        v2 = setenv(0x412bbb, (unsigned int)v1 + 9, 0x1);
    }
    v3 = 0;
    if (v2 == 0)
    {
        tzset();
        v3 = 1;
    }
    return v3;
}

// int sub_40b7c0()

extern unsigned int g_41786f;
extern unsigned int g_61b280;

int sub_40c3e0()
{
    dcgettext(0x0, 0x41786f, 0x5);
    error(g_61b280, 0x0, "%s");
    abort(); /* do not return */
}

typedef struct struct_10 {
    uint128_t field_0;
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
} struct_10;

typedef struct struct_11 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned int field_c;
} struct_11;

typedef struct struct_12 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned int field_18;
    unsigned int field_1c;
} struct_12;

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
    char padding_39[7];
    unsigned long long field_40;
    char field_48;
    char padding_49[7];
    unsigned long long field_50;
    char field_58;
    char padding_59[7];
    unsigned long long field_60;
    char field_68;
} struct_0;

typedef struct struct_13 {
    char padding_0[4285440];
    char field_416400;
} struct_13;

extern unsigned int g_4149d9;
extern unsigned int g_4149f3;
extern unsigned int g_414a26;
extern unsigned int g_414f08;
extern unsigned int g_414f40;
extern unsigned long long g_415a40;
extern unsigned long long g_415f20;
extern char g_416080;
extern char g_416140;
extern unsigned long long g_4162e0;
extern int512_t g_416340;
extern int512_t g_4163a0;
extern char g_416400;
extern char g_416480;
extern int512_t g_416500;
extern int512_t g_416520;
extern int512_t g_416540;
extern int512_t g_4165c0;
extern int512_t g_416640;

int sub_405940()
{
    void tmp_24;  // tmp #24
    void tmp_26;  // tmp #26
    void tmp_37;  // tmp #37
    void tmp_5;  // tmp #5
    void tmp_9;  // tmp #9
    void tmp_117;  // tmp #117
    void tmp_259;  // tmp #259
    unsigned long long v0;  // [bp-0x608]
    void tmp_120;  // tmp #120
    void tmp_256;  // tmp #256
    void tmp_1;  // tmp #1
    void tmp_7;  // tmp #7
    void tmp_113;  // tmp #113
    void tmp_249;  // tmp #249
    void tmp_14;  // tmp #14
    void tmp_62;  // tmp #62
    void tmp_11;  // tmp #11
    unsigned long long v1;  // [bp-0x600]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x5f8]
    char v3;  // [bp-0x5e8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x5e0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x5d8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x5d0]
    unsigned int v7;  // [bp-0x5c4]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x5c0]
    unsigned long v9;  // [bp-0x5b8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x5b0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x5a8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x5a0]
    unsigned long long v13;  // [bp-0x598]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // [bp-0x590]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v15;  // [bp-0x588]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // [bp-0x580]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // [bp-0x578]
    unsigned long long v18;  // [bp-0x570]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // [bp-0x568]
    char v20;  // [bp-0x554]
    char v21;  // [bp-0x552]
    char v22;  // [bp-0x550]
    char v23;  // [bp-0x54e]
    char v24;  // [bp-0x54c]
    char v25;  // [bp-0x54a]
    unsigned short v26;  // [bp-0x548]
    char v27;  // [bp-0x540]
    unsigned long v28;  // [bp-0x538]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v29;  // [bp-0x518]
    unsigned long v30;  // [bp-0x510]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v31;  // [bp-0x508]
    unsigned long v32;  // [bp-0x500]
    unsigned long v33;  // [bp-0x4f8]
    unsigned long v34;  // [bp-0x4e8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // [bp-0x4d8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v36;  // [bp-0x4d0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // [bp-0x4c8]
    unsigned long long v38;  // [bp-0x4c0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // [bp-0x4b8]
    unsigned long long v40;  // [bp-0x4b0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // [bp-0x4a8]
    unsigned int v42;  // [bp-0x4a4]
    unsigned int v43;  // [bp-0x4a0]
    char v44;  // [bp-0x498]
    unsigned long v45;  // [bp-0x490]
    unsigned long v46;  // [bp-0x488]
    unsigned long v47;  // [bp-0x480]
    unsigned long v48;  // [bp-0x478]
    unsigned long v49;  // [bp-0x470]
    char v51;  // [bp-0x1]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v53;  // r8
    unsigned long long v54;  // rdi
    unsigned long long v55;  // r9
    unsigned int v56;  // edx
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rsi
    unsigned long long v59;  // r15
    unsigned long long v60;  // rax
    unsigned long long v62;  // rbx
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rcx
    unsigned long long v66;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v67;  // rdx
    unsigned long long v68;  // r10
    unsigned long long v69;  // rax
    unsigned long long v70;  // r8
    unsigned long long v71;  // rax
    unsigned long long v72;  // rdi
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rcx
    unsigned long long v75;  // rax
    uint128_t v76;  // xmm7
    uint128_t v77;  // xmm0
    unsigned long long v78;  // r8
    char v79;  // r8b
    unsigned long long v80;  // rdi
    char v81;  // dil
    unsigned int v82;  // esi
    char v83;  // sil
    unsigned long long v84;  // rcx
    unsigned long long v85;  // cl
    unsigned long long v86;  // rcx
    unsigned long long v87;  // cl
    unsigned long long v88;  // rcx
    char v89;  // cl
    unsigned long long v91;  // rax
    unsigned long long v93;  // rax
    unsigned long v94;  // rsi
    unsigned long long v95;  // rax
    unsigned long long v96;  // rax
    unsigned long v97;  // rsi
    uint128_t v98;  // xmm0
    unsigned int v99;  // eax
    char v100[4285569];  // rax
    unsigned long long v101;  // r14
    unsigned long long v102;  // rax
    unsigned long long v103;  // r8
    char v104;  // r8b
    unsigned long long v105;  // rdi
    char v106;  // dil
    unsigned int v107;  // esi
    char v108;  // sil
    unsigned int v109;  // r11d
    char v110;  // r11b
    char v111;  // r10b
    unsigned int v112;  // ecx
    char v113;  // cl
    unsigned int v114;  // edx
    char v115;  // dl
    unsigned int v116;  // esi
    char v117;  // sil
    unsigned long long v118;  // rdi
    char v119;  // dil
    unsigned long long v120;  // rdi
    char v121;  // dil
    unsigned int v122;  // edi
    char v123;  // dil
    unsigned int v124;  // eax
    char v125;  // al
    unsigned long long v126;  // rax
    unsigned int v127;  // ecx
    char v128;  // cl
    unsigned long long v129;  // rdi
    char v130;  // dil
    unsigned int v131;  // esi
    char v132;  // sil
    unsigned int v133;  // edi
    char v134;  // dil
    unsigned long long v135;  // rdx
    char v136;  // dl
    unsigned int v137;  // edx
    char v138;  // dl
    unsigned int v139;  // eax
    char v140;  // al
    char v142;  // al
    unsigned long long v143;  // r8
    char v144;  // r8b
    unsigned long long v145;  // rdi
    char v146;  // dil
    unsigned int v147;  // esi
    char v148;  // sil
    unsigned int v149;  // r11d
    char v150;  // r11b
    char v151;  // r10b
    unsigned long long v152;  // rcx
    char v153;  // cl
    unsigned long long v154;  // rdi
    unsigned long long v155;  // rdi
    unsigned long long v156;  // rax
    unsigned long long v157;  // rdi
    unsigned long long v158;  // rdi
    unsigned long long v162;  // rdi
    uint128_t v164;  // xmm7
    char v166[4285569];  // r8
    unsigned long long v167;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v168;  // rax
    unsigned long long v169;  // rdi
    unsigned long long v170;  // rbp
    unsigned long long v171;  // rcx
    unsigned long long v172;  // rdx
    unsigned long long v173;  // rcx
    char v174[2];  // rsi
    unsigned long long v175;  // rcx
    char v176;  // al
    unsigned long long v177;  // rcx
    unsigned long long v178;  // rdx
    unsigned long long v179;  // rsi
    unsigned long long v180;  // rbp
    unsigned long long v181;  // rbp
    char v182[2];  // rsi
    unsigned long long v183;  // rcx
    unsigned long long v184;  // rdx
    unsigned long long v186;  // rbp
    char *v187;  // rsi
    unsigned long long v188;  // rax
    unsigned long long v189;  // r11
    unsigned long long v190;  // rcx
    unsigned long long v191;  // rcx
    unsigned long v192;  // rcx
    unsigned long long v193;  // rbp
    unsigned int v194;  // edx
    unsigned long long v195;  // rax
    char *v196;  // rcx
    unsigned long long v197;  // rdx
    unsigned long long v198;  // rdx
    char v199[2];  // rbp
    unsigned long long v200;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v201;  // rax
    unsigned long long v202;  // r13
    char *v203;  // rsi
    struct v204;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v205;  // rdi
    unsigned long long v206;  // cc_dep1
    unsigned long long v207;  // rax
    unsigned int *v208;  // rbp
    unsigned long long v209;  // r8
    unsigned long long v210;  // rdx
    unsigned long long v211;  // rax
    unsigned long long v212;  // rbp
    unsigned long long v213;  // rdi
    char *v214;  // rsi
    unsigned long long v215;  // rbx
    unsigned int v216;  // ebp
    char v217;  // dl
    unsigned long long v218;  // r9
    unsigned long long v219;  // rdx
    unsigned long long v220;  // r8
    unsigned long long v221;  // rcx
    char *v222;  // rsi
    char *v223;  // rdi
    unsigned long long v224;  // cc_dep1
    unsigned long long v225;  // cc_dep2
    unsigned long v226;  // d
    char *v227;  // rsi
    unsigned long long v228;  // cc_dep1
    unsigned long long v229;  // rax
    char *v230;  // rcx
    unsigned long long v231;  // rcx
    unsigned long long v232;  // r8
    char *v233;  // rsi
    unsigned long long v234;  // rax
    unsigned long long v235;  // r10
    unsigned long long v236;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v237;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v238;  // r15
    unsigned long long v239;  // rdx
    unsigned long long v240;  // rbp
    unsigned long long v241;  // rdx
    unsigned long long v242;  // rbx
    unsigned long long v243;  // rbp
    unsigned long long v244;  // r9
    char *v245;  // rsi
    unsigned long long v246;  // r15
    unsigned long long v247;  // rbp
    unsigned long long v248;  // rax
    unsigned long long v249;  // rax
    struct v250;  // rcx
    unsigned long long v251;  // r8
    struct v252;  // rcx
    char *v253;  // rsi
    unsigned long long v254;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v255;  // rsi
    char *v256;  // rcx
    unsigned int v257[4];  // rax
    unsigned long long v258;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v259;  // rax
    unsigned long long v261;  // r8
    char v262[4285569];  // r10
    unsigned long long v263;  // r13
    unsigned long long v264;  // r11
    unsigned long long v265;  // rax

    v53 = 0;
    v55 = v54;
    v238 = 38;
    v240 = -18446744069414584322;
    v26 = 0;
    v237 = &v44;
    v101 = &v26;
    v7 = 0;
    while (true)
    {
        v65 = (char)*(&((char *)&g_416540)[v53]);
        v56 = (char)*(&((char *)&g_416540)[v53]);
        if (*(&((char *)&g_416540)[v53]) == 0)
        {
            if (v7 == 3 && (unsigned int)-18446744069414584322 > 0)
            {
                v240 = -18446744069414584322;
            }
            if (!(INVALID_IR) || v7 != 3 || (unsigned int)-18446744069414584322 > 0)
            {
                while (true)
                {
                    v99 = (char)*(&((char *)&g_4165c0)[v53]);
                    if ((unsigned int)(char)*(&((char *)&g_4165c0)[v53]) != -93)
                    {
                        v100 = (unsigned long long)v99 + 1;
                        if ((unsigned int)v100 <= 112 && *((char *)(v100 + &g_416400)) == 1)
                        {
                            v53 = (char)*((char *)(v100 + &g_416480));
                            if (*((char *)(v100 + &g_416480)) != 0)
                            {
                                v237 += 56;
                                v65 = v101;
                                v7 = 3;
                                v30 = v8;
                                v31 = v9;
                                v237->field_0 = (int128_t)v29;
                                v237->field_30 = v34;
                                v237->field_10 = *((int128_t *)&v31);
                                v237->field_20 = *((int128_t *)&v33);
                            }
                        }
                    }
                    if (*((char *)(v100 + &g_416480)) == 0 || (unsigned int)(char)*(&((char *)&g_4165c0)[v53]) == -93 || (unsigned int)v100 > 112 || *((char *)(v100 + &g_416400)) != 1)
                    {
                        if (v101 == &v26)
                        {
                            break;
                        }
                        v101 = &v25;
                        v53 = *((short *)&v25);
                        v237 = &v36;
                    }
                }
                if (*((char *)(v100 + &g_416400)) == 1 && *((char *)(v100 + &g_416480)) != 0)
                {
                    v101 = v65 + 2;
                    *((unsigned long *)(v65 + 2)) = v53;
                    if (v65 + 2 >= stack_base + -1314)
                    {
                        break;
                    }
                }
                else if (*((char *)(v100 + &g_416480)) == 0 || (unsigned int)(char)*(&((char *)&g_4165c0)[v53]) == -93 || (unsigned int)v100 > 112 || *((char *)(v100 + &g_416400)) != 1)
                {
                    v265 = 1;
                }
            }
        }
        else
        {
            v57 = (unsigned long long)v56 - 4;
            v58 = (char)*(&((char *)&g_416340)[v65]);
            v59 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56));
            v68 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 8));
            v41 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 48));
            v263 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 16));
            *((int128_t *)&v35) = *((int128_t *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56));
            v264 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 24));
            *((int128_t *)&v37) = *((int128_t *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 16));
            v5 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 32));
            *((int128_t *)&v39) = *((int128_t *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 32));
            v4 = *((long long *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 40));
            v6 = *((int *)(v237 + (int)(1 - (unsigned int)(char)*(&((char *)&g_416340)[v65])) * 56 + 48));
            switch (v57)
            {
            case 0:
                v98 = *((int128_t *)&v44);
                *((char *)(v55 + 160)) = 1;
                *((uint128_t *)(v55 + 88)) = v98;
                v12 = v68;
                v11 = v264;
                v10 = v55;
                v155 = dcgettext(0x0, 0x4149f3, 0x5);
                v66 = 2;
            case 3:
                v12 = v68;
                v97 = "date";
                v11 = v264;
                *((long long *)(v55 + 200)) = *((long long *)(v55 + 200)) + 1;
                *((long long *)(v55 + 168)) = *((long long *)(v55 + 168)) + 1;
                v10 = v55;
            case 4:
                v12 = v68;
                v97 = "time";
                v11 = v264;
                *((long long *)(v55 + 200)) = *((long long *)(v55 + 200)) + 1;
                v10 = v55;
            case 5:
                v12 = v68;
                v97 = "local_";
                v11 = v264;
                *((long long *)(v55 + 184)) = *((long long *)(v55 + 184)) + 1;
                v10 = v55;
            case 6:
                v12 = v68;
                v97 = "zone";
                *((long long *)(v55 + 208)) = *((long long *)(v55 + 208)) + 1;
                v11 = v264;
                v10 = v55;
            case 7:
                v12 = v68;
                v97 = "date";
                v11 = v264;
                *((long long *)(v55 + 168)) = *((long long *)(v55 + 168)) + 1;
                v10 = v55;
            case 8:
                v12 = v68;
                v97 = "day";
                v11 = v264;
                *((long long *)(v55 + 176)) = *((long long *)(v55 + 176)) + 1;
                v10 = v55;
            case 9:
                v12 = v55;
                v94 = "relative";
                v11 = v68;
                v10 = v264;
            case 10:
                v12 = v55;
                v11 = v68;
                v10 = v264;
                v154 = dcgettext(0x0, 0x414a26, 0x5);
                v53 = -18446744069414584413;
                v66 = 4;
                v264 = v10;
                v68 = v11;
                if (*((char *)(v12 + 217)) != 0)
                {
                    v16 = -93;
                    v15 = v67;
                    v14 = 4;
                    v13 = v11;
                    v12 = v65;
                    v11 = v10;
                    v10 = v55;
                    sub_4055a0();
                }
            case 11:
                v12 = v55;
                v94 = "hybrid";
                v11 = v68;
                v10 = v264;
            case 14:
                v67 = &v31;
                v65 = &v24;
                *((long long *)(v55 + 80)) = 0;
                *((long long *)(v55 + 88)) = 0;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 72)) = (long long)v37;
                tmp_24 = *((long long *)&v44);
                *((long long *)(v55 + 96)) = 0;
                *((unsigned int *)(v55 + 28)) = tmp_24;
                v66 = 7;
                break;
            case 15:
                v65 = &v22;
                *((long long *)(v55 + 88)) = 0;
                *((long long *)(v55 + 96)) = 0;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 80)) = (long long)v37;
                tmp_26 = *((long long *)&v44);
                *((unsigned long *)(v55 + 72)) = v28;
                v67 = &v17;
                *((unsigned int *)(v55 + 28)) = tmp_26;
                v66 = 7;
                break;
            case 16:
                v53 = -18446744069414584413;
                *((long long *)(v55 + 88)) = (long long)(&v35)[8];
                *((unsigned long long *)(v55 + 72)) = v11;
                v65 = &v20;
                *((long long *)(v55 + 96)) = (int)v37;
                tmp_37 = *((long long *)&v44);
                *((unsigned long *)(v55 + 80)) = v28;
                v67 = &v3;
                *((unsigned int *)(v55 + 28)) = tmp_37;
                v66 = 7;
                break;
            case 18:
                *((long long *)(v55 + 80)) = 0;
                v67 = &v31;
                v65 = &v24;
                *((long long *)(v55 + 88)) = 0;
                v53 = 20;
                *((long long *)(v55 + 72)) = (long long)v37;
                v66 = 8;
                *((long long *)(v55 + 96)) = 0;
                *((int *)(v55 + 28)) = 2;
                break;
            case 19:
                *((long long *)(v55 + 88)) = 0;
                v65 = &v22;
                *((long long *)(v55 + 96)) = 0;
                v53 = 20;
                *((unsigned long *)(v55 + 72)) = v28;
                v67 = &v17;
                *((long long *)(v55 + 80)) = (long long)v37;
                v66 = 8;
                *((int *)(v55 + 28)) = 2;
                break;
            case 20:
                *((int *)(v55 + 28)) = 2;
                v53 = 20;
                *((long long *)(v55 + 88)) = (long long)(&v35)[8];
                *((unsigned long long *)(v55 + 72)) = v11;
                v65 = &v20;
                *((unsigned long *)(v55 + 80)) = v28;
                v67 = &v3;
                *((long long *)(v55 + 96)) = (int)v37;
                v66 = 8;
                break;
            case 23:
                v12 = v68;
                v11 = v264;
                *((long long *)(v55 + 208)) = *((long long *)(v55 + 208)) + 1;
                v10 = v55;
                v91 = sub_405100();
                v55 = v10;
                v264 = v11;
                v68 = v12;
                if (v91 != 0)
                {
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584347;
                    v66 = 10;
                    break;
                }
            case 24:
                v67 = &v35;
                v65 = &v25;
                v53 = -18446744069414584413;
                *((unsigned int *)(v55 + 20)) = *((long long *)&v44);
                v66 = 11;
                break;
            case 25:
                *((int *)(v55 + 20)) = 1;
                v67 = &v31;
                v65 = &v24;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 192)) = *((long long *)(v55 + 192)) + 1;
                v66 = 11;
                break;
            case 26:
                v60 = *((long long *)&v44);
            case 27:
                *((int *)(v55 + 24)) = 25200;
                v67 = &v35;
                v65 = &v25;
                v53 = -18446744069414584413;
                v66 = 12;
                break;
            case 28:
                v12 = v68;
                v11 = v264;
                *((unsigned int *)(v55 + 24)) = (long long)(&v35)[8];
            case 29:
                v12 = v68;
                v11 = v264;
                *((int *)(v55 + 24)) = 25200;
            case 30:
                v12 = v68;
                v11 = v264;
                v10 = v55;
                v93 = sub_405100();
                if (v93 != 0)
                {
                    v55 = v10;
                    v156 = *((int *)(v10 + 24)) + v31;
                    *((unsigned int *)(v10 + 24)) = *((int *)(v10 + 24)) + v31;
                    v67 = &v27;
                    v65 = &v23;
                    v53 = -18446744069414584413;
                    v66 = 12;
                    v264 = v11;
                    v68 = v12;
                    break;
                }
            case 31:
                v60 = *((int *)&v44) + 3600;
            case 32:
                v67 = &v31;
                v65 = &v24;
                v53 = -18446744069414584413;
                *((int *)(v55 + 24)) = (int)(&v35)[8] + 3600;
                v66 = 12;
                break;
            case 33:
                tmp_5 = *((long long *)&v44);
                *((long long *)(v55 + 8)) = 0;
                v67 = &v35;
                v65 = &v25;
                v53 = -18446744069414584413;
                *((unsigned int *)(v55 + 16)) = tmp_5;
                v66 = 13;
                break;
            case 34:
                *((long long *)(v55 + 8)) = 0;
                v67 = &v31;
                v65 = &v24;
                v53 = -18446744069414584413;
                *((unsigned int *)(v55 + 16)) = (long long)(&v35)[8];
                v66 = 13;
                break;
            case 35:
                v102 = (long long)(&v35)[8];
            case 36:
                v102 = (long long)v37;
            case 37:
                v65 = &v23;
                v67 = &v27;
                v53 = -18446744069414584413;
                *((unsigned long *)(v55 + 56)) = v32;
                *((unsigned long *)(v55 + 64)) = v45;
                v66 = 14;
                break;
            case 38:
                v95 = (char)*((char *)(v55 + 217));
                if (v19 > 3)
                {
                    if (v95 != 0)
                    {
                        v14 = v55;
                        v13 = v68;
                        v12 = v264;
                        v11 = v19;
                        v10 = (&v17)[1];
                        dcgettext(0x0, 0x414f08, 0x5);
                        sub_404f90();
                        v55 = v14;
                        v68 = v13;
                        v264 = v12;
                    }
                    v65 = &v21;
                    v67 = &v10;
                    v53 = -18446744069414584413;
                    *((unsigned long long *)(v55 + 48)) = v19;
                    *((int128_t *)(v55 + 32)) = *((int128_t *)&v17);
                    *((unsigned long *)(v55 + 56)) = v32;
                    *((unsigned long *)(v55 + 64)) = v45;
                    v66 = 14;
                }
                else
                {
                    v10 = (&v17)[1];
                    if (v95 != 0)
                    {
                        v13 = v55;
                        v12 = v68;
                        v11 = v264;
                        dcgettext(0x0, 0x414f40, 0x5);
                        sub_404f90();
                        v55 = v13;
                        v68 = v12;
                        v264 = v11;
                    }
                    v164 = *((int128_t *)&v44);
                    v65 = &v21;
                    v67 = &v10;
                    v53 = -18446744069414584413;
                    *((unsigned long long *)(v55 + 56)) = v10;
                    *((uint128_t *)(v55 + 32)) = v164;
                    *((unsigned long *)(v55 + 64)) = v32;
                    *((unsigned long *)(v55 + 48)) = v46;
                    v66 = 14;
                }
            case 39:
                *((unsigned long *)(v55 + 64)) = v32;
                *((long long *)(v55 + 56)) = (long long)(&v35)[8];
                *((unsigned long *)(v55 + 40)) = 0 - v45;
            case 40:
                *((long long *)(v55 + 56)) = *((long long *)&v31);
                *((long long *)(v55 + 64)) = 0 - (long long)v37;
                if ((long long)v37 != 0x8000000000000000)
                {
                    *((unsigned long *)(v55 + 40)) = 0 - v45;
                }
            case 41:
                v67 = &v31;
                v65 = &v24;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 56)) = (long long)(&v35)[8];
                *((unsigned long *)(v55 + 64)) = v45;
                v66 = 14;
                break;
            case 42:
                v77 = *((int128_t *)&v44);
                v65 = &v22;
                v67 = &v17;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 56)) = *((long long *)&v27);
                *((uint128_t *)(v55 + 32)) = v77;
                *((unsigned long *)(v55 + 64)) = v32;
                *((unsigned long *)(v55 + 48)) = v46;
                v66 = 14;
                break;
            case 43:
                v67 = &v31;
                v65 = &v24;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 64)) = (long long)v37;
                *((long long *)(v55 + 56)) = *((long long *)&v44);
                v66 = 14;
                break;
            case 44:
                v76 = *((int128_t *)&v44);
                *((unsigned long *)(v55 + 64)) = v32;
                *((uint128_t *)(v55 + 32)) = v76;
                *((long long *)(v55 + 56)) = (long long)(&v35)[8];
            case 46:
                *((unsigned long *)(v55 + 48)) = v33;
                v96 = (long long)v37;
                *((int128_t *)(v55 + 32)) = *((int128_t *)&v31);
                *((unsigned long long *)(v55 + 56)) = 0 - v96;
                if (v96 != 0x8000000000000000)
                {
                    *((unsigned long *)(v55 + 64)) = 0 - v45;
                    v67 = &v27;
                    v65 = &v23;
                    v53 = -18446744069414584413;
                    v66 = 15;
                    break;
                }
            case 47:
                v70 = v43;
                v14 = *((long long *)(v55 + 144));
                v10 = (long long)(&v35)[8];
                v11 = (long long)v37;
                v71 = *((long long *)(v55 + 136));
                v15 = *((long long *)(v55 + 128));
                v12 = (long long)(&v37)[8];
                v72 = v41;
                v16 = *((long long *)(v55 + 120));
                v13 = (long long)v39;
                v73 = (long long)(&v39)[8];
                v17 = *((long long *)(v55 + 112));
                v74 = (unsigned int)*((int *)(v55 + 152));
                v18 = *((long long *)(v55 + 104));
                if (*((int *)&v44) >= 0)
                {
                    *((unsigned int *)(v55 + 152)) = v74 + v70;
                    v127 = 0;
                    tmp_9 = v14 + v72;
                    v128 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1424, size=8, endness=Iend_LE), rdi, cc_ndep);
                    v129 = 0;
                    *((long long *)(v55 + 144)) = tmp_9;
                    v130 =  amd64g_calculate_condition(0x0, 0x4, rax, rsi, cc_ndep);
                    *((unsigned long long *)(v55 + 136)) = v71 + v73;
                    v131 = 0;
                    *((int *)&v14) = rdi;
                    v132 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1416, size=8, endness=Iend_LE), Load(addr=stack_base-1432, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long long *)(v55 + 128)) = v15 + v13;
                    v133 = 0;
                    v134 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1408, size=8, endness=Iend_LE), Load(addr=stack_base-1440, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long long *)(v55 + 120)) = v16 + v12;
                    v135 = 0;
                    v136 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1400, size=8, endness=Iend_LE), Load(addr=stack_base-1448, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long long *)(v55 + 112)) = v17 + v11;
                    *((int *)&v11) = rdx;
                    v137 = 0;
                    *((unsigned long long *)(v55 + 104)) = v18 + v10;
                    v138 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1392, size=8, endness=Iend_LE), Load(addr=stack_base-1456, size=8, endness=Iend_LE), cc_ndep);
                    v139 = rcx | (unsigned int)((!(v74 ^ v70) & (v74 ^ v74 + v70)) >> 31 & 1);
                    v140 = (char)(rcx | (unsigned int)((!(v74 ^ v70) & (v74 ^ v74 + v70)) >> 31 & 1)) | (char)v14;
                    v142 = (unsigned long long)(unsigned int)(rax | rsi | rdi) | (char)v11;
                    v126 = (unsigned int)rax | rdx;
                }
                else
                {
                    *((unsigned int *)(v55 + 152)) = v74 - v70;
                    v112 = 0;
                    v113 = ((v14 ^ v72) & (v14 ^ v14 - v72)) >> 63;
                    *((unsigned long long *)(v55 + 144)) = v14 - v72;
                    v114 = 0;
                    v115 = ((v71 ^ v73) & (v71 ^ v71 - v73)) >> 63;
                    *((unsigned long long *)(v55 + 136)) = v71 - v73;
                    v116 = 0;
                    v117 = ((v15 ^ v13) & (v15 ^ v15 - v13)) >> 63;
                    *((unsigned long long *)(v55 + 128)) = v15 - v13;
                    v118 = 0;
                    v119 = ((v16 ^ v12) & (v16 ^ v16 - v12)) >> 63;
                    *((unsigned long long *)(v55 + 120)) = v16 - v12;
                    *((int *)&v12) = rdi;
                    v120 = 0;
                    v121 = ((v17 ^ v11) & (v17 ^ v17 - v11)) >> 63;
                    *((unsigned long long *)(v55 + 112)) = v17 - v11;
                    *((int *)&v11) = rdi;
                    v122 = 0;
                    *((unsigned long long *)(v55 + 104)) = v18 - v10;
                    v123 = ((v18 ^ v10) & (v18 ^ v18 - v10)) >> 63;
                    v124 = rcx | (unsigned int)(((v74 ^ v70) & (v74 ^ v74 - v70)) >> 31 & 1) | rdx | rsi;
                    v125 = (char)(rcx | (unsigned int)(((v74 ^ v70) & (v74 ^ v74 - v70)) >> 31 & 1) | rdx | rsi) | (char)v12 | (char)v11;
                    v126 = (unsigned int)(rax | rdi);
                }
                if (v126 == 0)
                {
                    *((char *)(v55 + 161)) = 1;
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584413;
                    v66 = 16;
                    break;
                }
            case 48: case 49:
                v78 = 0;
                v79 = (!((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)*((int *)(v55 + 152))) & ((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)((int)(stack_base)[-1128] + *((int *)(v55 + 152))))) >> 31 & 1;
                *((int *)(v55 + 152)) = (int)(stack_base)[-1128] + *((int *)(v55 + 152));
                tmp_117 = *((long long *)(v55 + 144));
                v80 = 0;
                *((unsigned long *)(v55 + 144)) = *((long long *)(v55 + 144)) + v49;
                v81 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x88), size=8, endness=Iend_LE), Load(addr=stack_base-1144, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v55 + 136)) = *((long long *)(v55 + 136)) + v48;
                v82 = 0;
                v83 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x80), size=8, endness=Iend_LE), Load(addr=stack_base-1152, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v55 + 128)) = *((long long *)(v55 + 128)) + v47;
                v84 = 0;
                v85 = INVALID_IR;
                *((unsigned long *)(v55 + 120)) = *((long long *)(v55 + 120)) + v46;
                *((int *)&v10) = rcx;
                v86 = 0;
                v87 = INVALID_IR;
                *((unsigned long *)(v55 + 112)) = *((long long *)(v55 + 112)) + v45;
                *((int *)&v11) = rcx;
                v88 = 0;
                v89 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x68), size=8, endness=Iend_LE), Load(addr=rbx, size=8, endness=Iend_LE), cc_ndep);
                *((long long *)(v55 + 104)) = *((long long *)(v55 + 104)) + *((long long *)&v44);
                tmp_259 =  amd64g_calculate_condition(0x0, 0x4, t117, Load(addr=stack_base-1136, size=8, endness=Iend_LE), cc_ndep) | (unsigned int)r8 | rdi;
                if ((char)((unsigned int)tmp_259 | rsi) == 0)
                {
                    *((char *)(v55 + 161)) = 1;
                    v67 = &v35;
                    v65 = &v25;
                    v53 = -18446744069414584413;
                    v66 = 16;
                    break;
                }
            case 50:
                v42 = 0;
                v59 = (long long)(&v35)[8];
            case 51:
                v42 = 0;
                v59 = (long long)v37;
            case 52:
                v67 = &v35;
                v65 = &v25;
                v66 = 17;
                v264 = 0;
                v53 = -18446744069414584413;
                v263 = 0;
                v42 = 0;
                v68 = 0;
                v6 = 0;
                v59 = 1;
                v4 = 0;
                v5 = 0;
                break;
            case 53:
                v68 = (long long)(&v35)[8];
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v66 = 17;
            case 54:
                v68 = (long long)v37;
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v66 = 17;
            case 55:
                v67 = &v35;
                v65 = &v25;
                v66 = 17;
                v264 = 0;
                v53 = -18446744069414584413;
                v263 = 0;
                v59 = 0;
                v42 = 0;
                v6 = 0;
                v68 = 1;
                v4 = 0;
                v5 = 0;
                break;
            case 56:
                v41 = 0;
                v35 = 0;
                v37 = 0;
                v39 = 0;
                v263 = *((long long *)&v44) * *((long long *)&((char *)&v35)[8]);
            case 57:
                v41 = 0;
                v35 = 0;
                v37 = 0;
                v39 = 0;
                v263 = *((long long *)&v44) * (long long)v37;
            case 58:
                v263 = *((long long *)&v44);
                v67 = &v35;
                v65 = &v25;
                v66 = 17;
                v42 = 0;
                v53 = -18446744069414584413;
            case 59:
                v264 = (long long)(&v35)[8];
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v66 = 17;
            case 60:
                v264 = (long long)v37;
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v66 = 17;
            case 61:
                v67 = &v35;
                v65 = &v25;
                v66 = 17;
                v263 = 0;
                v53 = -18446744069414584413;
                v68 = 0;
                v59 = 0;
                v42 = 0;
                v6 = 0;
                v264 = 1;
                v4 = 0;
                v5 = 0;
                break;
            case 62:
                v42 = 0;
                v69 = (long long)(&v35)[8];
            case 63:
                v42 = 0;
                v69 = (long long)v37;
            case 64:
                v67 = &v35;
                v65 = &v25;
                v66 = 17;
                v264 = 0;
                v53 = -18446744069414584413;
                v263 = 0;
                v68 = 0;
                v59 = 0;
                v42 = 0;
                v6 = 0;
                v4 = 0;
                v5 = 1;
                break;
            case 65:
                v42 = 0;
                v75 = (long long)(&v35)[8];
            case 66:
                v42 = 0;
                v75 = (long long)v37;
            case 67: case 68:
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v4 = (long long)(&v35)[8];
                v6 = (int)v37;
                v66 = 17;
            case 69:
                v67 = &v35;
                v65 = &v25;
                v42 = 0;
                v53 = -18446744069414584413;
                v66 = 17;
                v6 = 0;
                v4 = 1;
            case 71:
                v59 = (long long)v37;
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = 60;
                v66 = 18;
            case 72:
                v68 = (long long)v37;
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = 60;
                v66 = 18;
            case 73:
                v41 = 0;
                v35 = 0;
                v37 = 0;
                v39 = 0;
                v263 = *((long long *)&v44) * (long long)v37;
                if (!(INVALID_IR))
                {
                    v67 = &v31;
                    v65 = &v24;
                    v53 = 60;
                    v66 = 18;
                }
            case 74:
                v264 = (long long)v37;
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = 60;
                v66 = 18;
            case 75:
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = 60;
                v5 = (long long)v37;
                v66 = 18;
            case 76:
                v67 = &v31;
                v65 = &v24;
                v42 = 0;
                v53 = 60;
                v4 = (long long)v37;
                v66 = 18;
            case 77:
                v263 = *((long long *)&v44);
                v67 = &v35;
                v65 = &v25;
                v66 = 19;
                v42 = 0;
                v53 = -18446744069414584413;
            case 81:
                v59 = v45;
                v67 = &v35;
                v65 = &v25;
                v68 = 0;
                v53 = -18446744069414584413;
                v66 = 21;
                break;
            case 83:
                v59 = v45;
                v67 = &v35;
                v65 = &v25;
                v68 = 0;
                v53 = -18446744069414584412;
                v66 = 22;
                break;
            case 84:
                v12 = v68;
                v11 = v264;
                v2 = v46;
                v1 = v45;
                v0 = *((long long *)&v44);
                v10 = v55;
                sub_404ca0();
                v67 = &v35;
                v65 = &v25;
                v53 = -18446744069414584413;
                v66 = 23;
                v55 = v10;
                v264 = v11;
                v68 = v12;
                break;
            case 85:
                v12 = v68;
                v11 = v264;
                v2 = (long long)(&v37)[8];
                v1 = (long long)v37;
                v0 = (long long)(&v35)[8];
                v10 = v55;
                sub_404ca0();
                v143 = 0;
                v55 = v10;
                v144 = (!((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)*((int *)(v10 + 152))) & ((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)((int)(stack_base)[-1128] + *((int *)(v10 + 152))))) >> 31 & 1;
                *((int *)(v10 + 152)) = (int)(stack_base)[-1128] + *((int *)(v10 + 152));
                tmp_120 = *((long long *)(v10 + 144));
                v145 = 0;
                *((unsigned long *)(v10 + 144)) = *((long long *)(v10 + 144)) + v49;
                v146 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x88), size=8, endness=Iend_LE), Load(addr=stack_base-1144, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 136)) = *((long long *)(v10 + 136)) + v48;
                v147 = 0;
                v148 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x80), size=8, endness=Iend_LE), Load(addr=stack_base-1152, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 128)) = *((long long *)(v10 + 128)) + v47;
                v149 = 0;
                v150 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x78), size=8, endness=Iend_LE), Load(addr=stack_base-1160, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 120)) = *((long long *)(v10 + 120)) + v46;
                v151 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x70), size=8, endness=Iend_LE), Load(addr=stack_base-1168, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 112)) = *((long long *)(v10 + 112)) + v45;
                v152 = 0;
                v153 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x68), size=8, endness=Iend_LE), Load(addr=rbx, size=8, endness=Iend_LE), cc_ndep);
                *((long long *)(v10 + 104)) = *((long long *)(v10 + 104)) + *((long long *)&v44);
                tmp_256 =  amd64g_calculate_condition(0x0, 0x4, t120, Load(addr=stack_base-1136, size=8, endness=Iend_LE), cc_ndep) | (unsigned int)r8 | rdi;
                if ((char)((unsigned int)tmp_256 | rsi | r11) == 0)
                {
                    *((char *)(v10 + 161)) = 1;
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584413;
                    v66 = 24;
                    v264 = v11;
                    v68 = v12;
                    break;
                }
            case 86:
                v53 = 43;
                v59 = -1;
                tmp_1 = v58 * 7;
                v65 = v101 - v58 * 2;
                v64 = v237 - tmp_1 * 8;
                v66 = 25;
                v67 = v64;
                break;
            case 87:
                v59 = v45;
                v67 = &v31;
                v65 = &v24;
                v53 = 43;
                v66 = 25;
                break;
            default:
                v66 = (unsigned int)(char)*(&((char *)&g_4163a0)[v65]) - 28;
                v53 = (char)*(&((char *)&g_416520)[(long long)(int)((unsigned int)(char)*(&((char *)&g_4163a0)[v65]) - 28)]);
                tmp_7 = v58 * 56;
                v65 = v101 - v58 * 2;
                v62 = v237 - tmp_7;
                v67 = v62;
                break;
            }
            if (v57 <= 87)
            {
                v67 = v57;
                if (*((long long *)(v67 * 8 + 4282048)) == 4222921 || *((long long *)(v67 * 8 + 4282048)) == 4219739)
                {
                    *((unsigned long long *)(v55 + 24)) = v60;
                    v67 = &v35;
                    v65 = &v25;
                    v53 = -18446744069414584413;
                    v66 = 12;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4223061 || *((long long *)(v67 * 8 + 4282048)) == 4221372)
                {
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584413;
                    v66 = 17;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4222653 || *((long long *)(v67 * 8 + 4282048)) == 4222398)
                {
                    v157 = dcgettext(0x0, v94, 0x5);
                    v53 = -18446744069414584413;
                    v66 = 4;
                    v264 = v10;
                    v68 = v11;
                    if (*((char *)(v12 + 217)) != 0)
                    {
                        v16 = -93;
                        v15 = v67;
                        v14 = 4;
                        v13 = v68;
                        v12 = v65;
                        v11 = v264;
                        v10 = v55;
                    }
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4220750 || *((long long *)(v67 * 8 + 4282048)) == 4220676 || *((long long *)(v67 * 8 + 4282048)) == 4221179)
                {
                    v6 = 0;
                    v264 = 0;
                    v263 = 0;
                    v59 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (!(INVALID_IR) && (*((long long *)(v67 * 8 + 4282048)) == 4220539 || *((long long *)(v67 * 8 + 4282048)) == 4220461))
                {
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584413;
                    v66 = 17;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4220278 || *((long long *)(v67 * 8 + 4282048)) == 4220352 || *((long long *)(v67 * 8 + 4282048)) == 4221059)
                {
                    v6 = 0;
                    v263 = 0;
                    v68 = 0;
                    v59 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4220112 || *((long long *)(v67 * 8 + 4282048)) == 4220185)
                {
                    v5 = v69;
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584413;
                    v66 = 17;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221767 || *((long long *)(v67 * 8 + 4282048)) == 4222087)
                {
                    v103 = 0;
                    v104 = (!((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)*((int *)(v55 + 152))) & ((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)((int)(stack_base)[-1128] + *((int *)(v55 + 152))))) >> 31 & 1;
                    *((int *)(v55 + 152)) = (int)(stack_base)[-1128] + *((int *)(v55 + 152));
                    tmp_113 = *((long long *)(v55 + 144));
                    v105 = 0;
                    *((unsigned long *)(v55 + 144)) = *((long long *)(v55 + 144)) + v49;
                    v106 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x88), size=8, endness=Iend_LE), Load(addr=stack_base-1144, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 136)) = *((long long *)(v55 + 136)) + v48;
                    v107 = 0;
                    v108 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x80), size=8, endness=Iend_LE), Load(addr=stack_base-1152, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 128)) = *((long long *)(v55 + 128)) + v47;
                    v109 = 0;
                    v110 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x78), size=8, endness=Iend_LE), Load(addr=stack_base-1160, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 120)) = *((long long *)(v55 + 120)) + v46;
                    v111 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x70), size=8, endness=Iend_LE), Load(addr=stack_base-1168, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 112)) = *((long long *)(v55 + 112)) + v45;
                    v65 = 0;
                    v65 = INVALID_IR;
                    *((long long *)(v55 + 104)) = *((long long *)(v55 + 104)) + *((long long *)&v44);
                    tmp_249 =  amd64g_calculate_condition(0x0, 0x4, t113, Load(addr=stack_base-1136, size=8, endness=Iend_LE), cc_ndep) | (unsigned int)r8 | rdi;
                    if ((char)((unsigned int)tmp_249 | rsi | r11) == 0 && rcx == 0 && v111 == 0)
                    {
                        *((char *)(v55 + 161)) = 1;
                        v10 = v55;
                        v162 = dcgettext(0x0, 0x414a1d, 0x5);
                        v53 = -18446744069414584413;
                        v66 = 12;
                        v264 = v11;
                        v68 = v12;
                        if (*((char *)(v10 + 217)) != 0)
                        {
                            v16 = -93;
                            v15 = v67;
                            v14 = 12;
                            v13 = v68;
                            *((int *)&v12) = rcx;
                        }
                    }
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221024 || *((long long *)(v67 * 8 + 4282048)) == 4222683 || *((long long *)(v67 * 8 + 4282048)) == 4220957 || *((long long *)(v67 * 8 + 4282048)) == 4222148 || *((long long *)(v67 * 8 + 4282048)) == 4222110 || *((long long *)(v67 * 8 + 4282048)) == 4222721)
                {
                    v158 = dcgettext(0x0, v97, 0x5);
                    v66 = 4;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4222759 || *((long long *)(v67 * 8 + 4282048)) == 4224047)
                {
                    *((unsigned long long *)(v55 + 8)) = v102;
                    tmp_9 = *((long long *)&v44);
                    v67 = &v31;
                    v65 = &v24;
                    *((char *)(v55 + 224)) = 1;
                    v53 = -18446744069414584413;
                    *((unsigned int *)(v55 + 16)) = tmp_9;
                    v66 = 13;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221487 || *((long long *)(v67 * 8 + 4282048)) == 4219655)
                {
                    v4 = v75;
                    v67 = &v31;
                    v65 = &v24;
                    v53 = -18446744069414584413;
                    v66 = 17;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221218 || *((long long *)(v67 * 8 + 4282048)) == 4223061 || *((long long *)(v67 * 8 + 4282048)) == 4221372)
                {
                    v6 = 0;
                    v264 = 0;
                    v263 = 0;
                    v68 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if ((*((long long *)(v67 * 8 + 4282048)) == 4223562 || v45 != 0x8000000000000000) && (*((long long *)(v67 * 8 + 4282048)) == 4223840 || *((long long *)(v67 * 8 + 4282048)) == 4223562 || *((long long *)(v67 * 8 + 4282048)) == 4223764) && (*((long long *)(v67 * 8 + 4282048)) == 4223840 || *((long long *)(v67 * 8 + 4282048)) == 4223562 || (long long)v37 != 0x8000000000000000))
                {
                    v65 = &v23;
                    v67 = &v27;
                    v53 = -18446744069414584413;
                    *((unsigned long *)(v55 + 48)) = v46;
                    v66 = 14;
                }
                if ((*((long long *)(v67 * 8 + 4282048)) == 4220388 || *((long long *)(v67 * 8 + 4282048)) == 4221507 || !(INVALID_IR)) && (*((long long *)(v67 * 8 + 4282048)) == 4220539 || *((long long *)(v67 * 8 + 4282048)) == 4220388 || *((long long *)(v67 * 8 + 4282048)) == 4220461 || *((long long *)(v67 * 8 + 4282048)) == 4221098 || *((long long *)(v67 * 8 + 4282048)) == 4221507))
                {
                    v6 = 0;
                    v264 = 0;
                    v68 = 0;
                    v59 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221589 || *((long long *)(v67 * 8 + 4282048)) == 4220112 || *((long long *)(v67 * 8 + 4282048)) == 4220185)
                {
                    v264 = 0;
                    v263 = 0;
                    v68 = 0;
                    v59 = 0;
                    v6 = 0;
                    v4 = 0;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221487 || *((long long *)(v67 * 8 + 4282048)) == 4221545 || *((long long *)(v67 * 8 + 4282048)) == 4219655)
                {
                    v6 = 0;
                }
                if (*((long long *)(v67 * 8 + 4282048)) == 4221487 || *((long long *)(v67 * 8 + 4282048)) == 4221292 || *((long long *)(v67 * 8 + 4282048)) == 4219497 || *((long long *)(v67 * 8 + 4282048)) == 4221545 || *((long long *)(v67 * 8 + 4282048)) == 4219655)
                {
                    v264 = 0;
                    v263 = 0;
                    v68 = 0;
                    v59 = 0;
                    v5 = 0;
                }
            }
        }
        if (v57 <= 87 && *((long long *)(v67 * 8 + 4282048)) == 4220786 && *(&((char *)&g_416540)[v53]) != 0 || v57 <= 87 && *(&((char *)&g_416540)[v53]) != 0 && (*((long long *)(v67 * 8 + 4282048)) == 4221024 || *((long long *)(v67 * 8 + 4282048)) == 4222683 || *((long long *)(v67 * 8 + 4282048)) == 4220957 || *((long long *)(v67 * 8 + 4282048)) == 4222148 || *((long long *)(v67 * 8 + 4282048)) == 4222110 || *((long long *)(v67 * 8 + 4282048)) == 4222721))
        {
            v55 = v10;
            v264 = v11;
            v68 = v12;
            if (*((char *)(v10 + 217)) != 0)
            {
                v16 = -93;
                v15 = v67;
                v14 = v66;
                v13 = v68;
                v12 = v65;
                sub_4055a0();
            }
        }
        if (unknown)
        {
            v265 = 1;
        }
        if (v57 <= 87 && *((char *)(v12 + 217)) != 0 && *(&((char *)&g_416540)[v53]) != 0 && (*((long long *)(v67 * 8 + 4282048)) == 4222653 || *((long long *)(v67 * 8 + 4282048)) == 4222398) || (char)((unsigned int)tmp_249 | rsi | r11) == 0 && v57 <= 87 && rcx == 0 && v111 == 0 && *((char *)(v10 + 217)) != 0 && *(&((char *)&g_416540)[v53]) != 0 && (*((long long *)(v67 * 8 + 4282048)) == 4221767 || *((long long *)(v67 * 8 + 4282048)) == 4222087))
        {
            sub_405280();
        }
        if (v57 <= 87 && *((char *)(v12 + 217)) != 0 && *(&((char *)&g_416540)[v53]) != 0 && (*((long long *)(v67 * 8 + 4282048)) == 4222653 || *((long long *)(v67 * 8 + 4282048)) == 4222398) || (char)((unsigned int)tmp_249 | rsi | r11) == 0 && v57 <= 87 && rcx == 0 && v111 == 0 && *((char *)(v10 + 217)) != 0 && *(&((char *)&g_416540)[v53]) != 0 && (*((long long *)(v67 * 8 + 4282048)) == 4221767 || *((long long *)(v67 * 8 + 4282048)) == 4222087) || *((char *)(v10 + 217)) != 0 && (v57 <= 87 && *((long long *)(v67 * 8 + 4282048)) == 4220786 && *(&((char *)&g_416540)[v53]) != 0 || v57 <= 87 && *(&((char *)&g_416540)[v53]) != 0 && (*((long long *)(v67 * 8 + 4282048)) == 4221024 || *((long long *)(v67 * 8 + 4282048)) == 4222683 || *((long long *)(v67 * 8 + 4282048)) == 4220957 || *((long long *)(v67 * 8 + 4282048)) == 4222148 || *((long long *)(v67 * 8 + 4282048)) == 4222110 || *((long long *)(v67 * 8 + 4282048)) == 4222721)) || v57 <= 87 && *((long long *)(v67 * 8 + 4282048)) == 4222523 && *((char *)(v12 + 217)) != 0 && *(&((char *)&g_416540)[v53]) != 0)
        {
            v55 = v10;
            v264 = v11;
            v65 = v12;
            v68 = v13;
            v66 = v14;
            v67 = v15;
            v53 = v16;
        }
        if (unknown)
        {
            v35 = v59;
            v237 = v67 + 56;
            v36 = v68;
            v39 = v5;
            v37 = v263;
            v38 = v264;
            v40 = v4;
            v41 = v6;
            *((int128_t *)(v67 + 56)) = *((int128_t *)&(&v36)[-1]);
            *((unsigned long long *)(v67 + 104)) = v41;
            *((int128_t *)(v67 + 72)) = *((int128_t *)&v37);
            *((int128_t *)(v67 + 88)) = *((int128_t *)&v39);
            v166 = v53 + (unsigned short)*((short *)v65);
            v167 = (unsigned short)*((short *)v65);
            if ((unsigned int)v166 <= 112 && v167 == (char)*((char *)(v166 + &g_416400)))
            {
                v53 = (char)*((char *)(v166 + &g_416480));
            }
            if ((unsigned int)v166 > 112 || v167 != (char)*((char *)(v166 + &g_416400)))
            {
                v53 = *(&((char *)&g_416500)[v66]);
            }
        }
        if (unknown)
        {
            if ((unsigned int)v53 == 12)
            {
                break;
            }
            v238 = (char)*(&((char *)&g_4165c0)[v53]);
            if ((unsigned int)(char)*(&((char *)&g_4165c0)[v53]) != -93)
            {
                break;
            }
        }
    }
    if (true)
    {
        v265 = 2;
    }
    else if (v65 + 2 < stack_base + -1314)
    {
        v265 = 0;
    }
    else if (unknown)
    {
        return v265;
    }
    if ((unsigned int)-18446744069414584322 == -2)
    {
        v168 = *((long long *)v55);
        v169 = 1;
        v170 = (char)*((char *)*((long long *)v55));
        v171 = (char)*((char *)*((long long *)v55));
        while (true)
        {
            v172 = v171;
            if (v171 <= 32)
            {
                v173 = 1 << (v171 & 63);
                if ((0x100003e00 & v173) != 0)
                {
                    v174 = v168 + 1;
                    do
                    {
                        *((char *[2])v55) = v174;
                        v170 = v174[0];
                        v168 = v174;
                        v172 = v174[0];
                        v174 = &v174[1];
                    }
                    while (v174[0] <= 32 && (0x100003e00 & 1 << (unsigned long long)((char)v172 & 63)) != 0);
                    if (true)
                    {
                        v175 = (unsigned int)v172 - 43 & -3;
                    }
                }
                if ((unsigned int)(v170 - 48) > 9 && ((0x100003e00 & v173) == 0 || (unsigned int)(v170 - 48) > 9))
                {
                    v177 = v170 - 65;
                }
            }
            if (v171 > 32 || (unsigned int)(v170 - 48) > 9 && (0x100003e00 & v173) != 0)
            {
                v175 = (unsigned int)v172 - 43 & -3;
            }
            if ((unsigned int)(v170 - 48) > 9 && (v171 > 32 || (0x100003e00 & v173) != 0))
            {
                if (v175 != 0)
                {
                    v177 = v170 - 65;
                }
                else
                {
                    v176 = v172 == 45;
                }
            }
            if ((unsigned int)(v170 - 48) <= 9 && v171 > 32)
            {
                v176 = v172 == 45;
            }
            if (v171 <= 32 || v175 != 0)
            {
                if ((v171 <= 32 || (unsigned int)(v170 - 48) <= 9) && ((unsigned int)(v170 - 48) <= 9 || v171 > 32) && ((0x100003e00 & v173) == 0 || v171 > 32 || (unsigned int)(v170 - 48) > 9))
                {
                    v168 = *((long long *)v55);
                    v179 = 0;
                }
                if ((288230371923853311 & 1 << (v177 & 63)) != 0 && ((unsigned int)(v170 - 65) <= 57 || v171 <= 32) && ((unsigned int)(v170 - 65) <= 57 || (unsigned int)(v170 - 65) <= 57) && ((unsigned int)(v170 - 65) <= 57 || (unsigned int)(v170 - 48) > 9) && (v171 <= 32 || (unsigned int)(v170 - 48) > 9) && ((unsigned int)(v170 - 65) <= 57 || v175 != 0) && ((0x100003e00 & v173) == 0 || (unsigned int)(v170 - 48) > 9) && ((unsigned int)(v170 - 48) > 9 || v175 != 0) && ((unsigned int)(v170 - 65) <= 57 || v171 > 32 || (0x100003e00 & v173) != 0) && ((unsigned int)(v170 - 48) > 9 || v171 > 32 || (0x100003e00 & v173) != 0))
                {
                    v187 = &v19;
                    v188 = *((long long *)v55) + 1;
                    while (true)
                    {
                        if (v187 < stack_base + -1365)
                        {
                            *((unsigned long long *)&v19) = v172;
                            v187 = &v19;
                        }
                        *((unsigned long long *)v55) = v188;
                        v172 = (char)*((char *)v188);
                        v191 = (unsigned int)(char)*((char *)v188) - 65;
                        if (v172 != 46 && ((288230371923853311 & 1 << (v191 & 63)) == 0 || (unsigned int)(char)*((char *)v188) - 65 > 57))
                        {
                            break;
                        }
                        v188 += 1;
                    }
                    *(v187) = 0;
                    v195 = (char)v19;
                    v196 = &v19;
                    if ((char)v19 != 0)
                    {
                        do
                        {
                            v196 = &v19;
                            v19 = ((unsigned int)(v195 - 97) < 26? (unsigned int)v195 - 32 : (unsigned int)rax);
                            v195 = (char)*(&((char *)&v19)[1]);
                        }
                        while ((char)v195 != 0);
                    }
                    v5 = v237;
                    v203 = "AM";
                    v204 = &g_4162e0;
                    v4 = v53;
                    while (true)
                    {
                        v207 = strcmp(&v19, v203);
                        if (v207 != 0)
                        {
                            v204 = &v204[1];
                            v203 = v204->field_0;
                            v208 = &v19;
                            do
                            {
                                tmp_14 = (unsigned int)v19;
                                v208 = &v19;
                            }
                            while (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) == 0);
                            tmp_62 = v208;
                            v210 = (char *)v208 + 2;
                            v211 = 1;
                            v212 = -3 + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v208 + 2) : v208) + -1 * (((unsigned int)((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)? 1 : 0) & 1) + -0x1 * &v19;
                            if (-3 + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? v210 : tmp_62) + -1 * (((unsigned int)((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)? 1 : 0) & 1) + -0x1 * &v19 != 3)
                            {
                                v211 = 0;
                                if (v10 == 4)
                                {
                                    v211 = 0;
                                    v211 = (char)(*(&((char *)&v19)[3]) == 46);
                                }
                            }
                            v5 = v5;
                            v214 = "JANUARY";
                            v10 = v212;
                            v215 = &g_416140;
                            v216 = v211;
                            v4 = v4;
                            v6 = v55;
                            while (true)
                            {
                                if (v216 != 0)
                                {
                                    v217 = strncmp(&v19, v214, 0x3) == 0;
                                }
                                else
                                {
                                    v217 = strcmp(&v19, v214) == 0;
                                }
                                if (v217 == 0)
                                {
                                    v215 += 16;
                                    v214 = *((long long *)v215);
                                    if (*((long long *)v215) == 0)
                                    {
                                        v237 = v5;
                                        v243 = v10;
                                        v5 = v217;
                                        v11 = v4;
                                        v4 = v6;
                                        v257 = sub_4051c0();
                                        v218 = v4;
                                        v219 = v5;
                                        v220 = (int)v11;
                                        if (v257 == 0)
                                        {
                                            v221 = 4;
                                            v222 = &v19;
                                            v223 = "DST";
                                            while (v221 != 0)
                                            {
                                                v221 -= 1;
                                                v224 = (char)v19;
                                                v225 = *(v223);
                                                v223 = &v223[v226];
                                                v222 = &v222[v226];
                                                break;
                                            }
                                            v227 = "YEAR";
                                            v228 = (v224 > v225) - 0 - (v224 < v225);
                                            if ((char)v228 == 0)
                                            {
                                                v29 = 0;
                                                v240 = 259;
                                            }
                                            else
                                            {
                                                v5 = v237;
                                                v215 = &g_416080;
                                                v4 = v220;
                                                *((unsigned long long *)&v10) = v219;
                                                v6 = v218;
                                                while (true)
                                                {
                                                    v229 = strcmp(&v19, v227);
                                                    if (v229 == 0)
                                                    {
                                                        break;
                                                    }
                                                    v215 += 16;
                                                    v227 = *((long long *)v215);
                                                    v230 = &v51;
                                                    v258 = v4;
                                                    v242 = v5;
                                                    v241 = v10;
                                                    v244 = v6;
                                                    if (v51 == 83)
                                                    {
                                                        *((unsigned int *)&v4) = v238;
                                                        v233 = "YEAR";
                                                        v238 = v5;
                                                        v5 = v243;
                                                        v242 = &g_416080;
                                                        v51 = 0;
                                                        while (true)
                                                        {
                                                            v11 = v244;
                                                            v10 = v230;
                                                            v6 = v241;
                                                            v234 = strcmp(&v19, v233);
                                                            v241 = (char)v6;
                                                            v230 = v10;
                                                            v244 = v11;
                                                            if (v234 != 0)
                                                            {
                                                                v242 += 16;
                                                                v233 = *((long long *)v242);
                                                                v243 = v5;
                                                                v238 = (int)v4;
                                                                *(v10) = 83;
                                                            }
                                                            else
                                                            {
                                                                v235 = v242;
                                                                v236 = v243;
                                                                v237 = v238;
                                                                v238 = (unsigned int)v4;
                                                                v239 = *((int *)(v235 + 12));
                                                                v240 = (unsigned int)*((int *)(v235 + 8));
                                                            }
                                                        }
                                                        if (v234 == 0)
                                                        {
                                                            v29 = v239;
                                                        }
                                                        else if (*((long long *)v242) == 0 && v234 != 0)
                                                        {
                                                            v4 = v238;
                                                            v245 = "TOMORROW";
                                                            v246 = v242;
                                                            v5 = v243;
                                                            v237 = &g_415f20;
                                                            v247 = v258;
                                                        }
                                                    }
                                                    v4 = v238;
                                                    v245 = "TOMORROW";
                                                    v246 = v242;
                                                    v5 = v243;
                                                    v237 = &g_415f20;
                                                    v247 = v258;
                                                    while (true)
                                                    {
                                                        v10 = v244;
                                                        v6 = v241;
                                                        v248 = strcmp(&v19, v245);
                                                        v241 = (char)v6;
                                                        v244 = v10;
                                                        if (v248 != 0)
                                                        {
                                                            v237 = &v237[1];
                                                            v245 = v237->field_0;
                                                            v249 = (char)v19;
                                                            v238 = (unsigned int)v4;
                                                            if (v5 == 1)
                                                            {
                                                                v252 = &g_415a40;
                                                                if (v249 != 65)
                                                                {
                                                                    while (true)
                                                                    {
                                                                        v253 = v252->field_10;
                                                                        v254 = &v252->field_10;
                                                                        if (v252->field_10 == 0)
                                                                        {
                                                                            break;
                                                                        }
                                                                        if (*(v253) != v249)
                                                                        {
                                                                            v252 = v254;
                                                                        }
                                                                        else
                                                                        {
                                                                            v239 = (int)v252->field_1c;
                                                                            v240 = v252->field_18;
                                                                        }
                                                                    }
                                                                    if (*(v253) == v249 && v252->field_10 != 0)
                                                                    {
                                                                        v29 = v239;
                                                                    }
                                                                    else
                                                                    {
                                                                        v255 = &v19;
                                                                        v256 = &v19;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    v29 = -3600;
                                                                    v240 = 273;
                                                                }
                                                            }
                                                            if (v249 != 65 || v5 != 1)
                                                            {
                                                                v255 = &v19;
                                                                v256 = &v19;
                                                                if (v249 != 0)
                                                                {
                                                                    do
                                                                    {
                                                                        if (v249 != 46)
                                                                        {
                                                                            v256 = &v19;
                                                                        }
                                                                        else
                                                                        {
                                                                            v241 = 1;
                                                                        }
                                                                        v255 = &v19;
                                                                        v249 = (char)*(&((char *)&v19)[1]);
                                                                        tmp_11 = *(&((char *)&v19)[1]);
                                                                        *(v256) = *(&((char *)&v19)[1]);
                                                                    }
                                                                    while (tmp_11 != 0);
                                                                    if (v241 != 0)
                                                                    {
                                                                        v5 = v258;
                                                                        v4 = v10;
                                                                        v257 = sub_4051c0();
                                                                        v244 = v4;
                                                                        v258 = (int)v5;
                                                                        if (v257 != 0)
                                                                        {
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                                if (*((char *)(v244 + 217)) == 0)
                                                                {
                                                                    break;
                                                                }
                                                                v5 = v244;
                                                                v4 = v258;
                                                                dcgettext(0x0, 0x4149d9, 0x5);
                                                                sub_404f90();
                                                                v259 = 2;
                                                                v261 = (int)v4;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v250 = v237;
                                                            v251 = v247;
                                                            v237 = v246;
                                                            v238 = (unsigned int)v4;
                                                            v239 = (int)v250->field_c;
                                                            v240 = v250->field_8;
                                                        }
                                                    }
                                                    if (v237->field_0 == 0 && v249 == 65 && v5 == 1 && v248 != 0)
                                                    {
                                                        v259 = (char)*(&((char *)&g_416640)[v240]);
                                                    }
                                                    else if (v237->field_0 == 0 && v248 != 0 && v241 != 0 && v249 != 0 && (v249 != 65 || v5 != 1))
                                                    {
                                                        v239 = (int)v257[1 + 1];
                                                        v240 = v257[1];
                                                    }
                                                    else if (v237->field_0 == 0 && v248 != 0 && *((char *)(v244 + 217)) != 0 && (v257 == 0 || v241 == 0 || v249 == 0) && (v249 != 65 || v5 != 1))
                                                    {
                                                        v238 += v259;
                                                    }
                                                    else if (v248 == 0 || v237->field_0 == 0 && v5 == 1 && v249 != 65)
                                                    {
                                                        v29 = v239;
                                                    }
                                                    else if (v237->field_0 == 0 && v248 != 0 && (v257 == 0 || v241 == 0 || v249 == 0) && (v249 != 65 || v5 != 1))
                                                    {
                                                        v259 = 2;
                                                    }
                                                }
                                                if (*((long long *)v215) == 0 && v229 != 0)
                                                {
                                                    v29 = v239;
                                                }
                                                else if (true)
                                                {
                                                    v231 = v215;
                                                    v232 = (int)v4;
                                                    v237 = v5;
                                                    v239 = *((int *)(v231 + 12));
                                                    v240 = (unsigned int)*((int *)(v231 + 8));
                                                }
                                                else if (*((long long *)v215) == 0 && v229 != 0)
                                                {
                                                    v259 = 2;
                                                }
                                                else if (*((long long *)v215) == 0 && v229 != 0)
                                                {
                                                    v239 = (int)v257[1 + 1];
                                                    v240 = v257[1];
                                                }
                                                else if (*((long long *)v215) == 0 && v229 != 0)
                                                {
                                                    v238 += v259;
                                                }
                                                else if (*((long long *)v215) == 0 && v229 != 0)
                                                {
                                                    v259 = (char)*(&((char *)&g_416640)[v240]);
                                                }
                                            }
                                        }
                                        if (v257 != 0 || (char)v228 != 0)
                                        {
                                            v239 = (int)v257[1 + 1];
                                            v240 = v257[1];
                                        }
                                    }
                                }
                                if (v217 != 0 || *((long long *)v215) == 0 && v257 == 0 && (char)v228 != 0)
                                {
                                    v231 = v215;
                                    v232 = (int)v4;
                                    v237 = v5;
                                    v239 = *((int *)(v231 + 12));
                                    v240 = (unsigned int)*((int *)(v231 + 8));
                                }
                            }
                            if (*((long long *)v215) == 0 && v257 == 0 && v217 == 0)
                            {
                                v259 = (char)*(&((char *)&g_416640)[v240]);
                            }
                            else if (*((long long *)v215) == 0 && v257 == 0 && v217 == 0 && (char)v228 != 0)
                            {
                                v238 += v259;
                            }
                            else if (v217 != 0 || *((long long *)v215) == 0 && v257 != 0 || *((long long *)v215) == 0 && (char)v228 != 0)
                            {
                                v29 = v239;
                            }
                            else if (*((long long *)v215) == 0 && v257 == 0 && v217 == 0 && (char)v228 != 0)
                            {
                                v259 = 2;
                            }
                        }
                        else
                        {
                            tmp_5 = v204;
                            v209 = (int)v4;
                            v237 = v5;
                            v239 = *((int *)(tmp_5 + 12));
                            v240 = (unsigned int)*((int *)(tmp_5 + 8));
                        }
                        v29 = v239;
                    }
                    if (v204->field_0 == 0 && v207 != 0)
                    {
                        v259 = 2;
                    }
                    else if (v204->field_0 == 0 && v207 != 0)
                    {
                        v238 += v259;
                    }
                    else if (v204->field_0 == 0 && v207 != 0)
                    {
                        v259 = (char)*(&((char *)&g_416640)[v240]);
                    }
                }
                if (((288230371923853311 & 1 << (v177 & 63)) == 0 || (unsigned int)(v170 - 65) > 57) && ((288230371923853311 & 1 << (v177 & 63)) == 0 || v175 != 0) && (v171 <= 32 || (unsigned int)(v170 - 48) > 9) && ((unsigned int)(v170 - 65) <= 57 || v175 != 0) && ((0x100003e00 & v173) == 0 || (unsigned int)(v170 - 48) > 9) && ((unsigned int)(v170 - 48) > 9 || v175 != 0) && ((288230371923853311 & 1 << (v177 & 63)) == 0 || v171 > 32 || (0x100003e00 & v173) != 0) && ((unsigned int)(v170 - 65) <= 57 || v171 > 32 || (0x100003e00 & v173) != 0) && ((unsigned int)(v170 - 48) > 9 || v171 > 32 || (0x100003e00 & v173) != 0) && v172 == 40)
                {
                    v182 = *((long long *)v55);
                    v183 = 0;
                    while (true)
                    {
                        v168 = &v182[1];
                        *((char *[2])v55) = &v182[1];
                        v184 = v182[0];
                        if (v182[0] == 0)
                        {
                            break;
                        }
                        if (v184 != 40)
                        {
                            v183 -= (char)(v184 == 41);
                        }
                        else
                        {
                            v183 += 1;
                        }
                        if (v183 != 0)
                        {
                            v182 = v168;
                        }
                        else
                        {
                            v186 = v182[1];
                            v171 = v182[1];
                        }
                    }
                    if (v183 == 0 && v182[0] != 0)
                    {
                        v172 = v171;
                    }
                    else
                    {
                        v259 = 0;
                    }
                }
            }
            if (v175 == 0 && (v171 > 32 || (unsigned int)(v170 - 48) > 9) && (v171 > 32 || (0x100003e00 & v173) != 0))
            {
                v178 = *((long long *)v55) + 1;
                v179 = (0 - (unsigned int)(char)(v176 < 1) & 2) - 1;
                while (true)
                {
                    *((unsigned long long *)v55) = v178;
                    v171 = (char)*((char *)v178);
                    v168 = v178;
                    v172 = (char)*((char *)v178);
                    if (*((char *)v178) <= 32)
                    {
                        v178 = v168 + 1;
                        v180 = v171;
                    }
                    else
                    {
                        v181 = v171;
                        break;
                    }
                }
                if ((0x100003e00 & 1 << (v171 & 63)) == 0 || *((char *)v178) > 32)
                {
                    v172 = v171;
                }
                else if (*((char *)v178) > 32)
                {
                    v189 = v168;
                    v190 = 0;
                    v169 = v172;
                }
            }
            if ((unsigned int)(v170 - 48) <= 9 && v171 > 32 || v175 == 0 && v171 > 32 || (unsigned int)(v170 - 48) <= 9 && (unsigned int)(v170 - 48) <= 9 && (0x100003e00 & v173) == 0 || (unsigned int)(v170 - 48) <= 9 && v171 <= 32 && (unsigned int)(v170 - 48) > 9 || v175 == 0 && (unsigned int)(v170 - 48) > 9 && (0x100003e00 & v173) != 0)
            {
                v189 = v168;
                v190 = 0;
                v169 = v172;
                while (true)
                {
                    v192 = v190 + ((unsigned int)v179 == -1? 48 - v169 : (unsigned int)(rdi - 48));
                    if (INVALID_IR)
                    {
                        break;
                    }
                    v169 = (char)*((char *)(v189 + 1));
                    v193 = v189 + 1;
                    v194 = (char)*((char *)(v189 + 1));
                    if ((unsigned int)((unsigned long long)(char)*((char *)(v189 + 1)) - 48) > 9)
                    {
                        v197 = v194 & -3;
                        if (v197 == 44)
                        {
                            v198 = (unsigned int)(char)*((char *)(v189 + 1)) - 48;
                            if ((unsigned int)(char)*((char *)(v189 + 1)) - 48 <= 9)
                            {
                                v199 = v189 + 3;
                                v200 = (char)*((char *)(v189 + 3));
                                v201 = 8;
                                v202 = v200;
                                do
                                {
                                    v205 = v200 - 48;
                                    v198 = (unsigned int)v198 * 10;
                                    if ((unsigned int)(v200 - 48) <= 9)
                                    {
                                        v200 = v199[1];
                                        v198 += v205;
                                        v199 = &v199[1];
                                        v202 = v200;
                                        v205 = (unsigned int)v200 - 48;
                                    }
                                    v206 = v201;
                                    v201 -= 1;
                                }
                                while (v206 != 1);
                                if ((unsigned int)v179 == -1)
                                {
                                    if (v205 <= 9)
                                    {
                                        if (v202 == 48)
                                        {
                                            do
                                            {
                                                v199 = &v199[1];
                                                v213 = v199[0];
                                            }
                                            while (v213 == 48 && (unsigned int)v199[0] - 48 <= 9);
                                            if ((unsigned int)v199[0] - 48 <= 9)
                                            {
                                                v198 = (unsigned int)v198 + 1;
                                            }
                                        }
                                        if ((unsigned int)v198 != 0 || v202 != 48)
                                        {
                                            v198 = (unsigned int)v198 + 1;
                                        }
                                    }
                                    if ((unsigned int)v198 == 0 && v205 > 9)
                                    {
                                        *((char *[2])v55) = v199;
                                        v259 = 21;
                                        v29 = v8;
                                        v8 = 0;
                                    }
                                }
                                if (v205 <= 9 && ((unsigned int)v199[0] - 48 <= 9 || (unsigned int)v179 != -1) && ((unsigned int)v198 != 0 || (unsigned int)v179 != -1 || v202 != 48))
                                {
                                    do
                                    {
                                        v199 = &v199[1];
                                    }
                                    while ((unsigned int)v199[0] - 48 <= 9);
                                }
                                if ((unsigned int)v198 == 0 && (unsigned int)v179 != -1 || (unsigned int)v179 >= 0 && (unsigned int)v179 != -1 || v205 > 9 && (unsigned int)v179 != -1 || (unsigned int)v198 == 0 && (unsigned int)v199[0] - 48 <= 9 && v205 <= 9 && (unsigned int)v198 != 0 || (unsigned int)v198 == 0 && (unsigned int)v199[0] - 48 <= 9 && v205 <= 9 && v202 != 48 || (unsigned int)v199[0] - 48 <= 9 && v205 <= 9 && (unsigned int)v179 >= 0 && (unsigned int)v198 != 0 || (unsigned int)v199[0] - 48 <= 9 && v205 <= 9 && (unsigned int)v179 >= 0 && v202 != 48)
                                {
                                    *((char *[2])v55) = v199;
                                    v8 = v198;
                                    v29 = v8;
                                    v259 = !(0 - (unsigned int)(char)((unsigned int)rsi < 1)) + 22;
                                }
                                if (((unsigned int)v179 < 0 || (unsigned int)v179 == -1) && (v205 <= 9 || (unsigned int)v179 == -1) && (v205 <= 9 || (unsigned int)v198 != 0) && ((unsigned int)v179 == -1 || (unsigned int)v198 != 0) && ((unsigned int)v198 != 0 || (unsigned int)v179 != -1 || v202 != 48) && ((unsigned int)v179 < 0 || v202 == 48 || (unsigned int)v199[0] - 48 > 9 || v205 > 9) && (v202 == 48 || (unsigned int)v198 != 0 || (unsigned int)v199[0] - 48 > 9 || v205 > 9))
                                {
                                    if (v8 == 0x8000000000000000)
                                    {
                                        break;
                                    }
                                    *((char *[2])v55) = v199;
                                    v29 = v8 - 1;
                                    v8 = (int)(0x3b9aca00 - (unsigned int)v198);
                                    v259 = 21;
                                }
                            }
                        }
                        if ((unsigned int)(char)*((char *)(v189 + 1)) - 48 > 9 || v197 != 44)
                        {
                            *((unsigned long long *)v55) = v189;
                            v8 = v192;
                            v29 = (char)v179 % 0x80000000;
                            v9 = v189 - v168;
                            v259 = !(0 - (unsigned int)(char)((unsigned int)v179 < 1)) + 20;
                        }
                    }
                    else
                    {
                        v190 = v8 * 10;
                        if (INVALID_IR)
                        {
                            break;
                        }
                        v189 = v193;
                    }
                }
                if (true)
                {
                    v259 = 2;
                }
                else if (unknown)
                {
                    v238 += v259;
                }
            }
            if (unknown)
            {
                *((char **)v55) = &v168[1];
                v240 = *(v168);
                if (*(v168) != 0)
                {
                    break;
                }
            }
            if ((unsigned int)(v170 - 65) <= 57 || (unsigned int)(v170 - 65) <= 57 || (288230371923853311 & 1 << (v177 & 63)) != 0)
            {
                v259 = 2;
            }
        }
        if (!(unknown))
        {
            if (unknown)
            {
                v238 += v259;
            }
            else if (unknown)
            {
                v259 = 0;
            }
            else if (unknown)
            {
                v259 = (char)*(&((char *)&g_416640)[v240]);
            }
        }
    }
    v259 = 0;
    if ((unsigned int)-18446744069414584322 == -2 || (unsigned int)v240 <= 277)
    {
        v259 = (char)*(&((char *)&g_416640)[v240]);
        v238 += v259;
    }
    if ((unsigned int)v240 > 277)
    {
        v238 = (unsigned long long)((unsigned int)v238 + 2);
        v259 = 2;
    }
    if ((unsigned int)v238 <= 112)
    {
        v262 = v238;
        if ((char)*((char *)(v238 + &g_416400)) == v259)
        {
            v53 = (char)*((char *)(v262 + &g_416480));
            if (*((char *)(v262 + &g_416480)) != 0)
            {
                v65 = v101;
                v237 = &v237->field_38;
                v7 = v7 - 1 + (char)(v7 < 1);
                v30 = v8;
                v31 = v9;
                v237->field_0 = (int128_t)v29;
                v237->field_30 = v34;
                v237->field_10 = *((int128_t *)&v31);
                v237->field_20 = *((int128_t *)&v33);
            }
            else
            {
                v65 = v101;
                v67 = v237;
                v59 = *((long long *)&v237->field_38);
                *((int128_t *)&v35) = *((int128_t *)&v237->field_38);
                v68 = v237->field_40;
                v263 = *((long long *)&v237->field_48);
                v41 = *((long long *)&v237->field_68);
                v264 = v237->field_50;
                *((int128_t *)&v37) = *((int128_t *)&v237->field_48);
                *((int128_t *)&v39) = *((int128_t *)&v237->field_58);
                v5 = *((long long *)&v237->field_58);
                v4 = v237->field_60;
                v6 = *((int *)&v237->field_68);
            }
        }
    }
    v265 = 0;
    v265 = 2;
    return v265;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[204];
    char field_e0;
} struct_0;

int sub_4054b0()
{
    struct v1;  // rdi
    char *v3;  // rsi
    char *v4;  // rsi
    unsigned long long v5;  // rax

    if (!(v1->field_e0 != 0))
    {
        *(v3) = 0;
    }
    else if (v1->field_8 + 1 <= 13)
    {
        v5 = snprintf(v4, 0x64, "%s", (unsigned int)(char *)(4282795 + 11 * v1->field_8));
    }
    else
    {
        __snprintf_chk();
    }
    if (v1->field_e0 == 0 && v1->field_10 > 6 || v1->field_8 + 1 <= 13 && v1->field_e0 != 0 && v1->field_10 > 6 || v1->field_8 + 1 <= 13 && v1->field_e0 != 0 && (unsigned int)v5 > 99 || v1->field_e0 != 0 && v1->field_10 > 6 && v1->field_8 + 1 > 13)
    {
        return stack_base + 0;
    }
    __snprintf_chk();
    return stack_base + 0;
}

int sub_40c1f0()
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
            sub_40c3e0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_40e010()
{
    unsigned long long v0;  // [bp-0x800]
    void *v2;  // rax
    unsigned long long v3;  // rbx
    void *v4;  // rbp
    void *v5;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    v0 = 2000;
    v2 = sub_40ffa0();
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
        sub_40ff90();
    }
    v9 = v3;
    return v9;
}

extern unsigned long long stderr;

int sub_404f90()
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
    fwrite("date: ", 0x1, 0x6, stderr);
    v2 = stack_base + 8;
    v0 = 8;
    v1 = 48;
    v3 = stack_base + -184;
    return sub_40e010();
}

// int sub_40bb10()

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_61b2d8;
extern uint128_t g_61b2e0;
extern unsigned int g_61b2f0;
extern int512_t g_61b360;

int sub_40b310()
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
    v17 = g_61b2d8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_61b2f0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_61b2d8 != 6402784)
            {
                v16 = sub_40c1f0();
                g_61b2d8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_40c1f0();
                v17 = v15;
                g_61b2d8 = v15;
                *(v15) = g_61b2e0;
            }
            memset(&v17[(long long)(int)g_61b2f0], 0x0, (int)((unsigned int)v13 + 1 - g_61b2f0) * 16);
            g_61b2f0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_40c3e0(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_61b2f0 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_40a0e0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6402912)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_40c190();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_40a0e0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_61b350;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_409f40()
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
        g_61b350 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_403040()
{
    unsigned long long v1;  // rax

    v1 = sub_402d80();
    if (INVALID_IR)
    {
        sub_402ea0();
        sub_402f20();
        r9();
        v1 = -1;
    }
    return v1;
}

extern unsigned int g_4174eb;
extern unsigned int g_4174ef;
extern unsigned int g_4174ff;
extern unsigned int g_417516;
extern unsigned int g_417578;
extern unsigned int g_417648;
extern unsigned int g_417668;
extern unsigned int g_417690;
extern unsigned int g_4176b8;
extern unsigned int g_4176e8;

int sub_40bbf0()
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
    dcgettext(0x0, 0x4174eb, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417578, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4174ef, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4174ff, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x417516, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x417648, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x417668, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x417690, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x4176b8, 0x5);
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
        dcgettext(0x0, 0x4176e8, 0x5);
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

int sub_40d2d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40d210();
}

int sub_40b4b0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_40c390();
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
} struct_0;

int sub_40dff0()
{
    struct v1;  // rdi

    v1->field_20 = 0;
}

int sub_40ff90()
{
    unsigned int *v1;  // rdi
    unsigned long v2;  // rax

    *(v1) = *(v1) | 32;
    return v2;
}

int sub_40b9e0()
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
    return sub_40b310();
}

int sub_409b90()
{
    unsigned long long v1;  // r12
    unsigned long v3;  // rbx
    unsigned long long v4;  // rbp

    v1 = getenv("TZ");
    sub_40db40();
    if (v3 != 0)
    {
        v4 = (unsigned int)sub_407bc0();
        sub_40de00();
    }
    return stack_base + 0;
}

typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    uint128_t field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[57];
    char field_a1;
    char padding_a2[6];
    unsigned long long field_a8;
    char padding_b0[24];
    unsigned long long field_c8;
    char padding_d0[8];
    char field_d8;
} struct_0;

double sub_404ca0()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18]
    unsigned long long v3;  // r8
    struct v4;  // rdi
    void v5;  // xmm0
    void v6;  // xmm0

    v3 = v1;
    if (*((long long *)&v4->padding_68[56]) != 0 && v4->field_28 == 0 && v4->padding_68[49] == 0)
    {
        if (*((long long *)&v4->padding_b0[16]) == 0 && v2 <= 2)
        {
            *((long long *)&v4->padding_b0[16]) = 1;
        }
        if (v2 > 2 || *((long long *)&v4->padding_b0[16]) != 0)
        {
            v4->padding_d0[0] = 1;
            v4->field_20 = *((int128_t *)&v0);
            v4->field_28 = v2;
            return *((int128_t *)&v0);
        }
    }
    if (*((long long *)&v4->padding_68[56]) == 0 || v4->field_28 != 0 || v4->padding_68[49] != 0)
    {
        if (v2 > 4)
        {
            *((long long *)&v4->padding_68[56]) = *((long long *)&v4->padding_68[56]) + 1;
            v4->field_28 = v2 - 4;
            v4->field_38 = v3 - (((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63)) * 100;
            v4->field_30 = ((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63) - ((((((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63)) * 11805916207174113035 >> 64) + ((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63) >> 6) - (((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63) >> 63)) * 100;
            *((unsigned long long *)&((char *)&v4->field_20)[8]) = (v3 * 3777893186295716171 >> 64 >> 11) - (v3 >> 63);
            return v5;
        }
        *((long long *)&v4->padding_b0[16]) = *((long long *)&v4->padding_b0[16]) + 1;
        if (v2 > 2)
        {
            v4->field_40 = ((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63);
            v4->field_48 = v1 - (((v1 * 11805916207174113035 >> 64) + v1 >> 6) - (v1 >> 63)) * 100;
        }
    }
    if ((v2 <= 4 || v4->field_28 == 0) && (v2 <= 4 || v4->padding_68[49] == 0) && (v2 <= 4 || *((long long *)&v4->padding_68[56]) != 0) && (*((long long *)&v4->padding_68[56]) == 0 || *((long long *)&v4->padding_b0[16]) == 0 || v4->field_28 != 0 || v4->padding_68[49] != 0))
    {
        if (v2 <= 2)
        {
            v4->field_40 = v1;
            v4->field_48 = 0;
        }
        if (v2 <= 2 || *((long long *)&v4->padding_68[56]) == 0 || v4->field_28 != 0 || v4->padding_68[49] != 0)
        {
            v4->field_50 = 0;
            v4->field_58 = 0;
            v4->field_1c = 2;
            return v6;
        }
    }
}

int sub_40b830()
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
    return sub_40b310();
}

int sub_40ff70()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    char v2;  // [bp-0x9]
    unsigned long v4;  // r9
    unsigned long v5;  // r8

    v2 = 0;
    v1 = v4;
    v0 = v5;
    return sub_40e7a0();
}

extern struct g_61b2d8;
extern unsigned long long g_61b2e0;
extern unsigned long long g_61b2e8;
extern unsigned int g_61b2f0;
extern unsigned long long g_61b360;

int sub_40b720()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_61b2f0;
    if (g_61b2f0 > 1)
    {
        v2 = &g_61b2d8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_61b2d8[(unsigned long long)(g_61b2f0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_61b2d8->field_8 != 6402912)
    {
        v1 = free(g_61b2d8->field_8);
        g_61b2e0 = 0x100;
        g_61b2e8 = &g_61b360;
    }
    if (g_61b2d8 != 6402784)
    {
        v1 = free(g_61b2d8);
        g_61b2d8 = &g_61b2e0;
    }
    g_61b2f0 = 1;
    return v1;
}

extern unsigned int g_4144af;
extern unsigned int g_61b280;
extern char g_61b340;
extern unsigned long long g_61b348;

int sub_403120()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40e0d0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_61b340 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x4144af, 0x5);
            if (g_61b348 != 0)
            {
                sub_40b9b0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_61b340 != 0)
    {
        v3 = sub_40e0d0();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_61b340 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_61b280);
        error(0x0, *(v2), "%s");
    }
}

// int sub_40bb40()

typedef struct struct_0 {
    char padding_0[208];
    unsigned long long field_d0;
} struct_0;

int sub_405410()
{
    unsigned long long v1;  // rax
    struct v2;  // rsi
    unsigned long long v3;  // rbp
    unsigned long v7;  // rdx

    v1 = sub_40ff70();
    if (v2 != 0)
    {
        v3 = v1;
        if ((unsigned int)v1 <= 99 && v2->field_d0 != 0)
        {
            sub_404e20();
            __snprintf_chk();
            return v7;
        }
    }
    if (v2->field_d0 == 0 || v2 == 0 || (unsigned int)v1 > 99)
    {
        return v7;
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

    v10 = sub_4018d0();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6401584 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_40e750()
{
    unsigned long v1;  // rdx
    char *v2;  // rbx
    char *v4;  // rdi
    char *v5;  // rsi

    if (v1 != 0)
    {
        v2 = v1 - 1;
        do
        {
            *((char *)(v4 + v2)) = *((int *)(*((long long *)(unsigned long long)__ctype_toupper_loc()) + (unsigned long long)(char)*((char *)(v5 + v2)) * 4));
            v2 = &v2[-1];
        }
        while (v2 != -1);
    }
    return v4;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_1;

int sub_40db40()
{
    void *v1;  // rdi
    unsigned long long v2;  // rax
    struct v3;  // rbx
    unsigned long v4;  // rbp
    struct v5;  // rax
    struct v7;  // rax

    if (v1 != 0)
    {
        v2 = strlen(v1);
        v4 = v2 + 1;
        v3 = malloc((118 <= v2 + 1? v2 + 1 : 118) + 17 & -8);
        if (v3 != 0)
        {
            v3->field_0 = 0;
            v3->field_8 = 1;
            memcpy((char *)&v3->field_8 + 1, v1, v4);
            *(&((char *)&v3->field_0)[9 + v4]) = 0;
        }
    }
    else
    {
        v3 = malloc(0x80);
        if (v3 != 0)
        {
            v3->field_0 = 0;
            v5 = v3;
            v3->field_8 = 0;
            return v5;
        }
    }
    if (v3 == 0 || v1 != 0)
    {
        v7 = v3;
        return v7;
    }
}

int sub_40daf0()
{
    unsigned int *v1;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // r13d

    v1 = __errno_location();
    v2 = *(v1);
    if ((char)sub_40da70() == 0)
    {
        v2 = *(v1);
    }
    sub_40dac0();
    *((unsigned long *)&v1) = v2;
    return stack_base + 0;
}

int sub_405100()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r9
    unsigned long v3;  // rcx
    unsigned int v4;  // ecx
    char v6;  // cl
    char v7;  // sil
    unsigned long long v8;  // rcx
    unsigned long long v9;  // r9
    unsigned long v10;  // r8
    char v11;  // dl
    unsigned long v12;  // r8
    unsigned long long v13;  // rax
    unsigned int v14;  // r9d
    unsigned int *v15;  // rdi

    v2 = v1;
    if (v3 <= 2)
    {
        if (INVALID_IR)
        {
            v8 = 0;
        }
    }
    else
    {
        if (INVALID_IR)
        {
            v2 = ((v2 * 11805916207174113035 >> 64) + v2 >> 6) - (v2 >> 63);
            v8 = v1 - (((v1 * 11805916207174113035 >> 64) + v1 >> 6) - (v1 >> 63)) * 100;
        }
    }
    if (!(INVALID_IR))
    {
        v4 = 0;
        v6 =  amd64g_calculate_condition(0x0, 0x34, rdx, 0x3c, cc_ndep);
        if (v7 == 0)
        {
            v9 = v1 * 60 + v10;
            v11 =  amd64g_calculate_condition(0x0, 0x4, Mul(rdx, 0x3c), r8, cc_ndep);
        }
        else
        {
            v1 = 0;
            v9 = v1 * 60 - v12;
            v11 = ((v9 ^ v12) & (v9 ^ v9 - v12)) >> 63;
        }
        v13 = 0;
    }
    else
    {
        v9 = v8 + v2 * 60;
    }
    if (INVALID_IR || rcx == 0 && v11 == 0)
    {
        v13 = 0;
        if (v9 + 1440 <= 2880)
        {
            v14 = (unsigned int)v9 * 60;
            v13 = 1;
            *(v15) = v14;
        }
    }
    return v13;
}

int sub_4050c0()
{
    __fprintf_chk();
    return 1;
}

int sub_40a0e0()
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
            v26 = (unsigned int)sub_409fe0();
            v27 = (unsigned long long)(unsigned int)sub_409fe0();
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
                                    }
                                    if ((v77 > v76 || ((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3))
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
                                        v33 = rax;
                                    }
                                    if (v79 > v76)
                                    {
                                        *((char *)(v29 + v76)) = 92;
                                    }
                                    v76 += 1;
                                    v80 += 1;
                                case 13:
                                    v40 = 13;
                                    v45 = 114;
                                    v77 = (unsigned int)v39 == 2;
                                    if (v4 != 0)
                                    {
                                        v40 = v45;
                                        v78 = 0;
                                    }
                                case 32:
                                    v41 = v5;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                    v48 = v5;
                                    v77 = 0;
                                    v5 = v42;
                                    v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                                    v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
                                    if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) != 0)
                                    {
                                        v78 = 0;
                                        v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                        v77 = (unsigned int)v39 == 2;
                                    }
                                    if (v17 == 0)
                                    {
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
                        case 8:
                            v40 = 98;
                            v77 = 0;
                            v78 = 0;
                            if (v17 != 0)
                            {
                                v87 = v77;
                            }
                        case 9:
                            v40 = 116;
                        case 10:
                            v40 = 110;
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
                                *((unsigned long long *)&v4) = v4 & v87;
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
                    case 9:
                        v40 = 9;
                        v45 = 116;
                    case 10:
                        v40 = 10;
                        v45 = 110;
                        v77 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
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
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v77 = (unsigned int)v39 == 2;
                        v35 = 0;
                    case 35: case 126:
                        v77 = (unsigned int)v39 == 2;
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
                            v78 = v78;
                            v78 = 0;
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
                        if (v43 != 0)
                        {
                            v55 = 0;
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
                            v76 = (unsigned int)sub_40a0e0();
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
                    v46 = sub_40d310();
                    v58 = v46;
                    if (v46 != -1 && v46 != -2 && v46 != 0)
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
                    if (v46 == 0 || (unsigned int)v46 != 0 && v46 != -1 && v46 != -2)
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
                if (v46 == -1 || v46 == -2 || v46 == 0 || (unsigned int)v46 != 0)
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
                    if ((v77 == 0 || v80 < v64) && (v77 == 0 || v63 == 0) && (v80 < v64 || v77 != 0))
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
            if ((v76 == 0 || v17 != 0) && (v78 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_40a0e0();
            }
            if (v76 < v79)
            {
                *((unsigned long long *)(v29 + v76)) = v40;
            }
            v76 += 1;
            v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v76 == 0 || v17 != 0) && (v78 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
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

// int sub_40bb20()

typedef struct struct_0 {
    char padding_0[232];
    unsigned long long field_e8;
} struct_0;

extern unsigned long long g_415be0;
extern unsigned long long g_415ee0;

int sub_4051c0()
{
    unsigned long long v1;  // rdi
    struct v2;  // r12
    char *v3;  // rsi
    char *v4;  // rbp
    unsigned long long v5;  // rax
    char *v6;  // rsi
    char *v7;  // rsi
    unsigned long long *v8;  // rbx
    unsigned long long v9;  // rax
    unsigned long long *v10;  // rbx
    char *v11;  // rsi
    unsigned long long *v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long *v14;  // rax

    v2 = v1;
    v4 = v3;
    v6 = "GMT";
    v10 = &g_415ee0;
    while (true)
    {
        v5 = strcmp(v4, v6);
        if (v5 == 0)
        {
            break;
        }
        v10 = &v10[2];
        v6 = *(v10);
        v7 = v2->field_e8;
        v8 = &v2->field_e8;
        if (v2->field_e8 != 0)
        {
            while (true)
            {
                v9 = strcmp(v4, v7);
                if (v9 != 0)
                {
                    v8 = &v8[2];
                    v7 = *(v8);
                    if (*(v8) == 0)
                    {
                        break;
                    }
                }
                else
                {
                    v12 = v8;
                    return v12;
                }
            }
        }
        v10 = &g_415be0;
        v11 = "WET";
        while (true)
        {
            v13 = strcmp(v4, v11);
            if (v13 != 0)
            {
                v10 = &v10[2];
                v11 = *(v10);
                return 0;
            }
        }
    }
    v14 = v10;
    return v14;
}

int sub_40e0d0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40c420();
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

extern int512_t g_61b460;

int sub_40b550()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_61b460 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_61b460 : v1) + 4)) = v3;
    return v2;
}

// int sub_40b9d0()

extern uint128_t g_61b460;
extern uint128_t g_61b470;
extern uint128_t g_61b480;
extern unsigned long long g_61b490;

int sub_40ba50()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_61b460;
    *((uint128_t *)&v1) = g_61b470;
    *((uint128_t *)&v2) = g_61b480;
    v4 = g_61b490;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_40b310();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

// int sub_40b9b0()

int sub_40d2f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40cc40();
}

// int sub_402d70()

extern unsigned int g_412ac4;
extern int512_t g_4143d0;
extern unsigned int g_414e36;
extern unsigned int g_4179a4;
extern unsigned long long stdout[7];

int sub_402620()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v3;  // rsi
    unsigned long v4;  // rdx
    unsigned long v6;  // rdi
    unsigned long long v10;  // rbx
    char *v11;  // rax

    v0 = v3;
    v1 = v4;
    if (sub_40de20() != 0)
    {
        if (v6 != "%a, %d %b %Y %H:%M:%S %z")
        {
            sub_404ba0();
        }
        else
        {
            setlocale(0x2, 0x414e36);
            sub_404ba0();
            setlocale(0x2, 0x4179a4);
        }
        v11 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v11) = 10;
        }
        else
        {
            __overflow();
        }
        return 1;
    }
    sub_404c00();
    v10 = (unsigned int)sub_40bb60();
    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x412ac4, 0x5));
    return 0;
}

extern int512_t g_61b460;

int sub_40b500()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_61b460 : v1)) = v2;
    return &g_61b460;
}

extern unsigned long long g_61b348;

int sub_403100()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61b348 = v1;
    return v2;
}

int sub_40b612()
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

int sub_40c340()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_40c190();
}

// int sub_40bac0()

int sub_40dac0()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long *v2;  // rdi
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    void *v5;  // rbx
    unsigned long long v7;  // rbx

    if (v2 != 0)
    {
        v0 = v4;
        while (true)
        {
            v5 = *(v2);
            v2 = v5;
            if (v5 == 0)
            {
                break;
            }
        }
        v7 = v0;
        return (unsigned long long)free(v2);
    }
    return v3;
}

int sub_40d2b0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40cc40();
}

extern unsigned long long program_invocation_short_name;

int sub_40256b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_40b710()

int sub_40c360()
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
        sub_40c3e0(); /* do not return */
    }
}

int sub_40d550()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x30]
    unsigned long long *v2;  // rdx
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rsi
    unsigned long long *v7;  // rbx
    unsigned long long *v8;  // rsi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long *v13;  // rsi
    unsigned long long v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    unsigned long long v17;  // rdi

    v5 = v4;
    v7 = v6;
    v8 = v2;
    v9 = &v0;
    v0 = *(v2);
    v15 = v5();
    if (v15 == 0)
    {
        v16 = *(v7);
        v10 = 0;
        if (*(v7) != 0)
        {
            while (true)
            {
                v11 = (v16 >> 1) + (v10 >> 1);
                v12 = ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1);
                if (v16 != v12 && v10 != ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1))
                {
                    break;
                }
                v0 = v12;
                v13 = v2;
                v14 = &v0;
                v15 = r12();
                if (v15 == 0)
                {
                    v16 = v12;
                    v12 = v10;
                }
                v10 = v12;
            }
            if (v15 == 0 && v10 != 0)
            {
                v0 = v10;
                v17 = &v0;
                return (long long)(stack_base)[-24]();
            }
        }
    }
    if (v10 == 0 || *(v7) == 0 || v15 != 0 || v15 != 0)
    {
        return v15;
    }
}

// int sub_40bad0()

int sub_40c050()
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
        return sub_40bbf0();
    }
}

int sub_40b8a0()
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
    return sub_40b310();
}

int sub_404bc0()
{
    char v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rdi
    unsigned long long v4[2];  // rbx
    unsigned long long v5;  // rax

    v4 = v3;
    v5 = clock_gettime();
    if ((unsigned int)v5 != 0)
    {
        gettimeofday(&v0, NULL);
        v4[0] = *((long long *)&v0);
        v5 = v1 * 1000;
        v4[1] = v1 * 1000;
    }
    return v5;
}

int sub_40c540()
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

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_40dd50()
{
    char *v1;  // rbp
    struct v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int *v8;  // rbp

    v1 = getenv("TZ");
    if (v1 != 0)
    {
        if (v3->field_8 != 0)
        {
            v4 = strcmp(&v3[1], v1);
            if (v4 == 0)
            {
                return 1;
            }
        }
    }
    else
    {
        if (v3->field_8 == 0)
        {
            return 1;
        }
    }
    if (v1 == 0 && v3->field_8 != 0 || v3->field_8 == 0 && v1 != 0 || v4 != 0 && v1 != 0)
    {
        if (v4 != 0)
        {
            v6 = sub_40da70();
            if (v6 == 0)
            {
                v8 = __errno_location();
                if (v8 != 1)
                {
                    sub_40dac0();
                }
                *(v8) = *(v8);
                return 0;
            }
        }
        if (v4 == 0 || v6 != 0)
        {
            v4 = (unsigned int)sub_40db40();
            return v7;
        }
    }
}

int sub_40de00()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax

    if (v1 == 1)
    {
        return v2;
    }
}

extern unsigned int g_412b3b;
extern unsigned int g_412c58;
extern unsigned int g_412c80;
extern unsigned int g_412ce0;
extern unsigned int g_412d28;
extern unsigned int g_412d78;
extern unsigned int g_412dc8;
extern unsigned int g_412e50;
extern unsigned int g_412ea0;
extern unsigned int g_413000;
extern unsigned int g_413090;
extern unsigned int g_4131a0;
extern unsigned int g_4131f0;
extern unsigned int g_413278;
extern unsigned int g_4132a8;
extern unsigned int g_4132e0;
extern unsigned int g_413368;
extern unsigned int g_413440;
extern unsigned int g_4134f0;
extern unsigned int g_413598;
extern unsigned int g_4135f8;
extern unsigned int g_413688;
extern unsigned int g_4137d8;
extern unsigned int g_413848;
extern unsigned int g_413940;
extern unsigned int g_4139e0;
extern unsigned int g_413b28;
extern unsigned int g_413c00;
extern unsigned int g_413cf0;
extern unsigned int g_413e68;
extern unsigned int g_413eb0;
extern unsigned int g_413ed0;
extern unsigned long long stdout;

int sub_402750()
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
    unsigned long long v48[2];  // rax
    char *v49;  // rdi
    char *v50;  // rsi
    unsigned long long v51;  // rcx
    unsigned long long v52;  // cc_dep1
    unsigned long long v53;  // cc_dep2
    unsigned long v54;  // d
    char *v58;  // rax
    char *v59;  // rax
    unsigned long long v60;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x412c58, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x412c80, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x412ce0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x412d28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x412d78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x412dc8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x412e50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x412ea0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413000, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413090, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4131a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4131f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413278, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4132a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4132e0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413368, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413440, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4134f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413598, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4135f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413688, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4137d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413848, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413940, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4139e0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413b28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413c00, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413cf0, 0x5), stdout);
        v0 = "[";
        v48 = &v0;
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
            v48 = &v2;
            v49 = v2;
            if (v2 == 0)
            {
                break;
            }
            v50 = "date";
            v51 = 5;
            if ((v52 > v53) - 0 - (v52 < v53) == 0)
            {
                break;
            }
            while (v51 != 0)
            {
                v51 -= 1;
                v52 = *(v50);
                v53 = *(v49);
                v49 = &v49[v54];
                v50 = &v50[v54];
                break;
            }
        }
        if (v48[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x412b3b, 0x5));
            v59 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x412b3b, 0x5));
            v58 = setlocale(0x5, 0x0);
            if (v58 != 0)
            {
                v60 = strncmp(v58, "en_", 0x3);
            }
            if (v58 == 0 || v60 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x413eb0, 0x5));
            }
        }
        if ((v48[1] == 0 || v59 != 0) && (v48[1] == 0 || strncmp(v59, "en_", 0x3) != 0) && (v58 != 0 || v48[1] != 0) && (v48[1] != 0 || v60 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x413e68, 0x5));
        }
        if (v48[1] != 0 || v58 != 0 && v60 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x413eb0, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x413ed0, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned int g_61b2f4;
extern unsigned int g_61b2f8;
extern unsigned int g_61b2fc;
extern unsigned int g_61b4a0;
extern unsigned int g_61b4a4;
extern unsigned int g_61b4a8;
extern unsigned long long g_61b4b0;
extern unsigned long long g_61b4f0;

int sub_40d210()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_61b4a0 = g_61b2fc;
    g_61b4a4 = g_61b2f8;
    v1 = (unsigned int)v2;
    v0 = &g_61b4a0;
    g_61b2fc = g_61b4a0;
    g_61b4f0 = g_61b4b0;
    g_61b2f4 = g_61b4a8;
    return sub_40cc40();
}

extern int512_t g_61b460;

int sub_40b4f0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_61b460 : v1));
}

// int sub_40b9a0()

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

extern unsigned int g_417948;
extern unsigned int g_417989;

int sub_40cc40()
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
    unsigned int v13;  // edi
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
    unsigned long long *v46;  // rbp
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
    if (v13 > 0)
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
                        sub_40c540();
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
                if (v13 > (unsigned int)v27)
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
                            if (v13 <= (unsigned int)v29)
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
            if (v13 != (unsigned int)v26)
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
                            sub_40c540();
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
                                v5 = v24;
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
    if ((v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if ((v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_40c620();
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
                if (v0->field_0 != v46)
                {
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x417948, 0x5);
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
            dcgettext(0x0, 0x417989, 0x5);
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
            else if (v46 != v8->field_0)
            {
                v58 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x417948, 0x5);
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
        v45 = (unsigned int)sub_40c620();
    }
    v63 = v45;
    return v63;
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

extern unsigned int g_417880;
extern unsigned int g_4178a0;
extern unsigned int g_4178d0;
extern unsigned int g_4178f0;
extern unsigned int g_417920;
extern unsigned long long stderr;

int sub_40c620()
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
                                dcgettext(0x0, 0x417880, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x4178a0, 0x5);
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
                                dcgettext(0x0, 0x417920, 0x5);
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
                            dcgettext(0x0, 0x4178f0, 0x5);
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
            dcgettext(0x0, 0x4178d0, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_40c230()
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
        sub_40c3e0(); /* do not return */
    }
}

int sub_40c420()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40c4a0() != 0)
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

extern int512_t g_61b460;

int sub_40b510()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_61b460 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_61b460 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_40b920()

int sub_40d4b0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp+0x8]
    unsigned int v5[8];  // rax
    unsigned long long v6;  // r9
    unsigned long long v8;  // rax

    v5 = v4;
    if (v4 != 0)
    {
        v3 = v5[0];
        v2 = v5[1];
        v1 = v5[1];
        v0 = v5[3 + 1];
        v8 = (unsigned int)sub_40d390() + v6;
        if (!(INVALID_IR))
        {
            return v8;
        }
    }
    if (INVALID_IR || v4 == 0)
    {
        if (!(INVALID_IR))
        {
            return (9223372036854775805 < v6? v6 - 1 : 9223372036854775807);
        }
        else if (v6 < 9223372036854775810)
        {
            return v6 + 1;
        }
        return 0x8000000000000000;
    }
}

int sub_40c4a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40c4e0();
    }
}

extern uint128_t g_61b460;
extern uint128_t g_61b470;
extern uint128_t g_61b480;
extern unsigned long long g_61b490;

int sub_40b92f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_61b490;
    *((uint128_t *)&v0) = g_61b460;
    *((uint128_t *)&v1) = g_61b470;
    *((uint128_t *)&v2) = g_61b480;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_40b310();
}

int sub_40d270()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40d210();
}

typedef struct struct_0 {
    char padding_0[48];
    struct struct_1 *field_30;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    char field_8;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

extern char g_4179a4;

int sub_40dbd0()
{
    struct v1;  // rsi
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14
    unsigned long long v5;  // rax
    char *v6;  // rbx
    struct v7;  // rbp
    unsigned long long v8;  // rax
    char *v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    struct v13;  // rax

    if (v1->field_30 != 0)
    {
        v7 = v2;
        if (v1 <= v1->field_30)
        {
            v12 = 1;
        }
        if (v1 > v1->field_30 || v1->field_30 >= &v1[1])
        {
            v6 = v2 + 9;
            if (*(v1->field_30) != 0)
            {
                while (true)
                {
                    v3 = strcmp(v6, v1->field_30);
                    if (v3 == 0)
                    {
                        break;
                    }
                    while (true)
                    {
                        if (*(v6) == 0)
                        {
                            v4 = &v7[1];
                            if (&v7[1] != v6)
                            {
                                v9 = strlen(v1->field_30) + 1;
                                v10 = &v6[-1 * v4];
                                if (!(&v6[-1 * v4]) < v9)
                                {
                                    *(__errno_location()) = 12;
                                    v12 = 0;
                                }
                            }
                            else if (v7->field_8 == 0)
                            {
                                v9 = strlen(v1->field_30) + 1;
                                v10 = 0;
                            }
                            if ((&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6))
                            {
                                v11 = &v9[v10];
                                if (v11 <= 118)
                                {
                                    memcpy(v6, v1->field_30, v9);
                                    *((char *)(v6 + v9)) = 0;
                                }
                                else
                                {
                                    v13 = sub_40db40();
                                    v7->field_0 = v13;
                                    if (v13 != 0)
                                    {
                                        v13->field_8 = 0;
                                        v6 = &v13[1];
                                    }
                                    else
                                    {
                                        v12 = 0;
                                    }
                                }
                            }
                        }
                        if (*(v6) != 0 || &v7[1] == v6 && v7->field_8 != 0)
                        {
                            v6 = &v6[strlen(v6) + 1];
                            v5 = v7->field_0;
                            if (v7->field_0 == 0 || *(v6) != 0)
                            {
                                break;
                            }
                            v6 = &v7[1];
                            v7 = v5;
                            v8 = strcmp(v5 + 9, v1->field_30);
                        }
                    }
                    if (v11 > 118 && v13 != 0 && (&v7[1] == v6 || *(v6) == 0) && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || v11 <= 118 && (&v7[1] == v6 || *(v6) == 0) && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || v8 == 0 && *(v6) == 0 && v7->field_0 != 0 && (&v7[1] == v6 || *(v6) != 0) && (v7->field_8 != 0 || *(v6) != 0))
                    {
                        v1->field_30 = v6;
                        v12 = 1;
                    }
                    else if (*(v6) != 0 || &v7[1] == v6 && v7->field_8 != 0)
                    {
                        v3 = strcmp(v6, v1->field_30);
                    }
                    else if ((&v7[1] == v6 || *(v6) == 0) && (v13 == 0 || !(&v6[-1 * v4]) < v9) && (v13 == 0 || &v7[1] != v6) && (v7->field_8 == 0 || &v7[1] != v6) && (!(&v6[-1 * v4]) < v9 || v11 > 118) && (&v7[1] != v6 || v11 > 118))
                    {
                        return v12;
                    }
                }
                if (true)
                {
                    v1->field_30 = v6;
                    v12 = 1;
                }
                else if (v3 != 0)
                {
                    return v12;
                }
            }
            else
            {
                v6 = &g_4179a4;
            }
            v1->field_30 = v6;
            v12 = 1;
        }
        return v12;
    }
    return 1;
}

int sub_404ba0()
{
    unsigned long v0;  // [bp-0x28]
    char v1;  // [bp-0x9]
    unsigned long v3;  // r8

    v1 = 0;
    v0 = v3;
    return sub_403280();
}

extern unsigned int g_417532;
extern unsigned int g_41755d;
extern unsigned int g_417790;

int sub_40c110()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417532, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41755d, 0x5));
    dcgettext(0x0, 0x417790, 0x5);
}

int sub_409c00()
{
    char v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long v3;  // rdx
    unsigned int *v4;  // rdi
    unsigned int *v5;  // rsi
    unsigned int v6;  // ecx
    unsigned long long v7;  // rbx
    unsigned int v9;  // ecx
    unsigned int *v10;  // rdi
    unsigned int v11[2];  // rsi
    unsigned int *v12;  // rdi
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx

    if (!(v3 != 1))
    {
        *(v4) = *(v5);
        if (*(v5) <= 68)
        {
            if (((char)v9 & 8) == 0)
            {
                *(v4) = *(v5) + 100;
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    else if (v3 != 2)
    {
        v1 = v7;
        time(&v0);
        v13 = localtime((unsigned int)&v0);
        if (v13 != 0)
        {
            *(v12) = *((int *)(v13 + 20));
            v13 = 1;
        }
        v14 = v1;
        return v13;
    }
    if (v3 == 2 && ((char)v6 & 2) != 0)
    {
        *(v10) = v11[0] * 100 + v11[1] - 1900;
        return 1;
    }
    if ((v3 == 1 || ((char)v6 & 2) == 0) && (v3 == 1 || v3 == 2) && (((char)v6 & 2) == 0 || *(v5) <= 68) && (v3 == 2 || *(v5) <= 68) && (((char)v6 & 2) == 0 || ((char)v9 & 8) != 0) && (v3 == 2 || ((char)v9 & 8) != 0))
    {
        return 0;
    }
}

extern int512_t g_61b460;

int sub_40b5a0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_61b460 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_40a0e0();
}

int sub_40e700()
{
    unsigned long v1;  // rdx
    char *v2;  // rbx
    char *v4;  // rdi
    char *v5;  // rsi

    if (v1 != 0)
    {
        v2 = v1 - 1;
        do
        {
            *((char *)(v4 + v2)) = *((int *)(*((long long *)(unsigned long long)__ctype_tolower_loc()) + (unsigned long long)(char)*((char *)(v5 + v2)) * 4));
            v2 = &v2[-1];
        }
        while (v2 != -1);
    }
    return v4;
}

int sub_40c390()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_40c190();
}

extern int512_t g_61b268;

// int sub_412a60()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_40bff0()
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
    return sub_40bbf0();
}

extern unsigned long long g_61ae30;

int sub_412a78()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_61ae30;
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

extern char g_61b328;
extern unsigned long long g_61b330;

int sub_4025c1()
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

    if (g_61b328 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_61b330 >= 0)
            {
                break;
            }
            g_61b330 = g_61b330 + 1;
            *((long long *)(6401600 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_61b328 = 1;
        return sub_40256b();
    }
    return v4;
}

extern unsigned long long g_4179a4;

int sub_40d310()
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
        v5 = &g_4179a4;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40e130() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_40bb80()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v3;  // rdi
    unsigned long long v4[2];  // rbp
    unsigned long long v5;  // rbx
    unsigned long long v7;  // rax

    v4 = v3;
    v5 = clock_settime(0x0, v3);
    if ((unsigned int)v5 != 0 && *(__errno_location()) != 1)
    {
        *((unsigned long long [2])&v0) = *(v4);
        *((unsigned long long [2])&v1) = ((unsigned long long)(v4[1] * 2361183241434822607 >> 64) >> 7) - (v4[1] >> 63);
        v5 = settimeofday((unsigned int)&v0, 0x0, (unsigned int)(((unsigned long long)(v4[1] * 2361183241434822607 >> 64) >> 7) - (v4[1] >> 63)), (unsigned int)(v4[1] >> 63));
    }
    v7 = v5;
    return v7;
}

int sub_409c90()
{
    unsigned long v0;  // [bp-0xc8]
    char v1;  // [bp-0xb8]
    unsigned int v2;  // [bp-0xa8]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x9c]
    unsigned int v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x68]
    unsigned int v8;  // [bp-0x64]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x60]
    unsigned int v10;  // [bp-0x5c]
    unsigned long long v11;  // [bp-0x58]
    unsigned int v12;  // [bp-0x48]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rbp
    char *v16;  // rsi
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    unsigned long v23;  // r13
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned int v28;  // eax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned int v31[6];  // rdx
    unsigned int v32;  // esi
    unsigned long long v33;  // rax
    char *v34;  // rax
    unsigned long long *v35;  // rdi

    v15 = v14;
    v17 = strlen(v16);
    if (((char)v14 & 4) != 0)
    {
        v20 = strchr(v16, 0x2e);
        if (v20 != 0)
        {
            v18 = v20 * 0;
            v19 = v17 - v17;
            if (v19 == 3)
            {
                v17 = v18;
            }
        }
    }
    else
    {
        v20 = 0;
    }
    if ((v19 == 3 || v20 == 0 || ((char)v14 & 4) == 0) && v17 - 8 <= 4 && (v17 & 1) == 0)
    {
        v21 = v16;
        v22 = &v16[v17];
        while ((unsigned int)(char)*((char *)v21) - 48 <= 9)
        {
            v21 += 1;
            v23 = v17 % 2;
            v24 = 0;
            do
            {
                v7 = (char)*((char *)(v21 + v24 * 2 + 1)) + ((unsigned long long)(char)*((char *)(v21 + v24 * 2)) * 5 - 240) * 2 - 48;
                v24 += 1;
            }
            while (v17 != v24);
            if ((v15 & 1) != 0)
            {
                v6 = v7 - 1;
                v5 = v8;
                v4 = v9;
                v3 = v10;
                v26 = sub_409c00();
                if (v26 == 0)
                {
                    break;
                }
            }
            else
            {
                v25 = sub_409c00();
                if (v25 == 0)
                {
                    break;
                }
                v6 = (unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v17 + -120]) - 1;
                v5 = *((int *)&((char *)stack_base)[4 * v17 + -116]);
                v4 = *((int *)&((char *)stack_base)[4 * v17 + -112]);
                v3 = *((int *)&((char *)stack_base)[4 * v17 + -108]);
            }
            if (v20 != 0)
            {
                v27 = (unsigned int)(char)*((char *)(v20 + 1)) - 48;
                v29 = (char)*((char *)(v20 + 2));
                if ((unsigned int)(char)*((char *)(v20 + 1)) - 48 > 9 || (unsigned int)((unsigned long long)(char)*((char *)(v20 + 2)) - 48) > 9)
                {
                    break;
                }
                v28 = v29 + v27 * 10 - 48;
                v2 = v28;
            }
            else
            {
                v2 = 0;
                v28 = 0;
            }
            v7 = v28;
            v12 = -1;
            v8 = v3;
            v9 = *((long long *)&(&v5)[-1]);
            v11 = *((long long *)&v6);
            v30 = sub_40da50();
            v31 = &v7;
            v0 = v30;
            if (v0 == -1)
            {
                v30 = localtime((unsigned int)(stack_base + -200));
                v31 = v30;
            }
            if (v0 != -1 || v30 != 0)
            {
                v32 = v2;
                if (!(((&v6)[1] ^ v31[2 + 1]) == 0 && (v6 ^ v31[2]) == 0 && (v5 ^ v31[1 + 1]) == 0 && (v4 ^ v31[1]) == 0 && (v3 ^ v31[1]) == 0 && (v31[0] ^ v2) == 0))
                {
                    if (v32 != 60)
                    {
                        break;
                    }
                    v34 = __stpcpy_chk((unsigned int)&v1, v21, 0x10);
                    *((short *)&v34[-2]) = 14645;
                    *(v34) = 0;
                    v33 = sub_409c90();
                    if (v33 == 0)
                    {
                        break;
                    }
                }
                *(v35) = v0;
                return 1;
            }
        }
        if (true)
        {
            v33 = 0;
        }
        else if (unknown)
        {
            return v33;
        }
    }
    v33 = 0;
    return v33;
}

int sub_40b63b()
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
    v7 = (unsigned int)sub_40a0e0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_40c190();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_40a0e0();
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

int sub_40c4e0()
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

int sub_402d80()
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
            if ((*((long long *)(v5 + (v12 << 3))) == 0 || v13 == 0) && (*((long long *)(v5 + (v12 << 3))) == 0 || v0 == -1) && (v13 != 0 || v14 != v11) && (*((long long *)(v5 + (v12 << 3))) != 0 || v13 != 0 || v0 != -1))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
}

// int sub_40b810()

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_404c00()
{
    struct v1;  // rsi
    char *v2;  // rcx
    char *v3;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx

    v2 = &v1->field_14;
    v1->field_14 = 0;
    if (!(INVALID_IR))
    {
        do
        {
            v2 = &v2[-1];
            v8 = v8 * 14757395258967641293 >> 64 >> 3;
            *(v2) = (unsigned int)(v8 - (v8 * 14757395258967641293 >> 64 >> 3) * 10) + 48;
        }
        while (v8 != 0);
        return v2;
    }
    while (true)
    {
        v3 = &v2[-1];
        v7 = ((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63);
        *((unsigned long long *)&v2[-1]) = 48 + (((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63)) * 10 - rdi;
        if (((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63) == 0)
        {
            break;
        }
        v2 = v3;
    }
    v9 = &v2[-2];
    v2[-1] = 45;
    return v9;
}

int sub_40c1b0()
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
        sub_40c3e0(); /* do not return */
    }
}

// int sub_40b7e0()

int sub_40c190()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_40c3e0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_4030b0()
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

extern char g_61b340;

int sub_403110()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_61b340 = v1;
    return v2;
}

// int sub_40bb60()

int sub_40bfd0()
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

extern unsigned int g_41448d;
extern unsigned long long stderr[7];

int sub_402f20()
{
    unsigned long long v1;  // r14
    void *v2;  // rsi
    unsigned long long v4[2];  // rdi
    unsigned int v5;  // rdx
    unsigned long long v6;  // rax
    void *v7;  // rbp
    unsigned long long v9;  // rbx
    char *v11;  // rax

    v1 = 0;
    v7 = v2;
    v9 = 0;
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41448d, 0x5), stderr);
    if (*(v4) != 0)
    {
        while (true)
        {
            if (v9 != 0)
            {
                v6 = memcmp(v1, v7, v5);
                if (v6 == 0)
                {
                    v9 += 1;
                    v7 += v5;
                    sub_40bb60();
                    __fprintf_chk();
                    if (v4[v9] == 0)
                    {
                        break;
                    }
                }
            }
            if (v9 == 0 || v6 != 0)
            {
                v9 += 1;
                v1 = v7;
                v7 += v5;
                sub_40bb60();
                __fprintf_chk();
                if (v4[v9] == 0)
                {
                    break;
                }
            }
        }
    }
    v11 = stderr[5];
    if (stderr[5] < stderr[6])
    {
        stderr[5] = stderr[5] + 1;
        *(v11) = 10;
        return v11;
    }
}

// int sub_40baf0()

// int sub_40b7f0()

extern unsigned int g_412b56;
extern unsigned int g_412b92;
extern unsigned int g_412bbe;
extern unsigned int g_412bcd;
extern unsigned int g_412bdd;
extern unsigned int g_413f08;
extern unsigned int g_413f78;
extern int512_t g_4143f0;
extern int512_t g_4143f8;
extern unsigned int g_4179a4;
extern unsigned int g_61b2fc;
extern unsigned int g_61b338;
extern unsigned long long g_61b4f0;
extern unsigned long long stdin;

int main()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x110]
    void tmp_65;  // tmp #65
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x108]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x100]
    unsigned long v3;  // [bp-0xf8]
    unsigned int v4;  // [bp-0xec]
    unsigned long long v5;  // [bp-0xe0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0xd8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0xd0]
    unsigned long v8;  // [bp-0x70]
    unsigned long v9;  // [bp-0x68]
    unsigned long long v11;  // r15
    unsigned long long v12;  // r14
    unsigned long v13;  // rdi
    unsigned int v14;  // r12d
    unsigned long v15;  // rsi
    char **v16;  // rbp
    unsigned long long v19;  // rax
    unsigned long long v20;  // r13
    unsigned long long v21;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rdx
    char v26;  // dl
    unsigned long long v27;  // rax
    char v28;  // al
    unsigned long long v29;  // rax
    char v30;  // al
    unsigned long v33;  // rsi
    char **v35;  // rax
    char *v37;  // rdi
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rbx
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v47;  // rax
    void *v48;  // r12
    unsigned long long v49;  // r13
    unsigned long long v50;  // rbp
    unsigned long long v51;  // r14
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rbx
    unsigned long long v56;  // rbx
    unsigned long long v57;  // rbx
    unsigned int v58;  // cc_dep1
    unsigned long long v59;  // rax
    unsigned long long v60;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v61;  // r13
    unsigned int v62;  // ebp
    unsigned int v63;  // ebp

    v11 = 0;
    v12 = 0;
    v20 = 0;
    v14 = v13;
    v16 = v15;
    v24 = 0;
    sub_409f40();
    setlocale(0x6, 0x4179a4);
    bindtextdomain(0x412b56, 0x413f08);
    textdomain(0x412b56);
    sub_412a60();
    v0 = 0;
    v1 = 0;
    while (true)
    {
        v19 = sub_40d290();
        if ((unsigned int)v19 == -1)
        {
            v25 = 0;
            v26 = v11 != 0;
            v27 = 0;
            v28 = v20 != 0;
            tmp_65 = rdx + rax;
            v29 = 0;
            v30 = v0 != 0;
            if ((unsigned int)(tmp_65 + rax) > 1)
            {
                v33 = "the options to specify dates for printing are mutually exclusive";
            }
            else if ((v12 & (char)(v4 & 1)) == 0)
            {
                v35 = (long long)(int)g_61b2fc;
                if (g_61b2fc < (unsigned int)v13)
                {
                    if ((unsigned int)((int)g_61b2fc + 1) >= (unsigned int)v13)
                    {
                        v37 = *((long long *)((char *)v16 + 0x8 * v35));
                        if (*((char *)*((long long *)((char *)v16 + 0x8 * v35))) != 43)
                        {
                            if ((char)(v4 & 1) != 0 || v12 != 0)
                            {
                                v39 = (unsigned int)sub_40bb60();
                            }
                        }
                        else
                        {
                            if (v24 == 0)
                            {
                                g_61b2fc = (int)g_61b2fc + 1;
                                v24 = &v37[1];
                            }
                            else
                            {
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x413f78, 0x5));
                            }
                        }
                    }
                    else
                    {
                        v38 = (unsigned int)sub_40bb60();
                    }
                    if (((unsigned int)((int)g_61b2fc + 1) < (unsigned int)v13 || *((char *)*((long long *)((char *)v16 + 0x8 * v35))) != 43) && ((unsigned int)((int)g_61b2fc + 1) < (unsigned int)v13 || (char)(v4 & 1) != 0 || v12 != 0))
                    {
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v15, 0x5));
                    }
                }
            }
            else
            {
                v33 = "the options to print and set the time may not be used together";
            }
            if ((v12 & (char)(v4 & 1)) != 0 || (unsigned int)(tmp_65 + rax) > 1)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v33, 0x5));
            }
        }
        else if ((unsigned int)v19 != 102)
        {
            if (v19 > 102)
            {
                if ((unsigned int)v19 == 117)
                {
                    if (putenv(0x412b92) == 0)
                    {
                        tzset();
                    }
                    else
                    {
                        sub_40c3e0(); /* do not return */
                    }
                }
                else if (v19 <= 117)
                {
                    if ((unsigned int)v19 == 114)
                    {
                        v0 = g_61b4f0;
                    }
                    if ((unsigned int)v19 == 115)
                    {
                        v12 = 1;
                        v1 = g_61b4f0;
                    }
                }
                else
                {
                    if ((unsigned int)v19 == 128)
                    {
                        v23 = 4276576 + 32 * (unsigned int)*((int *)&((char *)&g_4143f8)[4 * (unsigned long long)(unsigned int)sub_403040()]);
                    }
                    if ((unsigned int)v19 == 129)
                    {
                        g_61b338 = g_61b338 | 1;
                    }
                }
            }
            else
            {
                if ((unsigned int)v19 == 73)
                {
                    v21 = 0;
                    if (g_61b4f0 != 0)
                    {
                        v21 = (unsigned int)*((int *)&((char *)&g_4143f0)[4 * (unsigned long long)(unsigned int)sub_403040()]);
                    }
                    v23 = 4276416 + 32 * v21;
                }
                else if (v19 > 73)
                {
                    if ((unsigned int)v19 == 82)
                    {
                        v23 = "%a, %d %b %Y %H:%M:%S %z";
                    }
                    if ((unsigned int)v19 == 100)
                    {
                        v11 = g_61b4f0;
                    }
                }
                else
                {
                    if ((unsigned int)v19 == -131)
                    {
                        sub_40c050();
                        exit(0x0); /* do not return */
                    }
                    if ((unsigned int)v19 == -130)
                    {
                        sub_402750(); /* do not return */
                    }
                }
            }
        }
        if ((unsigned int)v19 == 102)
        {
            v20 = g_61b4f0;
        }
        if (v19 <= 102 && (unsigned int)v19 == 73 && (unsigned int)v19 != -1 && (unsigned int)v19 != 102 || v19 <= 102 && (unsigned int)v19 == 82 && v19 > 73 && (unsigned int)v19 != -1 && (unsigned int)v19 != 73 && (unsigned int)v19 != 102 || (unsigned int)v19 == 128 && v19 > 117 && v19 > 102 && (unsigned int)v19 != -1 && (unsigned int)v19 != 117 && (unsigned int)v19 != 102)
        {
            if (v24 == 0)
            {
                v24 = v23;
            }
            else
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x413f78, 0x5));
            }
        }
        if ((v12 & (char)(v4 & 1)) == 0 && (char)(v4 & 1) == 0 && (unsigned int)v19 == -1 && (unsigned int)(tmp_65 + rax) <= 1 && g_61b2fc < (unsigned int)v13 && (unsigned int)((int)g_61b2fc + 1) >= (unsigned int)v13 && *((char *)*((long long *)((char *)v16 + 0x8 * v35))) != 43 && v12 == 0 || (v12 & (char)(v4 & 1)) == 0 && (unsigned int)v19 == -1 && (unsigned int)(tmp_65 + rax) <= 1 && g_61b2fc < (unsigned int)v13 && *((char *)*((long long *)((char *)v16 + 0x8 * v35))) == 43 && (unsigned int)((int)g_61b2fc + 1) >= (unsigned int)v13 && v24 == 0 || (v12 & (char)(v4 & 1)) == 0 && (unsigned int)v19 == -1 && (unsigned int)(tmp_65 + rax) <= 1 && g_61b2fc >= (unsigned int)v13)
        {
            if (v24 != 0)
            {
                break;
            }
            v2 = v4;
            if (*((char *)(unsigned long long)nl_langinfo(0x2006c)) != 0)
            {
                break;
            }
        }
        if ((v12 & (char)(v4 & 1)) == 0 && (unsigned int)v19 == -1 && (unsigned int)(tmp_65 + rax) <= 1 && g_61b2fc < (unsigned int)v13 && ((unsigned int)((int)g_61b2fc + 1) < (unsigned int)v13 || *((char *)*((long long *)((char *)v16 + 0x8 * v35))) != 43) && ((unsigned int)((int)g_61b2fc + 1) < (unsigned int)v13 || (char)(v4 & 1) != 0 || v12 != 0) || v19 <= 117 && v19 > 102 && (unsigned int)v19 != 114 && (unsigned int)v19 != -1 && (unsigned int)v19 != 117 && (unsigned int)v19 != 102 && (unsigned int)v19 != 115 || v19 > 117 && v19 > 102 && (unsigned int)v19 != -1 && (unsigned int)v19 != 117 && (unsigned int)v19 != 128 && (unsigned int)v19 != 102 && (unsigned int)v19 != 129 || v19 <= 102 && v19 > 73 && (unsigned int)v19 != -1 && (unsigned int)v19 != 73 && (unsigned int)v19 != 102 && (unsigned int)v19 != 82 && (unsigned int)v19 != 100 || v19 <= 102 && v19 <= 73 && (unsigned int)v19 != -131 && (unsigned int)v19 != -1 && (unsigned int)v19 != 73 && (unsigned int)v19 != 102 && (unsigned int)v19 != -130 || (unsigned int)v19 == -1 && ((v12 & (char)(v4 & 1)) != 0 || (unsigned int)(tmp_65 + rax) > 1))
        {
            sub_402750(); /* do not return */
        }
    }
    v4 = tmp_65 + rax;
    v3 = getenv("TZ");
    v2 = (unsigned int)sub_40db40();
    if (v20 != 0)
    {
        v42 = strcmp(v20, "-");
        if (v42 != 0)
        {
            v48 = fopen(v20, "r");
            if (v48 == 0)
            {
                v55 = (unsigned int)sub_40b9e0();
                error(0x1, *(__errno_location()), "%s");
            }
        }
        else
        {
            v48 = stdin;
            v49 = dcgettext(0x0, 0x412bbe, 0x5);
        }
        if (v42 == 0 || v48 != 0)
        {
            v50 = 1;
            v5 = 0;
            v6 = 0;
            v0 = &(stack_base)[-216];
            while (true)
            {
                v51 = __getdelim(&v5, v0, 0xa, v48);
                if (INVALID_IR)
                {
                    break;
                }
                if (sub_407bc0() == 0)
                {
                    if (*((char *)(v5 + v51 - 1)) == 10)
                    {
                        *((char *)(v5 + v51 - 1)) = 0;
                    }
                    v54 = (unsigned int)sub_40bb60();
                    v50 = 0;
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x412bcd, 0x5));
                }
                else
                {
                    v50 = (unsigned int)v50 & sub_402620();
                }
            }
            v58 = sub_40c420();
            if (!((char)(v58 + 1 == 0)))
            {
                free(v5);
            }
            else
            {
                v60 = (unsigned int)sub_40b9e0();
                error(0x1, *(__errno_location()), "%s");
            }
        }
    }
    else
    {
        v43 = v4 ^ 1;
        v61 = (unsigned int)v12 ^ 1;
        v61 = (char)((unsigned int)v12 ^ 1) & v43;
        v61 = rax;
        if (((char)((unsigned int)v12 ^ 1) & v43) == 0)
        {
            if (v0 != 0)
            {
                v44 = __xstat(0x1);
                if (v44 == 0)
                {
                    v6 = v8;
                    v7 = v9;
                }
                else
                {
                    v56 = (unsigned int)sub_40b9e0();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            else
            {
                v45 = sub_407bc0();
            }
            if ((v44 == 0 && v0 != 0 || v0 == 0 && v45 != 0) && v12 != 0)
            {
                v0 = stack_base + -216;
            }
        }
        else if (g_61b2fc < v14)
        {
            v0 = stack_base + -216;
            v47 = sub_409c90();
            v7 = 0;
        }
        else
        {
            sub_404bc0();
        }
        if ((v47 == 0 || ((char)((unsigned int)v12 ^ 1) & v43) == 0) && (g_61b2fc < v14 || ((char)((unsigned int)v12 ^ 1) & v43) == 0) && (v45 == 0 || ((char)((unsigned int)v12 ^ 1) & v43) != 0) && (v0 == 0 || ((char)((unsigned int)v12 ^ 1) & v43) != 0))
        {
            v57 = (unsigned int)sub_40bb60();
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x412bcd, 0x5));
        }
    }
    if (v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && v12 != 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) || v20 == 0 && g_61b2fc < v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 && v47 != 0)
    {
        v59 = sub_40bb80();
        if (v59 != 0)
        {
            v61 = 0;
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x412bdd, 0x5));
        }
    }
    if (v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) && v12 == 0 || (v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && v12 != 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) || v20 == 0 && g_61b2fc < v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 && v47 != 0) && v59 == 0)
    {
        v61 = 1;
    }
    if ((v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && v12 != 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) || v20 == 0 && g_61b2fc < v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 && v47 != 0) && v59 != 0 || v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) && v12 == 0 || (v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && v12 != 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) || v20 == 0 && g_61b2fc < v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 && v47 != 0) && v59 == 0 || v20 == 0 && g_61b2fc >= v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0)
    {
        v62 = v61;
        v63 = v62 & sub_402620();
    }
    if ((v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && v12 != 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) || v20 == 0 && g_61b2fc < v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 && v47 != 0) && v59 != 0 || v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) && v12 == 0 || (v20 == 0 && ((char)((unsigned int)v12 ^ 1) & v43) == 0 && v12 != 0 && (v44 == 0 || v0 == 0) && (v45 != 0 || v0 != 0) || v20 == 0 && g_61b2fc < v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 && v47 != 0) && v59 == 0 || v20 == 0 && g_61b2fc >= v14 && ((char)((unsigned int)v12 ^ 1) & v43) != 0 || v20 != 0 && !((char)(v58 + 1 == 0)) && (v42 == 0 || v48 != 0))
    {
        return (unsigned long long)(stack_base + 0);
    }
}

// int sub_40c1e0()

int sub_403220()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long v5;  // rdx
    unsigned long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rsi
    unsigned int *v12;  // rcx
    void *v13;  // rdi
    unsigned long long v14;  // rax
    char *v15;  // rbx
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13

    if (v5 != 0)
    {
        v3 = v7;
        v2 = v8;
        v1 = stack_base + 0;
        v0 = v9;
        v15 = v10;
        while (true)
        {
            v12 = (unsigned long long)*(v15);
            v15 = &v15[1];
            v14 = fputc(*((int *)(*((long long *)(unsigned long long)__ctype_toupper_loc()) + v12 * 4)), v13);
            if (v15 == v5 + v10)
            {
                break;
            }
        }
        v16 = v0;
        v17 = v2;
        v18 = v3;
        return v14;
    }
    return v6;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_4179a4;
extern char g_61b4e8[2];

int sub_40e190()
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

    v9 = g_61b4e8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_4179a4 : (unsigned long long)nl_langinfo(0xe));
    if (g_61b4e8 == 0)
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
            v9 = &g_4179a4;
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
                            if ((unsigned int)v60 != 35 && (unsigned int)v60 != 32)
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
                                        v9 = &g_4179a4;
                                        v10 = (tmp_10 == 0? &g_4179a4 : tmp_10);
                                        free(NULL);
                                        sub_40c420();
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v60 != 35 && v37 != 0 && v28 > 1 && (unsigned int)v60 != 32)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v60 == 35 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v60 != 35 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v60 != 35 && v37 != 0 && v28 > 1 && (unsigned int)v60 != 32) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_4179a4 : tmp_10);
                            sub_40c420();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v60 != 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_4179a4;
                    }
                    else if (((unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v60 != 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0 || ((unsigned int)v60 != 35 && v28 > 1 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0 || (unsigned int)v60 != 35 && v28 > 1 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_4179a4;
            free(v17);
        }
        *((char *[2])&g_61b4e8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_4179a4 : tmp_10), v9);
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

typedef struct struct_0 {
    char padding_0[104];
    unsigned long long field_68;
    unsigned long long field_70;
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    unsigned long long field_90;
    unsigned int field_98;
} struct_0;

extern unsigned int g_4148e1;
extern unsigned int g_4148f2;

int sub_405280()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    struct v3;  // rsi
    struct v4;  // rbx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rdi

    v0 = v2;
    v4 = v3;
    dcgettext(0x0, 0x4148e1, 0x5);
    sub_404f90();
    if (!(v3->field_68 == 0))
    {
        v6 = (unsigned int)sub_4050c0();
        if (v3->field_70 == 0)
        {
            v3 = v3->field_78;
        }
    }
    else if (v3->field_70 == 0)
    {
        if (v3->field_78 == 0 && v3->field_80 == 0 && v3->field_88 == 0 && v3->field_90 == 0 && v3->field_98 == 0)
        {
            dcgettext(0x0, 0x4148f2, 0x5);
        }
    }
    if (v3->field_68 == 0 && v3->field_70 != 0 || v3->field_70 != 0 && v3->field_68 != 0)
    {
        v7 = (unsigned int)sub_4050c0();
    }
    if (v3 != 0 && v3->field_70 != 0 || v3 != 0 && v3->field_68 != 0 || v3->field_70 == 0 && v3->field_68 == 0 && v3->field_78 != 0)
    {
        v8 = (unsigned int)sub_4050c0();
    }
    if (v3->field_90 != 0 || v3->field_88 != 0 || v3->field_98 != 0 || v3->field_78 != 0 || v3->field_70 != 0 || v3->field_80 != 0 || v3->field_68 != 0)
    {
        if (v4->field_80 != 0)
        {
            v9 = (unsigned int)sub_4050c0();
        }
        if (v4->field_88 != 0)
        {
            v10 = (unsigned int)sub_4050c0();
        }
        if (v4->field_90 != 0)
        {
            v11 = (unsigned int)sub_4050c0();
        }
        if (v4->field_98 != 0)
        {
            sub_4050c0();
        }
    }
}

extern unsigned int g_414455;
extern unsigned int g_414470;

int sub_402ea0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x414455, 0x5);
    }
    dcgettext(0x0, 0x414470, 0x5);
    sub_40bb40();
    sub_40b830();
}

// int sub_40b910()

int sub_4031c0()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long v5;  // rdx
    unsigned long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rsi
    unsigned int *v12;  // rcx
    void *v13;  // rdi
    unsigned long long v14;  // rax
    char *v15;  // rbx
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13

    if (v5 != 0)
    {
        v3 = v7;
        v2 = v8;
        v1 = stack_base + 0;
        v0 = v9;
        v15 = v10;
        while (true)
        {
            v12 = (unsigned long long)*(v15);
            v15 = &v15[1];
            v14 = fputc(*((int *)(*((long long *)(unsigned long long)__ctype_tolower_loc()) + v12 * 4)), v13);
            if (v15 == v5 + v10)
            {
                break;
            }
        }
        v16 = v0;
        v17 = v2;
        v18 = v3;
        return v14;
    }
    return v6;
}

int sub_40c3c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_40ded0()
{
    unsigned long long v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x54]
    unsigned int v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x4c]
    unsigned int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x38]
    unsigned int v9[9];  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    if (v11 != 0)
    {
        v12 = (unsigned int)sub_40dd50();
        if (v12 != 0)
        {
            v0 = (unsigned int)sub_40da50();
            if (v0 == -1)
            {
                v13 = localtime_r((unsigned int)&v0, (unsigned int)&v1);
            }
            if ((v0 == -1 && v13 != 0 && (v9[4] == 0 == v7 == 0 || v9[4] < 0 || v7 < 0) && (v9[2] ^ v5) == 0 && (v9[2 + 1] ^ v6) == 0 && (v9[1 + 1] ^ v4) == 0 && (v9[1] ^ v3) == 0 && (v9[1] ^ v2) == 0 && (v9[0] ^ *((int *)&v1)) == 0 || v0 != -1) && sub_40dbd0() == 0)
            {
                v0 = -1;
            }
            if (v12 != 1)
            {
                v15 = sub_40daf0();
            }
        }
        if (v12 == 0 || v15 == 0 && v12 != 1)
        {
            v16 = -1;
        }
        if (v12 == 1 || v12 != 0 && v15 != 0)
        {
            v16 = v0;
        }
        return v16;
    }
    return sub_40dff0();
}

int sub_40d290()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40d210();
}

extern int512_t g_41679c;
extern int512_t g_4167a0;

int sub_409fe0()
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
        v3 = sub_40e190();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_41679c : 4286375);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_4167a0 : 4286371);
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

int sub_40da50()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    tzset();
}

extern char g_61b460;

int sub_40b570()
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
    v3 = (v2 == 0? &g_61b460 : v2);
    *((int *)(tmp_11? &g_61b460 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_61b460;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_61b460;
        abort(); /* do not return */
    }
}

int sub_40de20()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // r13
    unsigned long v3;  // rsi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v2 = (unsigned int)sub_40dd50();
        if (v2 != 0)
        {
            v5 = localtime_r(v3, v4);
            if (v5 != 0)
            {
                v6 = sub_40dbd0();
                if (v6 != 0)
                {
                    if (v2 != 1)
                    {
                        v8 = sub_40daf0();
                    }
                    if (v2 == 1 || v8 != 0)
                    {
                        return v4;
                    }
                }
            }
            if ((v6 == 0 || v5 == 0) && v2 != 1)
            {
                sub_40daf0();
            }
        }
        if (v2 == 0 || v6 == 0 || v5 == 0 || v8 == 0 && v2 != 1)
        {
            return 0;
        }
    }
}

typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    char padding_20[64];
    unsigned long long field_60;
    char padding_68[56];
    char field_a0;
    char padding_a1[7];
    unsigned long long field_a8;
    unsigned long long field_b0;
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    unsigned long long field_d0;
    char field_d8;
    char padding_d9[1];
    char field_da;
    char field_db;
    char field_dc;
    char field_dd;
    char field_de;
    char field_df;
} struct_0;

extern unsigned int g_4148e1;
extern unsigned int g_414975;
extern unsigned int g_4149a9;
extern unsigned int g_414ee8;
extern unsigned long long stderr;

int sub_4055a0()
{
    struct v1;  // rsi
    struct v2;  // rbx
    unsigned long long v5;  // rdx
    unsigned long long v7;  // cc_dep1
    unsigned long long v9;  // rbp
    unsigned long long v10;  // cc_dep1
    char v12;  // cc_dep1

    v2 = v1;
    dcgettext(0x0, 0x4148e1, 0x5);
    sub_404f90();
    if (v1->field_a8 != 0 && v1->field_da == 0)
    {
        __fprintf_chk();
        v2->field_da = 1;
        v5 = 1;
        if (v2->field_d8 != v2->field_df)
        {
            fputc(0x20, stderr);
        }
    }
    if (v1->field_a8 == 0 || v1->field_da != 0)
    {
        v5 = 0;
    }
    if (v1->field_a8 == 0 && v2->field_d8 != v2->field_df || v2->field_d8 != v2->field_df && v1->field_da != 0 || v1->field_da == 0 && v1->field_a8 != 0 && v2->field_d8 != v2->field_df)
    {
        dcgettext(0x0, 0x414975, 0x5);
        __fprintf_chk();
        v5 = 1;
        v2->field_df = v2->field_d8;
    }
    if (v2->field_c8 != 0 && v2->field_dd == 0)
    {
        __fprintf_chk();
        if (v2->field_60 != 0)
        {
            __fprintf_chk();
        }
        if (v2->field_1c == 1)
        {
            fwrite("pm", 0x1, 0x2, stderr);
        }
        v7 = v2->field_b0;
        v2->field_dd = 1;
        v5 = 1;
        if (v7 != 0)
        {
            v5 = v2->field_db;
        }
    }
    if ((v2->field_dd == 0 || v2->field_db == 0) && (v2->field_dd == 0 || v2->field_b0 != 0) && (v2->field_db == 0 || v2->field_c8 != 0) && (v2->field_c8 != 0 || v2->field_b0 != 0) && (v2->field_db == 0 || v2->field_c8 == 0 || v2->field_dd != 0) && (v2->field_c8 == 0 || v2->field_dd != 0 || v7 != 0))
    {
        if ((v2->field_dd == 0 || v5 != 0) && (v2->field_c8 != 0 || v5 != 0))
        {
            fputc(0x20, stderr);
        }
        v9 = (unsigned int)sub_4054b0();
        dcgettext(0x0, 0x414ee8, 0x5);
        __fprintf_chk();
        v2->field_db = 1;
        v5 = 1;
    }
    if (v2->field_b8 != 0 && v2->field_dc == 0)
    {
        __fprintf_chk();
        v10 = v2->field_d0;
        v2->field_dc = 1;
    }
    if ((v2->field_de == 0 || v2->field_dc == 0) && (v2->field_de == 0 || v2->field_b8 != 0) && (v2->field_dc == 0 || v2->field_d0 != 0) && (v2->field_b8 != 0 || v2->field_d0 != 0) && (v2->field_b8 == 0 || v2->field_de == 0 || v2->field_dc != 0) && (v2->field_b8 == 0 || v10 != 0 || v2->field_dc != 0))
    {
        sub_404e20();
        __fprintf_chk();
        v12 = v2->field_a0;
        v2->field_de = 1;
    }
    if (v2->field_a0 != 0 && (v2->field_b8 == 0 || v2->field_dc != 0) && (v2->field_d0 == 0 || v2->field_de != 0) && v5 != 0 || (v2->field_de == 0 || v2->field_dc == 0) && (v2->field_de == 0 || v2->field_b8 != 0) && (v2->field_dc == 0 || v12 != 0) && (v2->field_dc == 0 || v2->field_d0 != 0) && (v2->field_b8 != 0 || v12 != 0) && (v2->field_b8 != 0 || v2->field_d0 != 0) && (v10 == 0 || v12 != 0 || v2->field_de != 0) && (v2->field_b8 == 0 || v2->field_de == 0 || v2->field_a0 != 0 || v2->field_dc != 0) && (v2->field_b8 == 0 || v2->field_a0 != 0 || v10 != 0 || v2->field_dc != 0))
    {
        fputc(0x20, stderr);
    }
    if (v2->field_a0 != 0 && (v2->field_b8 == 0 || v2->field_dc != 0) && (v2->field_d0 == 0 || v2->field_de != 0) && v5 == 0 || v2->field_a0 != 0 && (v2->field_b8 == 0 || v2->field_dc != 0) && (v2->field_d0 == 0 || v2->field_de != 0) && v5 != 0 || (v2->field_de == 0 || v2->field_dc == 0) && (v2->field_de == 0 || v2->field_b8 != 0) && (v2->field_dc == 0 || v12 != 0) && (v2->field_dc == 0 || v2->field_d0 != 0) && (v2->field_b8 != 0 || v12 != 0) && (v2->field_b8 != 0 || v2->field_d0 != 0) && (v10 == 0 || v12 != 0 || v2->field_de != 0) && (v2->field_b8 == 0 || v2->field_de == 0 || v2->field_a0 != 0 || v2->field_dc != 0) && (v2->field_b8 == 0 || v2->field_a0 != 0 || v10 != 0 || v2->field_dc != 0))
    {
        dcgettext(0x0, 0x4149a9, 0x5);
        __fprintf_chk();
    }
    return fputc(0xa, stderr);
}

int sub_40e130()
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

