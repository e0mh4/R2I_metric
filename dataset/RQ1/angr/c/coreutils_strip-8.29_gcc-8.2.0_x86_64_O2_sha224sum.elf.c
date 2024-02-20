#include "decompile_angr.h"
int sub_407e40()
{
}

extern uint128_t g_60e420;
extern uint128_t g_60e430;
extern uint128_t g_60e440;
extern unsigned long long g_60e450;

int sub_407d70()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60e420;
    *((uint128_t *)&v1) = g_60e430;
    *((uint128_t *)&v2) = g_60e440;
    v4 = g_60e450;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_407630();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_4084b0()
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
            sub_4086a0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_4061c0()
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
            v5 = sub_407ea0();
            if (v5 >= 0)
            {
                v6 = sub_4086e0();
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
                sub_4086e0();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

extern unsigned int g_409ef9;
extern unsigned int g_40a020;
extern unsigned int g_40a048;
extern unsigned int g_40a090;
extern unsigned int g_40a0c8;
extern unsigned int g_40a0f8;
extern unsigned int g_40a140;
extern unsigned int g_40a178;
extern unsigned int g_40a1b0;
extern unsigned int g_40a368;
extern unsigned int g_40a398;
extern unsigned int g_40a3d0;
extern unsigned int g_40a528;
extern unsigned int g_40a570;
extern unsigned int g_40a590;
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
        dcgettext(0x0, 0x40a020, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a048, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a090, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a0c8, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a0f8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a140, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a178, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a1b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a368, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40a398, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a3d0, 0x5));
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
            v33 = "sha224sum";
            v34 = 10;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409ef9, 0x5));
            v42 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409ef9, 0x5));
            v41 = setlocale(0x5, 0x0);
            if (v41 != 0)
            {
                v43 = strncmp(v41, "en_", 0x3);
            }
            if (v43 == 0 || v41 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a570, 0x5));
            }
        }
        if ((v3 == 0 || v42 != 0) && (v3 == 0 || strncmp(v42, "en_", 0x3) != 0) && (v43 != 0 || v3 != 0) && (v41 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a528, 0x5));
        }
        if (v3 != 0 || v43 != 0 && v41 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a570, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40a590, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_407ea0()
{
}

int sub_4096b0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409040();
}

int sub_409790()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_4086e0();
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

extern unsigned long long g_60de30;

int sub_409e48()
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

int sub_406020()
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long v8;  // r12
    void *v9;  // r12
    unsigned long long v10;  // rbx
    unsigned int *v11;  // rdi
    unsigned long long v12;  // rax

    if (v8 != 0)
    {
        v4 = 0;
        v8 = malloc(0x8048);
        v0 = 3926247204440088280;
        v1 = -644479594506691305;
        v2 = 7518782744944446257;
        v3 = 13761399178871279527;
        v5 = 0;
        while (true)
        {
            v10 = 0;
            while (true)
            {
                v12 = fread_unlocked(v9 + v10, 0x1, 0x8000 - v10, v11);
                v10 += v12;
                if (v10 != 0x8000)
                {
                    if (v12 == 0 && ((char)*(v11) & 32) != 0)
                    {
                        free(v9);
                        return 1;
                    }
                    if (((char)*(v11) & 32) == 0 && v12 == 0 || ((char)*(v11) & 16) != 0 && v12 != 0)
                    {
                        if (v10 != 0)
                        {
                            sub_405ac0();
                        }
                        sub_405990();
                        sub_4031e0();
                        free(v9);
                        return 0;
                    }
                }
                else
                {
                    sub_403200();
                }
            }
        }
    }
    else
    {
        return 1;
    }
}

int sub_403200()
{
    void tmp_109;  // tmp #109
    void tmp_110;  // tmp #110
    void tmp_367;  // tmp #367
    void tmp_379;  // tmp #379
    void tmp_646;  // tmp #646
    void tmp_692;  // tmp #692
    void tmp_742;  // tmp #742
    void tmp_994;  // tmp #994
    void tmp_326;  // tmp #326
    void tmp_464;  // tmp #464
    void tmp_485;  // tmp #485
    void tmp_729;  // tmp #729
    void tmp_750;  // tmp #750
    void tmp_674;  // tmp #674
    void tmp_923;  // tmp #923
    void tmp_944;  // tmp #944
    void tmp_282;  // tmp #282
    void tmp_377;  // tmp #377
    void tmp_465;  // tmp #465
    void tmp_572;  // tmp #572
    void tmp_668;  // tmp #668
    void tmp_948;  // tmp #948
    void tmp_972;  // tmp #972
    void tmp_973;  // tmp #973
    void tmp_398;  // tmp #398
    void tmp_403;  // tmp #403
    void tmp_612;  // tmp #612
    void tmp_654;  // tmp #654
    void tmp_769;  // tmp #769
    unsigned int v0;  // [bp-0xf8]
    void tmp_989;  // tmp #989
    void tmp_1004;  // tmp #1004
    void tmp_1066;  // tmp #1066
    void tmp_1071;  // tmp #1071
    void tmp_334;  // tmp #334
    void tmp_364;  // tmp #364
    void tmp_380;  // tmp #380
    void tmp_688;  // tmp #688
    void tmp_737;  // tmp #737
    void tmp_790;  // tmp #790
    void tmp_791;  // tmp #791
    void tmp_1005;  // tmp #1005
    void tmp_1038;  // tmp #1038
    void tmp_842;  // tmp #842
    void tmp_427;  // tmp #427
    void tmp_879;  // tmp #879
    void tmp_463;  // tmp #463
    void tmp_531;  // tmp #531
    void tmp_532;  // tmp #532
    void tmp_579;  // tmp #579
    void tmp_961;  // tmp #961
    void tmp_983;  // tmp #983
    void tmp_300;  // tmp #300
    void tmp_340;  // tmp #340
    void tmp_622;  // tmp #622
    void tmp_699;  // tmp #699
    void tmp_752;  // tmp #752
    void tmp_753;  // tmp #753
    void tmp_963;  // tmp #963
    void tmp_1058;  // tmp #1058
    void tmp_295;  // tmp #295
    void tmp_317;  // tmp #317
    void tmp_391;  // tmp #391
    void tmp_687;  // tmp #687
    void tmp_711;  // tmp #711
    void tmp_712;  // tmp #712
    void tmp_863;  // tmp #863
    void tmp_357;  // tmp #357
    void tmp_358;  // tmp #358
    void tmp_536;  // tmp #536
    void tmp_705;  // tmp #705
    void tmp_726;  // tmp #726
    void tmp_717;  // tmp #717
    void tmp_755;  // tmp #755
    void tmp_942;  // tmp #942
    void tmp_947;  // tmp #947
    void tmp_952;  // tmp #952
    void tmp_1010;  // tmp #1010
    void tmp_262;  // tmp #262
    void tmp_290;  // tmp #290
    void tmp_450;  // tmp #450
    void tmp_546;  // tmp #546
    void tmp_850;  // tmp #850
    void tmp_951;  // tmp #951
    void tmp_578;  // tmp #578
    void tmp_625;  // tmp #625
    void tmp_641;  // tmp #641
    void tmp_749;  // tmp #749
    void tmp_760;  // tmp #760
    void tmp_770;  // tmp #770
    void tmp_871;  // tmp #871
    void tmp_928;  // tmp #928
    void tmp_1025;  // tmp #1025
    void tmp_385;  // tmp #385
    void tmp_517;  // tmp #517
    void tmp_548;  // tmp #548
    void tmp_549;  // tmp #549
    void tmp_672;  // tmp #672
    void tmp_772;  // tmp #772
    void tmp_890;  // tmp #890
    void tmp_903;  // tmp #903
    void tmp_958;  // tmp #958
    void tmp_959;  // tmp #959
    void tmp_297;  // tmp #297
    void tmp_312;  // tmp #312
    void tmp_439;  // tmp #439
    void tmp_480;  // tmp #480
    void tmp_576;  // tmp #576
    void tmp_676;  // tmp #676
    void tmp_759;  // tmp #759
    void tmp_761;  // tmp #761
    void tmp_513;  // tmp #513
    void tmp_757;  // tmp #757
    void tmp_773;  // tmp #773
    void tmp_939;  // tmp #939
    void tmp_284;  // tmp #284
    void tmp_715;  // tmp #715
    void tmp_332;  // tmp #332
    void tmp_283;  // tmp #283
    void tmp_361;  // tmp #361
    void tmp_540;  // tmp #540
    void tmp_721;  // tmp #721
    void tmp_736;  // tmp #736
    void tmp_966;  // tmp #966
    void tmp_277;  // tmp #277
    void tmp_560;  // tmp #560
    void tmp_569;  // tmp #569
    void tmp_616;  // tmp #616
    void tmp_632;  // tmp #632
    void tmp_727;  // tmp #727
    void tmp_738;  // tmp #738
    void tmp_748;  // tmp #748
    void tmp_921;  // tmp #921
    void tmp_460;  // tmp #460
    void tmp_644;  // tmp #644
    void tmp_658;  // tmp #658
    void tmp_703;  // tmp #703
    void tmp_816;  // tmp #816
    void tmp_852;  // tmp #852
    void tmp_853;  // tmp #853
    void tmp_919;  // tmp #919
    void tmp_937;  // tmp #937
    void tmp_406;  // tmp #406
    void tmp_431;  // tmp #431
    void tmp_558;  // tmp #558
    void tmp_785;  // tmp #785
    void tmp_800;  // tmp #800
    void tmp_801;  // tmp #801
    void tmp_910;  // tmp #910
    void tmp_932;  // tmp #932
    void tmp_1006;  // tmp #1006
    void tmp_461;  // tmp #461
    void tmp_522;  // tmp #522
    unsigned int v1;  // [bp-0xf4]
    unsigned int v2;  // [bp-0xf0]
    unsigned int v3;  // [bp-0xec]
    unsigned int v4;  // [bp-0xe8]
    unsigned int v5;  // [bp-0xe4]
    unsigned int v6;  // [bp-0xe0]
    unsigned int v7;  // [bp-0xdc]
    unsigned int v8;  // [bp-0xd8]
    unsigned int v9;  // [bp-0xd4]
    unsigned int v10;  // [bp-0xd0]
    unsigned int v11;  // [bp-0xcc]
    unsigned int v12;  // [bp-0xc8]
    unsigned int v13;  // [bp-0xc4]
    unsigned long long v14;  // [bp-0xc0]
    unsigned int v15;  // [bp-0xb8]
    unsigned int v16;  // [bp-0xb4]
    unsigned int v17;  // [bp-0xb0]
    unsigned int v18;  // [bp-0xac]
    unsigned int v19;  // [bp-0xa8]
    unsigned int v20;  // [bp-0xa4]
    unsigned int v21;  // [bp-0xa0]
    unsigned int v22;  // [bp-0x9c]
    unsigned int v23;  // [bp-0x98]
    unsigned int v24;  // [bp-0x94]
    unsigned int v25;  // [bp-0x90]
    unsigned int v26;  // [bp-0x8c]
    unsigned long v27;  // [bp-0x88]
    unsigned int v28[10];  // [bp-0x80]
    unsigned int v29;  // [bp-0x78]
    unsigned int v30;  // [bp-0x74]
    unsigned int v31;  // [bp-0x70]
    unsigned int v32;  // [bp-0x6c]
    unsigned int v33;  // [bp-0x68]
    unsigned int v34;  // [bp-0x64]
    unsigned int v35;  // [bp-0x60]
    unsigned int v36;  // [bp-0x5c]
    unsigned int v37;  // [bp-0x58]
    unsigned int v38;  // [bp-0x54]
    unsigned int v39;  // [bp-0x50]
    unsigned int v40;  // [bp-0x4c]
    unsigned int v41;  // [bp-0x48]
    unsigned int v42;  // [bp-0x44]
    unsigned int v43;  // [bp-0x40]
    unsigned int v44;  // [bp-0x3c]
    unsigned int v46[10];  // rdx
    unsigned int v47[10];  // rbx
    unsigned long long v48;  // r13
    unsigned long long v49;  // r12
    unsigned long long v50;  // r10
    unsigned long long v51;  // rbp
    unsigned long long v52;  // rdi
    unsigned int v53;  // edi
    unsigned long long v55;  // r9
    unsigned long long v56;  // rdx
    char v57;  // dil
    unsigned int v58;  // esi
    unsigned long long v59;  // r8
    unsigned long long v60;  // rax
    unsigned long long v62;  // rcx
    unsigned long long v63;  // r15
    unsigned long long v64;  // r14
    unsigned long long v65;  // r12
    unsigned int v66;  // esi
    unsigned long long v67;  // r9
    unsigned long long v68;  // r8
    unsigned long long v70;  // rcx
    unsigned int v71;  // eax
    unsigned int v74;  // ebx
    unsigned long long v75;  // rdx
    unsigned int v76;  // edi
    unsigned long long v77;  // rsi
    unsigned long long v78;  // r11
    unsigned long long v80;  // r9
    unsigned long long v81;  // r8
    unsigned long long v82;  // rax
    unsigned long long v83;  // rbx
    unsigned long long v84;  // rcx
    unsigned long long v85;  // rdi
    unsigned long long v86;  // rdx
    unsigned long long v88;  // rsi
    unsigned long long v89;  // r11
    unsigned long long v92;  // r10
    unsigned long long v93;  // rax
    unsigned long long v94;  // r9
    unsigned long long v95;  // rcx
    unsigned long long v96;  // rbp
    unsigned long long v97;  // r8
    unsigned long long v99;  // rsi
    unsigned long long v100;  // rdx
    unsigned long v101;  // rdi
    unsigned long long v102;  // rbx
    unsigned long long v103;  // r10
    unsigned long long v104;  // rsi
    unsigned long long v106;  // r9
    unsigned long long v107;  // rdi
    unsigned long long v109;  // r8
    unsigned long long v110;  // r14
    unsigned long long v111;  // rbx
    unsigned long long v112;  // rcx
    unsigned long long v113;  // r11
    unsigned long long v114;  // rsi
    unsigned long long v115;  // r13
    unsigned long long v116;  // rbp
    unsigned long long v117;  // rdx
    unsigned long long v118;  // r10
    unsigned long long v119;  // rax
    unsigned long long v120;  // r10
    unsigned long long v121;  // rdi
    unsigned long long v122;  // r13
    unsigned long v123;  // r9
    unsigned long long v125;  // r14
    unsigned long v126;  // cc_ndep
    unsigned long long v127;  // rbp
    unsigned long long v128;  // cc_dep1
    unsigned long v129;  // cc_dep2
    unsigned long long v131;  // r8
    unsigned long long v132;  // r12
    unsigned long v133;  // r8
    unsigned long long v134;  // rcx
    unsigned long long v135;  // rbp
    unsigned long long v136;  // rax
    unsigned long long v137;  // rdx
    unsigned long v138;  // cc_ndep
    unsigned long long v139;  // r15
    unsigned long v140;  // rsi
    unsigned long long v141;  // rbx
    unsigned long long v142;  // rbx
    unsigned long long v143;  // r13
    unsigned long long v144;  // rax
    unsigned long long v145;  // r14
    unsigned long v146;  // rdi
    unsigned long v148;  // cc_ndep
    unsigned long long v149;  // rsi
    unsigned long long v150;  // r12
    unsigned long long v151;  // rdi
    unsigned long long v152;  // rbp
    unsigned long long v153;  // rsi
    unsigned long long v155;  // r14
    unsigned long long v156;  // rdx
    unsigned long long v157;  // rcx
    unsigned long long v158;  // rbx
    unsigned long long v159;  // rcx
    unsigned long long v160;  // r13
    unsigned long long v161;  // rdx
    unsigned long long v162;  // r14
    unsigned long long v163;  // rax
    unsigned long long v164;  // r15
    unsigned long long v165;  // r12
    unsigned long long v166;  // rax
    unsigned long long v167;  // rbp
    unsigned long long v168;  // r15
    unsigned long long v169;  // rdi
    unsigned long long v170;  // r14
    unsigned long long v171;  // rbx
    unsigned long long v172;  // rsi
    unsigned long long v173;  // r15
    unsigned long long v174;  // r14
    unsigned long long v175;  // r13
    unsigned long v176;  // cc_ndep
    unsigned long v177;  // rdx
    unsigned long long v178;  // rcx
    unsigned long long v179;  // rcx
    unsigned long long v180;  // r14
    unsigned long long v181;  // rdx
    unsigned long long v182;  // r15
    unsigned long long v183;  // r12
    unsigned long v184;  // cc_ndep
    unsigned long long v185;  // rax
    unsigned long long v186;  // cc_dep2
    unsigned long long v187;  // rbp
    unsigned long long v188;  // rdi
    unsigned long long v189;  // rax
    unsigned long long v190;  // r15
    unsigned long long v191;  // rsi
    unsigned long long v192;  // r11
    unsigned long v193;  // cc_ndep
    unsigned long long v195;  // r12
    unsigned long long v196;  // rbx
    unsigned long long v197;  // rbp
    unsigned long long v198;  // r13
    unsigned long long v199;  // rcx
    unsigned long long v200;  // r10
    unsigned long long v201;  // r13
    unsigned long long v202;  // r14
    unsigned long long v203;  // rbp
    unsigned long long v204;  // r9
    unsigned long v205;  // cc_ndep
    unsigned long long v206;  // rdx
    unsigned long long v207;  // rbx
    unsigned long long v208;  // r12
    unsigned long long v209;  // rax
    unsigned long long v210;  // r8
    unsigned long long v211;  // r13
    unsigned long long v212;  // rdx
    unsigned long long v213;  // r11
    unsigned long v214;  // cc_ndep
    unsigned long v215;  // rsi
    unsigned long long v216;  // rbx
    unsigned long long v217;  // rbx
    unsigned long long v218;  // r14
    unsigned long long v219;  // r10
    unsigned long long v220;  // r15
    unsigned long long v221;  // r12
    unsigned long long v222;  // rsi
    unsigned long long v223;  // rbp
    unsigned long long v224;  // rcx
    unsigned long v226;  // cc_ndep
    unsigned long long v227;  // rdx
    unsigned long long v228;  // r9
    unsigned long long v229;  // rdi
    unsigned long long v230;  // r14
    unsigned long long v231;  // r8
    unsigned long long v232;  // rsi
    unsigned long v233;  // cc_ndep
    unsigned long long v234;  // r12
    unsigned long long v235;  // rbp
    unsigned int v236;  // r13d
    unsigned long long v237;  // rax
    unsigned long long v238;  // rcx
    unsigned long long v239;  // rdx
    unsigned long long v240;  // r11
    unsigned long long v241;  // rbx
    unsigned long long v242;  // r11
    unsigned long long v243;  // rbp
    unsigned long long v244;  // r14
    unsigned long long v245;  // r15
    unsigned long long v246;  // r10
    unsigned long v247;  // cc_ndep
    unsigned long long v248;  // rax
    unsigned long long v249;  // rcx
    unsigned long v251;  // r12
    unsigned long long v252;  // rdx
    unsigned long long v253;  // r13
    unsigned long long v254;  // rbp
    unsigned long long v255;  // r9
    unsigned long long v256;  // r12
    unsigned long long v257;  // rdi
    unsigned long long v258;  // r14
    unsigned long long v260;  // rax
    unsigned long v261;  // cc_ndep
    unsigned long v262;  // rsi
    unsigned long long v263;  // rdx
    unsigned long long v264;  // r8
    unsigned long long v265;  // rdx
    unsigned long long v266;  // rbx
    unsigned long long v267;  // r8
    unsigned long long v268;  // rcx
    unsigned int v269;  // r12d
    unsigned long long v270;  // r15
    unsigned long long v271;  // rdi
    unsigned long v273;  // r13
    unsigned long v274;  // cc_ndep
    unsigned long long v275;  // rsi
    unsigned long long v276;  // r11
    unsigned long long v277;  // r13
    unsigned long long v278;  // rbx
    unsigned long long v279;  // rsi
    unsigned long long v280;  // r14
    unsigned long long v281;  // r9
    unsigned long long v282;  // rdi
    unsigned long long v283;  // r15
    unsigned long long v284;  // rbp
    unsigned long long v285;  // rdx
    unsigned long long v286;  // rax
    unsigned long long v287;  // rbx
    unsigned long long v288;  // rcx
    unsigned long long v289;  // r10
    unsigned long long v292;  // r15
    unsigned long long v293;  // r12
    unsigned long long v294;  // r13
    unsigned long long v295;  // r9
    unsigned long long v296;  // rbp
    unsigned long long v297;  // r11
    unsigned long long v298;  // rbx
    unsigned long long v299;  // rsi
    unsigned long long v300;  // r14
    unsigned long v301;  // rdi
    unsigned long long v302;  // r8
    unsigned long long v303;  // r8
    unsigned long long v304;  // rbx
    unsigned long long v305;  // rax
    unsigned long long v306;  // rdi
    unsigned long long v307;  // r11
    unsigned long long v308;  // r15
    unsigned long long v309;  // rdx
    unsigned long v310;  // cc_ndep
    unsigned long v311;  // rcx
    unsigned long long v312;  // r10
    unsigned long long v313;  // rsi
    unsigned long long v314;  // r9
    unsigned long long v315;  // rcx
    unsigned long long v316;  // r14
    unsigned long long v317;  // r15
    unsigned long long v318;  // r13
    unsigned long v319;  // cc_ndep
    unsigned long v320;  // rdx
    unsigned long long v321;  // r8
    unsigned long long v322;  // rdx
    unsigned long long v323;  // rdi
    unsigned long long v324;  // rax
    unsigned long long v325;  // r14
    unsigned long v326;  // cc_ndep
    unsigned long long v327;  // r13
    unsigned long long v328;  // r15
    unsigned long long v329;  // rsi
    unsigned long long v330;  // r10
    unsigned long long v331;  // rbp
    unsigned long long v332;  // rcx
    unsigned long long v333;  // r9
    unsigned long v334;  // cc_ndep
    unsigned long long v335;  // rbx
    unsigned long long v336;  // rdx
    unsigned long long v337;  // r14
    unsigned long long v338;  // r12
    unsigned long long v341;  // rax
    unsigned long v343;  // r8
    unsigned long long v344;  // r14
    unsigned long v345;  // rdi
    unsigned long long v346;  // r10
    unsigned int v347;  // ebx
    unsigned long v348;  // rsi
    unsigned long long v350;  // r11
    unsigned int v351;  // r9d
    unsigned int v352;  // r11d
    unsigned long long v353;  // r14
    unsigned int v354;  // r12d
    unsigned int v355;  // ecx
    unsigned int v357;  // edx
    unsigned int v358;  // esi
    unsigned int v359;  // eax
    unsigned int v360;  // edx

    v47 = v46;
    v48 = v46[1];
    v49 = v46[1 + 1];
    v50 = v46[2];
    v51 = v46[2 + 1];
    v14 = v52;
    v53 = 0;
    tmp_109 = v46[4];
    tmp_110 = v58 + v46[4];
    v55 = v46[3];
    *((unsigned int *[10])&v28[0]) = v46;
    v56 = v46[0];
    v57 = [D] amd64g_calculate_condition(0x2<64>, 0x3<64>, rsi<8>, t109, cc_ndep<8>);
    v47[4] = tmp_110;
    v58 = v58 % 0x100000000;
    v59 = v47[3 + 1];
    v27 = (v58 & -4) + v52;
    v60 = v47[1];
    v47[4 + 1] = v47[4 + 1] + v58 + rdi<4>;
    if (v52 < v27)
    {
        v22 = v47[3 + 1];
        v21 = v55;
        v20 = v51;
        v19 = v50;
        v18 = v49;
        v17 = v48;
        v16 = v47[1];
        v26 = v56;
        do
        {
            v62 = 0;
            do
            {
                v29 = *((int *)(v14 + v62)) * 0x1000000 | *((int *)(v14 + v62)) * 0x100 & 0xff0000 | *((int *)(v14 + v62)) >> 8 & 0xff00 | *((int *)(v14 + v62)) >> 24 & 255;
                v62 += 4;
            }
            while (v62 != 64);
            v14 += 64;
            v63 = v31;
            tmp_367 = (unsigned int)(v29 + v59 + 1116352408) + (((unsigned int)v50 * 128 | (unsigned int)v50 >> 25) ^ ((unsigned int)v50 >> 11 | (unsigned int)v50 * 0x200000) ^ ((unsigned int)v50 >> 6 | (unsigned int)v50 * 0x4000000));
            tmp_379 = ((unsigned int)v51 ^ (unsigned int)v55) & (unsigned int)v50 ^ (unsigned int)v55;
            v64 = (unsigned int)(v29 + v59 + 1116352408) + (((unsigned int)v50 * 128 | (unsigned int)v50 >> 25) ^ ((unsigned int)v50 >> 11 | (unsigned int)v50 * 0x200000) ^ ((unsigned int)v50 >> 6 | (unsigned int)v50 * 0x4000000)) + (((unsigned int)v51 ^ (unsigned int)v55) & (unsigned int)v50 ^ (unsigned int)v55) + v18;
            v65 = v30;
            v66 = ((v26 | (unsigned int)v60) & v17 | v26 & (unsigned int)v60) + ((v26 >> 13 | v26 * 0x80000) ^ (v26 >> 2 | v26 * 0x40000000) ^ (v26 * 0x400 | v26 >> 22)) + (unsigned int)(v29 + v59 + 1116352408) + (((unsigned int)v50 * 128 | (unsigned int)v50 >> 25) ^ ((unsigned int)v50 >> 11 | (unsigned int)v50 * 0x200000) ^ ((unsigned int)v50 >> 6 | (unsigned int)v50 * 0x4000000)) + (((unsigned int)v51 ^ (unsigned int)v55) & (unsigned int)v50 ^ (unsigned int)v55);
            tmp_646 = (((unsigned int)v64 * 128 | (unsigned int)v64 >> 25) ^ ((unsigned int)v64 >> 11 | (unsigned int)v64 * 0x200000) ^ ((unsigned int)v64 >> 6 | (unsigned int)v64 * 0x4000000)) + (unsigned int)(v65 + v55 + 1899447441) + (((unsigned int)v50 ^ (unsigned int)v51) & (unsigned int)v64 ^ (unsigned int)v51);
            v67 = (((unsigned int)v64 * 128 | (unsigned int)v64 >> 25) ^ ((unsigned int)v64 >> 11 | (unsigned int)v64 * 0x200000) ^ ((unsigned int)v64 >> 6 | (unsigned int)v64 * 0x4000000)) + (unsigned int)(v65 + v55 + 1899447441) + (((unsigned int)v50 ^ (unsigned int)v51) & (unsigned int)v64 ^ (unsigned int)v51) + v17;
            v68 = ...;
            v70 = (((unsigned int)(tmp_646 + (unsigned long long)v17) * 128 | (unsigned int)(tmp_646 + (unsigned long long)v17) >> 25) ^ ((unsigned int)(tmp_646 + (unsigned long long)v17) >> 11 | (unsigned int)(tmp_646 + (unsigned long long)v17) * 0x200000) ^ ((unsigned int)(tmp_646 + (unsigned long long)v17) >> 6 | (unsigned int)(tmp_646 + (unsigned long long)v17) * 0x4000000)) + (unsigned int)(v63 + v51 - 1245643825) + (((unsigned int)v64 ^ (unsigned int)v50) & (unsigned int)(tmp_646 + (unsigned long long)v17) ^ (unsigned int)v50) + v60;
            v71 = ...;
            v74 = ((v66 | (unsigned int)v68) & v26 | v66 & (unsigned int)v68) + v71 + (((unsigned int)(tmp_646 + (unsigned long long)v17) * 128 | (unsigned int)(tmp_646 + (unsigned long long)v17) >> 25) ^ ((unsigned int)(tmp_646 + (unsigned long long)v17) >> 11 | (unsigned int)(tmp_646 + (unsigned long long)v17) * 0x200000) ^ ((unsigned int)(tmp_646 + (unsigned long long)v17) >> 6 | (unsigned int)(tmp_646 + (unsigned long long)v17) * 0x4000000)) + (unsigned int)(v63 + v51 - 1245643825) + (((unsigned int)v64 ^ (unsigned int)v50) & (unsigned int)(tmp_646 + (unsigned long long)v17) ^ (unsigned int)v50);
            v75 = v26 + (((unsigned int)v70 * 128 | (unsigned int)v70 >> 25) ^ ((unsigned int)v70 >> 11 | (unsigned int)v70 * 0x200000) ^ ((unsigned int)v70 >> 6 | (unsigned int)v70 * 0x4000000)) + (unsigned int)(v50 + v32 - 373957723) + (((unsigned int)v64 ^ (unsigned int)v67) & (unsigned int)v70 ^ (unsigned int)v64);
            v76 = (((unsigned int)v68 | v74) & v66 | (unsigned int)v68 & rbx<8>) + (((unsigned int)rbx<8> >> 13 | (unsigned int)rbx<8> * 0x80000) ^ ((unsigned int)rbx<8> >> 2 | (unsigned int)rbx<8> * 0x40000000) ^ ((unsigned int)rbx<8> * 0x400 | (unsigned int)rbx<8> >> 22)) + (((unsigned int)v70 * 128 | (unsigned int)v70 >> 25) ^ ((unsigned int)v70 >> 11 | (unsigned int)v70 * 0x200000) ^ ((unsigned int)v70 >> 6 | (unsigned int)v70 * 0x4000000)) + (unsigned int)(v50 + v32 - 373957723) + (((unsigned int)v64 ^ (unsigned int)v67) & (unsigned int)v70 ^ (unsigned int)v64);
            v77 = v66 + (((unsigned int)v75 * 128 | (unsigned int)v75 >> 25) ^ ((unsigned int)v75 >> 11 | (unsigned int)v75 * 0x200000) ^ ((unsigned int)v75 >> 6 | (unsigned int)v75 * 0x4000000)) + (unsigned int)(v33 + v64 + 961987163) + (((unsigned int)v67 ^ (unsigned int)v70) & (unsigned int)v75 ^ (unsigned int)v67);
            v78 = ((v74 | v76) & (unsigned int)v68 | rbx<8> & (unsigned int)rdi<8>) + (((unsigned int)rdi<8> >> 13 | (unsigned int)rdi<8> * 0x80000) ^ ((unsigned int)rdi<8> >> 2 | (unsigned int)rdi<8> * 0x40000000) ^ ((unsigned int)rdi<8> * 0x400 | (unsigned int)rdi<8> >> 22)) + (((unsigned int)v75 * 128 | (unsigned int)v75 >> 25) ^ ((unsigned int)v75 >> 11 | (unsigned int)v75 * 0x200000) ^ ((unsigned int)v75 >> 6 | (unsigned int)v75 * 0x4000000)) + (unsigned int)(v33 + v64 + 961987163) + (((unsigned int)v67 ^ (unsigned int)v70) & (unsigned int)v75 ^ (unsigned int)v67);
            v80 = (((unsigned int)v77 * 128 | (unsigned int)v77 >> 25) ^ ((unsigned int)v77 >> 11 | (unsigned int)v77 * 0x200000) ^ ((unsigned int)v77 >> 6 | (unsigned int)v77 * 0x4000000)) + (((unsigned int)v70 ^ (unsigned int)v75) & (unsigned int)v77 ^ (unsigned int)v70) + (unsigned int)(v34 + v67 + 1508970993);
            v81 = v68 + v80;
            v82 = ((v76 | (unsigned int)v78) & v74 | v76 & ((v74 | rdi<8>) & (unsigned int)v68 | rbx<8> & (unsigned int)rdi<8>) + (((unsigned int)rdi<8> >> 13 | (unsigned int)rdi<8> * 0x80000) ^ ((unsigned int)rdi<8> >> 2 | (unsigned int)rdi<8> * 0x40000000) ^ ((unsigned int)rdi<8> * 0x400 | (unsigned int)rdi<8> >> 22)) + (((unsigned int)v75 * 128 | (unsigned int)v75 >> 25) ^ ((unsigned int)v75 >> 11 | (unsigned int)v75 * 0x200000) ^ ((unsigned int)v75 >> 6 | (unsigned int)v75 * 0x4000000)) + (unsigned int)(v33 + v64 + 961987163) + (((unsigned int)v67 ^ (unsigned int)v70) & (unsigned int)v75 ^ (unsigned int)v67)) + (((unsigned int)v78 >> 13 | (unsigned int)v78 * 0x80000) ^ ((unsigned int)v78 >> 2 | (unsigned int)v78 * 0x40000000) ^ ((unsigned int)v78 * 0x400 | (unsigned int)v78 >> 22)) + (unsigned int)v80;
            v83 = v74 + (((unsigned int)v81 * 128 | (unsigned int)v81 >> 25) ^ ((unsigned int)v81 >> 11 | (unsigned int)v81 * 0x200000) ^ ((unsigned int)v81 >> 6 | (unsigned int)v81 * 0x4000000)) + (unsigned int)(v35 + v70 - 1841331548) + (((unsigned int)v75 ^ (unsigned int)v77) & (unsigned int)v81 ^ (unsigned int)v75);
            v84 = (((unsigned int)v78 | (unsigned int)v82) & v76 | (unsigned int)v78 & (unsigned int)v82) + (((unsigned int)v82 >> 13 | (unsigned int)v82 * 0x80000) ^ ((unsigned int)v82 >> 2 | (unsigned int)v82 * 0x40000000) ^ ((unsigned int)v82 * 0x400 | (unsigned int)v82 >> 22)) + (((unsigned int)v81 * 128 | (unsigned int)v81 >> 25) ^ ((unsigned int)v81 >> 11 | (unsigned int)v81 * 0x200000) ^ ((unsigned int)v81 >> 6 | (unsigned int)v81 * 0x4000000)) + (unsigned int)(v35 + v70 - 1841331548) + (((unsigned int)v75 ^ (unsigned int)v77) & (unsigned int)v81 ^ (unsigned int)v75);
            v85 = v76 + (((unsigned int)v83 * 128 | (unsigned int)v83 >> 25) ^ ((unsigned int)v83 >> 11 | (unsigned int)v83 * 0x200000) ^ ((unsigned int)v83 >> 6 | (unsigned int)v83 * 0x4000000)) + (unsigned int)(v36 + v75 - 1424204075) + (((unsigned int)v77 ^ (unsigned int)v81) & (unsigned int)v83 ^ (unsigned int)v77);
            v86 = (((unsigned int)v82 | (unsigned int)v84) & (unsigned int)v78 | (unsigned int)v82 & (unsigned int)v84) + (((unsigned int)v84 >> 13 | (unsigned int)v84 * 0x80000) ^ ((unsigned int)v84 >> 2 | (unsigned int)v84 * 0x40000000) ^ ((unsigned int)v84 * 0x400 | (unsigned int)v84 >> 22)) + (((unsigned int)v83 * 128 | (unsigned int)v83 >> 25) ^ ((unsigned int)v83 >> 11 | (unsigned int)v83 * 0x200000) ^ ((unsigned int)v83 >> 6 | (unsigned int)v83 * 0x4000000)) + (unsigned int)(v36 + v75 - 1424204075) + (((unsigned int)v77 ^ (unsigned int)v81) & (unsigned int)v83 ^ (unsigned int)v77);
            v88 = (((unsigned int)v85 * 128 | (unsigned int)v85 >> 25) ^ ((unsigned int)v85 >> 11 | (unsigned int)v85 * 0x200000) ^ ((unsigned int)v85 >> 6 | (unsigned int)v85 * 0x4000000)) + (((unsigned int)v81 ^ (unsigned int)v83) & (unsigned int)v85 ^ (unsigned int)v81) + (unsigned int)(v37 + v77 - 670586216);
            v89 = v78 + v88;
            v92 = (((unsigned int)v84 | (unsigned int)v86) & (unsigned int)v82 | (unsigned int)v84 & (unsigned int)v86) + (((unsigned int)v86 >> 13 | (unsigned int)v86 * 0x80000) ^ ((unsigned int)v86 >> 2 | (unsigned int)v86 * 0x40000000) ^ ((unsigned int)v86 * 0x400 | (unsigned int)v86 >> 22)) + (unsigned int)v88;
            v93 = (unsigned int)v82 + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83);
            v94 = (((unsigned int)v86 | (unsigned int)v92) & (unsigned int)v84 | (unsigned int)v86 & (unsigned int)v92) + (((unsigned int)v92 >> 13 | (unsigned int)v92 * 0x80000) ^ ((unsigned int)v92 >> 2 | (unsigned int)v92 * 0x40000000) ^ ((unsigned int)v92 * 0x400 | (unsigned int)v92 >> 22)) + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83);
            tmp_692 = (unsigned int)v92 & (((unsigned int)v86 | (unsigned int)v92) & (unsigned int)v84 | (unsigned int)v86 & (unsigned int)v92) + (((unsigned int)v92 >> 13 | (unsigned int)v92 * 0x80000) ^ ((unsigned int)v92 >> 2 | (unsigned int)v92 * 0x40000000) ^ ((unsigned int)v92 * 0x400 | (unsigned int)v92 >> 22)) + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83);
            tmp_742 = ((((unsigned int)v86 | (unsigned int)v92) & (unsigned int)v84 | (unsigned int)v86 & (unsigned int)v92) + (((unsigned int)v92 >> 13 | (unsigned int)v92 * 0x80000) ^ ((unsigned int)v92 >> 2 | (unsigned int)v92 * 0x40000000) ^ ((unsigned int)v92 * 0x400 | (unsigned int)v92 >> 22)) + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83) >> 13 | ((((unsigned int)v86 | (unsigned int)v92) & (unsigned int)v84 | (unsigned int)v86 & (unsigned int)v92) + (((unsigned int)v92 >> 13 | (unsigned int)v92 * 0x80000) ^ ((unsigned int)v92 >> 2 | (unsigned int)v92 * 0x40000000) ^ ((unsigned int)v92 * 0x400 | (unsigned int)v92 >> 22)) + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83)) * 0x80000) ^ ((((unsigned int)v86 | (unsigned int)v92) & (unsigned int)v84 | (unsigned int)v86 & (unsigned int)v92) + (((unsigned int)v92 >> 13 | (unsigned int)v92 * 0x80000) ^ ((unsigned int)v92 >> 2 | (unsigned int)v92 * 0x40000000) ^ ((unsigned int)v92 * 0x400 | (unsigned int)v92 >> 22)) + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83) >> 2 | ((((unsigned int)v86 | (unsigned int)v92) & (unsigned int)v84 | (unsigned int)v86 & (unsigned int)v92) + (((unsigned int)v92 >> 13 | (unsigned int)v92 * 0x80000) ^ ((unsigned int)v92 >> 2 | (unsigned int)v92 * 0x40000000) ^ ((unsigned int)v92 * 0x400 | (unsigned int)v92 >> 22)) + (((unsigned int)v89 * 128 | (unsigned int)v89 >> 25) ^ ((unsigned int)v89 >> 11 | (unsigned int)v89 * 0x200000) ^ ((unsigned int)v89 >> 6 | (unsigned int)v89 * 0x4000000)) + (unsigned int)(v38 + v81 + 310598401) + (((unsigned int)v83 ^ (unsigned int)v85) & (unsigned int)v89 ^ (unsigned int)v83)) * 0x40000000);
            v95 = (unsigned int)v84 + (((unsigned int)v93 * 128 | (unsigned int)v93 >> 25) ^ ((unsigned int)v93 >> 11 | (unsigned int)v93 * 0x200000) ^ ((unsigned int)v93 >> 6 | (unsigned int)v93 * 0x4000000)) + (unsigned int)(v39 + v83 + 607225278) + (((unsigned int)v85 ^ (unsigned int)v89) & (unsigned int)v93 ^ (unsigned int)v85);
            v96 = v94;
            v97 = (((unsigned int)v92 | (unsigned int)v94) & (unsigned int)v86 | (unsigned int)tmp_692) + ((unsigned int)tmp_742 ^ ((unsigned int)v94 * 0x400 | (unsigned int)v94 >> 22)) + (((unsigned int)v93 * 128 | (unsigned int)v93 >> 25) ^ ((unsigned int)v93 >> 11 | (unsigned int)v93 * 0x200000) ^ ((unsigned int)v93 >> 6 | (unsigned int)v93 * 0x4000000)) + (unsigned int)(v39 + v83 + 607225278) + (((unsigned int)v85 ^ (unsigned int)v89) & (unsigned int)v93 ^ (unsigned int)v85);
            v99 = (((unsigned int)v95 * 128 | (unsigned int)v95 >> 25) ^ ((unsigned int)v95 >> 11 | (unsigned int)v95 * 0x200000) ^ ((unsigned int)v95 >> 6 | (unsigned int)v95 * 0x4000000)) + (unsigned int)(v40 + v85 + 1426881987) + (((unsigned int)v89 ^ (unsigned int)v93) & (unsigned int)v95 ^ (unsigned int)v89);
            tmp_994 = (((unsigned int)v92 | (unsigned int)v94) & (unsigned int)v86 | (unsigned int)tmp_692) + ((unsigned int)tmp_742 ^ ((unsigned int)v94 * 0x400 | (unsigned int)v94 >> 22)) + (((unsigned int)v93 * 128 | (unsigned int)v93 >> 25) ^ ((unsigned int)v93 >> 11 | (unsigned int)v93 * 0x200000) ^ ((unsigned int)v93 >> 6 | (unsigned int)v93 * 0x4000000)) + (unsigned int)(v39 + v83 + 607225278) + (((unsigned int)v85 ^ (unsigned int)v89) & (unsigned int)v93 ^ (unsigned int)v85) >> 2 | ((((unsigned int)v92 | (unsigned int)v94) & (unsigned int)v86 | (unsigned int)tmp_692) + ((unsigned int)tmp_742 ^ ((unsigned int)v94 * 0x400 | (unsigned int)v94 >> 22)) + (((unsigned int)v93 * 128 | (unsigned int)v93 >> 25) ^ ((unsigned int)v93 >> 11 | (unsigned int)v93 * 0x200000) ^ ((unsigned int)v93 >> 6 | (unsigned int)v93 * 0x4000000)) + (unsigned int)(v39 + v83 + 607225278) + (((unsigned int)v85 ^ (unsigned int)v89) & (unsigned int)v93 ^ (unsigned int)v85)) * 0x40000000;
            v100 = (unsigned int)v86 + (((unsigned int)v95 * 128 | (unsigned int)v95 >> 25) ^ ((unsigned int)v95 >> 11 | (unsigned int)v95 * 0x200000) ^ ((unsigned int)v95 >> 6 | (unsigned int)v95 * 0x4000000)) + (unsigned int)(v40 + v85 + 1426881987) + (((unsigned int)v89 ^ (unsigned int)v93) & (unsigned int)v95 ^ (unsigned int)v89);
            v101 = ((unsigned int)v97 >> 13 | (unsigned int)v97 * 0x80000) ^ (unsigned int)tmp_994 ^ (((((unsigned int)v92 | (unsigned int)v94) & (unsigned int)v86 | (unsigned int)tmp_692) + ((unsigned int)tmp_742 ^ ((unsigned int)v94 * 0x400 | (unsigned int)v94 >> 22)) + (((unsigned int)v93 * 128 | (unsigned int)v93 >> 25) ^ ((unsigned int)v93 >> 11 | (unsigned int)v93 * 0x200000) ^ ((unsigned int)v93 >> 6 | (unsigned int)v93 * 0x4000000)) + (unsigned int)(v39 + v83 + 607225278) + (((unsigned int)v85 ^ (unsigned int)v89) & (unsigned int)v93 ^ (unsigned int)v85)) * 0x400 | (((unsigned int)v92 | (unsigned int)v94) & (unsigned int)v86 | (unsigned int)tmp_692) + ((unsigned int)tmp_742 ^ ((unsigned int)v94 * 0x400 | (unsigned int)v94 >> 22)) + (((unsigned int)v93 * 128 | (unsigned int)v93 >> 25) ^ ((unsigned int)v93 >> 11 | (unsigned int)v93 * 0x200000) ^ ((unsigned int)v93 >> 6 | (unsigned int)v93 * 0x4000000)) + (unsigned int)(v39 + v83 + 607225278) + (((unsigned int)v85 ^ (unsigned int)v89) & (unsigned int)v93 ^ (unsigned int)v85) >> 22);
            v102 = (((unsigned int)v94 | (unsigned int)v97) & (unsigned int)v92 | (unsigned int)v96 & (unsigned int)v97) + (unsigned int)v101 + (unsigned int)v99;
            tmp_326 = (unsigned int)v97 & (((unsigned int)v94 | (unsigned int)v97) & (unsigned int)v92 | (unsigned int)v96 & (unsigned int)v97) + (unsigned int)v101 + (unsigned int)v99;
            tmp_464 = (((unsigned int)v94 | (unsigned int)v97) & (unsigned int)v92 | (unsigned int)v96 & (unsigned int)v97) + (unsigned int)v101 + (unsigned int)v99 >> 2 | ((((unsigned int)v94 | (unsigned int)v97) & (unsigned int)v92 | (unsigned int)v96 & (unsigned int)v97) + (unsigned int)v101 + (unsigned int)v99) * 0x40000000;
            tmp_485 = (((unsigned int)v94 | (unsigned int)v97) & (unsigned int)v92 | (unsigned int)v96 & (unsigned int)v97) + (unsigned int)v101 + (unsigned int)v99 >> 13 | ((((unsigned int)v94 | (unsigned int)v97) & (unsigned int)v92 | (unsigned int)v96 & (unsigned int)v97) + (unsigned int)v101 + (unsigned int)v99) * 0x80000;
            v103 = (unsigned int)v92 + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93);
            v104 = (((unsigned int)v97 | (unsigned int)v102) & (unsigned int)v94 | (unsigned int)tmp_326) + ((unsigned int)tmp_485 ^ (unsigned int)tmp_464 ^ ((unsigned int)v102 * 0x400 | (unsigned int)v102 >> 22)) + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93);
            tmp_729 = (((unsigned int)v97 | (unsigned int)v102) & (unsigned int)v94 | (unsigned int)tmp_326) + ((unsigned int)tmp_485 ^ (unsigned int)tmp_464 ^ ((unsigned int)v102 * 0x400 | (unsigned int)v102 >> 22)) + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93) >> 2 | ((((unsigned int)v97 | (unsigned int)v102) & (unsigned int)v94 | (unsigned int)tmp_326) + ((unsigned int)tmp_485 ^ (unsigned int)tmp_464 ^ ((unsigned int)v102 * 0x400 | (unsigned int)v102 >> 22)) + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93)) * 0x40000000;
            tmp_750 = (((unsigned int)v97 | (unsigned int)v102) & (unsigned int)v94 | (unsigned int)tmp_326) + ((unsigned int)tmp_485 ^ (unsigned int)tmp_464 ^ ((unsigned int)v102 * 0x400 | (unsigned int)v102 >> 22)) + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93) >> 13 | ((((unsigned int)v97 | (unsigned int)v102) & (unsigned int)v94 | (unsigned int)tmp_326) + ((unsigned int)tmp_485 ^ (unsigned int)tmp_464 ^ ((unsigned int)v102 * 0x400 | (unsigned int)v102 >> 22)) + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93)) * 0x80000;
            v106 = (unsigned int)v94 + (((unsigned int)v103 * 128 | (unsigned int)v103 >> 25) ^ ((unsigned int)v103 >> 11 | (unsigned int)v103 * 0x200000) ^ ((unsigned int)v103 >> 6 | (unsigned int)v103 * 0x4000000)) + (((unsigned int)v95 ^ (unsigned int)v100) & (unsigned int)v103 ^ (unsigned int)v95) + (unsigned int)(v42 + v93 - 2132889090);
            v107 = (((unsigned int)v102 | (unsigned int)v104) & (unsigned int)v97 | (unsigned int)v102 & (((unsigned int)v97 | (unsigned int)v102) & (unsigned int)v94 | (unsigned int)tmp_326) + ((unsigned int)tmp_485 ^ (unsigned int)tmp_464 ^ ((unsigned int)v102 * 0x400 | (unsigned int)v102 >> 22)) + (((unsigned int)v100 * 128 | (unsigned int)v100 >> 25) ^ ((unsigned int)v100 >> 11 | (unsigned int)v100 * 0x200000) ^ ((unsigned int)v100 >> 6 | (unsigned int)v100 * 0x4000000)) + (unsigned int)(v41 + v89 + 1925078388) + (((unsigned int)v93 ^ (unsigned int)v95) & (unsigned int)v100 ^ (unsigned int)v93)) + ((unsigned int)tmp_750 ^ (unsigned int)tmp_729 ^ ((unsigned int)v104 * 0x400 | (unsigned int)v104 >> 22)) + (((unsigned int)v103 * 128 | (unsigned int)v103 >> 25) ^ ((unsigned int)v103 >> 11 | (unsigned int)v103 * 0x200000) ^ ((unsigned int)v103 >> 6 | (unsigned int)v103 * 0x4000000)) + (((unsigned int)v95 ^ (unsigned int)v100) & (unsigned int)v103 ^ (unsigned int)v95) + (unsigned int)(v42 + v93 - 2132889090);
            v109 = (unsigned int)v97 + (((unsigned int)v106 * 128 | (unsigned int)v106 >> 25) ^ ((unsigned int)v106 >> 11 | (unsigned int)v106 * 0x200000) ^ ((unsigned int)v106 >> 6 | (unsigned int)v106 * 0x4000000)) + (unsigned int)(v43 + v95 - 1680079193) + (((unsigned int)v100 ^ (unsigned int)v103) & (unsigned int)v106 ^ (unsigned int)v100);
            v110 = (((unsigned int)v104 | (unsigned int)v107) & (unsigned int)v102 | (unsigned int)v104 & (unsigned int)v107) + (((unsigned int)v107 >> 13 | (unsigned int)v107 * 0x80000) ^ ((unsigned int)v107 >> 2 | (unsigned int)v107 * 0x40000000) ^ ((unsigned int)v107 * 0x400 | (unsigned int)v107 >> 22)) + (((unsigned int)v106 * 128 | (unsigned int)v106 >> 25) ^ ((unsigned int)v106 >> 11 | (unsigned int)v106 * 0x200000) ^ ((unsigned int)v106 >> 6 | (unsigned int)v106 * 0x4000000)) + (unsigned int)(v43 + v95 - 1680079193) + (((unsigned int)v100 ^ (unsigned int)v103) & (unsigned int)v106 ^ (unsigned int)v100);
            v111 = (unsigned int)v102 + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103);
            v112 = (((unsigned int)v107 | (unsigned int)v110) & (unsigned int)v104 | (unsigned int)v107 & (unsigned int)v110) + (((unsigned int)v110 >> 13 | (unsigned int)v110 * 0x80000) ^ ((unsigned int)v110 >> 2 | (unsigned int)v110 * 0x40000000) ^ ((unsigned int)v110 * 0x400 | (unsigned int)v110 >> 22)) + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103);
            tmp_674 = (unsigned int)v110 & (((unsigned int)v107 | (unsigned int)v110) & (unsigned int)v104 | (unsigned int)v107 & (unsigned int)v110) + (((unsigned int)v110 >> 13 | (unsigned int)v110 * 0x80000) ^ ((unsigned int)v110 >> 2 | (unsigned int)v110 * 0x40000000) ^ ((unsigned int)v110 * 0x400 | (unsigned int)v110 >> 22)) + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103);
            v113 = (((unsigned int)v65 * 0x4000 | (unsigned int)v65 >> 18) ^ ((unsigned int)v65 >> 7 | (unsigned int)v65 * 0x2000000) ^ (unsigned int)v65 % 8) + ((unsigned int)((unsigned long long)v43 >> 10) ^ (v43 * 0x2000 | v43 >> 19) ^ (v43 * 0x8000 | v43 >> 17)) + v29 + v38;
            tmp_923 = (((unsigned int)v107 | (unsigned int)v110) & (unsigned int)v104 | (unsigned int)v107 & (unsigned int)v110) + (((unsigned int)v110 >> 13 | (unsigned int)v110 * 0x80000) ^ ((unsigned int)v110 >> 2 | (unsigned int)v110 * 0x40000000) ^ ((unsigned int)v110 * 0x400 | (unsigned int)v110 >> 22)) + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103) >> 2 | ((((unsigned int)v107 | (unsigned int)v110) & (unsigned int)v104 | (unsigned int)v107 & (unsigned int)v110) + (((unsigned int)v110 >> 13 | (unsigned int)v110 * 0x80000) ^ ((unsigned int)v110 >> 2 | (unsigned int)v110 * 0x40000000) ^ ((unsigned int)v110 * 0x400 | (unsigned int)v110 >> 22)) + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103)) * 0x40000000;
            tmp_944 = (((unsigned int)v107 | (unsigned int)v110) & (unsigned int)v104 | (unsigned int)v107 & (unsigned int)v110) + (((unsigned int)v110 >> 13 | (unsigned int)v110 * 0x80000) ^ ((unsigned int)v110 >> 2 | (unsigned int)v110 * 0x40000000) ^ ((unsigned int)v110 * 0x400 | (unsigned int)v110 >> 22)) + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103) >> 13 | ((((unsigned int)v107 | (unsigned int)v110) & (unsigned int)v104 | (unsigned int)v107 & (unsigned int)v110) + (((unsigned int)v110 >> 13 | (unsigned int)v110 * 0x80000) ^ ((unsigned int)v110 >> 2 | (unsigned int)v110 * 0x40000000) ^ ((unsigned int)v110 * 0x400 | (unsigned int)v110 >> 22)) + (((unsigned int)v109 * 128 | (unsigned int)v109 >> 25) ^ ((unsigned int)v109 >> 11 | (unsigned int)v109 * 0x200000) ^ ((unsigned int)v109 >> 6 | (unsigned int)v109 * 0x4000000)) + (unsigned int)(v44 + v100 - 1046744716) + (((unsigned int)v103 ^ (unsigned int)v106) & (unsigned int)v109 ^ (unsigned int)v103)) * 0x80000;
            v114 = (unsigned int)v104 + (((unsigned int)v111 * 128 | (unsigned int)v111 >> 25) ^ ((unsigned int)v111 >> 11 | (unsigned int)v111 * 0x200000) ^ ((unsigned int)v111 >> 6 | (unsigned int)v111 * 0x4000000)) + (unsigned int)(v103 + v113 - 459576895) + (((unsigned int)v106 ^ (unsigned int)v109) & (unsigned int)v111 ^ (unsigned int)v106);
            v115 = v114;
            v116 = v39;
            v117 = (((unsigned int)v110 | (unsigned int)v112) & (unsigned int)v107 | (unsigned int)tmp_674) + ((unsigned int)tmp_944 ^ (unsigned int)tmp_923 ^ ((unsigned int)v112 * 0x400 | (unsigned int)v112 >> 22)) + (((unsigned int)v111 * 128 | (unsigned int)v111 >> 25) ^ ((unsigned int)v111 >> 11 | (unsigned int)v111 * 0x200000) ^ ((unsigned int)v111 >> 6 | (unsigned int)v111 * 0x4000000)) + (unsigned int)(v103 + v113 - 459576895) + (((unsigned int)v106 ^ (unsigned int)v109) & (unsigned int)v111 ^ (unsigned int)v106);
            v118 = v44 * 0x8000 | v44 >> 17;
            v119 = v44 * 0x2000 | v44 >> 19;
            tmp_282 = v116 + v65;
            tmp_377 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Conv(64->32, r15<8>) >> 0x7<8>) | (Conv(64->32, r15<8>) << 0x19<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v120 = (((unsigned int)v63 * 0x4000 | (unsigned int)v63 >> 18) ^ ((unsigned int)v63 >> 7 | (unsigned int)v63 * 0x2000000) ^ (unsigned int)v63 % 8) + (unsigned int)(((unsigned int)((unsigned long long)v44 >> 10) ^ (unsigned int)v119 ^ (unsigned int)v118) + v116 + v65);
            tmp_465 = v106 + v120 - 272742522;
            tmp_572 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Conv(64->32, rdx<8>) >> 0x2<8>) | (Conv(64->32, rdx<8>) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v121 = (unsigned int)v107 + (((unsigned int)v114 * 128 | (unsigned int)v114 >> 25) ^ ((unsigned int)v115 >> 11 | (unsigned int)v115 * 0x200000) ^ ((unsigned int)v114 >> 6 | (unsigned int)v114 * 0x4000000)) + (unsigned int)(v106 + v120 - 272742522) + (((unsigned int)v109 ^ (unsigned int)v111) & (unsigned int)v114 ^ (unsigned int)v109);
            tmp_668 = (((unsigned int)v114 * 128 | (unsigned int)v114 >> 25) ^ ((unsigned int)v115 >> 11 | (unsigned int)v115 * 0x200000) ^ ((unsigned int)v114 >> 6 | (unsigned int)v114 * 0x4000000)) + (unsigned int)(v106 + v120 - 272742522) + (((unsigned int)v109 ^ (unsigned int)v111) & (unsigned int)v114 ^ (unsigned int)v109);
            v122 = (((unsigned int)v112 | (unsigned int)v117) & (unsigned int)v110 | (unsigned int)v112 & (unsigned int)v117) + (((unsigned int)v117 >> 13 | (unsigned int)v117 * 0x80000) ^ ((unsigned int)v117 >> 2 | (unsigned int)v117 * 0x40000000) ^ ((unsigned int)v117 * 0x400 | (unsigned int)v117 >> 22)) + (((unsigned int)v114 * 128 | (unsigned int)v114 >> 25) ^ ((unsigned int)v115 >> 11 | (unsigned int)v115 * 0x200000) ^ ((unsigned int)v114 >> 6 | (unsigned int)v114 * 0x4000000)) + (unsigned int)(v106 + v120 - 272742522) + (((unsigned int)v109 ^ (unsigned int)v111) & (unsigned int)v114 ^ (unsigned int)v109);
            v123 = ((unsigned int)((unsigned long long)v32 >> 3) ^ (v32 >> 7 | v32 * 0x2000000) ^ (v32 * 0x4000 | v32 >> 18)) + v40 + (unsigned int)v63 + ((unsigned int)v113 % 0x400 ^ ((unsigned int)v113 * 0x2000 | (unsigned int)v113 >> 19) ^ ((unsigned int)v113 * 0x8000 | (unsigned int)v113 >> 17));
            tmp_948 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rdi<8>) >> 0xb<8>) | (Conv(64->32, rdi<8>) << 0x15<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x6<8>) | (Conv(64->32, rdi<8>) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_972 = ((unsigned int)v121 * 128 | (unsigned int)v121 >> 25) ^ ((unsigned int)v121 >> 11 | (unsigned int)v121 * 0x200000) ^ ((unsigned int)v121 >> 6 | (unsigned int)v121 * 0x4000000);
            tmp_973 = (unsigned int)(v109 + v123 + 264347078) + (((unsigned int)v111 ^ (unsigned int)v114) & (unsigned int)v121 ^ (unsigned int)v111);
            v125 = (unsigned int)v110 + (((unsigned int)v121 * 128 | (unsigned int)v121 >> 25) ^ ((unsigned int)v121 >> 11 | (unsigned int)v121 * 0x200000) ^ ((unsigned int)v121 >> 6 | (unsigned int)v121 * 0x4000000)) + (unsigned int)(v109 + v123 + 264347078) + (((unsigned int)v111 ^ (unsigned int)v114) & (unsigned int)v121 ^ (unsigned int)v111);
            v126 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r13<8>) >> 0xd<8>) | (Conv(64->32, r13<8>) << 0x13<8>)) ^ ((Conv(64->32, r13<8>) >> 0x2<8>) | (Conv(64->32, r13<8>) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v127 = (((unsigned int)v63 * 0x4000 | (unsigned int)v63 >> 18) ^ ((unsigned int)v63 >> 7 | (unsigned int)v63 * 0x2000000) ^ (unsigned int)v63 % 8) + (unsigned int)(((unsigned int)((unsigned long long)v44 >> 10) ^ (v44 * 0x2000 | v44 >> 19) ^ (v44 * 0x8000 | v44 >> 17)) + v116 + v65);
            v128 = ((unsigned int)v117 | (unsigned int)v122) & (unsigned int)v112 | (unsigned int)v117 & (unsigned int)v122;
            v129 = ((unsigned int)v122 >> 13 | (unsigned int)v122 * 0x80000) ^ ((unsigned int)v122 >> 2 | (unsigned int)v122 * 0x40000000) ^ ((unsigned int)v122 * 0x400 | (unsigned int)v122 >> 22);
            v131 = (((unsigned int)v63 * 0x4000 | (unsigned int)v63 >> 18) ^ ((unsigned int)v63 >> 7 | (unsigned int)v63 * 0x2000000) ^ (unsigned int)v63 % 8) + (unsigned int)((unsigned long long)((unsigned int)((unsigned long long)v44 >> 10) ^ (v44 * 0x2000 | v44 >> 19) ^ (v44 * 0x8000 | v44 >> 17)) + tmp_282);
            v132 = (((unsigned int)v117 | (unsigned int)v122) & (unsigned int)v112 | (unsigned int)v117 & (unsigned int)v122) + (((unsigned int)v122 >> 13 | (unsigned int)v122 * 0x80000) ^ ((unsigned int)v122 >> 2 | (unsigned int)v122 * 0x40000000) ^ ((unsigned int)v122 * 0x400 | (unsigned int)v122 >> 22)) + (unsigned long long)((((unsigned int)v121 * 128 | (unsigned int)v121 >> 25) ^ ((unsigned int)v121 >> 11 | (unsigned int)v121 * 0x200000) ^ ((unsigned int)v121 >> 6 | (unsigned int)v121 * 0x4000000)) + (unsigned int)(v109 + v123 + 264347078) + (((unsigned int)v111 ^ (unsigned int)v114) & (unsigned int)v121 ^ (unsigned int)v111));
            tmp_398 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (Conv(64->32, (r10<8> >> 0xa<8>)) ^ (((Conv(64->32, r8<8>) << 0xd<8>) | (Conv(64->32, r8<8>) >> 0x13<8>)) ^ ((Conv(64->32, rbp<8>) << 0xf<8>) | (Conv(64->32, rbp<8>) >> 0x11<8>))))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_403 = (unsigned int)v132 >> 13 | (unsigned int)v132 * 0x80000;
            v133 = ((unsigned int)((unsigned long long)v33 >> 3) ^ (v33 >> 7 | v33 * 0x2000000) ^ (v33 * 0x4000 | v33 >> 18)) + v32 + v41 + ((unsigned int)v120 % 0x400 ^ ((unsigned int)v131 * 0x2000 | (unsigned int)v131 >> 19) ^ ((unsigned int)v127 * 0x8000 | (unsigned int)v127 >> 17));
            tmp_612 = (unsigned int)(v111 + v133 + 604807628) + (((unsigned int)v114 ^ (unsigned int)v121) & (unsigned int)v125 ^ (unsigned int)v114);
            tmp_654 = v112;
            v134 = (unsigned int)v112 + (((unsigned int)v125 * 128 | (unsigned int)v125 >> 25) ^ ((unsigned int)v125 >> 11 | (unsigned int)v125 * 0x200000) ^ ((unsigned int)v125 >> 6 | (unsigned int)v125 * 0x4000000)) + (unsigned int)(v111 + v133 + 604807628) + (((unsigned int)v114 ^ (unsigned int)v121) & (unsigned int)v125 ^ (unsigned int)v114);
            v135 = (((unsigned int)v122 | (unsigned int)v132) & (unsigned int)v117 | (unsigned int)v122 & (unsigned int)v132) + (((unsigned int)v132 >> 13 | (unsigned int)v132 * 0x80000) ^ ((unsigned int)v132 >> 2 | (unsigned int)v132 * 0x40000000) ^ ((unsigned int)v132 * 0x400 | (unsigned int)v132 >> 22)) + (((unsigned int)v125 * 128 | (unsigned int)v125 >> 25) ^ ((unsigned int)v125 >> 11 | (unsigned int)v125 * 0x200000) ^ ((unsigned int)v125 >> 6 | (unsigned int)v125 * 0x4000000)) + (unsigned int)(v111 + v133 + 604807628) + (((unsigned int)v114 ^ (unsigned int)v121) & (unsigned int)v125 ^ (unsigned int)v114);
            tmp_769 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((((Conv(64->32, r13<8>) | Conv(64->32, r12<8>)) & Conv(64->32, rdx<8>)) | (Conv(64->32, r13<8>) & Conv(64->32, r12<8>))) + ((((Conv(64->32, r12<8>) >> 0xd<8>) | (Conv(64->32, r12<8>) << 0x13<8>)) ^ ((Conv(64->32, r12<8>) >> 0x2<8>) | (Conv(64->32, r12<8>) << 0x1e<8>))) ^ ((Conv(64->32, r12<8>) << 0xa<8>) | (Conv(64->32, r12<8>) >> 0x16<8>))))), Conv(32->64, ((((Conv(64->32, r14<8>) << 0x7<8>) | (Conv(64->32, r14<8>) >> 0x19<8>)) ^ (((Conv(64->32, r14<8>) >> 0xb<8>) | (Conv(64->32, r14<8>) << 0x15<8>)) ^ ((Conv(64->32, r14<8>) >> 0x6<8>) | (Conv(64->32, r14<8>) << 0x1a<8>)))) + (Conv(64->32, ((rbx<8> + r8<8>) + 0x240ca1cc<64>)) + (((Conv(64->32, rsi<8>) ^ Conv(64->32, rdi<8>)) & Conv(64->32, r14<8>)) ^ Conv(64->32, rsi<8>))))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v0 = (((unsigned int)v123 * 0x2000 | (unsigned int)v123 >> 19) ^ ((unsigned int)v123 * 0x8000 | (unsigned int)v123 >> 17) ^ (unsigned int)v123 % 0x400) + v33 + v42 + ((unsigned int)((unsigned long long)v34 >> 3) ^ (v34 >> 7 | v34 * 0x2000000) ^ (v34 * 0x4000 | v34 >> 18));
            tmp_989 = [D] amd64g_calculate_rflags_all(0x3<64>, Add((rsi<8> + Conv(32->64, (((((Conv(64->32, r9<8>) << 0xd<8>) | (Conv(64->32, r9<8>) >> 0x13<8>)) ^ ((Conv(64->32, r9<8>) << 0xf<8>) | (Conv(64->32, r9<8>) >> 0x11<8>))) ^ Conv(64->32, (r9<8> >> 0xa<8>))) + ((Load(addr=stack_base-104, size=4, endness=Iend_LE) + Load(addr=stack_base-68, size=4, endness=Iend_LE)) + (Conv(64->32, (Conv(32->64, Load(addr=stack_base-100, size=4, endness=Iend_LE)) >> 0x3<8>)) ^ (((Load(addr=stack_base-100, size=4, endness=Iend_LE) >> 0x7<8>) | (Load(addr=stack_base-100, size=4, endness=Iend_LE) << 0x19<8>)) ^ ((Load(addr=stack_base-100, size=4, endness=Iend_LE) << 0xe<8>) | (Load(addr=stack_base-100, size=4, endness=Iend_LE) >> 0x12<8>)))))))), 0x2de92c6f<64>), Conv(32->64, (((Conv(64->32, rdi<8>) ^ Conv(64->32, r14<8>)) & Conv(64->32, rcx<8>)) ^ Conv(64->32, rdi<8>))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_1004 = ((unsigned int)v134 >> 11 | (unsigned int)v134 * 0x200000) ^ ((unsigned int)v134 >> 6 | (unsigned int)v134 * 0x4000000);
            v136 = (((unsigned int)v134 * 128 | (unsigned int)v134 >> 25) ^ ((unsigned int)v134 >> 11 | (unsigned int)v134 * 0x200000) ^ ((unsigned int)v134 >> 6 | (unsigned int)v134 * 0x4000000)) + (unsigned int)(v114 + (((unsigned int)v123 * 0x2000 | (unsigned int)v123 >> 19) ^ ((unsigned int)v123 * 0x8000 | (unsigned int)v123 >> 17) ^ (unsigned int)v123 % 0x400) + v33 + v42 + ((unsigned int)((unsigned long long)v34 >> 3) ^ (v34 >> 7 | v34 * 0x2000000) ^ (v34 * 0x4000 | v34 >> 18)) + 770255983) + (((unsigned int)v121 ^ (unsigned int)v125) & (unsigned int)v134 ^ (unsigned int)v121);
            tmp_1066 = (((unsigned int)v122 | (unsigned int)v132) & (unsigned int)v117 | (unsigned int)v122 & (unsigned int)v132) + (((unsigned int)v132 >> 13 | (unsigned int)v132 * 0x80000) ^ ((unsigned int)v132 >> 2 | (unsigned int)v132 * 0x40000000) ^ ((unsigned int)v132 * 0x400 | (unsigned int)v132 >> 22)) + (((unsigned int)v125 * 128 | (unsigned int)v125 >> 25) ^ ((unsigned int)v125 >> 11 | (unsigned int)v125 * 0x200000) ^ ((unsigned int)v125 >> 6 | (unsigned int)v125 * 0x4000000)) + (unsigned int)(v111 + v133 + 604807628) + (((unsigned int)v114 ^ (unsigned int)v121) & (unsigned int)v125 ^ (unsigned int)v114) >> 2 | ((((unsigned int)v122 | (unsigned int)v132) & (unsigned int)v117 | (unsigned int)v122 & (unsigned int)v132) + (((unsigned int)v132 >> 13 | (unsigned int)v132 * 0x80000) ^ ((unsigned int)v132 >> 2 | (unsigned int)v132 * 0x40000000) ^ ((unsigned int)v132 * 0x400 | (unsigned int)v132 >> 22)) + (((unsigned int)v125 * 128 | (unsigned int)v125 >> 25) ^ ((unsigned int)v125 >> 11 | (unsigned int)v125 * 0x200000) ^ ((unsigned int)v125 >> 6 | (unsigned int)v125 * 0x4000000)) + (unsigned int)(v111 + v133 + 604807628) + (((unsigned int)v114 ^ (unsigned int)v121) & (unsigned int)v125 ^ (unsigned int)v114)) * 0x40000000;
            tmp_1071 = v117;
            v137 = (unsigned int)v117 + (((unsigned int)v134 * 128 | (unsigned int)v134 >> 25) ^ ((unsigned int)v134 >> 11 | (unsigned int)v134 * 0x200000) ^ ((unsigned int)v134 >> 6 | (unsigned int)v134 * 0x4000000)) + (unsigned int)(v114 + (((unsigned int)v123 * 0x2000 | (unsigned int)v123 >> 19) ^ ((unsigned int)v123 * 0x8000 | (unsigned int)v123 >> 17) ^ (unsigned int)v123 % 0x400) + v33 + v42 + ((unsigned int)((unsigned long long)v34 >> 3) ^ (v34 >> 7 | v34 * 0x2000000) ^ (v34 * 0x4000 | v34 >> 18)) + 770255983) + (((unsigned int)v121 ^ (unsigned int)v125) & (unsigned int)v134 ^ (unsigned int)v121);
            v138 = [D] amd64g_calculate_rflags_all(0x3<64>, t1071, rax<8>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v139 = (unsigned int)v132 & (unsigned int)v135;
            v140 = ((unsigned int)v135 >> 13 | (unsigned int)v135 * 0x80000) ^ (unsigned int)tmp_1066;
            v141 = v135;
            tmp_334 = (unsigned int)v140 ^ ((unsigned int)v141 * 0x400 | (unsigned int)v141 >> 22);
            tmp_364 = (((unsigned int)v132 | (unsigned int)v135) & (unsigned int)v122 | (unsigned int)v139) + ((unsigned int)v140 ^ ((unsigned int)v141 * 0x400 | (unsigned int)v141 >> 22));
            v142 = (((unsigned int)v132 | (unsigned int)v135) & (unsigned int)v122 | (unsigned int)v139) + ((unsigned int)v140 ^ ((unsigned int)v141 * 0x400 | (unsigned int)v141 >> 22)) + (unsigned int)v136;
            tmp_380 = [D] amd64g_calculate_rflags_all(0x3<64>, t364, rax<8>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v1 = v34 + v43 + ((unsigned int)((unsigned long long)v35 >> 3) ^ (v35 >> 7 | v35 * 0x2000000) ^ (v35 * 0x4000 | v35 >> 18)) + (((unsigned int)v133 * 0x2000 | (unsigned int)v133 >> 19) ^ ((unsigned int)v133 * 0x8000 | (unsigned int)v133 >> 17) ^ (unsigned int)v133 % 0x400);
            tmp_688 = v122;
            v143 = (unsigned int)v122 + (((unsigned int)v137 * 128 | (unsigned int)v137 >> 25) ^ ((unsigned int)v137 >> 11 | (unsigned int)v137 * 0x200000) ^ ((unsigned int)v137 >> 6 | (unsigned int)v137 * 0x4000000)) + (unsigned int)(v121 + v34 + v43 + ((unsigned int)((unsigned long long)v35 >> 3) ^ (v35 >> 7 | v35 * 0x2000000) ^ (v35 * 0x4000 | v35 >> 18)) + (((unsigned int)v133 * 0x2000 | (unsigned int)v133 >> 19) ^ ((unsigned int)v133 * 0x8000 | (unsigned int)v133 >> 17) ^ (unsigned int)v133 % 0x400) + 1249150122) + (((unsigned int)v125 ^ (unsigned int)v134) & (unsigned int)v137 ^ (unsigned int)v125);
            tmp_737 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rbx<8>) >> 0xd<8>) | (Conv(64->32, rbx<8>) << 0x13<8>)) ^ ((Conv(64->32, rbx<8>) >> 0x2<8>) | (Conv(64->32, rbx<8>) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_790 = (((unsigned int)v135 | (unsigned int)v142) & (unsigned int)v132 | (unsigned int)v135 & (unsigned int)v142) + (((unsigned int)v142 >> 13 | (unsigned int)v142 * 0x80000) ^ ((unsigned int)v142 >> 2 | (unsigned int)v142 * 0x40000000) ^ ((unsigned int)v142 * 0x400 | (unsigned int)v142 >> 22));
            tmp_791 = (((unsigned int)v137 * 128 | (unsigned int)v137 >> 25) ^ ((unsigned int)v137 >> 11 | (unsigned int)v137 * 0x200000) ^ ((unsigned int)v137 >> 6 | (unsigned int)v137 * 0x4000000)) + (unsigned int)(v121 + v34 + v43 + ((unsigned int)((unsigned long long)v35 >> 3) ^ (v35 >> 7 | v35 * 0x2000000) ^ (v35 * 0x4000 | v35 >> 18)) + (((unsigned int)v133 * 0x2000 | (unsigned int)v133 >> 19) ^ ((unsigned int)v133 * 0x8000 | (unsigned int)v133 >> 17) ^ (unsigned int)v133 % 0x400) + 1249150122) + (((unsigned int)v125 ^ (unsigned int)v134) & (unsigned int)v137 ^ (unsigned int)v125);
            v144 = (((unsigned int)v135 | (unsigned int)v142) & (unsigned int)v132 | (unsigned int)v135 & (unsigned int)v142) + (((unsigned int)v142 >> 13 | (unsigned int)v142 * 0x80000) ^ ((unsigned int)v142 >> 2 | (unsigned int)v142 * 0x40000000) ^ ((unsigned int)v142 * 0x400 | (unsigned int)v142 >> 22)) + (((unsigned int)v137 * 128 | (unsigned int)v137 >> 25) ^ ((unsigned int)v137 >> 11 | (unsigned int)v137 * 0x200000) ^ ((unsigned int)v137 >> 6 | (unsigned int)v137 * 0x4000000)) + (unsigned int)(v121 + v34 + v43 + ((unsigned int)((unsigned long long)v35 >> 3) ^ (v35 >> 7 | v35 * 0x2000000) ^ (v35 * 0x4000 | v35 >> 18)) + (((unsigned int)v133 * 0x2000 | (unsigned int)v133 >> 19) ^ ((unsigned int)v133 * 0x8000 | (unsigned int)v133 >> 17) ^ (unsigned int)v133 % 0x400) + 1249150122) + (((unsigned int)v125 ^ (unsigned int)v134) & (unsigned int)v137 ^ (unsigned int)v125);
            v2 = ((v0 * 0x2000 | v0 >> 19) ^ (v0 * 0x8000 | v0 >> 17) ^ (unsigned int)((unsigned long long)v0 >> 10)) + v35 + v44 + ((unsigned int)((unsigned long long)v36 >> 3) ^ (v36 >> 7 | v36 * 0x2000000) ^ (v36 * 0x4000 | v36 >> 18));
            tmp_1005 = ((unsigned int)v134 ^ (unsigned int)v137) & (unsigned int)v143;
            tmp_1038 = v125 + ((v0 * 0x2000 | v0 >> 19) ^ (v0 * 0x8000 | v0 >> 17) ^ (unsigned int)((unsigned long long)v0 >> 10)) + v35 + v44 + ((unsigned int)((unsigned long long)v36 >> 3) ^ (v36 >> 7 | v36 * 0x2000000) ^ (v36 * 0x4000 | v36 >> 18)) + 1555081692;
            v145 = (unsigned int)(v125 + ((v0 * 0x2000 | v0 >> 19) ^ (v0 * 0x8000 | v0 >> 17) ^ (unsigned int)((unsigned long long)v0 >> 10)) + v35 + v44 + ((unsigned int)((unsigned long long)v36 >> 3) ^ (v36 >> 7 | v36 * 0x2000000) ^ (v36 * 0x4000 | v36 >> 18)) + 1555081692) + (((unsigned int)v134 ^ (unsigned int)v137) & (unsigned int)v143 ^ (unsigned int)v134);
            v146 = ((unsigned int)v143 >> 11 | (unsigned int)v143 * 0x200000) ^ ((unsigned int)v143 >> 6 | (unsigned int)v143 * 0x4000000);
            v148 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (Conv(64->32, rbx<8>) & Conv(64->32, rax<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v149 = (unsigned int)v143 * 128 | (unsigned int)v143 >> 25;
            v150 = (unsigned int)v132 + ((unsigned int)v149 ^ (unsigned int)v146) + (unsigned int)v145;
            v151 = (((unsigned int)v142 | (unsigned int)v144) & (unsigned int)v135 | (unsigned int)v142 & (unsigned int)v144) + (((unsigned int)v144 >> 13 | (unsigned int)v144 * 0x80000) ^ ((unsigned int)v144 >> 2 | (unsigned int)v144 * 0x40000000) ^ ((unsigned int)v144 * 0x400 | (unsigned int)v144 >> 22)) + ((unsigned int)v149 ^ (unsigned int)v146) + (unsigned int)v145;
            v4 = ((v37 * 0x4000 | v37 >> 18) ^ (v37 >> 7 | v37 * 0x2000000) ^ (unsigned int)((unsigned long long)v37 >> 3)) + v36 + (unsigned int)v113 + ((v1 * 0x2000 | v1 >> 19) ^ (v1 * 0x8000 | v1 >> 17) ^ (unsigned int)((unsigned long long)v1 >> 10));
            v152 = (unsigned int)v135 + (((unsigned int)v150 * 128 | (unsigned int)v150 >> 25) ^ ((unsigned int)v150 >> 11 | (unsigned int)v150 * 0x200000) ^ ((unsigned int)v150 >> 6 | (unsigned int)v150 * 0x4000000)) + (((unsigned int)v137 ^ (unsigned int)v143) & (unsigned int)v150 ^ (unsigned int)v137) + (unsigned int)(v134 + ((v37 * 0x4000 | v37 >> 18) ^ (v37 >> 7 | v37 * 0x2000000) ^ (unsigned int)((unsigned long long)v37 >> 3)) + v36 + (unsigned int)v113 + ((v1 * 0x2000 | v1 >> 19) ^ (v1 * 0x8000 | v1 >> 17) ^ (unsigned int)((unsigned long long)v1 >> 10)) + 1996064986);
            v153 = (((unsigned int)v144 | (unsigned int)v151) & (unsigned int)v142 | (unsigned int)v144 & (unsigned int)v151) + (((unsigned int)v151 >> 13 | (unsigned int)v151 * 0x80000) ^ ((unsigned int)v151 >> 2 | (unsigned int)v151 * 0x40000000) ^ ((unsigned int)v151 * 0x400 | (unsigned int)v151 >> 22)) + (((unsigned int)v150 * 128 | (unsigned int)v150 >> 25) ^ ((unsigned int)v150 >> 11 | (unsigned int)v150 * 0x200000) ^ ((unsigned int)v150 >> 6 | (unsigned int)v150 * 0x4000000)) + (((unsigned int)v137 ^ (unsigned int)v143) & (unsigned int)v150 ^ (unsigned int)v137) + (unsigned int)(v134 + ((v37 * 0x4000 | v37 >> 18) ^ (v37 >> 7 | v37 * 0x2000000) ^ (unsigned int)((unsigned long long)v37 >> 3)) + v36 + (unsigned int)v113 + ((v1 * 0x2000 | v1 >> 19) ^ (v1 * 0x8000 | v1 >> 17) ^ (unsigned int)((unsigned long long)v1 >> 10)) + 1996064986);
            v155 = (unsigned int)v143 ^ (unsigned int)v150;
            v156 = v137 + ((v38 * 0x4000 | v38 >> 18) ^ (v38 >> 7 | v38 * 0x2000000) ^ (unsigned int)((unsigned long long)v38 >> 3)) + v37 + (unsigned int)v120 + ((v2 * 0x2000 | v2 >> 19) ^ (v2 * 0x8000 | v2 >> 17) ^ (unsigned int)((unsigned long long)v2 >> 10)) - 1740746414;
            v5 = ((v38 * 0x4000 | v38 >> 18) ^ (v38 >> 7 | v38 * 0x2000000) ^ (unsigned int)((unsigned long long)v38 >> 3)) + v37 + (unsigned int)v120 + ((v2 * 0x2000 | v2 >> 19) ^ (v2 * 0x8000 | v2 >> 17) ^ (unsigned int)((unsigned long long)v2 >> 10));
            v157 = v152;
            v158 = (unsigned int)v142 + (((unsigned int)v152 * 128 | (unsigned int)v152 >> 25) ^ ((unsigned int)v157 >> 11 | (unsigned int)v157 * 0x200000) ^ ((unsigned int)v152 >> 6 | (unsigned int)v152 * 0x4000000)) + ((unsigned int)v155 & (unsigned int)v152 ^ (unsigned int)v143) + (unsigned int)v156;
            v159 = (((unsigned int)v151 | (unsigned int)v153) & (unsigned int)v144 | (unsigned int)v151 & (unsigned int)v153) + (((unsigned int)v153 >> 13 | (unsigned int)v153 * 0x80000) ^ ((unsigned int)v153 >> 2 | (unsigned int)v153 * 0x40000000) ^ ((unsigned int)v153 * 0x400 | (unsigned int)v153 >> 22)) + (((unsigned int)v152 * 128 | (unsigned int)v152 >> 25) ^ ((unsigned int)v157 >> 11 | (unsigned int)v157 * 0x200000) ^ ((unsigned int)v152 >> 6 | (unsigned int)v152 * 0x4000000)) + ((unsigned int)v155 & (unsigned int)v152 ^ (unsigned int)v143) + (unsigned int)v156;
            v6 = ((v39 * 0x4000 | v39 >> 18) ^ (v39 >> 7 | v39 * 0x2000000) ^ (unsigned int)((unsigned long long)v39 >> 3)) + v38 + (unsigned int)v123 + ((v4 * 0x2000 | v4 >> 19) ^ (v4 * 0x8000 | v4 >> 17) ^ (unsigned int)((unsigned long long)v4 >> 10));
            tmp_842 = (((unsigned int)v158 * 128 | (unsigned int)v158 >> 25) ^ ((unsigned int)v158 >> 11 | (unsigned int)v158 * 0x200000) ^ ((unsigned int)v158 >> 6 | (unsigned int)v158 * 0x4000000)) + (unsigned int)(v143 + ((v39 * 0x4000 | v39 >> 18) ^ (v39 >> 7 | v39 * 0x2000000) ^ (unsigned int)((unsigned long long)v39 >> 3)) + v38 + (unsigned int)v123 + ((v4 * 0x2000 | v4 >> 19) ^ (v4 * 0x8000 | v4 >> 17) ^ (unsigned int)((unsigned long long)v4 >> 10)) - 1473132947) + (((unsigned int)v150 ^ (unsigned int)v152) & (unsigned int)v158 ^ (unsigned int)v150);
            v160 = ...;
            v161 = (((unsigned int)v153 | (unsigned int)v159) & (unsigned int)v151 | (unsigned int)v153 & (unsigned int)v159) + (((unsigned int)v159 >> 13 | (unsigned int)v159 * 0x80000) ^ ((unsigned int)v159 >> 2 | (unsigned int)v159 * 0x40000000) ^ ((unsigned int)v159 * 0x400 | (unsigned int)v159 >> 22)) + (unsigned int)tmp_842;
            v162 = (v5 * 0x2000 | v5 >> 19) ^ (v5 * 0x8000 | v5 >> 17) ^ (unsigned int)((unsigned long long)v5 >> 10);
            v163 = (v40 * 0x4000 | v40 >> 18) ^ (v40 >> 7 | v40 * 0x2000000);
            v164 = (unsigned long long)v40 >> 3;
            v7 = ((unsigned int)v163 ^ (unsigned int)v164) + v39 + (unsigned int)v133 + (unsigned int)v162;
            tmp_427 = (((unsigned int)v160 * 128 | (unsigned int)v160 >> 25) ^ ((unsigned int)v160 >> 11 | (unsigned int)v160 * 0x200000) ^ ((unsigned int)v160 >> 6 | (unsigned int)v160 * 0x4000000)) + (unsigned int)(v150 + ((unsigned int)v163 ^ (unsigned int)v164) + v39 + (unsigned int)v133 + (unsigned int)v162 - 1341970488) + (((unsigned int)v152 ^ (unsigned int)v158) & (unsigned int)v160 ^ (unsigned int)v152);
            v165 = v151 + (((unsigned int)v160 * 128 | (unsigned int)v160 >> 25) ^ ((unsigned int)v160 >> 11 | (unsigned int)v160 * 0x200000) ^ ((unsigned int)v160 >> 6 | (unsigned int)v160 * 0x4000000)) + (unsigned int)(v150 + ((unsigned int)v163 ^ (unsigned int)v164) + v39 + (unsigned int)v133 + (unsigned int)v162 - 1341970488) + (((unsigned int)v152 ^ (unsigned int)v158) & (unsigned int)v160 ^ (unsigned int)v152);
            v166 = (((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427;
            v8 = ((v41 * 0x4000 | v41 >> 18) ^ (v41 >> 7 | v41 * 0x2000000) ^ (unsigned int)((unsigned long long)v41 >> 3)) + v40 + v0 + ((v6 * 0x2000 | v6 >> 19) ^ (v6 * 0x8000 | v6 >> 17) ^ (unsigned int)((unsigned long long)v6 >> 10));
            tmp_879 = (((unsigned int)(v151 + tmp_427) * 128 | (unsigned int)(v151 + tmp_427) >> 25) ^ ((unsigned int)(v151 + tmp_427) >> 11 | (unsigned int)(v151 + tmp_427) * 0x200000) ^ ((unsigned int)(v151 + tmp_427) >> 6 | (unsigned int)(v151 + tmp_427) * 0x4000000)) + (unsigned int)(v152 + ((v41 * 0x4000 | v41 >> 18) ^ (v41 >> 7 | v41 * 0x2000000) ^ (unsigned int)((unsigned long long)v41 >> 3)) + v40 + v0 + ((v6 * 0x2000 | v6 >> 19) ^ (v6 * 0x8000 | v6 >> 17) ^ (unsigned int)((unsigned long long)v6 >> 10)) - 1084653625) + (((unsigned int)v158 ^ (unsigned int)v160) & (unsigned int)(v151 + tmp_427) ^ (unsigned int)v158);
            v167 = ...;
            v168 = v7;
            v169 = (((unsigned int)v161 | (((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427) & (unsigned int)v159 | (unsigned int)v161 & (((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427) + (((((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427 >> 13 | ((((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427) * 0x80000) ^ ((((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427 >> 2 | ((((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427) * 0x40000000) ^ (((((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427) * 0x400 | (((unsigned int)v159 | (unsigned int)v161) & (unsigned int)v153 | (unsigned int)v159 & (unsigned int)v161) + (((unsigned int)v161 >> 13 | (unsigned int)v161 * 0x80000) ^ ((unsigned int)v161 >> 2 | (unsigned int)v161 * 0x40000000) ^ ((unsigned int)v161 * 0x400 | (unsigned int)v161 >> 22)) + (unsigned int)tmp_427 >> 22)) + (unsigned int)tmp_879;
            v170 = (v7 * 0x2000 | v7 >> 19) ^ (v7 * 0x8000 | v7 >> 17);
            v9 = ((v42 * 0x4000 | v42 >> 18) ^ (v42 >> 7 | v42 * 0x2000000) ^ (unsigned int)((unsigned long long)v42 >> 3)) + v41 + v1 + ((unsigned int)v170 ^ (unsigned int)v168 % 0x400);
            tmp_463 = v158 + ((v42 * 0x4000 | v42 >> 18) ^ (v42 >> 7 | v42 * 0x2000000) ^ (unsigned int)((unsigned long long)v42 >> 3)) + v41 + v1 + ((unsigned int)v170 ^ (unsigned int)v168 % 0x400) - 958395405;
            tmp_531 = (unsigned int)(v158 + ((v42 * 0x4000 | v42 >> 18) ^ (v42 >> 7 | v42 * 0x2000000) ^ (unsigned int)((unsigned long long)v42 >> 3)) + v41 + v1 + ((unsigned int)v170 ^ (unsigned int)v168 % 0x400) - 958395405) + (((unsigned int)v160 ^ (unsigned int)v165) & (unsigned int)v167 ^ (unsigned int)v160);
            tmp_532 = (((unsigned int)v167 * 128 | (unsigned int)v167 >> 25) ^ ((unsigned int)v167 >> 11 | (unsigned int)v167 * 0x200000) ^ ((unsigned int)v167 >> 6 | (unsigned int)v167 * 0x4000000)) + (unsigned int)(v158 + ((v42 * 0x4000 | v42 >> 18) ^ (v42 >> 7 | v42 * 0x2000000) ^ (unsigned int)((unsigned long long)v42 >> 3)) + v41 + v1 + ((unsigned int)v170 ^ (unsigned int)v168 % 0x400) - 958395405) + (((unsigned int)v160 ^ (unsigned int)v165) & (unsigned int)v167 ^ (unsigned int)v160);
            v171 = ...;
            tmp_579 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v172 = (((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532;
            v173 = (unsigned int)v169 & (((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532;
            v10 = ((v43 * 0x4000 | v43 >> 18) ^ (v43 >> 7 | v43 * 0x2000000) ^ (unsigned int)((unsigned long long)v43 >> 3)) + v42 + v2 + ((v8 * 0x2000 | v8 >> 19) ^ (v8 * 0x8000 | v8 >> 17) ^ (unsigned int)((unsigned long long)v8 >> 10));
            tmp_961 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, (rcx<8> + t532)) >> 0xb<8>) | (Conv(64->32, (rcx<8> + t532)) << 0x15<8>)) ^ ((Conv(64->32, (rcx<8> + t532)) >> 0x6<8>) | (Conv(64->32, (rcx<8> + t532)) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_983 = (unsigned int)(v160 + ((v43 * 0x4000 | v43 >> 18) ^ (v43 >> 7 | v43 * 0x2000000) ^ (unsigned int)((unsigned long long)v43 >> 3)) + v42 + v2 + ((v8 * 0x2000 | v8 >> 19) ^ (v8 * 0x8000 | v8 >> 17) ^ (unsigned int)((unsigned long long)v8 >> 10)) - 710438585) + (((unsigned int)v165 ^ (unsigned int)v167) & (unsigned int)(v159 + tmp_532) ^ (unsigned int)v165);
            v174 = (((unsigned int)(v159 + tmp_532) * 128 | (unsigned int)(v159 + tmp_532) >> 25) ^ ((unsigned int)(v159 + tmp_532) >> 11 | (unsigned int)(v159 + tmp_532) * 0x200000) ^ ((unsigned int)(v159 + tmp_532) >> 6 | (unsigned int)(v159 + tmp_532) * 0x4000000)) + (unsigned int)(v160 + ((v43 * 0x4000 | v43 >> 18) ^ (v43 >> 7 | v43 * 0x2000000) ^ (unsigned int)((unsigned long long)v43 >> 3)) + v42 + v2 + ((v8 * 0x2000 | v8 >> 19) ^ (v8 * 0x8000 | v8 >> 17) ^ (unsigned int)((unsigned long long)v8 >> 10)) - 710438585) + (((unsigned int)v165 ^ (unsigned int)v167) & (unsigned int)(v159 + tmp_532) ^ (unsigned int)v165);
            v175 = ...;
            v176 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((((((((Conv(64->32, rax<8>) | Conv(64->32, rdi<8>)) & Conv(64->32, rdx<8>)) | (Conv(64->32, rax<8>) & Conv(64->32, rdi<8>))) + ((((Conv(64->32, rdi<8>) >> 0xd<8>) | (Conv(64->32, rdi<8>) << 0x13<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) ^ ((Conv(64->32, rdi<8>) << 0xa<8>) | (Conv(64->32, rdi<8>) >> 0x16<8>)))) + Conv(64->32, t532)) >> 0xd<8>) | ((((((Conv(64->32, rax<8>) | Conv(64->32, rdi<8>)) & Conv(64->32, rdx<8>)) | (Conv(64->32, rax<8>) & Conv(64->32, rdi<8>))) + ((((Conv(64->32, rdi<8>) >> 0xd<8>) | (Conv(64->32, rdi<8>) << 0x13<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) ^ ((Conv(64->32, rdi<8>) << 0xa<8>) | (Conv(64->32, rdi<8>) >> 0x16<8>)))) + Conv(64->32, t532)) << 0x13<8>)) ^ (((((((Conv(64->32, rax<8>) | Conv(64->32, rdi<8>)) & Conv(64->32, rdx<8>)) | (Conv(64->32, rax<8>) & Conv(64->32, rdi<8>))) + ((((Conv(64->32, rdi<8>) >> 0xd<8>) | (Conv(64->32, rdi<8>) << 0x13<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) ^ ((Conv(64->32, rdi<8>) << 0xa<8>) | (Conv(64->32, rdi<8>) >> 0x16<8>)))) + Conv(64->32, t532)) >> 0x2<8>) | ((((((Conv(64->32, rax<8>) | Conv(64->32, rdi<8>)) & Conv(64->32, rdx<8>)) | (Conv(64->32, rax<8>) & Conv(64->32, rdi<8>))) + ((((Conv(64->32, rdi<8>) >> 0xd<8>) | (Conv(64->32, rdi<8>) << 0x13<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x2<8>) | (Conv(64->32, rdi<8>) << 0x1e<8>))) ^ ((Conv(64->32, rdi<8>) << 0xa<8>) | (Conv(64->32, rdi<8>) >> 0x16<8>)))) + Conv(64->32, t532)) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v177 = ((((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532 >> 13 | ((((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532) * 0x80000) ^ ((((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532 >> 2 | ((((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532) * 0x40000000) ^ (((((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532) * 0x400 | (((unsigned int)v166 | (unsigned int)v169) & (unsigned int)v161 | (unsigned int)v166 & (unsigned int)v169) + (((unsigned int)v169 >> 13 | (unsigned int)v169 * 0x80000) ^ ((unsigned int)v169 >> 2 | (unsigned int)v169 * 0x40000000) ^ ((unsigned int)v169 * 0x400 | (unsigned int)v169 >> 22)) + (unsigned int)tmp_532 >> 22);
            v178 = v169;
            tmp_300 = (((unsigned int)v178 | (unsigned int)v172) & (unsigned int)v166 | (unsigned int)v173) + (unsigned int)v177;
            v179 = (((unsigned int)v178 | (unsigned int)v172) & (unsigned int)v166 | (unsigned int)v173) + (unsigned int)v177 + (unsigned int)v174;
            tmp_340 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((Load(addr=stack_base-212, size=4, endness=Iend_LE) << 0xf<8>) | (Load(addr=stack_base-212, size=4, endness=Iend_LE) >> 0x11<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v11 = ((v44 * 0x4000 | v44 >> 18) ^ (v44 >> 7 | v44 * 0x2000000) ^ (unsigned int)((unsigned long long)v44 >> 3)) + v43 + v4 + ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10));
            tmp_622 = (((unsigned int)v175 * 128 | (unsigned int)v175 >> 25) ^ ((unsigned int)v175 >> 11 | (unsigned int)v175 * 0x200000) ^ ((unsigned int)v175 >> 6 | (unsigned int)v175 * 0x4000000)) + (((unsigned int)v167 ^ (unsigned int)v171) & (unsigned int)v175 ^ (unsigned int)v167) + (unsigned int)(v165 + ((v44 * 0x4000 | v44 >> 18) ^ (v44 >> 7 | v44 * 0x2000000) ^ (unsigned int)((unsigned long long)v44 >> 3)) + v43 + v4 + ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + 113926993);
            v180 = ...;
            tmp_699 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rcx<8>) >> 0xd<8>) | (Conv(64->32, rcx<8>) << 0x13<8>)) ^ ((Conv(64->32, rcx<8>) >> 0x2<8>) | (Conv(64->32, rcx<8>) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_752 = (((unsigned int)v172 | (unsigned int)v179) & (unsigned int)v169 | (unsigned int)v172 & (unsigned int)v179) + (((unsigned int)v179 >> 13 | (unsigned int)v179 * 0x80000) ^ ((unsigned int)v179 >> 2 | (unsigned int)v179 * 0x40000000) ^ ((unsigned int)v179 * 0x400 | (unsigned int)v179 >> 22));
            tmp_753 = (((unsigned int)v175 * 128 | (unsigned int)v175 >> 25) ^ ((unsigned int)v175 >> 11 | (unsigned int)v175 * 0x200000) ^ ((unsigned int)v175 >> 6 | (unsigned int)v175 * 0x4000000)) + (((unsigned int)v167 ^ (unsigned int)v171) & (unsigned int)v175 ^ (unsigned int)v167) + (unsigned int)(v165 + ((v44 * 0x4000 | v44 >> 18) ^ (v44 >> 7 | v44 * 0x2000000) ^ (unsigned int)((unsigned long long)v44 >> 3)) + v43 + v4 + ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + 113926993);
            v181 = (((unsigned int)v172 | (unsigned int)v179) & (unsigned int)v169 | (unsigned int)v172 & (unsigned int)v179) + (((unsigned int)v179 >> 13 | (unsigned int)v179 * 0x80000) ^ ((unsigned int)v179 >> 2 | (unsigned int)v179 * 0x40000000) ^ ((unsigned int)v179 * 0x400 | (unsigned int)v179 >> 22)) + (((unsigned int)v175 * 128 | (unsigned int)v175 >> 25) ^ ((unsigned int)v175 >> 11 | (unsigned int)v175 * 0x200000) ^ ((unsigned int)v175 >> 6 | (unsigned int)v175 * 0x4000000)) + (((unsigned int)v167 ^ (unsigned int)v171) & (unsigned int)v175 ^ (unsigned int)v167) + (unsigned int)(v165 + ((v44 * 0x4000 | v44 >> 18) ^ (v44 >> 7 | v44 * 0x2000000) ^ (unsigned int)((unsigned long long)v44 >> 3)) + v43 + v4 + ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + 113926993);
            v182 = v179;
            v12 = (((unsigned int)v113 * 0x4000 | (unsigned int)v113 >> 18) ^ ((unsigned int)v113 >> 7 | (unsigned int)v113 * 0x2000000) ^ (unsigned int)v113 % 8) + v44 + v5 + ((v10 * 0x2000 | v10 >> 19) ^ (v10 * 0x8000 | v10 >> 17) ^ (unsigned int)((unsigned long long)v10 >> 10));
            tmp_963 = ...;
            v183 = ...;
            v184 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, (rax<8> + t622)) >> 0xb<8>) | (Conv(64->32, (rax<8> + t622)) << 0x15<8>)) ^ ((Conv(64->32, (rax<8> + t622)) >> 0x6<8>) | (Conv(64->32, (rax<8> + t622)) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_1058 = ((unsigned int)(v166 + tmp_622) * 128 | (unsigned int)(v166 + tmp_622) >> 25) ^ ((unsigned int)(v166 + tmp_622) >> 11 | (unsigned int)(v166 + tmp_622) * 0x200000) ^ ((unsigned int)(v166 + tmp_622) >> 6 | (unsigned int)(v166 + tmp_622) * 0x4000000);
            v185 = v181;
            v186 = v183;
            v187 = tmp_1058 + v183;
            tmp_295 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Conv(64->32, rax<8>) >> 0x2<8>) | (Conv(64->32, rax<8>) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v188 = v169 + v187;
            tmp_317 = ((unsigned int)v181 >> 13 | (unsigned int)v181 * 0x80000) ^ ((unsigned int)v185 >> 2 | (unsigned int)v185 * 0x40000000);
            tmp_391 = (((unsigned int)v179 | (unsigned int)v181) & (unsigned int)v172 | (unsigned int)v182 & (unsigned int)v181) + (((unsigned int)v181 >> 13 | (unsigned int)v181 * 0x80000) ^ ((unsigned int)v185 >> 2 | (unsigned int)v185 * 0x40000000) ^ ((unsigned int)v181 * 0x400 | (unsigned int)v181 >> 22));
            v189 = (((unsigned int)v179 | (unsigned int)v181) & (unsigned int)v172 | (unsigned int)v182 & (unsigned int)v181) + (((unsigned int)v181 >> 13 | (unsigned int)v181 * 0x80000) ^ ((unsigned int)v185 >> 2 | (unsigned int)v185 * 0x40000000) ^ ((unsigned int)v181 * 0x400 | (unsigned int)v181 >> 22)) + (unsigned int)v187;
            v190 = (unsigned int)v113 + (((unsigned int)v120 * 0x4000 | (unsigned int)v120 >> 18) ^ ((unsigned int)v120 >> 7 | (unsigned int)v120 * 0x2000000) ^ (unsigned int)v120 % 8) + v6 + ((v11 * 0x2000 | v11 >> 19) ^ (v11 * 0x8000 | v11 >> 17) ^ (unsigned int)((unsigned long long)v11 >> 10));
            v23 = (unsigned int)v113 + (((unsigned int)v120 * 0x4000 | (unsigned int)v120 >> 18) ^ ((unsigned int)v120 >> 7 | (unsigned int)v120 * 0x2000000) ^ (unsigned int)v120 % 8) + v6 + ((v11 * 0x2000 | v11 >> 19) ^ (v11 * 0x8000 | v11 >> 17) ^ (unsigned int)((unsigned long long)v11 >> 10));
            tmp_687 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rdi<8>) >> 0xb<8>) | (Conv(64->32, rdi<8>) << 0x15<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x6<8>) | (Conv(64->32, rdi<8>) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_711 = ((unsigned int)v188 * 128 | (unsigned int)v188 >> 25) ^ ((unsigned int)v188 >> 11 | (unsigned int)v188 * 0x200000) ^ ((unsigned int)v188 >> 6 | (unsigned int)v188 * 0x4000000);
            tmp_712 = (((unsigned int)v175 ^ (unsigned int)v180) & (unsigned int)v188 ^ (unsigned int)v175) + (unsigned int)(v171 + v190 + 666307205);
            v191 = (unsigned int)v172 + (((unsigned int)v188 * 128 | (unsigned int)v188 >> 25) ^ ((unsigned int)v188 >> 11 | (unsigned int)v188 * 0x200000) ^ ((unsigned int)v188 >> 6 | (unsigned int)v188 * 0x4000000)) + (((unsigned int)v175 ^ (unsigned int)v180) & (unsigned int)v188 ^ (unsigned int)v175) + (unsigned int)(v171 + v190 + 666307205);
            v192 = (((unsigned int)v181 | (unsigned int)v189) & (unsigned int)v179 | (unsigned int)v181 & (unsigned int)v189) + (((unsigned int)v189 >> 13 | (unsigned int)v189 * 0x80000) ^ ((unsigned int)v189 >> 2 | (unsigned int)v189 * 0x40000000) ^ ((unsigned int)v189 * 0x400 | (unsigned int)v189 >> 22)) + (((unsigned int)v188 * 128 | (unsigned int)v188 >> 25) ^ ((unsigned int)v188 >> 11 | (unsigned int)v188 * 0x200000) ^ ((unsigned int)v188 >> 6 | (unsigned int)v188 * 0x4000000)) + (((unsigned int)v175 ^ (unsigned int)v180) & (unsigned int)v188 ^ (unsigned int)v175) + (unsigned int)(v171 + v190 + 666307205);
            tmp_863 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((((Conv(64->32, rdx<8>) | Conv(64->32, rax<8>)) & Conv(64->32, rcx<8>)) | (Conv(64->32, rdx<8>) & Conv(64->32, rax<8>))) + ((((Conv(64->32, rax<8>) >> 0xd<8>) | (Conv(64->32, rax<8>) << 0x13<8>)) ^ ((Conv(64->32, rax<8>) >> 0x2<8>) | (Conv(64->32, rax<8>) << 0x1e<8>))) ^ ((Conv(64->32, rax<8>) << 0xa<8>) | (Conv(64->32, rax<8>) >> 0x16<8>))))), Conv(32->64, ((((Conv(64->32, rdi<8>) << 0x7<8>) | (Conv(64->32, rdi<8>) >> 0x19<8>)) ^ (((Conv(64->32, rdi<8>) >> 0xb<8>) | (Conv(64->32, rdi<8>) << 0x15<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x6<8>) | (Conv(64->32, rdi<8>) << 0x1a<8>)))) + ((((Conv(64->32, r13<8>) ^ Conv(64->32, r14<8>)) & Conv(64->32, rdi<8>)) ^ Conv(64->32, r13<8>)) + Conv(64->32, ((rbx<8> + r15<8>) + 0x27b70a85<64>))))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v193 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((((Load(addr=stack_base-200, size=4, endness=Iend_LE) << 0xd<8>) | (Load(addr=stack_base-200, size=4, endness=Iend_LE) >> 0x13<8>)) ^ ((Load(addr=stack_base-200, size=4, endness=Iend_LE) << 0xf<8>) | (Load(addr=stack_base-200, size=4, endness=Iend_LE) >> 0x11<8>))) ^ Conv(64->32, (Conv(32->64, Load(addr=stack_base-200, size=4, endness=Iend_LE)) >> 0xa<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v195 = v190;
            v196 = ((unsigned int)v180 ^ (unsigned int)v188) & (unsigned int)v191;
            v197 = v175 + v13 + 773529912;
            v198 = v191;
            v13 = (unsigned int)v120 + (((unsigned int)v123 * 0x4000 | (unsigned int)v123 >> 18) ^ ((unsigned int)v123 >> 7 | (unsigned int)v123 * 0x2000000) ^ (unsigned int)v123 % 8) + v7 + ((v12 * 0x2000 | v12 >> 19) ^ (v12 * 0x8000 | v12 >> 17) ^ (unsigned int)((unsigned long long)v12 >> 10));
            tmp_357 = v179;
            tmp_358 = (((unsigned int)v191 * 128 | (unsigned int)v191 >> 25) ^ ((unsigned int)v191 >> 11 | (unsigned int)v191 * 0x200000) ^ ((unsigned int)v198 >> 6 | (unsigned int)v198 * 0x4000000)) + (unsigned int)v197 + ((unsigned int)v196 ^ (unsigned int)v180);
            v199 = (unsigned int)v179 + (((unsigned int)v191 * 128 | (unsigned int)v191 >> 25) ^ ((unsigned int)v191 >> 11 | (unsigned int)v191 * 0x200000) ^ ((unsigned int)v198 >> 6 | (unsigned int)v198 * 0x4000000)) + (unsigned int)v197 + ((unsigned int)v196 ^ (unsigned int)v180);
            tmp_536 = (((unsigned int)v191 * 128 | (unsigned int)v191 >> 25) ^ ((unsigned int)v191 >> 11 | (unsigned int)v191 * 0x200000) ^ ((unsigned int)v198 >> 6 | (unsigned int)v198 * 0x4000000)) + (unsigned int)v197 + ((unsigned int)v196 ^ (unsigned int)v180);
            v200 = (((unsigned int)v189 | (unsigned int)v192) & (unsigned int)v181 | (unsigned int)v189 & (unsigned int)v192) + (((unsigned int)v192 >> 13 | (unsigned int)v192 * 0x80000) ^ ((unsigned int)v192 >> 2 | (unsigned int)v192 * 0x40000000) ^ ((unsigned int)v192 * 0x400 | (unsigned int)v192 >> 22)) + (((unsigned int)v191 * 128 | (unsigned int)v191 >> 25) ^ ((unsigned int)v191 >> 11 | (unsigned int)v191 * 0x200000) ^ ((unsigned int)v198 >> 6 | (unsigned int)v198 * 0x4000000)) + (unsigned int)v197 + ((unsigned int)v196 ^ (unsigned int)v180);
            v201 = (unsigned int)v123 + (((unsigned int)v133 * 0x4000 | (unsigned int)v133 >> 18) ^ ((unsigned int)v133 >> 7 | (unsigned int)v133 * 0x2000000) ^ (unsigned int)v133 % 8) + v8 + (((unsigned int)v195 * 0x2000 | (unsigned int)v195 >> 19) ^ ((unsigned int)v190 * 0x8000 | (unsigned int)v190 >> 17) ^ (unsigned int)v190 % 0x400);
            tmp_705 = v180 + (unsigned int)v123 + (((unsigned int)v133 * 0x4000 | (unsigned int)v133 >> 18) ^ ((unsigned int)v133 >> 7 | (unsigned int)v133 * 0x2000000) ^ (unsigned int)v133 % 8) + v8 + (((unsigned int)v195 * 0x2000 | (unsigned int)v195 >> 19) ^ ((unsigned int)v190 * 0x8000 | (unsigned int)v190 >> 17) ^ (unsigned int)v190 % 0x400) + 1294757372;
            tmp_726 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rdi<8>) ^ Conv(64->32, rsi<8>)) & Conv(64->32, rcx<8>)) ^ Conv(64->32, rdi<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v202 = v1;
            v24 = (unsigned int)v123 + (((unsigned int)v133 * 0x4000 | (unsigned int)v133 >> 18) ^ ((unsigned int)v133 >> 7 | (unsigned int)v133 * 0x2000000) ^ (unsigned int)v133 % 8) + v8 + (((unsigned int)v195 * 0x2000 | (unsigned int)v195 >> 19) ^ ((unsigned int)v190 * 0x8000 | (unsigned int)v190 >> 17) ^ (unsigned int)v190 % 0x400);
            tmp_750 = ((unsigned int)v188 ^ (unsigned int)v191) & (unsigned int)v199 ^ (unsigned int)v188;
            v203 = v181 + (((unsigned int)v199 * 128 | (unsigned int)v199 >> 25) ^ ((unsigned int)v199 >> 11 | (unsigned int)v199 * 0x200000) ^ ((unsigned int)v199 >> 6 | (unsigned int)v199 * 0x4000000)) + (unsigned int)tmp_705 + (((unsigned int)v188 ^ (unsigned int)v191) & (unsigned int)v199 ^ (unsigned int)v188);
            v204 = (((unsigned int)v192 | (unsigned int)v200) & (unsigned int)v189 | (unsigned int)v192 & (unsigned int)v200) + (((unsigned int)v200 >> 13 | (unsigned int)v200 * 0x80000) ^ ((unsigned int)v200 >> 2 | (unsigned int)v200 * 0x40000000) ^ ((unsigned int)v200 * 0x400 | (unsigned int)v200 >> 22)) + (((unsigned int)v199 * 128 | (unsigned int)v199 >> 25) ^ ((unsigned int)v199 >> 11 | (unsigned int)v199 * 0x200000) ^ ((unsigned int)v199 >> 6 | (unsigned int)v199 * 0x4000000)) + (unsigned int)tmp_705 + (((unsigned int)v188 ^ (unsigned int)v191) & (unsigned int)v199 ^ (unsigned int)v188);
            v205 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((Load(addr=stack_base-196, size=4, endness=Iend_LE) << 0xf<8>) | (Load(addr=stack_base-196, size=4, endness=Iend_LE) >> 0x11<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v206 = (v13 * 0x2000 | v13 >> 19) ^ (v13 * 0x8000 | v13 >> 17);
            v207 = v13;
            v208 = (unsigned int)v133 + ((v190 * 0x4000 | v190 % 0x40000) ^ ((unsigned int)v190 >> 7 | (unsigned int)v190 * 0x2000000) ^ (unsigned int)v190 % 8) + v9 + ((unsigned int)v206 ^ (unsigned int)v207 % 0x400);
            *((unsigned long long *)&v25) = (unsigned int)v133 + ((v190 * 0x4000 | v190 % 0x40000) ^ ((unsigned int)v190 >> 7 | (unsigned int)v190 * 0x2000000) ^ (unsigned int)v190 % 8) + v9 + ((unsigned int)v206 ^ (unsigned int)v207 % 0x400);
            v209 = (unsigned int)v189 + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191);
            v210 = (((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191);
            tmp_717 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((Conv(64->32, r13<8>) << 0xd<8>) | (Conv(64->32, r13<8>) >> 0x13<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_755 = ((unsigned int)v201 * 0x2000 | (unsigned int)v201 >> 19) ^ ((unsigned int)v201 * 0x8000 | (unsigned int)v201 >> 17) ^ (unsigned int)v201 % 0x400;
            v211 = (((unsigned int)v201 * 0x2000 | (unsigned int)v201 >> 19) ^ ((unsigned int)v201 * 0x8000 | (unsigned int)v201 >> 17) ^ (unsigned int)v201 % 0x400) + (((unsigned int)v202 * 0x4000 | (unsigned int)v202 >> 18) ^ ((unsigned int)v202 >> 7 | (unsigned int)v202 * 0x2000000) ^ (unsigned int)v202 % 8) + v190 + v10;
            tmp_942 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rax<8>) >> 0xb<8>) | (Conv(64->32, rax<8>) << 0x15<8>)) ^ ((Conv(64->32, rax<8>) >> 0x6<8>) | (Conv(64->32, rax<8>) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_947 = (((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191) >> 2 | ((((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191)) * 0x40000000;
            tmp_952 = (((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191) >> 2 | ((((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191)) * 0x40000000;
            v212 = (((unsigned int)v209 * 128 | (unsigned int)v209 >> 25) ^ ((unsigned int)v209 >> 11 | (unsigned int)v209 * 0x200000) ^ ((unsigned int)v209 >> 6 | (unsigned int)v209 * 0x4000000)) + (unsigned int)(v191 + v211 + 1695183700) + (((unsigned int)v199 ^ (unsigned int)v203) & (unsigned int)v209 ^ (unsigned int)v199);
            tmp_1010 = (((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191) >> 13 | ((((unsigned int)v200 | (unsigned int)v204) & (unsigned int)v192 | (unsigned int)v200 & (unsigned int)v204) + (((unsigned int)v204 >> 13 | (unsigned int)v204 * 0x80000) ^ ((unsigned int)v204 >> 2 | (unsigned int)v204 * 0x40000000) ^ ((unsigned int)v204 * 0x400 | (unsigned int)v204 >> 22)) + (((unsigned int)v203 * 128 | (unsigned int)v203 >> 25) ^ ((unsigned int)v203 >> 11 | (unsigned int)v203 * 0x200000) ^ ((unsigned int)v203 >> 6 | (unsigned int)v203 * 0x4000000)) + (unsigned int)(v188 + v208 + 1396182291) + (((unsigned int)v191 ^ (unsigned int)v199) & (unsigned int)v203 ^ (unsigned int)v191)) * 0x80000;
            v213 = (unsigned int)v192 + (((unsigned int)v209 * 128 | (unsigned int)v209 >> 25) ^ ((unsigned int)v209 >> 11 | (unsigned int)v209 * 0x200000) ^ ((unsigned int)v209 >> 6 | (unsigned int)v209 * 0x4000000)) + (unsigned int)(v191 + v211 + 1695183700) + (((unsigned int)v199 ^ (unsigned int)v203) & (unsigned int)v209 ^ (unsigned int)v199);
            v214 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (Conv(64->32, t1010) ^ Conv(64->32, t952))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v215 = (unsigned int)tmp_1010 ^ (unsigned int)tmp_952 ^ ((unsigned int)v210 * 0x400 | (unsigned int)v210 >> 22);
            v216 = ((unsigned int)v204 | (unsigned int)v210) & (unsigned int)v200 | (unsigned int)v204 & (unsigned int)v210;
            tmp_262 = v216;
            tmp_290 = v216 + v215;
            v217 = v216 + v215 + v212;
            tmp_450 = (((unsigned int)v208 * 0x2000 | (unsigned int)v208 >> 19) ^ ((unsigned int)v208 * 0x8000 | (unsigned int)v208 >> 17) ^ (unsigned int)v208 % 0x400) + ((v2 * 0x4000 | v2 >> 18) ^ (v2 >> 7 | v2 * 0x2000000) ^ (unsigned int)((unsigned long long)v2 >> 3)) + (unsigned int)v202 + v11;
            v3 = (((unsigned int)v208 * 0x2000 | (unsigned int)v208 >> 19) ^ ((unsigned int)v208 * 0x8000 | (unsigned int)v208 >> 17) ^ (unsigned int)v208 % 0x400) + ((v2 * 0x4000 | v2 >> 18) ^ (v2 >> 7 | v2 * 0x2000000) ^ (unsigned int)((unsigned long long)v2 >> 3)) + (unsigned int)v202 + v11;
            v15 = v211;
            v218 = v4;
            tmp_546 = (unsigned int)v217 * 0x400 | (unsigned int)v217 >> 22;
            tmp_668 = v200;
            v219 = (unsigned int)v200 + (((unsigned int)v213 * 128 | (unsigned int)v213 >> 25) ^ ((unsigned int)v213 >> 11 | (unsigned int)v213 * 0x200000) ^ ((unsigned int)v213 >> 6 | (unsigned int)v213 * 0x4000000)) + (unsigned int)(v199 + tmp_450 + 1986661051) + (((unsigned int)v203 ^ (unsigned int)v209) & (unsigned int)v213 ^ (unsigned int)v203);
            v220 = (((unsigned int)v210 | (unsigned int)v217) & (unsigned int)v204 | (unsigned int)v210 & (unsigned int)v217) + (((unsigned int)v217 >> 13 | (unsigned int)v217 * 0x80000) ^ ((unsigned int)v217 >> 2 | (unsigned int)v217 * 0x40000000) ^ ((unsigned int)v217 * 0x400 | (unsigned int)v217 >> 22)) + (((unsigned int)v213 * 128 | (unsigned int)v213 >> 25) ^ ((unsigned int)v213 >> 11 | (unsigned int)v213 * 0x200000) ^ ((unsigned int)v213 >> 6 | (unsigned int)v213 * 0x4000000)) + (unsigned int)(v199 + tmp_450 + 1986661051) + (((unsigned int)v203 ^ (unsigned int)v209) & (unsigned int)v213 ^ (unsigned int)v203);
            tmp_850 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((((Conv(64->32, r13<8>) << 0xd<8>) | (Conv(64->32, r13<8>) >> 0x13<8>)) ^ ((Conv(64->32, r13<8>) << 0xf<8>) | (Conv(64->32, r13<8>) >> 0x11<8>))) ^ Conv(64->32, (r13<8> >> 0xa<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v221 = (((unsigned int)v211 * 0x2000 | (unsigned int)v211 >> 19) ^ ((unsigned int)v211 * 0x8000 | (unsigned int)v211 >> 17) ^ (unsigned int)v211 % 0x400) + ((v4 * 0x4000 | v4 >> 18) ^ (v4 >> 7 | v4 * 0x2000000) ^ (unsigned int)v218 % 8) + v2 + v12;
            tmp_951 = v203 + (((unsigned int)v211 * 0x2000 | (unsigned int)v211 >> 19) ^ ((unsigned int)v211 * 0x8000 | (unsigned int)v211 >> 17) ^ (unsigned int)v211 % 0x400) + ((v4 * 0x4000 | v4 >> 18) ^ (v4 >> 7 | v4 * 0x2000000) ^ (unsigned int)v218 % 8) + v2 + v12 - 2117940946;
            v222 = (unsigned int)v217 & (((unsigned int)v210 | (unsigned int)v217) & (unsigned int)v204 | (unsigned int)v210 & (unsigned int)v217) + (((unsigned int)v217 >> 13 | (unsigned int)v217 * 0x80000) ^ ((unsigned int)v217 >> 2 | (unsigned int)v217 * 0x40000000) ^ ((unsigned int)v217 * 0x400 | (unsigned int)v217 >> 22)) + (((unsigned int)v213 * 128 | (unsigned int)v213 >> 25) ^ ((unsigned int)v213 >> 11 | (unsigned int)v213 * 0x200000) ^ ((unsigned int)v213 >> 6 | (unsigned int)v213 * 0x4000000)) + (unsigned int)(v199 + tmp_450 + 1986661051) + (((unsigned int)v203 ^ (unsigned int)v209) & (unsigned int)v213 ^ (unsigned int)v203);
            v223 = v5;
            v5 = (((unsigned int)v211 * 0x2000 | (unsigned int)v211 >> 19) ^ ((unsigned int)v211 * 0x8000 | (unsigned int)v211 >> 17) ^ (unsigned int)v211 % 0x400) + ((v4 * 0x4000 | v4 >> 18) ^ (v4 >> 7 | v4 * 0x2000000) ^ (unsigned int)v218 % 8) + v2 + v12;
            v224 = (unsigned int)tmp_951 + (((unsigned int)v209 ^ (unsigned int)v213) & (unsigned int)v219 ^ (unsigned int)v209);
            v226 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r10<8>) >> 0xb<8>) | (Conv(64->32, r10<8>) * 0x200000<32>)) ^ ((Conv(64->32, r10<8>) >> 0x6<8>) | (Conv(64->32, r10<8>) * 0x4000000<32>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v227 = ((unsigned int)v219 * 128 | (unsigned int)v219 >> 25) ^ ((unsigned int)v219 >> 11 | (unsigned int)v219 * 0x200000) ^ ((unsigned int)v219 >> 6 | (unsigned int)v219 * 0x4000000);
            v228 = v204 + v227 + v224;
            v229 = (((unsigned int)v217 | (unsigned int)v220) & (unsigned int)v210 | (unsigned int)v222) + (((unsigned int)v220 >> 13 | (unsigned int)v220 * 0x80000) ^ ((unsigned int)v220 >> 2 | (unsigned int)v220 * 0x40000000) ^ ((unsigned int)v220 * 0x400 | (unsigned int)v220 >> 22)) + (unsigned int)(v227 + v224);
            tmp_578 = (((unsigned int)v223 * 0x4000 | (unsigned int)v223 >> 18) ^ ((unsigned int)v223 >> 7 | (unsigned int)v223 * 0x2000000) ^ (unsigned int)v223 % 8) + (unsigned int)v218 + v23;
            v230 = v6;
            tmp_625 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r11<8>) ^ Conv(64->32, r10<8>)) & Conv(64->32, r9<8>)) ^ Conv(64->32, r11<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_641 = (unsigned int)v220 & (((unsigned int)v217 | (unsigned int)v220) & (unsigned int)v210 | (unsigned int)v222) + (((unsigned int)v220 >> 13 | (unsigned int)v220 * 0x80000) ^ ((unsigned int)v220 >> 2 | (unsigned int)v220 * 0x40000000) ^ ((unsigned int)v220 * 0x400 | (unsigned int)v220 >> 22)) + (unsigned int)(v227 + v224);
            tmp_646 = ((unsigned int)v213 ^ (unsigned int)v219) & (unsigned int)v228 ^ (unsigned int)v213;
            v0 = (unsigned long long)((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + tmp_578;
            tmp_749 = (((unsigned int)v217 | (unsigned int)v220) & (unsigned int)v210 | (unsigned int)v222) + (((unsigned int)v220 >> 13 | (unsigned int)v220 * 0x80000) ^ ((unsigned int)v220 >> 2 | (unsigned int)v220 * 0x40000000) ^ ((unsigned int)v220 * 0x400 | (unsigned int)v220 >> 22)) + (unsigned int)(v227 + v224) >> 2 | ((((unsigned int)v217 | (unsigned int)v220) & (unsigned int)v210 | (unsigned int)v222) + (((unsigned int)v220 >> 13 | (unsigned int)v220 * 0x80000) ^ ((unsigned int)v220 >> 2 | (unsigned int)v220 * 0x40000000) ^ ((unsigned int)v220 * 0x400 | (unsigned int)v220 >> 22)) + (unsigned int)(v227 + v224)) * 0x40000000;
            tmp_760 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, (((((((Conv(64->32, rbx<8>) | Conv(64->32, r15<8>)) & Conv(64->32, r8<8>)) | Conv(64->32, rsi<8>)) + ((((Conv(64->32, r15<8>) >> 0xd<8>) | (Conv(64->32, r15<8>) << 0x13<8>)) ^ ((Conv(64->32, r15<8>) >> 0x2<8>) | (Conv(64->32, r15<8>) << 0x1e<8>))) ^ ((Conv(64->32, r15<8>) << 0xa<8>) | (Conv(64->32, r15<8>) >> 0x16<8>)))) + Conv(64->32, (rdx<8> + rcx<8>))) >> 0x2<8>) | ((((((Conv(64->32, rbx<8>) | Conv(64->32, r15<8>)) & Conv(64->32, r8<8>)) | Conv(64->32, rsi<8>)) + ((((Conv(64->32, r15<8>) >> 0xd<8>) | (Conv(64->32, r15<8>) << 0x13<8>)) ^ ((Conv(64->32, r15<8>) >> 0x2<8>) | (Conv(64->32, r15<8>) << 0x1e<8>))) ^ ((Conv(64->32, r15<8>) << 0xa<8>) | (Conv(64->32, r15<8>) >> 0x16<8>)))) + Conv(64->32, (rdx<8> + rcx<8>))) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_770 = (((unsigned int)v217 | (unsigned int)v220) & (unsigned int)v210 | (unsigned int)v222) + (((unsigned int)v220 >> 13 | (unsigned int)v220 * 0x80000) ^ ((unsigned int)v220 >> 2 | (unsigned int)v220 * 0x40000000) ^ ((unsigned int)v220 * 0x400 | (unsigned int)v220 >> 22)) + (unsigned int)(v227 + v224) >> 13 | ((((unsigned int)v217 | (unsigned int)v220) & (unsigned int)v210 | (unsigned int)v222) + (((unsigned int)v220 >> 13 | (unsigned int)v220 * 0x80000) ^ ((unsigned int)v220 >> 2 | (unsigned int)v220 * 0x40000000) ^ ((unsigned int)v220 * 0x400 | (unsigned int)v220 >> 22)) + (unsigned int)(v227 + v224)) * 0x80000;
            v231 = (unsigned int)v210 + (((unsigned int)v228 * 128 | (unsigned int)v228 >> 25) ^ ((unsigned int)v228 >> 11 | (unsigned int)v228 * 0x200000) ^ ((unsigned int)v228 >> 6 | (unsigned int)v228 * 0x4000000)) + (((unsigned int)v213 ^ (unsigned int)v219) & (unsigned int)v228 ^ (unsigned int)v213) + (unsigned int)(v209 + (unsigned long long)((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + tmp_578 - 1838011259);
            tmp_871 = (((unsigned int)v228 * 128 | (unsigned int)v228 >> 25) ^ ((unsigned int)v228 >> 11 | (unsigned int)v228 * 0x200000) ^ ((unsigned int)v228 >> 6 | (unsigned int)v228 * 0x4000000)) + (((unsigned int)v213 ^ (unsigned int)v219) & (unsigned int)v228 ^ (unsigned int)v213) + (unsigned int)(v209 + (unsigned long long)((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + tmp_578 - 1838011259);
            v232 = (((unsigned int)v220 | (unsigned int)v229) & (unsigned int)v217 | (unsigned int)tmp_641) + ((unsigned int)tmp_770 ^ (unsigned int)tmp_749 ^ ((unsigned int)v229 * 0x400 | (unsigned int)v229 >> 22)) + (((unsigned int)v228 * 128 | (unsigned int)v228 >> 25) ^ ((unsigned int)v228 >> 11 | (unsigned int)v228 * 0x200000) ^ ((unsigned int)v228 >> 6 | (unsigned int)v228 * 0x4000000)) + (((unsigned int)v213 ^ (unsigned int)v219) & (unsigned int)v228 ^ (unsigned int)v213) + (unsigned int)(v209 + (unsigned long long)((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + tmp_578 - 1838011259);
            tmp_928 = ((unsigned int)v221 * 0x2000 | (unsigned int)v221 >> 19) ^ ((unsigned int)v221 * 0x8000 | (unsigned int)v221 >> 17) ^ (unsigned int)v221 % 0x400;
            v233 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Load(addr=stack_base-224, size=4, endness=Iend_LE) >> 0x7<8>) | (Load(addr=stack_base-224, size=4, endness=Iend_LE) << 0x19<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v234 = (unsigned int)v229 & (((unsigned int)v220 | (unsigned int)v229) & (unsigned int)v217 | (unsigned int)tmp_641) + ((unsigned int)tmp_770 ^ (unsigned int)tmp_749 ^ ((unsigned int)v229 * 0x400 | (unsigned int)v229 >> 22)) + (((unsigned int)v228 * 128 | (unsigned int)v228 >> 25) ^ ((unsigned int)v228 >> 11 | (unsigned int)v228 * 0x200000) ^ ((unsigned int)v228 >> 6 | (unsigned int)v228 * 0x4000000)) + (((unsigned int)v213 ^ (unsigned int)v219) & (unsigned int)v228 ^ (unsigned int)v213) + (unsigned int)(v209 + (unsigned long long)((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + tmp_578 - 1838011259);
            tmp_1025 = ((v6 * 0x4000 | v6 >> 18) ^ (v6 >> 7 | v6 * 0x2000000) ^ (unsigned int)((unsigned long long)v6 >> 3)) + (unsigned int)v223 + v13;
            v235 = v0;
            v236 = tmp_928 + tmp_1025;
            v237 = ((unsigned int)v219 ^ (unsigned int)v228) & (unsigned int)v231;
            v238 = v232;
            v239 = v213 + tmp_928 + tmp_1025 - 1564481375;
            v240 = v231;
            v6 = tmp_928 + tmp_1025;
            tmp_385 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, (((Conv(64->32, r8<8>) << 0x7<8>) | (Conv(64->32, r8<8>) >> 0x19<8>)) ^ (((Conv(64->32, r8<8>) >> 0xb<8>) | (Conv(64->32, r8<8>) << 0x15<8>)) ^ ((Conv(64->32, r11<8>) >> 0x6<8>) | (Conv(64->32, r11<8>) << 0x1a<8>))))), Conv(32->64, (Conv(64->32, rdx<8>) + (Conv(64->32, rax<8>) ^ Conv(64->32, r10<8>)))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v241 = (unsigned int)v217 + (((unsigned int)v231 * 128 | (unsigned int)v231 >> 25) ^ ((unsigned int)v231 >> 11 | (unsigned int)v231 * 0x200000) ^ ((unsigned int)v240 >> 6 | (unsigned int)v240 * 0x4000000)) + (unsigned int)v239 + ((unsigned int)v237 ^ (unsigned int)v219);
            tmp_517 = (((unsigned int)v231 * 128 | (unsigned int)v231 >> 25) ^ ((unsigned int)v231 >> 11 | (unsigned int)v231 * 0x200000) ^ ((unsigned int)v240 >> 6 | (unsigned int)v240 * 0x4000000)) + (unsigned int)v239 + ((unsigned int)v237 ^ (unsigned int)v219);
            v242 = (((unsigned int)v229 | (unsigned int)v232) & (unsigned int)v220 | (unsigned int)v234) + (((unsigned int)v232 >> 13 | (unsigned int)v232 * 0x80000) ^ ((unsigned int)v232 >> 2 | (unsigned int)v232 * 0x40000000) ^ ((unsigned int)v232 * 0x400 | (unsigned int)v232 >> 22)) + (((unsigned int)v231 * 128 | (unsigned int)v231 >> 25) ^ ((unsigned int)v231 >> 11 | (unsigned int)v231 * 0x200000) ^ ((unsigned int)v240 >> 6 | (unsigned int)v240 * 0x4000000)) + (unsigned int)v239 + ((unsigned int)v237 ^ (unsigned int)v219);
            tmp_548 = ((unsigned int)v235 * 0x2000 | (unsigned int)v235 >> 19) ^ ((unsigned int)v235 * 0x8000 | (unsigned int)v235 >> 17);
            tmp_549 = v235;
            v243 = v7;
            tmp_672 = ((v7 * 0x4000 | v7 >> 18) ^ (v7 >> 7 | v7 * 0x2000000) ^ (unsigned int)((unsigned long long)v7 >> 3)) + (unsigned int)v230 + v24;
            v244 = v8;
            v1 = (unsigned int)tmp_672 + ((unsigned int)tmp_548 ^ (unsigned int)(tmp_549 >> 10));
            tmp_750 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((Conv(64->32, r9<8>) ^ Conv(64->32, r8<8>)) & Conv(64->32, rbx<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_772 = ((unsigned int)v228 ^ (unsigned int)v231) & (unsigned int)v241 ^ (unsigned int)v228;
            tmp_890 = v220;
            v245 = (unsigned int)v220 + (((unsigned int)v241 * 128 | (unsigned int)v241 >> 25) ^ ((unsigned int)v241 >> 11 | (unsigned int)v241 * 0x200000) ^ ((unsigned int)v241 >> 6 | (unsigned int)v241 * 0x4000000)) + (unsigned int)(v219 + (unsigned int)tmp_672 + ((unsigned int)tmp_548 ^ (unsigned int)(tmp_549 >> 10)) - 1474664885) + (((unsigned int)v228 ^ (unsigned int)v231) & (unsigned int)v241 ^ (unsigned int)v228);
            tmp_903 = [D] amd64g_calculate_rflags_all(0x3<64>, t890, Conv(32->64, ((((Conv(64->32, rbx<8>) << 0x7<8>) | (Conv(64->32, rbx<8>) >> 0x19<8>)) ^ (((Conv(64->32, rbx<8>) >> 0xb<8>) | (Conv(64->32, rbx<8>) << 0x15<8>)) ^ ((Conv(64->32, rbx<8>) >> 0x6<8>) | (Conv(64->32, rbx<8>) << 0x1a<8>)))) + (Conv(64->32, ((r10<8> + Conv(32->64, (Conv(64->32, t672) + (Conv(64->32, t548) ^ Conv(64->32, (t549 >> 0xa<8>)))))) - 0x57e599b5<64>)) + (((Conv(64->32, r9<8>) ^ Conv(64->32, r8<8>)) & Conv(64->32, rbx<8>)) ^ Conv(64->32, r9<8>))))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_958 = (((unsigned int)v232 | (unsigned int)v242) & (unsigned int)v229 | (unsigned int)v238 & (unsigned int)v242) + (((unsigned int)v242 >> 13 | (unsigned int)v242 * 0x80000) ^ ((unsigned int)v242 >> 2 | (unsigned int)v242 * 0x40000000) ^ ((unsigned int)v242 * 0x400 | (unsigned int)v242 >> 22));
            tmp_959 = (((unsigned int)v241 * 128 | (unsigned int)v241 >> 25) ^ ((unsigned int)v241 >> 11 | (unsigned int)v241 * 0x200000) ^ ((unsigned int)v241 >> 6 | (unsigned int)v241 * 0x4000000)) + (unsigned int)(v219 + (unsigned int)tmp_672 + ((unsigned int)tmp_548 ^ (unsigned int)(tmp_549 >> 10)) - 1474664885) + (((unsigned int)v228 ^ (unsigned int)v231) & (unsigned int)v241 ^ (unsigned int)v228);
            v246 = (((unsigned int)v232 | (unsigned int)v242) & (unsigned int)v229 | (unsigned int)v238 & (unsigned int)v242) + (((unsigned int)v242 >> 13 | (unsigned int)v242 * 0x80000) ^ ((unsigned int)v242 >> 2 | (unsigned int)v242 * 0x40000000) ^ ((unsigned int)v242 * 0x400 | (unsigned int)v242 >> 22)) + (((unsigned int)v241 * 128 | (unsigned int)v241 >> 25) ^ ((unsigned int)v241 >> 11 | (unsigned int)v241 * 0x200000) ^ ((unsigned int)v241 >> 6 | (unsigned int)v241 * 0x4000000)) + (unsigned int)(v219 + (unsigned int)tmp_672 + ((unsigned int)tmp_548 ^ (unsigned int)(tmp_549 >> 10)) - 1474664885) + (((unsigned int)v228 ^ (unsigned int)v231) & (unsigned int)v241 ^ (unsigned int)v228);
            v247 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((r13<4> << 0xd<8>) | (r13<4> >> 0x13<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v248 = v8 * 0x4000 | v8 >> 18;
            v249 = (unsigned int)v242 & (unsigned int)v246;
            v251 = ((unsigned int)(tmp_928 + tmp_1025) * 0x2000 | (unsigned int)(tmp_928 + tmp_1025) >> 19) ^ ((unsigned int)(tmp_928 + tmp_1025) * 0x8000 | (unsigned int)(tmp_928 + tmp_1025) >> 17) ^ (unsigned int)(tmp_928 + tmp_1025 >> 10);
            v252 = v8;
            tmp_297 = ((unsigned int)v248 ^ ((unsigned int)v252 >> 7 | (unsigned int)v252 * 0x2000000) ^ (unsigned int)v244 % 8) + (unsigned int)v243 + v25;
            tmp_312 = ((unsigned int)v231 ^ (unsigned int)v241) & (unsigned int)v245;
            v253 = v251 + (unsigned long long)(((unsigned int)v248 ^ ((unsigned int)v252 >> 7 | (unsigned int)v252 * 0x2000000) ^ (unsigned int)v244 % 8) + (unsigned int)v243 + v25);
            v7 = v251 + (unsigned long long)(((unsigned int)v248 ^ ((unsigned int)v252 >> 7 | (unsigned int)v252 * 0x2000000) ^ (unsigned int)v244 % 8) + (unsigned int)v243 + v25);
            tmp_364 = v228 + v251 + (unsigned long long)(((unsigned int)v248 ^ ((unsigned int)v252 >> 7 | (unsigned int)v252 * 0x2000000) ^ (unsigned int)v244 % 8) + (unsigned int)v243 + v25) - 1035236496;
            tmp_439 = (((unsigned int)v245 * 128 | (unsigned int)v245 >> 25) ^ ((unsigned int)v245 >> 11 | (unsigned int)v245 * 0x200000) ^ ((unsigned int)v245 >> 6 | (unsigned int)v245 * 0x4000000)) + (unsigned int)(v228 + v251 + (unsigned long long)(((unsigned int)v248 ^ ((unsigned int)v252 >> 7 | (unsigned int)v252 * 0x2000000) ^ (unsigned int)v244 % 8) + (unsigned int)v243 + v25) - 1035236496) + ((unsigned int)tmp_312 ^ (unsigned int)v231);
            v254 = v229 + (((unsigned int)v245 * 128 | (unsigned int)v245 >> 25) ^ ((unsigned int)v245 >> 11 | (unsigned int)v245 * 0x200000) ^ ((unsigned int)v245 >> 6 | (unsigned int)v245 * 0x4000000)) + (unsigned int)(v228 + v251 + (unsigned long long)(((unsigned int)v248 ^ ((unsigned int)v252 >> 7 | (unsigned int)v252 * 0x2000000) ^ (unsigned int)v244 % 8) + (unsigned int)v243 + v25) - 1035236496) + ((unsigned int)tmp_312 ^ (unsigned int)v231);
            tmp_480 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Conv(64->32, r10<8>) >> 0x2<8>) | (Conv(64->32, r10<8>) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_576 = (((unsigned int)v245 * 128 | (unsigned int)v245 >> 25) ^ ((unsigned int)v245 >> 11 | (unsigned int)v245 * 0x200000) ^ ((unsigned int)v245 >> 6 | (unsigned int)v245 * 0x4000000)) + (unsigned int)(v228 + v251 + tmp_297 - 1035236496) + ((unsigned int)tmp_312 ^ (unsigned int)v231);
            v255 = (((unsigned int)v242 | (unsigned int)v246) & (unsigned int)v232 | (unsigned int)v249) + (((unsigned int)v246 >> 13 | (unsigned int)v246 * 0x80000) ^ ((unsigned int)v246 >> 2 | (unsigned int)v246 * 0x40000000) ^ ((unsigned int)v246 * 0x400 | (unsigned int)v246 >> 22)) + (((unsigned int)v245 * 128 | (unsigned int)v245 >> 25) ^ ((unsigned int)v245 >> 11 | (unsigned int)v245 * 0x200000) ^ ((unsigned int)v245 >> 6 | (unsigned int)v245 * 0x4000000)) + (unsigned int)(v228 + v251 + tmp_297 - 1035236496) + ((unsigned int)tmp_312 ^ (unsigned int)v231);
            v256 = v9;
            tmp_676 = ((unsigned int)v241 ^ (unsigned int)v245) & (unsigned int)(v229 + tmp_439) ^ (unsigned int)v241;
            tmp_687 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rbx<8>) ^ Conv(64->32, r15<8>)) & Conv(64->32, (rdi<8> + t439))) ^ Conv(64->32, rbx<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_759 = ((v9 * 0x4000 | v9 >> 18) ^ (v9 >> 7 | v9 * 0x2000000) ^ (unsigned int)v256 % 8) + (unsigned int)v244;
            tmp_761 = ((v9 * 0x4000 | v9 >> 18) ^ (v9 >> 7 | v9 * 0x2000000) ^ (unsigned int)v256 % 8) + (unsigned int)v244 + v15;
            v257 = v253;
            v2 = ((v1 * 0x2000 | v1 >> 19) ^ (v1 * 0x8000 | v1 >> 17) ^ (unsigned int)((unsigned long long)v1 >> 10)) + ((v9 * 0x4000 | v9 >> 18) ^ (v9 >> 7 | v9 * 0x2000000) ^ (unsigned int)v256 % 8) + (unsigned int)v244 + v15;
            v258 = v253;
            v260 = v232 + (((unsigned int)v254 * 128 | (unsigned int)v254 >> 25) ^ ((unsigned int)v254 >> 11 | (unsigned int)v254 * 0x200000) ^ ((unsigned int)v254 >> 6 | (unsigned int)v254 * 0x4000000)) + (unsigned int)(v231 + (unsigned long long)((v1 * 0x2000 | v1 >> 19) ^ (v1 * 0x8000 | v1 >> 17) ^ (unsigned int)((unsigned long long)v1 >> 10)) + tmp_761 - 949202525 + tmp_676);
            v261 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r9<8>) >> 0xd<8>) | (Conv(64->32, r9<8>) << 0x13<8>)) ^ ((Conv(64->32, r9<8>) >> 0x2<8>) | (Conv(64->32, r9<8>) << 0x1e<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v262 = ((unsigned int)v255 >> 13 | (unsigned int)v255 * 0x80000) ^ ((unsigned int)v255 >> 2 | (unsigned int)v255 * 0x40000000) ^ ((unsigned int)v255 * 0x400 | (unsigned int)v255 >> 22);
            v263 = (unsigned int)v246 | (unsigned int)v255;
            v264 = v246;
            tmp_300 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((Conv(64->32, rdx<8>) & Conv(64->32, r11<8>)) | (Conv(64->32, r8<8>) & Conv(64->32, r9<8>)))), rsi<8>, cc_ndep<8>);
            v265 = ((unsigned int)v263 & (unsigned int)v242 | (unsigned int)v264 & (unsigned int)v255) + (unsigned int)v262 + (((unsigned int)v254 * 128 | (unsigned int)v254 >> 25) ^ ((unsigned int)v254 >> 11 | (unsigned int)v254 * 0x200000) ^ ((unsigned int)v254 >> 6 | (unsigned int)v254 * 0x4000000)) + (unsigned int)(v231 + (unsigned long long)((v1 * 0x2000 | v1 >> 19) ^ (v1 * 0x8000 | v1 >> 17) ^ (unsigned int)((unsigned long long)v1 >> 10)) + tmp_761 - 949202525 + tmp_676);
            v4 = (((unsigned int)v257 * 0x2000 | (unsigned int)v257 >> 19) ^ ((unsigned int)v258 * 0x8000 | (unsigned int)v258 >> 17) ^ (unsigned int)v253 % 0x400) + ((v10 * 0x4000 | v10 >> 18) ^ (v10 >> 7 | v10 * 0x2000000) ^ (unsigned int)((unsigned long long)v10 >> 3)) + (unsigned int)v256 + v3;
            tmp_513 = v241 + (((unsigned int)v257 * 0x2000 | (unsigned int)v257 >> 19) ^ ((unsigned int)v258 * 0x8000 | (unsigned int)v258 >> 17) ^ (unsigned int)v253 % 0x400) + ((v10 * 0x4000 | v10 >> 18) ^ (v10 >> 7 | v10 * 0x2000000) ^ (unsigned int)((unsigned long long)v10 >> 3)) + (unsigned int)v256 + v3 - 778901479;
            v266 = v11;
            v267 = v242 + (((unsigned int)v260 * 128 | (unsigned int)v260 >> 25) ^ ((unsigned int)v260 >> 11 | (unsigned int)v260 * 0x200000) ^ ((unsigned int)v260 >> 6 | (unsigned int)v260 * 0x4000000)) + (unsigned int)tmp_513 + (((unsigned int)v245 ^ (unsigned int)v254) & (unsigned int)v260 ^ (unsigned int)v245);
            tmp_757 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, (((Conv(64->32, r9<8>) | Conv(64->32, rdx<8>)) & Conv(64->32, r10<8>)) | (Conv(64->32, r9<8>) & Conv(64->32, rdx<8>)))), Conv(32->64, ((((Conv(64->32, rdx<8>) >> 0xd<8>) | (Conv(64->32, rdx<8>) << 0x13<8>)) ^ ((Conv(64->32, rdx<8>) >> 0x2<8>) | (Conv(64->32, rdx<8>) << 0x1e<8>))) ^ ((Conv(64->32, rdx<8>) << 0xa<8>) | (Conv(64->32, rdx<8>) >> 0x16<8>)))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_772 = (((unsigned int)v255 | (unsigned int)v265) & (unsigned int)v246 | (unsigned int)v255 & (unsigned int)v265) + (((unsigned int)v265 >> 13 | (unsigned int)v265 * 0x80000) ^ ((unsigned int)v265 >> 2 | (unsigned int)v265 * 0x40000000) ^ ((unsigned int)v265 * 0x400 | (unsigned int)v265 >> 22));
            tmp_773 = (((unsigned int)v260 * 128 | (unsigned int)v260 >> 25) ^ ((unsigned int)v260 >> 11 | (unsigned int)v260 * 0x200000) ^ ((unsigned int)v260 >> 6 | (unsigned int)v260 * 0x4000000)) + (unsigned int)tmp_513 + (((unsigned int)v245 ^ (unsigned int)v254) & (unsigned int)v260 ^ (unsigned int)v245);
            v268 = (((unsigned int)v255 | (unsigned int)v265) & (unsigned int)v246 | (unsigned int)v255 & (unsigned int)v265) + (((unsigned int)v265 >> 13 | (unsigned int)v265 * 0x80000) ^ ((unsigned int)v265 >> 2 | (unsigned int)v265 * 0x40000000) ^ ((unsigned int)v265 * 0x400 | (unsigned int)v265 >> 22)) + (((unsigned int)v260 * 128 | (unsigned int)v260 >> 25) ^ ((unsigned int)v260 >> 11 | (unsigned int)v260 * 0x200000) ^ ((unsigned int)v260 >> 6 | (unsigned int)v260 * 0x4000000)) + (unsigned int)tmp_513 + (((unsigned int)v245 ^ (unsigned int)v254) & (unsigned int)v260 ^ (unsigned int)v245);
            v269 = ((v2 * 0x2000 | v2 >> 19) ^ (v2 * 0x8000 | v2 >> 17) ^ (unsigned int)((unsigned long long)v2 >> 10)) + ((v11 * 0x4000 | v11 >> 18) ^ (v11 >> 7 | v11 * 0x2000000) ^ (unsigned int)v266 % 8) + v10 + v5;
            tmp_939 = v245 + ((v2 * 0x2000 | v2 >> 19) ^ (v2 * 0x8000 | v2 >> 17) ^ (unsigned int)((unsigned long long)v2 >> 10)) + ((v11 * 0x4000 | v11 >> 18) ^ (v11 >> 7 | v11 * 0x2000000) ^ (unsigned int)v266 % 8) + v10 + v5 - 694614492;
            v270 = v12;
            v8 = ((v2 * 0x2000 | v2 >> 19) ^ (v2 * 0x8000 | v2 >> 17) ^ (unsigned int)((unsigned long long)v2 >> 10)) + ((v11 * 0x4000 | v11 >> 18) ^ (v11 >> 7 | v11 * 0x2000000) ^ (unsigned int)v266 % 8) + v10 + v5;
            v271 = (unsigned int)tmp_939 + (((unsigned int)v254 ^ (unsigned int)v260) & (unsigned int)v267 ^ (unsigned int)v254);
            v273 = ((unsigned int)v267 >> 11 | (unsigned int)v267 * 0x200000) ^ ((unsigned int)v267 >> 6 | (unsigned int)v267 * 0x4000000);
            v274 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r8<8>) >> 0xb<8>) | (Conv(64->32, r8<8>) << 0x15<8>)) ^ ((Conv(64->32, r8<8>) >> 0x6<8>) | (Conv(64->32, r8<8>) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v275 = (unsigned int)v267 * 128 | (unsigned int)v267 >> 25;
            tmp_284 = ((unsigned int)v275 ^ (unsigned int)v273) + (unsigned int)v271;
            v276 = v246 + ((unsigned int)v275 ^ (unsigned int)v273) + (unsigned int)v271;
            v277 = (((unsigned int)v265 | (unsigned int)v268) & (unsigned int)v255 | (unsigned int)v265 & (unsigned int)v268) + (((unsigned int)v268 >> 13 | (unsigned int)v268 * 0x80000) ^ ((unsigned int)v268 >> 2 | (unsigned int)v268 * 0x40000000) ^ ((unsigned int)v268 * 0x400 | (unsigned int)v268 >> 22)) + ((unsigned int)v275 ^ (unsigned int)v273) + (unsigned int)v271;
            tmp_548 = (((unsigned int)v270 * 0x4000 | (unsigned int)v270 >> 18) ^ ((unsigned int)v270 >> 7 | (unsigned int)v270 * 0x2000000) ^ (unsigned int)v270 % 8) + (unsigned int)v266 + v0;
            v9 = ((v4 * 0x2000 | v4 >> 19) ^ (v4 * 0x8000 | v4 >> 17) ^ (unsigned int)((unsigned long long)v4 >> 10)) + (((unsigned int)v270 * 0x4000 | (unsigned int)v270 >> 18) ^ ((unsigned int)v270 >> 7 | (unsigned int)v270 * 0x2000000) ^ (unsigned int)v270 % 8) + (unsigned int)v266 + v0;
            v278 = v23;
            v279 = v255 + (((unsigned int)(v246 + tmp_284) * 128 | (unsigned int)(v246 + tmp_284) >> 25) ^ ((unsigned int)(v246 + tmp_284) >> 11 | (unsigned int)(v246 + tmp_284) * 0x200000) ^ ((unsigned int)(v246 + tmp_284) >> 6 | (unsigned int)(v246 + tmp_284) * 0x4000000)) + (unsigned int)(v254 + (unsigned long long)((v4 * 0x2000 | v4 >> 19) ^ (v4 * 0x8000 | v4 >> 17) ^ (unsigned int)((unsigned long long)v4 >> 10)) + tmp_548 - 200395387) + (((unsigned int)v260 ^ (unsigned int)v267) & (unsigned int)(v246 + tmp_284) ^ (unsigned int)v260);
            v280 = (((unsigned int)v268 | (unsigned int)v277) & (unsigned int)v265 | (unsigned int)v268 & (unsigned int)v277) + (((unsigned int)v277 >> 13 | (unsigned int)v277 * 0x80000) ^ ((unsigned int)v277 >> 2 | (unsigned int)v277 * 0x40000000) ^ ((unsigned int)v277 * 0x400 | (unsigned int)v277 >> 22)) + (((unsigned int)(v246 + tmp_284) * 128 | (unsigned int)(v246 + tmp_284) >> 25) ^ ((unsigned int)(v246 + tmp_284) >> 11 | (unsigned int)(v246 + tmp_284) * 0x200000) ^ ((unsigned int)(v246 + tmp_284) >> 6 | (unsigned int)(v246 + tmp_284) * 0x4000000)) + (unsigned int)(v254 + (unsigned long long)((v4 * 0x2000 | v4 >> 19) ^ (v4 * 0x8000 | v4 >> 17) ^ (unsigned int)((unsigned long long)v4 >> 10)) + tmp_548 - 200395387) + (((unsigned int)v260 ^ (unsigned int)v267) & (unsigned int)(v246 + tmp_284) ^ (unsigned int)v260);
            v281 = (v269 * 0x2000 | v269 % 0x80000) ^ ((unsigned int)r12<8> * 0x8000 | (unsigned int)r12<8> >> 17) ^ (unsigned int)r12<8> % 0x400;
            v282 = ((v23 * 0x4000 | v23 >> 18) ^ (v23 >> 7 | v23 * 0x2000000) ^ (unsigned int)((unsigned long long)v23 >> 3)) + (unsigned int)v270 + v6;
            v283 = v13;
            v284 = v281 + v282;
            v11 = v281 + v282;
            v285 = (unsigned int)v265 + (((unsigned int)v279 * 128 | (unsigned int)v279 >> 25) ^ ((unsigned int)v279 >> 11 | (unsigned int)v279 * 0x200000) ^ ((unsigned int)v279 >> 6 | (unsigned int)v279 * 0x4000000)) + (unsigned int)(v260 + v284 + 275423344) + (((unsigned int)v267 ^ (unsigned int)v276) & (unsigned int)v279 ^ (unsigned int)v267);
            v286 = (((unsigned int)v277 | (unsigned int)v280) & (unsigned int)v268 | (unsigned int)v277 & (unsigned int)v280) + (((unsigned int)v280 >> 13 | (unsigned int)v280 * 0x80000) ^ ((unsigned int)v280 >> 2 | (unsigned int)v280 * 0x40000000) ^ ((unsigned int)v280 * 0x400 | (unsigned int)v280 >> 22)) + (((unsigned int)v279 * 128 | (unsigned int)v279 >> 25) ^ ((unsigned int)v279 >> 11 | (unsigned int)v279 * 0x200000) ^ ((unsigned int)v279 >> 6 | (unsigned int)v279 * 0x4000000)) + (unsigned int)(v260 + v284 + 275423344) + (((unsigned int)v267 ^ (unsigned int)v276) & (unsigned int)v279 ^ (unsigned int)v267);
            tmp_715 = (((unsigned int)v283 * 0x4000 | (unsigned int)v283 >> 18) ^ ((unsigned int)v283 >> 7 | (unsigned int)v283 * 0x2000000) ^ (unsigned int)v283 % 8) + (unsigned int)v278 + v1;
            v287 = v24;
            v10 = ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + (unsigned int)tmp_715;
            v29 = ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + (unsigned int)tmp_715;
            v288 = (unsigned int)v268 + (((unsigned int)v285 * 128 | (unsigned int)v285 >> 25) ^ ((unsigned int)v285 >> 11 | (unsigned int)v285 * 0x200000) ^ ((unsigned int)v285 >> 6 | (unsigned int)v285 * 0x4000000)) + (unsigned int)(v267 + ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + (unsigned int)tmp_715 + 430227734) + (((unsigned int)v276 ^ (unsigned int)v279) & (unsigned int)v285 ^ (unsigned int)v276);
            v289 = (((unsigned int)v280 | (unsigned int)v286) & (unsigned int)v277 | (unsigned int)v280 & (unsigned int)v286) + (((unsigned int)v286 >> 13 | (unsigned int)v286 * 0x80000) ^ ((unsigned int)v286 >> 2 | (unsigned int)v286 * 0x40000000) ^ ((unsigned int)v286 * 0x400 | (unsigned int)v286 >> 22)) + (((unsigned int)v285 * 128 | (unsigned int)v285 >> 25) ^ ((unsigned int)v285 >> 11 | (unsigned int)v285 * 0x200000) ^ ((unsigned int)v285 >> 6 | (unsigned int)v285 * 0x4000000)) + (unsigned int)(v267 + ((v9 * 0x2000 | v9 >> 19) ^ (v9 * 0x8000 | v9 >> 17) ^ (unsigned int)((unsigned long long)v9 >> 10)) + (unsigned int)tmp_715 + 430227734) + (((unsigned int)v276 ^ (unsigned int)v279) & (unsigned int)v285 ^ (unsigned int)v276);
            tmp_332 = ((v24 * 0x4000 | v24 >> 18) ^ (v24 >> 7 | v24 * 0x2000000) ^ (unsigned int)v287 % 8) + (unsigned int)v283 + v7;
            v292 = v25;
            v293 = ((unsigned int)tmp_942 ^ ((unsigned int)v284 * 0x8000 | (unsigned int)v284 >> 17) ^ (unsigned int)v284 % 0x400) + (unsigned int)tmp_332;
            v30 = v293;
            v294 = (unsigned int)v277 + (((unsigned int)v288 * 128 | (unsigned int)v288 >> 25) ^ ((unsigned int)v288 >> 11 | (unsigned int)v288 * 0x200000) ^ ((unsigned int)v288 >> 6 | (unsigned int)v288 * 0x4000000)) + (unsigned int)(v276 + v293 + 506948616) + (((unsigned int)v279 ^ (unsigned int)v285) & (unsigned int)v288 ^ (unsigned int)v279);
            v295 = (((unsigned int)v286 | (unsigned int)v289) & (unsigned int)v280 | (unsigned int)v286 & (unsigned int)v289) + (((unsigned int)v289 >> 13 | (unsigned int)v289 * 0x80000) ^ ((unsigned int)v289 >> 2 | (unsigned int)v289 * 0x40000000) ^ ((unsigned int)v289 * 0x400 | (unsigned int)v289 >> 22)) + (((unsigned int)v288 * 128 | (unsigned int)v288 >> 25) ^ ((unsigned int)v288 >> 11 | (unsigned int)v288 * 0x200000) ^ ((unsigned int)v288 >> 6 | (unsigned int)v288 * 0x4000000)) + (unsigned int)(v276 + v293 + 506948616) + (((unsigned int)v279 ^ (unsigned int)v285) & (unsigned int)v288 ^ (unsigned int)v279);
            v296 = ((v10 * 0x2000 | v10 >> 19) ^ (v10 * 0x8000 | v10 >> 17) ^ (unsigned int)((unsigned long long)v10 >> 10)) + ((v25 * 0x4000 | v25 >> 18) ^ (v25 >> 7 | v25 * 0x2000000) ^ (unsigned int)v292 % 8) + (unsigned int)v287 + v2;
            v31 = ((v10 * 0x2000 | v10 >> 19) ^ (v10 * 0x8000 | v10 >> 17) ^ (unsigned int)((unsigned long long)v10 >> 10)) + ((v25 * 0x4000 | v25 >> 18) ^ (v25 >> 7 | v25 * 0x2000000) ^ (unsigned int)v292 % 8) + (unsigned int)v287 + v2;
            v297 = (unsigned int)v289 & (((unsigned int)v286 | (unsigned int)v289) & (unsigned int)v280 | (unsigned int)v286 & (unsigned int)v289) + (((unsigned int)v289 >> 13 | (unsigned int)v289 * 0x80000) ^ ((unsigned int)v289 >> 2 | (unsigned int)v289 * 0x40000000) ^ ((unsigned int)v289 * 0x400 | (unsigned int)v289 >> 22)) + (((unsigned int)v288 * 128 | (unsigned int)v288 >> 25) ^ ((unsigned int)v288 >> 11 | (unsigned int)v288 * 0x200000) ^ ((unsigned int)v288 >> 6 | (unsigned int)v288 * 0x4000000)) + (unsigned int)(v276 + v293 + 506948616) + (((unsigned int)v279 ^ (unsigned int)v285) & (unsigned int)v288 ^ (unsigned int)v279);
            v298 = (unsigned int)v293 * 0x2000 | (unsigned int)v293 >> 19;
            v299 = (((unsigned int)v294 * 128 | (unsigned int)v294 >> 25) ^ ((unsigned int)v294 >> 11 | (unsigned int)v294 * 0x200000) ^ ((unsigned int)v294 >> 6 | (unsigned int)v294 * 0x4000000)) + (((unsigned int)v285 ^ (unsigned int)v288) & (unsigned int)v294 ^ (unsigned int)v285) + (unsigned int)(v279 + v296 + 659060556);
            v300 = v280 + v299;
            v301 = ((unsigned int)v295 >> 13 | (unsigned int)v295 * 0x80000) ^ ((unsigned int)v295 >> 2 | (unsigned int)v295 * 0x40000000) ^ ((unsigned int)v295 * 0x400 | (unsigned int)v295 >> 22);
            v302 = ((unsigned int)v289 | (unsigned int)v295) & (unsigned int)v286;
            tmp_283 = ((unsigned int)v302 | (unsigned int)v297) + (unsigned int)v301;
            v303 = ((unsigned int)v302 | (unsigned int)v297) + (unsigned int)v301 + (unsigned int)v299;
            tmp_361 = (unsigned int)v298 ^ ((unsigned int)v293 * 0x8000 | (unsigned int)v293 >> 17) ^ (unsigned int)v293 % 0x400;
            v304 = ((unsigned int)v298 ^ ((unsigned int)v293 * 0x8000 | (unsigned int)v293 >> 17) ^ (unsigned int)v293 % 0x400) + ((v15 * 0x4000 | v15 >> 18) ^ (v15 >> 7 | v15 * 0x2000000) ^ (unsigned int)((unsigned long long)v15 >> 3)) + (unsigned int)v292 + v4;
            v32 = v304;
            tmp_540 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((Conv(64->32, r8<8>) << 0xa<8>) | (Conv(64->32, r8<8>) >> 0x16<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_622 = v286;
            v305 = (unsigned int)v286 + (((unsigned int)v300 * 128 | (unsigned int)v300 >> 25) ^ ((unsigned int)v300 >> 11 | (unsigned int)v300 * 0x200000) ^ ((unsigned int)v300 >> 6 | (unsigned int)v300 * 0x4000000)) + (((unsigned int)v288 ^ (unsigned int)v294) & (unsigned int)v300 ^ (unsigned int)v288) + (unsigned int)(v285 + v304 + 883997877);
            tmp_721 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, (((Conv(64->32, r9<8>) | Conv(64->32, r8<8>)) & Conv(64->32, r10<8>)) | (Conv(64->32, r9<8>) & Conv(64->32, r8<8>)))), Conv(32->64, ((((Conv(64->32, r8<8>) >> 0xd<8>) | (Conv(64->32, r8<8>) << 0x13<8>)) ^ ((Conv(64->32, r8<8>) >> 0x2<8>) | (Conv(64->32, r8<8>) << 0x1e<8>))) ^ ((Conv(64->32, r8<8>) << 0xa<8>) | (Conv(64->32, r8<8>) >> 0x16<8>)))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_736 = (((unsigned int)v295 | (unsigned int)v303) & (unsigned int)v289 | (unsigned int)v295 & (unsigned int)v303) + (((unsigned int)v303 >> 13 | (unsigned int)v303 * 0x80000) ^ ((unsigned int)v303 >> 2 | (unsigned int)v303 * 0x40000000) ^ ((unsigned int)v303 * 0x400 | (unsigned int)v303 >> 22));
            tmp_737 = (((unsigned int)v300 * 128 | (unsigned int)v300 >> 25) ^ ((unsigned int)v300 >> 11 | (unsigned int)v300 * 0x200000) ^ ((unsigned int)v300 >> 6 | (unsigned int)v300 * 0x4000000)) + (((unsigned int)v288 ^ (unsigned int)v294) & (unsigned int)v300 ^ (unsigned int)v288) + (unsigned int)(v285 + v304 + 883997877);
            v306 = (((unsigned int)v295 | (unsigned int)v303) & (unsigned int)v289 | (unsigned int)v295 & (unsigned int)v303) + (((unsigned int)v303 >> 13 | (unsigned int)v303 * 0x80000) ^ ((unsigned int)v303 >> 2 | (unsigned int)v303 * 0x40000000) ^ ((unsigned int)v303 * 0x400 | (unsigned int)v303 >> 22)) + (((unsigned int)v300 * 128 | (unsigned int)v300 >> 25) ^ ((unsigned int)v300 >> 11 | (unsigned int)v300 * 0x200000) ^ ((unsigned int)v300 >> 6 | (unsigned int)v300 * 0x4000000)) + (((unsigned int)v288 ^ (unsigned int)v294) & (unsigned int)v300 ^ (unsigned int)v288) + (unsigned int)(v285 + v304 + 883997877);
            v307 = (((unsigned int)v296 * 0x2000 | (unsigned int)v296 >> 19) ^ ((unsigned int)v296 * 0x8000 | (unsigned int)v296 >> 17) ^ (unsigned int)v296 % 0x400) + ((v3 * 0x4000 | v3 >> 18) ^ (v3 >> 7 | v3 * 0x2000000) ^ (unsigned int)((unsigned long long)v3 >> 3)) + v15 + v8;
            v308 = (unsigned int)v303 & (((unsigned int)v295 | (unsigned int)v303) & (unsigned int)v289 | (unsigned int)v295 & (unsigned int)v303) + (((unsigned int)v303 >> 13 | (unsigned int)v303 * 0x80000) ^ ((unsigned int)v303 >> 2 | (unsigned int)v303 * 0x40000000) ^ ((unsigned int)v303 * 0x400 | (unsigned int)v303 >> 22)) + (((unsigned int)v300 * 128 | (unsigned int)v300 >> 25) ^ ((unsigned int)v300 >> 11 | (unsigned int)v300 * 0x200000) ^ ((unsigned int)v300 >> 6 | (unsigned int)v300 * 0x4000000)) + (((unsigned int)v288 ^ (unsigned int)v294) & (unsigned int)v300 ^ (unsigned int)v288) + (unsigned int)(v285 + v304 + 883997877);
            v33 = (((unsigned int)v296 * 0x2000 | (unsigned int)v296 >> 19) ^ ((unsigned int)v296 * 0x8000 | (unsigned int)v296 >> 17) ^ (unsigned int)v296 % 0x400) + ((v3 * 0x4000 | v3 >> 18) ^ (v3 >> 7 | v3 * 0x2000000) ^ (unsigned int)((unsigned long long)v3 >> 3)) + v15 + v8;
            tmp_966 = ((unsigned int)v294 ^ (unsigned int)v300) & (unsigned int)v305 ^ (unsigned int)v294;
            v309 = (((unsigned int)v305 * 128 | (unsigned int)v305 >> 25) ^ ((unsigned int)v305 >> 11 | (unsigned int)v305 * 0x200000) ^ ((unsigned int)v305 >> 6 | (unsigned int)v305 * 0x4000000)) + (unsigned int)(v288 + v307 + 958139571) + (((unsigned int)v294 ^ (unsigned int)v300) & (unsigned int)v305 ^ (unsigned int)v294);
            v310 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, (((Conv(64->32, rax<8>) << 0x7<8>) | (Conv(64->32, rax<8>) >> 0x19<8>)) ^ (((Conv(64->32, rax<8>) >> 0xb<8>) | (Conv(64->32, rax<8>) << 0x15<8>)) ^ ((Conv(64->32, rax<8>) >> 0x6<8>) | (Conv(64->32, rax<8>) << 0x1a<8>))))), Conv(32->64, (Conv(64->32, ((rcx<8> + r11<8>) + 0x391c0cb3<64>)) + (((Conv(64->32, r13<8>) ^ Conv(64->32, r14<8>)) & Conv(64->32, rax<8>)) ^ Conv(64->32, r13<8>)))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v311 = (unsigned int)v306 >> 2 | (unsigned int)v306 * 0x40000000;
            tmp_277 = v289;
            v312 = v289 + v309;
            v313 = (((unsigned int)v303 | (unsigned int)v306) & (unsigned int)v295 | (unsigned int)v308) + (((unsigned int)v306 >> 13 | (unsigned int)v306 * 0x80000) ^ (unsigned int)v311 ^ ((unsigned int)v306 * 0x400 | (unsigned int)v306 >> 22)) + (unsigned int)v309;
            tmp_560 = (((unsigned int)v304 * 0x2000 | (unsigned int)v304 >> 19) ^ ((unsigned int)v304 * 0x8000 | (unsigned int)v304 >> 17) ^ (unsigned int)v304 % 0x400) + ((v5 * 0x4000 | v5 >> 18) ^ (v5 >> 7 | v5 * 0x2000000) ^ (unsigned int)((unsigned long long)v5 >> 3)) + v3 + v9;
            tmp_569 = (unsigned int)v306 & (((unsigned int)v303 | (unsigned int)v306) & (unsigned int)v295 | (unsigned int)v308) + (((unsigned int)v306 >> 13 | (unsigned int)v306 * 0x80000) ^ (unsigned int)v311 ^ ((unsigned int)v306 * 0x400 | (unsigned int)v306 >> 22)) + (unsigned int)v309;
            v34 = (((unsigned int)v304 * 0x2000 | (unsigned int)v304 >> 19) ^ ((unsigned int)v304 * 0x8000 | (unsigned int)v304 >> 17) ^ (unsigned int)v304 % 0x400) + ((v5 * 0x4000 | v5 >> 18) ^ (v5 >> 7 | v5 * 0x2000000) ^ (unsigned int)((unsigned long long)v5 >> 3)) + v3 + v9;
            v3 = (((unsigned int)v304 * 0x2000 | (unsigned int)v304 >> 19) ^ ((unsigned int)v304 * 0x8000 | (unsigned int)v304 >> 17) ^ (unsigned int)v304 % 0x400) + ((v5 * 0x4000 | v5 >> 18) ^ (v5 >> 7 | v5 * 0x2000000) ^ (unsigned int)((unsigned long long)v5 >> 3)) + v3 + v9;
            tmp_616 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r14<8>) ^ Conv(64->32, rax<8>)) & Conv(64->32, r10<8>)) ^ Conv(64->32, r14<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_632 = ((unsigned int)v300 ^ (unsigned int)v305) & (unsigned int)v312 ^ (unsigned int)v300;
            tmp_727 = (((unsigned int)v303 | (unsigned int)v306) & (unsigned int)v295 | (unsigned int)v308) + (((unsigned int)v306 >> 13 | (unsigned int)v306 * 0x80000) ^ (unsigned int)v311 ^ ((unsigned int)v306 * 0x400 | (unsigned int)v306 >> 22)) + (unsigned int)v309 >> 2 | ((((unsigned int)v303 | (unsigned int)v306) & (unsigned int)v295 | (unsigned int)v308) + (((unsigned int)v306 >> 13 | (unsigned int)v306 * 0x80000) ^ (unsigned int)v311 ^ ((unsigned int)v306 * 0x400 | (unsigned int)v306 >> 22)) + (unsigned int)v309) * 0x40000000;
            tmp_738 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, (((((((Conv(64->32, r8<8>) | Conv(64->32, rdi<8>)) & Conv(64->32, r9<8>)) | Conv(64->32, r15<8>)) + ((((Conv(64->32, rdi<8>) >> 0xd<8>) | (Conv(64->32, rdi<8>) << 0x13<8>)) ^ Conv(64->32, rcx<8>)) ^ ((Conv(64->32, rdi<8>) << 0xa<8>) | (Conv(64->32, rdi<8>) >> 0x16<8>)))) + Conv(64->32, rdx<8>)) >> 0x2<8>) | ((((((Conv(64->32, r8<8>) | Conv(64->32, rdi<8>)) & Conv(64->32, r9<8>)) | Conv(64->32, r15<8>)) + ((((Conv(64->32, rdi<8>) >> 0xd<8>) | (Conv(64->32, rdi<8>) << 0x13<8>)) ^ Conv(64->32, rcx<8>)) ^ ((Conv(64->32, rdi<8>) << 0xa<8>) | (Conv(64->32, rdi<8>) >> 0x16<8>)))) + Conv(64->32, rdx<8>)) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_748 = (((unsigned int)v303 | (unsigned int)v306) & (unsigned int)v295 | (unsigned int)v308) + (((unsigned int)v306 >> 13 | (unsigned int)v306 * 0x80000) ^ (unsigned int)v311 ^ ((unsigned int)v306 * 0x400 | (unsigned int)v306 >> 22)) + (unsigned int)v309 >> 13 | ((((unsigned int)v303 | (unsigned int)v306) & (unsigned int)v295 | (unsigned int)v308) + (((unsigned int)v306 >> 13 | (unsigned int)v306 * 0x80000) ^ (unsigned int)v311 ^ ((unsigned int)v306 * 0x400 | (unsigned int)v306 >> 22)) + (unsigned int)v309) * 0x80000;
            v314 = (unsigned int)v295 + (((unsigned int)v312 * 128 | (unsigned int)v312 >> 25) ^ ((unsigned int)v312 >> 11 | (unsigned int)v312 * 0x200000) ^ ((unsigned int)v312 >> 6 | (unsigned int)v312 * 0x4000000)) + (unsigned int)(v294 + tmp_560 + 1322822218) + (((unsigned int)v300 ^ (unsigned int)v305) & (unsigned int)v312 ^ (unsigned int)v300);
            v315 = (((unsigned int)v306 | (unsigned int)v313) & (unsigned int)v303 | (unsigned int)tmp_569) + ((unsigned int)tmp_748 ^ (unsigned int)tmp_727 ^ ((unsigned int)v313 * 0x400 | (unsigned int)v313 >> 22)) + (((unsigned int)v312 * 128 | (unsigned int)v312 >> 25) ^ ((unsigned int)v312 >> 11 | (unsigned int)v312 * 0x200000) ^ ((unsigned int)v312 >> 6 | (unsigned int)v312 * 0x4000000)) + (unsigned int)(v294 + tmp_560 + 1322822218) + (((unsigned int)v300 ^ (unsigned int)v305) & (unsigned int)v312 ^ (unsigned int)v300);
            tmp_921 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, ((((Conv(64->32, r11<8>) << 0xd<8>) | (Conv(64->32, r11<8>) >> 0x13<8>)) ^ ((Conv(64->32, r11<8>) << 0xf<8>) | (Conv(64->32, r11<8>) >> 0x11<8>))) ^ Conv(64->32, (r11<8> >> 0xa<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v35 = ((v0 * 0x4000 | v0 >> 18) ^ (v0 >> 7 | v0 * 0x2000000) ^ (unsigned int)((unsigned long long)v0 >> 3)) + v5 + v11 + (((unsigned int)v307 * 0x2000 | (unsigned int)v307 >> 19) ^ ((unsigned int)v307 * 0x8000 | (unsigned int)v307 >> 17) ^ (unsigned int)v307 % 0x400);
            v316 = v300 + ((v0 * 0x4000 | v0 >> 18) ^ (v0 >> 7 | v0 * 0x2000000) ^ (unsigned int)((unsigned long long)v0 >> 3)) + v5 + v11 + (((unsigned int)v307 * 0x2000 | (unsigned int)v307 >> 19) ^ ((unsigned int)v307 * 0x8000 | (unsigned int)v307 >> 17) ^ (unsigned int)v307 % 0x400) + 1537002063;
            v5 = ((v0 * 0x4000 | v0 >> 18) ^ (v0 >> 7 | v0 * 0x2000000) ^ (unsigned int)((unsigned long long)v0 >> 3)) + v5 + v11 + (((unsigned int)v307 * 0x2000 | (unsigned int)v307 >> 19) ^ ((unsigned int)v307 * 0x8000 | (unsigned int)v307 >> 17) ^ (unsigned int)v307 % 0x400);
            v317 = (unsigned int)v314 * 128 | (unsigned int)v314 >> 25;
            v318 = ((unsigned int)v305 ^ (unsigned int)v312) & (unsigned int)v314 ^ (unsigned int)v305;
            v319 = [D] amd64g_calculate_rflags_all(0x13<64>, r13<8>, 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v320 = (unsigned int)v314 >> 6 | (unsigned int)v314 * 0x4000000;
            tmp_332 = (unsigned int)v317 ^ ((unsigned int)v314 >> 11 | (unsigned int)v314 * 0x200000) ^ (unsigned int)v320;
            v321 = (unsigned int)v303 + ((unsigned int)v317 ^ ((unsigned int)v314 >> 11 | (unsigned int)v314 * 0x200000) ^ (unsigned int)v320) + (unsigned int)(v316 + v318);
            tmp_460 = ((unsigned int)v317 ^ ((unsigned int)v314 >> 11 | (unsigned int)v314 * 0x200000) ^ (unsigned int)v320) + (unsigned int)(v316 + v318);
            v322 = (((unsigned int)v313 | (unsigned int)v315) & (unsigned int)v306 | (unsigned int)v313 & (unsigned int)v315) + (((unsigned int)v315 >> 13 | (unsigned int)v315 * 0x80000) ^ ((unsigned int)v315 >> 2 | (unsigned int)v315 * 0x40000000) ^ ((unsigned int)v315 * 0x400 | (unsigned int)v315 >> 22)) + ((unsigned int)v317 ^ ((unsigned int)v314 >> 11 | (unsigned int)v314 * 0x200000) ^ (unsigned int)v320) + (unsigned int)(v316 + v318);
            tmp_644 = ((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + ((v6 * 0x4000 | v6 >> 18) ^ (v6 >> 7 | v6 * 0x2000000) ^ (unsigned int)((unsigned long long)v6 >> 3)) + v0 + v10;
            tmp_658 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((((Load(addr=stack_base-236, size=4, endness=Iend_LE) << 0xd<8>) | (Load(addr=stack_base-236, size=4, endness=Iend_LE) >> 0x13<8>)) ^ ((Load(addr=stack_base-236, size=4, endness=Iend_LE) << 0xf<8>) | (Load(addr=stack_base-236, size=4, endness=Iend_LE) >> 0x11<8>))) ^ Conv(64->32, (Conv(32->64, Load(addr=stack_base-236, size=4, endness=Iend_LE)) >> 0xa<8>)))), Conv(32->64, ((((((Load(addr=stack_base-224, size=4, endness=Iend_LE) << 0xe<8>) | (Load(addr=stack_base-224, size=4, endness=Iend_LE) >> 0x12<8>)) ^ ((Load(addr=stack_base-224, size=4, endness=Iend_LE) >> 0x7<8>) | (Load(addr=stack_base-224, size=4, endness=Iend_LE) << 0x19<8>))) ^ Conv(64->32, (Conv(32->64, Load(addr=stack_base-224, size=4, endness=Iend_LE)) >> 0x3<8>))) + Load(addr=stack_base-248, size=4, endness=Iend_LE)) + Load(addr=stack_base-208, size=4, endness=Iend_LE))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v0 = ((v3 * 0x2000 | v3 >> 19) ^ (v3 * 0x8000 | v3 >> 17) ^ (unsigned int)((unsigned long long)v3 >> 10)) + ((v6 * 0x4000 | v6 >> 18) ^ (v6 >> 7 | v6 * 0x2000000) ^ (unsigned int)((unsigned long long)v6 >> 3)) + v0 + v10;
            v36 = tmp_644;
            tmp_703 = ((unsigned int)v312 ^ (unsigned int)v314) & (unsigned int)v321 ^ (unsigned int)v312;
            tmp_816 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, (((Conv(64->32, r8<8>) << 0x7<8>) | (Conv(64->32, r8<8>) >> 0x19<8>)) ^ (((Conv(64->32, r8<8>) >> 0xb<8>) | (Conv(64->32, r8<8>) << 0x15<8>)) ^ ((Conv(64->32, r8<8>) >> 0x6<8>) | (Conv(64->32, r8<8>) << 0x1a<8>))))), Conv(32->64, (Conv(64->32, ((rax<8> + t644) + 0x682e6ff3<64>)) + (((Conv(64->32, r10<8>) ^ Conv(64->32, r9<8>)) & Conv(64->32, r8<8>)) ^ Conv(64->32, r10<8>)))), DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_852 = v306;
            tmp_853 = (((unsigned int)v321 * 128 | (unsigned int)v321 >> 25) ^ ((unsigned int)v321 >> 11 | (unsigned int)v321 * 0x200000) ^ ((unsigned int)v321 >> 6 | (unsigned int)v321 * 0x4000000)) + (unsigned int)(v305 + tmp_644 + 1747873779) + (((unsigned int)v312 ^ (unsigned int)v314) & (unsigned int)v321 ^ (unsigned int)v312);
            v323 = (unsigned int)v306 + (((unsigned int)v321 * 128 | (unsigned int)v321 >> 25) ^ ((unsigned int)v321 >> 11 | (unsigned int)v321 * 0x200000) ^ ((unsigned int)v321 >> 6 | (unsigned int)v321 * 0x4000000)) + (unsigned int)(v305 + tmp_644 + 1747873779) + (((unsigned int)v312 ^ (unsigned int)v314) & (unsigned int)v321 ^ (unsigned int)v312);
            tmp_919 = (((unsigned int)v321 * 128 | (unsigned int)v321 >> 25) ^ ((unsigned int)v321 >> 11 | (unsigned int)v321 * 0x200000) ^ ((unsigned int)v321 >> 6 | (unsigned int)v321 * 0x4000000)) + (unsigned int)(v305 + tmp_644 + 1747873779) + (((unsigned int)v312 ^ (unsigned int)v314) & (unsigned int)v321 ^ (unsigned int)v312);
            v324 = (((unsigned int)v315 | (unsigned int)v322) & (unsigned int)v313 | (unsigned int)v315 & (unsigned int)v322) + (((unsigned int)v322 >> 13 | (unsigned int)v322 * 0x80000) ^ ((unsigned int)v322 >> 2 | (unsigned int)v322 * 0x40000000) ^ ((unsigned int)v322 * 0x400 | (unsigned int)v322 >> 22)) + (((unsigned int)v321 * 128 | (unsigned int)v321 >> 25) ^ ((unsigned int)v321 >> 11 | (unsigned int)v321 * 0x200000) ^ ((unsigned int)v321 >> 6 | (unsigned int)v321 * 0x4000000)) + (unsigned int)(v305 + tmp_644 + 1747873779) + (((unsigned int)v312 ^ (unsigned int)v314) & (unsigned int)v321 ^ (unsigned int)v312);
            tmp_937 = [D] amd64g_calculate_rflags_all(0x3<64>, Conv(32->64, ((((Conv(64->32, rcx<8>) | Conv(64->32, rdx<8>)) & Conv(64->32, rsi<8>)) | (Conv(64->32, rcx<8>) & Conv(64->32, rdx<8>))) + ((((Conv(64->32, rdx<8>) >> 0xd<8>) | (Conv(64->32, rdx<8>) << 0x13<8>)) ^ ((Conv(64->32, rdx<8>) >> 0x2<8>) | (Conv(64->32, rdx<8>) << 0x1e<8>))) ^ ((Conv(64->32, rdx<8>) << 0xa<8>) | (Conv(64->32, rdx<8>) >> 0x16<8>))))), t919, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v325 = (v5 * 0x2000 | v5 >> 19) ^ (v5 * 0x8000 | v5 >> 17) ^ (unsigned int)((unsigned long long)v5 >> 10);
            v326 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((Load(addr=stack_base-244, size=4, endness=Iend_LE) << 0xe<8>) | (Load(addr=stack_base-244, size=4, endness=Iend_LE) >> 0x12<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v327 = (v1 * 0x4000 | v1 >> 18) ^ (v1 >> 7 | v1 * 0x2000000) ^ (unsigned int)((unsigned long long)v1 >> 3);
            v328 = v325 + (unsigned int)v293 + (unsigned int)v327 + v6;
            v37 = v325 + (unsigned int)v293 + (unsigned int)v327 + v6;
            tmp_406 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, rdi<8>) >> 0xb<8>) | (Conv(64->32, rdi<8>) << 0x15<8>)) ^ ((Conv(64->32, rdi<8>) >> 0x6<8>) | (Conv(64->32, rdi<8>) << 0x1a<8>)))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_431 = (unsigned int)(v312 + v325 + (unsigned int)v293 + (unsigned int)v327 + v6 + 1955562222) + (((unsigned int)v314 ^ (unsigned int)v321) & (unsigned int)v323 ^ (unsigned int)v314);
            v329 = (unsigned int)v313 + (((unsigned int)v323 * 128 | (unsigned int)v323 >> 25) ^ ((unsigned int)v323 >> 11 | (unsigned int)v323 * 0x200000) ^ ((unsigned int)v323 >> 6 | (unsigned int)v323 * 0x4000000)) + (unsigned int)(v312 + v325 + (unsigned int)v293 + (unsigned int)v327 + v6 + 1955562222) + (((unsigned int)v314 ^ (unsigned int)v321) & (unsigned int)v323 ^ (unsigned int)v314);
            tmp_558 = (((unsigned int)v323 * 128 | (unsigned int)v323 >> 25) ^ ((unsigned int)v323 >> 11 | (unsigned int)v323 * 0x200000) ^ ((unsigned int)v323 >> 6 | (unsigned int)v323 * 0x4000000)) + (unsigned int)(v312 + v325 + (unsigned int)v293 + (unsigned int)v327 + v6 + 1955562222) + (((unsigned int)v314 ^ (unsigned int)v321) & (unsigned int)v323 ^ (unsigned int)v314);
            v330 = (((unsigned int)v322 | (unsigned int)v324) & (unsigned int)v315 | (unsigned int)v322 & (unsigned int)v324) + (((unsigned int)v324 >> 13 | (unsigned int)v324 * 0x80000) ^ ((unsigned int)v324 >> 2 | (unsigned int)v324 * 0x40000000) ^ ((unsigned int)v324 * 0x400 | (unsigned int)v324 >> 22)) + (((unsigned int)v323 * 128 | (unsigned int)v323 >> 25) ^ ((unsigned int)v323 >> 11 | (unsigned int)v323 * 0x200000) ^ ((unsigned int)v323 >> 6 | (unsigned int)v323 * 0x4000000)) + (unsigned int)(v312 + v325 + (unsigned int)v293 + (unsigned int)v327 + v6 + 1955562222) + (((unsigned int)v314 ^ (unsigned int)v321) & (unsigned int)v323 ^ (unsigned int)v314);
            v331 = (unsigned int)v296 + ((v7 * 0x4000 | v7 >> 18) ^ (v7 >> 7 | v7 * 0x2000000) ^ (unsigned int)((unsigned long long)v7 >> 3)) + v1 + ((v0 * 0x2000 | v0 >> 19) ^ (v0 * 0x8000 | v0 >> 17) ^ (unsigned int)((unsigned long long)v0 >> 10));
            v38 = v331;
            tmp_785 = [D] amd64g_calculate_rflags_all(0x13<64>, Conv(32->64, (((Conv(64->32, r8<8>) ^ Conv(64->32, rdi<8>)) & Conv(64->32, rsi<8>)) ^ Conv(64->32, r8<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            tmp_800 = v314 + v331 + 2024104815;
            tmp_801 = ((unsigned int)v321 ^ (unsigned int)v323) & (unsigned int)v329 ^ (unsigned int)v321;
            tmp_910 = [D] amd64g_calculate_rflags_all(0x2b<64>, Conv(32->64, ((Conv(64->32, r10<8>) >> 0x2<8>) | (Conv(64->32, r10<8>) << 0x1e<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v332 = (unsigned int)v315 + (((unsigned int)v329 * 128 | (unsigned int)v329 >> 25) ^ ((unsigned int)v329 >> 11 | (unsigned int)v329 * 0x200000) ^ ((unsigned int)v329 >> 6 | (unsigned int)v329 * 0x4000000)) + (unsigned int)(v314 + v331 + 2024104815) + (((unsigned int)v321 ^ (unsigned int)v323) & (unsigned int)v329 ^ (unsigned int)v321);
            tmp_932 = ((unsigned int)v330 >> 13 | (unsigned int)v330 * 0x80000) ^ ((unsigned int)v330 >> 2 | (unsigned int)v330 * 0x40000000);
            tmp_1006 = (((unsigned int)v329 * 128 | (unsigned int)v329 >> 25) ^ ((unsigned int)v329 >> 11 | (unsigned int)v329 * 0x200000) ^ ((unsigned int)v329 >> 6 | (unsigned int)v329 * 0x4000000)) + (unsigned int)(v314 + v331 + 2024104815) + (((unsigned int)v321 ^ (unsigned int)v323) & (unsigned int)v329 ^ (unsigned int)v321);
            v333 = (((unsigned int)v324 | (unsigned int)v330) & (unsigned int)v322 | (unsigned int)v324 & (unsigned int)v330) + (((unsigned int)v330 >> 13 | (unsigned int)v330 * 0x80000) ^ ((unsigned int)v330 >> 2 | (unsigned int)v330 * 0x40000000) ^ ((unsigned int)v330 * 0x400 | (unsigned int)v330 >> 22)) + (((unsigned int)v329 * 128 | (unsigned int)v329 >> 25) ^ ((unsigned int)v329 >> 11 | (unsigned int)v329 * 0x200000) ^ ((unsigned int)v329 >> 6 | (unsigned int)v329 * 0x4000000)) + (unsigned int)(v314 + v331 + 2024104815) + (((unsigned int)v321 ^ (unsigned int)v323) & (unsigned int)v329 ^ (unsigned int)v321);
            v334 = [D] amd64g_calculate_rflags_all(0x27<64>, Conv(32->64, ((Conv(64->32, r15<8>) << 0xd<8>) | (Conv(64->32, r15<8>) >> 0x13<8>))), 0x0<64>, DirtyExpression (<class 'ailment.expression.VEXCCallExpression'>));
            v335 = (unsigned int)v304 + ((v2 * 0x4000 | v2 >> 18) ^ (v2 >> 7 | v2 * 0x2000000) ^ (unsigned int)((unsigned long long)v2 >> 3)) + v7 + (((unsigned int)v328 * 0x2000 | (unsigned int)v328 >> 19) ^ ((unsigned int)v328 * 0x8000 | (unsigned int)v328 >> 17) ^ (unsigned int)v328 % 0x400);
            v39 = v335;
            v336 = (unsigned int)v322 + (((unsigned int)v332 >> 11 | (unsigned int)v332 * 0x200000) ^ ((unsigned int)v332 >> 6 | (unsigned int)v332 * 0x4000000) ^ ((unsigned int)v332 * 128 | (unsigned int)v332 >> 25)) + (unsigned int)(v321 + v335 - 2067236844) + (((unsigned int)v323 ^ (unsigned int)v329) & (unsigned int)v332 ^ (unsigned int)v323);
            v337 = v4;
            v338 = (((unsigned int)v332 >> 11 | (unsigned int)v332 * 0x200000) ^ ((unsigned int)v332 >> 6 | (unsigned int)v332 * 0x4000000) ^ ((unsigned int)v332 * 128 | (unsigned int)v332 >> 25)) + (unsigned int)(v321 + v335 - 2067236844) + (((unsigned int)v323 ^ (unsigned int)v329) & (unsigned int)v332 ^ (unsigned int)v323) + (((unsigned int)v330 | (unsigned int)v333) & (unsigned int)v324 | (unsigned int)v330 & (unsigned int)v333) + (((unsigned int)v333 >> 13 | (unsigned int)v333 * 0x80000) ^ ((unsigned int)v333 >> 2 | (unsigned int)v333 * 0x40000000) ^ ((unsigned int)v333 * 0x400 | (unsigned int)v333 >> 22));
            v40 = (unsigned int)v307 + ((v4 * 0x4000 | v4 >> 18) ^ (v4 >> 7 | v4 * 0x2000000) ^ (unsigned int)((unsigned long long)v4 >> 3)) + v2 + ((unsigned int)v331 % 0x400 ^ ((unsigned int)v331 * 0x2000 | (unsigned int)v331 >> 19) ^ ((unsigned int)v331 * 0x8000 | (unsigned int)v331 >> 17));
            v341 = (unsigned int)v324 + (((unsigned int)v336 >> 11 | (unsigned int)v336 * 0x200000) ^ ((unsigned int)v336 >> 6 | (unsigned int)v336 * 0x4000000) ^ ((unsigned int)v336 * 128 | (unsigned int)v336 >> 25)) + (unsigned int)(v323 + v40 - 1933114872) + (((unsigned int)v329 ^ (unsigned int)v332) & (unsigned int)v336 ^ (unsigned int)v329);
            v343 = (((unsigned int)v336 >> 11 | (unsigned int)v336 * 0x200000) ^ ((unsigned int)v336 >> 6 | (unsigned int)v336 * 0x4000000) ^ ((unsigned int)v336 * 128 | (unsigned int)v336 >> 25)) + (unsigned int)(v323 + v40 - 1933114872) + (((unsigned int)v329 ^ (unsigned int)v332) & (unsigned int)v336 ^ (unsigned int)v329) + (((unsigned int)v333 | (unsigned int)v338) & (unsigned int)v330 | (unsigned int)v333 & (unsigned int)v338) + (unsigned long long)(((unsigned int)v338 >> 13 | (unsigned int)v338 * 0x80000) ^ ((unsigned int)v338 >> 2 | (unsigned int)v338 * 0x40000000) ^ ((unsigned int)v338 * 0x400 | (unsigned int)v338 >> 22));
            tmp_461 = (unsigned int)(((v8 * 0x4000 | v8 >> 18) ^ (v8 >> 7 | v8 * 0x2000000) ^ (unsigned int)((unsigned long long)v8 >> 3)) + v337) + v3;
            v344 = v9;
            v345 = (unsigned int)tmp_461 + ((unsigned int)v335 % 0x400 ^ ((unsigned int)v335 * 0x2000 | (unsigned int)v335 >> 19) ^ ((unsigned int)v335 * 0x8000 | (unsigned int)v335 >> 17));
            v41 = (unsigned int)tmp_461 + ((unsigned int)v335 % 0x400 ^ ((unsigned int)v335 * 0x2000 | (unsigned int)v335 >> 19) ^ ((unsigned int)v335 * 0x8000 | (unsigned int)v335 >> 17));
            v346 = (unsigned int)v330 + (((unsigned int)v341 >> 11 | (unsigned int)v341 * 0x200000) ^ ((unsigned int)v341 >> 6 | (unsigned int)v341 * 0x4000000) ^ ((unsigned int)v341 * 128 | (unsigned int)v341 >> 25)) + (unsigned int)(v329 + v345 - 1866530822) + (((unsigned int)v332 ^ (unsigned int)v336) & (unsigned int)v341 ^ (unsigned int)v332);
            v347 = (((unsigned int)v341 >> 11 | (unsigned int)v341 * 0x200000) ^ ((unsigned int)v341 >> 6 | (unsigned int)v341 * 0x4000000) ^ ((unsigned int)v341 * 128 | (unsigned int)v341 >> 25)) + (unsigned int)(v329 + v345 - 1866530822) + (((unsigned int)v332 ^ (unsigned int)v336) & (unsigned int)v341 ^ (unsigned int)v332) + (((unsigned int)v338 | (unsigned int)v343) & (unsigned int)v333 | (unsigned int)v338 & (unsigned int)v343) + (((unsigned int)v343 >> 13 | (unsigned int)v343 * 0x80000) ^ ((unsigned int)v343 >> 2 | (unsigned int)v343 * 0x40000000) ^ ((unsigned int)v343 * 0x400 | (unsigned int)v343 >> 22));
            v348 = ((v9 * 0x4000 | v9 >> 18) ^ (v9 >> 7 | v9 * 0x2000000) ^ (unsigned int)v344 % 8) + v8 + v5 + ((unsigned int)((unsigned long long)v40 >> 10) ^ (v40 * 0x2000 | v40 >> 19) ^ (v40 * 0x8000 | v40 >> 17));
            v42 = ((v9 * 0x4000 | v9 >> 18) ^ (v9 >> 7 | v9 * 0x2000000) ^ (unsigned int)v344 % 8) + v8 + v5 + ((unsigned int)((unsigned long long)v40 >> 10) ^ (v40 * 0x2000 | v40 >> 19) ^ (v40 * 0x8000 | v40 >> 17));
            v350 = (((unsigned int)v346 >> 11 | (unsigned int)v346 * 0x200000) ^ ((unsigned int)v346 >> 6 | (unsigned int)v346 * 0x4000000) ^ ((unsigned int)v346 * 128 | (unsigned int)v346 >> 25)) + (unsigned int)(v332 + ((v9 * 0x4000 | v9 >> 18) ^ (v9 >> 7 | v9 * 0x2000000) ^ (unsigned int)v344 % 8) + v8 + v5 + ((unsigned int)((unsigned long long)v40 >> 10) ^ (v40 * 0x2000 | v40 >> 19) ^ (v40 * 0x8000 | v40 >> 17)) - 1538233109) + (((unsigned int)v336 ^ (unsigned int)v341) & (unsigned int)v346 ^ (unsigned int)v336);
            v351 = v333 + v350;
            v352 = (unsigned int)v350 + (((unsigned int)v343 | v347) & (unsigned int)v338 | (unsigned int)v343 & v347) + ((v347 % 0x2000 | v347 * 0x80000) ^ (v347 % 4 | v347 * 0x40000000) ^ ((unsigned int)rbx<8> * 0x400 | (unsigned int)rbx<8> >> 22));
            tmp_522 = ((v11 * 0x4000 | v11 >> 18) ^ (v11 >> 7 | v11 * 0x2000000) ^ (unsigned int)((unsigned long long)v11 >> 3)) + (unsigned int)v344 + v0;
            v353 = v10;
            v43 = ((unsigned int)v345 % 0x400 ^ ((unsigned int)v345 * 0x2000 | (unsigned int)v345 >> 19) ^ ((unsigned int)v345 * 0x8000 | (unsigned int)v345 >> 17)) + (unsigned int)tmp_522;
            v354 = (unsigned int)v338 + ((v351 % 0x800 | v351 * 0x200000) ^ ((unsigned int)r9<8> >> 6 | (unsigned int)r9<8> * 0x4000000) ^ ((unsigned int)r9<8> * 128 | (unsigned int)r9<8> >> 25)) + (unsigned int)(v336 + ((unsigned int)v345 % 0x400 ^ ((unsigned int)v345 * 0x2000 | (unsigned int)v345 >> 19) ^ ((unsigned int)v345 * 0x8000 | (unsigned int)v345 >> 17)) + (unsigned int)tmp_522 - 1090935817) + (((unsigned int)v341 ^ (unsigned int)v346) & r9<8> ^ (unsigned int)v341);
            v355 = ((v351 % 0x800 | v351 * 0x200000) ^ ((unsigned int)r9<8> >> 6 | (unsigned int)r9<8> * 0x4000000) ^ ((unsigned int)r9<8> * 128 | (unsigned int)r9<8> >> 25)) + (unsigned int)(v336 + ((unsigned int)v345 % 0x400 ^ ((unsigned int)v345 * 0x2000 | (unsigned int)v345 >> 19) ^ ((unsigned int)v345 * 0x8000 | (unsigned int)v345 >> 17)) + (unsigned int)tmp_522 - 1090935817) + (((unsigned int)v341 ^ (unsigned int)v346) & r9<8> ^ (unsigned int)v341) + ((v347 | v352) & (unsigned int)v343 | rbx<8> & (unsigned int)r11<8>) + (((unsigned int)r11<8> >> 13 | (unsigned int)r11<8> * 0x80000) ^ ((unsigned int)r11<8> >> 2 | (unsigned int)r11<8> * 0x40000000) ^ ((unsigned int)r11<8> * 0x400 | (unsigned int)r11<8> >> 22));
            v16 += ((v351 % 0x800 | v351 * 0x200000) ^ ((unsigned int)r9<8> >> 6 | (unsigned int)r9<8> * 0x4000000) ^ ((unsigned int)r9<8> * 128 | (unsigned int)r9<8> >> 25)) + (unsigned int)(v336 + ((unsigned int)v345 % 0x400 ^ ((unsigned int)v345 * 0x2000 | (unsigned int)v345 >> 19) ^ ((unsigned int)v345 * 0x8000 | (unsigned int)v345 >> 17)) + (unsigned int)tmp_522 - 1090935817) + (((unsigned int)v341 ^ (unsigned int)v346) & r9<8> ^ (unsigned int)v341) + ((v347 | v352) & (unsigned int)v343 | rbx<8> & (unsigned int)r11<8>) + (((unsigned int)r11<8> >> 13 | (unsigned int)r11<8> * 0x80000) ^ ((unsigned int)r11<8> >> 2 | (unsigned int)r11<8> * 0x40000000) ^ ((unsigned int)r11<8> * 0x400 | (unsigned int)r11<8> >> 22));
            v44 = ((unsigned int)v348 % 0x400 ^ ((unsigned int)v348 * 0x2000 | (unsigned int)v348 >> 19) ^ ((unsigned int)v348 * 0x8000 | (unsigned int)v348 >> 17)) + ((v10 * 0x4000 | v10 >> 18) ^ (v10 >> 7 | v10 * 0x2000000) ^ (unsigned int)v353 % 8) + v11 + (unsigned int)v328;
            v18 += v347;
            v357 = (((unsigned int)v346 ^ v351) & v354 ^ (unsigned int)v346) + (unsigned int)(v341 + ((unsigned int)v348 % 0x400 ^ ((unsigned int)v348 * 0x2000 | (unsigned int)v348 >> 19) ^ ((unsigned int)v348 * 0x8000 | (unsigned int)v348 >> 17)) + ((v10 * 0x4000 | v10 >> 18) ^ (v10 >> 7 | v10 * 0x2000000) ^ (unsigned int)v353 % 8) + v11 + (unsigned int)v328 - 965641998);
            v358 = v354 % 64 | v354 * 0x4000000;
            v17 += v352;
            v359 = v354 % 0x800 | v354 * 0x200000;
            v20 += v354;
            v21 += v351;
            v19 += (unsigned int)v343 + (v359 ^ v358 ^ (v354 * 128 | v354 % 0x2000000)) + v357;
            v360 = ...;
            v28[0] = v26;
            v28[1] = v16;
            v60 = v16;
            v28[1] = v17;
            v28[1 + 1] = v18;
            v28[2 + 1] = v20;
            v28[2] = v19;
            v26 = v360;
            v28[3] = v21;
            v22 += (unsigned int)v346;
            v28[3 + 1] = v22;
        }
        while (v14 < v27);
    }
    return v60;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60e278;
extern uint128_t g_60e280;
extern unsigned int g_60e290;
extern int512_t g_60e320;

int sub_407630()
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
    v17 = g_60e278;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60e290 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60e278 != 6349440)
            {
                v16 = sub_4084b0();
                g_60e278 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4084b0();
                v17 = v15;
                g_60e278 = v15;
                *(v15) = g_60e280;
            }
            memset(&v17[(long long)(int)g_60e290], 0x0, (int)((unsigned int)v13 + 1 - g_60e290) * 16);
            g_60e290 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4086a0(); /* do not return */
        }
    }
    if (g_60e290 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_406400();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6349600)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_408450();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_406400();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_407e10()
{
}

int sub_407bc0()
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
    return sub_407630();
}

int sub_407b10()
{
}

typedef struct struct_3 {
    char padding_0[4237760];
    char field_40a9c0;
} struct_3;

extern unsigned int g_409f14;
extern unsigned int g_409f50;
extern unsigned int g_409f5f;
extern unsigned int g_409f99;
extern unsigned int g_409fa8;
extern unsigned int g_40a5c8;
extern unsigned int g_40a838;
extern unsigned int g_40a868;
extern unsigned int g_40a8a0;
extern unsigned int g_40a8d0;
extern unsigned int g_40a900;
extern unsigned int g_40a930;
extern unsigned int g_40a960;
extern unsigned int g_40a990;
extern unsigned int g_40be27;
extern unsigned int g_60e210;
extern unsigned int g_60e29c;
extern char g_60e2d8;
extern char g_60e2d9;
extern char g_60e2da;
extern char g_60e2db;
extern char g_60e2dc;
extern unsigned long long g_60e2e0;
extern unsigned long long g_60e2e8;
extern char g_60e2f0;
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
    struct_3 *v87;  // rsi
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
    sub_406260();
    setlocale(0x6, 0x40be27);
    bindtextdomain(0x409f14, 0x40a5c8);
    textdomain(0x409f14);
    sub_409e30();
    setvbuf(stdout, NULL, 0x1, 0x0);
    while (true)
    {
        v32 = sub_409690();
        if ((unsigned int)v32 == -1)
        {
            g_60e2e8 = 58;
            g_60e2e0 = 56;
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
                        if (g_60e2da != 0)
                        {
                            v35 = "the --ignore-missing option is meaningful only when verifying checksums";
                        }
                        else if (g_60e2dc != 0)
                        {
                            v35 = "the --status option is meaningful only when verifying checksums";
                        }
                        else if (g_60e2db != 0)
                        {
                            v35 = "the --warn option is meaningful only when verifying checksums";
                        }
                        else if (g_60e2d9 == 1)
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
                    g_60e2dc = 0;
                    g_60e2db = 0;
                    g_60e2d9 = 1;
                }
                else if (v32 <= 130)
                {
                    if ((unsigned int)v32 == 128)
                    {
                        g_60e2da = 1;
                    }
                    if ((unsigned int)v32 == 129)
                    {
                        g_60e2dc = 1;
                        g_60e2db = 0;
                        g_60e2d9 = 0;
                    }
                }
                else
                {
                    if ((unsigned int)v32 == 131)
                    {
                        g_60e2d8 = 1;
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
                            sub_408310();
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
            g_60e2dc = 0;
            g_60e2db = 1;
            g_60e2d9 = 0;
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
            if (g_60e29c == (unsigned int)v26)
            {
                *(v10) = "-";
                v10 = &v10[1];
            }
            v2 = v28 + (int)g_60e29c * 8;
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
                            g_60e2f0 = 1;
                            v41 = stdin;
                            v3 = dcgettext(0x0, 0x409f50, 0x5);
                        }
                        else
                        {
                            v41 = (unsigned long long)(unsigned int)sub_4061c0();
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
                                if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
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
                                        v48 = "SHA224";
                                        v74 = 6;
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
                                            v54 = (char)*((char *)(0 + v46 + 6));
                                            v55 = v46 + 6;
                                            if (*((char *)(0 + v46 + 6)) == 32)
                                            {
                                                v54 = (char)*((char *)(0 + v46 + 7));
                                                v55 = v46 + 7;
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
                                            v58 = rax<8> + g_60e2e8;
                                            if (&v45[-1 * v46] >= v58)
                                            {
                                                v59 = v46 + g_60e2e0;
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
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 != 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] == 1) && g_60e210 != 0)
                                {
                                    g_60e210 = 1;
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 == 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) == 32) && g_60e210 != 1)
                                {
                                    g_60e210 = 0;
                                    v65 = v64 + 2;
                                }
                                if ((!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 != 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] == 1) && g_60e210 != 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) != 32 && v66 == 42 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && v61 != 0 && &v45[-1 * v46] >= v58 && *((char *)v18) != 35 && (char)v53 != 0 && (*(v9) == 9 || *(v9) == 32) && &v7[-1 * v9 + -1] != 1 && *((char *)(0 + v64 + 1)) == 32)
                                {
                                    v62 = 0 + v65;
                                    if ((char)v8 != 0)
                                    {
                                        v71 = (char)(sub_4029b0() != 0);
                                    }
                                }
                                if (v54 == 40 && (char)v53 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && *((char *)v18) != 35 && v60 != v74 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41) && v47 != 0 && v68 != 0 || v54 == 40 && (char)v53 == 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) && *((char *)v18) != 35 && v60 != v74 && (*((char *)v62) == 41 || v60 != 1) && (v60 == 1 || *((char *)(v62 + v60 - 1)) == 41 || *((char *)v62) != 41) && v47 == 0)
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
                                    if (g_60e2db != 0)
                                    {
                                        v82 = (unsigned int)sub_407d00();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a838, 0x5));
                                    }
                                }
                                if (...)
                                {
                                    v81 = 0;
                                    if (g_60e2dc == 0)
                                    {
                                        v81 = 0;
                                        v81 = strchr(v62, 0xa) != 0;
                                    }
                                    if ((char)v7 == 0)
                                    {
                                        v6 += 1;
                                        if (g_60e2dc == 0)
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
                                    else if (v17 == 0 || g_60e2da == 0)
                                    {
                                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                                        {
                                            v8 = g_60e2e0 >> 1;
                                            *((unsigned long long *)&v7) = (unsigned int)sub_402af0();
                                            v85 = *((long long *)(unsigned long long)__ctype_tolower_loc());
                                            while (true)
                                            {
                                                v87 = (unsigned long long)v21;
                                                v88 = (unsigned long long)v21 >> 4;
                                                if (v85[(unsigned long long)v72[1 + 2 * v64]] == (char)*((char *)(4237760 + (unsigned long long)(v21 & 15))) && v85[(unsigned long long)v72[2 * v64]] == (char)*((char *)(4237760 + (unsigned long long)((unsigned int)rsi<8> & 15))))
                                                {
                                                    v64 += 1;
                                                    v64 = v8;
                                                }
                                                if (v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)(v21 & 15))) || v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)((unsigned int)rsi<8> & 15))))
                                                {
                                                    v11 += 1;
                                                    break;
                                                    if (g_60e2dc != 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)(v21 & 15))) || v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)((unsigned int)rsi<8> & 15))))
                                            {
                                                v94 = (char)v4;
                                            }
                                            else if (g_60e2dc == 0 && (v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)(v21 & 15))) || v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)((unsigned int)rsi<8> & 15)))))
                                            {
                                                v91 = stdout[5];
                                            }
                                            else if (v85[(unsigned long long)v72[1 + 2 * v64]] == (char)*((char *)(4237760 + (unsigned long long)(v21 & 15))) && v85[(unsigned long long)v72[2 * v64]] == (char)*((char *)(4237760 + (unsigned long long)((unsigned int)rsi<8> & 15))) && v8 == v64)
                                            {
                                                v13 = g_60e2dc;
                                            }
                                            else if (g_60e2dc == 0 && (v85[(unsigned long long)v72[1 + 2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)(v21 & 15))) || v85[(unsigned long long)v72[2 * v64]] != (char)*((char *)(4237760 + (unsigned long long)((unsigned int)rsi<8> & 15)))))
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
                                        if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0)
                                        {
                                            v13 = g_60e2dc;
                                            if (g_60e2dc == 0)
                                            {
                                                v13 = g_60e2d9;
                                                if (g_60e2d9 == 0)
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
                                            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || g_60e2dc == 0 && g_60e2d9 == 0 && v81 != 0)
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
                                                    v7 = g_60e2e0 >> 1;
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
                                    if ((g_60e2dc == 0 && g_60e2d9 == 0 && v81 == 0 && (char)v7 != 0 && (v17 == 0 || g_60e2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) || (char)v7 != 0 && (v17 == 0 || g_60e2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60e2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60e2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 == v8) && g_60e2d9 == 0)
                                    {
                                        v89 = "OK";
                                    }
                                    if (g_60e2dc == 0 && (char)v7 == 0 || (g_60e2dc == 0 && g_60e2d9 == 0 && v81 == 0 && (char)v7 != 0 && (v17 == 0 || g_60e2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) || (char)v7 != 0 && (v17 == 0 || g_60e2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60e2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60e2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 == v8) && g_60e2d9 == 0 || (char)v7 != 0 && (v17 == 0 || g_60e2da == 0) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>) || (*((char *)v41) & 48) != 0) && (g_60e2dc == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (g_60e2d9 == 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>))) && (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)) || v81 != 0) && v7 != v8)
                                    {
                                        __printf_chk(0x1, ": %s\n", dcgettext(0x0, v89, 0x5));
                                    }
                                    v94 = (char)v4;
                                }
                                if (...)
                                {
                                    v95 += 1;
                                    v115 = (unsigned int)sub_407d00();
                                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409f5f, 0x5));
                                }
                                if (...)
                                {
                                    free(v18);
                                    v98 = *((int *)v41) & 32;
                                    if (((char)*((int *)v41) & 32) == 0)
                                    {
                                        if (v5 != 0)
                                        {
                                            v99 = sub_4086e0();
                                        }
                                        if (v5 == 0 || v99 == 0)
                                        {
                                            if (v94 != 0)
                                            {
                                                if (g_60e2dc == 0)
                                                {
                                                    if (v80 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40a8d0, 0x40a8a0, v80, 0x5));
                                                    }
                                                    if (v6 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40a930, 0x40a900, v6, 0x5));
                                                    }
                                                    if (v11 != 0)
                                                    {
                                                        error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x40a990, 0x40a960, v11, 0x5));
                                                    }
                                                    if (v13 == 0 && g_60e2da != 0)
                                                    {
                                                        v114 = (unsigned int)sub_407d00();
                                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409fa8, 0x5));
                                                    }
                                                }
                                                if (v6 == 0 && v11 == 0 && v13 != 0)
                                                {
                                                    v98 = (unsigned int)g_60e2d8 ^ 1 | v98;
                                                }
                                            }
                                            else
                                            {
                                                v107 = (unsigned int)sub_407d00();
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40a868, 0x5));
                                            }
                                            v103 = v98 & 1;
                                        }
                                    }
                                    else
                                    {
                                        v100 = (unsigned int)sub_407d00();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409f99, 0x5));
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
                                v106 = (unsigned int)sub_407d00();
                                error(0x0, *(__errno_location()), "%s");
                                v103 = 0;
                            }
                        }
                        v106 = (unsigned int)sub_407d00();
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
                        if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Shr(Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), 0x1<8>), Load(addr=0x60e2e0<64>, size=8, endness=Iend_LE), cc_ndep<8>)))
                        {
                            v108 = 0;
                            while (true)
                            {
                                v108 += 1;
                                __printf_chk(0x1, "%02x", (unsigned int)v20);
                                if (g_60e2e0 >> 1 <= v108)
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
                            fwrite_unlocked("SHA224", 0x1, 0x6, stdout);
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
            if (g_60e2f0 != 0)
            {
                if ((char)(sub_4086e0() + 1 == 0))
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
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x409f50, 0x5));
}

int sub_408290()
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

int sub_405a60()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v3;  // rbx

    v0 = v3;
    sub_405990();
}

int sub_408310()
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
        return sub_407eb0();
    }
}

extern uint128_t g_60e420;
extern uint128_t g_60e430;
extern uint128_t g_60e440;
extern unsigned long long g_60e450;

int sub_407c4f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60e450;
    *((uint128_t *)&v0) = g_60e420;
    *((uint128_t *)&v1) = g_60e430;
    *((uint128_t *)&v2) = g_60e440;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_407630();
}

int sub_4084f0()
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
        sub_4086a0(); /* do not return */
    }
}

int sub_407932()
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

int sub_405e40()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]

    v0 = 3926247204440088280;
    v1 = -644479594506691305;
    v2 = 7518782744944446257;
    v3 = 13761399178871279527;
    v4 = 0;
    v5 = 0;
    sub_405ac0();
    sub_405990();
    return sub_4031e0();
}

int sub_408620()
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
        sub_4086a0(); /* do not return */
    }
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

extern unsigned int g_40bdc8;
extern unsigned int g_40be0c;

int sub_409040()
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
    unsigned long long|char [2] v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9
    unsigned long v26;  // rax
    unsigned long|unsigned int v27;  // rdx
    unsigned long v29;  // rax
    char v30[2];  // rcx
    unsigned long v31;  // rsi
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
    unsigned long|unsigned long long v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long|unsigned int v46;  // rbp
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
                        sub_408940();
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
                            v27 = v31 + 1;
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
                v42 = v26;
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
                    v39 = v0->field_30;
                    v40 = (unsigned int)v26 + 1;
                    v0->field_0 = v42;
                    if (v42 != v39)
                    {
                        if ((unsigned int)v42 != v8->field_30)
                        {
                            sub_408940();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v42;
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
        v45 = (unsigned int)sub_408a20();
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
                        dcgettext(0x0, 0x40bdc8, 0x5);
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
            dcgettext(0x0, 0x40be0c, 0x5);
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
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40bdc8, 0x5);
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
        v45 = (unsigned int)sub_408a20();
    }
    v63 = v45;
    return v63;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40be27;
extern char g_60e498[2];

int sub_409850()
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
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_60e498;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40be27 : (unsigned long long)nl_langinfo(0xe));
    if (g_60e498 == 0)
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
            v9 = &g_40be27;
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v60 = __uflow(v10);
                        }
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
                                    v9 = &g_40be27;
                                    v10 = (tmp_10 == 0? &g_40be27 : tmp_10);
                                    free(NULL);
                                    sub_4086e0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1 && v37 != 0)
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v60 = *(v59);
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
                        if ((unsigned int)v60 == 35 && v62 == -1 || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v28 <= 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_40be27 : tmp_10);
                            sub_4086e0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 <= 1 || (unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && v62 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_40be27;
                    }
                    else if (v37 == 0 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 > 1 || ((unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && (unsigned int)v60 != 35 && v28 <= 1 || (unsigned int)v60 == 35 && (unsigned int)(v60 - 9) > 1 && (unsigned int)v60 != 32 && v62 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40be27;
            free(v17);
        }
        *((char *[2])&g_60e498[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40be27 : tmp_10), v9);
            if (v68 != 0 && (v9[1] != 0 || v67 != 42))
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
            if (v68 == 0 || v9[1] == 0 && v67 == 42)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_4096d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409610();
}

int sub_406400()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long v3;  // [bp-0xd8]
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
    void *v27;  // [bp+0x18]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r15
    unsigned long v30;  // r8
    unsigned long long v31;  // rcx
    unsigned long v32;  // r9
    unsigned long|unsigned long long v33;  // r10
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
            v26 = (unsigned int)sub_406300();
            v27 = (unsigned long long)(unsigned int)sub_406300();
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
                                    v40 = 32;
                                    v50 = v5;
                                    v5 = v41;
                                    v78 = 0;
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
                    case 8:
                        v40 = 8;
                        v45 = 98;
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
                    case 9:
                        v40 = 9;
                        v45 = 116;
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
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
                        if (v17 != 0)
                        {
                            break;
                        }
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
                            v76 = (unsigned int)sub_406400();
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
                    v46 = sub_409710();
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
                v76 = (unsigned int)sub_406400();
            }
            if ((v17 == 0 || v46 == 0) && (v17 == 0 || v89 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v46 == 0 || v4 != 0) && (v46 == 0 || v5 == 0 || v4 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v89 != 0 || v4 != 0) && (v5 == 0 || v89 != 0 || v4 != 0))
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

int sub_4097f0()
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

extern char g_60e2da;
extern char g_60e2f0;
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
        g_60e2f0 = 1;
        sub_406190();
        v13 = sub_406020();
    }
    else
    {
        v11 = (unsigned int)sub_4061c0();
        if (v11 != 0)
        {
            sub_406190();
            v15 = sub_406020();
            if (v15 == 0)
            {
                v18 = sub_4086e0();
                if (v18 != 0)
                {
                    v16 = 0;
                    v21 = (unsigned int)sub_407d00();
                    error(0x0, *(__errno_location()), "%s");
                }
            }
        }
        else
        {
            v16 = g_60e2da;
            v17 = __errno_location();
            if (g_60e2da != 0 && *(v17) == 2)
            {
                *(v9) = 1;
            }
            if (g_60e2da == 0 || *(v17) != 2)
            {
                v16 = 0;
                sub_407d00();
                error(0x0, *(v17), "%s");
            }
        }
    }
    if ((char)v10 == 0 || v11 != 0)
    {
        if (((char)v10 == 0 || v15 != 0) && (v13 != 0 || (char)v10 != 0))
        {
            v16 = 0;
            v20 = (unsigned int)sub_407d00();
            error(0x0, *(__errno_location()), "%s");
            if (stdin != v11)
            {
                sub_4086e0();
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

extern int512_t g_60e420;

int sub_4078c0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60e420 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_406400();
}

extern unsigned long long __progname_full;
extern unsigned long long g_60e308;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_406260()
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
        g_60e308 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_4084a0()
{
}

int sub_407df0()
{
}

extern int512_t g_60e208;

int sub_409e30()
{
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4082b0()
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
    return sub_407eb0();
}

int sub_407de0()
{
}

int sub_407c30()
{
}

extern char g_60e2c8;
extern unsigned long long g_60e2d0;

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

    if (g_60e2c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60e2d0 >= 0)
            {
                break;
            }
            g_60e2d0 = g_60e2d0 + 1;
            *((long long *)(6348352 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60e2c8 = 1;
        return sub_40289b();
    }
    return v4;
}

int sub_408470()
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
        sub_4086a0(); /* do not return */
    }
}

int sub_403120()
{
    unsigned long long v1[6];  // rdi

    v1[4] = 0;
    v1[0] = 13503953895726638695;
    v1[1] = 11912009169889063794;
    v1[2] = 11170449402626986623;
    v1[3] = 6620516960021240235;
    v1[5] = 0;
    return 6620516960021240235;
}

int sub_408650()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408450();
}

int sub_408680()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern int512_t g_60e420;

int sub_407870()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60e420 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60e420 : v1) + 4)) = v3;
    return v2;
}

int sub_407b50()
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
    return sub_407630();
}

int sub_407cd0()
{
}

int sub_408520() { crash_skku;
}
extern unsigned long long g_40be27;

int sub_409710()
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
        v5 = &g_40be27;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4097f0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern int512_t g_60e420;

int sub_407810()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60e420 : v1));
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

int sub_4088e0()
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

extern unsigned long long g_60e2e0;

int sub_402950()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v2 = v1;
    if (g_60e2e0 != 0)
    {
        v4 = 0;
        while (true)
        {
            if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)*(v2) << 1) + 1)) & 16) != 0)
            {
                v5 = v4 + 1;
                v2 = &v2[1];
                v4 += 1;
                if (v5 >= g_60e2e0)
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

int sub_407a30()
{
}

extern struct_0 *g_60e278;
extern unsigned long long g_60e280;
extern unsigned long long g_60e288;
extern unsigned int g_60e290;
extern unsigned long long g_60e320;

int sub_407a40()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60e290;
    if (g_60e290 > 1)
    {
        v2 = &g_60e278[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60e278[(unsigned long long)(g_60e290 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60e278->field_8 != 6349600)
    {
        v1 = free(g_60e278->field_8);
        g_60e280 = 0x100;
        g_60e288 = &g_60e320;
    }
    if (g_60e278 != 6349440)
    {
        v1 = free(g_60e278);
        g_60e278 = &g_60e280;
    }
    g_60e290 = 1;
    return v1;
}

int sub_4031e0()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdi

    v1 = 0;
    do
    {
        *((int *)(v2 + v1)) = *((int *)(v3 + v1)) * 0x1000000 | *((int *)(v3 + v1)) * 0x100 & 0xff0000 | *((int *)(v3 + v1)) >> 8 & 0xff00 | *((int *)(v3 + v1)) >> 24 & 255;
        v1 += 4;
    }
    while (v1 != 28);
    return v2;
}

int sub_405ec0()
{
    unsigned long long v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    unsigned long v8;  // r12
    void *v9;  // r12
    unsigned long long v10;  // rbx
    unsigned int *v11;  // rdi
    unsigned long long v12;  // rax
    unsigned long long v16;  // rdi

    if (v8 != 0)
    {
        v4 = 0;
        v8 = malloc(0x8048);
        v0 = 13503953895726638695;
        v1 = 11912009169889063794;
        v2 = 11170449402626986623;
        v3 = 6620516960021240235;
        v5 = 0;
        while (true)
        {
            v10 = 0;
            while (true)
            {
                v12 = fread_unlocked(v9 + v10, 0x1, 0x8000 - v10, v11);
                v10 += v12;
                if (v10 != 0x8000)
                {
                    if (v12 == 0 && ((char)*(v11) & 32) != 0)
                    {
                        free(v9);
                        return 1;
                    }
                    if (((char)*(v11) & 32) == 0 && v12 == 0 || ((char)*(v11) & 16) != 0 && v12 != 0)
                    {
                        if (v10 != 0)
                        {
                            sub_405ac0();
                        }
                        sub_405990();
                        v16 = &v0;
                        4207040();
                        free(v9);
                        return 0;
                    }
                }
                else
                {
                    sub_403200();
                }
            }
        }
    }
    else
    {
        return 1;
    }
}

extern unsigned long long g_60e300;

int sub_403060()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60e300 = v1;
    return v2;
}

int sub_407e60()
{
}

int sub_406190()
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

int sub_406180()
{
}

extern unsigned int g_60e294;
extern unsigned int g_60e298;
extern unsigned int g_60e29c;
extern unsigned int g_60e460;
extern unsigned int g_60e464;
extern unsigned int g_60e468;
extern unsigned long long g_60e470;
extern unsigned long long g_60e4a0;

int sub_409610()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60e460 = g_60e29c;
    g_60e464 = g_60e298;
    v1 = (unsigned int)v2;
    v0 = &g_60e460;
    g_60e29c = g_60e460;
    g_60e4a0 = g_60e470;
    g_60e294 = g_60e468;
    return sub_409040();
}

int sub_408600()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408450();
}

typedef struct struct_1 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    unsigned long long field_28;
} struct_1;

extern void g_40ab80;

int sub_405990()
{
    unsigned long v0;  // [bp-0x18]
    void tmp_70;  // tmp #70
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx
    struct_1 *v5;  // rdi
    unsigned long long v6;  // rsi
    struct_1 *v7;  // rbx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rdx

    v1 = v3;
    v0 = v4;
    v6 = v5->field_28;
    v7 = v5;
    tmp_70 = v5->field_20;
    v11 = v5->field_24;
    v8 = (0 - (unsigned long long)(char)(v5->field_28 < 56) & -64) - -128;
    v9 = (0 - (unsigned long long)(char)(v5->field_28 < 56) & -0x10) + 31;
    v10 = tmp_70 + v6;
    v7->field_20 = tmp_70 + v6;
    if (tmp_70 + v6 < v6)
    {
        v11 = (unsigned int)v11 + 1;
        v7->field_24 = v11;
    }
    *((unsigned int *)&v7[3].padding_0[24 + 4 * (0 - (unsigned long long)(char)(v6 < 56) & -0x10)]) = ((unsigned int)v11 * 8 | (unsigned int)v10 % 0x20000000) * 0x1000000 | ((unsigned int)v11 * 8 | (unsigned int)v10 % 0x20000000) * 0x100 & 0xff0000 | ((unsigned int)v11 * 8 | (unsigned int)v10 % 0x20000000) >> 8 & 0xff00 | ((unsigned int)v11 * 8 | (unsigned int)v10 % 0x20000000) >> 24 & 255;
    *((unsigned int *)&v7[1].padding_0[4 * v9]) = (unsigned int)v10 * 0x800 & 0xff0000 | (unsigned int)(v10 * 8 >> 24) | (unsigned int)v10 * 0x8000000 | (unsigned int)(v10 * 8 >> 8) & 0xff00;
    memcpy(&v7[1].padding_0[v6], &g_40ab80, v8 - v6 - 8);
}

int sub_4088a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_4088e0();
    }
}

int sub_407e30()
{
}

extern unsigned int g_40ab65;
extern unsigned int g_60e220;
extern char g_60e2f8;
extern unsigned long long g_60e300;

int sub_403080()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_409790();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60e2f8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40ab65, 0x5);
            if (g_60e300 != 0)
            {
                sub_407cd0();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60e2f8 != 0)
    {
        v3 = sub_409790();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60e2f8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60e220);
        error(0x0, *(v2), "%s");
    }
}

int sub_407ae0()
{
}

extern int512_t g_60e420;

int sub_407820()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60e420 : v1)) = v2;
    return &g_60e420;
}

extern unsigned int g_40bcef;
extern unsigned int g_60e220;

int sub_4086a0()
{
    dcgettext(0x0, 0x40bcef, 0x5);
    error(g_60e220, 0x0, "%s");
}

int sub_402948() { crash_skku;
}
extern unsigned int g_40b9b2;
extern unsigned int g_40b9dd;
extern unsigned int g_40bc10;

int sub_4083d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b9b2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b9dd, 0x5));
    dcgettext(0x0, 0x40bc10, 0x5);
}

int sub_409690()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409610();
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

int sub_405a90()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405990();
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

extern unsigned int g_40b96b;
extern unsigned int g_40b96f;
extern unsigned int g_40b97f;
extern unsigned int g_40b996;
extern unsigned int g_40b9f8;
extern unsigned int g_40bac8;
extern unsigned int g_40bae8;
extern unsigned int g_40bb10;
extern unsigned int g_40bb38;
extern unsigned int g_40bb68;

int sub_407eb0()
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
    dcgettext(0x0, 0x40b96b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b9f8, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40b96f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40b97f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40b996, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40bac8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40bae8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40bb10, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40bb38, 0x5);
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
        dcgettext(0x0, 0x40bb68, 0x5);
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

int sub_407cf0()
{
}

int sub_4096f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409040();
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern unsigned int g_60e458;

int sub_408760()
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
        if (g_60e458 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_408760();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_60e458 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_60e458 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_408760();
        }
        if ((*(v12) == 22 || g_60e458 < 0) && (g_60e458 < 0 || (unsigned int)v15 < 0) && (g_60e458 < 0 || (unsigned int)v15 >= 0) && (g_60e458 == -1 || g_60e458 >= 0) && (g_60e458 >= 0 || (unsigned int)v15 >= 0))
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

int sub_407d00()
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
    return sub_407630();
}

int sub_4086e0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_4088a0() != 0)
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

int sub_407c40()
{
}

extern char g_60e2f8;

int sub_403070()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60e2f8 = v1;
    return v2;
}

int sub_407b30()
{
}

extern int512_t g_40ac06;
extern int512_t g_40ac0a;

int sub_406300()
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
        v3 = sub_409850();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40ac06 : 4238353);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40ac0a : 4238349);
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_40bd00;
extern unsigned int g_40bd20;
extern unsigned int g_40bd50;
extern unsigned int g_40bd70;
extern unsigned int g_40bda0;
extern unsigned long long stderr;

int sub_408a20()
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
                                dcgettext(0x0, 0x40bd00, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40bd20, 0x5);
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
                                dcgettext(0x0, 0x40bda0, 0x5);
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
                            dcgettext(0x0, 0x40bd70, 0x5);
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
            dcgettext(0x0, 0x40bd50, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_408450()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4086a0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern int512_t g_60e420;

int sub_407830()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60e420 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60e420 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_40795b()
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
    v7 = (unsigned int)sub_406400();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_408450();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_406400();
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

int sub_407b00()
{
}

int sub_407e80()
{
}

int sub_407cc0()
{
}

int sub_408940()
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

int sub_4085b0() { crash_skku;
}
typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    char field_30;
} struct_0;

int sub_405ac0()
{
    void tmp_11;  // tmp #11
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    struct_0 *v3;  // r12
    void *v4;  // rdi
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r15
    unsigned long v7;  // r14
    unsigned long long v8;  // rsi
    unsigned long long v11;  // rbp
    unsigned long long|void * v12;  // rax
    unsigned long long v13;  // rcx
    struct_0 *|unsigned int v14;  // edx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rsi
    uint128_t *v17;  // rbx
    uint128_t v18[4];  // rbp
    void *v19;  // r14
    unsigned long long v20;  // r15
    uint128_t v21;  // xmm0
    unsigned long long v23;  // rax
    void *v24;  // rsi
    unsigned long long v26;  // r14
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rsi
    unsigned long v29;  // r13

    v2 = v1;
    v3 = v14;
    v17 = v4;
    v5 = v14->field_28;
    if (v14->field_28 != 0)
    {
        v6 = &v14->field_30;
        v7 = (!(128 - v5 <= v1)? v1 : 128 - v5);
        v12 = memcpy(&(struct struct_0 *)&v14->field_30->padding_0[v5], v4, (!(128 - v5 <= v1)? v1 : 128 - v5));
        v8 = v3->field_28 + v7;
        v3->field_28 = v3->field_28 + v7;
        if (v8 > 64)
        {
            sub_403200();
            v11 = v5 + v7 & -64;
            v12 = &(struct struct_0 *)&v14->field_30->padding_0[v11];
            v13 = (unsigned int)v3->field_28 & 63;
            v3->field_28 = (unsigned int)v3->field_28 & 63;
            if (!((unsigned int)v13 < 8))
            {
                *((long long *)&v3->field_30) = *((long long *)v12);
                *((long long *)(v6 + v13 - 8)) = *((long long *)&((char *)v12)[v13 + -8]);
                v12 -= v6 - (&v3[1].padding_0[7] & -8);
                v14 = (unsigned int)(v6 - (&v3[1].padding_0[7] & -8) + v13) & -8;
                if (((unsigned int)(v6 - (&v3[1].padding_0[7] & -8) + v13) & -8) >= 8)
                {
                    v14 &= -8;
                    v15 = 0;
                    do
                    {
                        v16 = v15;
                        v15 = (unsigned int)v15 + 8;
                        *((long long *)((&v14[1].padding_0[7] & -8) + v16)) = *((long long *)(v12 + v16));
                    }
                    while ((unsigned int)v15 < v14);
                }
            }
            else if (!(((char)((unsigned int)v14->field_28 & 63) & 4) == 0))
            {
                *((int *)&v3->field_30) = *((int *)v12);
                v12 = (unsigned int)*((int *)&((char *)v12)[v13 + -4]);
                *((unsigned int *)&(&v14->padding_0[0])[44 + v13]) = v12;
            }
            else if (((char)v14->field_28 & 63) != 0)
            {
                v3->field_30 = *((char *)v12);
                if ((v13 & 2) != 0)
                {
                    v12 = (unsigned short)*((short *)&((char *)v12)[v13 + -2]);
                    *((unsigned long long *)&(&v14->padding_0[0])[46 + v13]) = v12;
                }
            }
        }
        v17 = v4 + v7;
        v2 -= v7;
    }
    if (v2 > 63)
    {
        if ((v17 & 3) != 0)
        {
            v18 = &v14->field_30;
            if (v2 != 64)
            {
                v20 = v2 - 65 >> 6;
                v19 = &v17[4 + 4 * (v2 - 65 >> 6)];
                while (true)
                {
                    v21 = *(v17);
                    v17 = &v17[4];
                    *((uint128_t *)&v18) = v21;
                    *((uint128_t *)&v18[2]) = v17[-3];
                    *((uint128_t *)&v18[4]) = v17[-2];
                    *((uint128_t *)&v18[6]) = v17[-1];
                    sub_403200();
                    if (v17 == v19)
                    {
                        break;
                    }
                }
                v2 = v2 + (0 - v20) * 64 - 64;
            }
            else
            {
                v19 = v17;
            }
        }
        else
        {
            tmp_11 = v2;
            v2 = (unsigned int)v2 & 63;
            v17 = (char *)v17 + (tmp_11 & -64);
            v12 = sub_403200();
        }
    }
    if (v2 <= 63 || (v17 & 3) == 0)
    {
        if (v2 == 0)
        {
            return v12;
        }
        v18 = &v14->field_30;
        v19 = v17;
    }
    if (v2 != 0 || v2 > 63 && (v17 & 3) != 0)
    {
        v23 = v3->field_28;
        v24 = (char *)v18 + v3->field_28;
        if (!((unsigned int)v2 < 8))
        {
            *((long long *)v24) = *((long long *)v19);
            *((long long *)&((char *)v24)[v2 + -8]) = *((long long *)&((char *)v19)[v2 + -8]);
            v26 = v19 - (v24 - (v24 + 8 & -8));
            v14 = (unsigned int)(v24 - (v24 + 8 & -8) + v2) & -8;
            if (((unsigned int)(v24 - (v24 + 8 & -8) + v2) & -8) >= 8)
            {
                v14 &= -8;
                v27 = 0;
                do
                {
                    v28 = v27;
                    v27 = (unsigned int)v27 + 8;
                    *((long long *)((v24 + 8 & -8) + v28)) = *((long long *)(v26 + v28));
                }
                while ((unsigned int)v27 < v14);
            }
        }
        else if (!((v2 & 4) == 0))
        {
            *((int *)v24) = *((int *)v19);
            *((int *)&((char *)v24)[v2 + -4]) = *((int *)&((char *)v19)[v2 + -4]);
        }
        else if ((unsigned int)v2 != 0)
        {
            *((char *)v24) = *((char *)v19);
            if ((v2 & 2) != 0)
            {
                *((short *)&((char *)v24)[v2 + -2]) = *((short *)&((char *)v19)[v2 + -2]);
            }
        }
        v29 = v2 + v14->field_28;
        if (v29 > 63)
        {
            v29 -= 64;
            sub_403200();
            v23 = memcpy(v18, &v3[2].padding_0[14], v29);
        }
        v3->field_28 = v29;
        return v23;
    }
}

int sub_403170()
{
    unsigned long long v1[6];  // rdi

    v1[4] = 0;
    v1[0] = 3926247204440088280;
    v1[1] = -644479594506691305;
    v1[2] = 7518782744944446257;
    v1[3] = 13761399178871279527;
    v1[5] = 0;
    return 13761399178871279527;
}

int sub_405dc0()
{
    unsigned long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0xb0]
    unsigned long long v2;  // [bp-0xa8]
    unsigned long long v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rdi

    v0 = 13503953895726638695;
    v1 = 11912009169889063794;
    v2 = 11170449402626986623;
    v3 = 6620516960021240235;
    v4 = 0;
    v5 = 0;
    sub_405ac0();
    sub_405990();
    v10 = v9;
    v11 = &v0;
    return 4207040();
}

extern char g_60e420;

int sub_407890()
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
    v3 = (v2 == 0? &g_60e420 : v2);
    *((int *)(tmp_11? &g_60e420 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60e420;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60e420;
        abort(); /* do not return */
    }
}

int sub_4077d0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_408650();
}

int sub_4086cc()
{
    abort(); /* do not return */
}

int sub_409670()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_409610();
}

