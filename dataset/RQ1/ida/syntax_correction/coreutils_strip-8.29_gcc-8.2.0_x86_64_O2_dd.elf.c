
#include "decompile_idapro.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
__int64 __fastcall main(int a1, const char **a2, char **a3)
{
  size_t v3; // r14
  const char *v4; // r15
  unsigned __int64 v5; // rbp
  unsigned __int64 v7; // r12
  __int64 i; // rax
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  char *v11; // rax
  char *v12; // r8
  const char *v13; // rdx
  char v14; // al
  const char *v15; // rcx
  int v16; // ecx
  char v17; // bp
  int v18; // eax
  __int64 (__fastcall *v19)(int, void *, size_t); // rax
  int v20; // eax
  char *v21; // rax
  __int64 v22; // rdx
  const __int32_t *v23; // rsi
  char *v24; // rax
  __int64 v25; // rdx
  char *v26; // rax
  __int64 v27; // rdx
  __off_t v28; // rax
  size_t v29; // rsi
  __off_t v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r12
  size_t v34; // r15
  __int64 v35; // r14
  __int64 v36; // rbp
  size_t v37; // r12
  __sighandler_t sa_handler; // rbp
  unsigned __int64 v39; // r12
  __int64 v40; // rbx
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // rbp
  char v43; // si
  void *v44; // r9
  int v45; // esi
  __int64 v46; // rax
  bool v47; // zf
  bool v48; // cf
  unsigned __int64 v49; // r15
  size_t v50; // rbp
  size_t v51; // rdx
  int v52; // esi
  char *v53; // rdi
  char *v54; // rbx
  void *v55; // rdi
  char v56; // r8
  __int64 v57; // rax
  const char *v58; // rax
  char v59; // cl
  const char *v60; // rdx
  char v61; // al
  const char *v62; // rax
  char v63; // cl
  const char *v64; // rdx
  char v65; // al
  const char *v66; // rax
  char v67; // cl
  const char *v68; // rdx
  char v69; // al
  const char *v70; // rax
  char v71; // cl
  const char *v72; // rdx
  char v73; // al
  size_t v74; // r14
  const void *v75; // rsi
  size_t v76; // rbp
  size_t v77; // rdx
  unsigned __int64 v78; // rbp
  int v79; // ebp
  unsigned int v80; // eax
  int v81; // r8d
  int v82; // r9d
  int v83; // ebp
  unsigned int v84; // eax
  int v85; // r8d
  int v86; // r9d
  unsigned __int64 v87; // rbp
  int v88; // ebp
  unsigned int v89; // eax
  int v90; // r8d
  int v91; // r9d
  char *v92; // rax
  char *v93; // rax
  char *v94; // rsi
  char v95; // dl
  __int64 v96; // rbx
  int v97; // ebp
  unsigned int v98; // eax
  int v99; // r8d
  int v100; // r9d
  char *v101; // rsi
  char *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __off_t v105; // rax
  __int64 v106; // rbx
  unsigned int v107; // eax
  int v108; // ecx
  int v109; // r8d
  int v110; // r9d
  __int64 v111; // rax
  const char *v112; // rsi
  int v113; // ebx
  unsigned int v114; // eax
  int v115; // r8d
  int v116; // r9d
  char *v118; // rax
  __int64 v119; // rdx
  const __int32_t *v120; // rsi
  char *v121; // rax
  __int64 v122; // rdx
  __off_t v123; // rdx
  __off_t v124; // rdx
  unsigned __int64 v125; // rbx
  __off_t v126; // rdx
  int v127; // ebx
  unsigned int v128; // eax
  int v129; // r8d
  int v130; // r9d
  const char *v131; // rax
  char v132; // cl
  const char *v133; // rdx
  char v134; // al
  unsigned int v135; // eax
  int v136; // ecx
  int v137; // r8d
  int v138; // r9d
  int v139; // eax
  int v140; // ebx
  unsigned int v141; // eax
  int v142; // r8d
  int v143; // r9d
  unsigned int v144; // eax
  int v145; // r9d
  __int64 v146; // rax
  int v147; // ebx
  int v148; // ebp
  unsigned int v149; // eax
  int v150; // r9d
  unsigned __int64 v151; // rax
  char *v152; // r8
  const char *v153; // rdx
  char v154; // si
  const char *v155; // rcx
  char v156; // dl
  unsigned __int64 v157; // rdx
  int v158; // ebx
  unsigned int v159; // eax
  int v160; // r9d
  int v161; // esi
  const char *v162; // rdx
  char v163; // si
  char *v164; // rcx
  char v165; // dl
  const char *v166; // rdx
  char v167; // si
  const char *v168; // rcx
  char v169; // dl
  const char *v170; // rdx
  char v171; // si
  const char *v172; // rcx
  char v173; // dl
  int v174; // ebx
  unsigned int v175; // eax
  int v176; // r8d
  int v177; // r9d
  const char *v178; // rsi
  int v179; // ebx
  unsigned int v180; // eax
  int v181; // r9d
  const char *v182; // rdx
  char v183; // si
  char *v184; // rcx
  char v185; // dl
  int v186; // ebx
  unsigned int v187; // eax
  int v188; // r8d
  int v189; // r9d
  int v190; // ebx
  unsigned int v191; // eax
  int v192; // r8d
  int v193; // r9d
  int v194; // ebx
  unsigned int v195; // eax
  int v196; // r8d
  int v197; // r9d
  int v198; // ebx
  unsigned int v199; // eax
  int v200; // r8d
  int v201; // r9d
  unsigned int v202; // eax
  int v203; // r9d
  unsigned int v204; // eax
  int v205; // r8d
  int v206; // r9d
  const char *v207; // rdx
  char v208; // si
  const char *v209; // rcx
  char v210; // dl
  unsigned int v211; // eax
  int v212; // ecx
  int v213; // r8d
  int v214; // r9d
  unsigned int v215; // eax
  int v216; // ecx
  int v217; // r8d
  int v218; // r9d
  const char *v219; // rdi
  unsigned int v220; // eax
  int v221; // ecx
  int v222; // r8d
  int v223; // r9d
  unsigned int v224; // eax
  int v225; // ecx
  int v226; // r8d
  int v227; // r9d
  unsigned int v228; // eax
  int v229; // ecx
  int v230; // r8d
  int v231; // r9d
  const char *v232; // rdx
  char v233; // si
  const char *v234; // rcx
  char v235; // dl
  char v236; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v237; // [rsp+8h] [rbp-F0h]
  char *v238; // [rsp+10h] [rbp-E8h]
  char v239; // [rsp+1Ch] [rbp-DCh]
  struct sigaction n; // [rsp+20h] [rbp-D8h] BYREF

  LODWORD(v5) = a1;
  v7 = (unsigned __int64)getenv("POSIXLY_CORRECT");
  sigemptyset(&set);
  if ( v7 )
    goto LABEL_2;
  while ( 1 )
  {
    sigaddset(&set, 10);
LABEL_2:
    sigaction(2, 0LL, &n);
    if ( n.sa_handler != (__sighandler_t)1 )
      sigaddset(&set, 2);
    *(__m128i *)n.sa_mask.__val = _mm_load_si128((const __m128i *)&set);
    *(__m128i *)&n.sa_mask.__val[2] = _mm_load_si128((const __m128i *)&set.__val[2]);
    *(__m128i *)&n.sa_mask.__val[4] = _mm_load_si128((const __m128i *)&set.__val[4]);
    *(__m128i *)&n.sa_mask.__val[6] = _mm_load_si128((const __m128i *)&set.__val[6]);
    *(__m128i *)&n.sa_mask.__val[8] = _mm_load_si128((const __m128i *)&set.__val[8]);
    *(__m128i *)&n.sa_mask.__val[10] = _mm_load_si128((const __m128i *)&set.__val[10]);
    *(__m128i *)&n.sa_mask.__val[12] = _mm_load_si128((const __m128i *)&set.__val[12]);
    *(__m128i *)&n.sa_mask.__val[14] = _mm_load_si128((const __m128i *)&set.__val[14]);
    if ( sigismember(&set, 10) )
    {
      n.sa_handler = (__sighandler_t)sub_403D40;
      n.sa_flags = 0;
      sigaction(10, &n, 0LL);
    }
    if ( sigismember(&set, 2) )
    {
      n.sa_handler = (__sighandler_t)sub_403D30;
      n.sa_flags = -1073741824;
      sigaction(2, &n, 0LL);
    }
    sub_406A10(*a2);
    setlocale(6, "");
    bindtextdomain(
      "coreutils",
      "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    sub_40DA80(sub_404720);
    qword_614658 = getpagesize();
    sub_406900(
      v5,
      (_DWORD)a2,
      (unsigned int)"dd",
      (unsigned int)"coreutils",
      (_DWORD)off_6142C8,
      (unsigned int)sub_405460,
      "Paul Rubin",
      "David MacKenzie",
      "Stuart Kemp",
      0LL);
    byte_6142B8 = 0;
    if ( (unsigned int)sub_40A500((unsigned int)v5, a2, "", &unk_40F680, 0LL) != -1 )
      goto LABEL_336;
    for ( i = 0LL; i != 256; ++i )
      byte_6143E0[i] = i;
    if ( (int)v5 > dword_61433C )
    {
      v9 = 0LL;
      v3 = 0LL;
      v237 = 0LL;
      v10 = (unsigned int)(v5 + ~dword_61433C);
      v7 = (unsigned __int64)&a2[dword_61433C];
      v5 = -1LL;
      a2 += dword_61433C + v10 + 1;
LABEL_13:
      v4 = *(const char **)v7;
      v11 = strchr(*(const char **)v7, 61);
      if ( v11 )
      {
        v12 = v11 + 1;
        v13 = v4;
        v14 = 105;
        v15 = "if";
        do
        {
          ++v13;
          ++v15;
          if ( *(v13 - 1) != v14 )
            goto LABEL_116;
          v14 = *v15;
        }
        while ( *v15 );
        if ( !*v13 || *v13 == 61 )
        {
          qword_614668 = v12;
          goto LABEL_20;
        }
LABEL_116:
        v58 = v4;
        v59 = 111;
        v60 = "of";
        do
        {
          ++v58;
          ++v60;
          if ( *(v58 - 1) != v59 )
            goto LABEL_122;
          v59 = *v60;
        }
        while ( *v60 );
        v61 = *v58;
        if ( v61 == 61 || !v61 )
        {
          qword_614660 = v12;
          goto LABEL_20;
        }
LABEL_122:
        v62 = v4;
        v63 = 99;
        v64 = "conv";
        do
        {
          ++v62;
          ++v64;
          if ( *(v62 - 1) != v63 )
            goto LABEL_128;
          v63 = *v64;
        }
        while ( *v64 );
        v65 = *v62;
        if ( !v65 || v65 == 61 )
        {
          dword_61460C |= sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_128:
        v66 = v4;
        v67 = 105;
        v68 = "iflag";
        do
        {
          ++v66;
          ++v68;
          if ( *(v66 - 1) != v67 )
            goto LABEL_134;
          v67 = *v68;
        }
        while ( *v68 );
        v69 = *v66;
        if ( !v69 || v69 == 61 )
        {
          oflag |= sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_134:
        v70 = v4;
        v71 = 111;
        v72 = "oflag";
        do
        {
          ++v70;
          ++v72;
          if ( *(v70 - 1) != v71 )
            goto LABEL_264;
          v71 = *v72;
        }
        while ( *v72 );
        v73 = *v70;
        if ( !v73 || v73 == 61 )
        {
          dword_614604 |= sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_264:
        v131 = v4;
        v132 = 115;
        v133 = "status";
        do
        {
          ++v131;
          ++v133;
          if ( *(v131 - 1) != v132 )
            goto LABEL_295;
          v132 = *v133;
        }
        while ( *v133 );
        v134 = *v131;
        if ( v134 == 61 || !v134 )
        {
          dword_6142BC = sub_4059D0(v12);
          goto LABEL_20;
        }
LABEL_295:
        v238 = v12;
        LODWORD(n.sa_handler) = 0;
        v151 = sub_4042D0(v12, &n, v133);
        v152 = v238;
        v153 = v4;
        v154 = 105;
        v155 = "ibs";
        do
        {
          ++v153;
          ++v155;
          if ( *(v153 - 1) != v154 )
            goto LABEL_318;
          v154 = *v155;
        }
        while ( *v155 );
        v156 = *v153;
        if ( v156 != 61 && v156 )
        {
LABEL_318:
          v166 = v4;
          v167 = 111;
          v168 = "obs";
          do
          {
            ++v166;
            ++v168;
            if ( *(v166 - 1) != v167 )
              goto LABEL_337;
            v167 = *v168;
          }
          while ( *v168 );
          v169 = *v166;
          if ( v169 != 61 && v169 )
          {
LABEL_337:
            v182 = v4;
            v183 = 98;
            v184 = "cbs" + 1;
            do
            {
              ++v182;
              ++v184;
              if ( *(v182 - 1) != v183 )
                goto LABEL_326;
              v183 = *v184;
            }
            while ( *v184 );
            v185 = *v182;
            if ( v185 != 61 && v185 )
            {
LABEL_326:
              v170 = v4;
              v171 = 99;
              v172 = "cbs";
              do
              {
                ++v170;
                ++v172;
                if ( *(v170 - 1) != v171 )
                  goto LABEL_351;
                v171 = *v172;
              }
              while ( *v172 );
              v173 = *v170;
              if ( v173 != 61 && v173 )
                goto LABEL_351;
              qword_614640 = v151;
              if ( v151 )
                goto LABEL_315;
              goto LABEL_332;
            }
            v3 = v151;
            v157 = -2 * (qword_614658 + 2);
            if ( v157 > 0x7FFFFFFFFFFFFFFFLL )
              v157 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            offset = v151;
            v157 = -qword_614658;
            if ( (unsigned __int64)-qword_614658 > 0x7FFFFFFFFFFFFFFFLL )
              v157 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          qword_614650 = v151;
          v157 = -2 * (qword_614658 + 2);
          if ( v157 > 0x7FFFFFFFFFFFFFFFLL )
            v157 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( v151 )
        {
          if ( v151 <= v157 )
            goto LABEL_315;
          LODWORD(n.sa_handler) = 1;
LABEL_305:
          v158 = sub_408630(v152);
          v159 = (unsigned int)dcgettext(0LL, "invalid number", 5);
          v161 = 75;
          v30 = 1LL;
          if ( LODWORD(n.sa_handler) != 1 )
            v161 = 0;
          sub_4041E0(1, v161, (unsigned int)"%s: %s", v159, v158, v160, v236);
          goto LABEL_308;
        }
LABEL_332:
        LODWORD(n.sa_handler) = 4;
        goto LABEL_305;
      }
LABEL_345:
      v186 = sub_408630(v4);
      v187 = (unsigned int)dcgettext(0LL, "unrecognized operand %s", 5);
      sub_4041E0(0, 0, v187, v186, v188, v189, v236);
LABEL_336:
      sub_405460(1);
    }
    v237 = 0LL;
    v5 = -1LL;
    v9 = 0LL;
LABEL_140:
    dword_61460C |= 0x800u;
    if ( !qword_614650 )
      qword_614650 = 512LL;
    if ( !offset )
      offset = 512LL;
    while ( 1 )
    {
      if ( !qword_614640 )
        dword_61460C &= 0xFFFFFFE7;
      if ( (oflag & 0x101000) != 0 )
        oflag |= 0x101000u;
      if ( (dword_614604 & 1) != 0 )
      {
        v178 = "invalid output flag";
        v179 = sub_408630("fullblock");
        goto LABEL_335;
      }
      v16 = oflag;
      if ( (oflag & 0x10) != 0 )
        goto LABEL_359;
      if ( (dword_614604 & 0xC) != 0 )
      {
        v219 = "count_bytes";
        if ( (dword_614604 & 4) == 0 )
          v219 = "skip_bytes";
        v178 = "invalid output flag";
        v179 = sub_408630(v219);
LABEL_335:
        v180 = (unsigned int)dcgettext(0LL, v178, 5);
        sub_4041E0(0, 0, (unsigned int)"%s: %s", v180, v179, v181, v236);
        goto LABEL_336;
      }
      if ( (oflag & 8) != 0 )
      {
        if ( v9 )
        {
          *((_QWORD *)&xmmword_614630 + 1) = v9 / qword_614650;
          *(_QWORD *)&xmmword_614630 = v9 % qword_614650;
        }
      }
      else if ( v9 )
      {
        *((_QWORD *)&xmmword_614630 + 1) = v9;
      }
      if ( (oflag & 4) != 0 )
      {
        if ( v5 != -1LL )
        {
          qword_6142C0 = v5 / qword_614650;
          qword_614610 = v5 % qword_614650;
        }
      }
      else if ( v5 != -1LL )
      {
        qword_6142C0 = v5;
      }
      if ( (dword_614604 & 0x10) != 0 )
      {
        if ( v237 )
        {
          *((_QWORD *)&xmmword_614620 + 1) = v237 / offset;
          *(_QWORD *)&xmmword_614620 = v237 % offset;
        }
      }
      else if ( v237 )
      {
        *((_QWORD *)&xmmword_614620 + 1) = v237;
      }
      v17 = dword_61460C;
      v18 = oflag & 1;
      if ( v18 | dword_61460C & 0x800 )
      {
        v47 = v18 == 0;
        v19 = sub_404A10;
        byte_6145A8 = 0;
        if ( v47 )
          v19 = sub_404900;
      }
      else if ( *((_QWORD *)&xmmword_614630 + 1)
             || (unsigned __int64)(qword_6142C0 - 1) <= 0xFFFFFFFFFFFFFFFDLL
             || (((unsigned __int16)oflag | (unsigned __int16)dword_614604) & 0x4000) != 0 )
      {
        byte_6145A8 = 1;
        v19 = sub_404900;
      }
      else
      {
        byte_6145A8 = 0;
        v19 = sub_404900;
      }
      qword_6144E0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v19;
      oflag &= ~1u;
      if ( (dword_61460C & 7 & ((dword_61460C & 7) - 1)) != 0 )
      {
        v220 = (unsigned int)dcgettext(0LL, "cannot combine any two of {ascii,ebcdic,ibm}", 5);
        sub_4041E0(1, 0, v220, v221, v222, v223, v236);
LABEL_364:
        v224 = (unsigned int)dcgettext(0LL, "cannot combine excl and nocreat", 5);
        sub_4041E0(1, 0, v224, v225, v226, v227, v236);
        goto LABEL_365;
      }
      if ( (dword_61460C & 0x18 & ((dword_61460C & 0x18) - 1)) != 0 )
      {
        v211 = (unsigned int)dcgettext(0LL, "cannot combine block and unblock", 5);
        sub_4041E0(1, 0, v211, v212, v213, v214, v236);
LABEL_358:
        v215 = (unsigned int)dcgettext(0LL, "cannot combine lcase and ucase", 5);
        sub_4041E0(1, 0, v215, v216, v217, v218, v236);
LABEL_359:
        v178 = "invalid input flag";
        v179 = sub_408630("seek_bytes");
        goto LABEL_335;
      }
      if ( (dword_61460C & 0x60 & ((dword_61460C & 0x60) - 1)) != 0 )
        goto LABEL_358;
      if ( (dword_61460C & 0x3000 & ((dword_61460C & 0x3000) - 1)) != 0 )
        goto LABEL_364;
      v20 = dword_614604 & 0x4002 & ((dword_614604 & 0x4002) - 1);
      a2 = (const char **)(v20 | v16 & 0x4002 & ((v16 & 0x4002u) - 1));
      v239 = v20 | v16 & 2 & ((v16 & 2) - 1);
      if ( !(v20 | v16 & 0x4002 & ((v16 & 0x4002) - 1)) )
        break;
LABEL_365:
      v228 = (unsigned int)dcgettext(0LL, "cannot combine direct and nocache", 5);
      v151 = sub_4041E0(1, 0, v228, v229, v230, v231, v236);
LABEL_366:
      v232 = v4;
      v233 = 99;
      v234 = "count";
      do
      {
        ++v232;
        ++v234;
        if ( *(v232 - 1) != v233 )
          goto LABEL_345;
        v233 = *v234;
      }
      while ( *v234 );
      v235 = *v232;
      if ( v235 != 61 && v235 )
        goto LABEL_345;
      v5 = v151;
LABEL_315:
      if ( LODWORD(n.sa_handler) )
        goto LABEL_305;
LABEL_20:
      v7 += 8LL;
      if ( a2 != (const char **)v7 )
        goto LABEL_13;
      if ( !v3 )
        goto LABEL_140;
      offset = v3;
      qword_614650 = v3;
    }
    if ( (v16 & 2) != 0 )
    {
      byte_6144EB = 1;
      byte_6144E9 = (qword_614610 | qword_6142C0) == 0;
      oflag = v16 & 0xFFFFFFFC;
    }
    if ( (dword_614604 & 2) != 0 )
    {
      byte_6144EA = 1;
      byte_6144E8 = (qword_614610 | qword_6142C0) == 0;
      dword_614604 &= ~2u;
    }
    if ( (dword_61460C & 1) != 0 )
    {
      v21 = byte_6143E0;
      do
      {
        v22 = (unsigned __int8)*v21++;
        *(v21 - 1) = byte_40F0E0[v22];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v21 );
      byte_614600 = 1;
    }
    if ( (v17 & 0x40) != 0 )
    {
      v23 = *__ctype_toupper_loc();
      v24 = byte_6143E0;
      do
      {
        v25 = (unsigned __int8)*v24++;
        *(v24 - 1) = v23[v25];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v24 );
      goto LABEL_58;
    }
    if ( (v17 & 0x20) != 0 )
    {
      v120 = *__ctype_tolower_loc();
      v121 = byte_6143E0;
      do
      {
        v122 = (unsigned __int8)*v121++;
        *(v121 - 1) = v120[v122];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v121 );
LABEL_58:
      byte_614600 = 1;
    }
    if ( (v17 & 2) != 0 )
    {
      v26 = byte_6143E0;
      do
      {
        v27 = (unsigned __int8)*v26++;
        *(v26 - 1) = byte_40F2E0[v27];
      }
      while ( &qword_6144E0 != (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v26 );
      goto LABEL_62;
    }
    if ( (v17 & 4) != 0 )
    {
      v118 = byte_6143E0;
      do
      {
        v119 = (unsigned __int8)*v118++;
        *(v118 - 1) = byte_40F1E0[v119];
      }
      while ( v118 != (char *)&qword_6144E0 );
LABEL_62:
      byte_614600 = 1;
      byte_6142BA = 37;
      byte_6142B9 = 64;
    }
    v5 = (unsigned __int64)qword_614668;
    v7 = (unsigned int)oflag;
    v237 = (unsigned __int64)__errno_location();
    if ( v5 )
    {
      if ( (int)sub_4048B0(0, (char *)v5, v7) >= 0 )
        goto LABEL_65;
      v194 = sub_4083E0(4LL, qword_614668);
      v195 = (unsigned int)dcgettext(0LL, "failed to open %s", 5);
      sub_4041E0(1, *(_DWORD *)v237, v195, v194, v196, v197, v236);
LABEL_348:
      v198 = sub_4083E0(4LL, qword_614660);
      v199 = (unsigned int)dcgettext(0LL, "failed to open %s", 5);
      sub_4041E0(1, *(_DWORD *)v237, v199, v198, v200, v201, v236);
LABEL_349:
      v202 = (unsigned int)dcgettext(
                             0LL,
                             "offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks",
                             5);
      sub_4041E0(1, 0, v202, v5, v3, v203, v236);
LABEL_350:
      a2 = (const char **)sub_4083E0(4LL, qword_614660);
      v204 = (unsigned int)dcgettext(0LL, "cannot fstat %s", 5);
      v151 = sub_4041E0(1, *(_DWORD *)v237, v204, (_DWORD)a2, v205, v206, v236);
LABEL_351:
      v207 = v4;
      v208 = 115;
      v209 = "skip";
      do
      {
        ++v207;
        ++v209;
        if ( *(v207 - 1) != v208 )
          goto LABEL_309;
        v208 = *v209;
      }
      while ( *v209 );
      v210 = *v207;
      if ( v210 == 61 || !v210 )
      {
        v9 = v151;
        goto LABEL_315;
      }
LABEL_309:
      v162 = v4;
      v163 = 115;
      v164 = (_BYTE *)("%s: cannot seek" + 11);
      do
      {
        ++v162;
        ++v164;
        if ( v163 != *(v162 - 1) )
          goto LABEL_366;
        v163 = *v164;
      }
      while ( *v164 );
      v165 = *v162;
      if ( v165 == 61 || !v165 )
      {
        v237 = v151;
        goto LABEL_315;
      }
      goto LABEL_366;
    }
    qword_614668 = dcgettext(0LL, "standard input", 5);
    sub_4043E0(0);
LABEL_65:
    v28 = lseek(0, 0LL, 1);
    v29 = (size_t)qword_614660;
    v7 = (unsigned int)dword_614604;
    byte_6145BC = v28 >= 0;
    if ( v28 < 0 )
      v28 = 0LL;
    qword_6145B0 = v28;
    dword_6145B8 = *(_DWORD *)v237;
    if ( !qword_614660 )
      break;
    v5 = (((dword_61460C & 0x1000) == 0) << 6) | dword_614604 | (dword_61460C >> 6) & 0x80u;
    if ( *((_QWORD *)&xmmword_614620 + 1) )
    {
      v30 = 1LL;
      if ( (int)sub_4048B0(1, qword_614660, (unsigned int)v5 | 2) < 0 )
        goto LABEL_70;
    }
    else
    {
      v5 = ((dword_61460C & 0x200) == 0 ? 0x200 : 0) | (unsigned int)v5;
LABEL_70:
      v30 = 1LL;
      v29 = (size_t)qword_614660;
      if ( (int)sub_4048B0(1, qword_614660, (unsigned int)v5 | 1) < 0 )
        goto LABEL_348;
    }
    v5 = *((_QWORD *)&xmmword_614620 + 1);
    if ( !*((_QWORD *)&xmmword_614620 + 1) || (dword_61460C & 0x200) != 0 )
      goto LABEL_75;
    v3 = offset;
    v7 = xmmword_614620 + offset * *((_QWORD *)&xmmword_614620 + 1);
    if ( *((_QWORD *)&xmmword_614620 + 1) > 0x7FFFFFFFFFFFFFFFLL / offset )
      goto LABEL_349;
    v30 = xmmword_614620 + offset * *((_QWORD *)&xmmword_614620 + 1);
    if ( !(unsigned int)sub_404BF0(v30) )
      goto LABEL_75;
    v29 = 1LL;
    v30 = 1LL;
    v5 = *(unsigned int *)v237;
    if ( __fxstat(1, 1, (struct stat *)&n) )
      goto LABEL_350;
    if ( (((n.sa_mask.__val[2] & 0xF000) - 0x4000) & 0xFFFFB000) != 0 )
      goto LABEL_75;
    a2 = (const char **)sub_4083E0(4LL, qword_614660);
    v144 = (unsigned int)dcgettext(0LL, "failed to truncate to %lu bytes in output file %s", 5);
    sub_4041E0(1, v5, v144, v7, (_DWORD)a2, v145, v236);
  }
  v29 = (unsigned int)dword_614604;
  v30 = 1LL;
  qword_614660 = dcgettext(0LL, "standard output", 5);
  sub_4043E0(1);
LABEL_75:
  v31 = sub_405C40();
  v32 = *((_QWORD *)&xmmword_614630 + 1);
  v33 = xmmword_614630;
  qword_6145D0 = v31;
  qword_6145C8 = v31 + 1000000000;
  if ( xmmword_614630 != 0 )
  {
    v34 = qword_614650;
    v29 = (size_t)qword_614668;
    v30 = 0LL;
    v35 = qword_6145B0;
    if ( (sub_405150(0LL, qword_614668, *((_QWORD *)&xmmword_614630 + 1), qword_614650, &xmmword_614630)
       || v34 * v32 + v33 + v35 != qword_6145B0 && byte_6145A9 != 1)
      && dword_6142BC != 1 )
    {
      v79 = sub_4084B0(0LL, 3LL, qword_614668);
      v80 = (unsigned int)dcgettext(0LL, "%s: cannot skip to specified offset", 5);
      v29 = 0LL;
      v30 = 0LL;
      sub_4041E0(0, 0, v80, v79, v81, v82, v236);
    }
  }
  if ( xmmword_614620 != 0 )
  {
    v30 = 1LL;
    n.sa_handler = (__sighandler_t)xmmword_614620;
    v29 = (size_t)qword_614660;
    v36 = sub_405150(1LL, qword_614660, *((_QWORD *)&xmmword_614620 + 1), offset, &n);
    if ( v36 )
    {
      memset(s1, 0, offset);
      do
      {
        v37 = offset;
        v30 = (__off_t)s1;
        v29 = offset;
        if ( v37 != sub_404C30(s1, offset) )
          goto LABEL_346;
        --v36;
      }
      while ( v36 );
      sa_handler = n.sa_handler;
      if ( n.sa_handler )
      {
LABEL_85:
        v30 = (__off_t)s1;
        v29 = (size_t)sa_handler;
        if ( (__sighandler_t)sub_404C30(s1, (__off_t)sa_handler) != sa_handler )
        {
LABEL_346:
          v190 = sub_4083E0(4LL, qword_614660);
          v191 = (unsigned int)dcgettext(0LL, "writing to %s", 5);
          sub_4041E0(0, *(_DWORD *)v237, v191, v190, v192, v193, v236);
          sub_404E30();
        }
      }
    }
    else if ( n.sa_handler )
    {
      memset(s1, 0, (size_t)n.sa_handler);
      sa_handler = n.sa_handler;
      goto LABEL_85;
    }
  }
  if ( !(qword_614610 | qword_6142C0) )
  {
    LODWORD(v238) = 0;
    goto LABEL_254;
  }
  if ( !src )
    sub_404A80();
  sub_404BA0();
  LODWORD(v238) = 0;
  v39 = 0LL;
LABEL_90:
  if ( dword_6142BC == 4 )
    goto LABEL_114;
  while ( 1 )
  {
    v40 = qword_614610;
    v41 = qword_6142C0;
    v42 = qword_6145E8 + qword_6145E0;
    v43 = dword_61460C;
    if ( qword_6145E8 + qword_6145E0 >= qword_6142C0 + (unsigned __int64)(qword_614610 != 0) )
      break;
    v44 = src;
    if ( (dword_61460C & 0x500) == 1280 )
    {
      v45 = dword_61460C & 0x18;
      if ( (dword_61460C & 0x18) != 0 )
        v45 = 32;
      v44 = memset(src, v45, qword_614650);
    }
    if ( v42 < v41 )
    {
      v30 = 0LL;
      v46 = qword_6144E0(0LL, v44, qword_614650);
      v47 = v46 == 0;
      if ( v46 > 0 )
      {
LABEL_98:
        v48 = __CFADD__(qword_6145B0, v46);
        v49 = v46;
        qword_6145B0 += v46;
        if ( v48 )
          byte_6145A9 = 1;
        if ( byte_6144EB )
          sub_4045A0(0);
        v50 = qword_614650;
        if ( qword_614650 > v49 )
          goto LABEL_103;
        goto LABEL_165;
      }
    }
    else
    {
      v30 = 0LL;
      v46 = qword_6144E0(0LL, v44, v40);
      v47 = v46 == 0;
      if ( v46 > 0 )
        goto LABEL_98;
    }
    v43 = dword_61460C;
    if ( v47 )
    {
      byte_6144E9 |= byte_6144EB;
      if ( byte_6144EA )
        v239 = (dword_61460C & 0x200) == 0;
      byte_6144E8 = (byte_6144E8 | v239) & 1;
      break;
    }
    if ( (dword_61460C & 0x100) == 0 || dword_6142BC != 1 )
    {
      v83 = sub_4083E0(4LL, qword_614668);
      v84 = (unsigned int)dcgettext(0LL, "error reading %s", 5);
      v30 = 0LL;
      sub_4041E0(0, *(_DWORD *)v237, v84, v83, v85, v86, v236);
      v43 = dword_61460C;
      if ( (dword_61460C & 0x100) == 0 )
      {
        LODWORD(v238) = 1;
        break;
      }
    }
    sub_4040B0();
    v30 = 0LL;
    v87 = qword_614650 - v39;
    sub_4045A0(0);
    if ( byte_6145BC )
    {
      v48 = __CFADD__(qword_6145B0, v87);
      v96 = qword_6145B0 + v87;
      qword_6145B0 += v87;
      if ( v48 )
      {
        byte_6145A9 = 1;
LABEL_176:
        v97 = sub_4083E0(4LL, qword_614668);
        v98 = (unsigned int)dcgettext(0LL, "offset overflow while reading file %s", 5);
        v30 = 0LL;
        sub_4041E0(0, 0, v98, v97, v99, v100, v236);
        goto LABEL_161;
      }
      byte_6145A9 |= v96 < 0;
      if ( byte_6145A9 )
        goto LABEL_176;
      v30 = 0LL;
      v105 = lseek(0, 0LL, 1);
      if ( v105 < 0 )
        goto LABEL_160;
      if ( v105 != v96 )
      {
        v106 = v96 - v105;
        if ( (v106 < 0 || v87 < v106) && dword_6142BC != 1 )
        {
          v135 = (unsigned int)dcgettext(0LL, "warning: invalid file offset after failed read", 5);
          sub_4041E0(0, 0, v135, v136, v137, v138, v236);
        }
        v30 = (__off_t)qword_614668;
        if ( sub_4044D0(qword_614668, 0LL, v106, 1LL) < 0 )
        {
          if ( !*(_DWORD *)v237 )
          {
            v107 = (unsigned int)dcgettext(0LL, "cannot work around kernel bug after all", 5);
            sub_4041E0(0, 0, v107, v108, v109, v110, v236);
          }
LABEL_160:
          v88 = sub_4084B0(0LL, 3LL, qword_614668);
          v89 = (unsigned int)dcgettext(0LL, "%s: cannot seek", 5);
          v30 = 0LL;
          sub_4041E0(0, *(_DWORD *)v237, v89, v88, v90, v91, v236);
LABEL_161:
          byte_6145BC = 0;
          dword_6145B8 = 29;
          LODWORD(v238) = 1;
        }
      }
    }
    else if ( dword_6145B8 != 29 )
    {
      *(_DWORD *)v237 = dword_6145B8;
      goto LABEL_160;
    }
    if ( (dword_61460C & 0x400) == 0 || v39 )
      goto LABEL_90;
    v50 = qword_614650;
    v49 = 0LL;
    if ( qword_614650 )
    {
LABEL_103:
      ++qword_6145E8;
      v39 = v49;
      if ( (dword_61460C & 0x400) != 0 )
      {
        if ( (dword_61460C & 0x100) != 0 )
        {
          v49 = v50;
        }
        else
        {
          v51 = v50 - v49;
          v52 = dword_61460C & 0x18;
          if ( (dword_61460C & 0x18) != 0 )
            v52 = 32;
          v39 = v49;
          v53 = (char *)src + v49;
          v49 = v50;
          memset(v53, v52, v51);
        }
      }
      goto LABEL_108;
    }
LABEL_165:
    ++qword_6145E0;
    v39 = 0LL;
LABEL_108:
    v54 = (char *)src;
    v55 = s1;
    if ( src == s1 )
    {
      v30 = (__off_t)src;
      v104 = sub_404C30(src, v49);
      qword_6145D8 += v104;
      if ( v104 != v49 )
        goto LABEL_201;
      if ( qword_614650 == v49 )
        ++qword_6145F0;
      else
        ++qword_6145F8;
      goto LABEL_90;
    }
    if ( byte_614600 && v49 )
    {
      v101 = (char *)src + v49;
      v102 = (char *)src;
      do
      {
        v103 = (unsigned __int8)*v102++;
        *(v102 - 1) = byte_6143E0[v103];
      }
      while ( v102 != v101 );
    }
    v56 = dword_61460C;
    if ( (dword_61460C & 0x80u) != 0 )
    {
      if ( byte_6143C1 )
      {
        v92 = v54 - 1;
        ++v49;
        byte_6143C1 = 0;
        *(v54 - 1) = byte_6143C0;
      }
      else
      {
        v92 = v54++;
      }
      if ( (v49 & 1) != 0 )
      {
        --v49;
        byte_6143C1 = 1;
        v93 = &v92[v49];
        byte_6143C0 = *v93;
      }
      else
      {
        v93 = &v92[v49];
      }
      v94 = &v93[-2 * (v49 >> 1)];
      if ( v49 >> 1 )
      {
        do
        {
          v95 = *(v93 - 2);
          v93 -= 2;
          v93[2] = v95;
        }
        while ( v93 != v94 );
      }
    }
    if ( (v56 & 8) != 0 )
    {
      v30 = (__off_t)v54;
      sub_404EF0(v54, v49);
      goto LABEL_90;
    }
    if ( (v56 & 0x10) == 0 )
    {
      while ( 1 )
      {
        v74 = offset;
        v75 = v54;
        v76 = offset - qword_614588;
        if ( offset - qword_614588 > v49 )
          v76 = v49;
        v30 = (__off_t)v55 + qword_614588;
        v77 = v76;
        v49 -= v76;
        v54 += v76;
        v78 = qword_614588 + v76;
        memcpy((void *)v30, v75, v77);
        qword_614588 = v78;
        if ( v74 <= v78 )
          sub_404E50();
        if ( !v49 )
          break;
        v55 = s1;
      }
      goto LABEL_90;
    }
    v30 = (__off_t)v54;
    sub_405000(v54, v49);
    if ( dword_6142BC == 4 )
    {
LABEL_114:
      v57 = sub_405C40();
      if ( v57 >= qword_6145C8 )
      {
        v30 = v57;
        sub_403D50(v57);
        qword_6145C8 += 1000000000LL;
      }
    }
  }
  if ( byte_6143C1 )
  {
    if ( (v43 & 8) != 0 )
    {
      v30 = (__off_t)&byte_6143C0;
      sub_404EF0(&byte_6143C0, 1LL);
      v43 = dword_61460C;
    }
    else if ( (v43 & 0x10) != 0 )
    {
      v30 = (__off_t)&byte_6143C0;
      sub_405000(&byte_6143C0, 1LL);
      v43 = dword_61460C;
    }
    else
    {
      v123 = qword_614588;
      v48 = ++qword_614588 < offset;
      *((_BYTE *)s1 + v123) = byte_6143C0;
      if ( v48 )
        goto LABEL_235;
      sub_404E50();
      v43 = dword_61460C;
    }
  }
  if ( (v43 & 8) == 0 )
    goto LABEL_235;
  v125 = qword_614580;
  if ( qword_614580 )
  {
    if ( qword_614640 <= (unsigned __int64)qword_614580 )
      goto LABEL_236;
    do
    {
      v126 = qword_614588;
      v48 = ++qword_614588 < offset;
      *((_BYTE *)s1 + v126) = byte_6142B9;
      if ( !v48 )
        sub_404E50();
      ++v125;
    }
    while ( v125 < qword_614640 );
LABEL_235:
    v43 = dword_61460C;
    if ( qword_614580 )
    {
LABEL_236:
      if ( (v43 & 0x10) == 0 )
        goto LABEL_238;
      v124 = qword_614588;
      v48 = ++qword_614588 < offset;
      *((_BYTE *)s1 + v124) = byte_6142BA;
      if ( v48 )
        goto LABEL_238;
LABEL_308:
      sub_404E50();
    }
  }
LABEL_238:
  if ( qword_614588 )
  {
    v30 = (__off_t)s1;
    v111 = sub_404C30(s1, qword_614588);
    qword_6145D8 += v111;
    if ( v111 )
      ++qword_6145F8;
    if ( v111 != qword_614588 )
    {
LABEL_201:
      v112 = "error writing %s";
      v113 = sub_4083E0(4LL, qword_614660);
      goto LABEL_202;
    }
  }
  if ( byte_614618 )
  {
    v30 = 1LL;
    if ( __fxstat(1, 1, (struct stat *)&n) )
    {
      v112 = "cannot fstat %s";
      v113 = sub_4083E0(4LL, qword_614660);
LABEL_202:
      v114 = (unsigned int)dcgettext(0LL, v112, 5);
      v30 = 0LL;
      v29 = *(unsigned int *)v237;
      sub_4041E0(0, v29, v114, v113, v115, v116, v236);
    }
    else
    {
      if ( (n.sa_mask.__val[2] & 0xF000) != 0x8000 )
        goto LABEL_240;
      v30 = 1LL;
      v146 = lseek(1, 0LL, 1);
      v147 = v146;
      if ( v146 < 0 )
        goto LABEL_240;
      if ( v146 <= (__int64)n.sa_mask.__val[5] )
        goto LABEL_240;
      v30 = v146;
      if ( !(unsigned int)sub_404BF0(v146) )
        goto LABEL_240;
      v148 = sub_4083E0(4LL, qword_614660);
      v149 = (unsigned int)dcgettext(0LL, "failed to truncate to %ld bytes in output file %s", 5);
      v30 = 0LL;
      v29 = *(unsigned int *)v237;
      sub_4041E0(0, v29, v149, v147, v148, v150, v236);
    }
    LODWORD(v238) = 1;
  }
  else
  {
LABEL_240:
    LOWORD(v29) = dword_61460C;
    if ( (dword_61460C & 0x4000) != 0 && (v30 = 1LL, v139 = fdatasync(1), v29 = (unsigned int)dword_61460C, v139) )
    {
      if ( ((*(_DWORD *)v237 - 22) & 0xFFFFFFEF) != 0 )
      {
        v174 = sub_4083E0(4LL, qword_614660);
        v175 = (unsigned int)dcgettext(0LL, "fdatasync failed for %s", 5);
        v29 = *(unsigned int *)v237;
        sub_4041E0(0, v29, v175, v174, v176, v177, v236);
        LODWORD(v238) = 1;
      }
      dword_61460C |= 0x8000u;
LABEL_242:
      while ( 1 )
      {
        v30 = 1LL;
        if ( !fsync(1) )
          break;
        if ( *(_DWORD *)v237 != 4 )
        {
          v112 = "fsync failed for %s";
          v113 = sub_4083E0(4LL, qword_614660);
          goto LABEL_202;
        }
      }
    }
    else
    {
      v29 = (unsigned __int16)v29 & 0x8000;
      if ( (_DWORD)v29 )
        goto LABEL_242;
    }
  }
  if ( qword_6142C0 || qword_614610 )
  {
    if ( byte_6144EB || byte_6144E9 )
    {
      v29 = 0LL;
      v30 = 0LL;
      sub_4045A0(0);
    }
    if ( byte_6144EA || byte_6144E8 )
    {
      v29 = 0LL;
      v30 = 1LL;
      sub_4045A0(1);
    }
  }
  else
  {
LABEL_254:
    if ( byte_6144EB )
    {
      v29 = 0LL;
      v30 = 0LL;
      if ( !(unsigned __int8)sub_4045A0(0) )
      {
        v140 = sub_4084B0(0LL, 3LL, qword_614668);
        v141 = (unsigned int)dcgettext(0LL, "failed to discard cache for: %s", 5);
        v30 = 0LL;
        v29 = *(unsigned int *)v237;
        sub_4041E0(0, v29, v141, v140, v142, v143, v236);
        LODWORD(v238) = 1;
      }
    }
    if ( byte_6144EA )
    {
      v29 = 0LL;
      v30 = 1LL;
      if ( !(unsigned __int8)sub_4045A0(1) )
      {
        v127 = sub_4084B0(0LL, 3LL, qword_614660);
        v128 = (unsigned int)dcgettext(0LL, "failed to discard cache for: %s", 5);
        v30 = 0LL;
        v29 = *(unsigned int *)v237;
        sub_4041E0(0, v29, v128, v127, v129, v130, v236);
        LODWORD(v238) = 1;
      }
    }
  }
  sub_404760(v30, v29);
  sub_4040B0();
  sub_404810();
  return (unsigned int)v238;
}

// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (__fastcall *)(int, char **, char **))main, v4, &retaddr, init, fini, a3, &v5);
  __halt();
}

void *sub_403C7B()
{
  return &unk_614348;
}

__int64 sub_403C9A()
{
  return 0LL;
}

void *sub_403CD1()
{
  void *result; // rax

  if ( !byte_614388 )
  {
    while ( qword_614390 < (unsigned __int64)(&qword_613E48 - qword_613E40 - 1) )
      ((void (*)(void))qword_613E40[++qword_614390])();
    result = sub_403C7B();
    byte_614388 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_403D28()
{
  return sub_403C9A();
}

void __fastcall sub_403D30(int a1)
{
  sig = a1;
}

__int64 sub_403D40()
{
  return (unsigned int)++dword_6144EC;
}

int __fastcall sub_403D50(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r12
  const char *v3; // r13
  __int64 v4; // rbx
  double v5; // xmm0_8
  const char *v6; // rbx
  double v7; // xmm0_8
  const char *v8; // r8
  char *IO_write_ptr; // rax
  size_t v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rax
  char *v13; // r9
  int v14; // ebx
  char *v15; // rax
  char *v16; // rax
  unsigned __int64 v17; // r12
  char *v18; // rax
  char *v20; // [rsp-10h] [rbp-818h]
  char v21[32]; // [rsp+10h] [rbp-7F8h] BYREF
  char v22[654]; // [rsp+30h] [rbp-7D8h] BYREF
  char v23[654]; // [rsp+2BEh] [rbp-54Ah] BYREF
  char v24[700]; // [rsp+54Ch] [rbp-2BCh] BYREF

  v1 = a1;
  if ( !a1 )
    v1 = sub_405C40();
  v2 = (const char *)sub_405D70(qword_6145D8, v22, 465LL, 1LL, 1LL);
  v3 = (const char *)sub_405D70(qword_6145D8, v23, 497LL, 1LL, 1LL);
  if ( qword_6145D0 >= v1 )
  {
    v16 = dcgettext(0LL, "Infinity", 5);
    v6 = v24;
    __snprintf_chk(v24, 654LL, 1LL, 654LL, "%s B/s", v16);
    v7 = 0.0;
  }
  else
  {
    v4 = v1 - qword_6145D0;
    if ( v4 < 0 )
      v5 = (double)(int)(v4 & 1 | ((unsigned __int64)v4 >> 1)) + (double)(int)(v4 & 1 | ((unsigned __int64)v4 >> 1));
    else
      v5 = (double)(int)v4;
    v6 = (const char *)sub_405D70(qword_6145D8, v24, 465LL, 1000000000LL, v4);
    v7 = v5 / 1000000000.0;
    strcpy((char *)&v6[strlen(v6)], "/s");
  }
  v8 = "%g s";
  if ( !a1 )
    goto LABEL_10;
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr < stderr->_IO_write_end )
  {
    v8 = "%.0f s";
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 13;
LABEL_10:
    __snprintf_chk(v21, 24LL, 1LL, 24LL, v8, v7);
    goto LABEL_11;
  }
  __overflow(stderr, 13);
  __snprintf_chk(v21, 24LL, 1LL, 24LL, "%.0f s", v7);
LABEL_11:
  if ( v2[strlen(v2) - 2] == 32 )
  {
    v17 = qword_6145D8;
    v18 = dcngettext(0LL, "%lu byte copied, %s, %s", "%lu bytes copied, %s, %s", qword_6145D8, 5);
    LODWORD(v15) = __fprintf_chk(stderr, 1LL, v18, v17, v21, v6);
    v14 = (int)v15;
  }
  else
  {
    v10 = strlen(v3);
    v11 = qword_6145D8;
    if ( v3[v10 - 2] == 32 )
    {
      v12 = dcgettext(0LL, "%lu bytes (%s) copied, %s, %s", 5);
      LODWORD(v20) = (_DWORD)v6;
      v13 = v21;
    }
    else
    {
      v12 = dcgettext(0LL, "%lu bytes (%s, %s) copied, %s, %s", 5);
      v13 = (char *)v3;
      v20 = v21;
    }
    v14 = __fprintf_chk(stderr, 1LL, v12, v11, v2, v13);
    LODWORD(v15) = (_DWORD)v20;
  }
  if ( a1 )
  {
    if ( v14 >= 0 && dword_6145C0 > v14 )
      LODWORD(v15) = __fprintf_chk(stderr, 1LL, "%*s", dword_6145C0 - v14, "");
    dword_6145C0 = v14;
  }
  else
  {
    v15 = stderr->_IO_write_ptr;
    if ( v15 >= stderr->_IO_write_end )
    {
      LODWORD(v15) = __overflow(stderr, 10);
    }
    else
    {
      stderr->_IO_write_ptr = v15 + 1;
      *v15 = 10;
    }
  }
  return (int)v15;
}

void sub_4040B0()
{
  char *IO_write_ptr; // rax
  __int64 v1; // r13
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rbp
  char *v5; // rax
  unsigned __int64 v6; // rbx
  char *v7; // rax

  if ( dword_6142BC != 1 )
  {
    if ( dword_6145C0 > 0 )
    {
      IO_write_ptr = stderr->_IO_write_ptr;
      if ( IO_write_ptr >= stderr->_IO_write_end )
      {
        __overflow(stderr, 10);
      }
      else
      {
        stderr->_IO_write_ptr = IO_write_ptr + 1;
        *IO_write_ptr = 10;
      }
      dword_6145C0 = 0;
    }
    v1 = qword_6145F8;
    v2 = qword_6145E0;
    v3 = qword_6145F0;
    v4 = qword_6145E8;
    v5 = dcgettext(0LL, "%lu+%lu records in\n%lu+%lu records out\n", 5);
    __fprintf_chk(stderr, 1LL, v5, v2, v4, v3, v1);
    v6 = qword_6145A0;
    if ( qword_6145A0 )
    {
      v7 = dcngettext(0LL, "%lu truncated record\n", "%lu truncated records\n", qword_6145A0, 5);
      __fprintf_chk(stderr, 1LL, v7, v6);
    }
    if ( dword_6142BC != 2 )
      sub_403D50(0LL);
  }
}

__int64 sub_4041E0(unsigned int a1, unsigned int a2, __int64 a3, ...)
{
  char *IO_write_ptr; // rax
  __int64 v5; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+18h] [rbp-E0h] BYREF

  if ( dword_6145C0 > 0 )
  {
    IO_write_ptr = stderr->_IO_write_ptr;
    if ( IO_write_ptr >= stderr->_IO_write_end )
    {
      v5 = a3;
      __overflow(stderr, 10);
      a3 = v5;
    }
    else
    {
      stderr->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = 10;
    }
    dword_6145C0 = 0;
  }
  va_start(va, a3);
  return sub_408710(a1, a2, a3, va);
}

unsigned __int64 __fastcall sub_4042D0(char *a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbp
  char *v10; // rax
  unsigned __int64 v11; // [rsp+0h] [rbp-28h]
  _BYTE *v12; // [rsp+8h] [rbp-20h]

  v2 = sub_408F50(a1);
  v3 = v2;
  if ( v2 != 2 )
  {
    result = v11;
    if ( !v3 )
      return result;
LABEL_5:
    *a2 = v3;
    return 0LL;
  }
  if ( *v12 != 120 )
    goto LABEL_5;
  v5 = sub_4042D0(v12 + 1, a2, v2);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 * v11 / v5;
    if ( v11 != v7 )
    {
      *a2 = 1;
      return 0LL;
    }
  }
  else
  {
    v7 = v11;
  }
  if ( !v7 && !memcmp(a1, "0x", 2uLL) )
  {
    v8 = sub_408610(1LL, "00x");
    v9 = sub_408610(0LL, 4250511LL);
    v10 = dcgettext(0LL, "warning: %s is a zero multiplier; use %s if that is intended", 5);
    sub_4041E0(0, 0, (__int64)v10, v9, v8);
    v7 = v11;
  }
  return v6 * v7;
}

void __fastcall sub_4043E0(int fildes, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  __int64 v12; // rbx
  int *v13; // rax
  struct stat v14; // [rsp+0h] [rbp-B8h] BYREF

  if ( (a2 & 0xFFFDFEFF) != 0 )
  {
    v7 = sub_4095D0(fildes, 3, a3, a4, a5, a6, v14.st_dev);
    LODWORD(v11) = v7;
    LODWORD(v12) = v7 | a2 & 0xFFFDFEFF;
    if ( v7 < 0 )
      goto LABEL_11;
    if ( v7 != (_DWORD)v12 )
    {
      if ( v7 & 0x10000 | a2 & 0x10000 )
      {
        if ( !__fxstat(1, fildes, &v14) )
        {
          if ( (v14.st_mode & 0xF000) == 0x4000 )
            goto LABEL_12;
          *__errno_location() = 20;
        }
        goto LABEL_11;
      }
      while ( (unsigned int)sub_4095D0(fildes, 4, v12, v8, v9, v10, v14.st_dev) == -1 )
      {
LABEL_11:
        v11 = sub_4083E0(4LL, a3);
        v12 = (__int64)dcgettext(0LL, "setting flags for %s", 5);
        v13 = __errno_location();
        sub_4041E0(1u, *v13, v12, v11);
LABEL_12:
        LODWORD(v12) = v12 & 0xFFFEFFFF;
        if ( (_DWORD)v12 == (_DWORD)v11 )
          return;
      }
    }
  }
}

__off_t __fastcall sub_4044D0(__int64 a1, int a2, __off_t a3, int a4)
{
  int v6; // r13d
  __off_t v7; // rbp
  __int64 v9; // rbx
  char *v10; // rax
  _QWORD v11[6]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v12[11]; // [rsp+30h] [rbp-58h] BYREF

  v6 = ioctl(a2, 0x80306D02uLL, v11);
  v7 = lseek(a2, a3, a4);
  if ( v7 >= 0 && !v6 && !ioctl(a2, 0x80306D02uLL, v12) && v11[1] == v12[1] && v11[5] == v12[5] )
  {
    if ( dword_6142BC != 1 )
    {
      v9 = v12[0];
      v10 = dcgettext(
              0LL,
              "warning: working around lseek kernel bug for file (%s)\n"
              "  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types",
              5);
      sub_4041E0(0, 0, (__int64)v10, a1, v9);
    }
    v7 = -1LL;
    *__errno_location() = 0;
  }
  return v7;
}

__int64 __fastcall sub_4045A0(int fd, __int64 a2)
{
  char v2; // r15
  off_t *v3; // rax
  off_t v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v9; // rbp
  int v10; // r13d
  __off_t v11; // rsi
  unsigned __int64 v12; // rsi

  if ( fd )
  {
    v2 = byte_6144E8;
    v3 = (off_t *)&unk_6143A0;
  }
  else
  {
    v2 = byte_6144E9;
    v3 = (off_t *)&unk_6143A8;
  }
  v4 = *v3;
  if ( a2 )
  {
    v5 = a2 + v4;
    v6 = v5 & 0x1FFFF;
    *v3 = v6;
    if ( v5 > v6 )
    {
      v4 = v5 - v6;
      if ( v4 )
      {
        v9 = a2;
        v10 = fd;
        if ( fd )
          goto LABEL_14;
LABEL_10:
        v7 = (unsigned __int8)byte_6145BC;
        v11 = qword_6145B0;
        if ( !byte_6145BC )
        {
          *__errno_location() = 29;
          return v7;
        }
        goto LABEL_18;
      }
    }
    return 1;
  }
  if ( !v4 && !v2 )
    return 1;
  v6 = 0LL;
  v9 = 0LL;
  v10 = fd;
  if ( !fd )
    goto LABEL_10;
LABEL_14:
  v11 = qword_6142B0;
  v7 = 0;
  if ( qword_6142B0 == -1 )
    return v7;
  if ( qword_6142B0 < 0 )
  {
    v11 = lseek(1, 0LL, 1);
    qword_6142B0 = v11;
  }
  else
  {
    if ( !v9 )
    {
LABEL_19:
      v12 = v11 - v4;
      if ( v9 || !v4 )
      {
        v12 -= v6;
        if ( v4 )
          goto LABEL_23;
      }
      else if ( !v2 )
      {
        v12 -= v6;
LABEL_23:
        LOBYTE(v7) = posix_fadvise(v10, v12, v4, 4) != -1;
        return v7;
      }
      v4 = 0LL;
      v12 -= v12 % qword_614658;
      goto LABEL_23;
    }
    v11 = v6 + v4 + qword_6142B0;
    qword_6142B0 = v11;
  }
LABEL_18:
  v7 = 0;
  if ( v11 >= 0 )
    goto LABEL_19;
  return v7;
}

__int64 sub_404720()
{
  __int64 result; // rax

  if ( byte_6142B8 )
    return sub_405B30();
  result = sub_405AB0(stderr);
  if ( (_DWORD)result )
    _exit(1);
  return result;
}

int sub_404760()
{
  int result; // eax
  __int64 v1; // rbp
  char *v2; // rbx
  int *v3; // rax
  __int64 v4; // rbp
  char *v5; // rbx
  int *v6; // rax

  if ( close(0) < 0 )
  {
    v1 = sub_4083E0(4LL, qword_614668);
    v2 = dcgettext(0LL, "closing input file %s", 5);
    v3 = __errno_location();
    sub_4041E0(1u, *v3, (__int64)v2, v1);
    goto LABEL_5;
  }
  result = close(1);
  if ( result < 0 )
  {
LABEL_5:
    v4 = sub_4083E0(4LL, qword_614660);
    v5 = dcgettext(0LL, "closing output file %s", 5);
    v6 = __errno_location();
    sub_4041E0(1u, *v6, (__int64)v5, v4);
    return sub_404810();
  }
  return result;
}

__int64 sub_404810()
{
  __int64 result; // rax
  int v1; // ebx
  sigset_t v2; // [rsp-88h] [rbp-88h] BYREF

  while ( 1 )
  {
    if ( !sig )
    {
      result = (unsigned int)dword_6144EC;
      if ( !dword_6144EC )
        break;
    }
    sigprocmask(0, &set, &v2);
    v1 = sig;
    if ( dword_6144EC )
      --dword_6144EC;
    sigprocmask(2, &v2, 0LL);
    if ( v1 )
    {
      sub_404760();
      sub_4040B0();
      raise(v1);
    }
    else
    {
      sub_4040B0();
    }
  }
  return result;
}

__int64 __fastcall sub_4048B0(int fd2, char *file, int oflag)
{
  int v4; // ebx

  do
  {
    sub_404810();
    v4 = sub_405BD0(fd2, file, oflag);
  }
  while ( v4 < 0 && *__errno_location() == 4 );
  return (unsigned int)v4;
}

__int64 __fastcall sub_404900(int fd, void *buf, size_t nbytes)
{
  int v4; // edx
  ssize_t v5; // rax
  __int64 v6; // rbx
  int *v7; // rax
  unsigned __int64 v9; // r12
  char *v10; // rax

  do
  {
    sub_404810();
    v5 = read(fd, buf, nbytes);
    v6 = v5;
    if ( v5 == -1 )
    {
      v7 = __errno_location();
      v4 = *v7;
      if ( *v7 == 22 )
      {
        if ( (__int64)qword_6143B8 > 0 && qword_6143B8 < nbytes && (oflag & 0x4000) != 0 )
        {
          *v7 = 0;
          v6 = 0LL;
        }
        goto LABEL_11;
      }
    }
    else
    {
      if ( v5 >= 0 )
        break;
      v4 = *__errno_location();
    }
  }
  while ( v4 == 4 );
  if ( v6 <= 0 || v6 >= nbytes )
  {
    if ( v6 <= 0 )
      goto LABEL_11;
  }
  else
  {
    sub_404810();
  }
  if ( byte_6145A8 )
  {
    v9 = qword_6143B8;
    if ( (__int64)qword_6143B8 > 0 && qword_6143B8 < nbytes )
    {
      if ( dword_6142BC != 1 )
      {
        v10 = dcngettext(
                0LL,
                "warning: partial read (%lu byte); suggest iflag=fullblock",
                "warning: partial read (%lu bytes); suggest iflag=fullblock",
                qword_6143B8,
                5);
        sub_4041E0(0, 0, (__int64)v10, v9);
      }
      byte_6145A8 = 0;
    }
  }
LABEL_11:
  qword_6143B8 = v6;
  return v6;
}

__int64 __fastcall sub_404A10(int fd, char *buf, size_t nbytes)
{
  __int64 v3; // r12
  size_t v5; // rbx
  __int64 result; // rax

  if ( !nbytes )
    return 0LL;
  v3 = 0LL;
  v5 = nbytes;
  while ( 1 )
  {
    result = sub_404900(fd, buf, v5);
    if ( result < 0 )
      break;
    if ( result )
    {
      v3 += result;
      buf += result;
      v5 -= result;
      if ( v5 )
        continue;
    }
    return v3;
  }
  return result;
}

__int64 sub_404A80()
{
  unsigned __int64 v0; // rbx
  size_t v1; // rbp
  void *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-2A8h] BYREF

  v0 = qword_614658;
  v1 = qword_614650;
  v2 = malloc(qword_614650 + 2 * qword_614658 + 3);
  if ( v2 )
  {
    v3 = (unsigned __int64)v2 + v0 + 1;
    result = v3 / v0;
    src = (void *)(v3 - v3 % v0);
  }
  else
  {
    v5 = sub_405D70(v1, &v7, 497LL, 1LL, 1LL);
    v6 = dcgettext(0LL, "memory exhausted by input buffer of size %lu bytes (%s)", 5);
    sub_4041E0(1u, 0, (__int64)v6, v1, v5);
    return sub_404B10();
  }
  return result;
}

__int64 sub_404B10()
{
  unsigned __int64 v0; // rbx
  size_t v1; // rbp
  void *v2; // rax
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rbx
  char *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-2A8h] BYREF

  v0 = qword_614658;
  v1 = offset;
  v2 = malloc(qword_614658 + offset - 1);
  if ( v2 )
  {
    v3 = (unsigned __int64)v2 + v0 - 1;
    result = v3 / v0;
    s1 = (void *)(v3 - v3 % v0);
  }
  else
  {
    v5 = sub_405D70(v1, &v7, 497LL, 1LL, 1LL);
    v6 = dcgettext(0LL, "memory exhausted by output buffer of size %lu bytes (%s)", 5);
    sub_4041E0(1u, 0, (__int64)v6, v1, v5);
    return sub_404BA0();
  }
  return result;
}

void *sub_404BA0()
{
  void *result; // rax

  if ( !s1 )
  {
    if ( (dword_61460C & 0x800) != 0 )
    {
      return (void *)sub_404B10();
    }
    else
    {
      if ( !src )
        sub_404A80();
      result = src;
      s1 = src;
    }
  }
  return result;
}

__int64 __fastcall sub_404BF0(__off_t length)
{
  int v1; // ebx

  do
  {
    sub_404810();
    v1 = ftruncate(1, length);
  }
  while ( v1 < 0 && *__errno_location() == 4 );
  return (unsigned int)v1;
}

unsigned __int64 __fastcall sub_404C30(char *s1, unsigned __int64 offset, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v7; // rbx
  int v8; // r13d
  _BYTE *v9; // rsi
  size_t v10; // rdx
  ssize_t v11; // rax
  int v13; // eax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r13
  char *v18; // rbx
  int *v19; // rax

  if ( (dword_614604 & 0x4000) != 0 && offset > offset )
INVALID_COLON;
  {
    v13 = sub_4095D0(1, 3, a3, a4, a5, a6);
    BYTE1(v13) &= ~0x40u;
    if ( (unsigned int)sub_4095D0(1, 4, v13, v14, v15, v16) && dword_6142BC != 1 )
    {
      v17 = sub_4084B0(0LL, 3LL, qword_614660);
      v18 = dcgettext(0LL, "failed to turn off O_DIRECT: %s", 5);
      v19 = __errno_location();
      sub_4041E0(0, *v19, (__int64)v18, v17);
    }
    byte_6144E8 = 1;
    sub_4045A0(1, 0LL);
    dword_61460C |= 0x8000u;
  }
  v7 = 0LL;
  if ( !offset )
    return v7;
  while ( 1 )
  {
    sub_404810();
    v8 = dword_61460C;
    byte_614618 = 0;
    if ( (dword_61460C & 0x10000) != 0 )
    {
      v9 = s1;
      v10 = offset;
      while ( !*v9 )
      {
        ++v9;
        if ( !--v10 )
          goto LABEL_19;
        if ( (v10 & 0xF) == 0 )
        {
          if ( memcmp(s1, v9, v10) )
            break;
LABEL_19:
          if ( lseek(1, offset, 1) < 0 )
          {
            dword_61460C = v8 & 0xFFFEFFFF;
            break;
          }
          byte_614618 = 1;
          v11 = offset;
          if ( (offset & 0x8000000000000000LL) == 0LL )
            goto LABEL_6;
          if ( *__errno_location() == 4 )
            goto LABEL_7;
          goto LABEL_16;
        }
      }
    }
    v11 = write(1, &s1[v7], offset - v7);
    if ( v11 >= 0 )
      break;
    if ( *__errno_location() != 4 )
      goto LABEL_16;
LABEL_7:
    if ( offset <= v7 )
      goto LABEL_16;
  }
  if ( v11 )
  {
LABEL_6:
    v7 += v11;
    goto LABEL_7;
  }
  *__errno_location() = 28;
LABEL_16:
  if ( !byte_6144EA || !v7 )
    return v7;
  sub_4045A0(1, v7);
  return v7;
}

void __noreturn sub_404E30()
{
  sub_404760();
  sub_4040B0();
  sub_404810();
  exit(1);
}

unsigned __int64 __fastcall sub_404E50(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // r12
  char *v9; // rbp
  int *v10; // rax

  result = sub_404C30((char *)s1, offset, a3, a4, a5, a6);
  qword_6145D8 += result;
  if ( offset != result )
  {
    v7 = result;
    v8 = sub_4083E0(4LL, qword_614660);
    v9 = dcgettext(0LL, "writing to %s", 5);
    v10 = __errno_location();
    sub_4041E0(0, *v10, (__int64)v9, v8);
    if ( v7 )
      ++qword_6145F8;
    sub_404E30();
  }
  qword_614588 = 0LL;
  ++qword_6145F0;
  return result;
}

void __fastcall sub_404EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _BYTE *v6; // r12
  _BYTE *v7; // rbp
  int v8; // ecx
  void *v9; // rsi
  __off_t v10; // rdx
  bool v11; // cf
  __off_t v12; // rdx
  int v13; // ecx
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx

  v6 = (_BYTE *)(a1 + a2);
  if ( a2 )
  {
    v7 = (_BYTE *)a1;
    do
    {
      while ( 1 )
      {
        v15 = qword_614580;
        if ( *v7 != byte_6142BA )
          break;
        if ( qword_614580 < (unsigned __int64)qword_614640 )
        {
          do
          {
            v12 = qword_614588;
            v13 = (int)s1;
            v14 = (unsigned __int8)byte_6142B9;
            v11 = ++qword_614588 < offset;
            *((_BYTE *)s1 + v12) = byte_6142B9;
            if ( !v11 )
              sub_404E50(a1, v14, v12, v13, a5, a6);
            ++v15;
          }
          while ( qword_614640 > v15 );
        }
        qword_614580 = 0LL;
        if ( v6 == ++v7 )
          return;
      }
      if ( qword_614580 == qword_614640 )
      {
        ++qword_6145A0;
      }
      else if ( qword_614580 < (unsigned __int64)qword_614640 )
      {
        v8 = qword_614588;
        v9 = s1;
        v10 = qword_614588 + 1;
        v11 = qword_614588 + 1 < offset;
        *((_BYTE *)s1 + qword_614588) = *v7;
        qword_614588 = v10;
        if ( !v11 )
        {
          sub_404E50(a1, (__int64)v9, v10, v8, a5, a6);
          v15 = qword_614580;
        }
      }
      ++v7;
      qword_614580 = v15 + 1;
    }
    while ( v6 != v7 );
  }
}

void __fastcall sub_405000(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v6; // r12
  _BYTE *v7; // rbp
  __off_t v9; // rdx
  int v10; // ecx
  unsigned __int64 v11; // rsi
  bool v12; // cf
  char v13; // r13
  __off_t v14; // rax

  if ( a2 )
  {
    v6 = 0LL;
    v7 = a1;
    do
    {
      while ( 1 )
      {
        v12 = qword_614580 < (unsigned __int64)qword_614640;
        v13 = v7[v6];
        ++qword_614580;
        if ( v12 )
          break;
        v9 = qword_614588;
        v10 = (int)s1;
        qword_6143B0 = 0LL;
        v11 = (unsigned __int8)byte_6142BA;
        qword_614580 = 0LL;
        v12 = ++qword_614588 < offset;
        *((_BYTE *)s1 + v9) = byte_6142BA;
        if ( !v12 )
          goto LABEL_10;
LABEL_4:
        if ( a2 <= v6 )
          return;
      }
      v10 = (unsigned __int8)byte_6142B9;
      ++v6;
      if ( byte_6142B9 != v13 )
      {
        a1 = s1;
        v14 = qword_614588;
        v11 = offset;
        if ( qword_6143B0 )
        {
          while ( 1 )
          {
            v9 = v14 + 1;
            a1[v14] = v10;
            qword_614588 = v14 + 1;
            if ( v14 + 1 >= v11 )
            {
              sub_404E50((__int64)a1, v11, v9, v10, a5, a6);
              a1 = s1;
              v9 = qword_614588;
              v11 = offset;
            }
            if ( !--qword_6143B0 )
              break;
            v10 = (unsigned __int8)byte_6142B9;
            v14 = v9;
          }
        }
        else
        {
          v9 = qword_614588;
        }
        a1[v9] = v13;
        qword_614588 = v9 + 1;
        if ( v9 + 1 < v11 )
          goto LABEL_4;
LABEL_10:
        sub_404E50((__int64)a1, v11, v9, v10, a5, a6);
        goto LABEL_4;
      }
      ++qword_6143B0;
    }
    while ( a2 > v6 );
  }
}

__off_t __fastcall sub_405150(unsigned int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 *a5)
{
  unsigned __int64 v8; // r12
  unsigned int *v9; // r15
  __off_t v10; // r12
  __off_t result; // rax
  void *v12; // r12
  __int64 (__fastcall *v13)(_QWORD, void *, unsigned __int64); // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  bool v16; // cf
  __int64 v17; // rdx
  const char *v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rbx
  char *v21; // rax
  char *v22; // rax
  __int64 v23; // rbx
  char *v24; // rax
  unsigned int v26; // [rsp+Ch] [rbp-CCh]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h] BYREF

  v8 = *a5;
  v9 = (unsigned int *)__errno_location();
  *v9 = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL / a4 < a3 )
  {
    if ( sub_4044D0(a2, a1, 0LL, 2) >= 0 )
      goto LABEL_45;
    v26 = 0;
LABEL_8:
    if ( a1 )
    {
      sub_404BA0();
      v12 = s1;
    }
    else
    {
      if ( !src )
        sub_404A80();
      v12 = src;
    }
    while ( 1 )
    {
      v13 = (__int64 (__fastcall *)(_QWORD, void *, unsigned __int64))qword_6144E0;
      v14 = a4;
      if ( !a3 )
        break;
      while ( 1 )
      {
        v15 = v13(a1, v12, v14);
        if ( v15 < 0 )
        {
          if ( !a1 )
          {
            v20 = sub_4083E0(4LL, a2);
            v21 = dcgettext(0LL, "error reading %s", 5);
            sub_4041E0(0, *v9, (__int64)v21, v20);
            if ( (dword_61460C & 0x100) != 0 )
              sub_4040B0();
LABEL_39:
            sub_404E30();
          }
          v17 = a2;
LABEL_41:
          v18 = "%s: cannot seek";
          v19 = sub_4084B0(0LL, 3LL, v17);
LABEL_42:
          v22 = dcgettext(0LL, v18, 5);
          sub_4041E0(0, v26, (__int64)v22, v19);
          goto LABEL_39;
        }
        if ( !v15 )
          return a3;
        if ( !a1 )
        {
          v16 = __CFADD__(qword_6145B0, v15);
          qword_6145B0 += v15;
          if ( v16 )
            byte_6145A9 = 1;
        }
        if ( !a3 )
          goto LABEL_4;
        if ( --a3 )
          break;
        v14 = *a5;
        if ( !*a5 )
          return 0LL;
        v13 = (__int64 (__fastcall *)(_QWORD, void *, unsigned __int64))qword_6144E0;
LABEL_22:
        a3 = 0LL;
      }
    }
    v14 = *a5;
    goto LABEL_22;
  }
  v10 = a4 * a3 + v8;
  if ( sub_4044D0(a2, a1, v10, 1) < 0 )
  {
    v26 = *v9;
    if ( sub_4044D0(a2, a1, 0LL, 2) >= 0 )
    {
      if ( v26 )
      {
LABEL_25:
        v17 = a2;
        if ( a1 )
          goto LABEL_41;
        v18 = (const char *)&unk_40DBF2;
        v19 = sub_4084B0(0LL, 3LL, a2);
        goto LABEL_42;
      }
LABEL_45:
      v26 = 75;
      goto LABEL_25;
    }
    goto LABEL_8;
  }
  if ( a1 )
  {
LABEL_4:
    *a5 = 0LL;
    return 0LL;
  }
  else if ( __fxstat(1, 0, &stat_buf) )
  {
    v23 = sub_4083E0(4LL, a2);
    v24 = dcgettext(0LL, "cannot fstat %s", 5);
    sub_4041E0(1u, *v9, (__int64)v24, v23);
    return 0LL;
  }
  else
  {
    result = 0LL;
    if ( (stat_buf.st_mode & 0xD000) == 0x8000 && stat_buf.st_size < (unsigned __int64)(v10 + qword_6145B0) )
    {
      result = (v10 - stat_buf.st_size) / a4;
      v10 = stat_buf.st_size - qword_6145B0;
    }
    v16 = __CFADD__(qword_6145B0, v10);
    qword_6145B0 += v10;
    if ( v16 )
      byte_6145A9 = 1;
  }
  return result;
}

void __fastcall __noreturn sub_405460(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  FILE *v4; // rbp
  char *v5; // rax
  FILE *v6; // rbp
  char *v7; // rax
  FILE *v8; // rbp
  char *v9; // rax
  FILE *v10; // rbp
  char *v11; // rax
  FILE *v12; // rbp
  char *v13; // rax
  FILE *v14; // rbp
  char *v15; // rax
  FILE *v16; // rbp
  char *v17; // rax
  FILE *v18; // rbp
  char *v19; // rax
  FILE *v20; // rbp
  char *v21; // rax
  FILE *v22; // rbp
  char *v23; // rax
  FILE *v24; // rbp
  char *v25; // rax
  FILE *v26; // rbp
  char *v27; // rax
  FILE *v28; // rbp
  char *v29; // rax
  FILE *v30; // rbp
  char *v31; // rax
  FILE *v32; // rbp
  char *v33; // rax
  FILE *v34; // rbp
  char *v35; // rax
  FILE *v36; // rbp
  char *v37; // rax
  FILE *v38; // rbp
  char *v39; // rax
  char *v40; // rax
  __int64 v41; // rcx
  FILE *v42; // rbp
  char *v43; // rax
  FILE *v44; // rbp
  char *v45; // rax
  __int64 *v46; // rax
  char *v47; // rbp
  char *v48; // rax
  char *v49; // rax
  const char *v50; // r12
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rax
  char *v56; // rax
  __int64 v57; // rcx
  __int64 v58[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_614680;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPERAND]...\n  or:  %s OPTION\n", 5);
  __printf_chk(1LL, v3, v1, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Copy a file, converting and formatting according to the operands.\n"
         "\n"
         "  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n"
         "                  overrides ibs and obs\n"
         "  cbs=BYTES       convert BYTES bytes at a time\n"
         "  conv=CONVS      convert the file as per the comma separated symbol list\n"
         "  count=N         copy only N input blocks\n"
         "  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(
         0LL,
         "  if=FILE         read from FILE instead of stdin\n"
         "  iflag=FLAGS     read as per the comma separated symbol list\n"
         "  obs=BYTES       write BYTES bytes at a time (default: 512)\n"
         "  of=FILE         write to FILE instead of stdout\n"
         "  oflag=FLAGS     write as per the comma separated symbol list\n"
         "  seek=N          skip N obs-sized blocks at start of output\n"
         "  skip=N          skip N ibs-sized blocks at start of input\n"
         "  status=LEVEL    The LEVEL of information to print to stderr;\n"
         "                  'none' suppresses everything but error messages,\n"
         "                  'noxfer' suppresses the final transfer statistics,\n"
         "                  'progress' shows periodic transfer statistics\n",
         5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(
         0LL,
         "\n"
         "N and BYTES may be followed by the following multiplicative suffixes:\n"
         "c =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M,\n"
         "GB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n"
         "\n"
         "Each CONV symbol may be:\n"
         "\n",
         5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(
          0LL,
          "  ascii     from EBCDIC to ASCII\n"
          "  ebcdic    from ASCII to EBCDIC\n"
          "  ibm       from ASCII to alternate EBCDIC\n"
          "  block     pad newline-terminated records with spaces to cbs-size\n"
          "  unblock   replace trailing spaces in cbs-size records with newline\n"
          "  lcase     change upper case to lower case\n"
          "  ucase     change lower case to upper case\n"
          "  sparse    try to seek rather than write the output for NUL input blocks\n"
          "  swab      swap every pair of input bytes\n"
          "  sync      pad every input block with NULs to ibs-size; when used\n"
          "            with block or unblock, pad with spaces rather than NULs\n",
          5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  excl      fail if the output file already exists\n"
          "  nocreat   do not create the output file\n"
          "  notrunc   do not truncate the output file\n"
          "  noerror   continue after read errors\n"
          "  fdatasync  physically write output file data before finishing\n"
          "  fsync     likewise, but also write metadata\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "\n"
          "Each FLAG symbol may be:\n"
          "\n"
          "  append    append mode (makes sense only for output; conv=notrunc suggested)\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "  direct    use direct I/O for data\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "  directory  fail unless a directory\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(0LL, "  dsync     use synchronized I/O for data\n", 5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(0LL, "  sync      likewise, but also for metadata\n", 5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(0LL, "  fullblock  accumulate full blocks of input (iflag only)\n", 5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(0LL, "  nonblock  use non-blocking I/O\n", 5);
  fputs_unlocked(v27, v26);
  v28 = stdout;
  v29 = dcgettext(0LL, "  noatime   do not update access time\n", 5);
  fputs_unlocked(v29, v28);
  v30 = stdout;
  v31 = dcgettext(0LL, "  nocache   Request to drop cache.  See also oflag=sync\n", 5);
  fputs_unlocked(v31, v30);
  v32 = stdout;
  v33 = dcgettext(0LL, "  noctty    do not assign controlling terminal from file\n", 5);
  fputs_unlocked(v33, v32);
  v34 = stdout;
  v35 = dcgettext(0LL, "  count_bytes  treat 'count=N' as a byte count (iflag only)\n", 5);
  fputs_unlocked(v35, v34);
  v36 = stdout;
  v37 = dcgettext(0LL, "  skip_bytes  treat 'skip=N' as a byte count (iflag only)\n", 5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(0LL, "  seek_bytes  treat 'seek=N' as a byte count (oflag only)\n", 5);
  fputs_unlocked(v39, v38);
  v40 = dcgettext(
          0LL,
          "\n"
          "Sending a %s signal to a running 'dd' process makes it\n"
          "print I/O statistics to standard error and then resume copying.\n"
          "\n"
          "Options are:\n"
          "\n",
          5);
  __printf_chk(1LL, v40, "USR1", v41);
  v42 = stdout;
  v43 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v43, v42);
  v44 = stdout;
  v45 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v45, v44);
  v58[0] = (__int64)"[";
  v46 = v58;
  v58[1] = (__int64)"test invocation";
  v58[2] = (__int64)"coreutils";
  v58[3] = (__int64)"Multi-call invocation";
  v58[4] = (__int64)"sha224sum";
  v58[5] = (__int64)"sha2 utilities";
  v58[6] = (__int64)"sha256sum";
  v58[7] = (__int64)"sha2 utilities";
  v58[8] = (__int64)"sha384sum";
  v58[9] = (__int64)"sha2 utilities";
  v58[10] = (__int64)"sha512sum";
  v58[11] = (__int64)"sha2 utilities";
  v58[12] = 0LL;
  v58[13] = 0LL;
  do
    v46 += 2;
  while ( *v46 && strcmp("dd", (const char *)*v46) );
  v47 = (char *)v46[1];
  if ( v47 )
  {
    v48 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v48, &unk_40DCA1, "https://www.gnu.org/software/coreutils/");
    v49 = setlocale(5, 0LL);
    if ( !v49 || !strncmp(v49, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v53 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v53, &unk_40DCA1, "https://www.gnu.org/software/coreutils/");
    v54 = setlocale(5, 0LL);
    if ( !v54 || !strncmp(v54, "en_", 3uLL) )
    {
      v47 = "dd";
      v55 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v50 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v55, "https://www.gnu.org/software/coreutils/", "dd");
LABEL_12:
      v52 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v52, v47, v50);
LABEL_3:
      exit(status);
    }
    v47 = "dd";
  }
  v56 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v56, "dd", v57);
LABEL_10:
  v50 = "Multi-call invocation" + 10;
  v51 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v51, "https://www.gnu.org/software/coreutils/", "dd");
  if ( v47 != "dd" )
    v50 = "";
  goto LABEL_12;
}

__int64 __fastcall sub_4059D0(char *s, __int64 a2, char a3, const char *a4)
{
  unsigned int v8; // ebx
  char *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  char v12; // cl
  char v13; // si
  unsigned int v14; // edx
  int v15; // ebx
  size_t v17; // rax
  const char *v18; // rbx
  char *v19; // rax

  v8 = 0;
  while ( 2 )
  {
    v9 = strchr(s, 44);
    v10 = a2;
LABEL_3:
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *(_BYTE *)(v10 + v11);
      v13 = s[v11];
      if ( !v12 )
        break;
      ++v11;
      if ( v12 != v13 )
      {
LABEL_9:
        if ( !*(_BYTE *)v10 )
        {
          if ( v9 )
            v17 = v9 - s;
          else
            v17 = strlen(s);
          v18 = (const char *)sub_408370(0LL, 8LL, s, v17);
          v19 = dcgettext(0LL, a4, 5);
          sub_4041E0(0, 0, (__int64)"%s: %s", v19, v18);
          sub_405460(1);
        }
        v10 += 16LL;
        goto LABEL_3;
      }
    }
    if ( v13 != 44 && v13 )
      goto LABEL_9;
    v14 = *(_DWORD *)(v10 + 12);
    if ( !v14 )
      goto LABEL_9;
    v15 = v14 | v8;
    if ( !a3 )
      v14 = v15;
    if ( v9 )
    {
      s = v9 + 1;
      v8 = v14;
      continue;
    }
    return v14;
  }
}

__int64 __fastcall sub_405AB0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_409550(stream);
  if ( v2 )
  {
    if ( !(_DWORD)result )
    {
      *__errno_location() = 0;
      return 0xFFFFFFFFLL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)result )
    return result;
  if ( v1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)-(*__errno_location() != 9);
}

__int64 sub_405B30()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_405AB0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_614670 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_614678 )
      {
        v5 = (const char *)sub_408480();
        error(0, *v1, "%s: %s", v5, v4);
      }
      else
      {
        error(0, *v1, "%s", v3);
      }
LABEL_8:
      _exit(status);
    }
  }
  result = sub_405AB0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

__int64 __fastcall sub_405BD0(int fd2, char *file, int oflag, unsigned int a4)
{
  __int64 result; // rax
  int v5; // ebx
  unsigned int v6; // r12d
  int *v7; // rax
  int v8; // r13d
  int *v9; // rbp

  LODWORD(result) = open(file, oflag, a4);
  v5 = result;
  if ( fd2 == (_DWORD)result || (int)result < 0 )
    return (unsigned int)result;
  v6 = dup2(result, fd2);
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  close(v5);
  result = v6;
  *v9 = v8;
  return result;
}

__syscall_slong_t sub_405C40()
{
  struct timespec v1; // [rsp+0h] [rbp-18h] BYREF

  if ( clock_gettime(1, &v1) )
    sub_405C70(&v1);
  return v1.tv_nsec + 1000000000 * v1.tv_sec;
}

int __fastcall sub_405C70(struct timespec *tp)
{
  int result; // eax
  struct timeval v2; // [rsp+0h] [rbp-18h] BYREF

  result = clock_gettime(0, tp);
  if ( result )
  {
    gettimeofday(&v2, 0LL);
    tp->tv_sec = v2.tv_sec;
    result = 1000 * LODWORD(v2.tv_usec);
    tp->tv_nsec = 1000 * v2.tv_usec;
  }
  return result;
}

long double __fastcall sub_405CB0(int a1, long double a2)
{
  unsigned __int64 v7; // rax
  long double v8; // fst6
  long double result; // fst7

  if ( a2 >= 9.223372e18 )
    v7 = (__int64)(a2 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v7 = (__int64)a2;
  v8 = (long double)v7;
  if ( a1 )
    return v8;
  result = v8;
  if ( a2 != v8 )
    return (long double)(v7 + 1);
  return result;
}

char *__fastcall sub_405D70(__int64 a1, __int64 a2, __int16 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  struct lconv *v7; // rax
  const char *decimal_point; // r15
  struct lconv *v9; // r12
  size_t v10; // r8
  char *grouping; // rax
  const char *thousands_sep; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  long double v15; // fst7
  long double v16; // fst6
  long double v17; // fst7
  long double v18; // fst6
  long double v19; // fst7
  long double v20; // fst6
  int v21; // ebx
  long double v22; // fst5
  long double v23; // fst4
  long double v24; // fst7
  long double v25; // fst6
  long double v26; // fst7
  size_t v27; // r14
  long double v28; // fst7
  unsigned __int64 v29; // r15
  long double v30; // fst6
  size_t v31; // rax
  long double v32; // fst6
  long double v33; // fst7
  size_t v34; // r14
  char *v35; // r15
  char *v36; // r14
  int v37; // eax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rtt
  unsigned __int64 v41; // rdx
  int v42; // r9d
  int v43; // edi
  int v44; // ecx
  char *v45; // rbp
  unsigned __int8 *v46; // r15
  size_t v47; // rbx
  size_t v48; // rbp
  unsigned __int8 v49; // dl
  size_t v50; // rax
  size_t v51; // rbp
  char *v52; // r14
  unsigned __int64 v53; // rax
  char *v54; // rdx
  unsigned __int64 v55; // r11
  int v56; // eax
  unsigned int v57; // edx
  unsigned int v58; // edi
  bool v59; // dl
  char v60; // al
  unsigned __int64 v61; // r9
  unsigned int v62; // edx
  __int64 v63; // rdi
  unsigned __int64 v64; // rcx
  signed __int64 v65; // r15
  unsigned int v66; // edx
  __int64 v67; // rsi
  char *v68; // [rsp+10h] [rbp-A8h]
  int v71; // [rsp+24h] [rbp-94h]
  int v72; // [rsp+24h] [rbp-94h]
  size_t v74; // [rsp+30h] [rbp-88h]
  long double v75; // [rsp+30h] [rbp-88h]
  float v76; // [rsp+30h] [rbp-88h]
  size_t v77; // [rsp+30h] [rbp-88h]
  long double v78; // [rsp+30h] [rbp-88h]
  int v79; // [rsp+40h] [rbp-78h]
  unsigned int v80; // [rsp+44h] [rbp-74h]
  char *v81; // [rsp+48h] [rbp-70h]
  char src[104]; // [rsp+50h] [rbp-68h] BYREF

  v79 = a3 & 0x20;
  v71 = a3 & 3;
  v80 = v79 == 0 ? 1000 : 1024;
  v7 = localeconv();
  decimal_point = v7->decimal_point;
  v9 = v7;
  v10 = strlen(v7->decimal_point);
  if ( v10 - 1 >= 0x10 )
    decimal_point = ".";
  grouping = v9->grouping;
  thousands_sep = v9->thousands_sep;
  if ( v10 - 1 >= 0x10 )
    v10 = 1LL;
  v74 = v10;
  v81 = grouping;
  if ( strlen(thousands_sep) >= 0x11 )
    thousands_sep = "";
  v68 = (char *)(a2 + 647);
  if ( a5 > a4 )
  {
    if ( !a4 || (v39 = a5 / a4, a5 % a4) )
    {
LABEL_10:
      v15 = (long double)a4;
      v16 = (long double)(__int64)a5;
      if ( (a5 & 0x8000000000000000LL) != 0LL )
      {
        v17 = v15 / (v16 + 1.8446744e19);
        v18 = (long double)a1;
        if ( a1 >= 0 )
        {
LABEL_12:
          v19 = v17 * v18;
          if ( (a3 & 0x10) != 0 )
          {
LABEL_13:
            v20 = (long double)(int)v80;
            v21 = 0;
            v22 = v20;
            while ( 1 )
            {
              ++v21;
              v23 = v19;
              v24 = v22 * v20;
              if ( v23 < v24 )
                break;
              if ( v21 == 8 )
              {
                v25 = v23;
                v26 = v22;
                goto LABEL_19;
              }
              v22 = v24;
              v19 = v23;
            }
            v25 = v23;
            v26 = v22;
LABEL_19:
            v27 = v74 + 1;
            v28 = v25 / v26;
            v29 = v74 + 1 + (v79 == 0) + 1;
            if ( v71 == 1 )
            {
              __sprintf_chk(a2, 1LL, -1LL, "%.1Lf", v28);
              v31 = strlen((const char *)a2);
              if ( v31 > v29 )
              {
                v32 = 10.0;
                v33 = v28 * 10.0;
                goto LABEL_26;
              }
            }
            else
            {
              if ( v28 < 1.8446744073709551615e19 )
              {
                v78 = v28;
                v28 = sub_405CB0(v71, v28);
                v30 = v78;
              }
              else
              {
                v30 = v28;
              }
              v75 = v30;
              __sprintf_chk(a2, 1LL, -1LL, "%.1Lf", v28);
              v31 = strlen((const char *)a2);
              v28 = v30;
              if ( v31 > v29 )
              {
                v32 = 10.0;
                v33 = v75 * 10.0;
LABEL_24:
                if ( v33 < 1.8446744073709551615e19 )
                {
                  v76 = v32;
                  v33 = sub_405CB0(v71, v33);
                  v32 = v76;
                }
                goto LABEL_26;
              }
            }
            if ( (a3 & 8) == 0 || *(_BYTE *)(a2 + v31 - 1) != 48 )
            {
              v34 = v31 - v27;
              goto LABEL_31;
            }
            v32 = 10.0;
            v33 = v28 * 10.0;
            if ( v71 != 1 )
              goto LABEL_24;
LABEL_26:
            __sprintf_chk(a2, 1LL, -1LL, "%.0Lf", v33 / v32);
            v31 = strlen((const char *)a2);
            v34 = v31;
LABEL_31:
            v35 = &v68[-v31];
            v36 = &v68[v34 - v31];
            memmove(&v68[-v31], (const void *)a2, v31);
            goto LABEL_32;
          }
LABEL_27:
          if ( v71 != 1 && v19 < 1.8446744073709551615e19 )
            v19 = sub_405CB0(v71, v19);
          __sprintf_chk(a2, 1LL, -1LL, "%.0Lf", v19);
          v21 = -1;
          v31 = strlen((const char *)a2);
          v34 = v31;
          goto LABEL_31;
        }
      }
      else
      {
        v17 = v15 / v16;
        v18 = (long double)a1;
        if ( a1 >= 0 )
          goto LABEL_12;
      }
      v19 = v17 * (v18 + 1.8446744e19);
      if ( (a3 & 0x10) != 0 )
        goto LABEL_13;
      goto LABEL_27;
    }
    v14 = a1 / v39;
    v40 = 10 * (a1 % v39);
    v41 = 2 * (v40 % v39);
    v42 = v40 / v39;
    if ( v39 <= v41 )
      v43 = (v39 < v41) + 2;
    else
      v43 = v41 != 0;
    v44 = a3 & 0x10;
    if ( (a3 & 0x10) == 0 )
      goto LABEL_85;
  }
  else
  {
    v13 = a4 / a5;
    if ( a4 % a5 )
      goto LABEL_10;
    v14 = a1 * v13;
    if ( a1 * v13 / (a4 / a5) != a1 )
      goto LABEL_10;
    v43 = 0;
    v42 = 0;
    v44 = a3 & 0x10;
    if ( (a3 & 0x10) == 0 )
    {
LABEL_85:
      v21 = -1;
      goto LABEL_47;
    }
  }
  v21 = 0;
  if ( v80 <= v14 )
  {
    while ( 1 )
    {
      v55 = v14 / v80;
      v56 = (v42 + 10 * (v14 % v80)) / v80;
      v57 = (v43 >> 1) + 2 * ((v42 + 10 * (v14 % v80)) % v80);
      v42 = v56;
      v14 = v55;
      v58 = v57 + v43;
      v43 = v80 > v57 ? v58 != 0 : (v80 < v58) + 2;
      ++v21;
      if ( v80 > v55 )
        break;
      if ( v21 == 8 )
        goto LABEL_47;
    }
    if ( v55 <= 9 )
    {
      if ( v71 == 1 )
        v59 = v43 + (v56 & 1) > 2;
      else
        v59 = v43 > 0 && v71 == 0;
      if ( v59 )
      {
        if ( ++v56 == 10 )
        {
          v14 = v55 + 1;
          if ( v55 == 9 )
          {
            v36 = v68;
LABEL_114:
            v43 = 0;
            goto LABEL_115;
          }
          v43 = 0;
          goto LABEL_107;
        }
      }
      else if ( !v56 )
      {
LABEL_107:
        v36 = v68;
        if ( (a3 & 8) != 0 )
        {
LABEL_115:
          if ( v71 == 1 )
            goto LABEL_52;
          v42 = 0;
          goto LABEL_48;
        }
        v60 = 48;
        goto LABEL_109;
      }
      v60 = v56 + 48;
LABEL_109:
      *(_BYTE *)(a2 + 646) = v60;
      v36 = (char *)(a2 + 646 - v74);
      if ( (unsigned int)v74 >= 8 )
      {
        v61 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)v36 = *(_QWORD *)decimal_point;
        *(_QWORD *)&v36[(unsigned int)v74 - 8] = *(_QWORD *)&decimal_point[(unsigned int)v74 - 8];
        if ( (((_DWORD)a2 + 646 - (_DWORD)v61) & 0xFFFFFFF8) >= 8 )
        {
          v62 = 0;
          do
          {
            v63 = v62;
            v62 += 8;
            *(_QWORD *)(v61 + v63) = *(_QWORD *)(decimal_point - &v36[-v61] + v63);
          }
          while ( v62 < (((_DWORD)a2 + 646 - (_DWORD)v61) & 0xFFFFFFF8) );
        }
      }
      else if ( (v74 & 4) != 0 )
      {
        *(_DWORD *)v36 = *(_DWORD *)decimal_point;
        *(_DWORD *)&v36[(unsigned int)v74 - 4] = *(_DWORD *)&decimal_point[(unsigned int)v74 - 4];
      }
      else if ( (_DWORD)v74 )
      {
        *v36 = *decimal_point;
        if ( (v74 & 2) != 0 )
          *(_WORD *)&v36[(unsigned int)v74 - 2] = *(_WORD *)&decimal_point[(unsigned int)v74 - 2];
      }
      goto LABEL_114;
    }
  }
LABEL_47:
  v36 = v68;
  if ( v71 == 1 )
  {
    if ( (v43 + (v14 & 1) != 0) + v42 <= 5 )
      goto LABEL_52;
    v36 = v68;
    goto LABEL_50;
  }
LABEL_48:
  if ( v71 || v42 + v43 <= 0 )
  {
LABEL_52:
    v35 = v36;
    while ( 1 )
    {
      *--v35 = v14 % 0xA + 48;
      if ( v14 <= 9 )
        break;
      v14 /= 0xAuLL;
    }
    if ( (a3 & 4) == 0 )
      goto LABEL_33;
    goto LABEL_56;
  }
LABEL_50:
  ++v14;
  if ( !v44 || v80 != v14 || v21 == 8 )
    goto LABEL_52;
  ++v21;
  if ( (a3 & 8) == 0 )
  {
    *(v36 - 1) = 48;
    v36 += ~v74;
    if ( (unsigned int)v74 >= 8 )
    {
      v64 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)v36 = *(_QWORD *)decimal_point;
      *(_QWORD *)&v36[(unsigned int)v74 - 8] = *(_QWORD *)&decimal_point[(unsigned int)v74 - 8];
      v65 = decimal_point - &v36[-v64];
      if ( (((_DWORD)v74 + (_DWORD)v36 - (_DWORD)v64) & 0xFFFFFFF8) >= 8 )
      {
        v66 = 0;
        do
        {
          v67 = v66;
          v66 += 8;
          *(_QWORD *)(v64 + v67) = *(_QWORD *)(v65 + v67);
        }
        while ( v66 < (((_DWORD)v74 + (_DWORD)v36 - (_DWORD)v64) & 0xFFFFFFF8) );
      }
    }
    else if ( (v74 & 4) != 0 )
    {
      *(_DWORD *)v36 = *(_DWORD *)decimal_point;
      *(_DWORD *)&v36[(unsigned int)v74 - 4] = *(_DWORD *)&decimal_point[(unsigned int)v74 - 4];
    }
    else if ( (_DWORD)v74 )
    {
      *v36 = *decimal_point;
      if ( (v74 & 2) != 0 )
        *(_WORD *)&v36[(unsigned int)v74 - 2] = *(_WORD *)&decimal_point[(unsigned int)v74 - 2];
    }
  }
  v35 = v36 - 1;
  *(v36 - 1) = 49;
LABEL_32:
  if ( (a3 & 4) == 0 )
    goto LABEL_33;
LABEL_56:
  v45 = (char *)(v36 - v35);
  v77 = strlen(thousands_sep);
  __memcpy_chk(src, v35, v36 - v35, 41LL);
  v72 = v21;
  v46 = (unsigned __int8 *)v81;
  v47 = (size_t)v45;
  v48 = -1LL;
  while ( 1 )
  {
    v49 = *v46;
    if ( *v46 )
    {
      v50 = v49;
      if ( v49 >= 0x7Fu )
        v50 = v47;
      ++v46;
      v48 = v50;
    }
    if ( v48 > v47 )
    {
      v51 = v47;
      v21 = v72;
      v35 = &v36[-v51];
      memcpy(&v36[-v51], src, v51);
      goto LABEL_33;
    }
    v52 = &v36[-v48];
    v47 -= v48;
    memcpy(v52, &src[v47], v48);
    if ( !v47 )
      break;
    v36 = &v52[-v77];
    memcpy(v36, thousands_sep, v77);
  }
  v21 = v72;
  v35 = v52;
LABEL_33:
  if ( (a3 & 0x80u) != 0 )
  {
    if ( v21 == -1 )
    {
      if ( a5 > 1 )
      {
        v21 = 1;
        v53 = 1LL;
        do
        {
          v53 *= v80;
          if ( a5 <= v53 )
            break;
          ++v21;
        }
        while ( v21 != 8 );
        v37 = a3 & 0x100;
        if ( (a3 & 0x40) == 0 )
          goto LABEL_72;
        goto LABEL_70;
      }
      v21 = 0;
    }
    v37 = a3 & 0x100;
    if ( !(v21 | v37) )
      goto LABEL_36;
    if ( (a3 & 0x40) == 0 )
    {
LABEL_71:
      if ( !v21 )
      {
        v54 = v68;
        if ( !v37 )
          goto LABEL_36;
        goto LABEL_77;
      }
LABEL_72:
      if ( !v79 && v21 == 1 )
      {
        v54 = v68 + 1;
        *v68 = 107;
        if ( v37 )
        {
LABEL_77:
          *v54 = 66;
          v68 = v54 + 1;
          goto LABEL_36;
        }
      }
      else
      {
        v54 = v68 + 1;
        *v68 = byte_40F728[v21];
        if ( v37 )
        {
          if ( v79 )
          {
            v54 = v68 + 2;
            v68[1] = 105;
          }
          goto LABEL_77;
        }
      }
      v68 = v54;
      goto LABEL_36;
    }
LABEL_70:
    *(_BYTE *)(a2 + 647) = 32;
    v68 = (char *)(a2 + 648);
    goto LABEL_71;
  }
LABEL_36:
  *v68 = 0;
  return v35;
}

__int64 __fastcall sub_406740(char *nptr, int *a2, __int64 *a3)
{
  char *v4; // rbx
  int v5; // ebp
  int v6; // eax
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  char *v10; // [rsp+8h] [rbp-30h]

  v4 = nptr;
  if ( nptr || (v4 = getenv("BLOCK_SIZE")) != 0LL || (v4 = getenv("BLOCKSIZE")) != 0LL )
  {
    v5 = 0;
    if ( *v4 == 39 )
    {
      ++v4;
      v5 = 4;
    }
    v6 = sub_40A670(v4, off_40F710, dword_40F700, 4LL);
    if ( v6 >= 0 )
    {
      *a3 = 1LL;
      v7 = dword_40F700[v6] | v5;
      result = 0LL;
      *a2 = v7;
      return result;
    }
    result = sub_408F50(v4);
    if ( (_DWORD)result )
    {
      *a2 = 0;
      v9 = *a3;
LABEL_15:
      if ( !v9 )
      {
        *a3 = getenv("POSIXLY_CORRECT") == 0LL ? 1024LL : 512LL;
        return 4LL;
      }
      return result;
    }
    if ( (unsigned __int8)(*v4 - 48) > 9u )
    {
      if ( v4 != v10 )
      {
        while ( (unsigned __int8)(*++v4 - 48) > 9u )
        {
          if ( v4 == v10 )
            goto LABEL_22;
        }
        goto LABEL_13;
      }
LABEL_22:
      if ( *(v10 - 1) == 66 )
      {
        v5 |= 0x180u;
        if ( *(v10 - 2) != 105 )
          goto LABEL_13;
      }
      else
      {
        LOBYTE(v5) = v5 | 0x80;
      }
      v5 |= 0x20u;
    }
LABEL_13:
    v9 = *a3;
    *a2 = v5;
    goto LABEL_15;
  }
  result = (__int64)getenv("POSIXLY_CORRECT");
  if ( result )
  {
    *a3 = 512LL;
    result = 0LL;
  }
  else
  {
    *a3 = 1024LL;
  }
  *a2 = 0;
  return result;
}

void sub_406900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, void (__fastcall *a6)(_QWORD), ...)
{
  int v6; // ebx
  int v11; // eax
  gcc_va_list va; // [rsp+8h] [rbp-F0h] BYREF

  v6 = dword_614338;
  dword_614338 = 0;
  if ( (_DWORD)a1 == 2 )
  {
    v11 = sub_40A500(a1, a2, &unk_40F750, &off_40F760, 0LL);
    if ( v11 != -1 )
    {
      if ( v11 == 104 )
      {
        a6(0LL);
      }
      else if ( v11 == 118 )
      {
        va_start(va, a6);
        sub_408B20(stdout, a3, a4, a5, va);
        exit(0);
      }
    }
  }
  dword_614338 = v6;
  dword_61433C = 0;
}

char *__fastcall sub_406A10(const char *a1)
{
  __int64 v1; // rbx
  char *result; // rax

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (__int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    if ( result + 1 - a1 > 6 && !memcmp(result - 6, "/.libs/", 7uLL) )
    {
      v1 = (__int64)(result + 1);
      if ( !memcmp(result + 1, "lt-", 3uLL) )
      {
        v1 = (__int64)(result + 4);
        program_invocation_short_name = (__int64)(result + 4);
      }
    }
  }
  qword_614680 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_406AB0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40AA50();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40F811;
      if ( !v5 )
        return (char *)&unk_40F806;
      return v2;
    }
  }
  else if ( (*v4 & 0xDF) == 71
         && (v4[1] & 0xDF) == 66
         && v4[2] == 49
         && v4[3] == 56
         && v4[4] == 48
         && v4[5] == 51
         && v4[6] == 48
         && !v4[7] )
  {
    v5 = *v2 == 96;
    v2 = (char *)&unk_40F80D;
    if ( !v5 )
      return (char *)&unk_40F80A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_406BB0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_406BB0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
                  case 0x50:
                  case 0x51:
                  case 0x52:
                  case 0x53:
                  case 0x54:
                  case 0x55:
                  case 0x56:
                  case 0x57:
                  case 0x58:
                  case 0x59:
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x74:
                  case 0x75:
                  case 0x76:
                  case 0x77:
                  case 0x78:
                  case 0x79:
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_406BB0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_40A580((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_406BB0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_406AB0("`", a5);
        v51 = sub_406AB0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

unsigned __int64 __fastcall sub_406BB0(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        char *a8,
        char *a9)
{
  _BYTE *v9; // r15
  unsigned __int64 v10; // r14
  int v12; // ebp
  unsigned __int64 v13; // r11
  int v14; // r10d
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  int v18; // r11d
  _BYTE *v19; // r8
  size_t v20; // rax
  int v21; // eax
  unsigned __int64 v22; // rbp
  bool v23; // al
  unsigned __int8 v24; // dl
  const unsigned __int16 **v25; // rax
  int v26; // eax
  char v27; // di
  unsigned __int64 v28; // rdx
  char v29; // cl
  int v30; // r13d
  unsigned __int8 v31; // al
  bool v33; // dl
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  int v36; // edx
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
  int v39; // r13d
  bool v40; // dl
  bool v41; // dl
  bool v42; // al
  size_t v43; // rax
  const unsigned __int16 **v44; // rbx
  char *v45; // r15
  const unsigned __int16 **v46; // r14
  char *v47; // rax
  int v48; // esi
  unsigned __int64 v49; // rcx
  unsigned __int8 v50; // di
  char *v51; // rax
  size_t v52; // rax
  __int64 v53; // rsi
  char *v54; // rsi
  _BYTE *v55; // rcx
  char i; // al
  char v57; // dl
  char *v58; // rax
  unsigned __int8 v60; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v61; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v62; // [rsp+10h] [rbp-B8h]
  char v63; // [rsp+1Fh] [rbp-A9h]
  size_t n; // [rsp+28h] [rbp-A0h]
  _BYTE *v66; // [rsp+30h] [rbp-98h]
  unsigned __int8 v67; // [rsp+30h] [rbp-98h]
  _BYTE *v68; // [rsp+30h] [rbp-98h]
  unsigned __int64 v69; // [rsp+30h] [rbp-98h]
  unsigned __int8 v70; // [rsp+38h] [rbp-90h]
  unsigned __int8 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  char v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+40h] [rbp-88h]
  unsigned __int64 v76; // [rsp+40h] [rbp-88h]
  int v77; // [rsp+40h] [rbp-88h]
  int v78; // [rsp+40h] [rbp-88h]
  _BYTE *v79; // [rsp+40h] [rbp-88h]
  int v80; // [rsp+48h] [rbp-80h]
  unsigned __int64 v81; // [rsp+48h] [rbp-80h]
  char *s2; // [rsp+50h] [rbp-78h]
  unsigned __int64 v83; // [rsp+58h] [rbp-70h]
  size_t mb_cur_max; // [rsp+60h] [rbp-68h]
  bool v86; // [rsp+6Ch] [rbp-5Ch]
  char v87; // [rsp+6Dh] [rbp-5Bh]
  unsigned __int8 v88; // [rsp+6Eh] [rbp-5Ah]
  unsigned __int64 v89; // [rsp+70h] [rbp-58h]
  _BYTE *v90; // [rsp+78h] [rbp-50h]
  wint_t wc; // [rsp+84h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+88h] [rbp-40h] BYREF

  v9 = a1;
  v10 = a2;
  v12 = a6 & 2;
  mb_cur_max = __ctype_get_mb_cur_max();
  v86 = v12 != 0;
  v13 = a4;
  switch ( a5 )
  {
    case 0:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 1:
      goto LABEL_2;
    case 2:
      if ( !v12 )
      {
        v60 = 0;
        goto LABEL_216;
      }
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 0;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 3:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 2;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "'";
      goto LABEL_3;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        a5 = 2;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 0;
        n = 1LL;
        s2 = "'";
        goto LABEL_3;
      }
      v60 = 1;
LABEL_216:
      if ( a2 )
      {
        v14 = 0;
        v42 = 0;
        v63 = 1;
        v83 = 0LL;
        goto LABEL_142;
      }
      v63 = 1;
      v14 = 0;
      v15 = 1LL;
      a5 = 2;
      v83 = 0LL;
      v87 = 0;
      v86 = 0;
      n = 1LL;
      s2 = "'";
LABEL_3:
      v16 = v13;
      v17 = 0LL;
      v18 = a5;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(a5) = v16 != v17;
        if ( v16 == -1LL )
          LOBYTE(a5) = *(_BYTE *)(a3 + v17) != 0;
        if ( !(_BYTE)a5 )
        {
          v39 = v18;
          v13 = v16;
          v40 = v39 == 2;
          if ( !v15 && v40 && v86 )
          {
            v30 = 2;
            goto LABEL_72;
          }
          v41 = !v86 && v40;
          if ( v41 )
          {
            if ( v87 )
            {
              if ( v63 )
                return sub_406BB0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "'";
                n = 1LL;
                v86 = 0;
                v87 = v42;
                goto LABEL_3;
              }
              v41 = v87;
            }
          }
          else
          {
            v41 = !v86;
          }
          if ( s2 )
          {
            if ( v41 )
            {
              v57 = *s2;
              if ( *s2 )
              {
                v58 = &s2[-v15];
                do
                {
                  if ( v10 > v15 )
                    v9[v15] = v57;
                  v57 = v58[++v15];
                }
                while ( v57 );
              }
            }
          }
          if ( v10 > v15 )
            v9[v15] = 0;
          return v15;
        }
        v19 = (_BYTE *)(a3 + v17);
        v61 = v60 & (v18 != 2);
        if ( !v61 )
          break;
        if ( n )
        {
          if ( v16 == -1LL && n > 1 )
          {
            v75 = v18;
            v70 = v14;
            v20 = strlen((const char *)a3);
            v18 = v75;
            v14 = v70;
            v19 = (_BYTE *)(a3 + v17);
            v16 = v20;
          }
          if ( v17 + n <= v16 )
          {
            v80 = v18;
            v76 = v16;
            v71 = v14;
            v66 = v19;
            v21 = memcmp(v19, s2, n);
            v19 = v66;
            v14 = v71;
            v16 = v76;
            v18 = v80;
            if ( !v21 )
            {
              if ( !v86 )
              {
                LOBYTE(v22) = *v66;
                switch ( *v66 )
                {
                  case 0:
                    goto LABEL_87;
                  case 7:
                    LOBYTE(v22) = 97;
                    goto LABEL_83;
                  case 8:
                    v24 = 0;
                    a5 = 0;
                    LOBYTE(v22) = 98;
                    goto LABEL_29;
                  case 9:
                    goto LABEL_76;
                  case 0xA:
                    goto LABEL_68;
                  case 0xB:
                    goto LABEL_84;
                  case 0xC:
                    goto LABEL_81;
                  case 0xD:
                    goto LABEL_80;
                  case 0x20:
                    v37 = v61;
                    goto LABEL_132;
                  case 0x21:
                  case 0x22:
                  case 0x24:
                  case 0x26:
                  case 0x28:
                  case 0x29:
                  case 0x2A:
                  case 0x3B:
                  case 0x3C:
                  case 0x3D:
                  case 0x3E:
                  case 0x5B:
                  case 0x5E:
                  case 0x60:
                  case 0x7C:
                    goto LABEL_78;
                  case 0x23:
                  case 0x7E:
                    v38 = v61;
                    goto LABEL_129;
                  case 0x25:
                  case 0x2B:
                  case 0x2C:
                  case 0x2D:
                  case 0x2E:
                  case 0x2F:
                  case 0x30:
                  case 0x31:
                  case 0x32:
                  case 0x33:
                  case 0x34:
                  case 0x35:
                  case 0x36:
                  case 0x37:
                  case 0x38:
                  case 0x39:
                  case 0x3A:
                  case 0x41:
                  case 0x42:
                  case 0x43:
                  case 0x44:
                  case 0x45:
                  case 0x46:
                  case 0x47:
                  case 0x48:
                  case 0x49:
                  case 0x4A:
                  case 0x4B:
                  case 0x4C:
                  case 0x4D:
                  case 0x4E:
                  case 0x4F:
                  case 0x50:
                  case 0x51:
                  case 0x52:
                  case 0x53:
                  case 0x54:
                  case 0x55:
                  case 0x56:
                  case 0x57:
                  case 0x58:
                  case 0x59:
                  case 0x5A:
                  case 0x5D:
                  case 0x5F:
                  case 0x61:
                  case 0x62:
                  case 0x63:
                  case 0x64:
                  case 0x65:
                  case 0x66:
                  case 0x67:
                  case 0x68:
                  case 0x69:
                  case 0x6A:
                  case 0x6B:
                  case 0x6C:
                  case 0x6D:
                  case 0x6E:
                  case 0x6F:
                  case 0x70:
                  case 0x71:
                  case 0x72:
                  case 0x73:
                  case 0x74:
                  case 0x75:
                  case 0x76:
                  case 0x77:
                  case 0x78:
                  case 0x79:
                  case 0x7A:
                    v37 = v61;
                    goto LABEL_127;
                  case 0x27:
                    goto LABEL_62;
                  case 0x3F:
                    goto LABEL_58;
                  case 0x5C:
                    goto LABEL_65;
                  case 0x7B:
                  case 0x7D:
                    goto LABEL_17;
                  default:
                    goto LABEL_102;
                }
              }
LABEL_277:
              v30 = v18;
              LODWORD(v13) = v16;
              return sub_406BB0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
            }
          }
        }
        LOBYTE(v22) = *v19;
        switch ( *v19 )
        {
          case 0:
            goto LABEL_85;
          case 7:
            LOBYTE(v22) = 97;
            goto LABEL_82;
          case 8:
            LOBYTE(v22) = 98;
            goto LABEL_69;
          case 9:
LABEL_76:
            LOBYTE(v22) = 116;
            goto LABEL_69;
          case 0xA:
LABEL_68:
            LOBYTE(v22) = 110;
LABEL_69:
            v24 = 0;
            a5 = 0;
            if ( v86 )
              goto LABEL_70;
            goto LABEL_29;
          case 0xB:
LABEL_84:
            LOBYTE(v22) = 118;
            goto LABEL_82;
          case 0xC:
LABEL_81:
            LOBYTE(v22) = 102;
LABEL_82:
            if ( v86 )
            {
              v30 = v18;
              v31 = 0;
              LODWORD(v13) = v16;
              goto LABEL_71;
            }
LABEL_83:
            a5 = 0;
            goto LABEL_37;
          case 0xD:
            v61 = 0;
LABEL_80:
            LOBYTE(v22) = 13;
            v29 = 114;
            v24 = v18 == 2;
            goto LABEL_66;
          case 0x20:
            v37 = 0;
LABEL_132:
            LOBYTE(v22) = 32;
            goto LABEL_127;
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x26:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x5B:
          case 0x5E:
          case 0x60:
          case 0x7C:
            v61 = 0;
LABEL_78:
            v24 = 0;
            goto LABEL_67;
          case 0x23:
          case 0x7E:
            v38 = 0;
LABEL_129:
            if ( !v17 )
            {
              a5 = v61;
              v24 = 0;
              v61 = v38;
              goto LABEL_23;
            }
            v61 = v38;
            a5 = 0;
            break;
          case 0x25:
          case 0x2B:
          case 0x2C:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
          case 0x50:
          case 0x51:
          case 0x52:
          case 0x53:
          case 0x54:
          case 0x55:
          case 0x56:
          case 0x57:
          case 0x58:
          case 0x59:
          case 0x5A:
          case 0x5D:
          case 0x5F:
          case 0x61:
          case 0x62:
          case 0x63:
          case 0x64:
          case 0x65:
          case 0x66:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6A:
          case 0x6B:
          case 0x6C:
          case 0x6D:
          case 0x6E:
          case 0x6F:
          case 0x70:
          case 0x71:
          case 0x72:
          case 0x73:
          case 0x74:
          case 0x75:
          case 0x76:
          case 0x77:
          case 0x78:
          case 0x79:
          case 0x7A:
            v37 = 0;
LABEL_127:
            a5 = v61;
            v61 = v37;
            LOBYTE(v25) = 0;
            goto LABEL_25;
          case 0x27:
            v61 = 0;
            goto LABEL_62;
          case 0x3F:
            v61 = 0;
            goto LABEL_58;
          case 0x5C:
            v61 = 0;
            goto LABEL_65;
          case 0x7B:
          case 0x7D:
            v61 = 0;
            goto LABEL_17;
          default:
            v61 = 0;
            goto LABEL_102;
        }
LABEL_24:
        LOBYTE(v25) = 0;
LABEL_25:
        if ( a7 && ((*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v22 >> 5)) >> v22) & 1) != 0 )
        {
          v24 = v18 == 2;
LABEL_28:
          if ( v86 )
          {
LABEL_70:
            v30 = v18;
            v31 = v24;
            LODWORD(v13) = v16;
LABEL_71:
            v60 &= v31;
            goto LABEL_72;
          }
LABEL_29:
          v26 = v14 ^ 1;
          if ( (v24 & ((unsigned __int8)v14 ^ 1)) != 0 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v15 + 1 < v10 )
              v9[v15 + 1] = 36;
            if ( v15 + 2 < v10 )
              v9[v15 + 2] = 39;
            v15 += 3LL;
            LOBYTE(v26) = v24 & (v14 ^ 1);
            v14 = v26;
          }
LABEL_37:
          if ( v10 > v15 )
            v9[v15] = 92;
          ++v15;
          ++v17;
          goto LABEL_40;
        }
LABEL_49:
        v24 = v18 == 2;
        if ( v61 )
          goto LABEL_28;
        ++v17;
        LOBYTE(v25) = v14 & ((unsigned __int8)v25 ^ 1);
LABEL_51:
        if ( (_BYTE)v25 )
        {
          if ( v10 > v15 )
            v9[v15] = 39;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 39;
          v15 += 2LL;
          v14 = 0;
        }
LABEL_40:
        if ( v15 < v10 )
          v9[v15] = v22;
        v27 = v63;
        ++v15;
        if ( !(_BYTE)a5 )
          v27 = 0;
        v63 = v27;
      }
      LOBYTE(v22) = *v19;
      switch ( *v19 )
      {
        case 0:
          if ( !v60 )
          {
            if ( (a6 & 1) == 0 )
            {
              v61 = 0;
              v24 = v18 == 2;
              a5 = 0;
              LOBYTE(v22) = 0;
              goto LABEL_23;
            }
            ++v17;
            goto LABEL_4;
          }
LABEL_85:
          if ( v86 )
          {
            v30 = v18;
            LODWORD(v13) = v16;
            v60 = v30 == 2;
            goto LABEL_72;
          }
          v61 = 0;
LABEL_87:
          v33 = v18 == 2;
          LODWORD(v25) = v14 ^ 1;
          LOBYTE(v25) = (v18 == 2) & (v14 ^ 1);
          if ( (_BYTE)v25 )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 36;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v34 = v15 + 3;
            if ( v10 <= v15 + 3 )
            {
              v15 += 4LL;
              v14 = (int)v25;
              a5 = 0;
              LOBYTE(v22) = 48;
              goto LABEL_49;
            }
            goto LABEL_95;
          }
          v34 = v15;
          if ( v10 > v15 )
          {
            LODWORD(v25) = v14;
LABEL_95:
            v9[v34] = 92;
            v14 = (int)v25;
          }
          v15 = v34 + 1;
          if ( v18 == 2 )
          {
            LOBYTE(v25) = a5;
            LOBYTE(v22) = 48;
            a5 = 0;
            goto LABEL_49;
          }
          LOBYTE(v22) = 48;
          if ( v17 + 1 < v16 && (unsigned __int8)(*(_BYTE *)(a3 + v17 + 1) - 48) <= 9u )
          {
            if ( v10 > v15 )
              v9[v15] = 48;
            if ( v10 > v34 + 2 )
              v9[v34 + 2] = 48;
            v15 = v34 + 3;
            LOBYTE(v22) = 48;
          }
LABEL_99:
          LOBYTE(v25) = a5;
          a5 = 0;
          if ( v33 | v60 ^ 1 )
            goto LABEL_49;
          goto LABEL_25;
        case 7:
          LOBYTE(v22) = 7;
          v29 = 97;
          v24 = v18 == 2;
          goto LABEL_66;
        case 8:
          LOBYTE(v22) = 8;
          v29 = 98;
          v24 = v18 == 2;
          goto LABEL_66;
        case 9:
          LOBYTE(v22) = 9;
          v29 = 116;
          goto LABEL_108;
        case 0xA:
          LOBYTE(v22) = 10;
          v29 = 110;
          goto LABEL_108;
        case 0xB:
          LOBYTE(v22) = 11;
          v29 = 118;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xC:
          LOBYTE(v22) = 12;
          v29 = 102;
          v24 = v18 == 2;
          goto LABEL_66;
        case 0xD:
          LOBYTE(v22) = 13;
          v29 = 114;
LABEL_108:
          v24 = v18 == 2;
          v61 = v18 == 2 && v86;
          if ( v61 )
            goto LABEL_109;
          goto LABEL_66;
        case 0x20:
          LOBYTE(v22) = 32;
          v24 = v18 == 2;
          goto LABEL_21;
        case 0x21:
        case 0x22:
        case 0x24:
        case 0x26:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x5B:
        case 0x5E:
        case 0x60:
        case 0x7C:
          v24 = v18 == 2;
          a5 = 0;
          goto LABEL_21;
        case 0x23:
        case 0x7E:
          v24 = v18 == 2;
          goto LABEL_20;
        case 0x25:
        case 0x2B:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5D:
        case 0x5F:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6E:
        case 0x6F:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7A:
          goto LABEL_105;
        case 0x27:
LABEL_62:
          if ( v18 != 2 )
          {
            v87 = a5;
            v24 = 0;
            LOBYTE(v22) = 39;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_288;
          if ( !v10 || (v28 = 0LL, v83) )
          {
            if ( v10 > v15 )
              v9[v15] = 39;
            if ( v10 > v15 + 1 )
              v9[v15 + 1] = 92;
            v28 = v10;
            if ( v10 > v15 + 2 )
              v9[v15 + 2] = 39;
            v10 = v83;
          }
          v87 = a5;
          v15 += 3LL;
          LOBYTE(v25) = 0;
          v14 = 0;
          v83 = v10;
          LOBYTE(v22) = 39;
          v10 = v28;
          goto LABEL_49;
        case 0x3F:
LABEL_58:
          if ( v18 == 2 )
          {
            if ( v86 )
            {
LABEL_288:
              v30 = 2;
              LODWORD(v13) = v16;
              goto LABEL_72;
            }
            a5 = 0;
            LOBYTE(v25) = 0;
            LOBYTE(v22) = 63;
            goto LABEL_49;
          }
          if ( v18 != 5 )
          {
            LOBYTE(v22) = 63;
            v24 = v18 == 2;
            a5 = 0;
            goto LABEL_23;
          }
          if ( (a6 & 4) == 0
            || v17 + 2 >= v16
            || *(_BYTE *)(a3 + v17 + 1) != 63
            || (v22 = *(unsigned __int8 *)(a3 + v17 + 2), (unsigned __int8)v22 > 0x3Eu)
            || (v53 = 0x7000A38200000000LL, !_bittest64(&v53, v22)) )
          {
            v24 = 0;
            a5 = 0;
            LOBYTE(v22) = 63;
            goto LABEL_23;
          }
          if ( v86 )
            goto LABEL_277;
          if ( v10 > v15 )
            v9[v15] = 63;
          if ( v10 > v15 + 1 )
            v9[v15 + 1] = 34;
          if ( v10 > v15 + 2 )
            v9[v15 + 2] = 34;
          if ( v10 > v15 + 3 )
            v9[v15 + 3] = 63;
          v15 += 4LL;
          v33 = 0;
          LOBYTE(a5) = 0;
          v17 += 2LL;
          goto LABEL_99;
        case 0x5C:
          if ( v18 == 2 )
          {
            if ( v86 )
              goto LABEL_288;
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            LOBYTE(v22) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LOBYTE(v22) = 92;
          v29 = 92;
          v24 = (n != 0) & v86 & v60;
          if ( v24 )
          {
            ++v17;
            LOBYTE(v25) = v14;
            a5 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v60 )
          {
LABEL_67:
            a5 = 0;
            goto LABEL_23;
          }
          LOBYTE(v22) = v29;
          a5 = 0;
          goto LABEL_28;
        case 0x7B:
        case 0x7D:
LABEL_17:
          v23 = v16 != 1;
          if ( v16 == -1LL )
            v23 = *(_BYTE *)(a3 + 1) != 0;
          v24 = v18 == 2;
          if ( v23 )
            goto LABEL_67;
LABEL_20:
          if ( v17 )
            goto LABEL_67;
LABEL_21:
          if ( !v86 || !v24 )
            goto LABEL_23;
LABEL_109:
          LODWORD(v13) = v16;
          v30 = 2;
          goto LABEL_72;
        default:
LABEL_102:
          if ( mb_cur_max == 1 )
          {
            v77 = v18;
            v72 = v16;
            v67 = v14;
            v25 = __ctype_b_loc();
            v14 = v67;
            v16 = v72;
            v18 = v77;
            v35 = 1LL;
            LODWORD(v25) = (*v25)[(unsigned __int8)v22];
            LOWORD(v25) = (unsigned __int16)v25 & 0x4000;
            LOBYTE(a5) = (_WORD)v25 != 0;
            LOBYTE(v36) = v60 & ((_WORD)v25 == 0);
LABEL_104:
            if ( (_BYTE)v36 )
            {
              v36 = v60;
              LOBYTE(a5) = 0;
LABEL_178:
              v48 = 0;
              v49 = v17 + v35;
              v50 = v61;
              while ( 1 )
              {
                if ( (_BYTE)v36 )
                {
                  if ( v86 )
                  {
                    v30 = v18;
                    v60 = v18 == 2;
                    LODWORD(v13) = v16;
                    goto LABEL_72;
                  }
                  LOBYTE(v25) = (v14 ^ 1) & (v18 == 2);
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 36;
                    if ( v10 > v15 + 2 )
                      v9[v15 + 2] = 39;
                    v15 += 3LL;
                    v14 = (int)v25;
                  }
                  if ( v10 > v15 )
                    v9[v15] = 92;
                  if ( v10 > v15 + 1 )
                    v9[v15 + 1] = ((unsigned __int8)v22 >> 6) + 48;
                  LODWORD(v25) = v15 + 2;
                  if ( v10 > v15 + 2 )
                  {
                    LODWORD(v25) = (((unsigned __int8)v22 >> 3) & 7) + 48;
                    v9[v15 + 2] = (_BYTE)v25;
                  }
                  ++v17;
                  v15 += 3LL;
                  LOBYTE(v22) = (v22 & 7) + 48;
                  if ( v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_40;
                  }
                  v48 = v36;
                }
                else
                {
                  LODWORD(v25) = v14 & (v48 ^ 1);
                  if ( v50 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 92;
                    ++v15;
                  }
                  if ( ++v17 >= v49 )
                  {
                    a5 = (unsigned __int8)a5;
                    goto LABEL_51;
                  }
                  if ( (_BYTE)v25 )
                  {
                    if ( v10 > v15 )
                      v9[v15] = 39;
                    LODWORD(v25) = v15 + 1;
                    if ( v10 > v15 + 1 )
                      v9[v15 + 1] = 39;
                    v15 += 2LL;
                    v50 = 0;
                    v14 = 0;
                  }
                  else
                  {
                    v50 = 0;
                  }
                }
                if ( v10 > v15 )
                  v9[v15] = v22;
                LOBYTE(v22) = *(_BYTE *)(a3 + v17);
                ++v15;
              }
            }
LABEL_105:
            v24 = v18 == 2;
LABEL_23:
            LOBYTE(v25) = v86 | (v24 | v60 ^ 1) ^ 1;
            if ( !(_BYTE)v25 )
              goto LABEL_49;
            goto LABEL_24;
          }
          ps = 0LL;
          if ( v16 == -1LL )
          {
            v78 = v18;
            v73 = v14;
            v68 = v19;
            v43 = strlen((const char *)a3);
            v18 = v78;
            LOBYTE(v14) = v73;
            v19 = v68;
            v16 = v43;
          }
          v89 = v15;
          v90 = v19;
          v44 = 0LL;
          v88 = v14;
          v79 = v9;
          v81 = v10;
          v69 = v16;
          v74 = v18;
          break;
      }
      while ( 2 )
      {
        v45 = (char *)v44 + v17;
        v25 = (const unsigned __int16 **)sub_40A580((wchar_t *)&wc, (char *)v44 + v17 + a3);
        v46 = v25;
        if ( !v25 )
        {
LABEL_245:
          v35 = (unsigned __int64)v44;
          v15 = v89;
          v14 = v88;
          v9 = v79;
          v36 = a5 ^ 1;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          LOBYTE(v36) = v60 & (a5 ^ 1);
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-1LL )
        {
          v35 = (unsigned __int64)v44;
          v15 = v89;
          a5 = 0;
          v14 = v88;
          v9 = v79;
          v10 = v81;
          v16 = v69;
          v18 = v74;
          v36 = v60;
          goto LABEL_246;
        }
        if ( v25 == (const unsigned __int16 **)-2LL )
        {
          v16 = v69;
          v54 = (char *)v44 + v17;
          v55 = (char *)v44 + v17 + a3;
          v25 = v44;
          v35 = (unsigned __int64)v44;
          v14 = v88;
          v15 = v89;
          v9 = v79;
          v10 = v81;
          v18 = v74;
          if ( (unsigned __int64)v54 < v69 && *v55 )
          {
            do
              v25 = (const unsigned __int16 **)((char *)v25 + 1);
            while ( (unsigned __int64)v25 + v17 < v69 && *((_BYTE *)v25 + (_QWORD)v90) );
            v35 = (unsigned __int64)v25;
          }
          v36 = v60;
          a5 = 0;
LABEL_246:
          if ( v35 > 1 )
            goto LABEL_178;
          goto LABEL_104;
        }
        if ( v74 != 2 || !v86 || v25 == (const unsigned __int16 **)1 )
        {
LABEL_152:
          if ( !iswprint(wc) )
            a5 = 0;
          v44 = (const unsigned __int16 **)((char *)v44 + (_QWORD)v46);
          LODWORD(v25) = mbsinit(&ps);
          if ( (_DWORD)v25 )
            goto LABEL_245;
          continue;
        }
        break;
      }
      v47 = &v45[a3 + 1];
      while ( (unsigned __int8)(*v47 - 91) > 0x21u || ((1LL << (*v47 - 91)) & 0x20000002BLL) == 0 )
      {
        if ( (char *)v46 + a3 + (_QWORD)v45 == ++v47 )
          goto LABEL_152;
      }
      LODWORD(v9) = (_DWORD)v79;
      LODWORD(v10) = v81;
      v30 = 2;
      LODWORD(v13) = v69;
LABEL_72:
      if ( v60 )
        v30 = 4;
      return sub_406BB0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
    case 5:
      if ( v12 )
      {
        v63 = 1;
        v14 = 0;
        v15 = 0LL;
        v87 = 0;
        v83 = 0LL;
        v86 = 1;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v14 = 0;
          v63 = 1;
          v87 = 0;
          v83 = 0LL;
        }
        else
        {
          v83 = 0LL;
          v14 = 0;
          v63 = 1;
          v87 = 0;
        }
        v86 = 0;
        v15 = 1LL;
        v60 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 6:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      a5 = 5;
      v87 = 0;
      v83 = 0LL;
      v86 = 1;
      v60 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v63 = 1;
      v14 = 0;
      v15 = 0LL;
      v87 = 0;
      v83 = 0LL;
      v86 = 0;
      v60 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_406AB0("`", a5);
        v51 = sub_406AB0("'", a5);
        v13 = a4;
        a9 = v51;
      }
      v15 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v15] )
        {
          if ( a2 > v15 )
            a1[v15] = i;
          ++v15;
        }
      }
      v62 = v13;
      v52 = strlen(a9);
      v63 = 1;
      v14 = 0;
      v13 = v62;
      n = v52;
      v87 = 0;
      s2 = a9;
      v83 = 0LL;
      v60 = 1;
      goto LABEL_3;
    default:
      abort();
  }
}

_BYTE *__fastcall sub_407DE0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_614330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408F10();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_614320 )
    {
      v7 = (__m128i *)sub_408D20(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      ptr = (void *)sub_408D20(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_614330], 0, 16LL * (a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_406BB0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6146A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408CC0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406BB0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

_BYTE *__fastcall sub_407DE0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  int v15; // r8d
  unsigned __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+18h] [rbp-40h]
  int v21; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v20 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_614330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_408F10();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_614320 )
    {
      v7 = (__m128i *)sub_408D20(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_614320);
    }
    else
    {
      ptr = (void *)sub_408D20(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_614330], 0, 16LL * (a1 + 1 - dword_614330));
    dword_614330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v21 = *(_DWORD *)(a4 + 4) | 1;
  v18 = *v10;
  v12 = sub_406BB0(v11, *v10, a2, a3, *(_DWORD *)a4, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v18 <= v12 )
  {
    v13 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6146A0 )
    {
      v19 = v12 + 1;
      free(v11);
      v13 = v19;
    }
    v14 = (_BYTE *)sub_408CC0(v13);
    v15 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v14;
    v11 = v14;
    sub_406BB0(v14, v13, a2, a3, v15, v21, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v20;
  return v11;
}

__int64 __fastcall sub_407F80(__int128 *a1)
{
  __int128 *v1; // rbx
  int *v2; // rax
  int v3; // r12d
  int *v4; // rbp
  __int64 result; // rax

  v1 = a1;
  v2 = __errno_location();
  v3 = *v2;
  v4 = v2;
  if ( !a1 )
    v1 = &xmmword_6147A0;
  result = sub_408EC0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_408070(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6147A0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_406BB0(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_4080F0(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_6147A0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_406BB0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_408CC0(v11 + 1);
  sub_406BB0(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_4081F0()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_614330 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_614330 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6146A0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_614320 = 256LL;
    *((_QWORD *)&xmmword_614320 + 1) = &unk_6146A0;
  }
  if ( v0 != &xmmword_614320 )
  {
    free(v0);
    ptr = &xmmword_614320;
  }
  dword_614330 = 1;
}

_BYTE *__fastcall sub_408300(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408300(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v4[1] = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408370(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_407DE0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_408370(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v5[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+8h] [rbp-40h]
  __int64 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v5[0] = a2;
  v5[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_407DE0(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4083E0(int a1, __int64 a2)
{
  return sub_408300(0, a1, a2);
}

_BYTE *__fastcall sub_408400(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_6147D0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6147A0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6147B0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6147C0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_407DE0(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_408480(__int64 a1)
{
  return sub_408400(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4084B0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4084B0(int a1, int a2, __int64 a3)
{
  int v4[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h]
  __int64 v6; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  if ( a2 == 10 )
    abort();
  v4[0] = a2;
  v5 = 0x400000000000000LL;
  v4[1] = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  return sub_407DE0(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_408520(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6147A0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6147B0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6147C0);
  v8 = qword_6147D0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_407DE0(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_408610(int a1, __int64 a2)
{
  return sub_407DE0(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

_BYTE *__fastcall sub_408630(__int64 a1)
{
  return sub_407DE0(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6142E0);
}

void __fastcall sub_408650(int status, int errnum, char *fname, unsigned int lineno, __int64 a5, __int64 a6)
{
  const char *v8; // rax
  char *v9; // rbx
  char *v10; // rbx
  int *v11; // rax

  v8 = (const char *)sub_4094C0(a5, a6);
  if ( !v8 )
  {
    v10 = dcgettext(0LL, "unable to display error message", 5);
    v11 = __errno_location();
    error(0, *v11, v10);
    abort();
  }
  v9 = (char *)v8;
  if ( fname )
    error_at_line(status, errnum, fname, lineno, "%s", v8);
  else
    error(status, errnum, "%s", v8);
  free(v9);
}

void __fastcall sub_408710(int a1, int a2, __int64 a3, __int64 a4)
{
  sub_408650(a1, a2, 0LL, 0, a3, a4);
}

__int64 __fastcall sub_408720(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_408720(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  const char *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  __int64 v29; // r12
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  char *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r12
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // r12
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  char *v46; // rax
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rbx
  char *v53; // rax
  __int64 v54; // r8
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+8h] [rbp-50h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+10h] [rbp-48h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2, a3, a4);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3, a4);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8, 2017LL);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v27 = *a5;
      v28 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v28, v27);
    case 2LL:
      v29 = a5[1];
      v30 = *a5;
      v31 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v31, v30, v29);
    case 3LL:
      v32 = a5[2];
      v33 = a5[1];
      v34 = *a5;
      v35 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v35, v34, v33, v32);
    case 4LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v36 = a5[3];
      v37 = a5[2];
      v38 = a5[1];
      v39 = *a5;
      v40 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v40, v39, v38, v37, v36);
      return v55;
    case 6LL:
      v41 = a5[5];
      v42 = a5[4];
      v43 = a5[3];
      v58 = a5[1];
      v44 = a5[2];
      v45 = *a5;
      v46 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v46, v45, v58, v44, v43, v42, v41);
    case 7LL:
      v47 = a5[6];
      v48 = a5[5];
      v49 = a5[4];
      v50 = a5[3];
      v51 = a5[1];
      v62 = a5[2];
      v52 = *a5;
      v59 = v51;
      v53 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v53, v52, v59, v62, v50, v49, v48, v47);
    case 8LL:
      v10 = a5[2];
      v11 = a5[1];
      v12 = a5[6];
      v13 = a5[5];
      v14 = a5[4];
      v63 = a5[7];
      v15 = a5[3];
      v16 = *a5;
      v56 = v10;
      v60 = v11;
      v17 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16, v60, v56, v15, v14, v13, v12, v63);
    case 9LL:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v20 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v20;
      goto LABEL_8;
    default:
      v19 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v54 = a5[1];
      v21 = a5[6];
      v22 = a5[5];
      v65 = a5[8];
      v23 = a5[4];
      v24 = a5[3];
      v64 = a5[7];
      v57 = a5[2];
      v25 = *a5;
      v61 = v54;
LABEL_8:
      v26 = dcgettext(0LL, v19, 5);
      return __fprintf_chk(stream, 1LL, v26, v25, v61, v57, v24, v23, v22, v21, v64, v65);
  }
}

__int64 __fastcall sub_408B20(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
{
  __int64 i; // r9
  __int64 *v6; // r10
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 *v9; // r10
  __int64 v10; // rax
  __int64 v12[11]; // [rsp+0h] [rbp-58h] BYREF

  for ( i = 0LL; i != 10; ++i )
  {
    v8 = *a5;
    if ( (unsigned int)*a5 <= 0x2F )
    {
      v6 = (__int64 *)(*((_QWORD *)a5 + 2) + v8);
      *a5 = v8 + 8;
      v7 = *v6;
      v12[i] = *v6;
      if ( !v7 )
        return sub_408720(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_408720(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_408B80(
        FILE *a1,
        const char *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  char *v7; // r10
  unsigned int v8; // r8d
  __int64 i; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v15[17]; // [rsp+20h] [rbp-88h] BYREF

  v15[14] = a5;
  v7 = &a7;
  v8 = 32;
  v15[15] = a6;
  for ( i = 0LL; i != 10; ++i )
  {
    if ( v8 <= 0x2F )
    {
      v10 = v8;
      v8 += 8;
      v11 = *(__int64 *)((char *)&v15[10] + v10);
      v15[i] = v11;
      if ( !v11 )
        return sub_408720(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_408720(a1, a2, a3, a4, v15, i);
}

int sub_408C40()
{
  char *v0; // rax
  __int64 v1; // rcx
  char *v2; // rax
  FILE *v3; // rbx
  char *v4; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org", v1);
  v2 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v2, &unk_40DCA1, "https://www.gnu.org/software/coreutils/");
  v3 = stdout;
  v4 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v4, v3);
}

void *__fastcall sub_408CC0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_408F10();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_408D10(size_t a1)
{
  return sub_408CC0(a1);
}

void *__fastcall sub_408D20(void *a1, size_t a2)
{
  void *result; // rax

  if ( !a2 && a1 )
  {
    free(a1);
    return 0LL;
  }
  else
  {
    result = realloc(a1, a2);
    if ( !result )
    {
      if ( a2 )
        sub_408F10();
    }
  }
  return result;
}

void *__fastcall sub_408E70(size_t n)
{
  void *v1; // rax

  v1 = sub_408CC0(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_408E90(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_408F10(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_408EC0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_408CC0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_408EF0(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_408EC0(src, v1 + 1);
}

void __noreturn sub_408F10()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

__int64 __fastcall sub_408F50(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
{
  char **p_endptr; // r15
  int *v8; // rax
  int *v9; // r12
  unsigned __int8 v10; // bl
  const unsigned __int16 *v11; // rsi
  char *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r12d
  char *v17; // rax
  char *v18; // r8
  __int64 v19; // rax
  char *v20; // rax
  char v21; // al
  int v22; // esi
  unsigned __int64 v23; // rdx
  char *v24; // r8
  unsigned __int64 v25; // kr30_8
  char *v26; // rax
  int v27; // edi
  int v28; // r9d
  bool v29; // of
  int v30; // edi
  int v31; // edi
  int v32; // edi
  int v33; // edi
  char *basea; // [rsp+0h] [rbp-58h]
  char *baseb; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  char *endptr; // [rsp+18h] [rbp-40h] BYREF

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  p_endptr = a2;
  if ( !a2 )
    p_endptr = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( (v11[v10] & 0x2000) != 0 )
    v10 = *++v12;
  if ( v10 == 45 )
    return 4;
  v13 = __strtoul_internal(nptr, p_endptr, a3, 0);
  if ( *p_endptr == nptr )
  {
    basea = *p_endptr;
    if ( a5 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(a5, (char)v15);
        v18 = basea;
        if ( v17 )
          goto LABEL_20;
      }
    }
    return 4;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( a5 )
  {
    v15 = (unsigned __int8)**p_endptr;
    if ( (_BYTE)v15 )
    {
      baseb = *p_endptr;
      v26 = strchr(a5, (char)v15);
      v18 = baseb;
      if ( !v26 )
      {
LABEL_40:
        *a4 = v13;
        v14 |= 2u;
        return v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 0x814400308945LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(a5, 48), v18 = v37, !v20) )
      {
LABEL_27:
        v22 = 1;
        v23 = 1024LL;
        goto LABEL_28;
      }
      v21 = v37[1];
      if ( v21 != 68 )
      {
        if ( v21 == 105 )
        {
          v23 = 1024LL;
          v22 = 2 * (v37[2] == 66) + 1;
LABEL_28:
          switch ( (char)v15 )
          {
            case 'B':
              if ( (unsigned __int64)v13 >> 54 )
                goto LABEL_38;
              v13 <<= 10;
              break;
            case 'E':
              goto LABEL_71;
            case 'G':
            case 'g':
              goto LABEL_77;
            case 'K':
            case 'k':
              goto LABEL_37;
            case 'M':
            case 'm':
              goto LABEL_30;
            case 'P':
              goto LABEL_65;
            case 'T':
            case 't':
              goto LABEL_59;
            case 'Y':
              goto LABEL_53;
            case 'Z':
              goto LABEL_47;
            case 'b':
              goto LABEL_44;
            case 'c':
              break;
            case 'w':
              if ( v13 < 0 )
                goto LABEL_38;
              v13 *= 2LL;
              break;
            default:
              goto LABEL_40;
          }
LABEL_33:
          v24 = &v18[v22];
          *p_endptr = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
        if ( v21 != 66 )
        {
          switch ( (char)v15 )
          {
            case 'E':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_71:
              v33 = 6;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 'F':
            case 'H':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
            case 'S':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case '[':
            case '\\':
            case ']':
            case '^':
            case '_':
            case '`':
            case 'a':
            case 'd':
            case 'e':
            case 'f':
            case 'h':
            case 'i':
            case 'j':
            case 'l':
            case 'n':
            case 'o':
            case 'p':
            case 'q':
            case 'r':
            case 's':
              goto LABEL_40;
            case 'G':
            case 'g':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_77:
              if ( is_mul_ok((int)v23, v13)
                && is_mul_ok((int)v23, (int)v23 * v13)
                && is_mul_ok((int)v23, (int)v23 * (int)v23 * v13) )
              {
                v13 *= (int)v23 * (int)v23 * (__int64)(int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              goto LABEL_33;
            case 'K':
            case 'k':
              v22 = 1;
              v23 = 1024LL;
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( is_mul_ok(v23, v25) )
                goto LABEL_33;
              goto LABEL_38;
            case 'M':
            case 'm':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_30:
              if ( !is_mul_ok((int)v23, v13) || !is_mul_ok((int)v23, (int)v23 * v13) )
                goto LABEL_38;
              v13 *= (int)v23 * (__int64)(int)v23;
              break;
            case 'P':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_65:
              v32 = 5;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 'T':
            case 't':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_59:
              v31 = 4;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 'Y':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_53:
              v30 = 8;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v30;
              }
              while ( v30 );
              goto LABEL_51;
            case 'Z':
              v22 = 1;
              LODWORD(v23) = 1024;
LABEL_47:
              v27 = 7;
              v28 = 0;
              do
              {
                v29 = ((unsigned __int64)(int)v23 * (unsigned __int128)(unsigned __int64)v13) >> 64 != 0;
                v13 *= (int)v23;
                if ( v29 )
                {
                  v28 = 1;
                  v13 = -1LL;
                }
                --v27;
              }
              while ( v27 );
LABEL_51:
              v14 |= v28;
              break;
            case 'b':
              v22 = 1;
LABEL_44:
              if ( (unsigned __int64)v13 >> 55 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 9;
              }
              break;
            case 'c':
              v22 = 1;
              goto LABEL_33;
            default:
              goto LABEL_27;
          }
          goto LABEL_33;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *a4 = v13;
  return v14;
}

_BYTE *__fastcall sub_409390(__int64 a1, __m128i *a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  const char **v6; // rdx
  size_t v7; // rax
  bool v8; // cf
  unsigned __int32 v9; // eax
  _BYTE *v10; // rbp
  _BYTE *v11; // rbx
  const char **v12; // rdx
  const char *v13; // r15
  size_t v14; // r14
  unsigned __int32 v15; // eax
  __m128i v17; // [rsp+8h] [rbp-50h]

  v17 = _mm_loadu_si128(a2);
  v2 = a2[1].m128i_i64[0];
  if ( a1 )
  {
    v3 = a1;
    v4 = a1;
    v5 = 0LL;
    do
    {
      v9 = v17.m128i_i32[0];
      if ( v17.m128i_i32[0] <= 0x2Fu )
      {
        v17.m128i_i32[0] += 8;
        v6 = (const char **)(v2 + v9);
      }
      else
      {
        v6 = (const char **)v17.m128i_i64[1];
        v17.m128i_i64[1] += 8LL;
      }
      v7 = strlen(*v6);
      v8 = __CFADD__(v7, v5);
      v5 += v7;
      if ( v8 )
        v5 = -1LL;
      --v4;
    }
    while ( v4 );
    if ( v5 > 0x7FFFFFFF )
    {
      v10 = 0LL;
      *__errno_location() = 75;
      return v10;
    }
    v10 = sub_408CC0(v5 + 1);
    v11 = v10;
    do
    {
      v15 = a2->m128i_i32[0];
      if ( a2->m128i_i32[0] <= 0x2Fu )
      {
        v12 = (const char **)(a2[1].m128i_i64[0] + v15);
        a2->m128i_i32[0] = v15 + 8;
      }
      else
      {
        v12 = (const char **)a2->m128i_i64[1];
        a2->m128i_i64[1] = (__int64)(v12 + 1);
      }
      v13 = *v12;
      v14 = strlen(*v12);
      memcpy(v11, v13, v14);
      v11 += v14;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    v11 = sub_408CC0(1uLL);
    v10 = v11;
  }
  *v11 = 0;
  return v10;
}

_BYTE *__fastcall sub_4094C0(_BYTE *a1, __m128i *a2)
{
  __int64 v2; // rax
  char v3; // cl
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  if ( !*a1 )
  {
    v2 = 0LL;
    return sub_409390(v2, a2);
  }
  if ( *a1 == 37 && a1[1] == 115 )
  {
    v2 = 0LL;
    do
    {
      ++v2;
      v3 = a1[2 * v2];
      if ( !v3 )
        return sub_409390(v2, a2);
    }
    while ( v3 == 37 && a1[2 * v2 + 1] == 115 );
  }
  if ( (int)sub_40A600(&v5, a1, a2) >= 0 )
    return (_BYTE *)v5;
  if ( *__errno_location() == 12 )
    sub_408F10();
  return 0LL;
}

int __fastcall sub_409550(FILE *stream)
{
  int *v1; // rax
  int v2; // r12d
  int *v3; // rbp
  int result; // eax
  int v5; // eax

  if ( fileno(stream) < 0 )
    return fclose(stream);
  if ( __freading(stream) )
  {
    v5 = fileno(stream);
    if ( lseek(v5, 0LL, 1) == -1 )
      return fclose(stream);
  }
  if ( !(unsigned int)sub_409710(stream) )
    return fclose(stream);
  v1 = __errno_location();
  v2 = *v1;
  v3 = v1;
  result = fclose(stream);
  if ( v2 )
  {
    *v3 = v2;
    return -1;
  }
  return result;
}

__int64 __fastcall sub_4095D0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // eax
  int *v9; // rax
  int v10; // edi
  int v11; // r12d
  int *v12; // rbp
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+30h] [rbp-38h]

  v16 = a3;
  if ( a2 == 1030 )
  {
    if ( dword_6147D8 < 0 )
    {
      v6 = sub_4095D0(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_6147D8 == -1 )
      {
LABEL_8:
        v8 = fcntl(v6, 1);
        if ( v8 < 0 || fcntl(v6, 2, v8 | 1u) == -1 )
        {
          v9 = __errno_location();
          v10 = v6;
          v6 = -1;
          v11 = *v9;
          v12 = v9;
          close(v10);
          *v12 = v11;
        }
      }
    }
    else
    {
      v6 = fcntl(a1, 1030, (unsigned int)a3);
      if ( v6 < 0 && *__errno_location() == 22 )
      {
        v6 = sub_4095D0(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_6147D8 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_6147D8 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_409710(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_409750(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_409750(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax
  int v5; // eax

  if ( a1->_IO_read_end == a1->_IO_read_ptr && a1->_IO_write_ptr == a1->_IO_write_base && !a1->_IO_save_base )
  {
    v5 = fileno(a1);
    v3 = lseek(v5, a2, a3);
    if ( v3 != -1 )
    {
      a1->_flags &= ~0x10u;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  else
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  return v3;
}

__int64 __fastcall sub_4097B0(__int64 a1, int *a2)
{
  __int64 v2; // r11
  int v3; // r12d
  int v4; // ebp
  __int64 v5; // rbx
  int v6; // r9d
  int v7; // r10d
  int v8; // r8d
  int v9; // r14d
  int v10; // edx
  __int64 *v11; // rax
  __int64 *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  v2 = a1 + 8;
  v3 = a2[11];
  v4 = *a2;
  v5 = a2[12];
  v6 = v3;
  v7 = *a2;
  v8 = a2[12];
LABEL_2:
  if ( v7 > v8 )
  {
    while ( v6 < v8 )
    {
      v9 = v7 - v8;
      v10 = v8 - v6;
      if ( v7 - v8 <= v8 - v6 )
      {
        v16 = (__int64 *)(a1 + 8LL * v6);
        v17 = v5 - v6;
        do
        {
          v18 = *v16;
          *v16 = v16[v17];
          v16[v17] = v18;
          ++v16;
        }
        while ( v16 != (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v9 - 1))) );
        v6 += v9;
        goto LABEL_2;
      }
      v7 -= v10;
      v11 = (__int64 *)(a1 + 8LL * v6);
      v12 = (__int64 *)(v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1)));
      v13 = v7 - (__int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  a2[12] = v4;
  result = (unsigned int)(v4 - v8);
  a2[11] = result + v3;
  return result;
}

__int64 __fastcall sub_409890(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        const char *a9)
{
  const char *v9; // r14
  char *v10; // rbp
  size_t v11; // r13
  char **v12; // rbx
  __int64 v13; // r12
  const char *v14; // r15
  const char *v15; // rdi
  __int64 v16; // r15
  char **v17; // rbp
  char *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  char *v23; // rdx
  __int64 v24; // rbx
  char *v25; // rax
  __int64 v26; // rbx
  char *v27; // rax
  const char *v28; // r12
  __int64 v29; // rbp
  char *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rbp
  char *v33; // rax
  FILE *v34; // rdi
  const char **v35; // rbx
  _BYTE *v36; // rbp
  __int64 v37; // r12
  const char *v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v48; // [rsp+38h] [rbp-50h]
  char v49; // [rsp+3Fh] [rbp-49h]
  int v51; // [rsp+44h] [rbp-44h]
  int v52; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v49 = *v9;
  if ( *v9 == 61 || !*v9 )
  {
    v11 = 0LL;
  }
  else
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v49), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24, a9, v9);
      }
      *((_QWORD *)a7 + 4) = 0LL;
      ++*a7;
      a7[2] = 0;
      return 63LL;
    }
    return result;
  }
  while ( 1 )
  {
    if ( !strncmp(v14, v9, v11) && strlen(v14) == v11 )
      goto LABEL_31;
    v12 += 4;
    v14 = *v12;
    if ( !*v12 )
      break;
    v13 = (int)v13 + 1;
  }
  v12 = 0LL;
  v51 = -1;
  v15 = s1;
  v16 = 0LL;
  v48 = 0;
  v52 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = a4;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (a6
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v48 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v52 = 1;
            ptr[v51] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v48 = 1;
        }
        else
        {
          v48 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v51 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v48 )
  {
    if ( a8 )
    {
      if ( v48 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26, a9, v9);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v31 = *((_QWORD *)a7 + 4);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32, a9, v31);
        v34 = stderr;
        v35 = (const char **)a4;
        v36 = ptr;
        v37 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            __fprintf_chk(v34, 1LL, " '%s%s'", a9, *v35);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v52 )
      free(ptr);
    *((_QWORD *)a7 + 4) = &v9[strlen(v9)];
    ++*a7;
    a7[2] = 0;
    return 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v51;
LABEL_31:
    v20 = *a7;
    *((_QWORD *)a7 + 4) = 0LL;
    v21 = v20 + 1;
    *a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *((_QWORD *)a7 + 2) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29, a9, v28);
      }
      a7[2] = *((_DWORD *)v12 + 6);
      return 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= a1 )
      {
        if ( a8 )
        {
          v38 = *v12;
          v39 = *a2;
          v40 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v40, v39, a9, v38);
        }
        a7[2] = *((_DWORD *)v12 + 6);
        return 5 * (unsigned int)(*a3 != 58) + 58;
      }
      else
      {
        *a7 = v20 + 2;
        *((_QWORD *)a7 + 2) = a2[v21];
LABEL_33:
        if ( a5 )
          *a5 = v13;
        v23 = v12[2];
        result = *((unsigned int *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          return 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_409EB0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
{
  int v8; // r13d
  int v9; // eax
  int v10; // ebp
  const char *v12; // r15
  _BYTE *v13; // rdx
  char v14; // al
  char v15; // al
  int v16; // eax
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r14d
  char *v22; // rax
  __int64 v23; // r8
  char v24; // cl
  int v26; // edx
  __int64 v27; // rax
  _BYTE *v28; // rcx
  int v29; // esi
  char v30; // cl
  char *v31; // rax
  __int64 v32; // rax
  char *v34; // rax
  char v35; // dl
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rbp
  char *v40; // rax
  __int64 v41; // rbp
  char *v42; // rax
  __int64 v43; // rbp
  char *v44; // rax
  char v47; // [rsp+1Ch] [rbp-4Ch]
  int v48; // [rsp+1Ch] [rbp-4Ch]
  int v49; // [rsp+1Ch] [rbp-4Ch]
  int v50; // [rsp+1Ch] [rbp-4Ch]
  _BYTE *v51; // [rsp+20h] [rbp-48h]
  _BYTE *v52; // [rsp+28h] [rbp-40h]

  v8 = a7[1];
  if ( a1 <= 0 )
    return (unsigned int)-1;
  v9 = *a7;
  v10 = a1;
  v12 = a3;
  *((_QWORD *)a7 + 2) = 0LL;
  if ( !v9 )
  {
    *a7 = 1;
    v9 = 1;
LABEL_4:
    a7[12] = v9;
    a7[11] = v9;
    *((_QWORD *)a7 + 4) = 0LL;
    if ( *a3 == 45 )
    {
      a7[10] = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      a7[10] = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v50 = a6;
        v34 = getenv("POSIXLY_CORRECT");
        a6 = v50;
        if ( !v34 )
        {
          a7[10] = 1;
          v13 = (_BYTE *)*((_QWORD *)a7 + 4);
          goto LABEL_24;
        }
        v13 = (_BYTE *)*((_QWORD *)a7 + 4);
      }
      a7[10] = 0;
    }
LABEL_24:
    a7[6] = 1;
    v14 = *v12;
    goto LABEL_25;
  }
  if ( !a7[6] )
    goto LABEL_4;
  v14 = *a3;
  v13 = (_BYTE *)*((_QWORD *)a7 + 4);
  if ( ((v14 - 43) & 0xFD) == 0 )
  {
    v15 = *++v12;
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_25:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_28:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *a7;
    if ( a7[12] > *a7 )
      a7[12] = v16;
    if ( v16 < a7[11] )
      a7[11] = v16;
    if ( a7[10] == 1 )
    {
      v26 = a7[12];
      if ( a7[11] == v26 )
      {
        if ( v16 != v26 )
        {
          a7[11] = v16;
          v26 = v16;
        }
      }
      else if ( v16 != v26 )
      {
        v48 = a6;
        sub_4097B0((__int64)a2, a7);
        v26 = *a7;
        a6 = v48;
      }
      if ( a1 <= v26 )
      {
LABEL_79:
        v16 = v26;
      }
      else
      {
        v27 = v26;
        while ( 1 )
        {
          v28 = (_BYTE *)a2[v27];
          v29 = v27;
          v26 = v27;
          if ( *v28 == 45 )
          {
            if ( v28[1] )
              break;
          }
          v26 = ++v27;
          *a7 = v29 + 1;
          if ( a1 <= (int)v27 )
            goto LABEL_79;
        }
        v16 = *a7;
      }
      a7[12] = v26;
    }
    if ( a1 == v16 )
    {
      v10 = a7[12];
      v18 = a7[11];
LABEL_41:
      if ( v18 != v10 )
        *a7 = v18;
      return (unsigned int)-1;
    }
    v17 = a2[v16];
    if ( !strcmp((const char *)v17, "--") )
    {
      v18 = a7[11];
      v19 = a7[12];
      v20 = v16 + 1;
      *a7 = v20;
      if ( v18 == v19 )
      {
        a7[11] = v20;
        v18 = v20;
      }
      else if ( v20 != v19 )
      {
        sub_4097B0((__int64)a2, a7);
        v18 = a7[11];
      }
      a7[12] = a1;
      *a7 = a1;
      goto LABEL_41;
    }
    if ( *(_BYTE *)v17 == 45 )
    {
      v30 = *(_BYTE *)(v17 + 1);
      if ( v30 )
      {
        if ( a4 )
        {
          if ( v30 == 45 )
          {
            *((_QWORD *)a7 + 4) = v17 + 2;
            return (unsigned int)sub_409890(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_409890(a1, a2, v12, a4, a5, a6, a7, v8, "-");
              if ( v21 != -1 )
                return v21;
              v17 = a2[*a7];
            }
          }
        }
        v13 = (_BYTE *)(v17 + 1);
        goto LABEL_29;
      }
    }
    if ( a7[10] )
    {
      *((_QWORD *)a7 + 2) = v17;
      v21 = 1;
      *a7 = v16 + 1;
      return v21;
    }
    return (unsigned int)-1;
  }
LABEL_29:
  v51 = v13;
  *((_QWORD *)a7 + 4) = v13 + 1;
  v21 = (char)*v13;
  v52 = v13 + 1;
  v47 = *v13;
  v22 = strchr(v12, v21);
  v23 = (__int64)v52;
  if ( !v51[1] )
    ++*a7;
  if ( (unsigned __int8)(v47 - 58) > 1u && v22 )
  {
    v24 = v22[1];
    if ( *v22 == 87 && a4 && v24 == 59 )
    {
      if ( v51[1] )
      {
LABEL_68:
        *((_QWORD *)a7 + 4) = v23;
        *((_QWORD *)a7 + 2) = 0LL;
        return (unsigned int)sub_409890(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
      }
      v32 = *a7;
      if ( (_DWORD)v32 != a1 )
      {
        v23 = a2[v32];
        goto LABEL_68;
      }
      if ( v8 )
      {
        v43 = *a2;
        v44 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v44, v43, v21);
      }
      a7[2] = v21;
      return 5 * (unsigned int)(*v12 != 58) + 58;
    }
    else if ( v24 == 58 )
    {
      v35 = v51[1];
      if ( v22[2] == 58 )
      {
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          ++*a7;
        }
        else
        {
          *((_QWORD *)a7 + 2) = 0LL;
        }
      }
      else
      {
        v36 = *a7;
        if ( v35 )
        {
          *((_QWORD *)a7 + 2) = v52;
          *a7 = v36 + 1;
        }
        else if ( a1 == (_DWORD)v36 )
        {
          if ( v8 )
          {
            v41 = *a2;
            v42 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v42, v41, v21);
          }
          a7[2] = v21;
          v21 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v37 = v36 + 1;
          v38 = a2[v36];
          *a7 = v37;
          *((_QWORD *)a7 + 2) = v38;
        }
      }
      *((_QWORD *)a7 + 4) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v39 = *a2;
      v40 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v40, v39, v21);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_40A480(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_6147E0 = dword_61433C;
  dword_6147E4 = dword_614338;
  result = sub_409EB0(a1, a2, a3, a4, a5, a6, &dword_6147E0, a7);
  dword_61433C = dword_6147E0;
  qword_614820 = qword_6147F0;
  dword_614334 = dword_6147E8;
  return result;
}

__int64 __fastcall sub_40A4E0(int a1, __int64 *a2, const char *a3)
{
  return sub_40A480(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40A500(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40A480(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40A520(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409EB0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40A540(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40A480(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40A560(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_409EB0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_40A580(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( !s )
  {
    a3 = 1LL;
    v6 = "%s: invalid option -- '%c'\n" + 27;
LABEL_7:
    v5 = (wchar_t *)&v8;
    goto LABEL_4;
  }
  v4 = -2LL;
  if ( !a3 )
    return v4;
  v5 = pwc;
  v6 = s;
  if ( !pwc )
    goto LABEL_7;
LABEL_4:
  v4 = mbrtowc(v5, v6, a3, a4);
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40A9F0(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

__int64 __fastcall sub_40A600(_QWORD *a1, __int64 a2, __int64 a3)
{
  void *v3; // rax
  unsigned int v4; // edx
  unsigned __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v3 = (void *)sub_40AFC0(0LL, &v6, a2, a3);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = v6;
  if ( v6 > 0x7FFFFFFF )
  {
    free(v3);
    *__errno_location() = 75;
    return 0xFFFFFFFFLL;
  }
  else
  {
    *a1 = v3;
    return v4;
  }
}

void __noreturn sub_40A660()
{
  sub_405460(1);
}

__int64 __fastcall sub_40A670(const char *a1, const char **a2, char *a3, size_t a4)
{
  char *v5; // rbp
  size_t v6; // rax
  const char *v7; // r14
  size_t v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  char v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-58h]
  char v15; // [rsp+17h] [rbp-41h]

  v5 = a3;
  v6 = strlen(a1);
  v7 = *a2;
  v14 = -1LL;
  if ( !*a2 )
    return v14;
  v8 = v6;
  v15 = 0;
  v9 = 0LL;
  do
  {
    while ( strncmp(v7, a1, v8) )
    {
LABEL_7:
      ++v9;
      v5 += a4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( a3 )
      {
        v10 = memcmp(&a3[a4 * v14], v5, a4) == 0;
        v11 = v15;
        if ( !v10 )
          v11 = 1;
        v15 = v11;
      }
      else
      {
        v15 = 1;
      }
      goto LABEL_7;
    }
    v14 = v9++;
    v5 += a4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    return v14;
  return v12;
}

void __fastcall sub_40A790(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  _BYTE *v4; // rbp
  _BYTE *v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_408610(1, a1);
  v5 = sub_408300(0, 8, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40A810(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  _IO_FILE *v6; // rbx
  char *v7; // rax
  FILE *v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( !v9 || memcmp(v3, a2, a3) )
    {
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = sub_408630(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = sub_408630(i);
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  IO_write_ptr = stderr->_IO_write_ptr;
  if ( IO_write_ptr >= stderr->_IO_write_end )
  {
    LODWORD(IO_write_ptr) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = IO_write_ptr + 1;
    *IO_write_ptr = 10;
  }
  return (int)IO_write_ptr;
}

__int64 __fastcall sub_40A930(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_40A670(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A790(a1, (__int64)a2, result);
    sub_40A810((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A9A0(void *s1, __int64 *a2, char *a3, size_t a4)
{
  __int64 v4; // r14
  __int64 *v6; // rbx

  v4 = *a2;
  if ( *a2 )
  {
    v6 = a2 + 1;
    do
    {
      if ( !memcmp(s1, a3, a4) )
        break;
      v4 = *v6;
      a3 += a4;
      ++v6;
    }
    while ( v4 );
  }
  return v4;
}

bool __fastcall sub_40A9F0(int a1)
{
  char *v1; // rdx
  bool result; // al

  v1 = setlocale(a1, 0LL);
  result = 1;
  if ( v1 )
  {
    result = 0;
    if ( strcmp(v1, "C") )
      return strcmp(v1, "POSIX") != 0;
  }
  return result;
}

const char *sub_40AA50()
{
  char *v0; // rax
  char *v1; // r15
  const char *v2; // rbx
  char v3; // bp
  const char *v4; // rbp
  char *v6; // rax
  const char *v7; // r13
  size_t v8; // rax
  __int64 v9; // r12
  size_t v10; // r14
  size_t v11; // rdi
  char *v12; // rax
  char *v13; // rbp
  size_t v14; // rdi
  char *v15; // rax
  int v16; // eax
  int v17; // r12d
  FILE *v18; // r13
  const char *v19; // rax
  FILE *v20; // rbx
  const char *v21; // r13
  char *IO_read_ptr; // rax
  int v23; // edi
  char *v24; // kr00_8
  int *v25; // rdx
  int v26; // esi
  unsigned int v27; // eax
  __int64 v28; // rdx
  signed __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  signed __int64 v35; // rdi
  char *v36; // rsi
  unsigned int v37; // edx
  char *v38; // rcx
  FILE *v39; // rdi
  int v40; // eax
  bool v41; // dl
  char *v42; // rax
  signed __int64 v43; // rax
  unsigned __int64 v44; // r9
  char *v45; // rsi
  char *v46; // r10
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // esi
  __int64 v50; // r8
  unsigned __int64 v51; // rdi
  char *v52; // rcx
  char *v53; // r9
  unsigned int v54; // edx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  __int64 v57; // rsi
  const char *v58; // rax
  char *v59; // rdi
  FILE *v60; // r13
  signed __int64 v61; // [rsp+8h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-C0h]
  char v63[64]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v64[15]; // [rsp+60h] [rbp-78h] BYREF

  v0 = nl_langinfo(14);
  v1 = qword_614818;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_614818 )
  {
    v6 = getenv("CHARSETALIASDIR");
    v7 = v6;
    if ( v6 && *v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      v10 = v8;
      if ( !v8 )
      {
        v11 = 14LL;
LABEL_18:
        v12 = (char *)malloc(v11);
        v13 = v12;
        if ( !v12 )
        {
LABEL_19:
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          qword_614818 = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        strcpy(&v13[v9], "charset.alias");
        v16 = open(v13, 0);
        v17 = v16;
        if ( v16 >= 0 )
        {
          v1 = 0LL;
          v61 = 0LL;
          v18 = fdopen(v16, "r");
          if ( v18 )
          {
            v19 = v2;
            v20 = v18;
            v21 = v19;
LABEL_30:
            IO_read_ptr = v20->_IO_read_ptr;
            if ( IO_read_ptr < v20->_IO_read_end )
            {
LABEL_31:
              v20->_IO_read_ptr = IO_read_ptr + 1;
              v23 = (unsigned __int8)*IO_read_ptr;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v23 = __uflow(v20);
              if ( v23 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v23 - 9) <= 1 || v23 == 32 )
                goto LABEL_30;
              if ( v23 == 35 )
              {
                do
                {
                  v42 = v20->_IO_read_ptr;
                  if ( v42 < v20->_IO_read_end )
                  {
                    v20->_IO_read_ptr = v42 + 1;
                    v40 = (unsigned __int8)*v42;
                    v41 = 1;
                  }
                  else
                  {
                    v40 = __uflow(v20);
                    v41 = v40 != -1;
                  }
                }
                while ( v40 != 10 && v41 );
                if ( v40 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v23, v20);
              if ( fscanf(v20, "%50s %50s", v63, v64) <= 1 )
                break;
              v24 = &v63[strlen(v63)];
              v25 = (int *)v64;
              do
              {
                v26 = *v25++;
                v27 = ~v26 & (v26 - 16843009) & 0x80808080;
              }
              while ( !v27 );
              if ( (~v26 & (v26 - 16843009) & 0x8080) == 0 )
              {
                v27 >>= 16;
                v25 = (int *)((char *)v25 + 2);
              }
              v28 = (char *)v25 - __CFADD__((_BYTE)v27, (_BYTE)v27) - 3 - (char *)v64;
              v29 = v24 - v63 + v28;
              v62 = v28;
              if ( v61 )
              {
                v43 = v61 + v29;
                v61 = v43 + 2;
                v30 = (char *)realloc(v1, v43 + 3);
                v32 = v62;
                v31 = v24 - v63;
              }
              else
              {
                v61 = v29 + 2;
                v30 = (char *)malloc(v29 + 3);
                v31 = v24 - v63;
                v32 = v62;
              }
              if ( !v30 )
              {
                v58 = v21;
                v59 = v1;
                v60 = v20;
                v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
                v2 = v58;
                free(v59);
                sub_409550(v60);
                goto LABEL_26;
              }
              v33 = -2 - v31;
              v34 = v31 + 1;
              v35 = v61 - v32;
              v36 = &v30[v61 - v32 + v33];
              if ( v34 >= 8 )
              {
                *(_QWORD *)v36 = *(_QWORD *)v63;
                *(_QWORD *)&v36[v34 - 8] = *(_QWORD *)&v63[v34 - 8];
                v44 = (unsigned __int64)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v45 = &v36[-v44];
                v46 = (char *)(v63 - v45);
                v47 = ((_DWORD)v45 + v34) & 0xFFFFFFF8;
                if ( v47 >= 8 )
                {
                  v48 = v47 & 0xFFFFFFF8;
                  v49 = 0;
                  do
                  {
                    v50 = v49;
                    v49 += 8;
                    *(_QWORD *)(v44 + v50) = *(_QWORD *)&v46[v50];
                  }
                  while ( v49 < v48 );
                }
              }
              else if ( (v34 & 4) != 0 )
              {
                *(_DWORD *)v36 = *(_DWORD *)v63;
                *(_DWORD *)&v36[v34 - 4] = *(_DWORD *)&v63[v34 - 4];
              }
              else if ( v34 )
              {
                *v36 = v63[0];
                if ( (v34 & 2) != 0 )
                  *(_WORD *)&v36[v34 - 2] = *(_WORD *)&v63[v34 - 2];
              }
              v37 = v32 + 1;
              v38 = &v30[v35 - 1];
              if ( v37 >= 8 )
              {
                *(_QWORD *)v38 = v64[0];
                *(_QWORD *)&v38[v37 - 8] = *(_QWORD *)&v63[v37 + 56];
                v51 = (unsigned __int64)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v52 = &v38[-v51];
                v53 = (char *)((char *)v64 - v52);
                v54 = ((_DWORD)v52 + v37) & 0xFFFFFFF8;
                if ( v54 >= 8 )
                {
                  v55 = v54 & 0xFFFFFFF8;
                  v56 = 0;
                  do
                  {
                    v57 = v56;
                    v56 += 8;
                    *(_QWORD *)(v51 + v57) = *(_QWORD *)&v53[v57];
                  }
                  while ( v56 < v55 );
                }
              }
              else if ( (v37 & 4) != 0 )
              {
                *(_DWORD *)v38 = v64[0];
                *(_DWORD *)&v38[v37 - 4] = *(_DWORD *)&v63[v37 + 60];
              }
              else if ( v37 )
              {
                *v38 = v64[0];
                if ( (v37 & 2) != 0 )
                  *(_WORD *)&v38[v37 - 2] = *(_WORD *)&v63[v37 + 62];
              }
              v1 = v30;
              IO_read_ptr = v20->_IO_read_ptr;
              if ( IO_read_ptr < v20->_IO_read_end )
                goto LABEL_31;
            }
            v39 = v20;
            v2 = v21;
            sub_409550(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_26:
        free(v13);
        goto LABEL_20;
      }
      if ( v7[v8 - 1] == 47 )
      {
        v11 = v8 + 14;
        goto LABEL_18;
      }
      v14 = v8 + 15;
      v9 = v8 + 1;
    }
    else
    {
      v14 = 115LL;
      v9 = 101LL;
      v10 = 100LL;
      v7 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
    }
    v15 = (char *)malloc(v14);
    v13 = v15;
    if ( !v15 )
      goto LABEL_19;
    memcpy(v15, v7, v10);
    v13[v10] = 47;
    goto LABEL_24;
  }
LABEL_4:
  v3 = *v1;
  if ( *v1 )
  {
    while ( strcmp(v2, v1) && (v3 != 42 || v1[1]) )
    {
      v4 = &v1[strlen(v1) + 1];
      v1 = (char *)&v4[strlen(v4) + 1];
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    return "ASCII";
  return v2;
}

char *__fastcall sub_40AFC0(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  char *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  _BYTE *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  void *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  const char *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // r11d
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  unsigned __int64 v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  int v79; // ebx
  __int64 v80; // rax
  char *v81; // rdi
  long double v82; // fst7
  __int64 v83; // rax
  char *v84; // rdi
  double v85; // xmm0_8
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  int *v149; // [rsp+10h] [rbp-700h]
  int *v150; // [rsp+18h] [rbp-6F8h]
  __int64 v151; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v152; // [rsp+28h] [rbp-6E8h]
  char *v153; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v155; // [rsp+40h] [rbp-6D0h]
  void *v156; // [rsp+48h] [rbp-6C8h]
  char *v157; // [rsp+50h] [rbp-6C0h]
  __int64 v158; // [rsp+58h] [rbp-6B8h]
  _BYTE *v159; // [rsp+60h] [rbp-6B0h]
  char *v160; // [rsp+68h] [rbp-6A8h]
  long double v161; // [rsp+70h] [rbp-6A0h]
  void *v162; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v164; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v165; // [rsp+98h] [rbp-678h]
  unsigned int v166; // [rsp+9Ch] [rbp-674h]
  char v167[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v168; // [rsp+A8h] [rbp-668h]
  _BYTE v169[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v170; // [rsp+190h] [rbp-580h] BYREF
  void *v171; // [rsp+198h] [rbp-578h]
  __int64 v172; // [rsp+1A0h] [rbp-570h]
  __int64 v173; // [rsp+1A8h] [rbp-568h]
  _BYTE v174[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v175[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v155 = a2;
  if ( (int)sub_40CD00(a3, &v170, v167) < 0 )
    return 0LL;
  if ( (int)sub_40CAE0(a4, v167) >= 0 )
  {
    v6 = v172 + 7;
    if ( (unsigned __int64)(v172 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v173, v6);
    v7 = v173 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v160 = (char *)&v151;
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = (char *)malloc(v8);
      v160 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v155;
    v11 = (char *)v171;
    v12 = a3;
    v13 = (char *)src;
    v158 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v171;
    if ( *(_BYTE **)v171 == v12 )
      goto LABEL_111;
LABEL_14:
    v16 = (void *)(v15 - v12);
    v17 = (unsigned __int64)v16 + v14;
    v18 = (size_t)v16 + v14;
    if ( __CFADD__(v16, v14) )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
      v18 = -1LL;
    }
    else if ( v10 < v17 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v17 )
        {
LABEL_28:
          v19 = v13 == src;
          if ( !v13 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v17 <= 0xC )
      {
        v10 = 12LL;
        v19 = v13 == src;
        if ( !v13 )
        {
LABEL_19:
          v159 = v12;
          LOBYTE(v161) = v19;
          v162 = v16;
          v20 = (char *)malloc(v10);
          v16 = v162;
          v12 = v159;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v161) )
          {
            *(_QWORD *)&v161 = v159;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = v162;
            v12 = *(_BYTE **)&v161;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v161 = v12;
          v162 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = v162;
          v12 = *(_BYTE **)&v161;
          v13 = v23;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v17 == -1LL )
        goto LABEL_88;
      v10 = (size_t)v16 + v14;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v13[v14], v12, (size_t)v16);
    while ( v170 != v158 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_200;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
          v14 = -1LL;
        }
        else if ( v10 < v58 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 < v58 )
              goto LABEL_238;
          }
          else
          {
            if ( v58 <= 0xC )
            {
              v10 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v18 == -2LL )
              goto LABEL_88;
            v10 = v18 + 1;
          }
LABEL_105:
          if ( v13 && v13 != src )
          {
            v59 = (char *)realloc(v13, v10);
            if ( v59 )
            {
              v13 = v59;
              goto LABEL_109;
            }
LABEL_126:
            v56 = v13;
            *(_QWORD *)&v161 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v162) = v13 == src;
          v95 = (char *)malloc(v10);
          if ( !v95 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v162 )
            v13 = (char *)memcpy(v95, v13, v18);
          else
            v13 = v95;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_200;
      v26 = (char *)v168;
      v27 = (long double *)((char *)v168 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v162) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v162 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
            v67 = *((_DWORD *)v11 + 4);
            if ( v65 == v66 )
            {
              v49 = 0LL;
            }
            else
            {
              v68 = *((_QWORD *)v11 + 5);
              if ( v68 == -1 )
              {
                v49 = 0LL;
                v162 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v65 + 1;
                  v127 = -1LL;
                  v128 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v127 = 10 * v49;
                  v75 = __CFADD__(v127, v128);
                  v49 = v127 + v128;
                  v65 = v126;
                  if ( v75 )
                  {
                    if ( v66 == v126 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v162;
                      goto LABEL_82;
                    }
                    while ( *v65++ != 48 )
                    {
                      if ( v66 == v65 )
                        goto LABEL_81;
                    }
                    v49 = -1LL;
                  }
                  if ( v66 == v65 )
                    goto LABEL_82;
                }
              }
              v69 = (char *)v168 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_200;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v129 = v50 + 1;
                v54 = 0LL;
                if ( v51 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v133 = 10 * v54;
                    v75 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v54 = v134;
                    if ( v75 )
                    {
                      if ( v51 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v51 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v53 = (char *)v168 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_200;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v55;
                  if ( v49 >= v55 )
                    v86 = v49;
                  v75 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v162 = v87;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v175;
                  }
                  else
                  {
                    v156 = (void *)v49;
                    v157 = (char *)v54;
                    LODWORD(v159) = v67;
                    v161 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v67 = (int)v159;
                    _FST7 = v161;
                    v89 = v88;
                    v54 = (unsigned __int64)v157;
                    v49 = (unsigned __int64)v156;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v165;
                  LOBYTE(v91) = v165;
                  HIBYTE(v91) = BYTE1(v165) | 3;
                  LOWORD(v165) = v91;
                  __asm (" fxam ");
                  if ( (v61 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v67 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v67 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v11[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || v54 )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v157;
                        v97 = *(char **)&v161;
                        v124 = *v122;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || (v105 = v92 + 1, v54) )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v157;
                        v105 = *(char **)&v161;
                        v140 = *v138;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v11[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 )
                      {
                        if ( v54 )
                        {
                          HIDWORD(v151) = v90;
                          v152 = v49;
                          v153 = v92 + 2;
                          v156 = v89;
                          LODWORD(v157) = v67;
                          v159 = (_BYTE *)v54;
                          *(_QWORD *)&v161 = v54 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v161;
                          v118 = (__int64)v159;
                          v119 = *v116;
                          LOBYTE(v67) = (_BYTE)v157;
                          v89 = (char *)v156;
                          v97 = v153;
                          v49 = v152;
                          LOWORD(v90) = WORD2(v151);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v153) = v90;
                          v156 = (void *)v49;
                          v157 = v92 + 2;
                          v159 = v89;
                          LODWORD(v161) = v67;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v161);
                          v89 = v159;
                          v148 = *v147;
                          v97 = v157;
                          v49 = (unsigned __int64)v156;
                          LOWORD(v90) = (_WORD)v153;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v161 = v92 + 2;
                  v135 = v11[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v67 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v54) )
                  {
                    HIDWORD(v151) = v90;
                    v152 = v49;
                    v153 = v89;
                    v156 = (void *)v54;
                    LODWORD(v157) = v67;
                    v159 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v156;
                    v136 = (__int64)v159;
                    v145 = *v143;
                    LOBYTE(v67) = (_BYTE)v157;
                    v89 = v153;
                    v49 = v152;
                    LOWORD(v90) = WORD2(v151);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v11[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v161;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v165) = v90;
                  v98 = v97 - v89;
                  if ( v49 > v97 - v89 )
                  {
                    v99 = v49 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v67 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v67 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v162 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v18;
                  v14 = v98 + v18;
                  if ( v10 - v18 <= v98 )
                  {
                    if ( __CFADD__(v98, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v103 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v10 = v98 + v18;
                      }
LABEL_280:
                      if ( !v13 || v13 == src )
                      {
                        LOBYTE(v159) = v13 == src;
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v114 = (char *)malloc(v10);
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v159 )
                        {
                          v115 = (char *)memcpy(v114, v13, v18);
                          v89 = (char *)v162;
                          v98 = *(_QWORD *)&v161;
                          v13 = v115;
                        }
                        else
                        {
                          v13 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v104 = (char *)realloc(v13, v10);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        v13 = v104;
                      }
                    }
                  }
                  v162 = v89;
                  memcpy(&v13[v18], v89, v98);
                  if ( v162 != v175 )
                    free(v162);
                  goto LABEL_110;
                }
LABEL_375:
                v55 = 12LL;
                goto LABEL_190;
              }
            }
            v55 = 12LL;
            if ( v29 != 65 )
              v55 = 18LL;
            v54 = 0LL;
            if ( v29 != 65 )
              v54 = 6LL;
            goto LABEL_190;
          }
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v160 + 1;
        *v160 = 37;
        if ( (v30 & 1) != 0 )
        {
          v32 = v160;
          v160[1] = 39;
          v31 = (char *)(v32 + 2);
        }
        if ( (v30 & 2) != 0 )
          *v31++ = 45;
        if ( (v30 & 4) != 0 )
          *v31++ = 43;
        if ( (v30 & 8) != 0 )
          *v31++ = 32;
        if ( (v30 & 0x10) != 0 )
          *v31++ = 35;
        if ( (v30 & 0x40) != 0 )
          *v31++ = 73;
        if ( (v30 & 0x20) != 0 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        if ( (unsigned int)v162 <= 0x10 )
        {
          v37 = 1LL << (char)v162;
          if ( ((1LL << (char)v162) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v37 & 0x1000) != 0 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( (v37 & 0x600) == 0 )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v159) = 1;
            v165 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v159) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_200;
          v43 = (int)v159;
          *(&v165 + (unsigned int)v159) = *((_DWORD *)v42 + 4);
          LODWORD(v159) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v161 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v171 != v174 )
                    free(v171);
                  if ( v168 != v169 )
                    free(v168);
                  v13 = 0LL;
                  **(_DWORD **)&v161 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v161 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v161) = v13 == src;
            v94 = (char *)malloc(v10);
            v45 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v161) )
              v45 = (char *)memcpy(v94, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v157 = v45;
            v46 = __errno_location();
            v47 = v157;
            v157 = v31;
            *(_QWORD *)&v161 = v46;
            LODWORD(v153) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v164 = -1;
              **(_DWORD **)&v161 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (int)v162 )
              {
                case 1:
                  v71 = (unsigned int)*((char *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v71 = *((unsigned __int8 *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v71 = (unsigned int)*((__int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v71 = *((unsigned __int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v71 = *((unsigned int *)v168 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_150:
                  v70 = &v47[v18];
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v149 = &v164;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v70 = &v47[v18];
                  v71 = *((_QWORD *)v168 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v70,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              v71,
                              &v164,
                              v150);
LABEL_131:
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
LABEL_209:
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v70,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v166,
                            v71,
                            &v164);
LABEL_210:
                    v47 = (char *)v156;
LABEL_132:
                    v73 = v164;
                    if ( v164 < 0 )
                    {
LABEL_154:
                      if ( v157[1] )
                      {
                        v157[1] = 0;
                        continue;
                      }
                      if ( v72 < 0 )
                      {
                        v79 = **(_DWORD **)&v161;
                        if ( !**(_DWORD **)&v161 )
                        {
                          v79 = 84;
                          if ( (v11[72] & 0xEF) != 99 )
                            v79 = 22;
                        }
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        **(_DWORD **)&v161 = v79;
                        return 0LL;
                      }
LABEL_136:
                      v164 = v72;
                      v73 = v72;
LABEL_137:
                      if ( (unsigned int)(v73 + 1) < v48 )
                      {
                        v13 = v47;
                        v14 = v18 + v73;
                        **(_DWORD **)&v161 = (_DWORD)v153;
                        goto LABEL_110;
                      }
                      if ( v10 - v18 > 0x7FFFFFFE )
                      {
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        v13 = 0LL;
                        **(_DWORD **)&v161 = 75;
                        return v13;
                      }
                      v74 = (unsigned int)(v73 + 2);
                      v75 = __CFADD__(v18, v74);
                      v76 = v18 + v74;
                      if ( (v10 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v10 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v75 )
                          goto LABEL_202;
                        if ( 2 * v10 >= v76 )
                          v76 = 2 * v10;
                        if ( v10 < v76 )
                        {
                          v10 *= 2LL;
                          if ( v10 < v76 )
                          {
                            if ( v76 == -1LL )
                            {
LABEL_202:
                              v56 = v47;
                              goto LABEL_89;
                            }
                            v10 = v76;
                          }
                          v77 = v47 == src;
                          if ( !v47 || v47 == src )
                          {
                            v156 = v47;
                            v93 = (char *)malloc(v10);
                            v47 = (char *)v156;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v18 && v77 )
                              v47 = (char *)memcpy(v93, v156, v18);
                            else
                              v47 = v93;
                          }
                          else
                          {
                            v156 = v47;
                            v78 = (char *)realloc(v47, v10);
                            v47 = (char *)v156;
                            if ( !v78 )
                              goto LABEL_202;
                            v47 = v78;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v73 < v48 && v47[v73 + v18] )
                      goto LABEL_200;
                    if ( v73 >= v72 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 11:
                  v83 = *((_QWORD *)v11 + 10);
                  v84 = &v47[v18];
                  v156 = v47;
                  v85 = *((double *)v168 + 4 * v83 + 2);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            &v164,
                            v150);
                  }
                  else
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v84,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              &v164,
                              v85);
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            v166,
                            &v164);
                  }
                  v47 = (char *)v156;
                  goto LABEL_132;
                case 12:
                  v80 = *((_QWORD *)v11 + 10);
                  v81 = &v47[v18];
                  v156 = v47;
                  v82 = *((long double *)v168 + 2 * v80 + 1);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            *(_OWORD *)&v82,
                            &v164);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v159 != 2 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            &v164,
                            *(_OWORD *)&v82);
                    goto LABEL_131;
                  }
                  v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                          v81,
                          v48,
                          1LL,
                          -1LL,
                          v160,
                          v165,
                          v166);
                  v47 = (char *)v156;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v71 = v165;
LABEL_153:
            v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                    v70,
                    v48,
                    1LL,
                    -1LL,
                    v160,
                    v71,
                    v149,
                    v150);
            v73 = v164;
            v47 = (char *)v156;
            if ( v164 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v12 = (_BYTE *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v158;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v107 = v18;
    v108 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v108 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v108 )
        {
LABEL_303:
          v109 = v13 == src;
          if ( !v13 || v13 == src )
          {
            v142 = (char *)malloc(v10);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v13 = (char *)memcpy(v142, v13, v107);
            else
              v13 = v142;
          }
          else
          {
            v110 = (char *)realloc(v13, v10);
            if ( !v110 )
              goto LABEL_126;
            v13 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_303;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v13[v107] = 0;
    if ( v10 > v108 && v13 != src )
    {
      v111 = (char *)realloc(v13, v108);
      if ( v111 )
        v13 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v171 != v174 )
      free(v171);
    if ( v168 != v169 )
      free(v168);
    *v155 = v107;
    return v13;
  }
  if ( v171 != v174 )
    free(v171);
  if ( v168 != v169 )
    free(v168);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

char *__fastcall sub_40AFC0(void *a1, size_t *a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  size_t v8; // rdi
  char *v9; // rax
  size_t v10; // r12
  char *v11; // r14
  _BYTE *v12; // r8
  char *v13; // rbx
  size_t v14; // r15
  _BYTE *v15; // rcx
  void *v16; // rcx
  unsigned __int64 v17; // rax
  size_t v18; // r13
  bool v19; // dl
  char *v20; // rax
  char *v21; // rax
  void *v22; // rsp
  char *v23; // rax
  char v24; // r15
  __int64 v25; // rax
  char *v26; // r8
  long double *v27; // rdx
  int v28; // eax
  char v29; // al
  int v30; // eax
  char *v31; // r15
  const char *v32; // rdi
  _BYTE *v33; // rsi
  _BYTE *v34; // rdx
  _BYTE *v35; // rsi
  _BYTE *v36; // rdx
  __int64 v37; // rax
  char v38; // al
  __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // rax
  char *v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rax
  char *v45; // r11
  int *v46; // rax
  char *v47; // r11
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // r10
  char *v50; // rdx
  char *v51; // rcx
  __int64 v52; // rsi
  _DWORD *v53; // r8
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  void *v56; // r15
  unsigned __int64 v58; // rax
  char *v59; // rax
  char v61; // fps^1
  char *v65; // rdx
  char *v66; // rdi
  int v67; // r11d
  __int64 v68; // rcx
  _DWORD *v69; // rcx
  char *v70; // rdi
  unsigned __int64 v71; // r9
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  bool v75; // cf
  unsigned __int64 v76; // rax
  bool v77; // bl
  char *v78; // rax
  int v79; // ebx
  __int64 v80; // rax
  char *v81; // rdi
  long double v82; // fst7
  __int64 v83; // rax
  char *v84; // rdi
  double v85; // xmm0_8
  unsigned __int64 v86; // rax
  void *v87; // rax
  char *v88; // rax
  char *v89; // rcx
  int v90; // r8d
  __int16 v91; // ax
  char *v92; // r15
  char *v93; // rax
  char *v94; // rax
  char *v95; // rax
  char v96; // al
  char *v97; // r9
  size_t v98; // r8
  unsigned __int64 v99; // r10
  char *v100; // rdi
  __int64 v101; // rax
  char *v102; // r10
  unsigned __int64 v103; // rax
  char *v104; // rax
  char *v105; // rsi
  char v106; // al
  size_t v107; // r15
  size_t v108; // r14
  bool v109; // r13
  char *v110; // rax
  char *v111; // rax
  __int64 v112; // rax
  char *v113; // r10
  char *v114; // rax
  char *v115; // rax
  char *v116; // rax
  __int64 v117; // rsi
  __int64 v118; // rdx
  char v119; // al
  __int64 v120; // rdx
  char *v121; // rax
  char *v122; // rax
  __int64 v123; // rdx
  char v124; // al
  char *v125; // rax
  char *v126; // rsi
  __int64 v127; // r9
  __int64 v128; // rdx
  char *v129; // rax
  char *v130; // rsi
  char *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int64 v134; // rax
  char v135; // al
  __int64 v136; // rsi
  char v137; // al
  char *v138; // rax
  __int64 v139; // rdx
  char v140; // al
  char *v141; // rax
  char *v142; // rax
  char *v143; // rax
  void *v144; // rdx
  char v145; // al
  _BYTE *v146; // rax
  char *v147; // rax
  char v148; // al
  int *v149; // [rsp+10h] [rbp-700h]
  int *v150; // [rsp+18h] [rbp-6F8h]
  __int64 v151; // [rsp+20h] [rbp-6F0h] BYREF
  unsigned __int64 v152; // [rsp+28h] [rbp-6E8h]
  char *v153; // [rsp+30h] [rbp-6E0h]
  void *ptr; // [rsp+38h] [rbp-6D8h]
  size_t *v155; // [rsp+40h] [rbp-6D0h]
  void *v156; // [rsp+48h] [rbp-6C8h]
  char *v157; // [rsp+50h] [rbp-6C0h]
  __int64 v158; // [rsp+58h] [rbp-6B8h]
  _BYTE *v159; // [rsp+60h] [rbp-6B0h]
  char *v160; // [rsp+68h] [rbp-6A8h]
  long double v161; // [rsp+70h] [rbp-6A0h]
  void *v162; // [rsp+80h] [rbp-690h]
  void *src; // [rsp+88h] [rbp-688h]
  int v164; // [rsp+94h] [rbp-67Ch] BYREF
  unsigned int v165; // [rsp+98h] [rbp-678h]
  unsigned int v166; // [rsp+9Ch] [rbp-674h]
  char v167[8]; // [rsp+A0h] [rbp-670h] BYREF
  void *v168; // [rsp+A8h] [rbp-668h]
  _BYTE v169[224]; // [rsp+B0h] [rbp-660h] BYREF
  __int64 v170; // [rsp+190h] [rbp-580h] BYREF
  void *v171; // [rsp+198h] [rbp-578h]
  __int64 v172; // [rsp+1A0h] [rbp-570h]
  __int64 v173; // [rsp+1A8h] [rbp-568h]
  _BYTE v174[624]; // [rsp+1B0h] [rbp-560h] BYREF
  char v175[752]; // [rsp+420h] [rbp-2F0h] BYREF

  src = a1;
  v155 = a2;
  if ( (int)sub_40CD00(a3, &v170, v167) < 0 )
    return 0LL;
  if ( (int)sub_40CAE0(a4, v167) >= 0 )
  {
    v6 = v172 + 7;
    if ( (unsigned __int64)(v172 + 7) <= 6 )
      v6 = -1LL;
    v75 = __CFADD__(v173, v6);
    v7 = v173 + v6;
    if ( v75 )
      goto LABEL_112;
    v8 = v7 + 6;
    if ( v7 >= 0xFFFFFFFFFFFFFFFALL )
      goto LABEL_112;
    if ( v8 <= 0xF9F )
    {
      ptr = 0LL;
      v22 = alloca(v7 + 14);
      v160 = (char *)&v151;
    }
    else
    {
      if ( v7 == -7LL )
        goto LABEL_112;
      v9 = (char *)malloc(v8);
      v160 = v9;
      if ( !v9 )
        goto LABEL_112;
      ptr = v9;
    }
    v10 = 0LL;
    if ( src )
      v10 = *v155;
    v11 = (char *)v171;
    v12 = a3;
    v13 = (char *)src;
    v158 = 0LL;
    v14 = 0LL;
    v15 = *(_BYTE **)v171;
    if ( *(_BYTE **)v171 == v12 )
      goto LABEL_111;
LABEL_14:
    v16 = (void *)(v15 - v12);
    v17 = (unsigned __int64)v16 + v14;
    v18 = (size_t)v16 + v14;
    if ( __CFADD__(v16, v14) )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
      v18 = -1LL;
    }
    else if ( v10 < v17 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v17 )
        {
LABEL_28:
          v19 = v13 == src;
          if ( !v13 )
            goto LABEL_19;
          goto LABEL_29;
        }
      }
      else if ( v17 <= 0xC )
      {
        v10 = 12LL;
        v19 = v13 == src;
        if ( !v13 )
        {
LABEL_19:
          v159 = v12;
          LOBYTE(v161) = v19;
          v162 = v16;
          v20 = (char *)malloc(v10);
          v16 = v162;
          v12 = v159;
          if ( !v20 )
            goto LABEL_88;
          if ( v14 && LOBYTE(v161) )
          {
            *(_QWORD *)&v161 = v159;
            v21 = (char *)memcpy(v20, v13, v14);
            v16 = v162;
            v12 = *(_BYTE **)&v161;
            v13 = v21;
          }
          else
          {
            v13 = v20;
          }
          goto LABEL_32;
        }
LABEL_29:
        if ( !v19 )
        {
          *(_QWORD *)&v161 = v12;
          v162 = v16;
          v23 = (char *)realloc(v13, v10);
          if ( !v23 )
            goto LABEL_126;
          v16 = v162;
          v12 = *(_BYTE **)&v161;
          v13 = v23;
          goto LABEL_32;
        }
        goto LABEL_19;
      }
      if ( v17 == -1LL )
        goto LABEL_88;
      v10 = (size_t)v16 + v14;
      goto LABEL_28;
    }
LABEL_32:
    memcpy(&v13[v14], v12, (size_t)v16);
    while ( v170 != v158 )
    {
      v24 = v11[72];
      v25 = *((_QWORD *)v11 + 10);
      if ( v24 == 37 )
      {
        if ( v25 != -1 )
          goto LABEL_200;
        v58 = v18 + 1;
        v14 = v18 + 1;
        if ( v18 == -1LL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
          v14 = -1LL;
        }
        else if ( v10 < v58 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 < v58 )
              goto LABEL_238;
          }
          else
          {
            if ( v58 <= 0xC )
            {
              v10 = 12LL;
              goto LABEL_105;
            }
LABEL_238:
            if ( v18 == -2LL )
              goto LABEL_88;
            v10 = v18 + 1;
          }
LABEL_105:
          if ( v13 && v13 != src )
          {
            v59 = (char *)realloc(v13, v10);
            if ( v59 )
            {
              v13 = v59;
              goto LABEL_109;
            }
LABEL_126:
            v56 = v13;
            *(_QWORD *)&v161 = __errno_location();
            goto LABEL_127;
          }
          LOBYTE(v162) = v13 == src;
          v95 = (char *)malloc(v10);
          if ( !v95 )
            goto LABEL_88;
          if ( v18 && (_BYTE)v162 )
            v13 = (char *)memcpy(v95, v13, v18);
          else
            v13 = v95;
        }
LABEL_109:
        v13[v18] = 37;
        goto LABEL_110;
      }
      if ( v25 == -1 )
        goto LABEL_200;
      v26 = (char *)v168;
      v27 = (long double *)((char *)v168 + 32 * v25);
      v28 = *(_DWORD *)v27;
      LODWORD(v162) = *(_DWORD *)v27;
      if ( v24 != 110 )
      {
        v29 = v24 & 0xDF;
        if ( ((unsigned __int8)((v24 & 0xDF) - 69) <= 2u || v29 == 65) && (_DWORD)v162 == 12 )
        {
          _FST7 = v27[1];
          if ( _FST7 == _FST7 + _FST7 )
          {
            v65 = (char *)*((_QWORD *)v11 + 3);
            v66 = (char *)*((_QWORD *)v11 + 4);
            v67 = *((_DWORD *)v11 + 4);
            if ( v65 == v66 )
            {
              v49 = 0LL;
            }
            else
            {
              v68 = *((_QWORD *)v11 + 5);
              if ( v68 == -1 )
              {
                v49 = 0LL;
                v162 = (void *)-1LL;
                while ( 1 )
                {
                  v126 = v65 + 1;
                  v127 = -1LL;
                  v128 = *v65 - 48;
                  if ( v49 <= 0x1999999999999999LL )
                    v127 = 10 * v49;
                  v75 = __CFADD__(v127, v128);
                  v49 = v127 + v128;
                  v65 = v126;
                  if ( v75 )
                  {
                    if ( v66 == v126 )
                    {
LABEL_81:
                      v49 = (unsigned __int64)v162;
                      goto LABEL_82;
                    }
                    while ( *v65++ != 48 )
                    {
                      if ( v66 == v65 )
                        goto LABEL_81;
                    }
                    v49 = -1LL;
                  }
                  if ( v66 == v65 )
                    goto LABEL_82;
                }
              }
              v69 = (char *)v168 + 32 * v68;
              if ( *v69 != 5 )
                goto LABEL_200;
              v49 = (int)v69[4];
              if ( (v49 & 0x80000000) != 0LL )
              {
                v67 |= 2u;
                v49 = -(__int64)v49;
              }
            }
LABEL_82:
            v50 = (char *)*((_QWORD *)v11 + 6);
            v51 = (char *)*((_QWORD *)v11 + 7);
            if ( v50 != v51 )
            {
              v52 = *((_QWORD *)v11 + 8);
              if ( v52 == -1 )
              {
                v129 = v50 + 1;
                v54 = 0LL;
                if ( v51 != v129 )
                {
                  v130 = v129;
                  while ( 1 )
                  {
                    v131 = v130 + 1;
                    v132 = *v130 - 48;
                    v133 = -1LL;
                    if ( v54 <= 0x1999999999999999LL )
                      v133 = 10 * v54;
                    v75 = __CFADD__(v133, v132);
                    v134 = v133 + v132;
                    v130 = v131;
                    v54 = v134;
                    if ( v75 )
                    {
                      if ( v51 == v131 )
                        goto LABEL_88;
                      while ( 1 )
                      {
                        v130 = v131 + 1;
                        if ( *v131 == 48 )
                          break;
                        if ( v51 == v130 )
                          goto LABEL_88;
                        ++v131;
                      }
                      v54 = -1LL;
                    }
                    if ( v51 == v130 )
                      goto LABEL_86;
                  }
                }
                goto LABEL_375;
              }
              v53 = (char *)v168 + 32 * v52;
              if ( *v53 != 5 )
                goto LABEL_200;
              v54 = (int)v53[4];
              if ( (v54 & 0x80000000) == 0LL )
              {
LABEL_86:
                if ( v54 )
                {
                  v55 = v54 + 12;
                  if ( v54 >= 0xFFFFFFFFFFFFFFF4LL )
                    goto LABEL_88;
LABEL_190:
                  v86 = v55;
                  if ( v49 >= v55 )
                    v86 = v49;
                  v75 = __CFADD__(v86, 1LL);
                  v87 = (void *)(v86 + 1);
                  v162 = v87;
                  if ( v75 )
                    goto LABEL_88;
                  if ( (unsigned __int64)v87 <= 0x2BC )
                  {
                    v89 = v175;
                  }
                  else
                  {
                    v156 = (void *)v49;
                    v157 = (char *)v54;
                    LODWORD(v159) = v67;
                    v161 = _FST7;
                    if ( v87 == (void *)-1LL )
                      goto LABEL_88;
                    v88 = (char *)malloc((size_t)v87);
                    v67 = (int)v159;
                    _FST7 = v161;
                    v89 = v88;
                    v54 = (unsigned __int64)v157;
                    v49 = (unsigned __int64)v156;
                    if ( !v88 )
                      goto LABEL_88;
                  }
                  v90 = (unsigned __int16)v165;
                  LOBYTE(v91) = v165;
                  HIBYTE(v91) = BYTE1(v165) | 3;
                  LOWORD(v165) = v91;
                  __asm (" fxam ");
                  if ( (v61 & 2) != 0 )
                  {
                    *v89 = 45;
                    _FST7 = -_FST7;
                    v92 = v89 + 1;
                  }
                  else if ( (v67 & 4) != 0 )
                  {
                    v92 = v89 + 1;
                    *v89 = 43;
                  }
                  else
                  {
                    v92 = v89;
                    if ( (v67 & 8) != 0 )
                    {
                      v92 = v89 + 1;
                      *v89 = 32;
                    }
                  }
                  if ( _FST7 > 0.0 )
                  {
                    if ( _FST7 + _FST7 != _FST7 )
                      goto LABEL_200;
                    v97 = v92 + 3;
                    if ( (unsigned __int8)(v11[72] - 65) > 0x19u )
                    {
                      v92[2] = 102;
                      *(_WORD *)v92 = 28265;
                    }
                    else
                    {
                      v92[2] = 70;
                      *(_WORD *)v92 = 20041;
                    }
                    v92 = 0LL;
                    goto LABEL_263;
                  }
                  if ( _FST7 != 0.0 )
                    goto LABEL_200;
                  v96 = v11[72] & 0xDF;
                  switch ( v96 )
                  {
                    case 'F':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || v54 )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v122 = nl_langinfo(0x10000);
                        v123 = (__int64)v157;
                        v97 = *(char **)&v161;
                        v124 = *v122;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v124 )
                          v124 = 46;
                        v92[1] = v124;
                        if ( v123 )
                        {
                          v125 = v97;
                          do
                            *v125++ = 48;
                          while ( v125 != &v92[v123 + 2] );
                          v97 += v123;
                        }
                        goto LABEL_263;
                      }
                      goto LABEL_262;
                    case 'E':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 || (v105 = v92 + 1, v54) )
                      {
                        LODWORD(v152) = v90;
                        v153 = (char *)v49;
                        v156 = v89;
                        v157 = (char *)v54;
                        LODWORD(v159) = v67;
                        *(_QWORD *)&v161 = v92 + 2;
                        v138 = nl_langinfo(0x10000);
                        v139 = (__int64)v157;
                        v105 = *(char **)&v161;
                        v140 = *v138;
                        LOBYTE(v67) = (_BYTE)v159;
                        v89 = (char *)v156;
                        v49 = (unsigned __int64)v153;
                        LOWORD(v90) = v152;
                        if ( !v140 )
                          v140 = 46;
                        v92[1] = v140;
                        if ( v139 )
                        {
                          v141 = v105;
                          do
                            *v141++ = 48;
                          while ( v141 != &v92[v139 + 2] );
                          v105 += v139;
                        }
                      }
                      v106 = v11[72];
                      v97 = v105 + 4;
                      v105[3] = 48;
                      *v105 = v106;
                      *(_WORD *)(v105 + 1) = 12331;
                      goto LABEL_263;
                    case 'G':
                      *v92 = 48;
                      if ( (v67 & 0x10) != 0 )
                      {
                        if ( v54 )
                        {
                          HIDWORD(v151) = v90;
                          v152 = v49;
                          v153 = v92 + 2;
                          v156 = v89;
                          LODWORD(v157) = v67;
                          v159 = (_BYTE *)v54;
                          *(_QWORD *)&v161 = v54 - 1;
                          v116 = nl_langinfo(0x10000);
                          v117 = *(_QWORD *)&v161;
                          v118 = (__int64)v159;
                          v119 = *v116;
                          LOBYTE(v67) = (_BYTE)v157;
                          v89 = (char *)v156;
                          v97 = v153;
                          v49 = v152;
                          LOWORD(v90) = WORD2(v151);
                          if ( !v119 )
                            v119 = 46;
                          v92[1] = v119;
                          if ( v117 )
                          {
                            v120 = (__int64)&v92[v118 + 1];
                            v121 = v97;
                            do
                              *v121++ = 48;
                            while ( v121 != (char *)v120 );
                            v97 += v117;
                          }
                        }
                        else
                        {
                          LODWORD(v153) = v90;
                          v156 = (void *)v49;
                          v157 = v92 + 2;
                          v159 = v89;
                          LODWORD(v161) = v67;
                          v147 = nl_langinfo(0x10000);
                          LOBYTE(v67) = LOBYTE(v161);
                          v89 = v159;
                          v148 = *v147;
                          v97 = v157;
                          v49 = (unsigned __int64)v156;
                          LOWORD(v90) = (_WORD)v153;
                          if ( !v148 )
                            v148 = 46;
                          v92[1] = v148;
                        }
                        goto LABEL_263;
                      }
LABEL_262:
                      v97 = v92 + 1;
                      goto LABEL_263;
                  }
                  if ( v96 != 65 )
                    goto LABEL_200;
                  *v92 = 48;
                  *(_QWORD *)&v161 = v92 + 2;
                  v135 = v11[72];
                  v92[2] = 48;
                  v92[1] = v135 + 23;
                  if ( (v67 & 0x10) != 0 || (v136 = (__int64)(v92 + 3), v54) )
                  {
                    HIDWORD(v151) = v90;
                    v152 = v49;
                    v153 = v89;
                    v156 = (void *)v54;
                    LODWORD(v157) = v67;
                    v159 = v92 + 4;
                    v143 = nl_langinfo(0x10000);
                    v144 = v156;
                    v136 = (__int64)v159;
                    v145 = *v143;
                    LOBYTE(v67) = (_BYTE)v157;
                    v89 = v153;
                    v49 = v152;
                    LOWORD(v90) = WORD2(v151);
                    if ( !v145 )
                      v145 = 46;
                    v92[3] = v145;
                    if ( v144 )
                    {
                      v146 = (_BYTE *)v136;
                      do
                        *v146++ = 48;
                      while ( v146 != (_BYTE *)v144 + (_QWORD)v92 + 4 );
                      v136 += (__int64)v144;
                    }
                  }
                  v137 = v11[72];
                  v97 = (char *)(v136 + 3);
                  *(_WORD *)(v136 + 1) = 12331;
                  v92 = *(char **)&v161;
                  *(_BYTE *)v136 = v137 + 15;
LABEL_263:
                  LOWORD(v165) = v90;
                  v98 = v97 - v89;
                  if ( v49 > v97 - v89 )
                  {
                    v99 = v49 - v98;
                    v100 = &v97[v99];
                    v98 = &v97[v99] - v89;
                    if ( (v67 & 2) != 0 )
                    {
                      if ( v99 )
                      {
                        do
                          *v97++ = 32;
                        while ( v100 != v97 );
                      }
                    }
                    else if ( (v67 & 0x20) != 0 && v92 )
                    {
                      if ( v92 >= v97 )
                      {
                        v92 = v97;
                      }
                      else
                      {
                        v101 = -1LL;
                        do
                        {
                          v100[v101] = v97[v101];
                          --v101;
                        }
                        while ( v101 != v92 - 1 - v97 );
                      }
                      if ( v99 )
                      {
                        v102 = &v92[v99];
                        do
                          *v92++ = 48;
                        while ( v92 != v102 );
                      }
                    }
                    else
                    {
                      v112 = -1LL;
                      if ( v89 < v97 )
                      {
                        do
                        {
                          v100[v112] = v97[v112];
                          --v112;
                        }
                        while ( v89 - 1 - v97 != v112 );
                        v97 = v89;
                      }
                      if ( v99 )
                      {
                        v113 = &v97[v99];
                        do
                          *v97++ = 32;
                        while ( v97 != v113 );
                      }
                    }
                  }
                  if ( (unsigned __int64)v162 <= v98 )
                    goto LABEL_200;
                  v103 = v98 + v18;
                  v14 = v98 + v18;
                  if ( v10 - v18 <= v98 )
                  {
                    if ( __CFADD__(v98, v18) )
                    {
                      if ( v10 != -1LL )
                        goto LABEL_88;
                    }
                    else if ( v10 < v103 )
                    {
                      if ( v10 )
                      {
                        if ( (v10 & 0x8000000000000000LL) != 0LL )
                          goto LABEL_88;
                        v10 *= 2LL;
                        if ( v10 < v103 )
                          goto LABEL_373;
                      }
                      else
                      {
                        if ( v103 <= 0xC )
                        {
                          v10 = 12LL;
                          goto LABEL_280;
                        }
LABEL_373:
                        if ( v103 == -1LL )
                          goto LABEL_88;
                        v10 = v98 + v18;
                      }
LABEL_280:
                      if ( !v13 || v13 == src )
                      {
                        LOBYTE(v159) = v13 == src;
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v114 = (char *)malloc(v10);
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        if ( !v114 )
                          goto LABEL_88;
                        if ( v18 && (_BYTE)v159 )
                        {
                          v115 = (char *)memcpy(v114, v13, v18);
                          v89 = (char *)v162;
                          v98 = *(_QWORD *)&v161;
                          v13 = v115;
                        }
                        else
                        {
                          v13 = v114;
                        }
                      }
                      else
                      {
                        *(_QWORD *)&v161 = v98;
                        v162 = v89;
                        v104 = (char *)realloc(v13, v10);
                        if ( !v104 )
                          goto LABEL_88;
                        v89 = (char *)v162;
                        v98 = *(_QWORD *)&v161;
                        v13 = v104;
                      }
                    }
                  }
                  v162 = v89;
                  memcpy(&v13[v18], v89, v98);
                  if ( v162 != v175 )
                    free(v162);
                  goto LABEL_110;
                }
LABEL_375:
                v55 = 12LL;
                goto LABEL_190;
              }
            }
            v55 = 12LL;
            if ( v29 != 65 )
              v55 = 18LL;
            v54 = 0LL;
            if ( v29 != 65 )
              v54 = 6LL;
            goto LABEL_190;
          }
        }
        v30 = *((_DWORD *)v11 + 4);
        v31 = v160 + 1;
        *v160 = 37;
        if ( (v30 & 1) != 0 )
        {
          v32 = v160;
          v160[1] = 39;
          v31 = (char *)(v32 + 2);
        }
        if ( (v30 & 2) != 0 )
          *v31++ = 45;
        if ( (v30 & 4) != 0 )
          *v31++ = 43;
        if ( (v30 & 8) != 0 )
          *v31++ = 32;
        if ( (v30 & 0x10) != 0 )
          *v31++ = 35;
        if ( (v30 & 0x40) != 0 )
          *v31++ = 73;
        if ( (v30 & 0x20) != 0 )
          *v31++ = 48;
        v33 = (_BYTE *)*((_QWORD *)v11 + 3);
        v34 = (_BYTE *)*((_QWORD *)v11 + 4);
        if ( v33 != v34 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v34 - v33;
          memcpy(v31, v33, v34 - v33);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        v35 = (_BYTE *)*((_QWORD *)v11 + 6);
        v36 = (_BYTE *)*((_QWORD *)v11 + 7);
        if ( v35 != v36 )
        {
          v159 = v26;
          *(_QWORD *)&v161 = v36 - v35;
          memcpy(v31, v35, v36 - v35);
          v26 = v159;
          v31 += *(_QWORD *)&v161;
        }
        if ( (unsigned int)v162 <= 0x10 )
        {
          v37 = 1LL << (char)v162;
          if ( ((1LL << (char)v162) & 0x14180) != 0 )
            goto LABEL_125;
          if ( (v37 & 0x1000) != 0 )
          {
            *v31++ = 76;
          }
          else
          {
            if ( (v37 & 0x600) == 0 )
              goto LABEL_62;
            *v31++ = 108;
LABEL_125:
            *v31++ = 108;
          }
        }
LABEL_62:
        v38 = v11[72];
        v31[1] = 0;
        *v31 = v38;
        v39 = *((_QWORD *)v11 + 5);
        if ( v39 != -1 )
        {
          v40 = &v26[32 * v39];
          if ( *(_DWORD *)v40 == 5 )
          {
            LODWORD(v159) = 1;
            v165 = *((_DWORD *)v40 + 4);
            goto LABEL_65;
          }
LABEL_200:
          abort();
        }
        LODWORD(v159) = 0;
LABEL_65:
        v41 = *((_QWORD *)v11 + 8);
        if ( v41 != -1 )
        {
          v42 = &v26[32 * v41];
          if ( *(_DWORD *)v42 != 5 )
            goto LABEL_200;
          v43 = (int)v159;
          *(&v165 + (unsigned int)v159) = *((_DWORD *)v42 + 4);
          LODWORD(v159) = v43 + 1;
        }
        v44 = v18 + 2;
        if ( v18 >= 0xFFFFFFFFFFFFFFFELL )
        {
          if ( v10 != -1LL )
            goto LABEL_88;
        }
        else if ( v10 < v44 )
        {
          if ( v10 )
          {
            if ( (v10 & 0x8000000000000000LL) != 0LL )
              goto LABEL_88;
            v10 *= 2LL;
            if ( v10 >= v44 )
              goto LABEL_73;
          }
          else if ( v44 <= 0xC )
          {
            v10 = 12LL;
LABEL_73:
            if ( v13 && v13 != src )
            {
              v45 = (char *)realloc(v13, v10);
              if ( v45 )
                goto LABEL_76;
LABEL_88:
              v56 = v13;
              *(_QWORD *)&v161 = __errno_location();
LABEL_89:
              if ( v56 == src || !v56 )
              {
LABEL_91:
                if ( ptr )
                {
                  free(ptr);
LABEL_93:
                  if ( v171 != v174 )
                    free(v171);
                  if ( v168 != v169 )
                    free(v168);
                  v13 = 0LL;
                  **(_DWORD **)&v161 = 12;
                  return v13;
                }
LABEL_112:
                *(_QWORD *)&v161 = __errno_location();
                goto LABEL_93;
              }
LABEL_127:
              free(v56);
              goto LABEL_91;
            }
            LOBYTE(v161) = v13 == src;
            v94 = (char *)malloc(v10);
            v45 = v94;
            if ( !v94 )
              goto LABEL_88;
            if ( v18 && LOBYTE(v161) )
              v45 = (char *)memcpy(v94, v13, v18);
LABEL_76:
            v45[v18] = 0;
            v157 = v45;
            v46 = __errno_location();
            v47 = v157;
            v157 = v31;
            *(_QWORD *)&v161 = v46;
            LODWORD(v153) = *v46;
            while ( 2 )
            {
              v48 = 0x7FFFFFFFLL;
              v164 = -1;
              **(_DWORD **)&v161 = 0;
              if ( v10 - v18 <= 0x7FFFFFFF )
                v48 = v10 - v18;
              switch ( (int)v162 )
              {
                case 1:
                  v71 = (unsigned int)*((char *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 2:
                  v71 = *((unsigned __int8 *)v168 + 32 * *((_QWORD *)v11 + 10) + 16);
                  goto LABEL_150;
                case 3:
                  v71 = (unsigned int)*((__int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 4:
                  v71 = *((unsigned __int16 *)v168 + 16 * *((_QWORD *)v11 + 10) + 8);
                  goto LABEL_150;
                case 5:
                case 6:
                case 13:
                case 14:
                  v71 = *((unsigned int *)v168 + 8 * *((_QWORD *)v11 + 10) + 4);
LABEL_150:
                  v70 = &v47[v18];
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v149 = &v164;
                      goto LABEL_153;
                    }
                    goto LABEL_209;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 15:
                case 16:
                case 17:
                  v70 = &v47[v18];
                  v71 = *((_QWORD *)v168 + 4 * *((_QWORD *)v11 + 10) + 2);
                  v156 = v47;
                  if ( (_DWORD)v159 != 1 )
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v70,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              v71,
                              &v164,
                              v150);
LABEL_131:
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
LABEL_209:
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v70,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v166,
                            v71,
                            &v164);
LABEL_210:
                    v47 = (char *)v156;
LABEL_132:
                    v73 = v164;
                    if ( v164 < 0 )
                    {
LABEL_154:
                      if ( v157[1] )
                      {
                        v157[1] = 0;
                        continue;
                      }
                      if ( v72 < 0 )
                      {
                        v79 = **(_DWORD **)&v161;
                        if ( !**(_DWORD **)&v161 )
                        {
                          v79 = 84;
                          if ( (v11[72] & 0xEF) != 99 )
                            v79 = 22;
                        }
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        **(_DWORD **)&v161 = v79;
                        return 0LL;
                      }
LABEL_136:
                      v164 = v72;
                      v73 = v72;
LABEL_137:
                      if ( (unsigned int)(v73 + 1) < v48 )
                      {
                        v13 = v47;
                        v14 = v18 + v73;
                        **(_DWORD **)&v161 = (_DWORD)v153;
                        goto LABEL_110;
                      }
                      if ( v10 - v18 > 0x7FFFFFFE )
                      {
                        if ( v47 != src && v47 )
                          free(v47);
                        if ( ptr )
                          free(ptr);
                        if ( v171 != v174 )
                          free(v171);
                        if ( v168 != v169 )
                          free(v168);
                        v13 = 0LL;
                        **(_DWORD **)&v161 = 75;
                        return v13;
                      }
                      v74 = (unsigned int)(v73 + 2);
                      v75 = __CFADD__(v18, v74);
                      v76 = v18 + v74;
                      if ( (v10 & 0x8000000000000000LL) != 0LL )
                      {
                        if ( v10 != -1LL )
                          goto LABEL_202;
                      }
                      else
                      {
                        if ( v75 )
                          goto LABEL_202;
                        if ( 2 * v10 >= v76 )
                          v76 = 2 * v10;
                        if ( v10 < v76 )
                        {
                          v10 *= 2LL;
                          if ( v10 < v76 )
                          {
                            if ( v76 == -1LL )
                            {
LABEL_202:
                              v56 = v47;
                              goto LABEL_89;
                            }
                            v10 = v76;
                          }
                          v77 = v47 == src;
                          if ( !v47 || v47 == src )
                          {
                            v156 = v47;
                            v93 = (char *)malloc(v10);
                            v47 = (char *)v156;
                            if ( !v93 )
                              goto LABEL_202;
                            if ( v18 && v77 )
                              v47 = (char *)memcpy(v93, v156, v18);
                            else
                              v47 = v93;
                          }
                          else
                          {
                            v156 = v47;
                            v78 = (char *)realloc(v47, v10);
                            v47 = (char *)v156;
                            if ( !v78 )
                              goto LABEL_202;
                            v47 = v78;
                          }
                        }
                      }
                      continue;
                    }
LABEL_133:
                    if ( v73 < v48 && v47[v73 + v18] )
                      goto LABEL_200;
                    if ( v73 >= v72 )
                      goto LABEL_137;
                    goto LABEL_136;
                  }
                  v150 = &v164;
                  v149 = (int *)v71;
                  break;
                case 11:
                  v83 = *((_QWORD *)v11 + 10);
                  v84 = &v47[v18];
                  v156 = v47;
                  v85 = *((double *)v168 + 4 * v83 + 2);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            &v164,
                            v150);
                  }
                  else
                  {
                    if ( (_DWORD)v159 != 2 )
                    {
                      v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                              v84,
                              v48,
                              1LL,
                              -1LL,
                              v160,
                              &v164,
                              v85);
                      v47 = (char *)v156;
                      goto LABEL_132;
                    }
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v84,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            v85,
                            v166,
                            &v164);
                  }
                  v47 = (char *)v156;
                  goto LABEL_132;
                case 12:
                  v80 = *((_QWORD *)v11 + 10);
                  v81 = &v47[v18];
                  v156 = v47;
                  v82 = *((long double *)v168 + 2 * v80 + 1);
                  if ( (_DWORD)v159 == 1 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            v165,
                            *(_OWORD *)&v82,
                            &v164);
                    goto LABEL_210;
                  }
                  if ( (_DWORD)v159 != 2 )
                  {
                    v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                            v81,
                            v48,
                            1LL,
                            -1LL,
                            v160,
                            &v164,
                            *(_OWORD *)&v82);
                    goto LABEL_131;
                  }
                  v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                          v81,
                          v48,
                          1LL,
                          -1LL,
                          v160,
                          v165,
                          v166);
                  v47 = (char *)v156;
                  goto LABEL_132;
                default:
                  goto LABEL_408;
              }
              break;
            }
            v71 = v165;
LABEL_153:
            v72 = ((__int64 (*)(char *, unsigned __int64, __int64, __int64, const char *, ...))__snprintf_chk)(
                    v70,
                    v48,
                    1LL,
                    -1LL,
                    v160,
                    v71,
                    v149,
                    v150);
            v73 = v164;
            v47 = (char *)v156;
            if ( v164 < 0 )
              goto LABEL_154;
            goto LABEL_133;
          }
          if ( v18 != -3LL )
          {
            v10 = v18 + 2;
            goto LABEL_73;
          }
          goto LABEL_88;
        }
        v45 = v13;
        goto LABEL_76;
      }
      switch ( v28 )
      {
        case 18:
          v14 = v18;
          **((_BYTE **)v27 + 2) = v18;
          break;
        case 19:
          v14 = v18;
          **((_WORD **)v27 + 2) = v18;
          break;
        case 20:
          v14 = v18;
          **((_DWORD **)v27 + 2) = v18;
          break;
        case 21:
        case 22:
          v14 = v18;
          **((_QWORD **)v27 + 2) = v18;
          break;
        default:
LABEL_408:
          abort();
      }
LABEL_110:
      v12 = (_BYTE *)*((_QWORD *)v11 + 1);
      v11 += 88;
      v15 = *(_BYTE **)v11;
      ++v158;
      if ( v15 != v12 )
        goto LABEL_14;
LABEL_111:
      v18 = v14;
    }
    v107 = v18;
    v108 = v18 + 1;
    if ( v18 == -1LL )
    {
      if ( v10 != -1LL )
        goto LABEL_88;
    }
    else if ( v10 < v108 )
    {
      if ( v10 )
      {
        if ( (v10 & 0x8000000000000000LL) != 0LL )
          goto LABEL_88;
        v10 *= 2LL;
        if ( v10 >= v108 )
        {
LABEL_303:
          v109 = v13 == src;
          if ( !v13 || v13 == src )
          {
            v142 = (char *)malloc(v10);
            if ( !v142 )
              goto LABEL_88;
            if ( v107 && v109 )
              v13 = (char *)memcpy(v142, v13, v107);
            else
              v13 = v142;
          }
          else
          {
            v110 = (char *)realloc(v13, v10);
            if ( !v110 )
              goto LABEL_126;
            v13 = v110;
          }
          goto LABEL_307;
        }
      }
      else if ( v108 <= 0xC )
      {
        v10 = 12LL;
        goto LABEL_303;
      }
      if ( v18 == -2LL )
        goto LABEL_88;
      v10 = v18 + 1;
      goto LABEL_303;
    }
LABEL_307:
    v13[v107] = 0;
    if ( v10 > v108 && v13 != src )
    {
      v111 = (char *)realloc(v13, v108);
      if ( v111 )
        v13 = v111;
    }
    if ( ptr )
      free(ptr);
    if ( v171 != v174 )
      free(v171);
    if ( v168 != v169 )
      free(v168);
    *v155 = v107;
    return v13;
  }
  if ( v171 != v174 )
    free(v171);
  if ( v168 != v169 )
    free(v168);
  v13 = 0LL;
  *__errno_location() = 22;
  return v13;
}

__int64 __fastcall sub_40CAE0(int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned int v4; // ecx
  _QWORD *v5; // r10
  unsigned int v7; // ecx
  _DWORD *v8; // r10
  unsigned int v9; // ecx
  _DWORD *v10; // r10
  unsigned int v11; // ecx
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  _QWORD *v14; // r10
  long double *v15; // rcx
  unsigned int v16; // ecx
  void **v17; // r10
  void *v18; // rcx
  unsigned int v19; // ecx
  const char **v20; // r10
  const char *v21; // rcx

  v2 = a2[1];
  if ( *a2 )
  {
    v3 = 0LL;
    while ( 2 )
    {
      switch ( *(_DWORD *)v2 )
      {
        case 1:
        case 2:
          v11 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v12 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v12 + 2;
          }
          else
          {
            v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + v11);
            *a1 = v11 + 8;
          }
          *(_BYTE *)(v2 + 16) = *v12;
          goto LABEL_7;
        case 3:
        case 4:
          v9 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v10 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v10 + 2;
          }
          else
          {
            v10 = (_DWORD *)(*((_QWORD *)a1 + 2) + v9);
            *a1 = v9 + 8;
          }
          *(_WORD *)(v2 + 16) = *v10;
          goto LABEL_7;
        case 5:
        case 6:
        case 0xD:
        case 0xE:
          v7 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v8 = (_DWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v8 + 2;
          }
          else
          {
            v8 = (_DWORD *)(*((_QWORD *)a1 + 2) + v7);
            *a1 = v7 + 8;
          }
          *(_DWORD *)(v2 + 16) = *v8;
          goto LABEL_7;
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
          v4 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v5 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v5 + 1;
          }
          else
          {
            v5 = (_QWORD *)(*((_QWORD *)a1 + 2) + v4);
            *a1 = v4 + 8;
          }
          *(_QWORD *)(v2 + 16) = *v5;
          goto LABEL_7;
        case 0xB:
          v13 = a1[1];
          if ( v13 > 0xAF )
          {
            v14 = (_QWORD *)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v14 + 1;
          }
          else
          {
            v14 = (_QWORD *)(*((_QWORD *)a1 + 2) + v13);
            a1[1] = v13 + 16;
          }
          *(_QWORD *)(v2 + 16) = *v14;
          goto LABEL_7;
        case 0xC:
          v15 = (long double *)((*((_QWORD *)a1 + 1) + 15LL) & 0xFFFFFFFFFFFFFFF0LL);
          *((_QWORD *)a1 + 1) = v15 + 1;
          *(long double *)(v2 + 16) = *v15;
          goto LABEL_7;
        case 0xF:
          v19 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v20 = (const char **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v20 + 1;
          }
          else
          {
            v20 = (const char **)(*((_QWORD *)a1 + 2) + v19);
            *a1 = v19 + 8;
          }
          v21 = *v20;
          if ( !*v20 )
            v21 = "(NULL)";
          *(_QWORD *)(v2 + 16) = v21;
          goto LABEL_7;
        case 0x10:
          v16 = *a1;
          if ( (unsigned int)*a1 > 0x2F )
          {
            v17 = (void **)*((_QWORD *)a1 + 1);
            *((_QWORD *)a1 + 1) = v17 + 1;
          }
          else
          {
            v17 = (void **)(*((_QWORD *)a1 + 2) + v16);
            *a1 = v16 + 8;
          }
          v18 = *v17;
          if ( !*v17 )
            v18 = &unk_411020;
          *(_QWORD *)(v2 + 16) = v18;
LABEL_7:
          ++v3;
          v2 += 32LL;
          if ( *a2 <= v3 )
            return 0LL;
          continue;
        default:
          return 0xFFFFFFFFLL;
      }
    }
  }
  return 0LL;
}

__int64 __fastcall sub_40CD00(char *a1, _QWORD *a2, unsigned __int64 *a3)
{
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r13
  char *v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // r14
  char *v12; // r12
  char v13; // bl
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rbx
  _DWORD *v19; // r13
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  bool v22; // zf
  __int64 v23; // rax
  _BYTE *v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  _DWORD *v28; // rax
  int v29; // ecx
  unsigned __int64 v30; // rax
  int *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // r12
  _QWORD *v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  _DWORD *v39; // rax
  _DWORD *v40; // rsi
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rdx
  unsigned __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rax
  char *v47; // rdi
  bool v48; // cf
  unsigned __int64 v49; // rdx
  unsigned __int8 v50; // bl
  _QWORD *v51; // rdi
  unsigned __int64 v52; // r9
  _DWORD *v53; // rax
  char *i; // rcx
  char *v55; // rdx
  unsigned __int64 v56; // rax
  const void *v57; // rsi
  _QWORD *v58; // rdi
  unsigned __int64 v59; // r9
  _DWORD *v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  char *v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int8 v67; // si
  _BYTE *v68; // rdx
  unsigned __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rax
  _BYTE *v72; // rdi
  unsigned __int64 v73; // rdx
  unsigned __int8 v74; // bl
  _DWORD *v75; // rax
  _DWORD *src; // [rsp+8h] [rbp-80h]
  _QWORD *srca; // [rsp+8h] [rbp-80h]
  _QWORD *srcb; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  unsigned __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  unsigned __int64 v83; // [rsp+30h] [rbp-58h]
  char *v84; // [rsp+30h] [rbp-58h]
  unsigned __int64 v85; // [rsp+30h] [rbp-58h]
  int v86; // [rsp+30h] [rbp-58h]
  int v87; // [rsp+30h] [rbp-58h]
  _BYTE *v88; // [rsp+30h] [rbp-58h]
  char *v89; // [rsp+30h] [rbp-58h]
  _BYTE *v90; // [rsp+30h] [rbp-58h]
  _QWORD *v91; // [rsp+38h] [rbp-50h]
  __int64 v92; // [rsp+38h] [rbp-50h]
  _QWORD *v93; // [rsp+38h] [rbp-50h]
  __int64 v94; // [rsp+38h] [rbp-50h]
  __int64 v95; // [rsp+38h] [rbp-50h]
  __int64 v96; // [rsp+38h] [rbp-50h]
  __int64 v97; // [rsp+38h] [rbp-50h]
  __int64 v98; // [rsp+38h] [rbp-50h]
  unsigned __int64 v99; // [rsp+40h] [rbp-48h]
  unsigned __int64 v100; // [rsp+40h] [rbp-48h]
  unsigned __int64 v101; // [rsp+40h] [rbp-48h]
  unsigned __int64 v102; // [rsp+40h] [rbp-48h]
  unsigned __int64 v103; // [rsp+40h] [rbp-48h]
  unsigned __int64 v104; // [rsp+40h] [rbp-48h]
  _QWORD *v105; // [rsp+48h] [rbp-40h]
  _QWORD *v106; // [rsp+48h] [rbp-40h]
  _QWORD *v107; // [rsp+48h] [rbp-40h]
  _QWORD *v108; // [rsp+48h] [rbp-40h]
  _QWORD *v109; // [rsp+48h] [rbp-40h]
  _QWORD *v110; // [rsp+48h] [rbp-40h]

  v3 = a2 + 4;
  v4 = a2;
  v6 = 7LL;
  v7 = 7LL;
  v8 = 0LL;
  *a2 = 0LL;
  a2[1] = a2 + 4;
  v82 = a2 + 4;
  *a3 = 0LL;
  src = a3 + 2;
  a3[1] = (unsigned __int64)(a3 + 2);
  v80 = 0LL;
  v79 = 0LL;
  v81 = 0LL;
  while ( 1 )
  {
    if ( !*a1 )
    {
      v3[11 * v8] = a1;
      v4[2] = v79;
      v4[3] = v80;
      return 0LL;
    }
    v9 = a1 + 1;
    if ( *a1 == 37 )
      break;
LABEL_3:
    a1 = v9;
  }
  v11 = -1LL;
  v12 = (char *)&v3[11 * v8];
  *(_QWORD *)v12 = a1;
  *((_DWORD *)v12 + 4) = 0;
  *((_QWORD *)v12 + 3) = 0LL;
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = -1LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = -1LL;
  *((_QWORD *)v12 + 10) = -1LL;
  v13 = a1[1];
  if ( (unsigned __int8)(v13 - 48) > 9u )
    goto LABEL_16;
  v36 = a1 + 1;
  do
    ++v36;
  while ( (unsigned __int8)(*v36 - 48) <= 9u );
  if ( *v36 != 36 )
  {
    v11 = -1LL;
    goto LABEL_16;
  }
  v62 = 0LL;
  do
  {
    v63 = -1LL;
    v64 = v13 - 48;
    if ( v62 <= 0x1999999999999999LL )
      v63 = 10 * v62;
    v65 = v9;
    while ( 1 )
    {
      v13 = v9[1];
      v48 = __CFADD__(v63, v64);
      v66 = v63 + v64;
      v62 = v66;
      ++v9;
      v67 = v13 - 48;
      if ( !v48 )
        break;
      if ( v67 > 9u )
        goto LABEL_130;
      v63 = -1LL;
      v65 = v9;
      v64 = v13 - 48;
    }
  }
  while ( v67 <= 9u );
  v11 = v66 - 1;
  if ( v66 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    goto LABEL_130;
  v9 = v65 + 2;
  v13 = v65[2];
  while ( 1 )
  {
LABEL_16:
    v14 = v9 + 1;
    switch ( v13 )
    {
      case '\'':
        *((_DWORD *)v12 + 4) |= 1u;
        goto LABEL_15;
      case '-':
        *((_DWORD *)v12 + 4) |= 2u;
        goto LABEL_15;
      case '+':
        *((_DWORD *)v12 + 4) |= 4u;
        goto LABEL_15;
      case ' ':
        *((_DWORD *)v12 + 4) |= 8u;
        goto LABEL_15;
      case '#':
        *((_DWORD *)v12 + 4) |= 0x10u;
        goto LABEL_15;
    }
    if ( v13 != 48 )
      break;
    *((_DWORD *)v12 + 4) |= 0x20u;
LABEL_15:
    v13 = *v14;
    ++v9;
  }
  if ( v13 == 73 )
  {
    *((_DWORD *)v12 + 4) |= 0x40u;
    goto LABEL_15;
  }
  if ( v13 == 42 )
  {
    v16 = 1LL;
    *((_QWORD *)v12 + 3) = v9;
    *((_QWORD *)v12 + 4) = v14;
    if ( v79 )
      v16 = v79;
    v79 = v16;
    v17 = v9[1];
    if ( (unsigned __int8)(v9[1] - 48) > 9u )
      goto LABEL_39;
    v43 = v9 + 1;
    do
      ++v43;
    while ( (unsigned __int8)(*v43 - 48) <= 9u );
    if ( *v43 == 36 )
    {
      v44 = 0LL;
      do
      {
        v45 = -1LL;
        v46 = v17 - 48;
        if ( v44 <= 0x1999999999999999LL )
          v45 = 10 * v44;
        v47 = v14;
        while ( 1 )
        {
          v48 = __CFADD__(v46, v45);
          v49 = v46 + v45;
          v17 = v14[1];
          v44 = v49;
          ++v14;
          v50 = v17 - 48;
          if ( !v48 )
            break;
          if ( v50 > 9u )
            goto LABEL_130;
          v45 = -1LL;
          v47 = v14;
          v46 = v17 - 48;
        }
      }
      while ( v50 <= 9u );
      v18 = v49 - 1;
      if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDLL )
        goto LABEL_130;
      *((_QWORD *)v12 + 5) = v18;
      v14 = v47 + 2;
    }
    else
    {
LABEL_39:
      v18 = *((_QWORD *)v12 + 5);
      if ( v18 == -1LL )
      {
        *((_QWORD *)v12 + 5) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v18 = v81++;
      }
    }
    v19 = (_DWORD *)a3[1];
    if ( v6 > v18 )
    {
      v20 = *a3;
LABEL_42:
      if ( v20 <= v18 )
      {
        do
        {
          ++v20;
          v19[8 * v20 - 8] = 0;
        }
        while ( v20 <= v18 );
        *a3 = v20;
      }
      v21 = &v19[8 * v18];
      if ( *v21 )
      {
        if ( *v21 == 5 )
        {
          v13 = *v14;
          v9 = v14++;
          goto LABEL_25;
        }
        goto LABEL_131;
      }
      *v21 = 5;
      v13 = *v14;
      v9 = v14++;
      if ( v13 != 46 )
        goto LABEL_26;
LABEL_47:
      v22 = v9[1] == 42;
      *((_QWORD *)v12 + 6) = v9;
      if ( !v22 )
      {
        if ( (unsigned __int8)(v9[1] - 48) > 9u )
        {
          v9 = v14;
          v37 = 1LL;
        }
        else
        {
          do
            ++v14;
          while ( (unsigned __int8)(*v14 - 48) <= 9u );
          v37 = v14 - v9;
          v9 = v14;
        }
        *((_QWORD *)v12 + 7) = v14;
        v13 = *v14;
        if ( v80 >= v37 )
          v37 = v80;
        v80 = v37;
        goto LABEL_26;
      }
      v23 = 2LL;
      v24 = v9 + 2;
      *((_QWORD *)v12 + 7) = v9 + 2;
      if ( v80 >= 2 )
        v23 = v80;
      v80 = v23;
      v25 = v9[2];
      if ( (unsigned __int8)(v9[2] - 48) > 9u )
        goto LABEL_51;
      v68 = v9 + 2;
      do
        ++v68;
      while ( (unsigned __int8)(*v68 - 48) <= 9u );
      if ( *v68 == 36 )
      {
        v69 = 0LL;
        do
        {
          v70 = -1LL;
          v71 = v25 - 48;
          if ( v69 <= 0x1999999999999999LL )
            v70 = 10 * v69;
          v72 = v24;
          while ( 1 )
          {
            v48 = __CFADD__(v71, v70);
            v73 = v71 + v70;
            v25 = (char)*++v24;
            v69 = v73;
            v74 = v25 - 48;
            if ( !v48 )
              break;
            if ( v74 > 9u )
              goto LABEL_130;
            v70 = -1LL;
            v72 = v24;
            v71 = v25 - 48;
          }
        }
        while ( v74 <= 9u );
        v26 = v73 - 1;
        if ( v73 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
        {
          *((_QWORD *)v12 + 8) = v26;
          v24 = v72 + 2;
LABEL_52:
          v19 = (_DWORD *)a3[1];
          if ( v6 > v26 )
          {
            v27 = *a3;
            goto LABEL_54;
          }
          v59 = 2 * v6;
          if ( v59 <= v26 )
            v59 = v26 + 1;
          if ( v59 <= 0x7FFFFFFFFFFFFFFLL )
          {
            v108 = v4;
            v102 = v59;
            v96 = v7;
            v88 = v24;
            if ( src == v19 )
            {
              v75 = malloc(32 * v59);
              v24 = v88;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v75 )
                goto LABEL_162;
              v27 = *a3;
              v40 = src;
              v19 = v75;
            }
            else
            {
              v60 = realloc(v19, 32 * v59);
              v40 = (_DWORD *)a3[1];
              v24 = v88;
              v19 = v60;
              v7 = v96;
              v6 = v102;
              v4 = v108;
              if ( !v60 )
                goto LABEL_160;
              v27 = *a3;
              if ( src != v40 )
                goto LABEL_171;
            }
            v110 = v4;
            v104 = v6;
            v98 = v7;
            v90 = v24;
            memcpy(v19, v40, 32 * v27);
            v27 = *a3;
            v4 = v110;
            v6 = v104;
            v7 = v98;
            v24 = v90;
LABEL_171:
            a3[1] = (unsigned __int64)v19;
LABEL_54:
            if ( v27 <= v26 )
            {
              do
              {
                ++v27;
                v19[8 * v27 - 8] = 0;
              }
              while ( v27 <= v26 );
              *a3 = v27;
            }
            v28 = &v19[8 * v26];
            if ( !*v28 )
            {
              *v28 = 5;
              v9 = v24;
              v13 = *v24;
              goto LABEL_26;
            }
            if ( *v28 == 5 )
            {
              v13 = *v24;
              v9 = v24;
              goto LABEL_26;
            }
            goto LABEL_131;
          }
LABEL_159:
          v40 = v19;
          goto LABEL_160;
        }
      }
      else
      {
LABEL_51:
        v26 = *((_QWORD *)v12 + 8);
        if ( v26 != -1LL )
          goto LABEL_52;
        *((_QWORD *)v12 + 8) = v81;
        if ( v81 != -1LL )
        {
          v26 = v81++;
          goto LABEL_52;
        }
      }
LABEL_130:
      v19 = (_DWORD *)a3[1];
LABEL_131:
      if ( src != v19 )
      {
        srca = v4;
        free(v19);
        v4 = srca;
      }
      v51 = (_QWORD *)v4[1];
      if ( v82 != v51 )
        free(v51);
      *__errno_location() = 22;
      return 0xFFFFFFFFLL;
    }
    v38 = 2 * v6;
    if ( v38 <= v18 )
      v38 = v18 + 1;
    if ( v38 > 0x7FFFFFFFFFFFFFFLL )
      goto LABEL_159;
    v105 = v4;
    v99 = v38;
    v92 = v7;
    v84 = v14;
    if ( src == v19 )
    {
      v61 = malloc(32 * v38);
      v14 = v84;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v61 )
        goto LABEL_162;
      v20 = *a3;
      v40 = src;
      v19 = v61;
    }
    else
    {
      v39 = realloc(v19, 32 * v38);
      v40 = (_DWORD *)a3[1];
      v14 = v84;
      v19 = v39;
      v7 = v92;
      v6 = v99;
      v4 = v105;
      if ( !v39 )
        goto LABEL_160;
      v20 = *a3;
      if ( src != v40 )
        goto LABEL_93;
    }
    v109 = v4;
    v103 = v6;
    v97 = v7;
    v89 = v14;
    memcpy(v19, v40, 32 * v20);
    v20 = *a3;
    v4 = v109;
    v6 = v103;
    v7 = v97;
    v14 = v89;
LABEL_93:
    a3[1] = (unsigned __int64)v19;
    goto LABEL_42;
  }
  if ( (unsigned __int8)(v13 - 48) <= 9u )
  {
    *((_QWORD *)v12 + 3) = v9;
    if ( (unsigned __int8)(*v9 - 48) <= 9u )
    {
      for ( i = v9; ; ++i )
      {
        v55 = i + 1;
        if ( (unsigned __int8)(i[1] - 48) > 9u )
          break;
      }
      v14 = i + 2;
      v56 = v55 - v9;
      v9 = v55;
      if ( v79 >= v56 )
        v56 = v79;
      v79 = v56;
    }
    *((_QWORD *)v12 + 4) = v9;
    v13 = *v9;
  }
LABEL_25:
  if ( v13 == 46 )
    goto LABEL_47;
LABEL_26:
  v15 = 0;
  while ( 2 )
  {
    ++v9;
    if ( v13 == 104 )
    {
      v15 |= 1 << (v15 & 1);
      goto LABEL_33;
    }
    if ( v13 == 76 )
    {
      v15 |= 4u;
      goto LABEL_33;
    }
    if ( v13 == 108 || v13 == 106 || (v13 & 0xDF) == 90 || v13 == 116 )
    {
      v15 += 8;
LABEL_33:
      v13 = *v9;
      continue;
    }
    break;
  }
  switch ( v13 )
  {
    case '%':
      goto LABEL_70;
    case 'A':
    case 'E':
    case 'F':
    case 'G':
    case 'a':
    case 'e':
    case 'f':
    case 'g':
      v29 = 12;
      if ( v15 <= 15 )
        v29 = ((v15 & 4) != 0) + 11;
      goto LABEL_62;
    case 'C':
      v29 = 14;
      v13 = 99;
      goto LABEL_62;
    case 'S':
      v29 = 16;
      v13 = 115;
      goto LABEL_62;
    case 'X':
    case 'o':
    case 'u':
    case 'x':
      v29 = 10;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 8;
        if ( v15 <= 7 )
        {
          v29 = 2;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 6 : 4;
        }
      }
      goto LABEL_62;
    case 'c':
      v29 = (v15 > 7) + 13;
      goto LABEL_62;
    case 'd':
    case 'i':
      v29 = 9;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 7;
        if ( v15 <= 7 )
        {
          v29 = 1;
          if ( (v15 & 2) == 0 )
            v29 = (v15 & 1) == 0 ? 5 : 3;
        }
      }
      goto LABEL_62;
    case 'n':
      v29 = 22;
      if ( v15 <= 15 && (v15 & 4) == 0 )
      {
        v29 = 21;
        if ( v15 <= 7 )
        {
          v29 = 18;
          if ( (v15 & 2) == 0 )
            v29 = ((v15 & 1) == 0) + 19;
        }
      }
      goto LABEL_62;
    case 'p':
      v29 = 17;
      goto LABEL_62;
    case 's':
      v29 = (v15 > 7) + 15;
LABEL_62:
      if ( v11 == -1LL )
      {
        *((_QWORD *)v12 + 10) = v81;
        if ( v81 == -1LL )
          goto LABEL_130;
        v11 = v81++;
      }
      else
      {
        *((_QWORD *)v12 + 10) = v11;
      }
      v19 = (_DWORD *)a3[1];
      if ( v6 > v11 )
        goto LABEL_65;
      v52 = 2 * v6;
      if ( v52 <= v11 )
        v52 = v11 + 1;
      if ( v52 > 0x7FFFFFFFFFFFFFFLL )
        goto LABEL_159;
      v106 = v4;
      v100 = v52;
      v94 = v7;
      v86 = v29;
      if ( src == v19 )
      {
        v53 = malloc(32 * v52);
        v29 = v86;
        v7 = v94;
        v6 = v100;
        v4 = v106;
        if ( !v53 )
          goto LABEL_162;
        goto LABEL_158;
      }
      v53 = realloc(v19, 32 * v52);
      v29 = v86;
      v7 = v94;
      v19 = v53;
      v6 = v100;
      v4 = v106;
      if ( !v53 )
        goto LABEL_210;
      if ( src == (_DWORD *)a3[1] )
      {
        v19 = src;
LABEL_158:
        v57 = v19;
        v107 = v4;
        v101 = v6;
        v19 = v53;
        v95 = v7;
        v87 = v29;
        memcpy(v53, v57, 32 * *a3);
        v4 = v107;
        v29 = v87;
        v6 = v101;
        v7 = v95;
      }
      a3[1] = (unsigned __int64)v19;
LABEL_65:
      v30 = *a3;
      if ( *a3 <= v11 )
      {
        do
        {
          ++v30;
          v19[8 * v30 - 8] = 0;
        }
        while ( v30 <= v11 );
        *a3 = v30;
      }
      v31 = &v19[8 * v11];
      if ( *v31 )
      {
        if ( *v31 != v29 )
          goto LABEL_131;
      }
      else
      {
        *v31 = v29;
      }
LABEL_70:
      v12[72] = v13;
      v32 = *v4;
      *((_QWORD *)v12 + 1) = v9;
      v8 = v32 + 1;
      *v4 = v32 + 1;
      if ( v7 > (unsigned __int64)(v32 + 1) )
      {
        v3 = (_QWORD *)v4[1];
        goto LABEL_3;
      }
      if ( v7 >= 0 )
      {
        v33 = 2 * v7;
        if ( (unsigned __int64)(2 * v7) <= 0x2E8BA2E8BA2E8BALL )
        {
          v34 = (_QWORD *)v4[1];
          v91 = v4;
          v83 = v6;
          if ( v82 == v34 )
          {
            v41 = malloc(176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v41;
            if ( !v41 )
            {
              v40 = (_DWORD *)a3[1];
              if ( src != v40 )
                goto LABEL_161;
              goto LABEL_164;
            }
          }
          else
          {
            v35 = realloc(v34, 176 * v7);
            v6 = v83;
            v4 = v91;
            v3 = v35;
            if ( !v35 )
              goto LABEL_210;
            v34 = (_QWORD *)v91[1];
            v8 = *v91;
            if ( v82 != v34 )
              goto LABEL_77;
          }
          v93 = v4;
          v85 = v6;
          v42 = memcpy(v3, v34, 88 * v8);
          v4 = v93;
          v6 = v85;
          v3 = v42;
          v8 = *v93;
LABEL_77:
          v4[1] = v3;
          v7 = v33;
          goto LABEL_3;
        }
      }
LABEL_210:
      v40 = (_DWORD *)a3[1];
LABEL_160:
      if ( src != v40 )
      {
LABEL_161:
        srcb = v4;
        free(v40);
        v4 = srcb;
      }
LABEL_162:
      v58 = (_QWORD *)v4[1];
      if ( v82 != v58 )
        free(v58);
LABEL_164:
      *__errno_location() = 12;
      result = 0xFFFFFFFFLL;
      break;
    default:
      goto LABEL_130;
  }
  return result;
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40DA80(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_6142A8 )
    v1 = (void *)qword_6142A8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40DA98(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_613E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
