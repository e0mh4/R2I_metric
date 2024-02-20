#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __usercall main(char **a1, char **a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rbp@1
  char *v5; // rbx@1
  char *v6; // rax@1
  char v7; // al@1
  char v8; // r14@1
  struct lconv *v9; // rax@1
  char *v10; // rcx@1
  char *v11; // rdx@3
  const unsigned __int16 **v12; // r13@5
  const __int32_t **v13; // rax@5
  signed __int64 v14; // rdx@5
  char v15; // si@6
  signed __int64 v16; // rdi@7
  int v17; // esi@7
  const __int32_t *v18; // rcx@9
  unsigned __int16 v19; // cx@10
  unsigned __int16 v20; // dx@12
  signed __int64 v21; // r14@16
  char *v22; // rax@17
  char *v23; // rbx@17
  size_t v24; // rax@17
  size_t v25; // r15@17
  __int64 v26; // rax@17
  unsigned __int64 v27; // rdx@17
  const unsigned __int16 *v28; // r11@18
  char *v29; // rdi@18
  __int64 v30; // r8@18
  _BYTE *v31; // rcx@18
  __int64 v32; // rsi@19
  _BYTE *v33; // r9@19
  int v34; // er14@24
  __int64 v35; // r13@24
  int v36; // er14@29
  __int64 v37; // r13@29
  __m128i v38; // xmm1@29
  const char *v39; // rsi@34
  __int64 v40; // rdx@34
  double v41; // xmm0_8@34
  void *v42; // rdi@34
  __int64 *v43; // rax@36
  unsigned __int64 v44; // r15@36
  __int64 v45; // r14@36
  __int64 *v46; // r13@36
  __int64 v47; // rax@39
  __int64 v48; // rdx@42
  int v49; // edx@44
  __int64 v50; // rax@44
  int v51; // eax@50
  __int64 v52; // rcx@50
  __int64 v53; // rax@52
  __int64 v54; // rax@55
  char v55; // dl@64
  char v56; // al@64
  int v57; // eax@64
  __int64 v58; // rcx@65
  int v59; // eax@66
  char *v60; // rax@78
  void **v61; // rdi@79
  signed __int64 v62; // rcx@79
  __int64 v63; // rbx@83
  unsigned __int64 v64; // rax@87
  char v65; // al@97
  unsigned __int64 v66; // r15@98
  unsigned __int64 v67; // r13@98
  __int64 v68; // rax@101
  __int64 v69; // rax@101
  __int64 v70; // r14@101
  __int64 v71; // rax@101
  char *v72; // rax@101
  signed __int64 v73; // r13@102
  const char *v74; // rax@102
  const char *v75; // rax@102
  __int64 v76; // rax@103
  __int64 v77; // rax@103
  __int64 v78; // r15@103
  char *v79; // rax@103
  char v80; // al@104
  char *v81; // rax@106
  signed __int64 v82; // rdx@107
  char *v83; // rax@117
  unsigned int v84; // eax@119
  char *v85; // rax@122
  const char *v86; // rdi@123
  char *v87; // rdx@123
  char *v88; // ST28_8@124
  int v89; // eax@124
  int v90; // eax@126
  int v91; // er11@126
  __int64 v92; // rax@132
  __int64 v93; // rbp@132
  char *v94; // rax@132
  unsigned __int64 v95; // rax@132
  char *v96; // rax@132
  char *v97; // rdx@134
  int v98; // eax@135
  char *v99; // rdx@139
  unsigned int v100; // ecx@140
  int v101; // eax@143
  signed __int64 v102; // rcx@152
  __int64 *v103; // rdi@152
  _BYTE *v104; // rax@155
  __int64 v105; // rdx@155
  __int64 v106; // rcx@155
  _BYTE *v107; // rax@159
  __int64 v108; // rax@162
  __int64 v109; // rdx@162
  __int64 *v110; // rcx@162
  const char *v111; // rdi@165
  char *v112; // rdx@165
  int v113; // eax@166
  char *v114; // rdx@171
  char *v115; // rdi@173
  signed int v116; // eax@173
  void *v117; // rax@178
  char v118; // al@182
  char v119; // r12@182
  char *v120; // rax@186
  char *v121; // rax@190
  unsigned __int64 v122; // rax@196
  FILE *v123; // r14@202
  int v124; // ebx@203
  __int64 v125; // rax@203
  size_t v126; // r12@205
  char *v127; // r15@207
  char *v128; // rbp@207
  char *v129; // rdi@210
  size_t v130; // rdx@211
  char *v131; // rax@213
  void *v132; // rax@217
  char v133; // bl@219
  __int64 result; // rax@221
  char *v135; // rax@224
  __int64 v136; // rax@224
  __int64 v137; // rbp@224
  char *v138; // rax@224
  char *v139; // rax@225
  __int64 v140; // rax@233
  signed __int64 v141; // rcx@236
  __int64 *v142; // rdi@236
  _BYTE *v143; // rax@239
  signed __int64 v144; // rcx@239
  _BYTE *v145; // rax@244
  pthread_mutex_t *v146; // rax@246
  _BYTE *v147; // rax@246
  __int64 v148; // rcx@246
  _BYTE *v149; // rax@251
  __int64 v150; // rdx@252
  void *v151; // rax@257
  const char *v152; // rsi@257
  void *v153; // rbx@257
  char *v154; // rax@260
  const char **v155; // rbp@261
  bool v156; // cf@261
  bool v157; // zf@261
  __int64 v158; // rbx@261
  signed __int64 v159; // rcx@263
  char *v160; // rdi@263
  const char *v161; // rsi@263
  int v162; // eax@270
  signed __int64 v163; // rax@275
  char *v164; // r15@277
  const char *v165; // rsi@278
  void *v166; // rax@282
  char *v167; // r14@282
  __int64 v168; // rax@282
  __int64 v169; // r13@282
  char v170; // r12@285
  char *v171; // rbx@288
  __int64 v172; // rax@289
  signed __int64 v173; // rbp@289
  rlim_t v174; // rax@293
  __int64 *v175; // rax@194
  char *v176; // rax@295
  char *v177; // rax@305
  char *v178; // rax@314
  signed __int64 v179; // rdx@315
  unsigned __int64 v180; // rax@315
  __int64 v181; // rsi@319
  unsigned __int64 v182; // rcx@321
  bool v183; // cf@324
  bool v184; // zf@324
  char *v185; // rdi@325
  signed __int64 v186; // rcx@325
  char *v187; // rsi@325
  bool v188; // al@329
  rlim_t v189; // r14@334
  unsigned __int64 v190; // r14@339
  char *v191; // ST20_8@342
  double v192; // xmm2_8@342
  double v193; // xmm0_8@342
  unsigned __int64 v194; // rax@350
  int v195; // eax@354
  __int64 v196; // rbp@220
  char *v197; // rax@220
  char *v198; // rax@220
  __int64 v199; // rax@356
  __int64 i; // rdx@356
  _QWORD *v201; // rbx@360
  void *v202; // rax@362
  void *v203; // rbp@362
  void *v204; // rdx@362
  signed __int64 v205; // rax@363
  __int64 v206; // rax@369
  __int64 v207; // rdx@369
  __int64 *v208; // rcx@369
  _BYTE *v209; // rax@374
  __int64 v210; // rdx@374
  __int64 v211; // rcx@374
  __int64 v212; // rdx@378
  char *v213; // rax@383
  unsigned __int64 v214; // rax@387
  signed __int64 v215; // rdx@387
  double v216; // xmm1_8@402
  __int64 v217; // rax@408
  __int64 v218; // rbx@408
  char *v219; // rax@408
  char *v220; // rax@408
  char *v221; // rax@413
  const char *v222; // rsi@416
  const char *v223; // rbx@416
  char *v224; // rax@417
  char *v225; // rax@419
  __int64 v226; // rax@420
  __int64 v227; // rbx@420
  char *v228; // rax@420
  char *v229; // rax@421
  char *v230; // rax@422
  char *v231; // rax@423
  char *v232; // rax@424
  __int64 v233; // rax@433
  __int64 v234; // rbp@433
  char *v235; // rbx@433
  char *v236; // rax@433
  __int64 v237; // rax@433
  __int64 v238; // rbp@433
  char *v239; // rax@433
  char *v240; // rax@434
  __int64 v241; // rax@436
  __int64 v242; // rbx@436
  char *v243; // rax@436
  const char *v244; // rsi@439
  FILE *v245; // rbx@439
  char *v246; // rsi@440
  rlim_t v247; // rbx@441
  bool v248; // cf@442
  bool v249; // zf@442
  char *v250; // r8@442
  _BYTE *v251; // rdx@445
  signed __int64 v252; // rcx@445
  char *v253; // rdi@445
  __int64 v254; // rax@449
  __int64 v255; // rbx@449
  char *v256; // rax@449
  __int64 v257; // rax@450
  __int64 v258; // rbx@450
  char *v259; // rax@450
  __int64 v260; // rax@452
  __int64 v261; // rbx@452
  char *v262; // rax@452
  __int64 v263; // rax@453
  __int64 v264; // rbx@453
  char *v265; // rax@453
  FILE *v266; // [sp+0h] [bp-388h]@0
  char *src; // [sp+8h] [bp-380h]@0
  char *v268; // [sp+10h] [bp-378h]@36
  char *v269; // [sp+10h] [bp-378h]@205
  char *s1; // [sp+18h] [bp-370h]@36
  char *s1a; // [sp+18h] [bp-370h]@203
  char *s1b; // [sp+18h] [bp-370h]@280
  char *file; // [sp+20h] [bp-368h]@36
  char *v274; // [sp+28h] [bp-360h]@1
  signed __int64 v275; // [sp+30h] [bp-358h]@0
  signed __int64 v276; // [sp+38h] [bp-350h]@1
  __int64 *v277; // [sp+40h] [bp-348h]@36
  pthread_mutex_t *mutex; // [sp+48h] [bp-340h]@0
  rlim_t v279; // [sp+50h] [bp-338h]@36
  unsigned int v280; // [sp+50h] [bp-338h]@119
  signed __int64 v281; // [sp+58h] [bp-330h]@0
  char **v282; // [sp+60h] [bp-328h]@0
  char *v283; // [sp+68h] [bp-320h]@0
  char v284; // [sp+70h] [bp-318h]@101
  struct rlimit v285; // [sp+90h] [bp-2F8h]@45
  void *dest; // [sp+C0h] [bp-2C8h]@101
  __int64 v287; // [sp+C8h] [bp-2C0h]@212
  char *v288; // [sp+D0h] [bp-2B8h]@213
  char *v289; // [sp+D8h] [bp-2B0h]@213
  __int64 v290; // [sp+E0h] [bp-2A8h]@292
  char v291; // [sp+F0h] [bp-298h]@281
  __int64 v292; // [sp+100h] [bp-288h]@152
  __int64 v293; // [sp+108h] [bp-280h]@157
  __int64 v294; // [sp+110h] [bp-278h]@36
  __int64 v295; // [sp+118h] [bp-270h]@160
  char v296; // [sp+139h] [bp-24Fh]@252
  __int64 v297; // [sp+150h] [bp-238h]@34
  __int128 v298; // [sp+158h] [bp-230h]@34
  __int128 v299; // [sp+168h] [bp-220h]@34
  __int128 v300; // [sp+178h] [bp-210h]@34
  __int128 v301; // [sp+188h] [bp-200h]@34
  void *ptr; // [sp+1A0h] [bp-1E8h]@79
  char v303; // [sp+1A8h] [bp-1E0h]@277
  __int64 v304; // [sp+1B0h] [bp-1D8h]@207
  __int64 v305; // [sp+1B8h] [bp-1D0h]@207
  __int64 v306; // [sp+1C0h] [bp-1C8h]@91
  __int64 v307; // [sp+1C8h] [bp-1C0h]@94
  pthread_cond_t cond; // [sp+1D0h] [bp-1B8h]@97
  struct rlimit rlimits; // [sp+230h] [bp-158h]@26
  __m128i v310; // [sp+248h] [bp-140h]@29
  __m128i v311; // [sp+258h] [bp-130h]@29
  __m128i v312; // [sp+268h] [bp-120h]@29
  __m128i v313; // [sp+278h] [bp-110h]@29
  __m128i v314; // [sp+288h] [bp-100h]@29
  __m128i v315; // [sp+298h] [bp-F0h]@29
  __m128i v316; // [sp+2A8h] [bp-E0h]@29
  int v317; // [sp+2B8h] [bp-D0h]@29

  v4 = (unsigned __int64)a1;
  v5 = (char *)a3;
  v6 = getenv("POSIXLY_CORRECT");
  v276 = (signed __int64)v6;
  LOBYTE(a4) = v6 != 0LL;
  LOBYTE(src) = (unsigned int)(sub_40DBE0("POSIXLY_CORRECT") - 200112) > 0x2B8;
  sub_40DC60(*a1);
  v274 = setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  status = 2;
  byte_61CBA1 = sub_40BD10(
                  3LL,
                  "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  v7 = sub_40BD10(
         2LL,
         "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  v8 = v7;
  byte_61CBA0 = v7;
  v9 = localeconv();
  v10 = v9->decimal_point;
  dword_61CBA8 = *v9->decimal_point;
  if ( !(_BYTE)dword_61CBA8 || v10[1] )
    dword_61CBA8 = 46;
  v11 = v9->thousands_sep;
  dword_61CBA4 = (unsigned __int8)*v11;
  if ( !(_BYTE)dword_61CBA4 || v11[1] )
    dword_61CBA4 = -1;
  byte_61C758 = 0;
  v12 = __ctype_b_loc();
  v13 = __ctype_toupper_loc();
  v14 = 0LL;
  do
  {
    while ( 1 )
    {
      v15 = 1;
      v19 = (*v12)[v14];
      if ( v19 & 1 )
        break;
      if ( v14 != 10 )
      {
        v15 = 0;
        break;
      }
      v20 = (*v12)[10];
      byte_61CA8A = 1;
      byte_61C88A = 0;
      byte_61C98A = ((v20 >> 14) ^ 1) & 1;
      byte_61C78A = (*v13)[10];
      v14 = 11LL;
    }
    byte_61CA80[v14] = v15;
    v16 = v14;
    byte_61C980[v14] = ((v19 >> 14) ^ 1) & 1;
    v17 = 0;
    if ( !(v19 & 8) )
    {
      LOBYTE(v17) = v14 == 10;
      v17 = (v17 | v19 & 1) ^ 1;
    }
    v18 = *v13;
    byte_61C880[v14++] = v17;
    *(_BYTE *)(v14 + 6408063) = v18[v16];
  }
  while ( v14 != 256 );
  if ( v8 )
  {
    LODWORD(v266) = (_DWORD)v5;
    v21 = 1LL;
    do
    {
      v22 = nl_langinfo((signed int)v21 + 131085);
      v23 = v22;
      v24 = strlen(v22);
      v25 = v24;
      LODWORD(v26) = sub_411210(v24 + 1);
      v27 = 4 * v21;
      qword_61C430[v27 / 2] = v26;
      dword_61C438[v27] = v21;
      if ( v25 )
      {
        v28 = *v12;
        v29 = v23;
        v30 = 0LL;
        v31 = (_BYTE *)v26;
        do
        {
          v32 = (unsigned __int8)*v29;
          v33 = v31;
          if ( !(v28[v32] & 1) )
          {
            ++v30;
            *v31 = byte_61C780[v32];
            v31 = (_BYTE *)(v26 + v30);
            v33 = (_BYTE *)(v26 + v30);
          }
          ++v29;
        }
        while ( &v23[v25] != v29 );
      }
      else
      {
        v33 = (_BYTE *)v26;
      }
      ++v21;
      *v33 = 0;
    }
    while ( v21 != 13 );
    v5 = (char *)(unsigned int)v266;
    qsort(&off_61C440, 0xCuLL, 0x10uLL, compar);
  }
  v34 = 14;
  v35 = 0LL;
  sigemptyset(&newmask);
  while ( 1 )
  {
    sigaction(v34, 0LL, (struct sigaction *)&rlimits);
    if ( rlimits.rlim_cur != 1 )
      sigaddset(&newmask, v34);
    if ( ++v35 == 11 )
      break;
    v34 = dword_414980[v35];
  }
  rlimits.rlim_cur = (rlim_t)&loc_405D80;
  v36 = 14;
  v317 = 0;
  v37 = 0LL;
  *(struct rlimit *)((char *)&rlimits + 8) = (struct rlimit)_mm_load_si128((const __m128i *)&newmask);
  v38 = _mm_load_si128((const __m128i *)&newmask.__val[12]);
  v310 = _mm_load_si128((const __m128i *)&newmask.__val[2]);
  v311 = _mm_load_si128((const __m128i *)&newmask.__val[4]);
  v312 = _mm_load_si128((const __m128i *)&newmask.__val[6]);
  v313 = _mm_load_si128((const __m128i *)&newmask.__val[8]);
  v314 = _mm_load_si128((const __m128i *)&newmask.__val[10]);
  v315 = v38;
  v316 = _mm_load_si128((const __m128i *)&newmask.__val[14]);
  while ( 2 )
  {
    if ( !sigismember(&newmask, v36) )
    {
      if ( ++v37 == 11 )
        break;
      goto LABEL_31;
    }
    ++v37;
    sigaction(v36, (const struct sigaction *)&rlimits, 0LL);
    if ( v37 != 11 )
    {
LABEL_31:
      v36 = dword_414980[v37];
      continue;
    }
    break;
  }
  v39 = 0LL;
  signal(17, 0LL);
  sub_413F20(sub_407890, 0LL);
  v41 = 0.0;
  v298 = 0LL;
  v297 = -1LL;
  *((_QWORD *)&v298 + 1) = -1LL;
  v299 = 0LL;
  v42 = (void *)(8LL * (signed int)v5);
  v300 = 0LL;
  v301 = 0LL;
  if ( (signed int)v5 & 0x1000000000000000LL || (unsigned __int64)(signed int)v5 >> 61 != 0 )
    goto LABEL_454;
  LODWORD(v43) = sub_411210(v42);
  v44 = 0LL;
  LOBYTE(v275) = 0;
  LODWORD(v45) = 0;
  v46 = v43;
  LOBYTE(v266) = 0;
  file = 0LL;
  v268 = 0LL;
  v279 = 0LL;
  s1 = 0LL;
  v277 = &v294;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        LODWORD(v285.rlim_cur) = -1;
        if ( (_DWORD)v45 == -1 )
        {
LABEL_46:
          v47 = dword_61C57C;
LABEL_43:
          if ( (signed int)v5 > (signed int)v47 )
          {
            v49 = v47 + 1;
            v50 = *(_QWORD *)(v4 + 8 * v47);
            dword_61C57C = v49;
            v46[v44++] = v50;
            continue;
          }
          goto LABEL_437;
        }
        break;
      }
      if ( !v44 || !(_BYTE)a4 )
      {
LABEL_50:
        v39 = (const char *)v4;
        v51 = sub_412F30((unsigned int)v5, v4, "-bcCdfghik:mMno:rRsS:t:T:uVy:z", off_414B40, &v285);
        LODWORD(v45) = v51;
        if ( v51 == -1 )
          goto LABEL_46;
        switch ( v51 + 131 )
        {
          case 265:
            LODWORD(v53) = sub_40A910("--sort", nptr, off_414AE0, "ghMnRV", 1LL, off_61C510);
            LODWORD(v45) = aGhmnrv[v53];
            goto LABEL_53;
          case 208:
          case 213:
          case 217:
          case 229:
          case 231:
          case 233:
          case 234:
          case 235:
          case 236:
          case 241:
          case 245:
LABEL_53:
            v39 = (const char *)&v297;
            LOWORD(rlimits.rlim_cur) = (unsigned __int8)v45;
            sub_405C00(&rlimits, &v297, 2LL, v52);
            continue;
          case 259:
            v39 = nptr;
            LODWORD(v45) = 99;
            if ( nptr )
            {
              LODWORD(v54) = sub_40A910("--check", nptr, off_414B20, byte_414B18, 1LL, off_61C510);
              LODWORD(v45) = byte_414B18[v54];
            }
            goto LABEL_56;
          case 198:
          case 230:
LABEL_56:
            if ( (_BYTE)v266 && (char)v266 != (_DWORD)v45 )
              goto LABEL_429;
            LOBYTE(v266) = v45;
            continue;
          case 266:
            v39 = 0LL;
            mutex = (pthread_mutex_t *)nptr;
            v280 = v285.rlim_cur;
            v84 = sub_411680(nptr);
            if ( v84 == 1 )
            {
              v279 = -1LL;
            }
            else
            {
              if ( v84 )
                sub_411AB0(v84, v280, 4294967175LL, off_414B40, mutex);
              v279 = rlimits.rlim_cur;
              if ( !rlimits.rlim_cur )
              {
                v85 = dcgettext(0LL, "number in parallel must be nonzero", 5);
                v39 = 0LL;
                error(2, 0, v85, v266);
LABEL_123:
                v86 = s1;
                v87 = nptr;
                if ( s1 )
                {
                  v39 = nptr;
                  v88 = nptr;
                  v89 = strcmp(v86, nptr);
                  v87 = v88;
                  if ( v89 )
                    goto LABEL_422;
                }
                s1 = v87;
              }
            }
            continue;
          case 264:
            goto LABEL_123;
          case 263:
            v281 = (signed __int64)nptr;
            LODWORD(v282) = v285.rlim_cur;
            v39 = (const char *)&rlimits;
            LODWORD(mutex) = sub_411B40(nptr);
            v90 = getrlimit(RLIMIT_NOFILE, &rlimits);
            v91 = 17;
            if ( !v90 )
              v91 = LODWORD(rlimits.rlim_cur) - 3;
            if ( (_DWORD)mutex )
            {
              if ( (_DWORD)mutex != 1 )
                sub_411AB0((unsigned int)mutex, (unsigned int)v282, 4294967172LL, off_414B40, v281);
            }
            else
            {
              dword_61C420 = (signed int)dest;
              if ( dest == (void *)(unsigned int)dest )
              {
                if ( (unsigned int)dest <= 1 )
                {
                  LODWORD(v233) = sub_40F880(v281, &rlimits);
                  v234 = v233;
                  v235 = (char *)off_414B40[4 * (signed int)v282];
                  v236 = dcgettext(0LL, "invalid --%s argument %s", 5);
                  error(0, 0, v236, v235, v234, v266);
                  LODWORD(v237) = sub_40F880("2", 0LL);
                  v238 = v237;
                  v239 = dcgettext(0LL, "minimum --%s argument is %s", 5);
                  error(2, 0, v239, v235, v238);
                  goto LABEL_434;
                }
                if ( (unsigned int)dest <= v91 )
                  continue;
              }
            }
            LODWORD(v266) = v91;
            LODWORD(v92) = sub_40F880(v281, &rlimits);
            v93 = v92;
            v5 = (char *)off_414B40[4 * (signed int)v282];
            v94 = dcgettext(0LL, "--%s argument %s too large", 5);
            error(0, 0, v94, v5, v93, v266);
            LODWORD(v95) = sub_40D330((unsigned int)v266, &ptr);
            v4 = v95;
            v96 = dcgettext(0LL, "maximum --%s argument with current rlimit is %s", 5);
            v39 = 0LL;
            error(2, 0, v96, v5, v4);
LABEL_133:
            v268 = nptr;
            continue;
          case 262:
            goto LABEL_133;
          case 260:
            v97 = nptr;
            if ( arg )
            {
              v39 = nptr;
              mutex = (pthread_mutex_t *)nptr;
              v98 = strcmp(arg, nptr);
              v97 = (char *)mutex;
              if ( v98 )
                goto LABEL_423;
            }
            arg = v97;
            continue;
          case 261:
            byte_61C740 = 1;
            continue;
          case 253:
            byte_61C500 = 0;
            continue;
          case 252:
            v99 = nptr;
            if ( *(char **)(v4 + 8LL * dword_61C57C - 8) == nptr )
            {
              while ( 1 )
              {
                v100 = *v99;
                v39 = (const char *)v100;
                if ( v100 - 48 > 9 )
                  break;
                ++v99;
              }
              dword_61C57C -= (_BYTE)v100 != 0;
            }
            continue;
          case 248:
            byte_61C759 = 1;
            continue;
          case 247:
            v101 = *nptr;
            if ( !*nptr )
            {
              v221 = dcgettext(0LL, "empty tab", 5);
              error(2, 0, v221, v266);
              goto LABEL_414;
            }
            if ( nptr[1] )
            {
              v39 = "\\0";
              mutex = (pthread_mutex_t *)nptr;
              if ( strcmp(nptr, "\\0") )
              {
                LODWORD(v226) = sub_40F880(mutex, "\\0");
                v227 = v226;
                v228 = dcgettext(0LL, "multi-character tab %s", 5);
                error(2, 0, v228, v227, v266);
LABEL_421:
                v229 = dcgettext(0LL, "incompatible tabs", 5);
                error(2, 0, v229, v266);
LABEL_422:
                v230 = dcgettext(0LL, "multiple random sources specified", 5);
                error(2, 0, v230, v266);
LABEL_423:
                v231 = dcgettext(0LL, "multiple compress programs specified", 5);
                error(2, 0, v231, v266);
LABEL_424:
                v232 = dcgettext(0LL, "multiple output files specified", 5);
                error(2, 0, v232, v266);
LABEL_425:
                if ( !(_BYTE)v266 )
                  LOBYTE(v266) = 111;
                byte_61C408 = (char)v266;
                sub_405D00(&byte_61C408);
LABEL_428:
                v39 = "field number is zero";
                sub_405D30(nptr, "field number is zero");
LABEL_429:
                sub_405D00("cC");
LABEL_430:
                sub_407DD0(file, v39);
              }
              v101 = 0;
            }
            if ( dword_61C424 != 128 && dword_61C424 != v101 )
              goto LABEL_421;
            dword_61C424 = v101;
            continue;
          case 246:
            byte_61C75A = 1;
            continue;
          case 240:
            LOBYTE(v275) = 1;
            continue;
          case 238:
            v102 = 18LL;
            v103 = &v292;
            while ( v102 )
            {
              *(_DWORD *)v103 = 0;
              v103 = (__int64 *)((char *)v103 + 4);
              --v102;
            }
            v294 = -1LL;
            LODWORD(v104) = sub_407C00(nptr, &v292, "invalid number at field start");
            v105 = v292;
            v106 = v292-- - 1;
            if ( !v105 )
              goto LABEL_428;
            if ( *v104 == 46 )
            {
              LODWORD(v104) = sub_407C00(v104 + 1, &v293, "invalid number after '.'");
              v212 = v293;
              v106 = v293-- - 1;
              if ( !v212 )
              {
                sub_405D30(nptr, "character offset is zero");
                goto LABEL_380;
              }
            }
            if ( !(v293 | v292) )
              v292 = -1LL;
            LODWORD(v107) = sub_405C00(v104, &v292, 0LL, v106);
            if ( *v107 == 44 )
            {
              LODWORD(v209) = sub_407C00(v107 + 1, v277, "invalid number after ','");
              v210 = v294;
              v211 = v294-- - 1;
              if ( !v210 )
                goto LABEL_428;
              if ( *v209 == 46 )
                LODWORD(v209) = sub_407C00(v209 + 1, &v295, "invalid number after '.'");
              LODWORD(v107) = sub_405C00(v209, &v292, 1LL, v211);
            }
            else
            {
              v294 = -1LL;
              v295 = 0LL;
            }
            if ( *v107 )
            {
              sub_405D30(nptr, "stray character in field spec");
              start();
            }
            v39 = (const char *)72;
            LODWORD(v108) = sub_411410(&v292, 72LL);
            v109 = qword_61C750;
            v110 = &qword_61C750;
            while ( v109 )
            {
              v110 = (__int64 *)(v109 + 64);
              v109 = *(_QWORD *)(v109 + 64);
            }
            goto LABEL_223;
          case 242:
            v111 = file;
            v112 = nptr;
            if ( file )
            {
              v39 = nptr;
              file = nptr;
              v113 = strcmp(v111, nptr);
              v112 = file;
              if ( v113 )
                goto LABEL_424;
            }
            file = v112;
            continue;
          case 215:
            sub_40A010(nptr);
            continue;
          case 0:
            sub_4110D0((char)stdout);
            exit(0);
            return result;
          case 132:
            v114 = nptr;
            if ( *nptr != 43 )
              goto LABEL_172;
            if ( dword_61C57C == (_DWORD)v5 )
            {
              LODWORD(mutex) = 0;
            }
            else
            {
              v140 = *(_QWORD *)(v4 + 8LL * dword_61C57C);
              LODWORD(mutex) = 0;
              if ( *(_BYTE *)v140 == 45 )
                LODWORD(mutex) = (unsigned int)(*(_BYTE *)(v140 + 1) - 48) <= 9;
            }
            LOBYTE(src) = (unsigned __int8)mutex & (v276 == 0) | (unsigned __int8)src;
            if ( !(_BYTE)src )
              goto LABEL_172;
            v141 = 18LL;
            v142 = &v292;
            while ( v141 )
            {
              *(_DWORD *)v142 = 0;
              v142 = (__int64 *)((char *)v142 + 4);
              --v141;
            }
            v39 = (const char *)&v292;
            v294 = -1LL;
            LODWORD(v143) = sub_407C00(v114 + 1, &v292, 0LL);
            v144 = -1LL;
            if ( !v143 )
            {
              v114 = nptr;
              if ( !(v293 | v292) )
                v292 = -1LL;
              goto LABEL_172;
            }
            if ( *v143 == 46 )
            {
              v39 = (const char *)&v293;
              LODWORD(v143) = sub_407C00(v143 + 1, &v293, 0LL);
              if ( v293 | v292 )
              {
LABEL_243:
                if ( !v143 )
                  goto LABEL_400;
                goto LABEL_244;
              }
            }
            else if ( v293 | v292 )
            {
LABEL_244:
              v39 = (const char *)&v292;
              LODWORD(v145) = sub_405C00(v143, &v292, 0LL, v144);
              if ( !*v145 )
              {
                if ( (_DWORD)mutex )
                {
                  v146 = *(pthread_mutex_t **)(v4 + 8LL * dword_61C57C++);
                  mutex = v146;
                  LODWORD(v147) = sub_407C00((char *)&v146->__lock + 1, v277, "invalid number after '-'");
                  if ( !v147 )
                    __assert_fail("s", "src/sort.c", 0x110Du, "main");
                  if ( *v147 == 46 )
LABEL_414:
                    LODWORD(v147) = sub_407C00(v147 + 1, &v295, "invalid number after '.'");
                  if ( !v295 && v294 )
                    --v294;
                  LODWORD(v149) = sub_405C00(v147, &v292, 1LL, v148);
                  if ( *v149 )
                  {
                    v165 = "stray character in field spec";
                    sub_405D30(mutex, "stray character in field spec");
LABEL_432:
                    sub_407DD0(src, v165);
                  }
                }
                v39 = (const char *)72;
                v296 = 1;
                LODWORD(v108) = sub_411410(&v292, 72LL);
                v150 = qword_61C750;
                v110 = &qword_61C750;
                while ( v150 )
                {
                  v110 = (__int64 *)(v150 + 64);
                  v150 = *(_QWORD *)(v150 + 64);
                }
LABEL_223:
                *v110 = v108;
                *(_QWORD *)(v108 + 64) = 0LL;
                continue;
              }
LABEL_400:
              v114 = nptr;
LABEL_172:
              v46[v44++] = (__int64)v114;
              continue;
            }
            v292 = -1LL;
            goto LABEL_243;
          case 214:
            v115 = nptr;
            v39 = (const char *)&rlimits;
            mutex = (pthread_mutex_t *)nptr;
            LODWORD(v281) = v285.rlim_cur;
            v116 = sub_411B40(nptr);
            if ( !v116 )
            {
              if ( (unsigned int)(*(_BYTE *)(rlimits.rlim_cur - 1) - 48) <= 9 )
              {
                if ( (unsigned __int64)ptr > 0x3FFFFFFFFFFFFFLL )
                  goto LABEL_384;
                ptr = (void *)((_QWORD)ptr << 10);
              }
              goto LABEL_177;
            }
            if ( v116 != 2
              || (unsigned int)(*(_BYTE *)(rlimits.rlim_cur - 1) - 48) > 9
              || *(_BYTE *)(rlimits.rlim_cur + 1) )
            {
              goto LABEL_229;
            }
            if ( *(_BYTE *)rlimits.rlim_cur != 37 )
            {
              if ( *(_BYTE *)rlimits.rlim_cur != 98 )
                goto LABEL_229;
              goto LABEL_177;
            }
            sub_40D840(v115, &rlimits);
            if ( (signed __int64)ptr < 0 )
              v216 = (double)(signed int)((unsigned __int8)ptr & 1 | ((unsigned __int64)ptr >> 1))
                   + (double)(signed int)((unsigned __int8)ptr & 1 | ((unsigned __int64)ptr >> 1));
            else
              v216 = (double)(signed int)ptr;
            v41 = v41 * v216 / 100.0;
            if ( v41 >= 1.844674407370955e19 )
            {
LABEL_384:
              v116 = 1;
LABEL_229:
              sub_411AB0((unsigned int)v116, (unsigned int)v281, 83LL, off_414B40, mutex);
            }
            v38.m128i_i64[0] = 4890909195324358656LL;
            if ( v41 < 9.223372036854776e18 )
            {
              ptr = (void *)(unsigned int)(signed int)floor(v41);
              goto LABEL_177;
            }
            goto LABEL_411;
          case 1:
            sub_40A0D0(0);
            return result;
          default:
            goto LABEL_409;
        }
      }
      break;
    }
    v47 = dword_61C57C;
    if ( (_BYTE)src != 1 || (_BYTE)v266 )
      goto LABEL_43;
    if ( dword_61C57C != (_DWORD)v5 )
    {
      v48 = *(_QWORD *)(v4 + 8LL * dword_61C57C);
      if ( *(_BYTE *)v48 != 45 || *(_BYTE *)(v48 + 1) != 111 || !*(_BYTE *)(v48 + 2) && dword_61C57C + 1 == (_DWORD)v5 )
        goto LABEL_43;
      goto LABEL_50;
    }
    if ( v268 )
      goto LABEL_408;
    LOBYTE(v266) = 0;
LABEL_61:
    if ( qword_61C750 )
    {
      v39 = (const char *)qword_61C750;
      LODWORD(v5) = 0;
      do
      {
        while ( (unsigned __int8)sub_405AF0(v39) && !v39[55] )
        {
          v55 = BYTE15(v300);
          *((_QWORD *)v39 + 4) = *((_QWORD *)&v299 + 1);
          *((_QWORD *)v39 + 5) = v300;
          *((_BYTE *)v39 + 48) = BYTE8(v300);
          *((_BYTE *)v39 + 49) = BYTE9(v300);
          *((_BYTE *)v39 + 54) = BYTE14(v300);
          *((_BYTE *)v39 + 50) = BYTE10(v300);
          *((_BYTE *)v39 + 52) = BYTE12(v300);
          *((_BYTE *)v39 + 53) = BYTE13(v300);
          v56 = v301;
          *((_BYTE *)v39 + 55) = v55;
          *((_BYTE *)v39 + 56) = v56;
          v57 = BYTE11(v300);
          *((_BYTE *)v39 + 51) = BYTE11(v300);
          v39 = (const char *)*((_QWORD *)v39 + 8);
          v5 = (char *)(v57 | (unsigned int)v5);
          if ( !v39 )
            goto LABEL_67;
        }
        v59 = v39[51];
        v39 = (const char *)*((_QWORD *)v39 + 8);
        v5 = (char *)(v59 | (unsigned int)v5);
      }
      while ( v39 );
LABEL_67:
      a4 = 0LL;
LABEL_68:
      LOBYTE(v39) = *(_QWORD *)(v58 + 32) != 0LL;
      if ( (unsigned __int8)((unsigned __int8)v39 | *(_BYTE *)(v58 + 56) | *(_BYTE *)(v58 + 51))
         + *(_BYTE *)(v58 + 54)
         + *(_BYTE *)(v58 + 53)
         + *(_BYTE *)(v58 + 52)
         + *(_BYTE *)(v58 + 50) > 1 )
      {
LABEL_410:
        *(_BYTE *)(v58 + 55) = 0;
        v39 = (const char *)&ptr;
        *(_WORD *)(v58 + 48) = 0;
        sub_405B50(v58, &ptr);
        sub_405D00(&ptr);
LABEL_411:
        v41 = v41 - *(double *)&v38.m128i_i64[0];
        ptr = (void *)(unsigned int)(signed int)floor(v41);
        ptr = (void *)((unsigned __int64)ptr ^ 0x8000000000000000LL);
LABEL_177:
        if ( (unsigned __int64)ptr >= qword_61C778 )
        {
          v117 = (void *)(34LL * (unsigned int)dword_61C420);
          if ( v117 < ptr )
            v117 = ptr;
          qword_61C778 = (__int64)v117;
        }
        continue;
      }
      while ( 1 )
      {
        v58 = *(_QWORD *)(v58 + 64);
        if ( !v58 )
          break;
        LOBYTE(v39) = *(_QWORD *)(v58 + 32) != 0LL;
        if ( *(_BYTE *)(v58 + 53)
           + *(_BYTE *)(v58 + 52)
           + *(_BYTE *)(v58 + 50)
           + *(_BYTE *)(v58 + 54)
           + (unsigned __int8)((unsigned __int8)v39 | *(_BYTE *)(v58 + 51) | *(_BYTE *)(v58 + 56)) > 1 )
          goto LABEL_410;
      }
LABEL_72:
      if ( byte_61C740 )
      {
LABEL_73:
        if ( (_BYTE)v266 || file )
          goto LABEL_425;
        if ( !v274 || !setlocale(3, "") )
        {
          v139 = dcgettext(0LL, "failed to set locale", 5);
          error(0, 0, "%s", v139, v266);
        }
        if ( byte_61CBA1 )
        {
          v135 = setlocale(3, 0LL);
          LODWORD(v136) = sub_40F880(v135, 0LL);
          v137 = v136;
          v138 = dcgettext(0LL, "using %s sorting rules", 5);
          error(0, 0, v138, v137, v266);
        }
        else
        {
          v60 = dcgettext(0LL, "using simple byte comparison", 5);
          error(0, 0, "%s", v60, v266);
        }
        v45 = qword_61C750;
        v61 = &ptr;
        v62 = 18LL;
        v39 = (const char *)&v297;
        src = (char *)&ptr;
        v4 = 1LL;
        while ( v62 )
        {
          *(_DWORD *)v61 = *(_DWORD *)v39;
          v39 += 4;
          v61 = (void **)((char *)v61 + 4);
          --v62;
        }
        if ( v45 )
        {
          LOBYTE(mutex) = (_BYTE)v5;
          v63 = v45;
          v274 = (char *)&v285.rlim_cur + 1;
          v276 = v44;
          v277 = v46;
          while ( 1 )
          {
            v66 = *(_QWORD *)v63;
            v67 = *(_QWORD *)(v63 + 16);
            if ( *(_BYTE *)(v63 + 57) )
            {
              if ( v66 == -1LL )
                v66 = 0LL;
              LODWORD(v68) = sub_40D370(v66, &v284);
              LOBYTE(v285.rlim_cur) = 43;
              LODWORD(v69) = __stpcpy_chk((char *)&v285.rlim_cur + 1, v68, 45LL);
              v70 = v69;
              LODWORD(v71) = sub_40D370(v66 + 1, &v284);
              LODWORD(dest) = 2124589;
              LODWORD(v72) = __stpcpy_chk((char *)&dest + 3, v71, 44LL);
              v268 = v72;
              if ( *(_QWORD *)(v63 + 16) != -1LL )
              {
                v73 = v67 + 1;
                LODWORD(v74) = sub_40D370(v73, &v284);
                *(_WORD *)v70 = 11552;
                strcpy((char *)(v70 + 2), v74);
                LODWORD(v75) = sub_40D370(v73 + (*(_QWORD *)(v63 + 24) == -1LL), &v284);
                *v268 = 44;
                strcpy(v268 + 1, v75);
              }
              LODWORD(v76) = sub_40F860(1LL, &dest);
              v45 = v76;
              LODWORD(v77) = sub_40F860(0LL, &v285);
              v78 = v77;
              v79 = dcgettext(0LL, "obsolescent key %s used; consider %s instead", 5);
              error(0, 0, v79, v78, v45);
              v66 = *(_QWORD *)v63;
              v67 = *(_QWORD *)(v63 + 16);
            }
            v80 = a4;
            if ( v66 != -1LL && v67 < v66 )
            {
              v81 = dcgettext(0LL, "key %lu has zero width and will be ignored", 5);
              error(0, 0, v81, v4);
              v67 = *(_QWORD *)(v63 + 16);
              v80 = 1;
            }
            v39 = (const char *)1;
            v82 = *(_QWORD *)(v63 + 48) & 0xFFFF00FF0000LL;
            if ( !v82 )
              v39 = (const char *)*(_BYTE *)(v63 + 54);
            if ( v67 || !*(_QWORD *)(v63 + 24) )
            {
              if ( !v80 )
              {
                if ( dword_61C424 == 128
                  && (!*(_BYTE *)(v63 + 48) && (!(_DWORD)v39 || *(_QWORD *)(v63 + 8))
                   || !*(_BYTE *)(v63 + 49) && *(_QWORD *)(v63 + 24)) )
                {
                  v83 = dcgettext(0LL, "leading blanks are significant in key %lu; consider also specifying 'b'", 5);
                  v39 = 0LL;
                  error(0, 0, v83, v4);
                  v82 = *(_QWORD *)(v63 + 48) & 0xFFFF00FF0000LL;
                }
LABEL_86:
                if ( v82 )
                {
                  v64 = *(_QWORD *)v63 + 1LL;
                  if ( *(_QWORD *)v63 == -1LL )
                    v64 = 1LL;
                  if ( *(_QWORD *)(v63 + 16) == -1LL || *(_QWORD *)(v63 + 16) + 1LL > v64 )
                  {
                    v154 = dcgettext(0LL, "key %lu is numeric and spans multiple fields", 5);
                    v39 = 0LL;
                    error(0, 0, v154, v4);
                  }
                }
                goto LABEL_91;
              }
            }
            else if ( !v80 )
            {
              goto LABEL_86;
            }
            if ( !(_BYTE)a4 )
              goto LABEL_86;
LABEL_91:
            if ( v306 && v306 == *(_QWORD *)(v63 + 32) )
              v306 = 0LL;
            if ( v307 && v307 == *(_QWORD *)(v63 + 40) )
              v307 = 0LL;
            ++v4;
            cond.__size[0] &= *(_BYTE *)(v63 + 48) ^ 1;
            cond.__size[1] &= *(_BYTE *)(v63 + 49) ^ 1;
            cond.__size[6] &= *(_BYTE *)(v63 + 54) ^ 1;
            cond.__size[2] &= *(_BYTE *)(v63 + 50) ^ 1;
            cond.__size[4] &= *(_BYTE *)(v63 + 52) ^ 1;
            cond.__size[5] &= *(_BYTE *)(v63 + 53) ^ 1;
            cond.__size[3] &= *(_BYTE *)(v63 + 51) ^ 1;
            cond.__size[8] &= *(_BYTE *)(v63 + 56) ^ 1;
            v65 = *(_BYTE *)(v63 + 55);
            v63 = *(_QWORD *)(v63 + 64);
            cond.__size[7] &= v65 ^ 1;
            if ( !v63 )
            {
              v44 = v276;
              v46 = v277;
              LOBYTE(v5) = (_BYTE)mutex;
              break;
            }
          }
        }
        v118 = sub_405AF0(&ptr);
        v119 = cond.__size[7];
        if ( v118 )
        {
          if ( cond.__size[7] )
          {
            if ( byte_61C75A )
            {
              if ( qword_61C750 )
              {
                v4 = (unsigned __int64)&dest;
                sub_405B50(&ptr, &dest);
                v213 = dcngettext(
                         0LL,
                         "option '-%s' is ignored",
                         "options '-%s' are ignored",
                         strlen((const char *)&dest),
                         5);
                v39 = 0LL;
                error(0, 0, v213, &dest);
                cond.__size[7] = 1;
                goto LABEL_187;
              }
            }
            else
            {
              if ( byte_61C759 && qword_61C750 )
              {
                v4 = (unsigned __int64)&dest;
                sub_405B50(&ptr, &dest);
                v177 = dcngettext(
                         0LL,
                         "option '-%s' is ignored",
                         "options '-%s' are ignored",
                         strlen((const char *)&dest),
                         5);
                v39 = 0LL;
                error(0, 0, v177, &dest);
                cond.__size[7] = v119;
                goto LABEL_187;
              }
LABEL_188:
              if ( !byte_61C759 && qword_61C750 )
              {
                v121 = dcgettext(0LL, "option '-r' only applies to last-resort comparison", 5);
                v39 = 0LL;
                error(0, 0, v121);
              }
            }
          }
        }
        else
        {
          if ( !byte_61C75A && !byte_61C759 )
            cond.__size[7] = 0;
          v4 = (unsigned __int64)&dest;
          sub_405B50(&ptr, &dest);
          v120 = dcngettext(0LL, "option '-%s' is ignored", "options '-%s' are ignored", strlen((const char *)&dest), 5);
          v39 = 0LL;
          error(0, 0, v120, &dest);
          cond.__size[7] = v119;
          if ( v119 )
          {
LABEL_187:
            if ( !byte_61C75A )
              goto LABEL_188;
          }
        }
      }
      byte_61C75B = BYTE15(v300);
      if ( (_BYTE)v5 )
      {
        LODWORD(v151) = sub_40F900(s1, 16LL);
        v152 = "open failed";
        v153 = v151;
        if ( !v151 )
          goto LABEL_419;
        src = (char *)&ptr;
        sub_40FC10(v151, &ptr, 16LL);
        if ( (unsigned int)sub_40FD70(v153) )
        {
          v152 = "close failed";
LABEL_419:
          v225 = dcgettext(0LL, v152, 5);
          sub_405DD0(v225, s1);
        }
        sub_40AA90(&xmmword_61C600);
        v39 = (const char *)16;
        sub_40B360(&ptr, 0x10uLL);
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_405AF0(&v297) )
      {
        v39 = (const char *)72;
        LODWORD(v206) = sub_411410(&v297, 72LL);
        v207 = qword_61C750;
        v208 = &qword_61C750;
        while ( v207 )
        {
          v208 = (__int64 *)(v207 + 64);
          v207 = *(_QWORD *)(v207 + 64);
        }
        *v208 = v206;
        v58 = qword_61C750;
        a4 = 1LL;
        *(_QWORD *)(v206 + 64) = 0LL;
        v5 = (char *)BYTE11(v300);
        if ( v58 )
          goto LABEL_68;
        goto LABEL_72;
      }
      if ( byte_61C740 )
      {
        LOBYTE(a4) = 0;
        LOBYTE(v5) = 0;
        goto LABEL_73;
      }
      byte_61C75B = BYTE15(v300);
    }
    break;
  }
  if ( !qword_61C768 )
  {
    v176 = getenv("TMPDIR");
    if ( !v176 )
      v176 = "/tmp";
    sub_40A010(v176);
  }
  if ( !v44 )
  {
    v44 = 1LL;
    free(v46);
    LODWORD(v175) = sub_411210(8LL);
    v46 = v175;
    *v175 = (__int64)"-";
  }
  if ( qword_61C778 )
  {
    v122 = 34LL * (unsigned int)dword_61C420;
    if ( v122 < qword_61C778 )
      v122 = qword_61C778;
    qword_61C778 = v122;
  }
  if ( (_BYTE)v266 )
  {
    if ( v44 <= 1 )
    {
      if ( file )
      {
        byte_61C400 = (char)v266;
        sub_405D00(&byte_61C400);
      }
      else
      {
        v46 = (__int64 *)*v46;
        v39 = "r";
        v123 = (FILE *)sub_407CD0((char *)v46, "r");
        if ( v123 )
        {
          s1a = (char *)qword_61C750;
          LOBYTE(v124) = byte_61C759 ^ 1;
          v125 = qword_61C428;
          if ( qword_61C778 >= (unsigned __int64)qword_61C428 )
            v125 = qword_61C778;
          v124 = (unsigned __int8)v124;
          v126 = 0LL;
          sub_405E30(&ptr, 32LL, v125);
          dest = 0LL;
          v269 = 0LL;
          while ( 1 )
          {
            if ( !(unsigned __int8)sub_4074D0(&ptr, v123, v46) )
            {
              v133 = 1;
              goto LABEL_221;
            }
            v127 = (char *)ptr + v305 - 32;
            v128 = (char *)ptr + v305 + -32 * v304;
            if ( v126 )
            {
              if ( v124 <= sub_4082A0(&dest, (char *)ptr + v305 - 32) )
                break;
            }
            while ( 1 )
            {
              v129 = v127;
              if ( v128 >= v127 )
                break;
              v127 -= 32;
              if ( v124 <= sub_4082A0(v129, v127) )
                goto LABEL_219;
            }
            v130 = *((_QWORD *)v127 + 1);
            v269 += v304;
            if ( v126 < v130 )
            {
              while ( 1 )
              {
                v126 *= 2LL;
                if ( !v126 )
                  break;
                if ( v130 <= v126 )
                  goto LABEL_217;
              }
              v126 = *((_QWORD *)v127 + 1);
LABEL_217:
              free(dest);
              LODWORD(v132) = sub_411210(v126);
              v130 = *((_QWORD *)v127 + 1);
              dest = v132;
            }
            memcpy(dest, *(const void **)v127, v130);
            v287 = *((_QWORD *)v127 + 1);
            if ( s1a )
            {
              v131 = (char *)dest + *((_QWORD *)v127 + 3) - *(_QWORD *)v127;
              v288 = (char *)dest + *((_QWORD *)v127 + 2) - *(_QWORD *)v127;
              v289 = v131;
            }
          }
LABEL_219:
          v133 = 0;
          if ( (_BYTE)v266 == 99 )
          {
            sub_40D370(&v269[((_BYTE *)ptr + v305 - v127) >> 5], &v285);
            v196 = qword_61CBC8;
            v197 = dcgettext(0LL, "%s: %s:%s: disorder: ", 5);
            __fprintf_chk(stderr, 1LL, v197, v196);
            v198 = dcgettext(0LL, "standard error", 5);
            sub_407E70(v127, stderr, v198);
          }
LABEL_221:
          sub_407DF0(v123);
          free(ptr);
          free(dest);
          return (unsigned __int8)(v133 ^ 1);
        }
      }
      sub_407DD0(v46, v39);
    }
    LODWORD(v241) = sub_40F630(4LL, v46[1]);
    v242 = v241;
    v243 = dcgettext(0LL, "extra operand %s not allowed with -%c", 5);
    v39 = 0LL;
    error(2, 0, v243, v242, (unsigned int)(char)v266, v266);
LABEL_437:
    if ( v268 )
    {
      if ( v44 )
      {
LABEL_408:
        LODWORD(v217) = sub_40F630(4LL, *v46);
        v218 = v217;
        v219 = dcgettext(0LL, "extra operand %s", 5);
        error(0, 0, v219, v218, v266);
        v220 = dcgettext(0LL, "file operands cannot be combined with --files0-from", 5);
        __fprintf_chk(stderr, 1LL, "%s\n", v220);
LABEL_409:
        sub_40A0D0(2);
      }
      v244 = "r";
      v245 = (FILE *)sub_407CD0(v268, "r");
      if ( !v245 )
LABEL_451:
        sub_407DD0(v268, v244);
      sub_4103A0(&rlimits, "r");
      v246 = v268;
      if ( (unsigned __int8)sub_410440(v245) )
      {
        sub_407DF0(v245);
        v247 = rlimits.rlim_cur;
        if ( rlimits.rlim_cur )
        {
          free(v46);
          v46 = (__int64 *)rlimits.rlim_max;
          v250 = "-";
          while ( 1 )
          {
            v251 = *(_BYTE **)(rlimits.rlim_max + 8 * v44);
            v252 = 2LL;
            v253 = "-";
            v39 = *(const char **)(rlimits.rlim_max + 8 * v44);
            do
            {
              if ( !v252 )
                break;
              v248 = *v39 < (unsigned __int8)*v253;
              v249 = *v39++ == *v253++;
              --v252;
            }
            while ( v249 );
            if ( (!v248 && !v249) == v248 )
              break;
            ++v44;
            if ( !*v251 )
              goto LABEL_450;
            v248 = v247 < v44;
            v249 = v247 == v44;
            if ( v247 == v44 )
              goto LABEL_61;
          }
          LODWORD(v254) = sub_40F630(4LL, *(_QWORD *)(rlimits.rlim_max + 8 * v44));
          v255 = v254;
          v256 = dcgettext(0LL, "when reading file names from stdin, no file name of %s allowed", 5);
          error(2, 0, v256, v255, v266);
LABEL_450:
          LODWORD(v257) = sub_40F700(0LL, 3LL, v268, v252, v250);
          v258 = v257;
          v259 = dcgettext(0LL, "%s:%lu: invalid zero-length file name", 5);
          v244 = 0LL;
          error(2, 0, v259, v258, v44, v266);
          goto LABEL_451;
        }
        LODWORD(v260) = sub_40F630(4LL, v268);
        v261 = v260;
        v262 = dcgettext(0LL, "no input from %s", 5);
        v246 = 0LL;
        error(2, 0, v262, v261, v266);
      }
      LODWORD(v263) = sub_40F630(4LL, v246);
      v264 = v263;
      v265 = dcgettext(0LL, "cannot read file names from %s", 5);
      v39 = 0LL;
      v42 = (void *)2;
      error(2, 0, v265, v264, v266);
LABEL_454:
      sub_411460(v42, v39, v40);
    }
    goto LABEL_61;
  }
  v155 = (const char **)v46;
  v156 = 0;
  v157 = 1;
  v158 = 0LL;
  v283 = "-";
  while ( 2 )
  {
    v159 = 2LL;
    v160 = "-";
    v161 = *v155;
    do
    {
      if ( !v159 )
        break;
      v156 = *v161 < (unsigned __int8)*v160;
      v157 = *v161++ == *v160++;
      --v159;
    }
    while ( v157 );
    if ( (!v156 && !v157) != v156 )
    {
      v161 = (const char *)4;
      if ( euidaccess(*v155, 4) )
      {
        v223 = *v155;
        v222 = "cannot read";
LABEL_417:
        v224 = dcgettext(0LL, v222, 5);
        sub_405DD0(v224, v223);
      }
    }
    ++v155;
    v156 = v44 < v158 + 1;
    v157 = v44 == v158 + 1;
    if ( v44 != v158 + 1 )
    {
      ++v158;
      continue;
    }
    break;
  }
  if ( !file )
    goto LABEL_273;
  v161 = (const char *)524353;
  v162 = open(file, 524353, 438LL, v266);
  if ( v162 < 0 )
  {
LABEL_434:
    v240 = dcgettext(0LL, "open failed", 5);
    sub_405DD0(v240, file);
  }
  if ( v162 != 1 )
  {
    v161 = (const char *)1;
    sub_408E10((unsigned int)v162, 1LL);
  }
LABEL_273:
  if ( (_BYTE)v275 )
  {
    LODWORD(v199) = sub_4113E0(v158 + 1, 16LL);
    for ( i = 0LL; ; ++i )
    {
      *(_QWORD *)(v199 + 16 * i) = v46[i];
      if ( i == v158 )
        break;
    }
    sub_409330(v199, 0LL, v158 + 1, file);
    goto LABEL_311;
  }
  if ( !v279 )
  {
    LODWORD(v214) = sub_40D6F0(2LL, v161);
    v215 = 8LL;
    if ( v214 <= 8 )
      v215 = v214;
    v279 = v215;
  }
  v282 = (char **)v46;
  v163 = 0xFFFFFFFFFFFFFFLL;
  v289 = 0LL;
  v275 = v158 + 1;
  if ( v279 <= 0xFFFFFFFFFFFFFFLL )
    v163 = v279;
  v164 = 0LL;
  v274 = (char *)v163;
  v276 = v163 << 8;
  v277 = (__int64 *)(2 * v163);
  mutex = (pthread_mutex_t *)&v303;
  while ( 2 )
  {
    v165 = "r";
    src = *v282;
    v266 = (FILE *)sub_407CD0(*v282, "r");
    if ( !v266 )
      goto LABEL_432;
    v281 = 48LL;
    if ( v279 > 1 )
    {
      v179 = 1LL;
      v180 = 1LL;
      do
      {
        v180 *= 2LL;
        ++v179;
      }
      while ( (unsigned __int64)v274 > v180 );
      v281 = 32 * v179;
    }
    s1b = (char *)&dest;
    if ( v289 )
      goto LABEL_281;
    v46 = (__int64 *)v275;
    s1 = v164;
    v44 = 0LL;
    v4 = v281 + 1;
    v5 = (char *)(v281 + 2);
    while ( 2 )
    {
      v183 = 0;
      v184 = v44 == 0;
      if ( v44 )
      {
        v185 = v283;
        v186 = 2LL;
        v187 = v282[v44];
        do
        {
          if ( !v186 )
            break;
          v183 = (unsigned __int8)*v187 < (unsigned __int8)*v185;
          v184 = *v187++ == *v185++;
          --v186;
        }
        while ( v184 );
        if ( (!v183 && !v184) == v183 )
          v188 = __fxstat(1, 0, (struct stat *)&ptr) != 0;
        else
          v188 = __xstat(1, v282[v44], (struct stat *)&ptr) != 0;
      }
      else
      {
        v195 = fileno(v266);
        v188 = __fxstat(1, v195, (struct stat *)&ptr) != 0;
      }
      if ( v188 )
      {
        v222 = "stat failed";
        v223 = v282[v44];
        goto LABEL_417;
      }
      if ( (v305 & 0xF000) == 0x8000 )
      {
        a4 = cond.__align;
        if ( !qword_61C5E0 )
        {
          qword_61C5E0 = qword_61C778;
          if ( !qword_61C778 )
            goto LABEL_334;
        }
      }
      else
      {
        v181 = qword_61C778;
        if ( qword_61C778 )
          goto LABEL_366;
        a4 = 0x20000LL;
        if ( !qword_61C5E0 )
        {
LABEL_334:
          v189 = -1LL;
          if ( !getrlimit(RLIMIT_DATA, &v285) )
            v189 = v285.rlim_cur;
          if ( !getrlimit(RLIMIT_AS, &v285) && v189 > v285.rlim_cur )
            v189 = v285.rlim_cur;
          v190 = v189 >> 1;
          if ( !getrlimit(__RLIMIT_RSS, &v285) && v190 > 15 * (v285.rlim_cur >> 4) )
            v190 = 15 * (v285.rlim_cur >> 4);
          sub_40D900(5LL, &v285);
          v191 = *(char **)&v41;
          sub_40D840(5LL, &v285);
          v192 = 0.125 * v41;
          v193 = v41 * 0.75;
          v38.m128i_i64[0] = fmax(*(double *)&v191, v192);
          if ( (double)(signed int)v190 > v193 )
          {
            if ( v193 < 9.223372036854776e18 )
              v190 = (unsigned int)(signed int)floor(v193);
            else
              v190 = (unsigned int)(signed int)floor(v193 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          }
          if ( (v190 & 0x8000000000000000LL) != 0LL )
            v41 = (double)(signed int)(v190 & 1 | (v190 >> 1)) + (double)(signed int)(v190 & 1 | (v190 >> 1));
          else
            v41 = (double)(signed int)v190;
          if ( v41 > *(double *)&v38.m128i_i64[0] )
          {
            v41 = 9.223372036854776e18;
            if ( *(double *)&v38.m128i_i64[0] < 9.223372036854776e18 )
LABEL_380:
              v190 = (unsigned int)(signed int)floor(*(double *)&v38.m128i_i64[0]);
            else
              v190 = (unsigned int)(signed int)floor(*(double *)&v38.m128i_i64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
          }
          v194 = 34LL * (unsigned int)dword_61C420;
          if ( v194 < v190 )
            v194 = v190;
          qword_61C5E0 = v194;
        }
      }
      v181 = qword_61C5E0;
      v182 = a4 * v4 + 1;
      if ( a4 != v182 / v4 || v182 >= qword_61C5E0 - (signed __int64)v5 )
      {
LABEL_366:
        v164 = s1;
        v5 = (char *)v181;
        goto LABEL_367;
      }
      ++v44;
      v5 += v182;
      if ( v44 < (unsigned __int64)v46 )
        continue;
      break;
    }
    v164 = s1;
LABEL_367:
    s1b = (char *)&dest;
    sub_405E30(&dest, v281, v5);
LABEL_281:
    v291 = 0;
    --v275;
LABEL_284:
    if ( !(unsigned __int8)sub_4074D0(s1b, v266, src) )
    {
      v39 = src;
      sub_407DF0(v266);
      if ( v275 )
        goto LABEL_307;
      v42 = dest;
      free(dest);
      v201 = ptr/*INVALID_COLON*/;
      v40 = (unsigned __int128)(unsigned __int64)v164 >> 60 != 0;
      if ( !((unsigned __int64)v164 & 0x800000000000000LL) && (unsigned __int128)(unsigned __int64)v164 >> 60 == 0 )
      {
        LODWORD(v202) = sub_411210(16LL * (_QWORD)v164);
        v203 = v202;
        v204 = v202;
        while ( v201 )
        {
          v205 = (signed __int64)v201 + 13;
          *((_QWORD *)v204 + 1) = v201;
          v201 = (_QWORD *)*v201;
          v204 = (char *)v204 + 16;
          *((_QWORD *)v204 - 2) = v205;
        }
        sub_409330(v203, v164, v164, file);
        free(v203);
        goto LABEL_309;
      }
      goto LABEL_454;
    }
    v170 = v291;
    if ( !v291 )
      goto LABEL_288;
    if ( v275 )
    {
      if ( v281 + 1 >= (unsigned __int64)(&v289[-v287] - (_QWORD)v288 * v281) )
      {
LABEL_288:
        *(_QWORD *)&xmmword_61CB80 = 0LL;
        v171 = &v289[(_QWORD)dest];
        goto LABEL_289;
      }
      v290 = v287;
      sub_407DF0(v266);
LABEL_307:
      ++v282;
      continue;
    }
    break;
  }
  v171 = &v289[(_QWORD)dest];
  *(_QWORD *)&xmmword_61CB80 = 0LL;
  if ( v290 | (unsigned __int64)v164 )
  {
LABEL_289:
    ++v164;
    v170 = 0;
    LODWORD(v172) = sub_4090C0(&v285, 0LL);
    v173 = v172 + 13;
  }
  else
  {
    sub_407DF0(v266);
    v39 = "w";
    v174 = sub_407CD0(file, "w");
    if ( !v174 )
      goto LABEL_430;
    v285.rlim_cur = v174;
    v173 = (signed __int64)file;
    v164 = 0LL;
  }
  if ( (unsigned __int64)v288 > 1 )
  {
    LODWORD(v166) = sub_40CFD0(sub_407850, v277);
    ptr = v166;
    pthread_mutex_init(mutex, 0LL);
    pthread_cond_init(&cond, 0LL);
    v167 = v288;
    LODWORD(v168) = sub_411210(v276);
    *(_QWORD *)(v168 + 48) = v167;
    v169 = v168;
    *(_QWORD *)(v168 + 40) = v167;
    *(_QWORD *)(v168 + 24) = 0LL;
    *(_QWORD *)(v168 + 16) = 0LL;
    *(_QWORD *)(v168 + 8) = 0LL;
    *(_QWORD *)v168 = 0LL;
    *(_QWORD *)(v168 + 32) = 0LL;
    *(_QWORD *)(v168 + 56) = 0LL;
    *(_DWORD *)(v168 + 80) = 0;
    *(_BYTE *)(v168 + 84) = 0;
    pthread_mutex_init((pthread_mutex_t *)(v168 + 88), 0LL);
    sub_4061F0(v169, v169 + 128, v171, v274, v167, 0LL);
    sub_409880((__int64)v171);
  }
  else
  {
    sub_4085D0(v171 - 32, v285.rlim_cur, v173);
  }
  sub_407DF0((FILE *)v285.rlim_cur);
  if ( !v170 )
    goto LABEL_284;
  free(dest);
LABEL_309:
  while ( dword_61C69C > 0 )
    sub_405FB0(-1);
LABEL_311:
  if ( byte_61C758 && (unsigned int)sub_411F80(stdin) == -1 )
  {
    v178 = dcgettext(0LL, "close failed", 5);
    sub_405DD0(v178, "-");
  }
  return 0LL;
}

signed int sub_40585B()
{
  return 6407560;
}

int sub_40587A()
{
  return 0;
}

signed int sub_4058B1()
{
  signed int result; // eax@4

  if ( !byte_61C5C8 )
  {
    while ( qword_61C5D0 < (unsigned __int64)(((&unk_61BE38 - (_UNKNOWN *)&qword_61BE30) >> 3) - 1) )
      (*(&qword_61BE30 + ++qword_61C5D0))();
    result = sub_40585B();
    byte_61C5C8 = 1;
  }
  return result;
}

int sub_405908()
{
  return sub_40587A();
}

__int64 __fastcall sub_405930(_QWORD *a1)
{
  _BYTE *v1; // rcx@1
  char v2; // r10@1
  __int64 result; // rax@1
  unsigned int v4; // edx@1
  signed __int64 v5; // rsi@5
  unsigned int v6; // er8@11
  _BYTE *v7; // rcx@11
  unsigned int v8; // edx@11

  v1 = (_BYTE *)*a1;
  v2 = 0;
  result = 0LL;
  v4 = *(_BYTE *)*a1;
  while ( 1 )
  {
    v5 = (signed __int64)(v1 + 1);
    if ( (unsigned int)(unsigned __int8)v4 - 48 > 9 )
      break;
    if ( (unsigned __int8)result < (unsigned __int8)v4 )
      result = v4;
    v2 = 0;
    v4 = v1[1];
    if ( v4 == dword_61CBA4 )
    {
      v4 = v1[2];
      v5 = (signed __int64)(v1 + 2);
      v2 = 1;
    }
    v1 = (_BYTE *)v5;
  }
  if ( v2 )
  {
    *a1 = v1 - 1;
  }
  else
  {
    if ( (unsigned __int8)v4 != dword_61CBA8 )
    {
LABEL_10:
      *a1 = v1;
      return result;
    }
    v6 = v1[1];
    v7 = v1 + 2;
    v8 = v6;
    if ( v6 - 48 > 9 )
    {
      v1 = (_BYTE *)v5;
      goto LABEL_10;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)result < (unsigned __int8)v8 )
        result = v8;
      v8 = *v7;
      if ( v8 - 48 > 9 )
        break;
      ++v7;
    }
    *a1 = v7;
  }
  return result;
}

__int64 __fastcall sub_4059F0(char *a1)
{
  char v1; // bl@1
  unsigned __int8 v2; // al@1
  int v3; // edx@1
  char *v5; // [sp+8h] [bp-10h]@1

  v1 = *a1;
  v5 = &a1[*a1 == 45];
  v2 = sub_405930(&v5);
  v3 = 0;
  if ( v2 > 0x30u )
  {
    v3 = byte_4149C0[(unsigned __int64)(unsigned __int8)*v5];
    if ( v1 == 45 )
      v3 = -byte_4149C0[(unsigned __int64)(unsigned __int8)*v5];
  }
  return (unsigned int)v3;
}

__int64 __fastcall sub_405A40(_BYTE *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r11@4
  unsigned __int64 v3; // r10@4
  unsigned __int64 v4; // r9@5
  char *v5; // rax@5
  unsigned __int8 v6; // dl@5
  __int64 v7; // rcx@6
  _BYTE *v8; // rdx@8
  __int64 v9; // r8@9
  unsigned __int8 v10; // cl@11

  while ( byte_61CA80[(unsigned __int64)*a1] )
    ++a1;
  v2 = 12LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (v3 + v2) >> 1;
    v5 = (&off_61C440)[16 * v4];
    v6 = *v5;
    if ( !*v5 )
    {
      v8 = a1;
      goto LABEL_12;
    }
    v7 = *a1;
    if ( (unsigned __int8)byte_61C780[v7] >= v6 )
      break;
LABEL_15:
    v2 = (v3 + v2) >> 1;
LABEL_16:
    if ( v3 >= v2 )
      return 0LL;
  }
  if ( (unsigned __int8)byte_61C780[v7] > v6 )
  {
LABEL_18:
    v3 = v4 + 1;
    goto LABEL_16;
  }
  v8 = a1;
  while ( 1 )
  {
    v10 = *++v5;
    ++v8;
    if ( !*v5 )
      break;
    v9 = *v8;
    if ( (unsigned __int8)byte_61C780[v9] < v10 )
      goto LABEL_15;
    if ( (unsigned __int8)byte_61C780[v9] > v10 )
      goto LABEL_18;
  }
LABEL_12:
  if ( a2 )
    *a2 = v8;
  return (unsigned int)dword_61C448[4 * v4];
}

__int64 __fastcall sub_405AF0(__int64 a1)
{
  __int64 result; // rax@1

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
  {
    result = *(_BYTE *)(a1 + 48);
    if ( (_BYTE)result )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 49) && !(*(_QWORD *)(a1 + 48) & 0xFFFF00FF0000LL) )
    {
      result = *(_BYTE *)(a1 + 54);
      if ( !(_BYTE)result )
      {
        if ( !*(_BYTE *)(a1 + 56) )
          result = *(_BYTE *)(a1 + 51) ^ 1u;
        return result;
      }
      return 0LL;
    }
  }
  return result;
}

_BYTE *__fastcall sub_405B50(__int64 a1, _BYTE *a2)
{
  _BYTE *result; // rax@5

  if ( *(_WORD *)(a1 + 48) )
    *a2++ = 98;
  if ( *(char **)(a1 + 32) == byte_61C880 )
    *a2++ = 100;
  result = a2;
  if ( *(_QWORD *)(a1 + 40) )
  {
    *a2 = 102;
    result = a2 + 1;
  }
  if ( *(_BYTE *)(a1 + 52) )
    *result++ = 103;
  if ( *(_BYTE *)(a1 + 53) )
    *result++ = 104;
  if ( *(char **)(a1 + 32) == byte_61C980 )
    *result++ = 105;
  if ( *(_BYTE *)(a1 + 54) )
    *result++ = 77;
  if ( *(_BYTE *)(a1 + 50) )
    *result++ = 110;
  if ( *(_BYTE *)(a1 + 51) )
    *result++ = 82;
  if ( *(_BYTE *)(a1 + 55) )
    *result++ = 114;
  if ( *(_BYTE *)(a1 + 56) )
    *result++ = 86;
  *result = 0;
  return result;
}

char *__fastcall sub_405C00(char *a1, __int64 a2, int a3)
{
  char v3; // cl@1
  int v4; // eax@2
  int v5; // edx@2
  unsigned int v6; // eax@2

  v3 = *a1;
  if ( *a1 )
  {
    v4 = a3;
    v5 = a3 - 1;
    v6 = v4 & 0xFFFFFFFD;
    do
    {
      switch ( v3 )
      {
        case 114:
          *(_BYTE *)(a2 + 55) = 1;
          break;
        default:
          return a1;
        case 110:
          *(_BYTE *)(a2 + 50) = 1;
          break;
        case 105:
          if ( !*(_QWORD *)(a2 + 32) )
            *(_QWORD *)(a2 + 32) = byte_61C980;
          break;
        case 104:
          *(_BYTE *)(a2 + 53) = 1;
          break;
        case 103:
          *(_BYTE *)(a2 + 52) = 1;
          break;
        case 102:
          *(_QWORD *)(a2 + 40) = byte_61C780;
          break;
        case 100:
          *(_QWORD *)(a2 + 32) = byte_61C880;
          break;
        case 98:
          if ( !v6 )
            *(_BYTE *)(a2 + 48) = 1;
          if ( (unsigned int)v5 <= 1 )
            *(_BYTE *)(a2 + 49) = 1;
          break;
        case 86:
          *(_BYTE *)(a2 + 56) = 1;
          break;
        case 77:
          *(_BYTE *)(a2 + 54) = 1;
          break;
        case 82:
          *(_BYTE *)(a2 + 51) = 1;
          break;
      }
      v3 = *++a1;
    }
    while ( *a1 );
  }
  return a1;
}

int __fastcall compar(const void *a1, const void *a2)
{
  return strcmp(*(const char **)a1, *(const char **)a2);
}

int __fastcall sub_405D00(__int64 a1)
{
  char *v1; // rax@1

  v1 = dcgettext(0LL, "options '-%s' are incompatible", 5);
  error(2, 0, v1, a1);
  return sub_405D30(2LL, 0LL);
}

int __fastcall sub_405D30(__int64 a1, const char *a2)
{
  __int64 v2; // rax@1
  __int64 v3; // rbp@1
  char *v4; // rbx@1
  char *v5; // rax@1
  void *i; // rbx@1

  LODWORD(v2) = sub_40F880(a1, a2);
  v3 = v2;
  v4 = dcgettext(0LL, a2, 5);
  v5 = dcgettext(0LL, "%s: invalid field specification %s", 5);
  error(2, 0, v5, v4, v3);
  for ( i = ptr; i; i = *(void **)i )
    unlink((const char *)i + 13);
  ptr = 0LL;
  signal(2, 0LL);
  return raise(2);
}

noreturn void __fastcall  sub_405DD0(__int64 a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rdx@1
  __int64 v6; // rax@2
  __int64 v7; // rbp@2
  int *v8; // rax@2

  v5 = a2;
  if ( !a2 )
    goto LABEL_3;
  while ( 1 )
  {
    LODWORD(v6) = sub_40F700(0LL, 3LL, v5, a4, a5);
    v7 = v6;
    v8 = __errno_location();
    error(2, *v8, "%s: %s", a1, v7);
LABEL_3:
    v5 = dcgettext(0LL, "standard output", 5);
  }
}

void *__fastcall sub_405E30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp@1
  unsigned __int64 v4; // rbx@1
  unsigned __int64 v5; // rbx@3
  unsigned __int64 v6; // rdi@3
  void *result; // rax@3
  __int64 v8; // rdx@3

  v3 = a1;
  v4 = a3;
  while ( 1 )
  {
    v5 = (v4 & 0xFFFFFFFFFFFFFFE0LL) + 32;
    v6 = v5;
    result = malloc(v5);
    *(_QWORD *)v3 = result;
    if ( result )
      break;
    v4 = v5 >> 1;
    if ( a2 + 1 >= v4 )
      sub_411460(v6, a2, v8);
  }
  *(_QWORD *)(v3 + 40) = a2;
  *(_QWORD *)(v3 + 24) = v5;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_BYTE *)(v3 + 48) = 0;
  return result;
}

__int64 __fastcall sub_405EB0(char *a1, unsigned __int64 a2)
{
  char *v2; // rbx@1
  __int64 result; // rax@1

  v2 = a1;
  result = (signed int)sub_40D3C0(a1);
  if ( a2 > (unsigned __int64)a1 )
  {
    do
      result += *(++v2 - 1) == 9;
    while ( (char *)a2 != v2 );
  }
  return result;
}

size_t __fastcall sub_405EF0(char *dest, char *src, size_t n)
{
  size_t v3; // r13@1
  int *v4; // rax@1
  int *v5; // rbx@1
  size_t result; // rax@1
  char *v7; // rax@2
  char *v8; // rax@2
  __int64 v9; // rax@2
  __int64 v10; // rbx@2
  char *v11; // rax@2

  v3 = n;
  v4 = __errno_location();
  *v4 = 0;
  v5 = v4;
  result = strxfrm(dest, src, v3);
  if ( *v5 )
  {
    v7 = dcgettext(0LL, "string transformation failed", 5);
    error(0, *v5, v7);
    v8 = dcgettext(0LL, "set LC_ALL='C' to work around the problem", 5);
    error(0, 0, v8);
    LODWORD(v9) = sub_40F550(0LL, 8LL, src);
    v10 = v9;
    v11 = dcgettext(0LL, "the untransformed string was %s", 5);
    error(2, 0, v11, v10);
    result = sub_405FB0(2);
  }
  return result;
}

__int64 __fastcall sub_405FB0(__pid_t pid)
{
  int v1; // edx@1
  __pid_t v2; // ebx@1
  bool v3; // zf@1
  __pid_t v4; // edi@1
  __pid_t v5; // eax@3
  __pid_t v6; // ebp@4
  __int64 v8; // rax@9
  __int64 v9; // rax@11
  __int64 v10; // rbx@11
  char *v11; // rax@11
  __int64 v12; // rax@12
  __int64 v13; // rbp@12
  char *v14; // rbx@12
  int *v15; // rax@12
  int stat_loc; // [sp+Ch] [bp-2Ch]@3
  char v17; // [sp+10h] [bp-28h]@9
  int v18; // [sp+18h] [bp-20h]@9

  v1 = 0;
  v2 = pid;
  v3 = pid == 0;
  v4 = -1;
  if ( !v3 )
    v4 = v2;
  LOBYTE(v1) = v3;
  v5 = waitpid(v4, &stat_loc, v1);
  if ( v5 >= 0 )
  {
    v6 = v5;
    if ( !v5 )
      return (unsigned int)v6;
    if ( v2 <= 0 )
    {
      v18 = v5;
      LODWORD(v8) = sub_40CDE0(qword_61C6A0, &v17);
      if ( !v8 )
        return (unsigned int)v6;
      *(_BYTE *)(v8 + 12) = 2;
    }
    if ( !(stat_loc & 0x7F | BYTE1(stat_loc)) )
    {
      --dword_61C69C;
      return (unsigned int)v6;
    }
    LODWORD(v9) = sub_40F630(4LL, arg);
    v10 = v9;
    v11 = dcgettext(0LL, "%s [-d] terminated abnormally", 5);
    error(2, 0, v11, v10);
  }
  LODWORD(v12) = sub_40F630(4LL, arg);
  v13 = v12;
  v14 = dcgettext(0LL, "waiting for %s [-d]", 5);
  v15 = __errno_location();
  error(2, *v15, v14, v13);
  return sub_4060A0(2);
}

int __fastcall sub_4060A0(__pid_t pid)
{
  __int64 v1; // rax@1
  __int64 v3; // [sp+0h] [bp-18h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v4 = pid;
  LODWORD(v1) = sub_40CDE0(qword_61C6A0, &v3);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 12) = 2;
    LODWORD(v1) = sub_405FB0(pid);
  }
  return v1;
}

noreturn void __fastcall  sub_4060D0(unsigned int a1, const void *a2)
{
  const void *v2; // rax@2
  const void *v3; // rbx@2
  char v4; // [sp+4h] [bp-14h]@2

  write(2, a2, strlen((const char *)a2));
  if ( a1 )
  {
    LODWORD(v2) = sub_40D2B0(a1, &v4);
    v3 = v2;
    write(2, ": errno ", 8uLL);
    write(2, v3, strlen((const char *)v3));
  }
  write(2, "\n", 1uLL);
  _exit(2);
}

int __fastcall sub_406190(__int64 a1)
{
  __int64 v1; // rbx@1
  __int64 v2; // rdi@1
  __int64 v3; // rsi@2
  __int64 v4; // rax@2
  __int64 v5; // rdx@2
  __int64 v6; // rax@4

  v1 = a1;
  v2 = qword_61C6A0;
  if ( !qword_61C6A0
    && (v3 = 0LL, LODWORD(v6) = sub_40C600(47LL, 0LL, sub_405910, sub_405920, 0LL), v2 = v6, (qword_61C6A0 = v6) == 0)
    || (*(_BYTE *)(v1 + 12) = 1, v3 = v1, LODWORD(v4) = sub_40CDA0(v2, v1), !v4) )
  {
    sub_411460(v2, v3, v5);
  }
  return v4;
}

signed __int64 __fastcall sub_4061F0(__int64 a1, __int64 a2, signed __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  unsigned __int64 v6; // r13@1
  __int64 v7; // r12@1
  signed __int64 v8; // rbp@1
  __int64 v9; // rdx@2
  __int64 v10; // rax@2
  signed __int64 v11; // r14@2
  signed __int64 v12; // rcx@2
  int v13; // eax@3
  signed __int64 result; // rax@4
  __int64 v15; // rax@6

  while ( 1 )
  {
    v6 = a4;
    v7 = a5;
    v8 = a3 - 32 * a5;
    if ( a6 )
    {
      v9 = *(_QWORD *)(a1 + 40) >> 1;
      v10 = *(_QWORD *)(a1 + 40) - v9;
      v11 = v8 - 32 * v9;
      v12 = a1 + 16;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 48) >> 1;
      v10 = *(_QWORD *)(a1 + 48) - v9;
      v11 = v8 - 32 * v9;
      v12 = a1 + 24;
    }
    *(_QWORD *)(a2 + 48) = v10;
    v13 = *(_DWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 56) = a1;
    *(_QWORD *)(a2 + 16) = v8;
    *(_QWORD *)a2 = v8;
    *(_QWORD *)(a2 + 24) = v11;
    *(_QWORD *)(a2 + 8) = v11;
    *(_QWORD *)(a2 + 32) = v12;
    *(_QWORD *)(a2 + 40) = v9;
    *(_DWORD *)(a2 + 80) = v13 + 1;
    *(_BYTE *)(a2 + 84) = 0;
    pthread_mutex_init((pthread_mutex_t *)(a2 + 88), 0LL);
    if ( v6 <= 1 )
      break;
    *(_QWORD *)(a2 + 64) = a2 + 128;
    LODWORD(v15) = sub_4061F0(a2, a2 + 128, v8, v6 >> 1, v7, 1LL);
    a5 = v7;
    a4 = v6 - (v6 >> 1);
    a3 = v11;
    *(_QWORD *)(a2 + 72) = v15;
    a1 = a2;
    a6 = 0;
    a2 = v15;
  }
  *(_QWORD *)(a2 + 64) = 0LL;
  result = a2 + 128;
  *(_QWORD *)(a2 + 72) = 0LL;
  return result;
}

int __fastcall sub_406320(__int64 a1, __int64 a2)
{
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 8));
  sub_40D070(*(_QWORD *)a1);
  *(_BYTE *)(a2 + 84) = 1;
  pthread_cond_signal((pthread_cond_t *)(a1 + 48));
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 8));
}

unsigned __int64 __fastcall sub_406360(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax@1
  __int64 v4; // rcx@1
  __int64 v5; // r9@1
  signed __int64 v6; // r8@3
  _BYTE *v7; // rdi@6
  _BYTE *v8; // rdi@16
  signed __int64 v9; // rsi@20
  char v10; // cl@21
  _BYTE *v11; // rdi@24

  result = (unsigned __int64)&a1[a2 - 1];
  v4 = *(_QWORD *)a3;
  v5 = *(_QWORD *)(a3 + 8);
  if ( dword_61C424 == 128 )
  {
    if ( result <= (unsigned __int64)a1 )
      goto LABEL_6;
    v9 = v4 - 1;
    if ( v4 )
    {
      do
      {
        v10 = byte_61CA80[(unsigned __int64)*a1];
        while ( !v10 )
        {
          if ( result <= (unsigned __int64)a1 )
            goto LABEL_6;
          do
          {
            if ( (_BYTE *)result == ++a1 )
            {
              a1 = (_BYTE *)result;
              goto LABEL_6;
            }
            v10 = byte_61CA80[(unsigned __int64)*a1];
          }
          while ( !v10 );
          if ( --v9 == -1 )
            goto LABEL_12;
        }
        ++a1;
      }
      while ( result > (unsigned __int64)a1 );
      v11 = &a1[v5];
      if ( result > (unsigned __int64)v11 )
        result = (unsigned __int64)v11;
      return result;
    }
  }
  else
  {
    if ( result <= (unsigned __int64)a1 )
      goto LABEL_6;
    v6 = v4 - 1;
    if ( v4 )
    {
      do
      {
        while ( dword_61C424 != *a1 )
        {
          if ( result <= (unsigned __int64)++a1 )
            goto LABEL_6;
        }
        if ( result <= (unsigned __int64)a1 )
          goto LABEL_6;
        if ( result <= (unsigned __int64)++a1 )
          goto LABEL_6;
      }
      while ( --v6 != -1 );
    }
  }
LABEL_12:
  if ( !*(_BYTE *)(a3 + 48) )
  {
LABEL_6:
    v7 = &a1[v5];
    if ( result > (unsigned __int64)v7 )
      result = (unsigned __int64)v7;
    return result;
  }
  while ( byte_61CA80[(unsigned __int64)*a1] )
  {
    if ( result <= (unsigned __int64)++a1 )
      goto LABEL_6;
  }
  v8 = &a1[v5];
  if ( result > (unsigned __int64)v8 )
    result = (unsigned __int64)v8;
  return result;
}

_BYTE *__fastcall sub_406470(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9@1
  unsigned __int64 v4; // rcx@1
  _BYTE *result; // rax@1
  __int64 v6; // rsi@1
  signed __int64 v7; // r8@3
  signed __int64 v8; // rdi@22
  char v9; // si@23

  v3 = *(_QWORD *)(a3 + 24);
  v4 = (unsigned __int64)&a1[a2 - 1];
  result = a1;
  v6 = (v3 < 1) + *(_QWORD *)(a3 + 16);
  if ( dword_61C424 == 128 )
  {
    if ( v4 > (unsigned __int64)a1 )
    {
      v8 = v6 - 1;
      if ( v6 )
      {
        do
        {
          v9 = byte_61CA80[(unsigned __int64)*result];
          while ( !v9 )
          {
            if ( v4 > (unsigned __int64)result )
            {
              do
              {
                if ( (_BYTE *)v4 == ++result )
                {
                  result = (_BYTE *)v4;
                  goto LABEL_6;
                }
                v9 = byte_61CA80[(unsigned __int64)*result];
              }
              while ( !v9 );
              if ( --v8 != -1 )
                continue;
            }
            goto LABEL_6;
          }
          ++result;
        }
        while ( v4 > (unsigned __int64)result );
      }
    }
  }
  else if ( v4 > (unsigned __int64)a1 )
  {
    v7 = v6 - 1;
    if ( v6 )
    {
      do
      {
        while ( dword_61C424 != *result )
        {
          if ( v4 <= (unsigned __int64)++result )
            goto LABEL_6;
        }
        if ( v4 <= (unsigned __int64)result )
          break;
        if ( !(v7 | v3) )
          return result;
        if ( v4 <= (unsigned __int64)++result )
          break;
        --v7;
      }
      while ( v7 != -1 );
    }
  }
LABEL_6:
  if ( v3 )
  {
    if ( *(_BYTE *)(a3 + 49) && v4 > (unsigned __int64)result )
    {
      while ( byte_61CA80[(unsigned __int64)*result] )
      {
        if ( (_BYTE *)v4 == ++result )
        {
          result = (_BYTE *)(v3 + v4);
          if ( v4 <= v3 + v4 )
            result = (_BYTE *)v4;
          return result;
        }
      }
    }
    result += v3;
    if ( v4 <= (unsigned __int64)result )
      result = (_BYTE *)v4;
  }
  return result;
}

__int64 __fastcall sub_4065B0(__int64 a1, __int64 a2)
{
  char *v2; // r15@1
  char *v3; // rbx@1
  char *v4; // r10@1
  __int64 v5; // r12@1
  char *v6; // r14@1
  char *v7; // rax@2
  __int64 v8; // r13@2
  __int64 v9; // rbp@2
  size_t v10; // r11@6
  size_t v11; // r10@6
  char v12; // cl@9
  char v13; // cl@9
  size_t v14; // ST30_8@16
  char *v15; // ST28_8@16
  int v16; // eax@16
  __int64 v17; // rbp@21
  __int64 v18; // r11@22
  __int64 v19; // r11@23
  char *i; // rdi@37
  char *j; // rsi@39
  size_t v23; // ST30_8@41
  char *v24; // ST28_8@41
  int v25; // eax@41
  unsigned __int64 v26; // rdi@42
  char *v27; // rcx@43
  char *v28; // rsi@43
  char *v29; // rdi@44
  char *v30; // r8@44
  char v31; // al@49
  __int64 v32; // rdx@49
  char *v33; // rdi@52
  char v34; // al@57
  __int64 v35; // rdx@57
  char *v36; // rax@59
  size_t v37; // ST30_8@61
  char *v38; // ST28_8@61
  long double v39; // fst7@61
  long double v40; // fst6@64
  char *k; // rbx@68
  char *l; // rbp@70
  int v43; // er13@72
  int v44; // eax@72
  int v45; // eax@73
  char *v46; // rcx@76
  char *v47; // r8@76
  int v48; // edx@85
  bool v49; // cf@101
  size_t v50; // ST30_8@103
  char *v51; // ST28_8@103
  int v52; // ebx@103
  int v53; // eax@103
  char *v54; // ST28_8@104
  char *v55; // rax@104
  char *v56; // rbp@110
  char *v57; // r13@110
  size_t v58; // r15@110
  size_t v59; // r12@114
  size_t v60; // rbx@114
  size_t v61; // rdx@120
  unsigned __int64 v62; // rax@124
  char *v63; // rax@126
  size_t v64; // rax@131
  size_t v65; // rdx@133
  char *v66; // rdi@133
  unsigned __int64 v67; // r14@134
  char *v68; // rax@137
  size_t v69; // r11@141
  size_t v70; // r10@141
  size_t v71; // ST48_8@142
  char *v72; // ST30_8@142
  int v73; // eax@142
  char *v74; // r11@142
  size_t v75; // r10@142
  size_t v76; // ST30_8@159
  char *v77; // ST28_8@159
  int v78; // eax@159
  size_t v79; // ST00_8@160
  int v80; // eax@160
  size_t v81; // rdx@162
  int v82; // eax@164
  size_t v83; // ST30_8@167
  char *v84; // ST28_8@167
  __int64 v85; // r14@172
  size_t v86; // rdx@181
  int v87; // [sp+0h] [bp-2188h]@16
  long double v88; // [sp+0h] [bp-2188h]@61
  __int64 v89; // [sp+18h] [bp-2170h]@8
  char v90; // [sp+26h] [bp-2162h]@0
  char v91; // [sp+27h] [bp-2161h]@0
  char *src; // [sp+28h] [bp-2160h]@72
  char *srca; // [sp+28h] [bp-2160h]@110
  char *srcb; // [sp+28h] [bp-2160h]@141
  char *srcc; // [sp+28h] [bp-2160h]@183
  size_t v96; // [sp+30h] [bp-2158h]@72
  char *v97; // [sp+30h] [bp-2158h]@110
  size_t v98; // [sp+30h] [bp-2158h]@160
  char *v99; // [sp+30h] [bp-2158h]@162
  char **v100; // [sp+38h] [bp-2150h]@1
  __int64 v101; // [sp+40h] [bp-2148h]@1
  char *v102; // [sp+48h] [bp-2140h]@110
  size_t v103; // [sp+48h] [bp-2140h]@162
  char *v104; // [sp+50h] [bp-2138h]@110
  char *s2; // [sp+58h] [bp-2130h]@115
  char *ptr; // [sp+60h] [bp-2128h]@0
  size_t size; // [sp+68h] [bp-2120h]@110
  char *v108; // [sp+78h] [bp-2110h]@110
  __int64 v109; // [sp+80h] [bp-2108h]@110
  char *v110; // [sp+88h] [bp-2100h]@110
  size_t v111; // [sp+90h] [bp-20F8h]@110
  size_t v112; // [sp+98h] [bp-20F0h]@110
  char *endptr; // [sp+A8h] [bp-20E0h]@61
  char *v114; // [sp+B0h] [bp-20D8h]@61
  char v115; // [sp+C0h] [bp-20C8h]@142
  __m128i v116; // [sp+D0h] [bp-20B8h]@109
  __m128i v117; // [sp+E0h] [bp-20A8h]@109
  __m128i v118; // [sp+F0h] [bp-2098h]@109
  __m128i v119; // [sp+100h] [bp-2088h]@109
  __m128i v120; // [sp+110h] [bp-2078h]@109
  __m128i v121; // [sp+120h] [bp-2068h]@109
  __m128i v122; // [sp+130h] [bp-2058h]@109
  __m128i v123; // [sp+140h] [bp-2048h]@109
  __m128i v124; // [sp+150h] [bp-2038h]@109
  __int64 v125; // [sp+160h] [bp-2028h]@109
  int v126; // [sp+168h] [bp-2020h]@109
  __m128i v127; // [sp+16Ch] [bp-201Ch]@109
  __m128i v128; // [sp+17Ch] [bp-200Ch]@109
  __m128i v129; // [sp+18Ch] [bp-1FFCh]@109
  __m128i v130; // [sp+19Ch] [bp-1FECh]@109
  __m128i v131; // [sp+1ACh] [bp-1FDCh]@109
  __m128i v132; // [sp+1BCh] [bp-1FCCh]@109
  __m128i v133; // [sp+1CCh] [bp-1FBCh]@109
  __m128i v134; // [sp+1DCh] [bp-1FACh]@109
  __m128i v135; // [sp+1ECh] [bp-1F9Ch]@109
  __int64 v136; // [sp+1FCh] [bp-1F8Ch]@109
  int v137; // [sp+204h] [bp-1F84h]@109
  char v138[4000]; // [sp+210h] [bp-1F78h]@43
  _TBYTE s1; // [sp+11B0h] [bp-FD8h]@110

  v2 = *(char **)(a2 + 16);
  v100 = (char **)a1;
  v3 = *(char **)(a1 + 24);
  v4 = *(char **)(a2 + 24);
  v101 = a2;
  v5 = qword_61C750;
  v6 = *(char **)(a1 + 16);
  while ( 1 )
  {
LABEL_2:
    v7 = v4;
    v8 = *(_QWORD *)(v5 + 40);
    v9 = *(_QWORD *)(v5 + 32);
    if ( v6 >= v3 )
      v3 = v6;
    if ( v2 >= v4 )
      v7 = v2;
    v10 = v3 - v6;
    v11 = v7 - v2;
    if ( byte_61CBA1 || *(_QWORD *)(v5 + 48) & 0xFFFFFFFFFF0000LL || *(_BYTE *)(v5 + 56) )
      break;
    if ( !v9 )
    {
      if ( v3 == v6 )
      {
        v87 = -(v7 != v2);
        goto LABEL_19;
      }
      if ( v7 == v2 )
      {
        v85 = v5;
        v87 = 1;
      }
      else
      {
        if ( v8 )
        {
          while ( v6 < v3 && v2 < v7 )
          {
            v48 = *(_BYTE *)(v8 + (unsigned __int8)*(++v6 - 1)) - *(_BYTE *)(v8 + (unsigned __int8)*(++v2 - 1));
            if ( *(_BYTE *)(v8 + (unsigned __int8)*(v6 - 1)) != *(_BYTE *)(v8 + (unsigned __int8)*(v2 - 1)) )
            {
LABEL_172:
              v87 = v48;
              v85 = v5;
              goto LABEL_173;
            }
          }
        }
        else
        {
          v86 = v7 - v2;
          if ( v10 <= v11 )
            v86 = v3 - v6;
          srcc = (char *)(v7 - v2);
          v87 = memcmp(v6, v2, v86);
          if ( v87 )
            goto LABEL_35;
          v10 = v3 - v6;
          v11 = (size_t)srcc;
        }
        if ( v10 >= v11 )
        {
          v87 = v10 != v11;
          goto LABEL_19;
        }
        v85 = v5;
        v87 = -1;
      }
LABEL_173:
      if ( !*(_BYTE *)(v85 + 55) )
        return (unsigned int)v87;
      goto LABEL_174;
    }
    v46 = v6;
    v47 = v6;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( v46 >= v3 || !*(_BYTE *)(v9 + (unsigned __int8)*v46) )
        {
          if ( v2 >= v7 )
            goto LABEL_101;
          while ( *(_BYTE *)(v9 + (unsigned __int8)*v2) )
          {
            if ( v7 == ++v2 )
            {
              v2 = v7;
              goto LABEL_101;
            }
          }
          if ( v3 <= v46 || v7 <= v2 )
          {
LABEL_101:
            v49 = v46 < v3;
            goto LABEL_102;
          }
          v48 = *(_BYTE *)(v8 + (unsigned __int8)*v46) - *(_BYTE *)(v8 + (unsigned __int8)*v2);
          if ( *(_BYTE *)(v8 + (unsigned __int8)*v46) != *(_BYTE *)(v8 + (unsigned __int8)*v2) )
            goto LABEL_172;
          ++v2;
        }
        ++v46;
      }
    }
    while ( 1 )
    {
      if ( v47 < v3 && *(_BYTE *)(v9 + (unsigned __int8)*v47) )
        goto LABEL_92;
      if ( v2 >= v7 )
        break;
      while ( *(_BYTE *)(v9 + (unsigned __int8)*v2) )
      {
        if ( v7 == ++v2 )
        {
          v2 = v7;
          goto LABEL_154;
        }
      }
      if ( v3 <= v47 || v7 <= v2 )
        break;
      v48 = (unsigned __int8)*v47 - (unsigned __int8)*v2;
      if ( (unsigned __int8)*v47 != (unsigned __int8)*v2 )
        goto LABEL_172;
      ++v2;
LABEL_92:
      ++v47;
    }
LABEL_154:
    v49 = v47 < v3;
LABEL_102:
    v87 = v49 - (v7 > v2);
LABEL_19:
    if ( v87 )
      goto LABEL_35;
LABEL_20:
    v5 = *(_QWORD *)(v5 + 64);
    if ( !v5 )
      return (unsigned int)v87;
    v6 = *v100;
    v17 = (__int64)v100[1];
    v2 = *(char **)v101;
    if ( *(_QWORD *)(v5 + 16) == -1LL )
    {
      v3 = &v6[v17 - 1];
      v4 = &v2[*(_QWORD *)(v101 + 8) - 1];
      if ( *(_QWORD *)v5 == -1LL )
        goto LABEL_25;
LABEL_23:
      v6 = (char *)sub_406360(v6, v17, v5);
      v2 = (char *)sub_406360(v2, v19, v5);
    }
    else
    {
      v3 = sub_406470(*v100, (__int64)v100[1], v5);
      v4 = sub_406470(v2, v18, v5);
      if ( *(_QWORD *)v5 != -1LL )
        goto LABEL_23;
LABEL_25:
      if ( *(_BYTE *)(v5 + 48) )
      {
        if ( v3 > v6 )
        {
          while ( byte_61CA80[(unsigned __int64)(unsigned __int8)*v6] )
          {
            if ( v3 == ++v6 )
            {
              v6 = v3;
              break;
            }
          }
        }
        if ( v4 > v2 )
        {
          while ( byte_61CA80[(unsigned __int64)(unsigned __int8)*v2] )
          {
            if ( v4 == ++v2 )
            {
              v2 = v4;
              goto LABEL_2;
            }
          }
        }
      }
    }
  }
  v89 = v9 | v8;
  if ( !(v9 | v8) )
  {
    v12 = *v3;
    *v3 = 0;
    v90 = v12;
    v13 = *v7;
    *v7 = 0;
    v91 = v13;
    goto LABEL_10;
  }
  v26 = v10 + v11 + 2;
  if ( v26 <= 0xFA0 )
  {
    v27 = v138;
    ptr = 0LL;
    v28 = &v138[v10 + 1];
    if ( v3 != v6 )
      goto LABEL_44;
LABEL_105:
    *v27 = 0;
    if ( !v11 )
      goto LABEL_106;
LABEL_52:
    v33 = &v2[v11];
    v11 = 0LL;
    while ( 2 )
    {
      v34 = *v2;
      v35 = (unsigned __int8)*v2;
      if ( !v9 )
      {
LABEL_58:
        v34 = *(_BYTE *)(v8 + v35);
        goto LABEL_55;
      }
      if ( !*(_BYTE *)(v9 + v35) )
      {
        if ( v8 )
          goto LABEL_58;
LABEL_55:
        v28[v11++] = v34;
      }
      if ( v33 == ++v2 )
      {
        v36 = &v28[v11];
        goto LABEL_60;
      }
      continue;
    }
  }
  v54 = (char *)(v7 - v2);
  LODWORD(v55) = sub_411210(v26);
  v10 = v3 - v6;
  v11 = (size_t)v54;
  v27 = v55;
  ptr = v55;
  v28 = &v55[v3 - v6 + 1];
  if ( v3 == v6 )
    goto LABEL_105;
LABEL_44:
  v29 = &v6[v10];
  v30 = v6;
  v10 = 0LL;
  while ( 2 )
  {
    v31 = *v30;
    v32 = (unsigned __int8)*v30;
    if ( !v9 )
    {
LABEL_50:
      v31 = *(_BYTE *)(v8 + v32);
      goto LABEL_47;
    }
    if ( !*(_BYTE *)(v9 + v32) )
    {
      if ( v8 )
        goto LABEL_50;
LABEL_47:
      v27[v10++] = v31;
    }
    if ( v29 != ++v30 )
      continue;
    break;
  }
  v27[v10] = 0;
  if ( v11 )
    goto LABEL_52;
LABEL_106:
  v36 = v28;
LABEL_60:
  *v36 = 0;
  v2 = v28;
  v6 = v27;
LABEL_10:
  if ( *(_BYTE *)(v5 + 50) )
  {
    for ( i = v6; byte_61CA80[(unsigned __int64)(unsigned __int8)*i]; ++i )
      ;
    for ( j = v2; byte_61CA80[(unsigned __int64)(unsigned __int8)*j]; ++j )
      ;
    v23 = v11;
    v24 = (char *)v10;
    v25 = sub_4106A0(i, j, (unsigned int)dword_61CBA8, (unsigned int)dword_61CBA4);
    v10 = (size_t)v24;
    v11 = v23;
    v87 = v25;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v5 + 52) )
  {
    v37 = v11;
    v38 = (char *)v10;
    v88 = strtold(v6, &endptr);
    v39 = strtold(v2, &v114);
    v10 = (size_t)v38;
    v11 = v37;
    if ( v6 == endptr )
    {
      v87 = -(v114 != v2);
      goto LABEL_17;
    }
    if ( v2 == v114 )
    {
      v87 = 1;
      goto LABEL_17;
    }
    if ( v39 <= v88 )
    {
      v40 = v88;
      v87 = 1;
      if ( v40 > v39 )
        goto LABEL_17;
      if ( v40 == v39 )
      {
        v87 = 0;
        goto LABEL_17;
      }
    }
    v87 = -1;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v5 + 53) )
  {
    for ( k = v6; byte_61CA80[(unsigned __int64)(unsigned __int8)*k]; ++k )
      ;
    for ( l = v2; byte_61CA80[(unsigned __int64)(unsigned __int8)*l]; ++l )
      ;
    v96 = v11;
    src = (char *)v10;
    v43 = sub_4059F0(k);
    v44 = sub_4059F0(l);
    v10 = (size_t)src;
    v11 = v96;
    v87 = v43 - v44;
    if ( v43 == v44 )
    {
      v45 = sub_4106A0(k, l, (unsigned int)dword_61CBA8, (unsigned int)dword_61CBA4);
      v10 = (size_t)src;
      v11 = v96;
      v87 = v45;
    }
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v5 + 54) )
  {
    v50 = v11;
    v51 = (char *)v10;
    v52 = sub_405A40(v6, 0LL);
    v53 = sub_405A40(v2, 0LL);
    v10 = (size_t)v51;
    v11 = v50;
    v87 = v52 - v53;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(v5 + 51) )
  {
    if ( *(_BYTE *)(v5 + 56) )
    {
      v14 = v11;
      v15 = (char *)v10;
      v16 = sub_40B900(v6, v2);
      v10 = (size_t)v15;
      v11 = v14;
      v87 = v16;
    }
    else if ( v10 )
    {
      v87 = 1;
      if ( v11 )
      {
        v76 = v11;
        v77 = (char *)v10;
        v78 = sub_4115C0(v6, v10 + 1, v2, v11 + 1);
        v11 = v76;
        v10 = (size_t)v77;
        v87 = v78;
      }
    }
    else
    {
      v87 = -(v11 != 0);
    }
    goto LABEL_17;
  }
  v127 = _mm_load_si128((const __m128i *)&xmmword_61C600);
  v128 = _mm_load_si128((const __m128i *)&xmmword_61C610);
  v129 = _mm_load_si128((const __m128i *)&xmmword_61C620);
  v130 = _mm_load_si128((const __m128i *)&xmmword_61C630);
  v131 = _mm_load_si128((const __m128i *)&xmmword_61C640);
  v132 = _mm_load_si128((const __m128i *)&xmmword_61C650);
  v133 = _mm_load_si128((const __m128i *)&xmmword_61C660);
  v134 = _mm_load_si128((const __m128i *)&xmmword_61C670);
  v135 = _mm_load_si128((const __m128i *)&xmmword_61C680);
  v136 = qword_61C690;
  v137 = dword_61C698;
  v116 = v127;
  v117 = v128;
  v118 = v129;
  v119 = v130;
  v120 = v131;
  v121 = v132;
  v122 = v133;
  v123 = v134;
  v124 = v135;
  v125 = qword_61C690;
  v126 = dword_61C698;
  if ( !byte_61CBA1 )
  {
    v79 = v11;
    v98 = v10;
    sub_40B360(v6, v10);
    sub_40B250(&v116, &v114);
    srcb = (char *)v79;
    sub_40B360(v2, v79);
    sub_40B250(&v127, &v115);
    v80 = memcmp(&v114, &v115, 0x10uLL);
    v75 = v79;
    v74 = (char *)v98;
    v87 = v80;
    if ( !v80 )
    {
      v60 = v98;
      v57 = v6;
      s2 = v2;
      v104 = 0LL;
      goto LABEL_162;
    }
    v104 = 0LL;
    goto LABEL_167;
  }
  v87 = 0;
  v56 = v6;
  v57 = (char *)&s1;
  v97 = &v6[v10];
  v102 = &v2[v11];
  v108 = v6;
  v104 = 0LL;
  v109 = v5;
  v111 = v10;
  v112 = v11;
  size = 3 * (v10 + v11) + 2;
  srca = v2;
  v110 = v2;
  v58 = 4000LL;
LABEL_111:
  if ( size > v58 )
  {
    while ( 1 )
    {
      v57 = (char *)&s1;
      v62 = 3 * v58 >> 1;
      if ( size >= v62 )
        v62 = size;
      v58 = v62;
      free(v104);
      v63 = (char *)malloc(v58);
      v104 = v63;
      if ( !v63 )
        v58 = 4000LL;
      if ( v63 )
        v57 = v63;
      if ( v97 <= v56 )
        goto LABEL_113;
LABEL_131:
      v64 = sub_405EF0(v57, v56, v58);
      v60 = v64 + 1;
      if ( v102 > srca )
        break;
      v67 = v64 + 1;
      v59 = 0LL;
      if ( v58 < v60 )
        goto LABEL_135;
LABEL_176:
      if ( v58 < v67 )
        goto LABEL_135;
LABEL_115:
      s2 = &v57[v60];
      if ( v97 <= v56 )
      {
        if ( v102 <= srca )
          goto LABEL_150;
        goto LABEL_148;
      }
      v56 += strlen(v56) + 1;
      if ( v102 > srca )
        goto LABEL_148;
LABEL_117:
      if ( v97 <= v56 && v102 <= srca )
      {
LABEL_150:
        srcb = (char *)v59;
        v6 = v108;
        v2 = v110;
        v69 = v111;
        v70 = v112;
        v5 = v109;
        goto LABEL_142;
      }
      sub_40B360(v57, v60);
      sub_40B360(s2, v59);
      if ( v87 )
        goto LABEL_111;
      v61 = v59;
      if ( v60 <= v59 )
        v61 = v60;
      v87 = memcmp(v57, s2, v61);
      if ( v87 )
        goto LABEL_111;
      v87 = (v60 > v59) - (v60 < v59);
      if ( size <= v58 )
        goto LABEL_112;
    }
    if ( v58 >= v60 )
    {
      v66 = &v57[v60];
      v65 = v58 - v60;
    }
    else
    {
      v65 = 0LL;
      v66 = 0LL;
    }
  }
  else
  {
LABEL_112:
    if ( v97 > v56 )
      goto LABEL_131;
LABEL_113:
    if ( v102 <= srca )
    {
      v59 = 0LL;
      v60 = 0LL;
      goto LABEL_115;
    }
    v66 = v57;
    v65 = v58;
    v60 = 0LL;
  }
  v59 = sub_405EF0(v66, srca, v65) + 1;
  v67 = v59 + v60;
  if ( v58 >= v60 )
    goto LABEL_176;
LABEL_135:
  if ( v67 <= 0x5555555555555554LL )
    v67 = 3 * v67 >> 1;
  free(v104);
  LODWORD(v68) = sub_411210(v67);
  v57 = v68;
  if ( v97 > v56 )
    strxfrm(v68, v56, v60);
  s2 = &v57[v60];
  if ( v102 > srca )
  {
    strxfrm(&v57[v60], srca, v59);
    if ( v97 > v56 )
      v56 += strlen(v56) + 1;
    v104 = v57;
    v58 = v67;
LABEL_148:
    srca += strlen(srca) + 1;
    goto LABEL_117;
  }
  if ( v97 > v56 )
  {
    v58 = v67;
    v104 = v57;
    v56 += strlen(v56) + 1;
    goto LABEL_117;
  }
  v104 = v57;
  v6 = v108;
  srcb = (char *)v59;
  v2 = v110;
  v69 = v111;
  v70 = v112;
  v5 = v109;
LABEL_142:
  v71 = v70;
  v72 = (char *)v69;
  sub_40B360(v57, v60);
  sub_40B250(&v116, &v114);
  sub_40B360(s2, (size_t)srcb);
  sub_40B250(&v127, &v115);
  v73 = memcmp(&v114, &v115, 0x10uLL);
  v74 = v72;
  v75 = v71;
  if ( v73 )
  {
LABEL_166:
    v87 = v73;
  }
  else if ( !v87 )
  {
LABEL_162:
    v103 = v75;
    v99 = v74;
    v81 = (size_t)srcb;
    if ( v60 <= (unsigned __int64)srcb )
      v81 = v60;
    v82 = memcmp(v57, s2, v81);
    v74 = v99;
    v75 = v103;
    v87 = v82;
    if ( !v82 )
    {
      v73 = (v60 > (unsigned __int64)srcb) - (v60 < (unsigned __int64)srcb);
      goto LABEL_166;
    }
  }
LABEL_167:
  v83 = v75;
  v84 = v74;
  free(v104);
  v10 = (size_t)v84;
  v11 = v83;
LABEL_17:
  if ( !v89 )
  {
    v6[v10] = v90;
    v2[v11] = v91;
    goto LABEL_19;
  }
  free(ptr);
  if ( !v87 )
    goto LABEL_20;
LABEL_35:
  if ( *(_BYTE *)(v5 + 55) )
LABEL_174:
    v87 = -v87;
  return (unsigned int)v87;
}

signed __int64 __fastcall sub_4074D0(__int64 a1, FILE *a2, char *a3)
{
  __int64 v3; // r9@2
  __int64 v4; // rbx@2
  __int64 v5; // rbp@2
  void *v6; // r15@2
  size_t v7; // rdx@2
  __int64 v8; // rax@3
  unsigned __int64 v9; // rbp@4
  signed __int64 v10; // r12@4
  signed __int64 v11; // rsi@4
  char *v12; // r12@5
  signed __int64 v13; // r13@5
  unsigned __int64 v14; // r12@5
  char *v15; // r15@6
  signed __int64 v16; // r14@6
  char *v17; // r13@6
  size_t v18; // rax@8
  unsigned __int64 v19; // r11@8
  char *v20; // rax@11
  signed __int64 v21; // r10@14
  signed __int64 v22; // r15@14
  _BYTE *v23; // rax@17
  unsigned __int64 v24; // r11@18
  bool v25; // zf@23
  char *v26; // rax@31
  signed __int64 v27; // r13@31
  char *v28; // r14@31
  char *v29; // r15@31
  char *v30; // rdi@31
  unsigned __int64 v31; // rdx@31
  signed __int64 v32; // rax@31
  unsigned __int64 v33; // rax@32
  void *v34; // rax@35
  char *v35; // rax@37
  signed __int64 v36; // rax@39
  signed __int64 result; // rax@41
  char *v38; // rax@45
  __int64 v39; // rdx@45
  __int64 v40; // rcx@45
  __int64 v41; // r8@45
  __int64 v42; // [sp+0h] [bp-78h]@2
  char *v43; // [sp+8h] [bp-70h]@8
  unsigned __int64 v44; // [sp+10h] [bp-68h]@4
  FILE *stream; // [sp+20h] [bp-58h]@2
  __int64 v46; // [sp+28h] [bp-50h]@2
  char v47; // [sp+37h] [bp-41h]@2
  char *v48; // [sp+38h] [bp-40h]@2

  if ( *(_BYTE *)(a1 + 48) )
  {
    result = 0LL;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = qword_61C750;
    v5 = qword_61C428;
    v6 = *(void **)a1;
    stream = a2;
    v48 = a3;
    v7 = *(_QWORD *)(a1 + 32);
    v46 = a1;
    v47 = byte_61C500;
    v42 = *(_QWORD *)(a1 + 40);
    if ( v3 == v7 )
    {
      v8 = *(_QWORD *)(a1 + 16);
    }
    else
    {
      memmove(v6, (char *)v6 + v3 - v7, v7);
      v3 = *(_QWORD *)(a1 + 32);
      v6 = *(void **)a1;
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 8) = v3;
      v8 = 0LL;
    }
    v9 = v5 - 34;
    v44 = v42 + 1;
    v10 = *(_QWORD *)(a1 + 24);
    v11 = (unsigned int)v47;
    while ( 1 )
    {
      v12 = (char *)v6 + v10;
      v13 = (signed __int64)&v12[-32 * v8];
      v14 = &v12[-(v8 * v42)] - ((_BYTE *)v6 + v3);
      if ( v8 )
      {
        v15 = (char *)v6 + v3;
        v16 = v13;
        v17 = (char *)(*(_QWORD *)v13 + *(_QWORD *)(v13 + 8));
      }
      else
      {
        v35 = (char *)v6;
        v15 = (char *)v6 + v3;
        v16 = v13;
        v17 = v35;
      }
      while ( v14 > v44 )
      {
        v18 = fread_unlocked(v15, 1uLL, (v14 - 1) / v44, stream);
        v19 = (v14 - 1) / v44;
        v14 -= v18;
        v43 = &v15[v18];
        if ( v19 == v18 )
          goto LABEL_49;
        if ( stream->_flags & 0x20 )
        {
          v38 = dcgettext(0LL, "read failed", 5);
          sub_405DD0((__int64)v38, v48, v39, v40, v41);
        }
        if ( !(stream->_flags & 0x10) )
          goto LABEL_49;
        *(_BYTE *)(v46 + 48) = 1;
        v20 = &v15[v18];
        if ( *(char **)v46 == v43 )
          return 0LL;
        if ( v17 != v43 && *(v43 - 1) != v47 )
        {
          *v43 = v47;
          v21 = (signed __int64)v15;
          ++v43;
          v22 = (signed __int64)(v20 + 1);
        }
        else
        {
LABEL_49:
          v21 = (signed __int64)v15;
          v22 = (signed __int64)v43;
        }
        while ( 1 )
        {
          v11 = (unsigned int)v47;
          LODWORD(v23) = sub_413030(v21, v11, v22 - v21);
          if ( !v23 )
            break;
          v21 = (signed __int64)(v23 + 1);
          v16 -= 32LL;
          *v23 = 0;
          *(_QWORD *)v16 = v17;
          v24 = v23 + 1 - v17;
          *(_QWORD *)(v16 + 8) = v24;
          if ( v9 < v24 )
            v9 = v23 + 1 - v17;
          v14 -= v42;
          if ( v4 )
          {
            if ( *(_QWORD *)(v4 + 16) != -1LL )
              v23 = sub_406470(v17, v23 + 1 - v17, v4);
            v25 = *(_QWORD *)v4 == -1LL;
            *(_QWORD *)(v16 + 24) = v23;
            if ( v25 )
            {
              if ( *(_BYTE *)(v4 + 48) )
              {
                while ( byte_61CA80[(unsigned __int64)(unsigned __int8)*v17] )
                  ++v17;
              }
              *(_QWORD *)(v16 + 16) = v17;
            }
            else
            {
              *(_QWORD *)(v16 + 16) = sub_406360(v17, v24, v4);
            }
          }
          v17 = (char *)v21;
        }
        v15 = v43;
        if ( *(_BYTE *)(v46 + 48) )
          break;
      }
      v26 = v17;
      v27 = v16;
      v28 = v15;
      v29 = v26;
      v30 = *(char **)v46;
      v31 = *(_QWORD *)(v46 + 24);
      *(_QWORD *)(v46 + 8) = &v28[-*(_QWORD *)v46];
      v32 = (signed __int64)(&v30[v31] - v27) >> 5;
      *(_QWORD *)(v46 + 16) = v32;
      if ( v32 )
        break;
      v33 = v31 >> 5;
      if ( v30 )
      {
        v11 = 6148914691236517183LL;
        if ( v31 > 0x555555555555553FLL )
          goto LABEL_46;
        v10 = 32 * (v33 + (v31 >> 6) + 1);
      }
      else if ( v31 <= 0x1F )
      {
        v10 = 128LL;
      }
      else
      {
        v36 = 32 * v33;
        if ( v36 < 0 )
LABEL_46:
          sub_411460(v30, v11, v31);
        v10 = v36;
      }
      v11 = v10;
      LODWORD(v34) = sub_411270(v30, v10);
      v6 = v34;
      *(_QWORD *)v46 = v34;
      v3 = *(_QWORD *)(v46 + 8);
      *(_QWORD *)(v46 + 24) = v10;
      v8 = *(_QWORD *)(v46 + 16);
    }
    result = 1LL;
    qword_61C428 = v9 + 34;
    *(_QWORD *)(v46 + 32) = v28 - v29;
  }
  return result;
}

__int64 __fastcall sub_407850(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax@1
  __int64 result; // rax@2

  v2 = *(_DWORD *)(a2 + 80);
  if ( *(_DWORD *)(a1 + 80) == v2 )
    result = *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 48) < *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48);
  else
    result = *(_DWORD *)(a1 + 80) < v2;
  return result;
}

int __fastcall sub_407880(__int64 a1)
{
  return pthread_sigmask(2, (const __sigset_t *)(a1 + 8), 0LL);
}

int __fastcall sub_407890(signed __int64 a1, sigset_t *a2)
{
  int v2; // eax@2
  void *v3; // rbx@2
  char v4; // al@2
  int result; // eax@6
  char v6; // [sp+0h] [bp-98h]@2
  __sigset_t oldmask; // [sp+8h] [bp-90h]@2

  if ( !ptr )
    goto LABEL_10;
  a1 = 0LL;
  a2 = &newmask;
  v2 = pthread_sigmask(0, &newmask, &oldmask);
  v3 = ptr;
  v4 = v2 == 0;
  v6 = v4;
  if ( ptr )
  {
    do
    {
      a1 = (signed __int64)v3 + 13;
      unlink((const char *)v3 + 13);
      v3 = *(void **)v3;
    }
    while ( v3 );
    v4 = v6;
  }
  ptr = 0LL;
  if ( v4 )
  {
    sub_407880((__int64)&v6);
    result = sub_40A9F0(&v6, &newmask);
  }
  else
  {
LABEL_10:
    result = sub_40A9F0(a1, a2);
  }
  return result;
}

void __fastcall sub_407920(char *name)
{
  __int64 *v1; // r13@1
  void *v2; // rbx@1
  __int64 i; // rax@2
  __int64 v4; // r12@7
  int v5; // er14@7
  int *v6; // rax@7
  __int64 v7; // rcx@7
  __int64 v8; // r8@7
  bool v9; // zf@7
  int v10; // er15@7
  __int64 v11; // rax@12
  __int64 v12; // rbp@12
  char *v13; // rax@12
  bool v14; // [sp+0h] [bp-C8h]@7
  __sigset_t oldmask; // [sp+8h] [bp-C0h]@7

  v1 = (__int64 *)&ptr;
  v2 = ptr;
  if ( name != (char *)ptr + 13 )
  {
    for ( i = *(_QWORD *)ptr; (char *)(i + 13) != name; i = *(_QWORD *)i )
      v2 = (void *)i;
    v1 = (__int64 *)v2;
    v2 = (void *)i;
  }
  if ( *((_BYTE *)v2 + 12) == 1 )
    sub_4060A0(*((_DWORD *)v2 + 2));
  v4 = *(_QWORD *)v2;
  v14 = pthread_sigmask(0, &newmask, &oldmask) == 0;
  v5 = unlink(name);
  v6 = __errno_location();
  v9 = v14 == 0;
  v10 = *v6;
  *v1 = v4;
  if ( v9 )
  {
    if ( !v5 )
      goto LABEL_9;
LABEL_12:
    LODWORD(v11) = sub_40F700(0LL, 3LL, name, v7, v8);
    v12 = v11;
    v13 = dcgettext(0LL, "warning: cannot remove: %s", 5);
    error(0, v10, v13, v12, *(_QWORD *)&v14);
    if ( v4 )
      goto LABEL_10;
LABEL_13:
    off_61C418 = v1;
    goto LABEL_10;
  }
  sub_407880((__int64)&v14);
  if ( v5 )
    goto LABEL_12;
LABEL_9:
  if ( !v4 )
    goto LABEL_13;
LABEL_10:
  free(v2);
}

__int64 __fastcall sub_407A30(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx@3
  int *v3; // rbp@3
  int v4; // eax@11
  void *v5; // r12@11
  __pid_t v6; // eax@11
  int v7; // er15@11
  __pid_t v8; // er13@11
  __pid_t v9; // ST14_4@13
  double v11; // [sp+8h] [bp-E0h]@3
  bool v12; // [sp+20h] [bp-C8h]@4
  __sigset_t oldmask; // [sp+28h] [bp-C0h]@11

  if ( (signed int)sub_40DA00((int *__attribute__((__org_arrdim(0,2))) )a1) < 0 )
    return (unsigned int)-1;
  if ( dword_61C420 + 1 < (unsigned int)dword_61C69C )
  {
    sub_405FB0(-1);
    while ( dword_61C69C > 0 && (unsigned int)sub_405FB0(0) )
      ;
  }
  v2 = a2 - 1;
  v3 = __errno_location();
  v11 = 0.25;
  while ( 1 )
  {
    v4 = pthread_sigmask(0, &newmask, &oldmask);
    v5 = ptr;
    ptr = 0LL;
    v12 = v4 == 0;
    v6 = fork();
    v7 = *v3;
    v8 = v6;
    if ( v6 )
    {
      ptr = v5;
      if ( !v12 )
        goto LABEL_5;
    }
    else if ( !v12 )
    {
      goto LABEL_19;
    }
    v9 = v6;
    sub_407880((__int64)&v12);
    v6 = v9;
LABEL_5:
    *v3 = v7;
    if ( v6 >= 0 )
      break;
    if ( v7 != 11 )
      goto LABEL_18;
    sub_411620();
    v11 = v11 + v11;
    while ( dword_61C69C > 0 && (unsigned int)sub_405FB0(0) )
      ;
    if ( --v2 == -1 )
    {
      v7 = *v3;
LABEL_18:
      close(*(_DWORD *)a1);
      close(*(_DWORD *)(a1 + 4));
      *v3 = v7;
      return (unsigned int)v8;
    }
  }
  if ( v6 )
  {
    ++dword_61C69C;
    return (unsigned int)v8;
  }
LABEL_19:
  v8 = 0;
  close(0);
  close(1);
  return (unsigned int)v8;
}

__int64 __fastcall sub_407C00(char *a1, _QWORD *a2, const char *a3)
{
  const char *v3; // r12@1
  __int64 result; // rax@3
  __int64 v5; // rax@7
  __int64 v6; // rbp@7
  char *v7; // rbx@7
  char *v8; // rax@7
  __int64 v9; // [sp+0h] [bp-28h]@3
  __int64 v10; // [sp+8h] [bp-20h]@2

  v3 = a3;
  switch ( (unsigned int)sub_411B40(a1) )
  {
    case 0u:
    case 2u:
      *a2 = v10;
      goto LABEL_3;
    case 1u:
    case 3u:
      *a2 = -1LL;
      goto LABEL_3;
    case 4u:
      if ( v3 )
      {
        LODWORD(v5) = sub_40F880(a1, &v9);
        v6 = v5;
        v7 = dcgettext(0LL, v3, 5);
        v8 = dcgettext(0LL, "%s: invalid count at start of %s", 5);
        error(2, 0, v8, v7, v6);
        result = sub_407CD0((char *)2, 0LL);
      }
      else
      {
        result = 0LL;
      }
      break;
    default:
LABEL_3:
      result = v9;
      break;
  }
  return result;
}

_IO_FILE *__fastcall sub_407CD0(char *file, char *modes)
{
  char *v2; // rbx@1
  bool v3; // cf@1
  bool v4; // zf@1
  __int64 v5; // rcx@4
  __int64 v6; // r8@4
  char *v8; // rbp@6
  char *v9; // rdi@6
  signed __int64 v10; // rcx@6
  char *v11; // rsi@6
  FILE *v12; // rbx@10
  const char *v13; // rdi@12
  int v14; // eax@12
  __int64 v15; // rax@14
  __int64 v16; // rbp@14
  char *v17; // rbx@14
  int *v18; // rax@14

  v2 = file;
  v3 = (unsigned __int8)*modes < 0x72u;
  v4 = *modes == 114;
  if ( *modes != 114 )
  {
    if ( *modes == 119 )
    {
      if ( !file || !ftruncate(1, 0LL) )
        return stdout;
      LODWORD(v15) = sub_40F700(0LL, 3LL, file, v5, v6);
      v16 = v15;
      v17 = dcgettext(0LL, "%s: error truncating", 5);
      v18 = __errno_location();
      error(2, *v18, v17, v16);
    }
    __assert_fail("!\"unexpected mode passed to stream_open\"", "src/sort.c", 0x3CCu, "stream_open");
  }
  v8 = modes;
  v9 = "-";
  v10 = 2LL;
  v11 = v2;
  do
  {
    if ( !v10 )
      break;
    v3 = (unsigned __int8)*v11 < (unsigned __int8)*v9;
    v4 = *v11++ == *v9++;
    --v10;
  }
  while ( v4 );
  if ( (!v3 && !v4) == v3 )
  {
    byte_61C758 = 1;
    v12 = stdin;
  }
  else
  {
    v13 = v2;
    v12 = 0LL;
    v14 = open(v13, 0x80000);
    if ( v14 >= 0 )
      v12 = fdopen(v14, v8);
  }
  sub_40B800(v12, 2LL);
  return v12;
}

noreturn void __fastcall  sub_407DD0(char *a1)
{
  char *v1; // rax@1
  __int64 v2; // rdx@1
  __int64 v3; // rcx@1
  __int64 v4; // r8@1

  v1 = dcgettext(0LL, "open failed", 5);
  sub_405DD0((__int64)v1, a1, v2, v3, v4);
}

void __fastcall sub_407DF0(FILE *stream, char *a2)
{
  char *v2; // rbp@1
  int v3; // eax@1
  const char *v4; // rsi@8
  char *v5; // rax@10
  __int64 v6; // rdx@10
  __int64 v7; // rcx@10
  __int64 v8; // r8@10

  v2 = a2;
  v3 = fileno(stream);
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      if ( !(unsigned int)sub_411F80(stream) )
        return;
      v4 = "close failed";
LABEL_10:
      v5 = dcgettext(0LL, v4, 5);
      sub_405DD0((__int64)v5, v2, v6, v7, v8);
    }
    if ( fflush_unlocked(stream) )
    {
      v4 = "fflush failed";
      goto LABEL_10;
    }
  }
  else if ( stream->_flags & 0x10 )
  {
    clearerr_unlocked(stream);
  }
}

int __fastcall sub_407E70(__int64 a1, FILE *a2, char *a3)
{
  char *v3; // r14@1
  _IO_FILE *v4; // rbp@1
  char *v5; // rbx@1
  __int64 v6; // r15@1
  char *v7; // r12@1
  size_t v8; // rdx@2
  char *v9; // rdi@2
  size_t v10; // rax@2
  char v11; // si@8
  char *v12; // rdx@10
  char *v13; // rax@16
  __int64 v14; // rdx@16
  __int64 v15; // rcx@16
  __int64 v16; // r8@16
  char v17; // al@9
  __int64 v18; // r12@18
  char *v19; // r14@18
  __int64 v20; // r10@19
  char *v21; // rbp@20
  __int64 v22; // r11@20
  char v23; // r15@26
  char *v24; // rax@32
  char *v25; // rax@35
  __int64 v26; // r15@39
  __int64 v27; // rbx@39
  char *v28; // rax@40
  char *v29; // rax@44
  char *v30; // rax@56
  char *v31; // rax@65
  __int64 v32; // rdx@65
  __int64 v33; // rcx@65
  __int64 v34; // r8@65
  char *v36; // [sp+0h] [bp-48h]@28
  char *v37; // [sp+8h] [bp-40h]@34

  v3 = a3;
  v4 = a2;
  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (char *)(*(_QWORD *)a1 + v6);
  if ( a3 || !byte_61C740 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(char **)a1;
    *(v7 - 1) = byte_61C500;
    v10 = fwrite_unlocked(v9, 1uLL, v8, a2);
    if ( v6 != v10 )
    {
      v31 = dcgettext(0LL, "write failed", 5);
      sub_405DD0((__int64)v31, v3, v32, v33, v34);
    }
    *(v7 - 1) = 0;
    return v10;
  }
  if ( v5 < v7 )
  {
    while ( 1 )
    {
      v17 = *(++v5 - 1);
      if ( v17 == 9 )
      {
        v11 = 62;
        v17 = 62;
        v12 = v4->_IO_write_ptr;
        if ( v4->_IO_write_end <= v12 )
          goto LABEL_15;
      }
      else
      {
        v11 = *(v5 - 1);
        if ( v7 == v5 )
        {
          v11 = 10;
          v17 = 10;
        }
        v12 = v4->_IO_write_ptr;
        if ( v4->_IO_write_end <= v12 )
        {
LABEL_15:
          if ( __overflow(v4, (unsigned __int8)v11) == -1 )
          {
            v13 = dcgettext(0LL, "write failed", 5);
            sub_405DD0((__int64)v13, 0LL, v14, v15, v16);
          }
          goto LABEL_12;
        }
      }
      v4->_IO_write_ptr = v12 + 1;
      *v12 = v17;
LABEL_12:
      if ( v7 == v5 )
      {
        v5 = *(char **)a1;
        v6 = *(_QWORD *)(a1 + 8);
        break;
      }
    }
  }
  v18 = qword_61C750;
  v19 = &v5[v6 - 1];
  if ( !qword_61C750 )
    goto LABEL_52;
LABEL_19:
  v20 = *(_QWORD *)v18;
  if ( *(_QWORD *)v18 == -1LL )
  {
    v21 = v5;
    if ( *(_QWORD *)(v18 + 16) == -1LL )
      goto LABEL_22;
    goto LABEL_21;
  }
  v21 = (char *)sub_406360(v5, v6, v18);
  if ( v22 != -1 )
  {
LABEL_21:
    v19 = sub_406470(v5, v6, v18);
LABEL_22:
    if ( *(_BYTE *)(v18 + 48) && v20 == -1 )
    {
LABEL_26:
      v23 = *v19;
      for ( *v19 = 0; byte_61CA80[(unsigned __int64)(unsigned __int8)*v21]; ++v21 )
        ;
      v36 = v21;
      if ( v21 <= v19 )
      {
        if ( *(_BYTE *)(v18 + 54) )
        {
          sub_405A40(v21, &v36);
          goto LABEL_38;
        }
        if ( *(_BYTE *)(v18 + 52) )
        {
          strtold(v21, &v36);
          goto LABEL_38;
        }
        if ( *(_QWORD *)(v18 + 48) & 0xFF0000FF0000LL )
        {
          v24 = v21;
          if ( v21 < v19 )
            v24 = &v21[*v21 == 45];
          v37 = v24;
          if ( (unsigned __int8)sub_405930(&v37) > 0x2Fu )
          {
            v25 = v37;
            if ( *(_BYTE *)(v18 + 53) )
              v25 = &v37[-((unsigned __int8)byte_4149C0[(unsigned __int64)(unsigned __int8)*v37] < 1u) + 1];
            v36 = v25;
          }
          goto LABEL_38;
        }
      }
      v36 = v19;
LABEL_38:
      *v19 = v23;
      v19 = v36;
      goto LABEL_39;
    }
  }
  if ( *(_BYTE *)(v18 + 54) || *(_QWORD *)(v18 + 48) & 0xFFFF00FF0000LL )
    goto LABEL_26;
LABEL_39:
  while ( 1 )
  {
    v26 = sub_405EB0(v5, (unsigned __int64)v21);
    v27 = sub_405EB0(v21, (unsigned __int64)v19);
    while ( --v26 != -1 )
    {
      v28 = stdout->_IO_write_ptr;
      if ( v28 >= stdout->_IO_write_end )
      {
        __overflow(stdout, 32);
      }
      else
      {
        stdout->_IO_write_ptr = v28 + 1;
        *v28 = 32;
      }
    }
    if ( v27 )
    {
      do
      {
        v29 = stdout->_IO_write_ptr;
        if ( v29 >= stdout->_IO_write_end )
        {
          __overflow(stdout, 95);
        }
        else
        {
          stdout->_IO_write_ptr = v29 + 1;
          *v29 = 95;
        }
        --v27;
      }
      while ( v27 );
      v10 = (size_t)stdout->_IO_write_ptr;
      if ( (char *)v10 >= stdout->_IO_write_end )
      {
        LODWORD(v10) = __overflow(stdout, 10);
      }
      else
      {
        stdout->_IO_write_ptr = (char *)(v10 + 1);
        *(_BYTE *)v10 = 10;
      }
    }
    else
    {
      v30 = dcgettext(0LL, "^ no match for key\n", 5);
      LODWORD(v10) = __printf_chk(1LL, v30);
    }
    if ( !v18 )
      return v10;
    v18 = *(_QWORD *)(v18 + 64);
    if ( v18 )
    {
      v5 = *(char **)a1;
      v6 = *(_QWORD *)(a1 + 8);
      v19 = (char *)(*(_QWORD *)a1 + v6 - 1);
      if ( v18 )
        goto LABEL_19;
LABEL_52:
      v21 = v5;
    }
    else
    {
      if ( byte_61C759 || byte_61C75A )
        return v10;
      v21 = *(char **)a1;
      v5 = *(char **)a1;
      v19 = (char *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8) - 1LL);
    }
  }
}

int __fastcall sub_4082A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 v3; // rbx@1
  int result; // eax@2
  __int64 v5; // r12@5
  __int64 v6; // r14@5
  unsigned __int64 v7; // r13@5
  unsigned __int64 v8; // r15@5
  const void *v9; // rsi@11
  const void *v10; // rdi@11
  size_t v11; // rdx@12

  v2 = a2;
  v3 = a1;
  if ( !qword_61C750 || (result = sub_4065B0(a1, a2)) == 0 && !byte_61C759 && !byte_61C75A )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a2 + 8);
    v7 = v6 - 1;
    v8 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( *(_QWORD *)(a1 + 8) == 1LL )
    {
      result = -(v6 != 1);
    }
    else
    {
      result = 1;
      if ( v6 != 1 )
      {
        v9 = *(const void **)a2;
        v10 = *(const void **)a1;
        if ( byte_61CBA1 )
        {
          result = sub_4115C0(v10, *(_QWORD *)(v3 + 8), *(_QWORD *)v2, *(_QWORD *)(v2 + 8));
        }
        else
        {
          v11 = v6 - 1;
          if ( v8 <= v7 )
            v11 = v8;
          result = memcmp(v10, v9, v11);
          if ( !result )
          {
            result = -1;
            if ( v8 >= v7 )
              result = v5 != v6;
          }
        }
      }
    }
    if ( byte_61C75B )
      result = -result;
  }
  return result;
}

int __fastcall sub_408370(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp@1
  __int64 v5; // rbx@1
  unsigned __int64 v6; // r12@2
  unsigned __int64 v7; // r15@2
  signed __int64 v8; // r13@2
  signed __int64 v9; // rax@2
  __m128i v10; // xmm1@4
  __int64 v11; // r13@4
  __int64 v12; // rax@4
  __int64 v13; // rdx@5
  __int64 i; // r14@5
  signed __int64 v15; // rax@6
  char v16; // ST08_1@13
  __m128i v17; // xmm1@15
  __m128i v18; // xmm0@15
  __m128i v19; // xmm2@15
  __m128i v20; // xmm3@15
  int v21; // eax@20
  int v22; // edx@20
  signed __int64 v23; // rdx@20
  __m128i v24; // xmm1@20
  __m128i v25; // xmm0@20
  __m128i v26; // xmm1@20
  __int64 v27; // rax@21
  __int64 v29; // [sp+8h] [bp-40h]@6

  v4 = a1;
  v5 = a3;
  if ( a2 == 2 )
  {
    v16 = a4;
    LODWORD(v15) = sub_4082A0(a1 - 32, a1 - 64);
    if ( v16 )
    {
      v21 = (signed int)v15 > 0;
      v22 = v21;
      v15 = 32LL * (v21 - 2);
      v23 = a1 + 32LL * ~v22;
      v24 = _mm_loadu_si128((const __m128i *)(v23 + 16));
      *(__m128i *)(v5 - 32) = _mm_loadu_si128((const __m128i *)v23);
      v25 = _mm_loadu_si128((const __m128i *)(v15 + a1));
      *(__m128i *)(v5 - 16) = v24;
      v26 = _mm_loadu_si128((const __m128i *)(v15 + a1 + 16));
      *(__m128i *)(v5 - 64) = v25;
      *(__m128i *)(v5 - 48) = v26;
    }
    else if ( (signed int)v15 > 0 )
    {
      v17 = _mm_loadu_si128((const __m128i *)(a1 - 32));
      v18 = _mm_loadu_si128((const __m128i *)(a1 - 16));
      v19 = _mm_loadu_si128((const __m128i *)(a1 - 64));
      v20 = _mm_loadu_si128((const __m128i *)(a1 - 48));
      *(__m128i *)(v5 - 32) = v17;
      *(__m128i *)(v5 - 16) = v18;
      *(__m128i *)(a1 - 32) = v19;
      *(__m128i *)(a1 - 16) = v20;
      *(__m128i *)(a1 - 64) = v17;
      *(__m128i *)(a1 - 48) = v18;
    }
  }
  else
  {
    v6 = a2 >> 1;
    v7 = a2 - (a2 >> 1);
    v8 = -32LL * (a2 >> 1);
    v9 = a1 + v8;
    if ( a4 )
    {
      v11 = a3 + v8;
      sub_408370(v9, a2 - (a2 >> 1), v11, 1LL);
      if ( a2 > 3 )
        sub_408370(a1, v6, v5, 0LL);
    }
    else
    {
      sub_408370(a1 + v8, a2 - (a2 >> 1), a3, 0LL);
      if ( a2 > 3 )
      {
        sub_408370(a1, v6, v5, 1LL);
        v11 = a1 + v8;
        v27 = v5;
        v5 = a1;
        v4 = v27;
      }
      else
      {
        v10 = _mm_loadu_si128((const __m128i *)(a1 - 16));
        v11 = a1 + v8;
        v12 = v5;
        *(__m128i *)(v5 - 32) = _mm_loadu_si128((const __m128i *)(a1 - 32));
        *(__m128i *)(v5 - 16) = v10;
        v5 = a1;
        v4 = v12;
      }
    }
    v13 = v4 - 32;
    for ( i = v11 - 32; ; i -= 32LL )
    {
      while ( 1 )
      {
        v29 = v13;
        v5 -= 32LL;
        LODWORD(v15) = sub_4082A0(v13, i);
        v13 = v29;
        if ( (signed int)v15 > 0 )
          break;
        *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)(v4 - 32));
        *(__m128i *)(v5 + 16) = _mm_loadu_si128((const __m128i *)(v4 - 16));
        if ( !--v6 )
          return v15;
        v4 = v29;
        v13 = v29 - 32;
      }
      *(__m128i *)v5 = _mm_loadu_si128((const __m128i *)(v11 - 32));
      *(__m128i *)(v5 + 16) = _mm_loadu_si128((const __m128i *)(v11 - 16));
      if ( !--v7 )
        break;
      v11 = i;
    }
    v15 = -32LL;
    do
    {
      *(__m128i *)(v5 + v15) = _mm_loadu_si128((const __m128i *)(v4 + v15));
      *(__m128i *)(v5 + v15 + 16) = _mm_loadu_si128((const __m128i *)(v4 + v15 + 16));
      v15 -= 32LL;
      --v6;
    }
    while ( v6 );
  }
  return v15;
}

int __fastcall sub_4085D0(__int64 a1, FILE *a2, char *a3)
{
  char *v3; // ST08_8@3
  int result; // eax@3

  if ( !byte_61C759 )
    goto LABEL_5;
  if ( !(_QWORD)xmmword_61CB80 || (v3 = a3, result = sub_4082A0(a1, (__int64)&xmmword_61CB80), a3 = v3, result) )
  {
    xmmword_61CB80 = (__int128)_mm_loadu_si128((const __m128i *)a1);
    xmmword_61CB90 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 16));
LABEL_5:
    result = sub_407E70(a1, a2, a3);
  }
  return result;
}

void __fastcall sub_408640(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4, char *a5, char *a6)
{
  signed __int64 v6; // rdi@1
  signed __int128 v7; // ax@1
  signed __int64 v8; // rbx@3
  unsigned __int64 v9; // r15@5
  char *v10; // rax@5
  char *v11; // r13@5
  _QWORD *v12; // rax@5
  char *v13; // rax@5
  char *v14; // rbx@5
  signed __int64 v15; // rbx@7
  __int64 v16; // r13@7
  __int64 v17; // rdx@7
  char **v18; // rbp@9
  __int64 v19; // rax@10
  __int64 v20; // rax@13
  char *v21; // rdx@16
  unsigned __int64 v22; // rbp@16
  char *v23; // r13@16
  char *v24; // r12@17
  char *v25; // r15@17
  __int64 v26; // rbx@17
  __int64 v27; // r14@17
  int v28; // eax@17
  char *v29; // r14@21
  signed __int64 v30; // r15@22
  __int64 *v31; // r12@22
  unsigned __int64 v32; // r13@22
  char **v33; // r13@26
  FILE *v34; // rsi@26
  FILE **v35; // ST08_8@26
  signed __int64 v36; // r15@26
  char v37; // al@26
  FILE **v38; // rcx@26
  __int64 v39; // rax@27
  unsigned __int64 v40; // r13@27
  __int64 v41; // rax@28
  unsigned __int64 v42; // r12@28
  char *v43; // rax@28
  unsigned __int64 v44; // r14@28
  unsigned __int64 v45; // r15@28
  char *v46; // r13@28
  unsigned __int64 v47; // rbp@32
  int v48; // eax@32
  unsigned __int64 v49; // r15@34
  char *v50; // rax@35
  __int64 v51; // rdx@36
  size_t v52; // rdx@42
  void *v53; // rdi@42
  const void *v54; // rsi@43
  char *v55; // rax@44
  char *v56; // rax@45
  unsigned __int64 v57; // rcx@46
  unsigned __int64 v58; // rdi@50
  signed __int64 v59; // rax@50
  signed __int64 v60; // rax@54
  signed __int64 v61; // rdx@54
  __m128i v62; // xmm0@55
  __m128i v63; // xmm1@55
  __m128i v64; // xmm2@55
  __int64 v65; // r9@55
  __m128i v66; // xmm3@55
  __int64 v67; // r9@55
  __int64 v68; // r9@55
  char *v69; // rax@57
  __int64 v70; // rdx@58
  __int64 v71; // rax@63
  unsigned __int64 v72; // rsi@70
  size_t v73; // ST08_8@74
  void *v74; // rax@74
  char *v75; // [sp+8h] [bp-D0h]@17
  __int64 v76; // [sp+8h] [bp-D0h]@28
  char *v77; // [sp+10h] [bp-C8h]@6
  unsigned __int64 v78; // [sp+10h] [bp-C8h]@22
  unsigned __int64 v79; // [sp+18h] [bp-C0h]@1
  _QWORD *v80; // [sp+20h] [bp-B8h]@5
  __int64 v81; // [sp+28h] [bp-B0h]@1
  char *v82; // [sp+30h] [bp-A8h]@3
  char *v83; // [sp+38h] [bp-A0h]@6
  void **v84; // [sp+38h] [bp-A0h]@21
  char *ptr; // [sp+40h] [bp-98h]@1
  char *v86; // [sp+48h] [bp-90h]@26
  signed __int64 v87; // [sp+50h] [bp-88h]@21
  FILE *stream; // [sp+58h] [bp-80h]@1
  char *v89; // [sp+60h] [bp-78h]@1
  unsigned __int64 v90; // [sp+68h] [bp-70h]@1
  size_t v91; // [sp+70h] [bp-68h]@21
  __int64 v92; // [sp+78h] [bp-60h]@5
  void *dest; // [sp+80h] [bp-58h]@5
  size_t v94; // [sp+88h] [bp-50h]@43
  char *v95; // [sp+90h] [bp-48h]@44
  char *v96; // [sp+98h] [bp-40h]@44

  v81 = a1;
  v6 = a3;
  v79 = a3;
  v90 = a2;
  v7 = 56LL * a3;
  stream = a4;
  v89 = a5;
  ptr = a6;
  BYTE8(v7) = *((_QWORD *)&v7 + 1) != 0LL;
  if ( (signed __int64)v7 < 0
    || (*((_QWORD *)&v7 + 1) = BYTE8(v7), BYTE8(v7))
    || (v8 = 8 * v79, v6 = 56 * v79, LODWORD(v7) = sub_411210(56 * v79), v82 = (char *)v7, v79 & 0x1000000000000000LL)
    || v79 >> 61 != 0 )
  {
    sub_411460(v6, a2, *((_QWORD *)&v7 + 1));
  }
  v9 = 0LL;
  LODWORD(v10) = sub_411210(v8);
  v11 = v10;
  LODWORD(v12) = sub_411210(v8);
  v80 = v12;
  LODWORD(v13) = sub_411210(v8);
  dest = 0LL;
  v14 = v13;
  v92 = qword_61C750;
  if ( v79 )
  {
    v83 = v13;
    v77 = v11;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = 8 * v9;
        v16 = (__int64)&v82[56 * v9];
        v17 = qword_61C428;
        if ( qword_61C778 / v79 >= qword_61C428 )
          v17 = qword_61C778 / v79;
        sub_405E30((__int64)&v82[56 * v9], 32LL, v17);
        v18 = (char **)(v81 + 16 * v9);
        if ( !(unsigned __int8)sub_4074D0(v16, *(FILE **)&ptr[v15], *v18) )
          break;
        v19 = *(_QWORD *)v16 + *(_QWORD *)(v16 + 24);
        *(_QWORD *)&v77[8 * v9] = v19 - 32;
        v80[v9++] = v19 - 32LL * *(_QWORD *)(v16 + 16);
        if ( v9 >= v79 )
        {
          v14 = v83;
          v11 = v77;
          goto LABEL_12;
        }
      }
      sub_407DF0(*(FILE **)&ptr[v15], *v18);
      if ( v90 > v9 )
      {
        --v90;
        sub_407920(*v18);
      }
      free(*(void **)v16);
      if ( v79 - 1 <= v9 )
        break;
      do
      {
        v71 = *(_QWORD *)&ptr[v15 + 8];
        *(__m128i *)(v81 + 2 * v15) = _mm_loadu_si128((const __m128i *)(v81 + 2 * v15 + 16));
        *(_QWORD *)&ptr[v15] = v71;
        v15 += 8LL;
      }
      while ( 8 * v79 - 8 != v15 );
      --v79;
    }
    v14 = v83;
    v11 = v77;
    --v79;
LABEL_12:
    if ( !v79 )
      goto LABEL_68;
    v20 = 0LL;
    do
    {
      *(_QWORD *)&v14[8 * v20] = v20;
      ++v20;
    }
    while ( v20 != v79 );
    if ( v79 != 1 )
    {
      v21 = v11;
      v22 = 1LL;
      v23 = v14;
      do
      {
        while ( 1 )
        {
          v75 = v21;
          v24 = &v23[8 * v22];
          v25 = &v23[8 * v22 - 8];
          v26 = *(_QWORD *)&v23[8 * v22];
          v27 = *(_QWORD *)v25;
          v28 = sub_4082A0(*(_QWORD *)&v21[8 * *(_QWORD *)v25], *(_QWORD *)&v21[8 * v26]);
          v21 = v75;
          if ( v28 <= 0 )
            break;
          *(_QWORD *)v25 = v26;
          v22 = 1LL;
          *(_QWORD *)v24 = v27;
        }
        ++v22;
      }
      while ( v22 < v79 );
      v14 = v23;
      v11 = v75;
    }
    v91 = 0LL;
    v29 = v11;
    v84 = 0LL;
    v87 = (signed __int64)(v14 - 8);
    while ( 1 )
    {
      v30 = 8LL * *(_QWORD *)v14;
      v78 = *(_QWORD *)v14;
      v31 = (__int64 *)&v29[v30];
      v32 = *(_QWORD *)&v29[v30];
      if ( byte_61C759 )
      {
        if ( !v84 )
          goto LABEL_42;
        if ( sub_4082A0((__int64)v84, *(_QWORD *)&v29[v30]) )
        {
          sub_407E70((__int64)&dest, stream, v89);
LABEL_42:
          v52 = *(_QWORD *)(v32 + 8);
          v53 = dest;
          if ( v52 > v91 )
          {
            if ( v91 )
            {
              v72 = 2 * v91;
              if ( v52 > 2 * v91 )
              {
                while ( v72 )
                {
                  v72 *= 2LL;
                  if ( v52 <= v72 )
                    goto LABEL_75;
                }
              }
              else
              {
LABEL_75:
                v52 = v72;
              }
            }
            v73 = v52;
            free(dest);
            LODWORD(v74) = sub_411210(v73);
            v53 = v74;
            dest = v74;
            v91 = v73;
            v52 = *(_QWORD *)(v32 + 8);
          }
          v54 = *(const void **)v32;
          v94 = v52;
          memcpy(v53, v54, v52);
          v84 = &dest;
          if ( v92 )
          {
            v55 = (char *)dest + *(_QWORD *)(v32 + 24) - *(_QWORD *)v32;
            v95 = (char *)dest + *(_QWORD *)(v32 + 16) - *(_QWORD *)v32;
            v96 = v55;
          }
          goto LABEL_25;
        }
      }
      else
      {
        sub_407E70(*(_QWORD *)&v29[v30], stream, v89);
      }
LABEL_25:
      if ( v80[(unsigned __int64)v30 / 8] < v32 )
      {
        *v31 = v32 - 32;
        v40 = v79;
        if ( v79 != 1 )
          goto LABEL_28;
LABEL_39:
        *(_QWORD *)v14 = v78;
      }
      else
      {
        v86 = (char *)&v80[(unsigned __int64)v30 / 8];
        v33 = (char **)(v81 + 16 * v78);
        v34 = *(FILE **)&ptr[v30];
        v35 = (FILE **)&ptr[v30];
        v36 = (signed __int64)&v82[56 * v78];
        v37 = sub_4074D0((__int64)&v82[56 * v78], v34, *v33);
        v38 = v35;
        if ( v37 )
        {
          v39 = *(_QWORD *)v36 + *(_QWORD *)(v36 + 24);
          v40 = v79;
          *v31 = v39 - 32;
          *(_QWORD *)v86 = v39 - 32LL * *(_QWORD *)(v36 + 16);
          if ( v79 == 1 )
            goto LABEL_39;
LABEL_28:
          v41 = *v31;
          v42 = 1LL;
          v76 = v41;
          v43 = v29;
          v44 = 1LL;
          v45 = v40;
          v46 = v43;
          do
          {
            while ( 1 )
            {
              v47 = *(_QWORD *)&v14[8 * v42];
              v48 = sub_4082A0(v76, *(_QWORD *)&v46[8 * v47]);
              if ( v48 < 0 || v78 < v47 && !v48 )
                break;
              v44 = v42 + 1;
              v42 = (v42 + 1 + v45) >> 1;
              if ( v44 >= v45 )
                goto LABEL_34;
            }
            v45 = v42;
            v42 = (v44 + v42) >> 1;
          }
          while ( v44 < v45 );
LABEL_34:
          v49 = v44;
          v29 = v46;
          if ( v49 != 1 )
          {
            v50 = v14;
            do
            {
              v51 = *((_QWORD *)v50 + 1);
              v50 += 8;
              *((_QWORD *)v50 - 1) = v51;
            }
            while ( v50 != (char *)(v87 + 8 * v49) );
          }
          *(_QWORD *)&v14[8 * (v49 - 1)] = v78;
        }
        else
        {
          v56 = v14 + 8;
          if ( v79 != 1 )
          {
            v57 = v78;
            do
            {
              if ( *(_QWORD *)v56 > v57 )
              {
                --*(_QWORD *)v56;
                v57 = *(_QWORD *)v14;
              }
              v56 += 8;
            }
            while ( &v14[8 * v79] != v56 );
            v58 = v57;
            v59 = 8 * v57;
            v78 = v57;
            v33 = (char **)(v81 + 16 * v57);
            v38 = (FILE **)&ptr[8 * v57];
            v36 = (signed __int64)&v82[8 * (v59 - v58)];
          }
          sub_407DF0(*v38, *v33);
          if ( v90 > v78 )
          {
            --v90;
            sub_407920(*v33);
          }
          free(*(void **)v36);
          if ( v79 - 1 > v78 )
          {
            v60 = 8 * v78;
            v61 = (signed __int64)&v82[56 * v78];
            do
            {
              v62 = _mm_loadu_si128((const __m128i *)(v81 + 2 * v60 + 16));
              v61 += 56LL;
              v63 = _mm_loadu_si128((const __m128i *)v61);
              v64 = _mm_loadu_si128((const __m128i *)(v61 + 16));
              *(_QWORD *)&ptr[v60] = *(_QWORD *)&ptr[v60 + 8];
              v65 = *(_QWORD *)(v61 + 48);
              v66 = _mm_loadu_si128((const __m128i *)(v61 + 32));
              *(__m128i *)(v81 + 2 * v60) = v62;
              *(_QWORD *)(v61 - 8) = v65;
              v67 = *(_QWORD *)&v29[v60 + 8];
              *(__m128i *)(v61 - 56) = v63;
              *(_QWORD *)&v29[v60] = v67;
              v68 = v80[(unsigned __int64)v60 / 8 + 1];
              *(__m128i *)(v61 - 40) = v64;
              v80[(unsigned __int64)v60 / 8] = v68;
              v60 += 8LL;
              *(__m128i *)(v61 - 24) = v66;
            }
            while ( 8 * v79 - 8 != v60 );
          }
          if ( v79 == 1 )
          {
            v11 = v29;
            if ( v84 && byte_61C759 )
            {
              sub_407E70((__int64)&dest, stream, v89);
              free(dest);
            }
            break;
          }
          v69 = v14;
          do
          {
            v70 = *((_QWORD *)v69 + 1);
            v69 += 8;
            *((_QWORD *)v69 - 1) = v70;
          }
          while ( (char *)(v87 + 8 * v79) != v69 );
          --v79;
        }
      }
    }
  }
LABEL_68:
  sub_407DF0(stream, v89);
  free(ptr);
  free(v82);
  free(v14);
  free(v80);
  free(v11);
}

int __fastcall sub_408E10(int a1, int a2)
{
  dup2(a1, a2);
  return close(a1);
}

int __fastcall sub_408E20(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp@1
  signed __int64 v4; // rdi@1
  _QWORD *v5; // rbx@3
  __int64 v6; // rax@3
  __int64 v7; // r14@3
  __int64 v8; // rbx@3
  _IO_FILE *v9; // rax@5
  __int64 v10; // r12@7
  char v11; // al@8
  int v12; // er15@11
  int v13; // eax@12
  int *v14; // rbp@13
  FILE *v16; // rax@18
  int *v17; // rax@20
  int v18; // er13@20
  int *v19; // rbp@20
  int *v20; // rax@26
  __int64 v21; // rax@28
  __int64 v22; // rbx@28
  char *v23; // rax@28
  int v24; // [sp+8h] [bp-40h]@12
  int fd; // [sp+Ch] [bp-3Ch]@18

  v3 = a1;
  v4 = 8 * a2;
  if ( a2 & 0x1000000000000000LL || a2 >> 61 != 0 )
    sub_411460(v4, a2, a3);
  v5 = a3;
  LODWORD(v6) = sub_411210(v4);
  *v5 = v6;
  v7 = v6;
  v8 = 0LL;
  if ( !a2 )
    return v8;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v3 + 8);
    if ( !v10 || (v11 = *(_BYTE *)(v10 + 12)) == 0 )
    {
      v9 = sub_407CD0(*(char **)v3, "r");
      *(_QWORD *)(v7 + 8 * v8) = v9;
      if ( !v9 )
        return v8;
      goto LABEL_6;
    }
    if ( v11 == 1 )
      sub_4060A0(*(_DWORD *)(v10 + 8));
    v12 = open((const char *)(v10 + 13), 0);
    if ( v12 < 0 )
      goto LABEL_15;
    v13 = sub_407A30((__int64)&v24, 9LL);
    if ( v13 == -1 )
      break;
    if ( !v13 )
    {
      close(v24);
      if ( v12 )
        sub_408E10(v12, 0);
      if ( fd != 1 )
        sub_408E10(fd, 1);
      execlp(arg, arg, "-d", 0LL);
      v20 = __errno_location();
      sub_4060D0(*v20, "couldn't execute compress program (with -d)");
    }
    *(_DWORD *)(v10 + 8) = v13;
    sub_406190(v10);
    close(v12);
    close(fd);
    v16 = fdopen(v24, "r");
    if ( !v16 )
    {
      v17 = __errno_location();
      v18 = *v17;
      v19 = v17;
      close(v24);
      *(_QWORD *)(v7 + 8 * v8) = 0LL;
      *v19 = v18;
      return v8;
    }
    *(_QWORD *)(v7 + 8 * v8) = v16;
LABEL_6:
    ++v8;
    v3 += 16LL;
    if ( a2 == v8 )
      return v8;
  }
  v14 = __errno_location();
  if ( *v14 == 24 )
  {
    close(v12);
    *v14 = 24;
LABEL_15:
    *(_QWORD *)(v7 + 8 * v8) = 0LL;
    return v8;
  }
  LODWORD(v21) = sub_40F630(4LL, arg);
  v22 = v21;
  v23 = dcgettext(0LL, "couldn't create process for %s -d", 5);
  error(2, *v14, v23, v22);
  return sub_409030();
}

unsigned __int64 __fastcall sub_409030(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4, char *a5)
{
  char *v5; // r15@1
  FILE *v6; // r14@1
  unsigned __int64 v7; // r12@1
  unsigned __int64 v8; // rax@1
  unsigned __int64 v9; // rbx@1
  char *v11; // rbx@4
  char *v12; // rax@5
  __int64 v13; // rdx@5
  __int64 v14; // rcx@5
  __int64 v15; // r8@5
  char *v16; // [sp+8h] [bp-40h]@1

  v5 = a5;
  v6 = a4;
  v7 = a3;
  LODWORD(v8) = sub_408E20(a1, a3, &v16);
  v9 = v8;
  if ( v7 > v8 && v8 <= 1 )
  {
    v11 = *(char **)(a1 + 16 * v8);
    v12 = dcgettext(0LL, "open failed", 5);
    sub_405DD0((__int64)v12, v11, v13, v14, v15);
  }
  sub_408640(a1, a2, v8, v6, v5, v16);
  return v9;
}

int __fastcall sub_4090C0(FILE **a1, char a2)
{
  const void *v2; // r13@1
  size_t v3; // rax@1
  size_t v4; // r12@1
  __int64 v5; // rax@1
  char *v6; // rbp@1
  __int64 v7; // rbx@1
  __int64 v8; // rax@1
  int v9; // er12@3
  int *v10; // rax@3
  unsigned int *v11; // r14@3
  __int64 *v12; // rax@4
  bool v13; // zf@4
  int v14; // eax@7
  FILE *v15; // rax@9
  int v17; // ebp@12
  void *v18; // rdi@16
  unsigned int v19; // er13@5
  char *v20; // rax@23
  __int64 v21; // rdx@23
  __int64 v22; // rcx@23
  __int64 v23; // r8@23
  __int64 v24; // rax@24
  __int64 v25; // rbx@24
  char *v26; // rax@24
  __int64 v27; // rsi@24
  __int64 v28; // rdx@24
  __int64 v29; // rcx@24
  int fd; // [sp+10h] [bp-C8h]@3
  int v31; // [sp+14h] [bp-C4h]@11
  __sigset_t oldmask; // [sp+18h] [bp-C0h]@3

  v2 = *(const void **)(qword_61C770 + 8 * qword_61C5E8);
  v3 = strlen(*(const char **)(qword_61C770 + 8 * qword_61C5E8));
  v4 = v3;
  LODWORD(v5) = sub_411210((v3 + 32) & 0xFFFFFFFFFFFFFFF8LL);
  v6 = (char *)(v5 + 13);
  v7 = v5;
  memcpy((void *)(v5 + 13), v2, v4);
  *(_QWORD *)(v7 + v4 + 13) = 6365935330447553327LL;
  *(_DWORD *)&v6[v4 + 8] = 5789784;
  v8 = qword_61C5E8;
  *(_QWORD *)v7 = 0LL;
  qword_61C5E8 = v8 + 1;
  if ( v8 + 1 == qword_61C768 )
    qword_61C5E8 = 0LL;
  LOBYTE(fd) = pthread_sigmask(0, &newmask, &oldmask) == 0;
  v9 = sub_410680(v6, 0x80000LL);
  v10 = __errno_location();
  v11 = (unsigned int *)v10;
  if ( v9 >= 0 )
  {
    v12 = off_61C418;
    v13 = (_BYTE)fd == 0;
    off_61C418 = (__int64 *)v7;
    *v12 = v7;
    if ( !v13 )
    {
      v19 = *v11;
      sub_407880((__int64)&fd);
      *v11 = v19;
    }
    v13 = arg == 0LL;
    *(_BYTE *)(v7 + 12) = 0;
    if ( !v13 )
    {
      v14 = sub_407A30((__int64)&fd, 4LL);
      *(_DWORD *)(v7 + 8) = v14;
      if ( v14 > 0 )
      {
        close(v9);
        close(fd);
        v9 = v31;
        sub_406190(v7);
      }
      else if ( !v14 )
      {
        close(v31);
        if ( v9 != 1 )
          sub_408E10(v9, 1);
        if ( fd )
          sub_408E10(fd, 0);
        execlp(arg, arg, 0LL);
        sub_4060D0(*v11, "couldn't execute compress program");
      }
    }
    v15 = fdopen(v9, "w");
    *a1 = v15;
    if ( !v15 )
    {
      v20 = dcgettext(0LL, "couldn't create temporary file", 5);
      sub_405DD0((__int64)v20, v6, v21, v22, v23);
    }
    return v7;
  }
  v17 = *v10;
  if ( (_BYTE)fd )
  {
    sub_407880((__int64)&fd);
    *v11 = v17;
  }
  if ( v17 == 24 && a2 == 1 )
  {
    v18 = (void *)v7;
    LODWORD(v7) = 0;
    free(v18);
    return v7;
  }
  LODWORD(v24) = sub_40F630(4LL, v2);
  v25 = v24;
  v26 = dcgettext(0LL, "cannot create temporary file in %s", 5);
  v27 = *v11;
  error(2, v27, v26, v25);
  return sub_409330(2LL, v27, v28, v29);
}

void __fastcall sub_409330(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char *a4)
{
  __int64 v4; // r14@1
  unsigned __int64 v5; // r13@1
  unsigned __int64 v6; // r12@1
  unsigned __int64 v7; // rcx@1
  unsigned __int64 v8; // rbp@3
  __int64 v9; // rbx@3
  __int64 v10; // rax@4
  unsigned __int64 v11; // rsi@4
  signed __int64 v12; // r13@4
  __int64 v13; // r15@4
  unsigned __int64 v14; // rax@6
  unsigned __int64 v15; // rdx@6
  unsigned __int64 v16; // rsi@8
  unsigned __int64 v17; // rdx@8
  unsigned __int64 v18; // rdx@9
  signed __int64 v19; // r15@9
  const void *v20; // r9@9
  unsigned __int64 v21; // rax@9
  unsigned __int64 v22; // rbx@14
  bool v23; // cf@14
  bool v24; // zf@14
  __int64 v25; // r15@14
  signed __int64 v26; // rbp@14
  char v27; // r12@14
  __int64 v28; // r14@14
  signed __int64 v29; // rcx@18
  char *v30; // rdi@18
  const char *v31; // rsi@18
  int v32; // er13@21
  int v33; // eax@22
  unsigned __int64 v34; // rax@29
  unsigned __int64 v35; // rbx@30
  char **v36; // r15@32
  char **v37; // rbp@33
  __int64 v38; // rax@33
  unsigned __int64 v39; // r15@34
  __int64 v40; // ST08_8@36
  unsigned __int64 v41; // r13@36
  signed __int64 v42; // ST00_8@36
  size_t v43; // rdx@36
  signed __int64 v44; // r11@39
  FILE *v45; // rax@43
  char *v46; // rax@46
  __int64 v47; // rdx@46
  __int64 v48; // rcx@46
  __int64 v49; // r8@46
  unsigned __int64 v50; // ST08_8@47
  __int64 v51; // rax@47
  unsigned __int64 v52; // rdx@47
  unsigned __int64 v53; // rsi@47
  unsigned __int64 v54; // rax@49
  unsigned __int64 v55; // rdx@49
  __int64 v56; // rax@52
  signed __int64 v57; // ST28_8@52
  char *v58; // rbx@56
  char *v59; // rax@57
  __int64 v60; // rdx@57
  __int64 v61; // rcx@57
  __int64 v62; // r8@57
  unsigned __int64 v63; // [sp+0h] [bp-198h]@2
  unsigned __int64 v64; // [sp+0h] [bp-198h]@14
  __int64 v65; // [sp+8h] [bp-190h]@14
  signed __int64 v66; // [sp+8h] [bp-190h]@47
  struct stat *v67; // [sp+10h] [bp-188h]@14
  struct stat *v68; // [sp+10h] [bp-188h]@47
  char *s1; // [sp+18h] [bp-180h]@1
  unsigned __int64 v70; // [sp+20h] [bp-178h]@14
  __int64 v71; // [sp+20h] [bp-178h]@47
  FILE *v72; // [sp+38h] [bp-160h]@52
  char *v73; // [sp+40h] [bp-158h]@14
  __int64 v74; // [sp+48h] [bp-150h]@16
  struct stat stat_buf; // [sp+D0h] [bp-C8h]@4

  v4 = a1;
  v5 = a3;
  v6 = a2;
  s1 = a4;
  v7 = (unsigned int)dword_61C420;
  if ( (unsigned int)dword_61C420 < a3 )
  {
    v63 = a3;
    do
    {
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 > v63 )
      {
        v21 = v7;
        v19 = a1;
        v20 = (const void *)a1;
        v16 = v63;
        v18 = 0LL;
      }
      else
      {
        do
        {
          LODWORD(v10) = sub_4090C0((FILE **)&stat_buf, 0);
          v11 = v6;
          v12 = v10 + 13;
          v13 = v10;
          if ( (unsigned int)dword_61C420 <= v6 )
            v11 = (unsigned int)dword_61C420;
          v14 = sub_409030(a1 + 16 * v9, v11, (unsigned int)dword_61C420, (FILE *)stat_buf.st_dev, (char *)(v10 + 13));
          v15 = v6;
          v7 = (unsigned int)dword_61C420;
          if ( v14 <= v6 )
            v15 = v14;
          v9 += v14;
          v16 = v63 - v9;
          v6 -= v15;
          v17 = v8++;
          v17 *= 16LL;
          *(_QWORD *)(a1 + v17) = v12;
          *(_QWORD *)(a1 + v17 + 8) = v13;
        }
        while ( v7 <= v63 - v9 );
        v18 = v8 % v7;
        v19 = a1 + 16 * v8;
        v20 = (const void *)(a1 + 16 * v9);
        v21 = v7 - v8 % v7;
      }
      if ( v16 > v21 )
      {
        v71 = (__int64)v20;
        v50 = v16 + v18 + 1 - v7;
        LODWORD(v51) = sub_4090C0((FILE **)&stat_buf, 0);
        v52 = v50;
        v53 = v6;
        v68 = (struct stat *)v51;
        v23 = v50 < v6;
        v24 = v50 == v6;
        v66 = v51 + 13;
        if ( v23 || v24 )
          v53 = v52;
        v54 = sub_409030(v71, v53, v52, (FILE *)stat_buf.st_dev, (char *)(v51 + 13));
        v55 = v6;
        if ( v54 <= v6 )
          v55 = v54;
        ++v8;
        v9 += v54;
        *(_QWORD *)v19 = v66;
        *(_QWORD *)(v19 + 8) = v68;
        v6 -= v55;
        v20 = (const void *)(a1 + 16 * v9);
        v19 = a1 + 16 * v8;
      }
      v6 += v8;
      memmove((void *)v19, v20, 16 * (v63 - v9));
      v7 = (unsigned int)dword_61C420;
      v63 += v8 - v9;
    }
    while ( (unsigned int)dword_61C420 < v63 );
    v5 = v63;
  }
  if ( v5 <= v6 )
  {
    v67 = (struct stat *)&v73;
    LODWORD(v34) = sub_408E20(a1, v5, &v73);
    goto LABEL_30;
  }
  v22 = v6;
  v65 = a1;
  v23 = 0;
  v24 = 1;
  v25 = 0LL;
  v26 = a1 + 16 * v6;
  v70 = v6;
  v27 = 0;
  v28 = v26;
  v67 = (struct stat *)&v73;
  v64 = v5;
  while ( 1 )
  {
    v29 = 2LL;
    v30 = "-";
    v31 = *(const char **)v28;
    do
    {
      if ( !v29 )
        break;
      v23 = *v31 < (unsigned __int8)*v30;
      v24 = *v31++ == *v30++;
      --v29;
    }
    while ( v24 );
    v32 = (char)((!v23 && !v24) - v23);
    if ( s1 )
    {
      v33 = strcmp(s1, *(const char **)v28);
      if ( v32 )
      {
        if ( !v33 )
        {
LABEL_38:
          if ( v25 )
          {
            v44 = v25 + 13;
          }
          else
          {
            LODWORD(v56) = sub_4090C0(&v72, 0);
            v25 = v56;
            v57 = v56 + 13;
            sub_409030(v28, 0LL, 1uLL, v72, (char *)(v56 + 13));
            v44 = v57;
          }
          *(_QWORD *)v28 = v44;
          *(_QWORD *)(v28 + 8) = v25;
          goto LABEL_17;
        }
      }
    }
    if ( !v27 && __fxstat(1, 1, (struct stat *)&v73) )
      break;
    if ( !v32 )
    {
      v27 = 1;
      if ( __fxstat(1, 0, &stat_buf) )
        goto LABEL_17;
      goto LABEL_16;
    }
    v27 = 1;
    if ( __xstat(1, *(const char **)v28, &stat_buf) )
    {
      ++v22;
      v28 += 16LL;
      v23 = v22 < v64;
      v24 = v22 == v64;
      if ( v22 == v64 )
        break;
    }
    else
    {
LABEL_16:
      v27 = 1;
      if ( stat_buf.st_ino == v74 && (char *)stat_buf.st_dev == v73 )
        goto LABEL_38;
LABEL_17:
      ++v22;
      v28 += 16LL;
      v23 = v22 < v64;
      v24 = v22 == v64;
      if ( v22 == v64 )
        break;
    }
  }
  v4 = v65;
  v6 = v70;
  v5 = v64;
  while ( 2 )
  {
    LODWORD(v34) = sub_408E20(v4, v5, v67);
LABEL_30:
    v35 = v34;
    if ( v5 != v34 )
    {
      if ( v34 <= 2 )
      {
        v58 = *(char **)(v4 + 16 * v34);
        v59 = dcgettext(0LL, "open failed", 5);
        sub_405DD0((__int64)v59, v58, v60, v61, v62);
      }
LABEL_32:
      v36 = (char **)(v4 + 16 * v35 - 16);
      do
      {
        --v35;
        v37 = v36;
        sub_407DF0(*(FILE **)&v73[8 * v35], *v36);
        v36 -= 2;
        LODWORD(v38) = sub_4090C0((FILE **)&stat_buf, v35 > 2);
      }
      while ( !v38 );
      v39 = v35;
      if ( v6 <= v35 )
        v39 = v6;
      v40 = v38;
      v41 = v5 - v35;
      v42 = v38 + 13;
      sub_408640(v4, v39, v35, (FILE *)stat_buf.st_dev, (char *)(v38 + 13), v73);
      v43 = 16 * v41;
      v6 = v6 - v39 + 1;
      *(_QWORD *)v4 = v42;
      v5 = v41 + 1;
      *(_QWORD *)(v4 + 8) = v40;
      memmove((void *)(v4 + 16), v37, v43);
      continue;
    }
    break;
  }
  v45 = sub_407CD0(s1, "w");
  if ( !v45 )
  {
    if ( *__errno_location() != 24 || v5 <= 2 )
    {
      v46 = dcgettext(0LL, "open failed", 5);
      sub_405DD0((__int64)v46, s1, v47, v48, v49);
    }
    goto LABEL_32;
  }
  sub_408640(v4, v6, v5, v45, s1, v73);
}

int __fastcall sub_409830(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx@1
  __int64 v3; // rax@1

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)a2 == *(_QWORD *)(a2 + 16) )
  {
    if ( v2 != v3 && !*(_QWORD *)(a2 + 40) )
      LODWORD(v3) = sub_406320(a1, a2);
  }
  else if ( v2 != v3 || !*(_QWORD *)(a2 + 48) )
  {
    LODWORD(v3) = sub_406320(a1, a2);
  }
  return v3;
}

int __fastcall sub_409880(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char *a7)
{
  FILE *v7; // r14@1
  __int64 v8; // r13@1
  __int64 v9; // rbx@1
  unsigned __int64 v10; // r8@1
  unsigned __int64 v11; // rax@1
  __int64 v12; // rdx@1
  signed __int64 v13; // r12@3
  __int64 v14; // r10@3
  signed __int64 v15; // r9@3
  pthread_cond_t *cond; // ST38_8@4
  pthread_mutex_t *v17; // ST28_8@4
  pthread_mutex_t *v18; // ST18_8@4
  pthread_mutex_t *v19; // ST28_8@6
  pthread_mutex_t *v20; // ST18_8@6
  __int64 v21; // rsi@7
  __int64 v22; // rax@10
  __int64 v23; // rbx@11
  unsigned int v24; // eax@11
  signed __int64 v25; // r12@12
  __int64 v26; // rbp@12
  signed __int64 v27; // r15@12
  signed __int64 v28; // rdi@13
  signed __int64 v29; // r8@13
  __int64 v30; // rax@14
  __m128i v31; // xmm2@14
  __int64 v32; // r11@16
  signed __int64 v33; // ST30_8@19
  int v34; // eax@19
  signed __int64 v35; // rax@20
  __m128i v36; // xmm0@20
  __int64 v37; // r9@21
  __int64 v38; // r10@21
  __int64 v39; // rdx@21
  signed __int64 v40; // rax@21
  signed __int64 v41; // rdi@23
  __m128i v42; // xmm4@25
  signed __int64 v43; // rax@25
  bool v44; // zf@28
  signed __int64 v45; // rdi@43
  __int64 v46; // rdi@44
  __int64 v47; // rdi@50
  signed __int64 v48; // r15@58
  __int64 v49; // r11@62
  signed __int64 v50; // rdi@63
  signed __int64 v51; // rdx@63
  __m128i v52; // xmm6@66
  signed __int64 v53; // rcx@66
  signed __int64 v54; // r15@69
  __int64 v55; // rdi@71
  __int64 v57; // rcx@82
  pthread_mutex_t *mutex; // [sp+8h] [bp-B0h]@7
  unsigned __int64 v59; // [sp+10h] [bp-A8h]@1
  pthread_mutex_t *v60; // [sp+18h] [bp-A0h]@11
  pthread_t newthread; // [sp+38h] [bp-80h]@76
  __int64 arg; // [sp+40h] [bp-78h]@1
  unsigned __int64 v63; // [sp+48h] [bp-70h]@1
  __int64 v64; // [sp+50h] [bp-68h]@1
  __int64 v65; // [sp+58h] [bp-60h]@1
  __int64 v66; // [sp+60h] [bp-58h]@1
  __int64 v67; // [sp+68h] [bp-50h]@1
  char *v68; // [sp+70h] [bp-48h]@1

  v7 = (FILE *)a6;
  v8 = a5;
  v9 = a4;
  v10 = *(_QWORD *)(a4 + 40);
  v11 = *(_QWORD *)(a4 + 48);
  v59 = a3;
  v64 = a3;
  v12 = *(_QWORD *)(a4 + 64);
  arg = a1;
  v65 = v12;
  v63 = a2 >> 1;
  v66 = v8;
  v67 = a6;
  v68 = a7;
  if ( v10 + v11 > 0x1FFFF && a2 > 1 )
  {
    if ( !pthread_create(&newthread, 0LL, start_routine, &arg) )
    {
      v57 = *(_QWORD *)(v9 + 72);
      sub_409880(a1 - 32LL * *(_QWORD *)(v9 + 40));
      pthread_join(newthread, 0LL);
      return (signed int)a7;
    }
    v10 = *(_QWORD *)(v9 + 40);
    v11 = *(_QWORD *)(v9 + 48);
  }
  v13 = -32LL * v10;
  v14 = a1 - 32 * v59;
  v15 = a1 + -32LL * v10;
  if ( v11 > 1 )
  {
    cond = (pthread_cond_t *)v10;
    v17 = (pthread_mutex_t *)v11;
    v18 = (pthread_mutex_t *)(a1 + -32LL * v10);
    sub_408370(a1 + -32LL * v10, v11, v14 - 32 * (v10 >> 1), 0);
    v10 = (unsigned __int64)cond;
    v14 = a1 - 32 * v59;
    v11 = (unsigned __int64)v17;
    v15 = (signed __int64)v18;
  }
  if ( v10 > 1 )
  {
    v19 = (pthread_mutex_t *)v15;
    v20 = (pthread_mutex_t *)v11;
    sub_408370(a1, v10, v14, 0);
    v15 = (signed __int64)v19;
    v11 = (unsigned __int64)v20;
  }
  *(_QWORD *)v9 = a1;
  v21 = v9;
  *(_QWORD *)(v9 + 8) = v15;
  *(_QWORD *)(v9 + 16) = v15;
  *(_QWORD *)(v9 + 24) = v13 - 32 * v11 + a1;
  sub_406320(v8, v9);
  mutex = (pthread_mutex_t *)(v8 + 8);
  while ( 1 )
  {
    pthread_mutex_lock(mutex);
    while ( 1 )
    {
      LODWORD(v22) = sub_40D190(*(_QWORD *)v8, v21);
      if ( v22 )
        break;
      v21 = v8 + 8;
      pthread_cond_wait((pthread_cond_t *)(v8 + 48), mutex);
    }
    v23 = v22;
    pthread_mutex_unlock(mutex);
    v60 = (pthread_mutex_t *)(v23 + 88);
    pthread_mutex_lock((pthread_mutex_t *)(v23 + 88));
    v24 = *(_DWORD *)(v23 + 80);
    *(_BYTE *)(v23 + 84) = 0;
    if ( !v24 )
      break;
    v25 = *(_QWORD *)v23;
    v26 = *(_QWORD *)(v23 + 8);
    v27 = (v59 >> (2 * (unsigned __int8)v24 + 2)) + 1;
    if ( v24 > 1 )
    {
      v21 = *(_QWORD *)(v23 + 8);
      v28 = *(_QWORD *)v23;
      v29 = **(_QWORD **)(v23 + 32);
      while ( 1 )
      {
        v32 = *(_QWORD *)(v23 + 16);
        if ( v32 == v28 )
        {
          v37 = *(_QWORD *)(v23 + 48);
          v38 = *(_QWORD *)(v23 + 40);
          v40 = (v25 - v28) >> 5;
          if ( (v26 - v21) >> 5 == v37 )
          {
            v39 = *(_QWORD *)(v23 + 48);
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        if ( *(_QWORD *)(v23 + 24) == v21 )
          break;
        if ( !v27 )
        {
          v37 = *(_QWORD *)(v23 + 48);
          v38 = *(_QWORD *)(v23 + 40);
          v27 = -1LL;
          v39 = (v26 - v21) >> 5;
          v40 = (v25 - v28) >> 5;
          if ( v37 == v39 )
          {
            v21 = -2LL;
LABEL_23:
            v41 = v28 - 32;
            do
            {
              v42 = _mm_loadu_si128((const __m128i *)v41);
              v29 -= 32LL;
              *(_QWORD *)v23 = v41;
              v43 = v41;
              *(__m128i *)v29 = v42;
              *(__m128i *)(v29 + 16) = _mm_loadu_si128((const __m128i *)(v41 + 16));
              if ( v32 == v41 )
              {
                v37 = v39;
                v40 = (v25 - v32) >> 5;
                goto LABEL_27;
              }
              --v21;
              v41 -= 32LL;
            }
            while ( v21 != -1 );
            v37 = v39;
            v40 = (v25 - v43) >> 5;
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        v33 = v29;
        v34 = sub_4082A0(v28 - 32, v21 - 32);
        v29 = v33 - 32;
        if ( v34 > 0 )
        {
          v30 = *(_QWORD *)(v23 + 8);
          v28 = *(_QWORD *)v23;
          v31 = _mm_loadu_si128((const __m128i *)(v30 - 32));
          v21 = v30 - 32;
          *(_QWORD *)(v23 + 8) = v30 - 32;
          *(__m128i *)v29 = v31;
          *(__m128i *)(v29 + 16) = _mm_loadu_si128((const __m128i *)(v30 - 16));
        }
        else
        {
          v35 = *(_QWORD *)v23;
          v21 = *(_QWORD *)(v23 + 8);
          v36 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)v23 - 32LL));
          v28 = *(_QWORD *)v23 - 32LL;
          *(_QWORD *)v23 = v28;
          *(__m128i *)v29 = v36;
          *(__m128i *)(v29 + 16) = _mm_loadu_si128((const __m128i *)(v35 - 16));
        }
        --v27;
      }
      v37 = *(_QWORD *)(v23 + 48);
      v38 = *(_QWORD *)(v23 + 40);
      v39 = (v26 - v21) >> 5;
      v40 = (v25 - v28) >> 5;
      if ( v37 == v39 )
      {
        v21 = v27 - 1;
        if ( !v27 )
          goto LABEL_27;
        goto LABEL_23;
      }
LABEL_35:
      if ( v40 == v38 && (v49 = *(_QWORD *)(v23 + 24), v49 != v21) && (v50 = v27 - 1, v51 = v21 - 32, v27) )
      {
        do
        {
          v52 = _mm_loadu_si128((const __m128i *)v51);
          v29 -= 32LL;
          *(_QWORD *)(v23 + 8) = v51;
          v53 = v51;
          *(__m128i *)v29 = v52;
          *(__m128i *)(v29 + 16) = _mm_loadu_si128((const __m128i *)(v51 + 16));
          if ( v51 == v49 )
          {
            v39 = (v26 - v51) >> 5;
            goto LABEL_27;
          }
          --v50;
          v51 -= 32LL;
        }
        while ( v50 != -1 );
        v39 = (v26 - v53) >> 5;
      }
      else
      {
        v39 = (v26 - v21) >> 5;
      }
LABEL_27:
      **(_QWORD **)(v23 + 32) = v29;
      goto LABEL_28;
    }
    v21 = *(_QWORD *)(v23 + 8);
    v45 = *(_QWORD *)v23;
    while ( 1 )
    {
      if ( *(_QWORD *)(v23 + 16) == v45 )
      {
        v39 = *(_QWORD *)(v23 + 48);
        v38 = *(_QWORD *)(v23 + 40);
        v40 = (v25 - v45) >> 5;
        if ( (v26 - v21) >> 5 == v39 )
        {
          v37 = *(_QWORD *)(v23 + 48);
          goto LABEL_28;
        }
        if ( v40 == v38 )
          goto LABEL_56;
        goto LABEL_53;
      }
      if ( *(_QWORD *)(v23 + 24) == v21 )
        break;
      if ( !v27 )
      {
        v27 = -1LL;
        v40 = (v25 - v45) >> 5;
        if ( *(_QWORD *)(v23 + 48) == (v26 - v21) >> 5 )
        {
          v54 = -2LL;
          do
          {
LABEL_71:
            v55 = v45 - 32;
            v21 = (__int64)v7;
            *(_QWORD *)v23 = v55;
            sub_4085D0(v55, v7, a7);
            v45 = *(_QWORD *)v23;
            if ( *(_QWORD *)v23 == *(_QWORD *)(v23 + 16) )
              break;
            --v54;
          }
          while ( v54 != -1 );
          v38 = *(_QWORD *)(v23 + 40);
          v37 = *(_QWORD *)(v23 + 48);
          v40 = (v25 - v45) >> 5;
          v39 = (v26 - *(_QWORD *)(v23 + 8)) >> 5;
          goto LABEL_28;
        }
LABEL_55:
        v38 = *(_QWORD *)(v23 + 40);
        if ( v40 == v38 )
        {
LABEL_56:
          if ( *(_QWORD *)(v23 + 24) != v21 && v27 )
          {
            v48 = v27 - 1;
            do
            {
              *(_QWORD *)(v23 + 8) = v21 - 32;
              sub_4085D0(v21 - 32, v7, a7);
              v21 = *(_QWORD *)(v23 + 8);
              if ( v21 == *(_QWORD *)(v23 + 24) )
                break;
              --v48;
            }
            while ( v48 != -1 );
            v38 = *(_QWORD *)(v23 + 40);
            v37 = *(_QWORD *)(v23 + 48);
            v40 = (v25 - *(_QWORD *)v23) >> 5;
            v39 = (v26 - v21) >> 5;
            goto LABEL_28;
          }
        }
LABEL_53:
        v37 = *(_QWORD *)(v23 + 48);
        v39 = (v26 - v21) >> 5;
        goto LABEL_28;
      }
      if ( sub_4082A0(v45 - 32, v21 - 32) > 0 )
      {
        v46 = *(_QWORD *)(v23 + 8) - 32LL;
        *(_QWORD *)(v23 + 8) = v46;
        sub_4085D0(v46, v7, a7);
      }
      else
      {
        v47 = *(_QWORD *)v23 - 32LL;
        *(_QWORD *)v23 = v47;
        sub_4085D0(v47, v7, a7);
      }
      v45 = *(_QWORD *)v23;
      v21 = *(_QWORD *)(v23 + 8);
      --v27;
    }
    v39 = *(_QWORD *)(v23 + 48);
    v40 = (v25 - v45) >> 5;
    if ( (v26 - v21) >> 5 != v39 )
      goto LABEL_55;
    if ( v27 )
    {
      v54 = v27 - 1;
      goto LABEL_71;
    }
    v38 = *(_QWORD *)(v23 + 40);
    v37 = *(_QWORD *)(v23 + 48);
LABEL_28:
    v44 = *(_BYTE *)(v23 + 84) == 0;
    *(_QWORD *)(v23 + 40) = v38 - v40;
    *(_QWORD *)(v23 + 48) = v37 - v39;
    if ( v44 )
    {
      v21 = v23;
      sub_409830(v8, v23);
    }
    if ( *(_DWORD *)(v23 + 80) > 1u )
    {
      pthread_mutex_lock((pthread_mutex_t *)(*(_QWORD *)(v23 + 56) + 88LL));
      v21 = *(_QWORD *)(v23 + 56);
      if ( !*(_BYTE *)(v21 + 84) )
      {
        sub_409830(v8, v21);
        v21 = *(_QWORD *)(v23 + 56);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(v21 + 88));
    }
    else if ( !(*(_QWORD *)(v23 + 40) + *(_QWORD *)(v23 + 48)) )
    {
      v21 = *(_QWORD *)(v23 + 56);
      sub_406320(v8, v21);
    }
    pthread_mutex_unlock(v60);
  }
  pthread_mutex_unlock(v60);
  return sub_406320(v8, v23);
}

void *__fastcall start_routine(void *a1)
{
  sub_409880(
    *(_QWORD *)a1,
    *((_QWORD *)a1 + 1),
    *((_QWORD *)a1 + 2),
    *((_QWORD *)a1 + 3),
    *((_QWORD *)a1 + 4),
    *((_QWORD *)a1 + 5),
    *((char **)a1 + 6));
  return 0LL;
}

int __fastcall sub_40A010(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx@1
  unsigned __int64 v3; // rcx@1
  __int64 v4; // rax@1
  signed __int64 v5; // rdx@4

  v2 = qword_61C768;
  v3 = qword_61C760;
  v4 = qword_61C770;
  if ( qword_61C768 == qword_61C760 )
  {
    if ( qword_61C770 )
    {
      v5 = 768614336404564649LL;
      if ( (unsigned __int64)qword_61C760 <= 0xAAAAAAAAAAAAAA9LL )
      {
        v3 = qword_61C760 + ((unsigned __int64)qword_61C760 >> 1) + 1;
        a2 = 8 * v3;
LABEL_6:
        qword_61C760 = v3;
        LODWORD(v4) = sub_411270(qword_61C770, a2);
        v2 = qword_61C768;
        qword_61C770 = v4;
        goto LABEL_2;
      }
    }
    else
    {
      if ( !qword_61C760 )
      {
        a2 = 128LL;
        v3 = 16LL;
        goto LABEL_6;
      }
      v5 = (unsigned __int64)qword_61C760 >> 61 != 0;
      a2 = 8 * qword_61C760;
      if ( !(qword_61C760 & 0x1000000000000000LL) && (unsigned __int64)qword_61C760 >> 61 == 0 )
        goto LABEL_6;
    }
    sub_411460(a1, a2, v5);
  }
LABEL_2:
  *(_QWORD *)(v4 + 8 * v2) = a1;
  qword_61C768 = v2 + 1;
  return v4;
}

noreturn void __fastcall  sub_40A0D0(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  FILE *v5; // rbp@4
  char *v6; // rax@4
  FILE *v7; // rbp@4
  char *v8; // rax@4
  FILE *v9; // rbp@4
  char *v10; // rax@4
  FILE *v11; // rbp@4
  char *v12; // rax@4
  FILE *v13; // rbp@4
  char *v14; // rax@4
  FILE *v15; // rbp@4
  char *v16; // rax@4
  FILE *v17; // rbp@4
  char *v18; // rax@4
  FILE *v19; // rbp@4
  char *v20; // rax@4
  FILE *v21; // rbp@4
  char *v22; // rax@4
  FILE *v23; // rbp@4
  char *v24; // rax@4
  FILE *v25; // rbp@4
  char *v26; // rax@4
  FILE *v27; // rbp@4
  char *v28; // rax@4
  FILE *v29; // rbp@4
  char *v30; // rax@4
  FILE *v31; // rbp@4
  char *v32; // rax@4
  FILE *v33; // rbp@4
  char *v34; // rax@4
  char *v35; // rax@4
  FILE *v36; // rbp@4
  char *v37; // rax@4
  FILE *v38; // rbp@4
  char *v39; // rax@4
  FILE *v40; // rbp@4
  char *v41; // rax@4
  FILE *v42; // rbp@4
  char *v43; // rax@4
  FILE *v44; // rbp@4
  char *v45; // rax@4
  __int64 *v46; // rax@4
  _BYTE *v47; // rdi@5
  bool v48; // cf@5
  bool v49; // zf@5
  _BYTE *v50; // rsi@6
  signed __int64 v51; // rcx@6
  char *v52; // rax@11
  char *v53; // rax@11
  char *v54; // rax@13
  char *v55; // rax@14
  char *v56; // rax@15
  char *v57; // rax@15
  char *v58; // rax@17
  char *v59; // rax@18
  const char *v60; // [sp+0h] [bp-88h]@4
  const char *v61; // [sp+8h] [bp-80h]@4
  const char *v62; // [sp+10h] [bp-78h]@4
  const char *v63; // [sp+18h] [bp-70h]@4
  const char *v64; // [sp+20h] [bp-68h]@4
  const char *v65; // [sp+28h] [bp-60h]@4
  const char *v66; // [sp+30h] [bp-58h]@4
  const char *v67; // [sp+38h] [bp-50h]@4
  const char *v68; // [sp+40h] [bp-48h]@4
  const char *v69; // [sp+48h] [bp-40h]@4
  const char *v70; // [sp+50h] [bp-38h]@4
  const char *v71; // [sp+58h] [bp-30h]@4
  __int64 v72; // [sp+60h] [bp-28h]@4
  __int64 v73; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_61CBC8;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n", 5);
  __printf_chk(1LL, v4);
  v5 = stdout;
  v6 = dcgettext(0LL, "Write sorted concatenation of all FILE(s) to standard output.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(0LL, "Ordering options:\n\n", 5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(
          0LL,
          "  -b, --ignore-leading-blanks  ignore leading blanks\n"
          "  -d, --dictionary-order      consider only blanks and alphanumeric characters\n"
          "  -f, --ignore-case           fold lower case to upper case characters\n",
          5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(
          0LL,
          "  -g, --general-numeric-sort  compare according to general numerical value\n"
          "  -i, --ignore-nonprinting    consider only printable characters\n"
          "  -M, --month-sort            compare (unknown) < 'JAN' < ... < 'DEC'\n",
          5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(0LL, "  -h, --human-numeric-sort    compare human readable numbers (e.g., 2K 1G)\n", 5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "  -n, --numeric-sort          compare according to string numerical value\n"
          "  -R, --random-sort           shuffle, but group identical keys.  See shuf(1)\n"
          "      --random-source=FILE    get random bytes from FILE\n"
          "  -r, --reverse               reverse the result of comparisons\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(
          0LL,
          "      --sort=WORD             sort according to WORD:\n"
          "                                general-numeric -g, human-numeric -h, month -M,\n"
          "                                numeric -n, random -R, version -V\n"
          "  -V, --version-sort          natural sort of (version) numbers within text\n"
          "\n",
          5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(0LL, "Other options:\n\n", 5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(
          0LL,
          "      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n"
          "                            for more use temp files\n",
          5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "  -c, --check, --check=diagnose-first  check for sorted input; do not sort\n"
          "  -C, --check=quiet, --check=silent  like -c, but do not report first bad line\n"
          "      --compress-program=PROG  compress temporaries with PROG;\n"
          "                              decompress them with PROG -d\n",
          5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(
          0LL,
          "      --debug               annotate the part of the line used to sort,\n"
          "                              and warn about questionable usage to stderr\n"
          "      --files0-from=F       read input from the files specified by\n"
          "                            NUL-terminated names in file F;\n"
          "                            If F is - then read names from standard input\n",
          5);
  fputs_unlocked(v30, v29);
  v31 = stdout;
  v32 = dcgettext(
          0LL,
          "  -k, --key=KEYDEF          sort via a key; KEYDEF gives location and type\n"
          "  -m, --merge               merge already sorted files; do not sort\n",
          5);
  fputs_unlocked(v32, v31);
  v33 = stdout;
  v34 = dcgettext(
          0LL,
          "  -o, --output=FILE         write result to FILE instead of standard output\n"
          "  -s, --stable              stabilize sort by disabling last-resort comparison\n"
          "  -S, --buffer-size=SIZE    use SIZE for main memory buffer\n",
          5);
  fputs_unlocked(v34, v33);
  v35 = dcgettext(
          0LL,
          "  -t, --field-separator=SEP  use SEP instead of non-blank to blank transition\n"
          "  -T, --temporary-directory=DIR  use DIR for temporaries, not $TMPDIR or %s;\n"
          "                              multiple options specify multiple directories\n"
          "      --parallel=N          change the number of sorts run concurrently to N\n"
          "  -u, --unique              with -c, check for strict ordering;\n"
          "                              without -c, output only the first of an equal run\n",
          5);
  __printf_chk(1LL, v35);
  v36 = stdout;
  v37 = dcgettext(0LL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v37, v36);
  v38 = stdout;
  v39 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v39, v38);
  v40 = stdout;
  v41 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v41, v40);
  v42 = stdout;
  v43 = dcgettext(
          0LL,
          "\n"
          "KEYDEF is F[.C][OPTS][,F[.C][OPTS]] for start and stop position, where F is a\n"
          "field number and C a character position in the field; both are origin 1, and\n"
          "the stop position defaults to the line's end.  If neither -t nor -b is in\n"
          "effect, characters in a field are counted from the beginning of the preceding\n"
          "whitespace.  OPTS is one or more single-letter ordering options [bdfgiMhnRrV],\n"
          "which override global ordering options for that key.  If no key is given, use\n"
          "the entire line as the key.  Use --debug to diagnose incorrect key usage.\n"
          "\n"
          "SIZE may be followed by the following multiplicative suffixes:\n",
          5);
  fputs_unlocked(v43, v42);
  v44 = stdout;
  v45 = dcgettext(
          0LL,
          "% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, Z, Y.\n"
          "\n"
          "*** WARNING ***\n"
          "The locale specified by the environment affects sort order.\n"
          "Set LC_ALL=C to get the traditional sort order that uses\n"
          "native byte values.\n",
          5);
  fputs_unlocked(v45, v44);
  v60 = "[";
  v46 = (__int64 *)&v60;
  v61 = "test invocation";
  v62 = "coreutils";
  v63 = "Multi-call invocation";
  v64 = "sha224sum";
  v65 = "sha2 utilities";
  v66 = "sha256sum";
  v67 = "sha2 utilities";
  v68 = "sha384sum";
  v69 = "sha2 utilities";
  v70 = "sha512sum";
  v71 = "sha2 utilities";
  v72 = 0LL;
  v73 = 0LL;
  do
  {
    v46 += 2;
    v47 = (_BYTE *)*v46;
    v48 = 0;
    v49 = *v46 == 0;
    if ( !*v46 )
      break;
    v50 = "--sort" + 2;
    v51 = 5LL;
    do
    {
      if ( !v51 )
        break;
      v48 = *v50 < *v47;
      v49 = *v50++ == *v47++;
      --v51;
    }
    while ( v49 );
  }
  while ( (!v48 && !v49) != v48 );
  if ( v46[1] )
  {
    v52 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v52);
    v53 = setlocale(5, 0LL);
    if ( !v53 || !strncmp(v53, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v56 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v56);
    v57 = setlocale(5, 0LL);
    if ( !v57 || !strncmp(v57, "en_", 3uLL) )
    {
      v58 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v58);
      goto LABEL_14;
    }
  }
  v59 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v59);
LABEL_13:
  v54 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v54);
LABEL_14:
  v55 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v55);
LABEL_3:
  exit(v1);
}

noreturn void  sub_40A640()
{
  sub_40A0D0(1);
}

signed __int64 __fastcall sub_40A650(const char *a1, const char **a2, char *a3, size_t a4)
{
  size_t v4; // r13@1
  char *v5; // rbp@1
  size_t v6; // rax@1
  const char *v7; // r14@1
  size_t v8; // r12@2
  signed __int64 v9; // rbx@2
  bool v10; // zf@4
  char v11; // al@4
  signed __int64 v12; // rax@12
  signed __int64 v14; // [sp+0h] [bp-58h]@1
  char v15; // [sp+17h] [bp-41h]@2
  char *v16; // [sp+18h] [bp-40h]@1

  v4 = a4;
  v5 = a3;
  v16 = a3;
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
      v5 += v4;
      v7 = a2[v9];
      if ( !v7 )
        goto LABEL_12;
    }
    if ( strlen(v7) == v8 )
      return v9;
    if ( v14 != -1 )
    {
      if ( v16 )
      {
        v10 = memcmp(&v16[v4 * v14], v5, v4) == 0;
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
    v5 += v4;
    v7 = a2[v9];
  }
  while ( v7 );
LABEL_12:
  v12 = -2LL;
  if ( !v15 )
    v12 = v14;
  return v12;
}

void __fastcall sub_40A770(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_40F860(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_40F550(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_40A7F0(__int64 *a1, FILE *a2, size_t a3)
{
  FILE *v3; // r14@1
  size_t v4; // r13@1
  FILE *v5; // rbp@1
  FILE *v6; // rbx@1
  char *v7; // rax@1
  FILE *v8; // rsi@1
  __int64 v9; // rbx@1
  __int64 i; // r12@1
  __int64 v11; // rax@3
  __int64 v12; // rax@6
  char *v13; // rax@7

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = v6;
  v9 = 0LL;
  fputs_unlocked(v7, v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v8 = v5;
        if ( !memcmp(v3, v5, v4) )
          break;
      }
      ++v9;
      v3 = v5;
      v5 = (FILE *)((char *)v5 + v4);
      LODWORD(v11) = sub_40F880(i, v8);
      v8 = (FILE *)1;
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 = (FILE *)((char *)v5 + v4);
    LODWORD(v12) = sub_40F880(i, v8);
    v8 = (FILE *)1;
    __fprintf_chk(stderr, 1LL, ", %s", v12);
  }
LABEL_7:
  v13 = stderr->_IO_write_ptr;
  if ( v13 >= stderr->_IO_write_end )
  {
    LODWORD(v13) = __overflow(stderr, 10);
  }
  else
  {
    stderr->_IO_write_ptr = v13 + 1;
    *v13 = 10;
  }
  return (unsigned __int64)v13;
}

__int64 __fastcall sub_40A910(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, FILE *))
{
  size_t v6; // r15@1
  void (__fastcall *v7)(__int64 *, FILE *); // r13@1
  FILE *v8; // rbp@1
  __int64 *v9; // rbx@1
  __int64 result; // rax@1

  v6 = a5;
  v7 = a6;
  v8 = (FILE *)a4;
  v9 = (__int64 *)a3;
  result = sub_40A650(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A770(a1, (__int64)a2, result);
    sub_40A7F0(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

__int64 sub_40A9F0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_413520(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_61CBB0 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_61CBB8 )
      {
        LODWORD(v5) = sub_40F6D0(qword_61CBB8, "write error");
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
  result = sub_413520(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

signed __int64 __fastcall sub_40AA90(__int64 a1)
{
  signed __int64 result; // rax@1

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = -1167088121787636991LL;
  result = 1167088121787636990LL;
  *(_QWORD *)(a1 + 8) = 1167088121787636990LL;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}

__int64 __fastcall sub_40AAC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax@1

  result = a2;
  *(_DWORD *)a2 = *(_DWORD *)a1;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  return result;
}

__int64 __fastcall sub_40AAE0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx@1
  __int64 v4; // rdi@1
  int v5; // er11@1
  unsigned __int64 v6; // rcx@1
  int v7; // er10@1
  int v8; // edx@1
  int v9; // eax@1
  int v10; // esi@1
  int v11; // er15@2
  int v12; // er14@3
  int v13; // ST04_4@3
  int v14; // er13@3
  int v15; // ST14_4@3
  int v16; // ST0C_4@3
  int v17; // ST1C_4@3
  int v18; // eax@3
  int v19; // ST24_4@3
  int v20; // eax@3
  int v21; // ecx@3
  int v22; // edx@3
  int v23; // edx@3
  int v24; // ST08_4@3
  int v25; // ecx@3
  int v26; // ecx@3
  int v27; // ST10_4@3
  int v28; // er9@3
  int v29; // esi@3
  int v30; // esi@3
  int v31; // eax@3
  int v32; // ST2C_4@3
  int v33; // eax@3
  int v34; // edx@3
  int v35; // edx@3
  int v36; // ecx@3
  int v37; // ecx@3
  int v38; // ST18_4@3
  int v39; // ebp@3
  int v40; // esi@3
  int v41; // esi@3
  int v42; // er12@3
  int v43; // eax@3
  int v44; // eax@3
  int v45; // edx@3
  int v46; // ST20_4@3
  int v47; // edx@3
  int v48; // er8@3
  int v49; // ecx@3
  int v50; // ecx@3
  int v51; // esi@3
  int v52; // esi@3
  int v53; // eax@3
  int v54; // eax@3
  int v55; // edx@3
  int v56; // edx@3
  int v57; // ecx@3
  int v58; // ecx@3
  int v59; // esi@3
  int v60; // esi@3
  int v61; // eax@3
  int v62; // eax@3
  int v63; // edx@3
  int v64; // edx@3
  int v65; // ecx@3
  int v66; // ecx@3
  int v67; // esi@3
  int v68; // esi@3
  int v69; // eax@3
  int v70; // eax@3
  int v71; // edx@3
  int v72; // edx@3
  int v73; // ecx@3
  int v74; // ecx@3
  int v75; // esi@3
  int v76; // esi@3
  int v77; // eax@3
  int v78; // eax@3
  int v79; // edx@3
  int v80; // edx@3
  int v81; // ecx@3
  int v82; // ecx@3
  int v83; // edi@3
  int v84; // edi@3
  int v85; // eax@3
  int v86; // eax@3
  int v87; // edx@3
  int v88; // edx@3
  int v89; // esi@3
  int v90; // esi@3
  int v91; // edi@3
  int v92; // edi@3
  int v93; // ecx@3
  int v94; // ecx@3
  int v95; // edx@3
  int v96; // edx@3
  int v97; // esi@3
  int v98; // esi@3
  int v99; // eax@3
  int v100; // eax@3
  int v101; // ecx@3
  int v102; // ecx@3
  int v103; // edi@3
  int v104; // edi@3
  int v105; // edx@3
  int v106; // edx@3
  int v107; // esi@3
  int v108; // esi@3
  int v109; // ecx@3
  int v110; // ecx@3
  int v111; // eax@3
  int v112; // eax@3
  int v113; // edi@3
  int v114; // edi@3
  int v115; // esi@3
  int v116; // esi@3
  int v117; // edx@3
  int v118; // edx@3
  int v119; // ecx@3
  int v120; // ecx@3
  int v121; // edi@3
  int v122; // edi@3
  int v123; // eax@3
  int v124; // eax@3
  int v125; // edx@3
  int v126; // edx@3
  int v127; // ecx@3
  int v128; // ecx@3
  int v129; // esi@3
  int v130; // esi@3
  int v131; // eax@3
  int v132; // eax@3
  int v133; // edx@3
  int v134; // edx@3
  int v135; // ecx@3
  int v136; // ecx@3
  int v137; // esi@3
  int v138; // esi@3
  int v139; // eax@3
  int v140; // eax@3
  int v141; // edx@3
  int v142; // edx@3
  int v143; // ecx@3
  int v144; // ecx@3
  int v145; // esi@3
  int v146; // esi@3
  int v147; // edi@3
  int v148; // edi@3
  int v149; // eax@3
  int v150; // eax@3
  int v151; // edx@3
  int v152; // edx@3
  int v153; // ecx@3
  int v154; // ecx@3
  int v155; // esi@3
  __int64 result; // rax@5
  int v157; // [sp+24h] [bp-50h]@1
  int v158; // [sp+2Ch] [bp-48h]@1
  unsigned __int64 v159; // [sp+34h] [bp-40h]@1
  __int64 v160; // [sp+3Ch] [bp-38h]@1

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a3 + 4);
  v6 = v3 + (a2 & 0xFFFFFFFFFFFFFFFCLL);
  v7 = *(_DWORD *)(a3 + 8);
  v158 = *(_DWORD *)a3;
  v160 = a3;
  v157 = *(_DWORD *)(a3 + 12);
  v8 = *(_DWORD *)(a3 + 16) + a2;
  v9 = __CFADD__(*(_DWORD *)(v4 + 16), (_DWORD)a2);
  v10 = *(_DWORD *)(v4 + 20) + HIDWORD(a2);
  v159 = v6;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9 + v10;
  if ( v3 < v6 )
  {
    v11 = v7;
    do
    {
      v12 = *(_DWORD *)v3;
      v13 = *(_DWORD *)(v3 + 4);
      v14 = *(_DWORD *)(v3 + 28);
      v15 = *(_DWORD *)(v3 + 20);
      v16 = *(_DWORD *)(v3 + 12);
      v17 = *(_DWORD *)(v3 + 36);
      v18 = __ROL4__(*(_DWORD *)v3 + v158 - 680876936 + (v157 ^ v5 & (v11 ^ v157)), 7);
      v19 = *(_DWORD *)(v3 + 44);
      v20 = v5 + v18;
      v21 = *(_DWORD *)(v3 + 8);
      v22 = __ROL4__(v13 + v157 - 389564586 + (v11 ^ v20 & (v11 ^ v5)), 12);
      v23 = v20 + v22;
      v24 = v21;
      v25 = __ROR4__(v21 + v11 + 606105819 + (v5 ^ v23 & (v5 ^ v20)), 15);
      v26 = v23 + v25;
      v27 = *(_DWORD *)(v3 + 16);
      v28 = *(_DWORD *)(v3 + 60);
      v29 = __ROR4__(v16 + v5 - 1044525330 + (v20 ^ v26 & (v23 ^ v20)), 10);
      v30 = v26 + v29;
      v31 = __ROL4__(v27 + v20 - 176418897 + (v23 ^ v30 & (v26 ^ v23)), 7);
      v32 = *(_DWORD *)(v3 + 24);
      v33 = v30 + v31;
      v34 = __ROL4__(v15 + v23 + 1200080426 + (v26 ^ v33 & (v30 ^ v26)), 12);
      v35 = v33 + v34;
      v36 = __ROR4__(v32 + v26 - 1473231341 + (v30 ^ v35 & (v33 ^ v30)), 15);
      v37 = v35 + v36;
      v38 = *(_DWORD *)(v3 + 32);
      v39 = *(_DWORD *)(v3 + 48);
      v40 = __ROR4__(v14 + v30 - 45705983 + (v33 ^ v37 & (v35 ^ v33)), 10);
      v41 = v37 + v40;
      v42 = *(_DWORD *)(v3 + 56);
      v43 = __ROL4__(v38 + v33 + 1770035416 + (v35 ^ v41 & (v37 ^ v35)), 7);
      v44 = v41 + v43;
      v45 = __ROL4__(v17 + v35 - 1958414417 + (v37 ^ v44 & (v41 ^ v37)), 12);
      v46 = *(_DWORD *)(v3 + 40);
      v47 = v44 + v45;
      v48 = *(_DWORD *)(v3 + 52);
      v49 = __ROR4__(v46 + v37 - 42063 + (v41 ^ v47 & (v44 ^ v41)), 15);
      v3 += 64LL;
      v50 = v47 + v49;
      v51 = __ROR4__(v19 + v41 - 1990404162 + (v44 ^ v50 & (v47 ^ v44)), 10);
      v52 = v50 + v51;
      v53 = __ROL4__(v39 + v44 + 1804603682 + (v47 ^ v52 & (v50 ^ v47)), 7);
      v54 = v52 + v53;
      v55 = __ROL4__(v48 + v47 - 40341101 + (v50 ^ v54 & (v52 ^ v50)), 12);
      v56 = v54 + v55;
      v57 = __ROR4__(v42 + v50 - 1502002290 + (v52 ^ v56 & (v54 ^ v52)), 15);
      v58 = v56 + v57;
      v59 = __ROR4__(v28 + v52 + 1236535329 + (v54 ^ v58 & (v56 ^ v54)), 10);
      v60 = v58 + v59;
      v61 = __ROL4__(v13 + v54 - 165796510 + (v58 ^ v56 & (v60 ^ v58)), 5);
      v62 = v60 + v61;
      v63 = __ROL4__(v32 + v56 - 1069501632 + (v60 ^ v58 & (v62 ^ v60)), 9);
      v64 = v62 + v63;
      v65 = __ROL4__(v19 + v58 + 643717713 + (v62 ^ v60 & (v64 ^ v62)), 14);
      v66 = v64 + v65;
      v67 = __ROR4__(v12 + v60 - 373897302 + (v64 ^ v62 & (v66 ^ v64)), 12);
      v68 = v66 + v67;
      v69 = __ROL4__(v15 + v62 - 701558691 + (v66 ^ v64 & (v68 ^ v66)), 5);
      v70 = v68 + v69;
      v71 = __ROL4__(v46 + v64 + 38016083 + (v68 ^ v66 & (v70 ^ v68)), 9);
      v72 = v70 + v71;
      v73 = __ROL4__(v28 + v66 - 660478335 + (v70 ^ v68 & (v72 ^ v70)), 14);
      v74 = v72 + v73;
      v75 = __ROR4__(v27 + v68 - 405537848 + (v72 ^ v70 & (v74 ^ v72)), 12);
      v76 = v74 + v75;
      v77 = __ROL4__(v17 + v70 + 568446438 + (v74 ^ v72 & (v76 ^ v74)), 5);
      v78 = v76 + v77;
      v79 = __ROL4__(v42 + v72 - 1019803690 + (v76 ^ v74 & (v78 ^ v76)), 9);
      v80 = v78 + v79;
      v81 = __ROL4__(v16 + v74 - 187363961 + (v78 ^ v76 & (v80 ^ v78)), 14);
      v82 = v80 + v81;
      v83 = __ROR4__(v38 + v76 + 1163531501 + (v80 ^ v78 & (v82 ^ v80)), 12);
      v84 = v82 + v83;
      v85 = __ROL4__(v48 + v78 - 1444681467 + (v82 ^ v80 & (v84 ^ v82)), 5);
      v86 = v84 + v85;
      v87 = __ROL4__(v24 + v80 - 51403784 + (v84 ^ v82 & (v86 ^ v84)), 9);
      v88 = v86 + v87;
      v89 = __ROL4__(v14 + v82 + 1735328473 + (v86 ^ v84 & (v88 ^ v86)), 14);
      v90 = v88 + v89;
      v91 = __ROR4__(v39 + v84 - 1926607734 + (v88 ^ v86 & (v90 ^ v88)), 12);
      v92 = v90 + v91;
      v93 = __ROL4__(v15 + v86 - 378558 + (v92 ^ v90 ^ v88), 4);
      v94 = v92 + v93;
      v95 = __ROL4__(v38 + v88 - 2022574463 + (v94 ^ v92 ^ v90), 11);
      v96 = v94 + v95;
      v97 = __ROL4__(v19 + v90 + 1839030562 + (v96 ^ v94 ^ v92), 16);
      v98 = v96 + v97;
      v99 = __ROR4__(v42 + v92 - 35309556 + (v98 ^ v96 ^ v94), 9);
      v100 = v98 + v99;
      v101 = __ROL4__(v13 + v94 - 1530992060 + (v100 ^ v98 ^ v96), 4);
      v102 = v100 + v101;
      v103 = __ROL4__(v27 + v96 + 1272893353 + (v102 ^ v100 ^ v98), 11);
      v104 = v102 + v103;
      v105 = __ROL4__(v14 + v98 - 155497632 + (v104 ^ v102 ^ v100), 16);
      v106 = v104 + v105;
      v107 = __ROR4__(v46 + v100 - 1094730640 + (v106 ^ v104 ^ v102), 9);
      v108 = v106 + v107;
      v109 = __ROL4__(v48 + v102 + 681279174 + (v108 ^ v106 ^ v104), 4);
      v110 = v108 + v109;
      v111 = __ROL4__(v12 + v104 - 358537222 + (v110 ^ v108 ^ v106), 11);
      v112 = v110 + v111;
      v113 = __ROL4__(v16 + v106 - 722521979 + (v112 ^ v110 ^ v108), 16);
      v114 = v112 + v113;
      v115 = __ROR4__(v32 + v108 + 76029189 + (v114 ^ v112 ^ v110), 9);
      v116 = v114 + v115;
      v117 = __ROL4__(v17 + v110 - 640364487 + (v116 ^ v114 ^ v112), 4);
      v118 = v116 + v117;
      v119 = __ROL4__(v39 + v112 - 421815835 + (v118 ^ v116 ^ v114), 11);
      v120 = v118 + v119;
      v121 = __ROL4__(v28 + v114 + 530742520 + (v120 ^ v118 ^ v116), 16);
      v122 = v120 + v121;
      v123 = __ROR4__(v24 + v116 - 995338651 + (v122 ^ v120 ^ v118), 9);
      v124 = v122 + v123;
      v125 = __ROL4__(v12 + v118 - 198630844 + (v122 ^ (v124 | ~v120)), 6);
      v126 = v124 + v125;
      v127 = __ROL4__(v14 + v120 + 1126891415 + (v124 ^ (v126 | ~v122)), 10);
      v128 = v126 + v127;
      v129 = __ROL4__(v42 + v122 - 1416354905 + (v126 ^ (v128 | ~v124)), 15);
      v130 = v128 + v129;
      v131 = __ROR4__(v15 + v124 - 57434055 + (v128 ^ (v130 | ~v126)), 11);
      v132 = v130 + v131;
      v133 = __ROL4__(v39 + v126 + 1700485571 + (v130 ^ (v132 | ~v128)), 6);
      v134 = v132 + v133;
      v135 = __ROL4__(v16 + v128 - 1894986606 + (v132 ^ (v134 | ~v130)), 10);
      v136 = v134 + v135;
      v137 = __ROL4__(v46 + v130 - 1051523 + (v134 ^ (v136 | ~v132)), 15);
      v138 = v136 + v137;
      v139 = __ROR4__(v13 + v132 - 2054922799 + (v136 ^ (v138 | ~v134)), 11);
      v140 = v138 + v139;
      v141 = __ROL4__(v38 + v134 + 1873313359 + (v138 ^ (v140 | ~v136)), 6);
      v142 = v140 + v141;
      v143 = __ROL4__(v28 + v136 - 30611744 + (v140 ^ (v142 | ~v138)), 10);
      v144 = v142 + v143;
      v145 = __ROL4__(v32 + v138 - 1560198380 + (v142 ^ (v144 | ~v140)), 15);
      v146 = v144 + v145;
      v147 = __ROR4__(v48 + v140 + 1309151649 + (v144 ^ (v146 | ~v142)), 11);
      v148 = v146 + v147;
      v149 = __ROL4__(v27 + v142 - 145523070 + (v146 ^ (v148 | ~v144)), 6);
      v150 = v148 + v149;
      v151 = __ROL4__(v19 + v144 - 1120210379 + (v148 ^ (v150 | ~v146)), 10);
      v152 = v150 + v151;
      v153 = __ROL4__(v24 + v146 + 718787259 + (v150 ^ (v152 | ~v148)), 15);
      v154 = v152 + v153;
      v155 = __ROR4__(v17 + v148 - 343485551 + (v152 ^ (v154 | ~v150)), 11);
      v158 += v150;
      v11 += v154;
      v5 += v154 + v155;
      v157 += v152;
    }
    while ( v159 > v3 );
    v7 = v11;
  }
  result = v160;
  *(_DWORD *)v160 = v158;
  *(_DWORD *)(v160 + 4) = v5;
  *(_DWORD *)(v160 + 8) = v7;
  *(_DWORD *)(v160 + 12) = v157;
  return result;
}

__int64 __fastcall sub_40B250(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 v3; // rax@1
  int v4; // edx@1
  int v5; // esi@1
  __int64 v6; // r8@1
  unsigned __int8 v7; // cf@1
  unsigned int v8; // esi@1
  char *v9; // rdx@3
  unsigned __int64 v10; // rcx@3

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = (-(signed __int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  v7 = __CFADD__(*(_DWORD *)(a1 + 16), v5);
  v8 = *(_DWORD *)(a1 + 16) + v5;
  *(_DWORD *)(a1 + 16) = v8;
  if ( v7 )
    *(_DWORD *)(a1 + 20) = ++v4;
  *(_DWORD *)(a1 + 4 * ((-(signed __int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 30) + 28) = 8 * v8;
  *(_DWORD *)(a1 + 4 * ((-(signed __int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 31) + 28) = (v8 >> 29) | 8 * v4;
  v9 = (char *)(a1 + 28 + v3);
  v10 = v6 - v3 - 8;
  if ( v10 >= 8 )
  {
    *(_QWORD *)v9 = 128LL;
    *(_QWORD *)&v9[v10 - 8] = *(_QWORD *)((char *)&unk_416AD8 + v10);
    qmemcpy(
      (void *)((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)&qword_416AE0 - &v9[-((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
      8 * ((unsigned __int64)(&v9[v10] - ((unsigned __int64)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL)) >> 3));
  }
  else if ( v10 & 4 )
  {
    *(_DWORD *)v9 = qword_416AE0;
    *(_DWORD *)&v9[v10 - 4] = *(_DWORD *)((char *)&unk_416ADC + v10);
  }
  else if ( v6 - v3 != 8 )
  {
    *v9 = qword_416AE0;
    if ( v10 & 2 )
      *(_WORD *)&v9[v10 - 2] = *(__int16 *)((char *)&word_416ADE + v10);
  }
  sub_40AAE0(a1 + 28, v6, a1);
  return sub_40AAC0(a1, v2);
}

char *__fastcall sub_40B360(void *src, size_t n, __int64 a3)
{
  size_t v3; // r13@1
  __int64 v4; // r12@1
  const __m128i *v5; // rbx@1
  char *result; // rax@1
  char *v7; // rbp@4
  const __m128i *v8; // r14@5
  __m128i v9; // xmm0@6
  __int64 v10; // rcx@8
  char *v11; // rsi@8
  size_t v12; // r13@13
  size_t v13; // rbp@16
  unsigned __int64 v14; // rdi@16
  __int64 v15; // rbp@19
  signed __int64 v16; // r15@19
  unsigned __int64 v17; // rdx@19
  unsigned __int64 v18; // r14@21
  unsigned int v19; // esi@21
  unsigned __int64 v20; // rdi@23
  signed __int64 v21; // r14@23
  unsigned int v22; // edx@24
  __int64 v23; // rsi@25
  int v24; // ecx@27
  __int64 v25; // rdx@27
  unsigned __int64 v26; // rsi@32
  unsigned __int64 v27; // r15@32
  unsigned int v28; // er15@32
  unsigned int v29; // er15@33
  unsigned int v30; // edx@33
  __int64 v31; // rcx@34

  v3 = n;
  v4 = a3;
  v5 = (const __m128i *)src;
  result = (char *)*(_DWORD *)(a3 + 24);
  if ( (_DWORD)result )
  {
    v15 = (unsigned int)result;
    v16 = a3 + 28;
    v17 = 128LL - (unsigned int)result;
    if ( v17 > n )
      v17 = n;
    v18 = v17;
    result = (char *)memcpy((void *)(v4 + 28 + (unsigned int)result), src, v17);
    v19 = v18 + *(_DWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 24) = v19;
    if ( v19 > 0x40 )
    {
      sub_40AAE0(v4 + 28, v19 & 0xFFFFFFC0, v4);
      v24 = *(_DWORD *)(v4 + 24);
      result = (char *)(v16 + ((v15 + v18) & 0xFFFFFFFFFFFFFFC0LL));
      v25 = *(_DWORD *)(v4 + 24) & 0x3F;
      *(_DWORD *)(v4 + 24) = v25;
      if ( (unsigned int)v25 >= 8 )
      {
        *(_QWORD *)(v4 + 28) = *(_QWORD *)result;
        *(_QWORD *)(v16 + (unsigned int)v25 - 8) = *(_QWORD *)&result[(unsigned int)v25 - 8];
        v26 = (v4 + 36) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = v16 - v26;
        result -= v27;
        v28 = (v25 + v27) & 0xFFFFFFF8;
        if ( v28 >= 8 )
        {
          v29 = v28 & 0xFFFFFFF8;
          v30 = 0;
          do
          {
            v31 = v30;
            v30 += 8;
            *(_QWORD *)(v26 + v31) = *(_QWORD *)&result[v31];
          }
          while ( v30 < v29 );
        }
      }
      else if ( v24 & 4 )
      {
        *(_DWORD *)(v4 + 28) = *(_DWORD *)result;
        result = (char *)*(_DWORD *)&result[v25 - 4];
        *(_DWORD *)(v16 + v25 - 4) = (_DWORD)result;
      }
      else if ( (_DWORD)v25 )
      {
        *(_BYTE *)(v4 + 28) = *result;
        if ( v24 & 2 )
        {
          result = (char *)*(_WORD *)&result[v25 - 2];
          *(_WORD *)(v16 + v25 - 2) = (_WORD)result;
        }
      }
    }
    v5 = (const __m128i *)((char *)src + v18);
    v3 -= v18;
  }
  if ( v3 > 0x3F )
  {
    if ( (unsigned __int8)v5 & 3 )
    {
      v7 = (char *)(v4 + 28);
      if ( v3 == 64 )
      {
        v8 = v5;
      }
      else
      {
        v8 = &v5[4 * (((v3 - 65) >> 6) + 1)];
        do
        {
          v9 = _mm_loadu_si128(v5);
          v5 += 4;
          *(__m128i *)v7 = v9;
          *(__m128i *)(v4 + 44) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(v4 + 60) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(v4 + 76) = _mm_loadu_si128(v5 - 1);
          sub_40AAE0(v4 + 28, 64LL, v4);
        }
        while ( v5 != v8 );
        v3 = v3 + -64LL * ((v3 - 65) >> 6) - 64;
      }
      goto LABEL_8;
    }
    v13 = v3;
    v14 = (unsigned __int64)v5;
    v3 &= 0x3Fu;
    v5 = (const __m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFFC0LL));
    result = (char *)sub_40AAE0(v14, v13 & 0xFFFFFFFFFFFFFFC0LL, v4);
  }
  if ( !v3 )
    return result;
  v7 = (char *)(v4 + 28);
  v8 = v5;
LABEL_8:
  v10 = *(_DWORD *)(v4 + 24);
  result = (char *)(unsigned int)v3;
  v11 = &v7[v10];
  if ( (unsigned int)v3 >= 8 )
  {
    v20 = (unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v11 = v8->m128i_i64[0];
    *(_QWORD *)&v11[(unsigned int)v3 - 8] = *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v3);
    v21 = (char *)v8 - &v11[-v20];
    result = (char *)(((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v20) & 0xFFFFFFF8);
    if ( (unsigned int)result >= 8 )
    {
      result = (char *)(((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v20) & 0xFFFFFFF8);
      v22 = 0;
      do
      {
        v23 = v22;
        v22 += 8;
        *(_QWORD *)(v20 + v23) = *(_QWORD *)(v21 + v23);
      }
      while ( v22 < (unsigned int)result );
    }
  }
  else if ( v3 & 4 )
  {
    *(_DWORD *)v11 = v8->m128i_i64[0];
    result = (char *)*(_DWORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 4);
    *(_DWORD *)&v11[(unsigned int)v3 - 4] = (_DWORD)result;
  }
  else if ( (_DWORD)v3 )
  {
    *v11 = v8->m128i_i64[0];
    if ( v3 & 2 )
    {
      result = (char *)*(_WORD *)((char *)&v8->m128i_i64[0] + (unsigned int)v3 - 2);
      *(_WORD *)&v11[(unsigned int)v3 - 2] = (_WORD)result;
    }
  }
  v12 = v10 + v3;
  if ( v12 > 0x3F )
  {
    v12 -= 64LL;
    sub_40AAE0((unsigned __int64)v7, 64LL, v4);
    result = (char *)memcpy(v7, (const void *)(v4 + 92), v12);
  }
  *(_DWORD *)(v4 + 24) = v12;
  return result;
}

void __fastcall sub_40B800(FILE *a1, int a2)
{
  int v2; // eax@2

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

char *__fastcall sub_40B830(char **a1)
{
  char *v1; // rsi@1
  char v2; // dl@1
  char v3; // cl@2
  char *result; // rax@2
  int v5; // ecx@3
  signed __int64 v6; // r8@4

  v1 = *a1;
  v2 = **a1;
  if ( v2 )
  {
    v3 = 0;
    result = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v3 )
        {
          v5 = v2 - 65;
          if ( (unsigned int)v5 > 0x39 || (v6 = 1LL << v5, v3 = 0, !(v6 & 0x3FFFFFF03FFFFFFLL)) )
          {
            v3 = 0;
            if ( v2 != 126 )
              result = 0LL;
          }
          goto LABEL_7;
        }
        if ( v2 == 46 )
        {
          v3 = 1;
          if ( !result )
            result = v1;
          goto LABEL_7;
        }
        if ( v2 <= 90 )
          break;
        if ( (unsigned __int8)(v2 - 97) > 0x19u )
          goto LABEL_13;
LABEL_7:
        *a1 = ++v1;
        v2 = *v1;
        if ( !*v1 )
          return result;
      }
      if ( v2 >= 65 || (unsigned __int8)(v2 - 48) <= 9u )
        goto LABEL_7;
LABEL_13:
      if ( v2 != 126 )
        result = 0LL;
      *a1 = ++v1;
      v2 = *v1;
      if ( !*v1 )
        return result;
    }
  }
  return 0LL;
}

__int64 __fastcall sub_40B900(char *s1, char *s2)
{
  char *v2; // rbp@1
  char *v3; // rbx@1
  int v4; // er12@1
  char v5; // r8@2
  char v6; // r9@3
  bool v7; // cf@3
  bool v8; // zf@3
  signed __int64 v9; // rcx@4
  _BYTE *v10; // rsi@4
  char v11; // al@7
  bool v12; // cf@7
  bool v13; // zf@7
  signed __int64 v14; // rcx@8
  _BYTE *v15; // rsi@8
  char *v16; // rdi@8
  char v17; // al@11
  bool v18; // cf@11
  bool v19; // zf@11
  signed __int64 v20; // rcx@12
  char *v21; // rdi@12
  _BYTE *v22; // rsi@12
  char v23; // al@15
  bool v24; // cf@15
  bool v25; // zf@15
  signed __int64 v26; // rcx@16
  _BYTE *v27; // rsi@16
  char *v28; // rdi@16
  char *v29; // r13@24
  char *v30; // rax@24
  size_t v31; // r13@25
  unsigned __int64 v32; // r14@26
  unsigned __int64 v33; // rsi@28
  size_t v34; // rdx@28
  unsigned __int64 v35; // r9@31
  char v36; // al@32
  signed int v37; // er10@33
  int v38; // ecx@34
  int v39; // ecx@35
  char v40; // di@40
  signed int v41; // eax@40
  int v42; // ecx@44
  int v43; // ecx@49
  int v44; // eax@54
  int v45; // er9@57
  size_t v47; // rdi@67
  int v48; // er9@67
  int v49; // eax@68
  int v50; // [sp+4h] [bp-54h]@70
  char *v51; // [sp+10h] [bp-48h]@24
  char *v52; // [sp+18h] [bp-40h]@24

  v2 = s2;
  v3 = s1;
  v4 = strcmp(s1, s2);
  if ( v4 )
  {
    v5 = *s1;
    if ( *s1 )
    {
      v6 = *s2;
      v7 = 0;
      v8 = *s2 == 0;
      if ( !*s2 )
        goto LABEL_59;
      v9 = 2LL;
      v10 = &unk_416B21;
      do
      {
        if ( !v9 )
          break;
        v7 = *v10 < (unsigned __int8)*s1;
        v8 = *v10++ == *s1++;
        --v9;
      }
      while ( v8 );
      v11 = (!v7 && !v8) - v7;
      v12 = 0;
      v13 = v11 == 0;
      if ( !v11 )
        goto LABEL_62;
      v14 = 2LL;
      v15 = &unk_416B21;
      v16 = v2;
      do
      {
        if ( !v14 )
          break;
        v12 = *v15 < (unsigned __int8)*v16;
        v13 = *v15++ == *v16++;
        --v14;
      }
      while ( v13 );
      v17 = (!v12 && !v13) - v12;
      v18 = 0;
      v19 = v17 == 0;
      if ( !v17 )
        goto LABEL_59;
      v20 = 3LL;
      v21 = v3;
      v22 = &unk_416B20;
      do
      {
        if ( !v20 )
          break;
        v18 = *v22 < (unsigned __int8)*v21;
        v19 = *v22++ == *v21++;
        --v20;
      }
      while ( v19 );
      v23 = (!v18 && !v19) - v18;
      v24 = 0;
      v25 = v23 == 0;
      if ( !v23 )
        goto LABEL_62;
      v26 = 3LL;
      v27 = &unk_416B20;
      v28 = v2;
      do
      {
        if ( !v26 )
          break;
        v24 = *v27 < (unsigned __int8)*v28;
        v25 = *v27++ == *v28++;
        --v26;
      }
      while ( v25 );
      if ( (!v24 && !v25) == v24 )
LABEL_59:
        return 1;
      if ( v6 == 46 || v5 != 46 )
      {
        if ( v5 == 46 )
        {
          if ( v6 == 46 )
          {
            ++v3;
            ++v2;
          }
LABEL_24:
          v51 = v3;
          v52 = v2;
          v29 = sub_40B830(&v51);
          v30 = sub_40B830(&v52);
          if ( v29 )
          {
            v31 = v29 - v3;
            if ( !v30 )
            {
              v32 = v52 - v2;
LABEL_27:
              if ( v31 != v32 || strncmp(v3, v2, v31) )
                goto LABEL_28;
              v31 = v51 - v3;
LABEL_77:
              v32 = v52 - v2;
LABEL_28:
              v33 = 0LL;
              v34 = 0LL;
              while ( 1 )
              {
                if ( v31 <= v34 && v32 <= v33 )
                  return (unsigned int)v4;
                v35 = v33 - v34;
                if ( v31 > v34 )
                  break;
LABEL_44:
                while ( 1 )
                {
                  v40 = v2[v33];
                  v42 = v2[v33];
                  if ( v32 <= v33 || (unsigned int)(v40 - 48) <= 9 )
                    break;
                  if ( v31 != v34 )
                  {
                    v38 = (unsigned __int8)v3[v34];
                    v36 = v3[v34];
                    v37 = (unsigned __int8)v3[v34];
                    if ( (unsigned int)(v38 - 48) > 9 )
                      goto LABEL_35;
                  }
LABEL_48:
                  v41 = (unsigned __int8)v40;
                  v37 = 0;
                  if ( (unsigned int)(unsigned __int8)v40 - 48 > 9 )
                    goto LABEL_49;
LABEL_43:
                  ++v34;
                  ++v33;
                  if ( v31 > v34 )
                    goto LABEL_32;
                }
                while ( 1 )
                {
                  v44 = v3[v34];
                  if ( v3[v34] != 48 )
                    break;
                  ++v34;
                }
                if ( v40 == 48 )
                {
                  do
                    v42 = v2[++v33];
                  while ( v2[v33] == 48 );
                }
                v45 = v42 - 48;
                if ( (unsigned int)(v44 - 48) > 9 )
                {
                  if ( (unsigned int)v45 <= 9 )
                    goto LABEL_62;
                }
                else
                {
                  if ( (unsigned int)v45 > 9 )
                    goto LABEL_59;
                  v47 = v34;
                  v48 = 0;
                  while ( 1 )
                  {
                    v49 = v44 - v42;
                    if ( !v48 )
                      v48 = v49;
                    v42 = *(&v2[v33 - v34] + ++v47);
                    v44 = v3[v47];
                    v50 = v42 - 48;
                    if ( (unsigned int)(v44 - 48) > 9 )
                      break;
                    if ( (unsigned int)v50 > 9 )
                      goto LABEL_59;
                  }
                  if ( (unsigned int)v50 <= 9 )
                    goto LABEL_62;
                  if ( v48 )
                    return (unsigned int)v48;
                  v33 += v47 - v34;
                  v34 = v47;
                }
              }
LABEL_32:
              v36 = v3[v34];
              if ( (unsigned int)(v3[v34] - 48) <= 9 )
                goto LABEL_44;
              v37 = (unsigned __int8)v36;
              if ( (unsigned int)(unsigned __int8)v36 - 48 <= 9 )
              {
                if ( v32 != v33 )
                {
                  v40 = v2[v33];
                  goto LABEL_48;
                }
                goto LABEL_43;
              }
              v38 = (unsigned __int8)v36;
LABEL_35:
              v39 = v38 - 65;
              if ( (unsigned int)v39 <= 0x39 && (1LL << v39) & 0x3FFFFFF03FFFFFFLL )
              {
                v41 = 0;
                if ( v32 == v34 + v35 )
                {
LABEL_42:
                  if ( v41 == v37 )
                    goto LABEL_43;
                  return (unsigned int)(v37 - v41);
                }
              }
              else
              {
                if ( v36 == 126 )
                  v37 = -1;
                else
                  v37 += 256;
                if ( v32 == v34 + v35 )
                  return (unsigned int)v37;
              }
              v40 = v2[v33];
              v41 = (unsigned __int8)v2[v33];
              if ( (unsigned int)(v41 - 48) > 9 )
              {
LABEL_49:
                v43 = (unsigned __int8)v40 - 65;
                if ( (unsigned int)v43 > 0x39 || !((1LL << v43) & 0x3FFFFFF03FFFFFFLL) )
                {
                  if ( v40 == 126 )
                    v41 = -1;
                  else
                    v41 += 256;
                }
              }
              else
              {
                v41 = 0;
              }
              goto LABEL_42;
            }
          }
          else
          {
            v31 = v51 - v3;
            if ( !v30 )
              goto LABEL_77;
          }
          v32 = v30 - v2;
          goto LABEL_27;
        }
        if ( v6 != 46 )
          goto LABEL_24;
        goto LABEL_59;
      }
    }
LABEL_62:
    v4 = -1;
  }
  return (unsigned int)v4;
}

bool __fastcall sub_40BD10(int a1)
{
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  char *v6; // rdi@2
  char *v7; // rsi@2
  char v8; // cl@5
  bool v9; // cf@5
  bool v10; // zf@5
  const char *v11; // rdi@7
  signed __int64 v12; // rcx@7
  char *v13; // rsi@7

  v1 = setlocale(a1, 0LL);
  result = 1;
  v3 = 0;
  v4 = v1 == 0LL;
  if ( v1 )
  {
    v5 = 2LL;
    v6 = "C";
    v7 = v1;
    do
    {
      if ( !v5 )
        break;
      v3 = (unsigned __int8)*v7 < (unsigned __int8)*v6;
      v4 = *v7++ == *v6++;
      --v5;
    }
    while ( v4 );
    v8 = (!v3 && !v4) - v3;
    result = 0;
    v9 = 0;
    v10 = v8 == 0;
    if ( v8 )
    {
      v11 = "POSIX";
      v12 = 6LL;
      v13 = v1;
      do
      {
        if ( !v12 )
          break;
        v9 = (unsigned __int8)*v13 < *v11;
        v10 = *v13++ == *v11++;
        --v12;
      }
      while ( v10 );
      result = (!v9 && !v10) != v9;
    }
  }
  return result;
}

unsigned __int64 __fastcall sub_40BD70(unsigned __int64 a1)
{
  signed __int64 v1; // rsi@1
  unsigned __int64 v2; // rsi@3
  unsigned __int64 v3; // rax@4
  signed __int64 v4; // r8@6
  unsigned __int64 v5; // rdi@6
  unsigned __int64 v6; // rcx@6

  v1 = 10LL;
  if ( a1 >= 0xA )
    v1 = a1;
  v2 = v1 | 1;
  if ( v2 != -1LL )
  {
    while ( 1 )
    {
      v3 = v2 - 3 * ((unsigned __int64)(0x0AAAAAAAAAAAAAAABLL * (unsigned __int128)v2 >> 64) >> 1);
      if ( v2 <= 9 )
        goto LABEL_9;
      if ( v2 != 3 * ((unsigned __int64)(0x0AAAAAAAAAAAAAAABLL * (unsigned __int128)v2 >> 64) >> 1) )
        break;
LABEL_10:
      v2 += 2LL;
      if ( v2 == -1LL )
        return v2;
    }
    v4 = 16LL;
    v5 = 9LL;
    v6 = 3LL;
    while ( 1 )
    {
      v6 += 2LL;
      v5 += v4;
      v3 = v2 % v6;
      if ( v5 >= v2 )
        break;
      v4 += 8LL;
      if ( !(v2 % v6) )
        goto LABEL_10;
    }
LABEL_9:
    if ( v3 )
      return v2;
    goto LABEL_10;
  }
  return v2;
}

signed __int64 __fastcall sub_40BE30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_40BE30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40BE60(__int64 a1, __int64 a2, __int64 **a3, char a4)
{
  __int64 **v4; // r14@1
  char v5; // r13@1
  __int64 v6; // rbp@1
  __int64 *v7; // rax@1
  __int64 v8; // rsi@1
  __int64 *v9; // rbx@2
  __int64 v10; // rax@4
  const __m128i *v12; // rax@16

  v4 = a3;
  v5 = a4;
  v6 = a2;
  v7 = (__int64 *)sub_40BE30(a1, a2);
  *v4 = v7;
  v8 = *v7;
  if ( *v7 )
  {
    v9 = v7;
    if ( v8 != v6 )
    {
      if ( !(unsigned __int8)(*(int (__fastcall **)(__int64))(a1 + 56))(v6) )
      {
        v10 = v9[1];
        if ( v10 )
        {
          v8 = *(_QWORD *)v10;
          if ( v6 != *(_QWORD *)v10 )
          {
            while ( !(unsigned __int8)(*(int (__fastcall **)(__int64))(a1 + 56))(v6) )
            {
              v9 = (__int64 *)v9[1];
              v10 = v9[1];
              if ( !v10 )
                return 0LL;
              v8 = *(_QWORD *)v10;
              if ( *(_QWORD *)v10 == v6 )
                goto LABEL_11;
            }
            v10 = v9[1];
            v8 = *(_QWORD *)v10;
          }
LABEL_11:
          if ( v5 )
          {
            v9[1] = *(_QWORD *)(v10 + 8);
            *(_QWORD *)v10 = 0LL;
            *(_QWORD *)(v10 + 8) = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v10;
          }
          return v8;
        }
        return 0LL;
      }
      v8 = *v9;
    }
    if ( v5 )
    {
      v12 = (const __m128i *)v9[1];
      if ( v12 )
      {
        *(__m128i *)v9 = _mm_loadu_si128(v12);
        v12->m128i_i64[0] = 0LL;
        v12->m128i_i64[1] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v12;
        return v8;
      }
      *v9 = 0LL;
    }
    return v8;
  }
  return 0LL;
}

signed __int64 __fastcall sub_40BF80(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_416BA0 )
  {
    result = 1LL;
  }
  else
  {
    v2 = *((float *)v1 + 2);
    if ( v2 <= 0.1
      || v2 >= 0.89999998
      || *((float *)v1 + 3) <= 1.1
      || (v3 = *(float *)v1 + 0.1, v4 = *((float *)v1 + 1), v4 <= v3)
      || v4 > 1.0
      || (result = 1LL, v2 <= v3) )
    {
      *a1 = &unk_416BA0;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_40C000(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14@1
  unsigned __int64 v4; // r12@1
  __int64 v5; // r15@4
  __int64 v6; // rbx@5
  __int64 v7; // r15@8
  signed __int64 v8; // rax@8
  __int64 v9; // rdx@8
  _QWORD *v10; // rax@12
  _QWORD *v11; // rbx@12
  _QWORD *v12; // rax@13
  __int64 v13; // rdx@15

  v3 = a3;
  v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = *(_QWORD *)v6;
              v8 = sub_40BE30(a1, *(_QWORD *)v6);
              v9 = *(_QWORD *)(v6 + 8);
              if ( !*(_QWORD *)v8 )
                break;
              *(_QWORD *)(v6 + 8) = *(_QWORD *)(v8 + 8);
              *(_QWORD *)(v8 + 8) = v6;
              v6 = v9;
              if ( !v9 )
                goto LABEL_10;
            }
            *(_QWORD *)v8 = v7;
            ++*(_QWORD *)(a1 + 24);
            *(_QWORD *)v6 = 0LL;
            *(_QWORD *)(v6 + 8) = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v6;
            v6 = v9;
          }
          while ( v9 );
LABEL_10:
          v5 = *(_QWORD *)v4;
        }
        *(_QWORD *)(v4 + 8) = 0LL;
        if ( !v3 )
          break;
      }
      v4 += 16LL;
      if ( *(_QWORD *)(a2 + 8) <= v4 )
        return 1LL;
    }
    v10 = (_QWORD *)sub_40BE30(a1, v5);
    v11 = v10;
    if ( !*v10 )
    {
      *v10 = v5;
      ++*(_QWORD *)(a1 + 24);
      goto LABEL_16;
    }
    v12 = *(_QWORD **)(a1 + 72);
    if ( !v12 )
      break;
    *(_QWORD *)(a1 + 72) = v12[1];
LABEL_15:
    v13 = v11[1];
    *v12 = v5;
    v12[1] = v13;
    v11[1] = v12;
LABEL_16:
    *(_QWORD *)v4 = 0LL;
    v4 += 16LL;
    --*(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 8) <= v4 )
      return 1LL;
  }
  v12 = malloc(0x10uLL);
  if ( v12 )
    goto LABEL_15;
  return 0LL;
}

char **__fastcall sub_40C600(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
{
  char *v5; // r14@1
  __int64 (__fastcall *v6)(); // r13@1
  __int64 (__fastcall *v7)(); // r12@1
  unsigned __int64 v8; // rbp@1
  void *v9; // rax@5
  char **v10; // rbx@5
  void **v11; // rdi@6
  unsigned __int64 v12; // rbp@9
  char *v13; // rax@12
  char **v14; // rdi@14
  float v16; // xmm1_4@16
  float v17; // xmm0_4@18
  float v18; // xmm0_4@19

  v5 = a5;
  v6 = a4;
  v7 = a3;
  v8 = a1;
  if ( !a3 )
    v7 = sub_40BE10;
  if ( !a4 )
    v6 = sub_40BE20;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40BF80(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40BD70(v8);
        if ( !_bittest64((const signed __int64 *)&v12, 0x3Cu) && v12 >> 61 == 0 )
        {
          v10[2] = (char *)v12;
          if ( v12 )
          {
            v13 = (char *)calloc(v12, 0x10uLL);
            *v10 = v13;
            if ( v13 )
            {
              v10[3] = 0LL;
              v10[4] = 0LL;
              v10[1] = &v13[16 * v12];
              v10[6] = (char *)v7;
              v10[7] = (char *)v6;
              v10[8] = v5;
              v10[9] = 0LL;
              return v10;
            }
          }
        }
LABEL_14:
        v14 = v10;
        v10 = 0LL;
        free(v14);
        return v10;
      }
      v16 = *(float *)(a2 + 8);
      if ( (v8 & 0x8000000000000000LL) != 0LL )
        goto LABEL_23;
    }
    else
    {
      *((_QWORD *)v9 + 5) = &unk_416BA0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40BF80(v11) )
        goto LABEL_14;
      if ( (v8 & 0x8000000000000000LL) != 0LL )
      {
LABEL_23:
        v17 = (float)(signed int)(v8 & 1 | (v8 >> 1)) + (float)(signed int)(v8 & 1 | (v8 >> 1));
        goto LABEL_19;
      }
    }
    v17 = (float)(signed int)v8;
LABEL_19:
    v18 = v17 / v16;
    if ( v18 >= 1.8446744e19 )
      goto LABEL_14;
    if ( v18 < 9.223372e18 )
      v8 = (unsigned int)(signed int)ffloor(v18);
    else
      v8 = (unsigned int)(signed int)ffloor(v18 - 9.223372e18) ^ 0x8000000000000000LL;
    goto LABEL_9;
  }
  return v10;
}

signed __int64 __fastcall sub_40C920(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12@1
  float v3; // xmm0_4@3
  float v4; // xmm0_4@4
  unsigned __int64 v5; // rax@7
  size_t v6; // rbx@7
  bool v7; // sf@7
  signed __int64 v8; // rax@7
  void *v9; // rax@12
  signed __int64 v10; // rbx@13
  __int64 v11; // rax@13
  __int64 v12; // rax@13
  __int64 v13; // rax@13
  unsigned int v14; // ebx@13
  void *v16; // [sp+0h] [bp-68h]@12
  __int64 v17; // [sp+8h] [bp-60h]@13
  size_t v18; // [sp+10h] [bp-58h]@13
  __int64 v19; // [sp+18h] [bp-50h]@13
  __int64 v20; // [sp+20h] [bp-48h]@13
  __int64 v21; // [sp+28h] [bp-40h]@13
  __int64 v22; // [sp+30h] [bp-38h]@13
  __int64 v23; // [sp+38h] [bp-30h]@13
  __int64 v24; // [sp+40h] [bp-28h]@13
  __int64 v25; // [sp+48h] [bp-20h]@13

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(signed int)(a2 & 1 | (a2 >> 1)) + (float)(signed int)(a2 & 1 | (a2 >> 1));
    else
      v3 = (float)(signed int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(signed int)ffloor(v4);
    else
      a2 = (unsigned int)(signed int)ffloor(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_40BD70(a2);
  v6 = v5;
  v7 = (8 * v5 & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = calloc(v6, 0x10uLL);
  v16 = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (signed __int64)v9 + 16 * v6;
  v11 = *(_QWORD *)(a1 + 48);
  v19 = 0LL;
  v17 = v10;
  v22 = v11;
  v12 = *(_QWORD *)(a1 + 56);
  v20 = 0LL;
  v23 = v12;
  v13 = *(_QWORD *)(a1 + 64);
  v21 = v2;
  v24 = v13;
  v25 = *(_QWORD *)(a1 + 72);
  v14 = sub_40C000((__int64)&v16, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40C000(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40C000(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40C920(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12@1
  float v3; // xmm0_4@3
  float v4; // xmm0_4@4
  unsigned __int64 v5; // rax@7
  size_t v6; // rbx@7
  bool v7; // sf@7
  signed __int64 v8; // rax@7
  void *v9; // rax@12
  signed __int64 v10; // rbx@13
  __int64 v11; // rax@13
  __int64 v12; // rax@13
  __int64 v13; // rax@13
  unsigned int v14; // ebx@13
  void *v16; // [sp+0h] [bp-68h]@12
  __int64 v17; // [sp+8h] [bp-60h]@13
  size_t v18; // [sp+10h] [bp-58h]@13
  __int64 v19; // [sp+18h] [bp-50h]@13
  __int64 v20; // [sp+20h] [bp-48h]@13
  __int64 v21; // [sp+28h] [bp-40h]@13
  __int64 v22; // [sp+30h] [bp-38h]@13
  __int64 v23; // [sp+38h] [bp-30h]@13
  __int64 v24; // [sp+40h] [bp-28h]@13
  __int64 v25; // [sp+48h] [bp-20h]@13

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( (a2 & 0x8000000000000000LL) != 0LL )
      v3 = (float)(signed int)(a2 & 1 | (a2 >> 1)) + (float)(signed int)(a2 & 1 | (a2 >> 1));
    else
      v3 = (float)(signed int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(signed int)ffloor(v4);
    else
      a2 = (unsigned int)(signed int)ffloor(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_40BD70(a2);
  v6 = v5;
  v7 = (8 * v5 & 0x8000000000000000LL) != 0LL;
  v8 = v5 >> 61 != 0;
  if ( v7 )
    v8 = 1LL;
  if ( !v6 || v8 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v6 )
    return 1LL;
  v9 = calloc(v6, 0x10uLL);
  v16 = v9;
  if ( !v9 )
    return 0;
  v18 = v6;
  v10 = (signed __int64)v9 + 16 * v6;
  v11 = *(_QWORD *)(a1 + 48);
  v19 = 0LL;
  v17 = v10;
  v22 = v11;
  v12 = *(_QWORD *)(a1 + 56);
  v20 = 0LL;
  v23 = v12;
  v13 = *(_QWORD *)(a1 + 64);
  v21 = v2;
  v24 = v13;
  v25 = *(_QWORD *)(a1 + 72);
  v14 = sub_40C000((__int64)&v16, a1, 0);
  if ( (_BYTE)v14 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = v16;
    *(_QWORD *)(a1 + 8) = v17;
    *(_QWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 24) = v19;
    *(_QWORD *)(a1 + 72) = v25;
    return v14;
  }
  *(_QWORD *)(a1 + 72) = v25;
  if ( !(unsigned __int8)sub_40C000(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_40C000(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_40CB20(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12@2
  __int64 v4; // rbp@2
  __int64 v5; // rdx@2
  signed __int64 result; // rax@3
  unsigned __int64 v7; // rax@6
  __int64 v8; // rdx@7
  float v9; // xmm1_4@7
  unsigned __int64 v10; // rax@7
  __int64 *v11; // r12@9
  _QWORD *v12; // rax@10
  __int64 v13; // rdx@12
  signed int v14; // edx@13
  float v15; // xmm1_4@13
  __int64 v16; // rdx@15
  __int64 v17; // rax@15
  float v18; // xmm2_4@15
  float v19; // xmm0_4@16
  __int64 v20; // rax@17
  float v21; // xmm1_4@18
  float v22; // xmm0_4@20
  signed __int64 v23; // rcx@27
  signed __int64 v24; // rcx@28
  unsigned __int64 v25; // rsi@30
  __int64 *v26; // [sp+8h] [bp-20h]@2

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40BE60(a1, a2, &v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x8000000000000000LL) != 0LL )
    {
      v14 = v7 & 1 | (v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( (v10 & 0x8000000000000000LL) == 0LL )
      {
LABEL_8:
        if ( v9 <= (float)((float)(signed int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40BF80((void **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(signed int)v24 + (float)(signed int)v24;
        }
        else
        {
          v19 = (float)(signed int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(signed int)v23 + (float)(signed int)v23;
        }
        else
        {
          v21 = (float)(signed int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18 ? (unsigned int)(signed int)ffloor(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(signed int)ffloor(v22);
        if ( !(unsigned __int8)sub_40C920(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40BE60(a1, v4, &v26, 0) )
        {
LABEL_9:
          v11 = v26;
          if ( !*v26 )
          {
            *v26 = v4;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            ++*(_QWORD *)(a1 + 24);
            return result;
          }
          v12 = *(_QWORD **)(a1 + 72);
          if ( v12 )
          {
            *(_QWORD *)(a1 + 72) = v12[1];
LABEL_12:
            v13 = v11[1];
            *v12 = v4;
            v12[1] = v13;
            v11[1] = (__int64)v12;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            return result;
          }
          v12 = malloc(0x10uLL);
          if ( v12 )
            goto LABEL_12;
          return 0xFFFFFFFFLL;
        }
LABEL_35:
        abort();
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = (float)(signed int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(signed int)(v10 & 1 | (v10 >> 1)) + (float)(signed int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

signed __int64 __fastcall sub_40CB20(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r12@2
  __int64 v4; // rbp@2
  __int64 v5; // rdx@2
  signed __int64 result; // rax@3
  unsigned __int64 v7; // rax@6
  __int64 v8; // rdx@7
  float v9; // xmm1_4@7
  unsigned __int64 v10; // rax@7
  __int64 *v11; // r12@9
  _QWORD *v12; // rax@10
  __int64 v13; // rdx@12
  signed int v14; // edx@13
  float v15; // xmm1_4@13
  __int64 v16; // rdx@15
  __int64 v17; // rax@15
  float v18; // xmm2_4@15
  float v19; // xmm0_4@16
  __int64 v20; // rax@17
  float v21; // xmm1_4@18
  float v22; // xmm0_4@20
  signed __int64 v23; // rcx@27
  signed __int64 v24; // rcx@28
  unsigned __int64 v25; // rsi@30
  __int64 *v26; // [sp+8h] [bp-20h]@2

  if ( !a2 )
    goto LABEL_35;
  v3 = a3;
  v4 = a2;
  v5 = sub_40BE60(a1, a2, &v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( (v7 & 0x8000000000000000LL) != 0LL )
    {
      v14 = v7 & 1 | (v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( (v10 & 0x8000000000000000LL) == 0LL )
      {
LABEL_8:
        if ( v9 <= (float)((float)(signed int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_40BF80((void **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(signed int)v24 + (float)(signed int)v24;
        }
        else
        {
          v19 = (float)(signed int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(signed int)v23 + (float)(signed int)v23;
        }
        else
        {
          v21 = (float)(signed int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18 ? (unsigned int)(signed int)ffloor(v22 - 9.223372e18) ^ 0x8000000000000000LL : (unsigned __int64)(unsigned int)(signed int)ffloor(v22);
        if ( !(unsigned __int8)sub_40C920(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40BE60(a1, v4, &v26, 0) )
        {
LABEL_9:
          v11 = v26;
          if ( !*v26 )
          {
            *v26 = v4;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            ++*(_QWORD *)(a1 + 24);
            return result;
          }
          v12 = *(_QWORD **)(a1 + 72);
          if ( v12 )
          {
            *(_QWORD *)(a1 + 72) = v12[1];
LABEL_12:
            v13 = v11[1];
            *v12 = v4;
            v12[1] = v13;
            v11[1] = (__int64)v12;
            result = 1LL;
            ++*(_QWORD *)(a1 + 32);
            return result;
          }
          v12 = malloc(0x10uLL);
          if ( v12 )
            goto LABEL_12;
          return 0xFFFFFFFFLL;
        }
LABEL_35:
        abort();
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = (float)(signed int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( (v10 & 0x8000000000000000LL) == 0LL )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(signed int)(v10 & 1 | (v10 >> 1)) + (float)(signed int)(v10 & 1 | (v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( v3 )
    *v3 = v5;
  return result;
}

__int64 __fastcall sub_40CDA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_40CB20(a1, a2, &v5);
  if ( v3 == -1 )
  {
    result = 0LL;
  }
  else
  {
    if ( !v3 )
      v2 = v5;
    result = v2;
  }
  return result;
}

__int64 __fastcall sub_40CDE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  __int64 v3; // rbp@1
  _QWORD *v4; // rax@2
  unsigned __int64 v6; // rax@4
  float *v7; // rdx@5
  float v8; // xmm0_4@5
  unsigned __int64 v9; // rax@5
  float v10; // xmm1_4@6
  __int64 v11; // rax@8
  __int64 v12; // rdx@8
  float v13; // xmm0_4@9
  __int64 v14; // rax@10
  float v15; // xmm1_4@11
  float v16; // xmm0_4@13
  unsigned __int64 v17; // rsi@16
  __int64 v18; // rdi@18
  __int64 v19; // r12@19
  signed int v20; // edx@21
  float v21; // xmm0_4@21
  signed __int64 v22; // rcx@23
  signed __int64 v23; // rcx@24
  _QWORD *v24; // [sp+8h] [bp-20h]@1

  v2 = a1;
  v3 = sub_40BE60(a1, a2, &v24, 1);
  if ( !v3 )
    return v3;
  v4 = v24;
  --*(_QWORD *)(a1 + 32);
  if ( *v4 )
    return v3;
  v6 = *(_QWORD *)(a1 + 24) - 1LL;
  *(_QWORD *)(a1 + 24) = v6;
  if ( (v6 & 0x8000000000000000LL) != 0LL )
  {
    v20 = v6 & 1 | (v6 >> 1);
    v9 = *(_QWORD *)(a1 + 16);
    v21 = (float)v20;
    v7 = *(float **)(a1 + 40);
    v8 = v21 + v21;
    if ( (v9 & 0x8000000000000000LL) == 0LL )
      goto LABEL_6;
LABEL_22:
    v10 = (float)(signed int)(v9 & 1 | (v9 >> 1)) + (float)(signed int)(v9 & 1 | (v9 >> 1));
    goto LABEL_7;
  }
  v7 = *(float **)(a1 + 40);
  v8 = (float)(signed int)v6;
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 0x8000000000000000LL) != 0LL )
    goto LABEL_22;
LABEL_6:
  v10 = (float)(signed int)v9;
LABEL_7:
  if ( (float)(v10 * *v7) > v8 )
  {
    sub_40BF80((void **)(a1 + 40));
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
      v13 = (float)(signed int)v23 + (float)(signed int)v23;
    }
    else
    {
      v13 = (float)(signed int)v11;
    }
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
      v15 = (float)(signed int)v22 + (float)(signed int)v22;
    }
    else
    {
      v15 = (float)(signed int)v14;
    }
    if ( (float)(*(float *)v12 * v13) > v15 )
    {
      v16 = v13 * *(float *)(v12 + 4);
      if ( !*(_BYTE *)(v12 + 16) )
        v16 = v16 * *(float *)(v12 + 8);
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(signed int)ffloor(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(signed int)ffloor(v16);
      if ( !(unsigned __int8)sub_40C920(a1, v17) )
      {
        v18 = *(_QWORD *)(a1 + 72);
        if ( v18 )
        {
          do
          {
            v19 = *(_QWORD *)(v18 + 8);
            free((void *)v18);
            v18 = v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(v2 + 72) = 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_40CFD0(__int64 (__fastcall *a1)(), unsigned __int64 a2)
{
  __int64 (__fastcall *v2)(); // r12@1
  signed __int64 v3; // rbp@1
  __int64 v4; // rax@1
  __int64 v5; // rdx@1
  __int64 v6; // rbx@1
  signed __int64 v7; // rdi@2
  _QWORD *v8; // rax@6
  __int64 result; // rax@8

  v2 = a1;
  v3 = a2;
  LODWORD(v4) = sub_411210(32LL);
  v6 = v4;
  if ( a2 )
  {
    v7 = 8 * a2;
    if ( a2 & 0x1000000000000000LL || a2 >> 61 != 0 )
      sub_411460(v7, a2, v5);
  }
  else
  {
    v7 = 8LL;
    v3 = 1LL;
  }
  LODWORD(v8) = sub_411210(v7);
  *(_QWORD *)(v6 + 8) = v3;
  *v8 = 0LL;
  *(_QWORD *)v6 = v8;
  if ( !v2 )
    v2 = sub_40CFC0;
  *(_QWORD *)(v6 + 16) = 0LL;
  result = v6;
  *(_QWORD *)(v6 + 24) = v2;
  return result;
}

__int64 __fastcall sub_40D070(unsigned __int64 a1, signed __int64 a2)
{
  signed __int64 v2; // r12@1
  unsigned __int64 v3; // rbp@1
  unsigned __int64 v4; // rdx@1
  unsigned __int64 v5; // rbx@1
  __int64 v6; // rax@1
  unsigned __int64 v7; // rbx@2
  int (__fastcall *v8)(_QWORD, __int64); // r13@2
  __int64 v9; // rbp@2
  __int64 v10; // r15@2
  unsigned __int64 v11; // r14@5
  _QWORD *v12; // r12@5
  int v13; // eax@5
  _QWORD *v14; // rdx@5

  v2 = a2;
  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)a1;
  if ( v4 - 1 <= v5 )
  {
    if ( v6 )
    {
      if ( v4 <= 0xAAAAAAAAAAAAAA9LL )
      {
        v4 += (v4 >> 1) + 1;
        a2 = 8 * v4;
LABEL_11:
        *(_QWORD *)(v3 + 8) = v4;
        LODWORD(v6) = sub_411270(v6, a2);
        v5 = *(_QWORD *)(v3 + 16);
        *(_QWORD *)v3 = v6;
        goto LABEL_2;
      }
    }
    else
    {
      if ( !v4 )
      {
        a2 = 128LL;
        v4 = 16LL;
        goto LABEL_11;
      }
      a1 = v4 >> 61;
      a2 = 8 * v4;
      if ( !(v4 & 0x1000000000000000LL) && v4 >> 61 == 0 )
        goto LABEL_11;
    }
    sub_411460(a1, a2, v4);
  }
LABEL_2:
  v7 = v5 + 1;
  *(_QWORD *)(v3 + 16) = v7;
  *(_QWORD *)(v6 + 8 * v7) = v2;
  v8 = *(int (__fastcall **)(_QWORD, __int64))(v3 + 24);
  v9 = *(_QWORD *)v3;
  v10 = *(_QWORD *)(v9 + 8 * v7);
  if ( v7 == 1 )
  {
LABEL_7:
    v14 = (_QWORD *)(v9 + 8);
  }
  else
  {
    while ( 1 )
    {
      v11 = v7 >> 1;
      v12 = (_QWORD *)(v9 + 8 * (v7 >> 1));
      v13 = v8(*v12, v10);
      v14 = (_QWORD *)(v9 + 8 * v7);
      if ( v13 > 0 )
        break;
      v7 >>= 1;
      *v14 = *v12;
      if ( v11 == 1 )
        goto LABEL_7;
    }
  }
  *v14 = v10;
  return 0LL;
}

__int64 __fastcall sub_40D190(__int64 a1)
{
  __int64 v1; // rax@1
  __int64 v2; // rdx@2
  unsigned __int64 v3; // rbp@2
  __int64 v4; // rax@2
  __int64 v5; // rcx@2
  __int64 v6; // r15@2
  int (__fastcall *v7)(_QWORD, __int64); // r13@2
  signed __int64 v8; // r14@3
  _QWORD *v9; // rbx@4
  int v10; // eax@5
  _QWORD *v11; // rdx@5
  unsigned __int64 v12; // r12@7
  int v13; // eax@8
  __int64 v15; // [sp+8h] [bp-60h]@1
  __int64 v16; // [sp+10h] [bp-58h]@2

  v1 = *(_QWORD *)(a1 + 16);
  v15 = 0LL;
  if ( v1 )
  {
    v2 = *(_QWORD *)a1;
    v3 = v1 - 1;
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v1);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)(v2 + 8) = v4;
    v6 = *(_QWORD *)a1;
    v15 = v5;
    v7 = *(int (__fastcall **)(_QWORD, __int64))(a1 + 24);
    v16 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( v3 >> 1 )
    {
      v8 = 1LL;
      while ( 1 )
      {
        v12 = 2 * v8;
        if ( v3 <= 2 * v8 )
        {
          v9 = (_QWORD *)(v6 + 16 * v8);
        }
        else
        {
          v9 = (_QWORD *)(v6 + 16 * v8);
          v13 = v7(*v9, *(_QWORD *)(v6 + 8 * (v12 + 1)));
          if ( v13 < 0 )
            v9 = (_QWORD *)(v6 + 8 * (v12 + 1));
          if ( v13 < 0 )
            ++v12;
        }
        v10 = v7(*v9, v16);
        v11 = (_QWORD *)(v6 + 8 * v8);
        if ( v10 <= 0 )
          break;
        v8 = v12;
        *v11 = *v9;
        if ( v12 > v3 >> 1 )
        {
          *v9 = v16;
          return v15;
        }
      }
    }
    else
    {
      v11 = (_QWORD *)(v6 + 8);
    }
    *v11 = v16;
  }
  return v15;
}

signed __int64 __fastcall sub_40D2B0(unsigned int a1, __int64 a2)
{
  signed __int64 v2; // rcx@1
  signed __int64 result; // rax@3
  int v4; // eax@5

  v2 = a2 + 11;
  *(_BYTE *)(a2 + 11) = 0;
  if ( (a1 & 0x80000000) != 0 )
  {
    while ( 1 )
    {
      v4 = 10 * ((signed int)a1 / 10) + 48 - a1;
      a1 = (signed int)a1 / 10;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    result = v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xA + 48;
      a1 /= 0xAu;
    }
    while ( a1 );
    result = v2;
  }
  return result;
}

signed __int64 __fastcall sub_40D330(unsigned int a1, __int64 a2)
{
  signed __int64 v2; // rcx@1

  v2 = a2 + 10;
  *(_BYTE *)(a2 + 10) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 % 0xA + 48;
    if ( a1 <= 9 )
      break;
    a1 /= 0xAu;
  }
  return v2;
}

signed __int64 __fastcall sub_40D370(unsigned __int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx@1

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 - 10 * ((unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)a1 >> 64) >> 3) + 48;
    if ( a1 <= 9 )
      break;
    a1 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)a1 >> 64) >> 3;
  }
  return v2;
}

__int64 __fastcall sub_40D3C0(char *s, __int64 a2, char a3)
{
  char v3; // r15@1
  char *v4; // r13@1
  char *v5; // rbx@1
  unsigned int v6; // er12@2
  char v7; // al@8
  __int64 v8; // rax@16
  signed __int64 v9; // rbp@16
  int v10; // eax@20
  int v12; // er15@29
  const unsigned __int16 *v13; // rdx@29
  unsigned __int16 v14; // ax@30
  wchar_t c; // [sp+4h] [bp-44h]@16
  mbstate_t ps; // [sp+8h] [bp-40h]@12

  v3 = a3;
  v4 = &s[a2];
  v5 = s;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v6 = 0;
    if ( s >= v4 )
      return v6;
    v6 = 0;
    v12 = v3 & 2;
    v13 = *__ctype_b_loc();
    while ( 1 )
    {
      v14 = v13[(unsigned __int8)*(++v5 - 1)];
      if ( HIBYTE(v14) & 0x40 )
        goto LABEL_42;
      if ( v12 )
        return (unsigned int)-1;
      if ( !(v14 & 2) )
      {
LABEL_42:
        if ( v6 == 0x7FFFFFFF )
          return v6;
        ++v6;
      }
      if ( v4 == v5 )
        return v6;
    }
  }
  v6 = 0;
  if ( s < v4 )
  {
    do
    {
      v7 = *v5;
      if ( *v5 <= 63 )
      {
        if ( v7 < 37 && (unsigned __int8)(v7 - 32) > 3u )
        {
LABEL_12:
          ps = 0LL;
          while ( 1 )
          {
            v8 = sub_412FB0(&c, v5);
            v9 = v8;
            if ( v8 == -1 )
            {
              if ( !(v3 & 1) )
                goto LABEL_6;
              return (unsigned int)-1;
            }
            if ( v8 == -2 )
              break;
            if ( !v8 )
              v9 = 1LL;
            v10 = wcwidth(c);
            if ( v10 >= 0 )
            {
              if ( (signed int)(0x7FFFFFFF - v6) < v10 )
                return 0x7FFFFFFF;
              v6 += v10;
            }
            else
            {
              if ( v3 & 2 )
                return (unsigned int)-1;
              if ( !iswcntrl(c) )
              {
                if ( v6 == 0x7FFFFFFF )
                  return 0x7FFFFFFF;
                ++v6;
              }
            }
            v5 += v9;
            if ( mbsinit(&ps) )
              goto LABEL_7;
          }
          if ( v3 & 1 )
            return (unsigned int)-1;
          ++v6;
          v5 = &s[a2];
          continue;
        }
      }
      else if ( v7 < 65 || v7 > 95 && (unsigned __int8)(v7 - 97) > 0x1Du )
      {
        goto LABEL_12;
      }
LABEL_6:
      ++v5;
      ++v6;
LABEL_7:
      ;
    }
    while ( v5 < v4 );
  }
  return v6;
}

__int64 sub_40D5B0()
{
  __int64 result; // rax@2
  __int64 v1; // [sp+0h] [bp-88h]@1

  if ( sched_getaffinity(0, 0x80uLL, (cpu_set_t *)&v1)
    || (result = __sched_cpucount(0x80uLL, (const cpu_set_t *)&v1), !(_DWORD)result) )
  {
    result = 0LL;
  }
  return result;
}

unsigned __int64 __fastcall sub_40D600(const char *a1)
{
  unsigned __int64 v1; // rcx@1
  int v2; // eax@2
  signed __int64 v3; // rdx@3
  char v4; // cl@4
  int v5; // edx@7
  unsigned __int64 result; // rax@7
  unsigned __int64 v7; // rcx@9
  signed __int64 v8; // rsi@11
  char *v9; // rdx@12
  char *endptr; // [sp+0h] [bp-10h]@8

  v1 = *a1;
  if ( !(_BYTE)v1 )
    return 0LL;
  v2 = (char)v1;
  if ( (unsigned int)(char)v1 <= 0x20 )
  {
    v3 = 4294983168LL;
    if ( _bittest64(&v3, v1) )
    {
      do
      {
        v4 = *++a1;
        if ( !*a1 )
          return 0LL;
        v2 = v4;
      }
      while ( (unsigned int)v4 <= 0x20 && (1LL << v4) & 0x100003E00LL );
    }
  }
  v5 = v2 - 48;
  result = 0LL;
  if ( (unsigned int)v5 <= 9 )
  {
    endptr = 0LL;
    result = strtoul(a1, &endptr, 10);
    if ( endptr )
    {
      v7 = (unsigned __int8)*endptr;
      if ( !(_BYTE)v7 )
        return result;
      if ( (unsigned int)(char)v7 <= 0x20 )
      {
        v8 = 4294983168LL;
        if ( _bittest64(&v8, v7) )
        {
          v9 = endptr + 1;
          while ( 1 )
          {
            endptr = v9;
            LOBYTE(v7) = *v9;
            if ( !*v9 )
              return result;
            if ( (unsigned int)(char)v7 <= 0x20 )
            {
              ++v9;
              if ( (1LL << v7) & 0x100003E00LL )
                continue;
            }
            break;
          }
        }
      }
      if ( (_BYTE)v7 == 44 )
        return result;
    }
    result = 0LL;
  }
  return result;
}

__int64 __fastcall sub_40D6F0(int a1)
{
  __int64 result; // rax@3
  char *v2; // rax@7
  unsigned __int64 v3; // rbp@8
  unsigned __int64 v4; // rbx@8
  char *v5; // rax@8
  __int64 v6; // rdx@16
  __int64 v7; // rdx@20
  char *v8; // rax@25

  if ( a1 == 2 )
  {
    v2 = getenv("OMP_NUM_THREADS");
    if ( v2 )
    {
      v3 = -1LL;
      v4 = sub_40D600(v2);
      v5 = getenv("OMP_THREAD_LIMIT");
      if ( v5 )
      {
        v3 = sub_40D600(v5);
        if ( !v3 )
          v3 = -1LL;
      }
      if ( v4 )
      {
        result = v4;
        if ( v3 <= v4 )
          result = v3;
        return result;
      }
    }
    else
    {
      v8 = getenv("OMP_THREAD_LIMIT");
      if ( !v8 )
        goto LABEL_27;
      v3 = sub_40D600(v8);
      if ( !v3 )
        goto LABEL_27;
    }
LABEL_12:
    result = sub_40D5B0();
    if ( result )
    {
      if ( result > v3 )
        result = v3;
    }
    else
    {
      v6 = sysconf(84);
      result = 1LL;
      if ( v6 > 0 )
      {
        result = v3;
        if ( v6 <= v3 )
          result = v6;
      }
    }
    return result;
  }
  if ( a1 == 1 )
  {
LABEL_27:
    v3 = -1LL;
    goto LABEL_12;
  }
  result = sysconf(83);
  if ( result == 1 )
  {
    v7 = sub_40D5B0();
    result = 1LL;
    if ( !v7 )
      return result;
    result = v7;
  }
  if ( result <= 0 )
    result = 1LL;
  return result;
}

int sub_40D840()
{
  double v0; // ST08_8@1

  v0 = (double)(signed int)sysconf(85);
  return sysconf(30);
}

int sub_40D900()
{
  double v0; // ST08_8@1

  v0 = (double)(signed int)sysconf(86);
  return sysconf(30);
}

__int64 __fastcall sub_40DA00(int *__attribute__((__org_arrdim(0,2))) pipedes, int a2)
{
  __int64 v2; // r13@1
  unsigned int v3; // er12@2
  int *v5; // rax@11
  int v6; // er12@11
  int *v7; // rbp@11
  int v8; // er12@17

  v2 = *(_QWORD *)pipedes;
  if ( dword_61CBC0 >= 0 )
  {
    v8 = pipe2(pipedes, a2);
    if ( v8 >= 0 || *__errno_location() != 38 )
    {
      dword_61CBC0 = 1;
      return (unsigned int)v8;
    }
    dword_61CBC0 = -1;
  }
  v3 = a2 & 0xFFF7F7FF;
  if ( a2 & 0xFFF7F7FF )
  {
    v3 = -1;
    *__errno_location() = 22;
    return v3;
  }
  if ( pipe(pipedes) < 0 )
    return (unsigned int)-1;
  if ( a2 & 0x800
    && ((signed int)sub_412000(pipedes[1]) < 0
     || (unsigned int)sub_412000(pipedes[1]) == -1
     || (signed int)sub_412000(*pipedes) < 0
     || (unsigned int)sub_412000(*pipedes) == -1) )
  {
    goto LABEL_25;
  }
  if ( !(a2 & 0x80000) )
    return v3;
  if ( (signed int)sub_412000(pipedes[1]) < 0
    || (unsigned int)sub_412000(pipedes[1]) == -1
    || (signed int)sub_412000(*pipedes) < 0
    || (unsigned int)sub_412000(*pipedes) == -1 )
  {
LABEL_25:
    v5 = __errno_location();
    v6 = *v5;
    v7 = v5;
    close(*pipedes);
    close(pipedes[1]);
    *(_QWORD *)pipedes = v2;
    *v7 = v6;
    return (unsigned int)-1;
  }
  return 0LL;
}

__int64 sub_40DBE0()
{
  signed int v0; // ebx@1
  char *v1; // rax@1
  __int64 v3; // rax@4
  signed int v4; // ebx@6
  char *endptr; // [sp+8h] [bp-10h]@4

  v0 = 200809;
  v1 = getenv("_POSIX2_VERSION");
  if ( !v1 )
    return (unsigned int)v0;
  if ( !*v1 )
    return (unsigned int)v0;
  v3 = strtol(v1, &endptr, 10);
  if ( *endptr )
    return (unsigned int)v0;
  if ( v3 < -2147483648 )
    return 2147483648;
  v4 = 0x7FFFFFFF;
  if ( v3 <= 0x7FFFFFFF )
    v4 = v3;
  return (unsigned int)v4;
}

char *__fastcall sub_40DC60(const char *a1)
{
  signed __int64 v1; // rbx@2
  char *result; // rax@2
  signed __int64 v3; // rdx@3
  bool v4; // cf@3
  bool v5; // zf@3
  char *v6; // rsi@4
  const char *v7; // rdi@4
  signed __int64 v8; // rcx@4
  char v9; // dl@7
  bool v10; // cf@7
  bool v11; // zf@7
  const char *v12; // rdi@8
  signed __int64 v13; // rcx@8
  _BYTE *v14; // rsi@8

  if ( !a1 )
  {
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 1uLL, 0x37uLL, stderr);
    abort();
  }
  v1 = (signed __int64)a1;
  result = strrchr(a1, 47);
  if ( result )
  {
    v3 = result + 1 - a1;
    v4 = (unsigned __int64)v3 < 6;
    v5 = v3 == 6;
    if ( v3 > 6 )
    {
      v6 = result - 6;
      v7 = "/.libs/";
      v8 = 7LL;
      do
      {
        if ( !v8 )
          break;
        v4 = (unsigned __int8)*v6 < *v7;
        v5 = *v6++ == *v7++;
        --v8;
      }
      while ( v5 );
      v9 = (!v4 && !v5) - v4;
      v10 = 0;
      v11 = v9 == 0;
      if ( !v9 )
      {
        v12 = "lt-";
        v13 = 3LL;
        v14 = result + 1;
        v1 = (signed __int64)(result + 1);
        do
        {
          if ( !v13 )
            break;
          v10 = *v14 < (const unsigned __int8)*v12;
          v11 = *v14++ == *v12++;
          --v13;
        }
        while ( v11 );
        if ( (!v10 && !v11) == v10 )
        {
          v1 = (signed __int64)(result + 4);
          program_invocation_short_name = (__int64)(result + 4);
        }
      }
    }
  }
  qword_61CBC8 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_40DD00(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  const char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  LODWORD(v4) = sub_413750(0LL);
  if ( (*(_BYTE *)v4 & 0xDF) == 85 )
  {
    if ( (*(_BYTE *)(v4 + 1) & 0xDF) == 84
      && (*(_BYTE *)(v4 + 2) & 0xDF) == 70
      && *(_BYTE *)(v4 + 3) == 45
      && *(_BYTE *)(v4 + 4) == 56
      && !*(_BYTE *)(v4 + 5) )
    {
      v5 = *v2 == 96;
      v2 = "‘";
      if ( !v5 )
        v2 = "’";
      return v2;
    }
  }
  else if ( (*(_BYTE *)v4 & 0xDF) == 71
         && (*(_BYTE *)(v4 + 1) & 0xDF) == 66
         && *(_BYTE *)(v4 + 2) == 49
         && *(_BYTE *)(v4 + 3) == 56
         && *(_BYTE *)(v4 + 4) == 48
         && *(_BYTE *)(v4 + 5) == 51
         && *(_BYTE *)(v4 + 6) == 48
         && !*(_BYTE *)(v4 + 7) )
  {
    v5 = *v2 == 96;
    v2 = "�\ae";
    if ( !v5 )
      v2 = "��";
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "invalid number after ','" + 23;
  return v6;
}

unsigned __int64 __fastcall sub_40DE00(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
{
  _BYTE *v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // er13@1
  int v12; // ebp@1
  unsigned __int64 v13; // rdx@1
  unsigned __int64 v14; // r11@1
  int v15; // er10@2
  unsigned __int64 v16; // rbx@2
  unsigned __int64 v17; // r9@3
  __int64 v18; // r12@3
  int v19; // er11@3
  char *v20; // r8@7
  int v21; // ST60_4@11
  unsigned __int8 v22; // ST58_1@11
  size_t v23; // rax@11
  int v24; // ST68_4@13
  unsigned __int64 v25; // ST60_8@13
  unsigned __int8 v26; // ST58_1@13
  int v27; // eax@13
  unsigned __int64 v28; // rbp@15
  bool v29; // al@17
  int v30; // eax@23
  int v31; // eax@29
  char v32; // di@42
  const unsigned __int16 **v33; // rax@50
  char v34; // cl@65
  unsigned __int64 result; // rax@71
  signed __int64 v36; // rcx@90
  int v37; // ST60_4@99
  unsigned __int64 v38; // ST58_8@99
  unsigned __int8 v39; // ST50_1@99
  unsigned __int64 v40; // rdi@99
  unsigned __int8 v41; // al@122
  unsigned __int8 v42; // al@124
  int v43; // er13@131
  bool v44; // dl@131
  bool v45; // dl@133
  bool v46; // al@136
  int v47; // ST60_4@146
  char v48; // ST58_1@146
  char *v49; // ST50_8@146
  size_t v50; // rax@146
  const unsigned __int16 **v51; // rbx@147
  char *v52; // r15@151
  const unsigned __int16 **v53; // r14@151
  char *v54; // rax@157
  int v55; // esi@173
  unsigned __int64 v56; // rcx@173
  unsigned __int8 v57; // di@173
  const char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  const char *v66; // rax@277
  unsigned __int64 v67; // [sp+8h] [bp-C0h]@1
  char v68; // [sp+8h] [bp-C0h]@2
  unsigned __int8 v69; // [sp+10h] [bp-B8h]@7
  char v70; // [sp+1Fh] [bp-A9h]@2
  char *s; // [sp+20h] [bp-A8h]@1
  unsigned __int64 n; // [sp+28h] [bp-A0h]@2
  char *v73; // [sp+30h] [bp-98h]@13
  unsigned __int64 v74; // [sp+30h] [bp-98h]@147
  int v75; // [sp+38h] [bp-90h]@147
  _BYTE *v76; // [sp+40h] [bp-88h]@147
  unsigned __int64 v77; // [sp+48h] [bp-80h]@147
  const char *s2; // [sp+50h] [bp-78h]@2
  __int64 v79; // [sp+58h] [bp-70h]@2
  size_t v80; // [sp+60h] [bp-68h]@1
  char v81; // [sp+68h] [bp-60h]@1
  bool v82; // [sp+6Ch] [bp-5Ch]@1
  char v83; // [sp+6Dh] [bp-5Bh]@2
  unsigned __int8 v84; // [sp+6Eh] [bp-5Ah]@147
  unsigned __int64 v85; // [sp+70h] [bp-58h]@147
  char *v86; // [sp+78h] [bp-50h]@147
  wint_t wc; // [sp+84h] [bp-44h]@148
  mbstate_t ps; // [sp+88h] [bp-40h]@145

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v67 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v67;
  switch ( v11 )
  {
    case 1:
      goto LABEL_2;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "invalid number after ','" + 23;
        goto LABEL_3;
      }
      v68 = 1;
      goto LABEL_211;
    case 5:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v70 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v70 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_40DD00("`", v11);
        v58 = sub_40DD00("'", v11);
        v14 = v67;
        a9 = (char *)v58;
      }
      v16 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v16] )
        {
          if ( a2 > v16 )
            a1[v16] = i;
          ++v16;
        }
      }
      v59 = v14;
      v60 = strlen(a9);
      v70 = 1;
      v15 = 0;
      v14 = v59;
      n = v60;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v68 = 1;
      goto LABEL_3;
    case 0:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 6:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 3:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "invalid number after ','" + 23;
      goto LABEL_3;
    case 2:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "invalid number after ','" + 23;
      }
      else
      {
        v68 = 0;
LABEL_211:
        if ( a2 )
        {
          v15 = 0;
          v46 = 0;
          v70 = 1;
          v79 = 0LL;
          goto LABEL_138;
        }
        v70 = 1;
        v15 = 0;
        v16 = 1LL;
        v11 = 2;
        v79 = 0LL;
        v83 = 0;
        v82 = 0;
        n = 1LL;
        s2 = "invalid number after ','" + 23;
      }
LABEL_3:
      v17 = v14;
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(v11) = v17 != v18;
        if ( v17 == -1LL )
          LOBYTE(v11) = s[v18] != 0;
        if ( !(_BYTE)v11 )
        {
          v43 = v19;
          v14 = v17;
          v44 = v43 == 2;
          if ( !v16 && v44 && v82 )
            return sub_40DE00((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40DE00((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "invalid number after ','" + 23;
                n = 1LL;
                v82 = 0;
                v83 = v46;
                goto LABEL_3;
              }
              v45 = v83;
            }
          }
          else
          {
            v45 = !v82;
          }
          if ( s2 )
          {
            if ( v45 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v65;
                  v65 = v66[++v16];
                }
                while ( v65 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v69 = v68 & (v19 != 2);
        if ( !((unsigned __int8)v68 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v21 = v19;
            v22 = v15;
            v23 = strlen(s);
            v19 = v21;
            v15 = v22;
            v20 = &s[v18];
            v17 = v23;
          }
          if ( v18 + n <= v17 )
          {
            v24 = v19;
            v25 = v17;
            v26 = v15;
            v73 = v20;
            v27 = memcmp(v20, s2, n);
            v20 = v73;
            v15 = v26;
            v17 = v25;
            v19 = v24;
            if ( !v27 )
            {
              if ( v82 )
                return sub_40DE00((__int64)v9, v10, s);
              LOBYTE(v28) = *v73;
              switch ( *v73 )
              {
                case 123:
                case 125:
                  goto LABEL_17;
                case 63:
                  goto LABEL_58;
                case 39:
                  goto LABEL_62;
                case 92:
                  goto LABEL_65;
                case 10:
                  goto LABEL_68;
                case 9:
                  goto LABEL_72;
                case 33:
                case 34:
                case 36:
                case 38:
                case 40:
                case 41:
                case 42:
                case 59:
                case 60:
                case 61:
                case 62:
                case 91:
                case 94:
                case 96:
                case 124:
                  goto LABEL_74;
                case 13:
                  goto LABEL_76;
                case 12:
                  goto LABEL_77;
                case 11:
                  goto LABEL_80;
                case 0:
                  goto LABEL_83;
                default:
                  goto LABEL_98;
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                  v41 = v69;
                  goto LABEL_123;
                case 35:
                case 126:
                  v42 = v69;
                  goto LABEL_125;
                case 32:
                  v41 = v69;
                  goto LABEL_128;
                case 8:
                  LODWORD(v13) = 0;
                  v11 = 0;
                  LOBYTE(v28) = 98;
                  goto LABEL_29;
                case 7:
                  LOBYTE(v28) = 97;
                  break;
              }
LABEL_79:
              v11 = 0;
              goto LABEL_37;
            }
          }
        }
        LOBYTE(v28) = *v20;
        switch ( *v20 )
        {
          case 123:
          case 125:
            v69 = 0;
            goto LABEL_17;
          case 63:
            v69 = 0;
            goto LABEL_58;
          case 39:
            v69 = 0;
            goto LABEL_62;
          case 92:
            v69 = 0;
            goto LABEL_65;
          case 10:
LABEL_68:
            LOBYTE(v28) = 110;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v28) = 116;
            goto LABEL_69;
          case 33:
          case 34:
          case 36:
          case 38:
          case 40:
          case 41:
          case 42:
          case 59:
          case 60:
          case 61:
          case 62:
          case 91:
          case 94:
          case 96:
          case 124:
            v69 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 13:
            v69 = 0;
LABEL_76:
            LOBYTE(v28) = 13;
            v34 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 12:
LABEL_77:
            LOBYTE(v28) = 102;
            goto LABEL_78;
          case 11:
LABEL_80:
            LOBYTE(v28) = 118;
            goto LABEL_78;
          case 0:
            goto LABEL_81;
          default:
            v69 = 0;
            goto LABEL_98;
          case 37:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 93:
          case 95:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
            v41 = 0;
            goto LABEL_123;
          case 35:
          case 126:
            v42 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v69;
              LODWORD(v13) = 0;
              v69 = v42;
              goto LABEL_23;
            }
            v69 = v42;
            v11 = 0;
            break;
          case 32:
            v41 = 0;
LABEL_128:
            LOBYTE(v28) = 32;
LABEL_123:
            v11 = v69;
            v69 = v41;
            v30 = 0;
            goto LABEL_25;
          case 8:
            LOBYTE(v28) = 98;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40DE00((__int64)v9, v10, s);
        }
LABEL_24:
        v30 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v28 >> 5)) >> v28) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
LABEL_29:
            v31 = v15 ^ 1;
            LOBYTE(v31) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & (unsigned __int8)(v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v31;
            }
LABEL_37:
            if ( v10 > v16 )
              v9[v16] = 92;
            ++v16;
            ++v18;
            goto LABEL_40;
          }
        }
LABEL_49:
        LOBYTE(v13) = v19 == 2;
        if ( v69 )
          goto LABEL_28;
        ++v18;
        LODWORD(v33) = v15 & (v30 ^ 1);
LABEL_51:
        if ( (_BYTE)v33 )
        {
          if ( v10 > v16 )
            v9[v16] = 39;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 39;
          v16 += 2LL;
          v15 = 0;
        }
LABEL_40:
        if ( v16 < v10 )
          v9[v16] = v28;
        v32 = v70;
        ++v16;
        if ( !(_BYTE)v11 )
          v32 = 0;
        v70 = v32;
      }
      LOBYTE(v28) = *v20;
      switch ( *v20 )
      {
        case 123:
        case 125:
LABEL_17:
          v29 = v17 != 1;
          if ( v17 == -1LL )
            v29 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( !v29 )
            goto LABEL_20;
          goto LABEL_67;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
            v11 = 0;
            v30 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v28) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v28 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v28 > 0x3Eu)
            || (v61 = 8070630310989004800LL, !_bittest64(&v61, v28)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40DE00((__int64)v9, v10, s);
          if ( v10 > v16 )
            v9[v16] = 63;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 34;
          if ( v10 > v16 + 2 )
            v9[v16 + 2] = 34;
          if ( v10 > v16 + 3 )
            v9[v16 + 3] = 63;
          v16 += 4LL;
          LODWORD(v13) = 0;
          v11 = 0;
          v18 += 2LL;
          goto LABEL_95;
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v28) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40DE00((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            if ( v10 <= v16 + 2 )
            {
              v13 = v10;
              v10 = v79;
            }
            else
            {
              v13 = v10;
              v9[v16 + 2] = 39;
              v10 = v79;
            }
          }
          v83 = v11;
          v16 += 3LL;
          v30 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v28) = 39;
          v10 = v13;
          goto LABEL_49;
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v37 = v19;
            v38 = v17;
            v39 = v15;
            v33 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v28;
            v15 = v39;
            v17 = v38;
            v19 = v37;
            v40 = 1LL;
            LODWORD(v33) = (*v33)[(unsigned __int8)v28];
            LOWORD(v33) = (unsigned __int16)v33 & 0x4000;
            LOBYTE(v11) = (_WORD)v33 != 0;
            LOBYTE(v13) = v68 & ((_WORD)v33 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v47 = v19;
            v48 = v15;
            v49 = v20;
            v50 = strlen(s);
            v19 = v47;
            LOBYTE(v15) = v48;
            v20 = v49;
            v17 = v50;
          }
          v85 = v16;
          v86 = v20;
          v51 = 0LL;
          v84 = v15;
          v76 = v9;
          v77 = v10;
          v74 = v17;
          v75 = v19;
          break;
        case 37:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 93:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
          goto LABEL_101;
        case 10:
          LOBYTE(v28) = 10;
          v34 = 110;
          goto LABEL_104;
        case 9:
          LOBYTE(v28) = 9;
          v34 = 116;
          goto LABEL_104;
        case 8:
          LOBYTE(v28) = 8;
          v34 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 7:
          LOBYTE(v28) = 7;
          v34 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 0:
          if ( !v68 )
          {
            if ( !(v81 & 1) )
            {
              v69 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v28) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_40DE00((__int64)v9, v10, s);
          v69 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v30 = v15 ^ 1;
          LOBYTE(v30) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v30 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v36 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v30;
              v11 = 0;
              LOBYTE(v28) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v36 = v16;
          if ( v10 > v16 )
          {
            v30 = v15;
LABEL_91:
            v9[v36] = 92;
            v15 = v30;
          }
          v16 = v36 + 1;
          if ( v19 == 2 )
          {
            v30 = v11;
            LOBYTE(v28) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v28) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v36 + 2 )
              v9[v36 + 2] = 48;
            v16 = v36 + 3;
            LOBYTE(v28) = 48;
          }
LABEL_95:
          v30 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | (unsigned __int8)(v68 ^ 1) )
            goto LABEL_49;
          goto LABEL_25;
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            LOBYTE(v28) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = (unsigned __int8)v68;
          LOBYTE(v28) = 92;
          v34 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v68;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v68 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v28) = v34;
          v11 = 0;
          goto LABEL_28;
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
LABEL_20:
          if ( !v18 )
            goto LABEL_21;
          goto LABEL_67;
        case 33:
        case 34:
        case 36:
        case 38:
        case 40:
        case 41:
        case 42:
        case 59:
        case 60:
        case 61:
        case 62:
        case 91:
        case 94:
        case 96:
        case 124:
          LOBYTE(v13) = v19 == 2;
          v11 = 0;
          goto LABEL_21;
        case 32:
          LOBYTE(v28) = 32;
          LOBYTE(v13) = v19 == 2;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_40DE00((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40DE00((__int64)v9, v10, s);
          goto LABEL_66;
        case 12:
          LOBYTE(v28) = 12;
          v34 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 11:
          LOBYTE(v28) = 11;
          v34 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
      }
      while ( 2 )
      {
        v52 = (char *)v51 + v18;
        v33 = (const unsigned __int16 **)sub_412FB0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
        v53 = v33;
        if ( !v33 )
        {
LABEL_240:
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v15 = v84;
          v9 = v76;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LOBYTE(v13) = v68 & (v11 ^ 1);
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-1 )
        {
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v76;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LODWORD(v13) = (unsigned __int8)v68;
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-2 )
        {
          v17 = v74;
          v62 = (char *)v51 + v18;
          v63 = (char *)v51 + v18 + (_QWORD)s;
          v33 = v51;
          v40 = (unsigned __int64)v51;
          v15 = v84;
          v16 = v85;
          v9 = v76;
          v10 = v77;
          v19 = v75;
          if ( (unsigned __int64)v62 < v74 && *v63 )
          {
            do
              v33 = (const unsigned __int16 **)((char *)v33 + 1);
            while ( (unsigned __int64)v33 + v18 < v74 && *((_BYTE *)v33 + (_QWORD)v86) );
            v40 = (unsigned __int64)v33;
          }
          LODWORD(v13) = (unsigned __int8)v68;
          v11 = 0;
LABEL_241:
          if ( v40 > 1 )
            goto LABEL_173;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = (unsigned __int8)v68;
            LOBYTE(v11) = 0;
LABEL_173:
            v55 = 0;
            v56 = v18 + v40;
            v57 = v69;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_40DE00((__int64)v9, v10, s);
                LOBYTE(v33) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (signed int)v33;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v28 >> 6) + 48;
                LODWORD(v33) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v33) = (((unsigned __int8)v28 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v33;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v28) = (v28 & 7) + 48;
                if ( v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v55 = v13;
              }
              else
              {
                LODWORD(v33) = v15 & (v55 ^ 1);
                if ( v57 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v33) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v57 = 0;
                  v15 = 0;
                }
                else
                {
                  v57 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v28;
              LOBYTE(v28) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v30 = (v13 | (unsigned __int8)v68 ^ 1) ^ 1;
          LOBYTE(v30) = v82 | (v13 | v68 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)((v13 | v68 ^ 1) ^ 1)) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v75 != 2 || !v82 || v33 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v51 = (const unsigned __int16 **)((char *)v51 + (_QWORD)v53);
          LODWORD(v33) = mbsinit(&ps);
          if ( (_DWORD)v33 )
            goto LABEL_240;
          continue;
        }
        break;
      }
      v54 = &v52[(_QWORD)s + 1];
      while ( (unsigned __int8)(*v54 - 91) > 0x21u || !((1LL << (*v54 - 91)) & 0x20000002BLL) )
      {
        if ( &v52[(unsigned int)&s[(_QWORD)v53]] == ++v54 )
          goto LABEL_148;
      }
      v9 = v76;
      v10 = v77;
      return sub_40DE00((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_40DE00(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, const char *a8, char *a9)
{
  _BYTE *v9; // r15@1
  unsigned __int64 v10; // r14@1
  int v11; // er13@1
  int v12; // ebp@1
  unsigned __int64 v13; // rdx@1
  unsigned __int64 v14; // r11@1
  int v15; // er10@2
  unsigned __int64 v16; // rbx@2
  unsigned __int64 v17; // r9@3
  __int64 v18; // r12@3
  int v19; // er11@3
  char *v20; // r8@7
  int v21; // ST60_4@11
  unsigned __int8 v22; // ST58_1@11
  size_t v23; // rax@11
  int v24; // ST68_4@13
  unsigned __int64 v25; // ST60_8@13
  unsigned __int8 v26; // ST58_1@13
  int v27; // eax@13
  unsigned __int64 v28; // rbp@15
  bool v29; // al@17
  int v30; // eax@23
  int v31; // eax@29
  char v32; // di@42
  const unsigned __int16 **v33; // rax@50
  char v34; // cl@65
  unsigned __int64 result; // rax@71
  signed __int64 v36; // rcx@90
  int v37; // ST60_4@99
  unsigned __int64 v38; // ST58_8@99
  unsigned __int8 v39; // ST50_1@99
  unsigned __int64 v40; // rdi@99
  unsigned __int8 v41; // al@122
  unsigned __int8 v42; // al@124
  int v43; // er13@131
  bool v44; // dl@131
  bool v45; // dl@133
  bool v46; // al@136
  int v47; // ST60_4@146
  char v48; // ST58_1@146
  char *v49; // ST50_8@146
  size_t v50; // rax@146
  const unsigned __int16 **v51; // rbx@147
  char *v52; // r15@151
  const unsigned __int16 **v53; // r14@151
  char *v54; // rax@157
  int v55; // esi@173
  unsigned __int64 v56; // rcx@173
  unsigned __int8 v57; // di@173
  const char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  const char *v66; // rax@277
  unsigned __int64 v67; // [sp+8h] [bp-C0h]@1
  char v68; // [sp+8h] [bp-C0h]@2
  unsigned __int8 v69; // [sp+10h] [bp-B8h]@7
  char v70; // [sp+1Fh] [bp-A9h]@2
  char *s; // [sp+20h] [bp-A8h]@1
  unsigned __int64 n; // [sp+28h] [bp-A0h]@2
  char *v73; // [sp+30h] [bp-98h]@13
  unsigned __int64 v74; // [sp+30h] [bp-98h]@147
  int v75; // [sp+38h] [bp-90h]@147
  _BYTE *v76; // [sp+40h] [bp-88h]@147
  unsigned __int64 v77; // [sp+48h] [bp-80h]@147
  const char *s2; // [sp+50h] [bp-78h]@2
  __int64 v79; // [sp+58h] [bp-70h]@2
  size_t v80; // [sp+60h] [bp-68h]@1
  char v81; // [sp+68h] [bp-60h]@1
  bool v82; // [sp+6Ch] [bp-5Ch]@1
  char v83; // [sp+6Dh] [bp-5Bh]@2
  unsigned __int8 v84; // [sp+6Eh] [bp-5Ah]@147
  unsigned __int64 v85; // [sp+70h] [bp-58h]@147
  char *v86; // [sp+78h] [bp-50h]@147
  wint_t wc; // [sp+84h] [bp-44h]@148
  mbstate_t ps; // [sp+88h] [bp-40h]@145

  v9 = a1;
  v10 = a2;
  v11 = a5;
  s = a3;
  v67 = a4;
  v81 = a6;
  v12 = a6 & 2;
  v80 = __ctype_get_mb_cur_max();
  v82 = v12 != 0;
  v14 = v67;
  switch ( v11 )
  {
    case 1:
      goto LABEL_2;
    case 4:
      if ( v12 )
      {
LABEL_2:
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v11 = 2;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "invalid number after ','" + 23;
        goto LABEL_3;
      }
      v68 = 1;
      goto LABEL_211;
    case 5:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      else
      {
        if ( a2 )
        {
          *a1 = 34;
          v15 = 0;
          v70 = 1;
          v83 = 0;
          v79 = 0LL;
        }
        else
        {
          v79 = 0LL;
          v15 = 0;
          v70 = 1;
          v83 = 0;
        }
        v82 = 0;
        v16 = 1LL;
        v68 = 1;
        n = 1LL;
        s2 = "\"";
      }
      goto LABEL_3;
    case 8:
    case 9:
    case 10:
      if ( v12 )
      {
        a8 = sub_40DD00("`", v11);
        v58 = sub_40DD00("'", v11);
        v14 = v67;
        a9 = (char *)v58;
      }
      v16 = 0LL;
      if ( !v12 )
      {
        for ( i = *a8; i; i = a8[v16] )
        {
          if ( a2 > v16 )
            a1[v16] = i;
          ++v16;
        }
      }
      v59 = v14;
      v60 = strlen(a9);
      v70 = 1;
      v15 = 0;
      v14 = v59;
      n = v60;
      v83 = 0;
      s2 = a9;
      v79 = 0LL;
      v68 = 1;
      goto LABEL_3;
    case 0:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 0;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 6:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 5;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "\"";
      goto LABEL_3;
    case 7:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v83 = 0;
      v79 = 0LL;
      v82 = 0;
      v68 = 1;
      n = 0LL;
      s2 = 0LL;
      goto LABEL_3;
    case 3:
      v70 = 1;
      v15 = 0;
      v16 = 0LL;
      v11 = 2;
      v83 = 0;
      v79 = 0LL;
      v82 = 1;
      v68 = 1;
      n = 1LL;
      s2 = "invalid number after ','" + 23;
      goto LABEL_3;
    case 2:
      if ( v12 )
      {
        v70 = 1;
        v15 = 0;
        v16 = 0LL;
        v83 = 0;
        v79 = 0LL;
        v82 = 1;
        v68 = 0;
        n = 1LL;
        s2 = "invalid number after ','" + 23;
      }
      else
      {
        v68 = 0;
LABEL_211:
        if ( a2 )
        {
          v15 = 0;
          v46 = 0;
          v70 = 1;
          v79 = 0LL;
          goto LABEL_138;
        }
        v70 = 1;
        v15 = 0;
        v16 = 1LL;
        v11 = 2;
        v79 = 0LL;
        v83 = 0;
        v82 = 0;
        n = 1LL;
        s2 = "invalid number after ','" + 23;
      }
LABEL_3:
      v17 = v14;
      v18 = 0LL;
      v19 = v11;
      while ( 1 )
      {
LABEL_4:
        LOBYTE(v11) = v17 != v18;
        if ( v17 == -1LL )
          LOBYTE(v11) = s[v18] != 0;
        if ( !(_BYTE)v11 )
        {
          v43 = v19;
          v14 = v17;
          v44 = v43 == 2;
          if ( !v16 && v44 && v82 )
            return sub_40DE00((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_40DE00((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "invalid number after ','" + 23;
                n = 1LL;
                v82 = 0;
                v83 = v46;
                goto LABEL_3;
              }
              v45 = v83;
            }
          }
          else
          {
            v45 = !v82;
          }
          if ( s2 )
          {
            if ( v45 )
            {
              v65 = *s2;
              if ( *s2 )
              {
                v66 = &s2[-v16];
                do
                {
                  if ( v10 > v16 )
                    v9[v16] = v65;
                  v65 = v66[++v16];
                }
                while ( v65 );
              }
            }
          }
          if ( v10 > v16 )
            v9[v16] = 0;
          return v16;
        }
        v20 = &s[v18];
        v69 = v68 & (v19 != 2);
        if ( !((unsigned __int8)v68 & (v19 != 2)) )
          break;
        if ( n )
        {
          if ( v17 == -1LL && n > 1 )
          {
            v21 = v19;
            v22 = v15;
            v23 = strlen(s);
            v19 = v21;
            v15 = v22;
            v20 = &s[v18];
            v17 = v23;
          }
          if ( v18 + n <= v17 )
          {
            v24 = v19;
            v25 = v17;
            v26 = v15;
            v73 = v20;
            v27 = memcmp(v20, s2, n);
            v20 = v73;
            v15 = v26;
            v17 = v25;
            v19 = v24;
            if ( !v27 )
            {
              if ( v82 )
                return sub_40DE00((__int64)v9, v10, s);
              LOBYTE(v28) = *v73;
              switch ( *v73 )
              {
                case 123:
                case 125:
                  goto LABEL_17;
                case 63:
                  goto LABEL_58;
                case 39:
                  goto LABEL_62;
                case 92:
                  goto LABEL_65;
                case 10:
                  goto LABEL_68;
                case 9:
                  goto LABEL_72;
                case 33:
                case 34:
                case 36:
                case 38:
                case 40:
                case 41:
                case 42:
                case 59:
                case 60:
                case 61:
                case 62:
                case 91:
                case 94:
                case 96:
                case 124:
                  goto LABEL_74;
                case 13:
                  goto LABEL_76;
                case 12:
                  goto LABEL_77;
                case 11:
                  goto LABEL_80;
                case 0:
                  goto LABEL_83;
                default:
                  goto LABEL_98;
                case 37:
                case 43:
                case 44:
                case 45:
                case 46:
                case 47:
                case 48:
                case 49:
                case 50:
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                case 56:
                case 57:
                case 58:
                case 65:
                case 66:
                case 67:
                case 68:
                case 69:
                case 70:
                case 71:
                case 72:
                case 73:
                case 74:
                case 75:
                case 76:
                case 77:
                case 78:
                case 79:
                case 80:
                case 81:
                case 82:
                case 83:
                case 84:
                case 85:
                case 86:
                case 87:
                case 88:
                case 89:
                case 90:
                case 93:
                case 95:
                case 97:
                case 98:
                case 99:
                case 100:
                case 101:
                case 102:
                case 103:
                case 104:
                case 105:
                case 106:
                case 107:
                case 108:
                case 109:
                case 110:
                case 111:
                case 112:
                case 113:
                case 114:
                case 115:
                case 116:
                case 117:
                case 118:
                case 119:
                case 120:
                case 121:
                case 122:
                  v41 = v69;
                  goto LABEL_123;
                case 35:
                case 126:
                  v42 = v69;
                  goto LABEL_125;
                case 32:
                  v41 = v69;
                  goto LABEL_128;
                case 8:
                  LODWORD(v13) = 0;
                  v11 = 0;
                  LOBYTE(v28) = 98;
                  goto LABEL_29;
                case 7:
                  LOBYTE(v28) = 97;
                  break;
              }
LABEL_79:
              v11 = 0;
              goto LABEL_37;
            }
          }
        }
        LOBYTE(v28) = *v20;
        switch ( *v20 )
        {
          case 123:
          case 125:
            v69 = 0;
            goto LABEL_17;
          case 63:
            v69 = 0;
            goto LABEL_58;
          case 39:
            v69 = 0;
            goto LABEL_62;
          case 92:
            v69 = 0;
            goto LABEL_65;
          case 10:
LABEL_68:
            LOBYTE(v28) = 110;
            goto LABEL_69;
          case 9:
LABEL_72:
            LOBYTE(v28) = 116;
            goto LABEL_69;
          case 33:
          case 34:
          case 36:
          case 38:
          case 40:
          case 41:
          case 42:
          case 59:
          case 60:
          case 61:
          case 62:
          case 91:
          case 94:
          case 96:
          case 124:
            v69 = 0;
LABEL_74:
            LODWORD(v13) = 0;
            goto LABEL_67;
          case 13:
            v69 = 0;
LABEL_76:
            LOBYTE(v28) = 13;
            v34 = 114;
            LOBYTE(v13) = v19 == 2;
            goto LABEL_66;
          case 12:
LABEL_77:
            LOBYTE(v28) = 102;
            goto LABEL_78;
          case 11:
LABEL_80:
            LOBYTE(v28) = 118;
            goto LABEL_78;
          case 0:
            goto LABEL_81;
          default:
            v69 = 0;
            goto LABEL_98;
          case 37:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 93:
          case 95:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
            v41 = 0;
            goto LABEL_123;
          case 35:
          case 126:
            v42 = 0;
LABEL_125:
            if ( !v18 )
            {
              v11 = v69;
              LODWORD(v13) = 0;
              v69 = v42;
              goto LABEL_23;
            }
            v69 = v42;
            v11 = 0;
            break;
          case 32:
            v41 = 0;
LABEL_128:
            LOBYTE(v28) = 32;
LABEL_123:
            v11 = v69;
            v69 = v41;
            v30 = 0;
            goto LABEL_25;
          case 8:
            LOBYTE(v28) = 98;
LABEL_69:
            LODWORD(v13) = 0;
            v11 = 0;
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_40DE00((__int64)v9, v10, s);
        }
LABEL_24:
        v30 = 0;
LABEL_25:
        if ( a7 )
        {
          LODWORD(v13) = (*(_DWORD *)(a7 + 4LL * ((unsigned __int8)v28 >> 5)) >> v28) & 1;
          if ( (_DWORD)v13 )
          {
            LOBYTE(v13) = v19 == 2;
LABEL_28:
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
LABEL_29:
            v31 = v15 ^ 1;
            LOBYTE(v31) = v13 & (v15 ^ 1);
            if ( (unsigned __int8)v13 & (unsigned __int8)(v15 ^ 1) )
            {
              if ( v10 > v16 )
                v9[v16] = 39;
              if ( v16 + 1 < v10 )
                v9[v16 + 1] = 36;
              LODWORD(v13) = v16 + 2;
              if ( v16 + 2 < v10 )
                v9[v16 + 2] = 39;
              v16 += 3LL;
              v15 = v31;
            }
LABEL_37:
            if ( v10 > v16 )
              v9[v16] = 92;
            ++v16;
            ++v18;
            goto LABEL_40;
          }
        }
LABEL_49:
        LOBYTE(v13) = v19 == 2;
        if ( v69 )
          goto LABEL_28;
        ++v18;
        LODWORD(v33) = v15 & (v30 ^ 1);
LABEL_51:
        if ( (_BYTE)v33 )
        {
          if ( v10 > v16 )
            v9[v16] = 39;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 39;
          v16 += 2LL;
          v15 = 0;
        }
LABEL_40:
        if ( v16 < v10 )
          v9[v16] = v28;
        v32 = v70;
        ++v16;
        if ( !(_BYTE)v11 )
          v32 = 0;
        v70 = v32;
      }
      LOBYTE(v28) = *v20;
      switch ( *v20 )
      {
        case 123:
        case 125:
LABEL_17:
          v29 = v17 != 1;
          if ( v17 == -1LL )
            v29 = s[1] != 0;
          LOBYTE(v13) = v19 == 2;
          if ( !v29 )
            goto LABEL_20;
          goto LABEL_67;
        case 63:
LABEL_58:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
            v11 = 0;
            v30 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_49;
          }
          if ( v19 != 5 )
          {
            LOBYTE(v28) = 63;
            LOBYTE(v13) = v19 == 2;
            v11 = 0;
            goto LABEL_23;
          }
          if ( !(v81 & 4)
            || v18 + 2 >= v17
            || s[v18 + 1] != 63
            || (v28 = (unsigned __int8)s[v18 + 2], (unsigned __int8)v28 > 0x3Eu)
            || (v61 = 8070630310989004800LL, !_bittest64(&v61, v28)) )
          {
            LODWORD(v13) = 0;
            v11 = 0;
            LOBYTE(v28) = 63;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40DE00((__int64)v9, v10, s);
          if ( v10 > v16 )
            v9[v16] = 63;
          if ( v10 > v16 + 1 )
            v9[v16 + 1] = 34;
          if ( v10 > v16 + 2 )
            v9[v16 + 2] = 34;
          if ( v10 > v16 + 3 )
            v9[v16 + 3] = 63;
          v16 += 4LL;
          LODWORD(v13) = 0;
          v11 = 0;
          v18 += 2LL;
          goto LABEL_95;
        case 39:
LABEL_62:
          if ( v19 != 2 )
          {
            v83 = v11;
            LODWORD(v13) = 0;
            LOBYTE(v28) = 39;
            goto LABEL_23;
          }
          if ( v82 )
            return sub_40DE00((__int64)v9, v10, s);
          if ( !v10 || (v13 = 0LL, v79) )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 92;
            if ( v10 <= v16 + 2 )
            {
              v13 = v10;
              v10 = v79;
            }
            else
            {
              v13 = v10;
              v9[v16 + 2] = 39;
              v10 = v79;
            }
          }
          v83 = v11;
          v16 += 3LL;
          v30 = 0;
          v15 = 0;
          v79 = v10;
          LOBYTE(v28) = 39;
          v10 = v13;
          goto LABEL_49;
        default:
LABEL_98:
          if ( v80 == 1 )
          {
            v37 = v19;
            v38 = v17;
            v39 = v15;
            v33 = __ctype_b_loc();
            LODWORD(v13) = (unsigned __int8)v28;
            v15 = v39;
            v17 = v38;
            v19 = v37;
            v40 = 1LL;
            LODWORD(v33) = (*v33)[(unsigned __int8)v28];
            LOWORD(v33) = (unsigned __int16)v33 & 0x4000;
            LOBYTE(v11) = (_WORD)v33 != 0;
            LOBYTE(v13) = v68 & ((_WORD)v33 == 0);
            goto LABEL_100;
          }
          ps = 0LL;
          if ( v17 == -1LL )
          {
            v47 = v19;
            v48 = v15;
            v49 = v20;
            v50 = strlen(s);
            v19 = v47;
            LOBYTE(v15) = v48;
            v20 = v49;
            v17 = v50;
          }
          v85 = v16;
          v86 = v20;
          v51 = 0LL;
          v84 = v15;
          v76 = v9;
          v77 = v10;
          v74 = v17;
          v75 = v19;
          break;
        case 37:
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 93:
        case 95:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
          goto LABEL_101;
        case 10:
          LOBYTE(v28) = 10;
          v34 = 110;
          goto LABEL_104;
        case 9:
          LOBYTE(v28) = 9;
          v34 = 116;
          goto LABEL_104;
        case 8:
          LOBYTE(v28) = 8;
          v34 = 98;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 7:
          LOBYTE(v28) = 7;
          v34 = 97;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 0:
          if ( !v68 )
          {
            if ( !(v81 & 1) )
            {
              v69 = 0;
              LOBYTE(v13) = v19 == 2;
              v11 = 0;
              LOBYTE(v28) = 0;
              goto LABEL_23;
            }
            ++v18;
            goto LABEL_4;
          }
LABEL_81:
          if ( v82 )
            return sub_40DE00((__int64)v9, v10, s);
          v69 = 0;
LABEL_83:
          LOBYTE(v13) = v19 == 2;
          v30 = v15 ^ 1;
          LOBYTE(v30) = (v19 == 2) & (v15 ^ 1);
          if ( (_BYTE)v30 )
          {
            if ( v10 > v16 )
              v9[v16] = 39;
            if ( v10 > v16 + 1 )
              v9[v16 + 1] = 36;
            if ( v10 > v16 + 2 )
              v9[v16 + 2] = 39;
            v36 = v16 + 3;
            if ( v10 <= v16 + 3 )
            {
              v16 += 4LL;
              v15 = v30;
              v11 = 0;
              LOBYTE(v28) = 48;
              goto LABEL_49;
            }
            goto LABEL_91;
          }
          v36 = v16;
          if ( v10 > v16 )
          {
            v30 = v15;
LABEL_91:
            v9[v36] = 92;
            v15 = v30;
          }
          v16 = v36 + 1;
          if ( v19 == 2 )
          {
            v30 = v11;
            LOBYTE(v28) = 48;
            v11 = 0;
            goto LABEL_49;
          }
          LOBYTE(v28) = 48;
          if ( v18 + 1 < v17 && (unsigned __int8)(s[v18 + 1] - 48) <= 9u )
          {
            if ( v10 > v16 )
              v9[v16] = 48;
            if ( v10 > v36 + 2 )
              v9[v36 + 2] = 48;
            v16 = v36 + 3;
            LOBYTE(v28) = 48;
          }
LABEL_95:
          v30 = v11;
          v11 = 0;
          if ( (unsigned __int8)v13 | (unsigned __int8)(v68 ^ 1) )
            goto LABEL_49;
          goto LABEL_25;
        case 92:
          if ( v19 == 2 )
          {
            if ( v82 )
              return sub_40DE00((__int64)v9, v10, s);
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            LOBYTE(v28) = 92;
            goto LABEL_51;
          }
LABEL_65:
          LODWORD(v13) = (unsigned __int8)v68;
          LOBYTE(v28) = 92;
          v34 = 92;
          LOBYTE(v13) = (n != 0) & v82 & v68;
          if ( (_BYTE)v13 )
          {
            ++v18;
            LOBYTE(v33) = v15;
            v11 = 0;
            goto LABEL_51;
          }
LABEL_66:
          if ( !v68 )
          {
LABEL_67:
            v11 = 0;
            goto LABEL_23;
          }
          LOBYTE(v28) = v34;
          v11 = 0;
          goto LABEL_28;
        case 35:
        case 126:
          LOBYTE(v13) = v19 == 2;
LABEL_20:
          if ( !v18 )
            goto LABEL_21;
          goto LABEL_67;
        case 33:
        case 34:
        case 36:
        case 38:
        case 40:
        case 41:
        case 42:
        case 59:
        case 60:
        case 61:
        case 62:
        case 91:
        case 94:
        case 96:
        case 124:
          LOBYTE(v13) = v19 == 2;
          v11 = 0;
          goto LABEL_21;
        case 32:
          LOBYTE(v28) = 32;
          LOBYTE(v13) = v19 == 2;
LABEL_21:
          if ( !v82 || !(_BYTE)v13 )
            goto LABEL_23;
          return sub_40DE00((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_40DE00((__int64)v9, v10, s);
          goto LABEL_66;
        case 12:
          LOBYTE(v28) = 12;
          v34 = 102;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
        case 11:
          LOBYTE(v28) = 11;
          v34 = 118;
          LOBYTE(v13) = v19 == 2;
          goto LABEL_66;
      }
      while ( 2 )
      {
        v52 = (char *)v51 + v18;
        v33 = (const unsigned __int16 **)sub_412FB0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
        v53 = v33;
        if ( !v33 )
        {
LABEL_240:
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v15 = v84;
          v9 = v76;
          LODWORD(v13) = v11 ^ 1;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LOBYTE(v13) = v68 & (v11 ^ 1);
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-1 )
        {
          v40 = (unsigned __int64)v51;
          v16 = v85;
          v11 = 0;
          v15 = v84;
          v9 = v76;
          v10 = v77;
          v17 = v74;
          v19 = v75;
          LODWORD(v13) = (unsigned __int8)v68;
          goto LABEL_241;
        }
        if ( v33 == (const unsigned __int16 **)-2 )
        {
          v17 = v74;
          v62 = (char *)v51 + v18;
          v63 = (char *)v51 + v18 + (_QWORD)s;
          v33 = v51;
          v40 = (unsigned __int64)v51;
          v15 = v84;
          v16 = v85;
          v9 = v76;
          v10 = v77;
          v19 = v75;
          if ( (unsigned __int64)v62 < v74 && *v63 )
          {
            do
              v33 = (const unsigned __int16 **)((char *)v33 + 1);
            while ( (unsigned __int64)v33 + v18 < v74 && *((_BYTE *)v33 + (_QWORD)v86) );
            v40 = (unsigned __int64)v33;
          }
          LODWORD(v13) = (unsigned __int8)v68;
          v11 = 0;
LABEL_241:
          if ( v40 > 1 )
            goto LABEL_173;
LABEL_100:
          if ( (_BYTE)v13 )
          {
            LODWORD(v13) = (unsigned __int8)v68;
            LOBYTE(v11) = 0;
LABEL_173:
            v55 = 0;
            v56 = v18 + v40;
            v57 = v69;
            while ( 1 )
            {
              if ( (_BYTE)v13 )
              {
                if ( v82 )
                  return sub_40DE00((__int64)v9, v10, s);
                LOBYTE(v33) = (v15 ^ 1) & (v19 == 2);
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 36;
                  if ( v10 > v16 + 2 )
                    v9[v16 + 2] = 39;
                  v16 += 3LL;
                  v15 = (signed int)v33;
                }
                if ( v10 > v16 )
                  v9[v16] = 92;
                if ( v10 > v16 + 1 )
                  v9[v16 + 1] = ((unsigned __int8)v28 >> 6) + 48;
                LODWORD(v33) = v16 + 2;
                if ( v10 > v16 + 2 )
                {
                  LODWORD(v33) = (((unsigned __int8)v28 >> 3) & 7) + 48;
                  v9[v16 + 2] = (_BYTE)v33;
                }
                ++v18;
                v16 += 3LL;
                LOBYTE(v28) = (v28 & 7) + 48;
                if ( v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_40;
                }
                v55 = v13;
              }
              else
              {
                LODWORD(v33) = v15 & (v55 ^ 1);
                if ( v57 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 92;
                  ++v16;
                }
                if ( ++v18 >= v56 )
                {
                  v11 = (unsigned __int8)v11;
                  goto LABEL_51;
                }
                if ( (_BYTE)v33 )
                {
                  if ( v10 > v16 )
                    v9[v16] = 39;
                  LODWORD(v33) = v16 + 1;
                  if ( v10 > v16 + 1 )
                    v9[v16 + 1] = 39;
                  v16 += 2LL;
                  v57 = 0;
                  v15 = 0;
                }
                else
                {
                  v57 = 0;
                }
              }
              if ( v10 > v16 )
                v9[v16] = v28;
              LOBYTE(v28) = s[v18];
              ++v16;
            }
          }
LABEL_101:
          LOBYTE(v13) = v19 == 2;
LABEL_23:
          v30 = (v13 | (unsigned __int8)v68 ^ 1) ^ 1;
          LOBYTE(v30) = v82 | (v13 | v68 ^ 1) ^ 1;
          if ( !(v82 | (unsigned __int8)((v13 | v68 ^ 1) ^ 1)) )
            goto LABEL_49;
          goto LABEL_24;
        }
        if ( v75 != 2 || !v82 || v33 == (const unsigned __int16 **)1 )
        {
LABEL_148:
          if ( !iswprint(wc) )
            v11 = 0;
          v51 = (const unsigned __int16 **)((char *)v51 + (_QWORD)v53);
          LODWORD(v33) = mbsinit(&ps);
          if ( (_DWORD)v33 )
            goto LABEL_240;
          continue;
        }
        break;
      }
      v54 = &v52[(_QWORD)s + 1];
      while ( (unsigned __int8)(*v54 - 91) > 0x21u || !((1LL << (*v54 - 91)) & 0x20000002BLL) )
      {
        if ( &v52[(unsigned int)&s[(_QWORD)v53]] == ++v54 )
          goto LABEL_148;
      }
      v9 = v76;
      v10 = v77;
      return sub_40DE00((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_40F030(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int64 v7; // rdx@1
  __int128 *v8; // rbx@1
  int *v9; // r13@1
  signed __int64 v10; // rsi@4
  __int128 *v11; // rax@5
  signed __int64 v12; // rbx@7
  _BYTE *v13; // r12@7
  unsigned __int64 v14; // ST30_8@7
  unsigned __int64 v15; // rax@7
  unsigned __int64 v16; // rsi@8
  __int64 v17; // ST30_8@9
  _BYTE *v18; // rax@10
  int v19; // er8@10
  __int128 *v21; // rax@12
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v8 = off_61C558;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61C570 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411460(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_61C558 == &xmmword_61C560 )
    {
      LODWORD(v21) = sub_411270(0LL, v10);
      v8 = v21;
      off_61C558 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61C560);
    }
    else
    {
      LODWORD(v11) = sub_411270(off_61C558, v10);
      off_61C558 = v11;
      v8 = v11;
    }
    memset(&v8[dword_61C570], 0, 16LL * ((signed int)a1 + 1 - dword_61C570));
    dword_61C570 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_40DE00(
          v13,
          *(_QWORD *)v12,
          v22,
          v4,
          *(_DWORD *)v5,
          v24,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_61CBE0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_411210(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_40DE00(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_40F030(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int64 v7; // rdx@1
  __int128 *v8; // rbx@1
  int *v9; // r13@1
  signed __int64 v10; // rsi@4
  __int128 *v11; // rax@5
  signed __int64 v12; // rbx@7
  _BYTE *v13; // r12@7
  unsigned __int64 v14; // ST30_8@7
  unsigned __int64 v15; // rax@7
  unsigned __int64 v16; // rsi@8
  __int64 v17; // ST30_8@9
  _BYTE *v18; // rax@10
  int v19; // er8@10
  __int128 *v21; // rax@12
  char *v22; // [sp+8h] [bp-50h]@1
  int v23; // [sp+18h] [bp-40h]@1
  int v24; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v22 = a2;
  v6 = __errno_location();
  v8 = off_61C558;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_61C570 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411460(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_61C558 == &xmmword_61C560 )
    {
      LODWORD(v21) = sub_411270(0LL, v10);
      v8 = v21;
      off_61C558 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_61C560);
    }
    else
    {
      LODWORD(v11) = sub_411270(off_61C558, v10);
      off_61C558 = v11;
      v8 = v11;
    }
    memset(&v8[dword_61C570], 0, 16LL * ((signed int)a1 + 1 - dword_61C570));
    dword_61C570 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_40DE00(
          v13,
          *(_QWORD *)v12,
          v22,
          v4,
          *(_DWORD *)v5,
          v24,
          v5 + 8,
          *(const char **)(v5 + 40),
          *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_61CBE0 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_411210(v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_40DE00(v18, v16, v22, v4, v19, v24, v5 + 8, *(const char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_40F550(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40F550(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40F5C0(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [sp+0h] [bp-48h]@2
  int v6; // [sp+4h] [bp-44h]@2
  __int64 v7; // [sp+8h] [bp-40h]@2
  __int64 v8; // [sp+10h] [bp-38h]@2
  __int64 v9; // [sp+18h] [bp-30h]@2
  __int64 v10; // [sp+20h] [bp-28h]@2
  __int64 v11; // [sp+28h] [bp-20h]@2
  __int64 v12; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  return sub_40F030(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_40F5C0(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v5; // [sp+0h] [bp-48h]@2
  int v6; // [sp+4h] [bp-44h]@2
  __int64 v7; // [sp+8h] [bp-40h]@2
  __int64 v8; // [sp+10h] [bp-38h]@2
  __int64 v9; // [sp+18h] [bp-30h]@2
  __int64 v10; // [sp+20h] [bp-28h]@2
  __int64 v11; // [sp+28h] [bp-20h]@2
  __int64 v12; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v5 = a2;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  return sub_40F030(a1, a3, a4, (__int64)&v5);
}

_BYTE *__fastcall sub_40F630(int a1, char *a2)
{
  return sub_40F550(0LL, a1, a2);
}

_BYTE *__fastcall sub_40F650(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_61CD10;
  v4 = _mm_load_si128((const __m128i *)&xmmword_61CCE0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_61CCF0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_61CD00);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_40F030(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_40F6D0(char *a1)
{
  return sub_40F650(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40F700(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40F700(__int64 a1, int a2, char *a3)
{
  int v4; // [sp+0h] [bp-48h]@2
  int v5; // [sp+4h] [bp-44h]@2
  __int64 v6; // [sp+8h] [bp-40h]@2
  __int64 v7; // [sp+10h] [bp-38h]@2
  __int64 v8; // [sp+18h] [bp-30h]@2
  __int64 v9; // [sp+20h] [bp-28h]@2
  __int64 v10; // [sp+28h] [bp-20h]@2
  __int64 v11; // [sp+30h] [bp-18h]@2

  if ( a2 == 10 )
    abort();
  v4 = a2;
  v6 = 0x400000000000000LL;
  v5 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_40F860(__int64 a1, char *a2)
{
  return sub_40F030(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61C520);
}

_BYTE *__fastcall sub_40F880(char *a1)
{
  return sub_40F030(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61C520);
}

noreturn void __fastcall  sub_40F8A0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

  if ( a1 )
  {
    v1 = sub_40F880(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

noreturn void __fastcall  sub_40F8A0(char *a1)
{
  _BYTE *v1; // rbp@2
  int *v2; // rbx@2
  char *v3; // rax@3

  if ( a1 )
  {
    v1 = sub_40F880(a1);
    v2 = __errno_location();
    if ( *v2 )
      v3 = dcgettext(0LL, "%s: read error", 5);
    else
      v3 = dcgettext(0LL, "%s: end of file", 5);
    error(status, *v2, v3, v1);
  }
  abort();
}

__int64 __fastcall sub_40F900(signed __int64 a1, unsigned __int64 a2)
{
  FILE *v2; // rax@3
  FILE *v3; // r13@3
  __int64 v4; // rax@4
  size_t v5; // rcx@4
  __int64 v6; // rbx@6
  __int64 v8; // rax@8
  signed __int64 v9; // r13@8
  int v10; // eax@8
  int v11; // er15@8
  signed __int64 v12; // rdx@9
  signed __int64 v13; // rax@11
  signed __int64 v14; // rbp@11
  __int64 v15; // rax@13
  struct timeval *v16; // r12@14
  unsigned __int64 v17; // r14@14
  signed __int64 v18; // rbp@15
  unsigned int v19; // eax@18
  __int64 v20; // rdx@19
  unsigned __int64 v21; // rbp@20
  signed __int64 v22; // r14@21
  unsigned int v23; // eax@24
  __int64 v24; // rdx@25
  unsigned __int64 v25; // rbp@26
  signed int v26; // eax@27
  signed int v27; // edi@29
  unsigned int v28; // eax@30
  __int64 v29; // rdx@31
  signed __int64 v30; // rcx@36
  struct timeval *v31; // r15@36
  signed __int64 v32; // rbp@38
  unsigned int v33; // ST08_4@38
  signed __int64 v34; // r14@39
  unsigned __int64 v35; // rcx@41
  struct timeval tv; // [sp+10h] [bp-48h]@14

  if ( !a2 )
  {
    LODWORD(v15) = sub_411210(4152LL);
    v6 = v15;
    *(_QWORD *)v15 = 0LL;
    *(_QWORD *)(v15 + 8) = sub_40F8A0;
    *(_QWORD *)(v15 + 16) = 0LL;
    return v6;
  }
  if ( !a1 )
  {
    LODWORD(v8) = sub_411210(4152LL);
    *(_QWORD *)v8 = 0LL;
    v6 = v8;
    v9 = v8 + 32;
    *(_QWORD *)(v8 + 8) = sub_40F8A0;
    *(_QWORD *)(v8 + 16) = 0LL;
    *(_QWORD *)(v8 + 24) = 0LL;
    v10 = open("/dev/urandom", 0);
    v11 = v10;
    if ( v10 < 0 )
    {
      v16 = &tv;
      v17 = 20LL;
      gettimeofday(&tv, 0LL);
      *(__m128i *)(v6 + 32) = _mm_load_si128((const __m128i *)&tv);
      LODWORD(tv.tv_sec) = getpid();
      *(_DWORD *)(v6 + 48) = tv.tv_sec;
    }
    else
    {
      v12 = a2;
      if ( a2 > 0x800 )
        v12 = 2048LL;
      LODWORD(v13) = __read_chk((unsigned int)v10, v9, v12, 4120LL);
      v14 = v13;
      close(v11);
      if ( v14 > 2047 )
        goto LABEL_12;
      if ( v14 < 0 )
        v14 = a1;
      v16 = &tv;
      v30 = 2048 - v14;
      v31 = (struct timeval *)(v9 + v14);
      if ( (unsigned __int64)(2048 - v14) > 0x10 )
        v30 = 16LL;
      v32 = v30 + v14;
      v33 = v30;
      gettimeofday(&tv, 0LL);
      qmemcpy(v31, &tv, v33);
      if ( v32 > 2047 )
        goto LABEL_12;
      v34 = 2048 - v32;
      if ( (unsigned __int64)(2048 - v32) > 4 )
        v34 = 4LL;
      LODWORD(tv.tv_sec) = getpid();
      v35 = (unsigned int)v34;
      v17 = v32 + v34;
      qmemcpy((void *)(v9 + v32), &tv, v35);
      if ( v17 > 0x7FF )
        goto LABEL_12;
    }
    v18 = 2048 - v17;
    if ( 2048 - v17 > 4 )
      v18 = 4LL;
    LODWORD(tv.tv_sec) = getppid();
    if ( (_DWORD)v18 )
    {
      v19 = 0;
      do
      {
        v20 = v19++;
        *(_BYTE *)(v9 + v17 + v20) = *((_BYTE *)&v16->tv_sec + v20);
      }
      while ( v19 < (unsigned int)v18 );
    }
    v21 = v17 + v18;
    if ( v21 <= 0x7FF )
    {
      v22 = 2048 - v21;
      if ( 2048 - v21 > 4 )
        v22 = 4LL;
      LODWORD(tv.tv_sec) = getuid();
      if ( (_DWORD)v22 )
      {
        v23 = 0;
        do
        {
          v24 = v23++;
          *(_BYTE *)(v9 + v21 + v24) = *((_BYTE *)&v16->tv_sec + v24);
        }
        while ( v23 < (unsigned int)v22 );
      }
      v25 = v22 + v21;
      if ( v25 <= 0x7FF )
      {
        LODWORD(tv.tv_sec) = getgid();
        v26 = 2048 - v25;
        if ( 2048 - v25 > 4 )
          v26 = 4;
        v27 = v26;
        if ( v26 )
        {
          v28 = 0;
          do
          {
            v29 = v28++;
            *(_BYTE *)(v9 + v25 + v29) = *((_BYTE *)&v16->tv_sec + v29);
          }
          while ( v28 < v27 );
        }
      }
    }
LABEL_12:
    sub_410070(v9);
    return v6;
  }
  LODWORD(v2) = sub_4136B0(a1, "rb");
  v3 = v2;
  if ( v2 )
  {
    LODWORD(v4) = sub_411210(4152LL);
    v5 = 4096LL;
    *(_QWORD *)v4 = v3;
    if ( a2 <= 0x1000 )
      v5 = a2;
    *(_QWORD *)(v4 + 8) = sub_40F8A0;
    v6 = v4;
    *(_QWORD *)(v4 + 16) = a1;
    setvbuf(v3, (char *)(v4 + 24), 0, v5);
  }
  else
  {
    v6 = 0LL;
  }
  return v6;
}

int __fastcall sub_40FC10(__int64 a1, char *a2, size_t a3)
{
  __int64 v3; // r12@1
  char *v4; // rbp@1
  size_t v5; // rbx@1
  FILE *v6; // r13@1
  int *v7; // r14@2
  __int64 v8; // rdi@3
  int v9; // edx@4
  size_t v10; // rax@6
  size_t v11; // r15@8
  char *v12; // r13@8
  signed __int64 v13; // r14@8
  char *v14; // rdi@9
  char *v15; // rsi@12

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = *(FILE **)a1;
  if ( *(_QWORD *)a1 )
  {
    v7 = __errno_location();
    while ( 1 )
    {
      v10 = fread_unlocked(v4, 1uLL, v5, v6);
      v9 = *v7;
      v4 += v10;
      v5 -= v10;
      if ( !v5 )
        break;
      v8 = *(_QWORD *)(v3 + 16);
      if ( !(**(_BYTE **)v3 & 0x20) )
        v9 = 0;
      *v7 = v9;
      (*(void (__fastcall **)(__int64))(v3 + 8))(v8);
      v6 = *(FILE **)v3;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (char *)(a1 + 2104);
    v13 = a1 + 32;
    if ( a3 <= v11 )
    {
      v12 = &v12[-v11 + 2048];
LABEL_16:
      LODWORD(v10) = (unsigned __int64)memcpy(v4, v12, v5);
      *(_QWORD *)(v3 + 24) = v11 - v5;
    }
    else
    {
      while ( 1 )
      {
        v14 = v4;
        v4 += v11;
        v5 -= v11;
        memcpy(v14, &v12[2048 - v11], v11);
        if ( !((unsigned __int8)v4 & 7) )
          break;
        v11 = 2048LL;
        sub_40FDC0(v13, v12);
        if ( v5 <= 0x800 )
        {
LABEL_15:
          v11 = 2048LL;
          goto LABEL_16;
        }
      }
      do
      {
        if ( v5 <= 0x7FF )
        {
          sub_40FDC0(v13, v12);
          goto LABEL_15;
        }
        v15 = v4;
        v4 += 2048;
        LODWORD(v10) = sub_40FDC0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  return v10;
}

__int64 __fastcall sub_40FD70(void *ptr)
{
  FILE *v1; // rbp@1
  __int64 result; // rax@2

  v1 = *(FILE **)ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    result = sub_411F80(v1);
  else
    result = 0LL;
  return result;
}

__int64 __fastcall sub_40FDC0(__int64 a1, __int64 a2)
{
  __int64 v2; // r11@1
  unsigned __int64 v3; // rdx@1
  __int64 v4; // r9@1
  signed __int64 v5; // r8@1
  __int64 result; // rax@1
  signed __int64 v7; // r11@1
  __int64 v8; // rcx@2
  unsigned __int64 v9; // rdx@2
  unsigned __int64 v10; // r8@2
  __int64 v11; // rbx@2
  __int64 v12; // r8@2
  unsigned __int64 v13; // r11@2
  unsigned __int64 v14; // rdx@2
  unsigned __int64 v15; // rcx@2
  __int64 v16; // rbx@2
  __int64 v17; // rcx@2
  unsigned __int64 v18; // rdx@2
  unsigned __int64 v19; // r8@2
  __int64 v20; // rcx@2
  __int64 v21; // r8@2
  unsigned __int64 v22; // rcx@2
  signed __int64 v23; // rsi@3
  __int64 v24; // rcx@4
  unsigned __int64 v25; // rdx@4
  unsigned __int64 v26; // rbx@4
  __int64 v27; // rcx@4
  __int64 v28; // r8@4
  unsigned __int64 v29; // r10@4
  unsigned __int64 v30; // rdx@4
  unsigned __int64 v31; // rcx@4
  __int64 v32; // r11@4
  __int64 v33; // rcx@4
  unsigned __int64 v34; // rdx@4
  unsigned __int64 v35; // r8@4
  __int64 v36; // rcx@4
  __int64 v37; // r8@4
  unsigned __int64 v38; // rcx@4

  v2 = *(_QWORD *)(a1 + 2056);
  v3 = *(_QWORD *)(a1 + 2048);
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 2064) + 1LL;
  result = a1;
  *(_QWORD *)(a1 + 2064) = v5;
  v7 = v5 + v2;
  do
  {
    v8 = *(_QWORD *)result;
    v9 = *(_QWORD *)(result + 1024) + ~((v3 << 21) ^ v3);
    v10 = v7 + v9 + *(_QWORD *)(a1 + (*(_QWORD *)result & 0x7F8LL));
    *(_QWORD *)result = v10;
    v11 = v8 + *(_QWORD *)(a1 + ((v10 >> 8) & 0x7F8));
    *(_QWORD *)v4 = v11;
    v12 = *(_QWORD *)(result + 8);
    v13 = *(_QWORD *)(result + 1032) + ((v9 >> 5) ^ v9);
    v14 = v13 ^ (v13 << 12);
    v15 = v11 + v13 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 8) & 0x7F8LL));
    *(_QWORD *)(result + 8) = v15;
    v16 = v12 + *(_QWORD *)(a1 + ((v15 >> 8) & 0x7F8));
    *(_QWORD *)(v4 + 8) = v16;
    v17 = *(_QWORD *)(result + 16);
    v18 = *(_QWORD *)(result + 1040) + v14;
    v19 = v16 + v18 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 16) & 0x7F8LL));
    *(_QWORD *)(result + 16) = v19;
    v20 = *(_QWORD *)(a1 + ((v19 >> 8) & 0x7F8)) + v17;
    *(_QWORD *)(v4 + 16) = v20;
    v21 = *(_QWORD *)(result + 24);
    v3 = *(_QWORD *)(result + 1048) + ((v18 >> 33) ^ v18);
    v22 = v20 + v3 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 24) & 0x7F8LL));
    result += 32LL;
    v4 += 32LL;
    *(_QWORD *)(result - 8) = v22;
    v7 = v21 + *(_QWORD *)(a1 + ((v22 >> 8) & 0x7F8));
    *(_QWORD *)(v4 - 8) = v7;
  }
  while ( result != a1 + 1024 );
  v23 = a2 + 1024;
  do
  {
    v24 = *(_QWORD *)result;
    v25 = *(_QWORD *)(result - 1024) + ~((v3 << 21) ^ v3);
    v26 = v25 + *(_QWORD *)(a1 + (*(_QWORD *)result & 0x7F8LL));
    *(_QWORD *)result = v7 + v26;
    v27 = *(_QWORD *)(a1 + (((v7 + v26) >> 8) & 0x7F8)) + v24;
    *(_QWORD *)v23 = v27;
    v28 = *(_QWORD *)(result + 8);
    v29 = *(_QWORD *)(result - 1016) + ((v25 >> 5) ^ v25);
    v30 = v29 ^ (v29 << 12);
    v31 = v27 + v29 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 8) & 0x7F8LL));
    *(_QWORD *)(result + 8) = v31;
    v32 = v28 + *(_QWORD *)(a1 + ((v31 >> 8) & 0x7F8));
    *(_QWORD *)(v23 + 8) = v32;
    v33 = *(_QWORD *)(result + 16);
    v34 = *(_QWORD *)(result - 1008) + v30;
    v35 = v32 + v34 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 16) & 0x7F8LL));
    *(_QWORD *)(result + 16) = v35;
    v36 = *(_QWORD *)(a1 + ((v35 >> 8) & 0x7F8)) + v33;
    *(_QWORD *)(v23 + 16) = v36;
    v37 = *(_QWORD *)(result + 24);
    v3 = *(_QWORD *)(result - 1000) + ((v34 >> 33) ^ v34);
    v38 = v36 + v3 + *(_QWORD *)(a1 + (*(_QWORD *)(result + 24) & 0x7F8LL));
    result += 32LL;
    v23 += 32LL;
    *(_QWORD *)(result - 8) = v38;
    v7 = v37 + *(_QWORD *)(a1 + ((v38 >> 8) & 0x7F8));
    *(_QWORD *)(v23 - 8) = v7;
  }
  while ( result != a1 + 2048 );
  *(_QWORD *)(a1 + 2048) = v3;
  *(_QWORD *)(a1 + 2056) = v7;
  return result;
}

unsigned __int64 __fastcall sub_410070(__int64 a1)
{
  __int64 v1; // rdx@1
  __int64 v2; // rax@1
  signed __int64 v3; // rcx@1
  signed __int64 v4; // rsi@1
  signed __int64 v5; // r11@1
  signed __int64 v6; // r12@1
  signed __int64 v7; // r10@1
  signed __int64 v8; // r9@1
  signed __int64 v9; // rbp@1
  signed __int64 v10; // r8@1
  signed __int64 v11; // rbx@1
  signed __int64 v12; // rsi@2
  unsigned __int64 v13; // rcx@2
  signed __int64 v14; // r8@2
  unsigned __int64 v15; // rbx@2
  unsigned __int64 v16; // r9@2
  signed __int64 v17; // r12@2
  signed __int64 v18; // r10@2
  unsigned __int64 v19; // rcx@2
  unsigned __int64 v20; // r11@2
  signed __int64 v21; // rsi@2
  unsigned __int64 v22; // rbx@2
  unsigned __int64 v23; // r13@2
  signed __int64 v24; // r12@2
  unsigned __int64 v25; // rcx@3
  signed __int64 v26; // rsi@3
  signed __int64 v27; // r8@3
  unsigned __int64 v28; // rbx@3
  unsigned __int64 v29; // r9@3
  signed __int64 v30; // r12@3
  signed __int64 v31; // r10@3
  unsigned __int64 v32; // rcx@3
  unsigned __int64 v33; // r11@3
  signed __int64 v34; // rsi@3
  unsigned __int64 v35; // rbx@3
  unsigned __int64 result; // rax@3
  signed __int64 v37; // r12@3

  v1 = a1;
  v2 = a1;
  v3 = -7424904924229222229LL;
  v4 = -9011610652101975858LL;
  v5 = -5576812576440232668LL;
  v6 = -5865837416287532563LL;
  v7 = -8354558816804203872LL;
  v8 = -5046086420515862430LL;
  v9 = a1 + 2048;
  v10 = 7240739780546808700LL;
  v11 = 5259722845879046933LL;
  do
  {
    v12 = *(_QWORD *)(v2 + 32) + v4;
    v13 = *(_QWORD *)(v2 + 56) + v3;
    v14 = *(_QWORD *)v2 - v12 + v10;
    v15 = (v13 >> 9) ^ (*(_QWORD *)(v2 + 40) + v11);
    v16 = *(_QWORD *)(v2 + 8) - v15 + v8;
    v17 = (v14 << 9) ^ (*(_QWORD *)(v2 + 48) + v6);
    v18 = *(_QWORD *)(v2 + 16) - v17 + v7;
    v19 = (v16 >> 23) ^ (v14 + v13);
    v20 = *(_QWORD *)(v2 + 24) - v19 + v5;
    v10 = (v18 << 15) ^ (v16 + v14);
    v21 = v12 - v10;
    *(_QWORD *)v2 = v10;
    v8 = (v20 >> 14) ^ (v18 + v16);
    v22 = v15 - v8;
    *(_QWORD *)(v2 + 8) = v8;
    v7 = (v21 << 20) ^ (v20 + v18);
    v23 = v21 + v22;
    v24 = v17 - v7;
    *(_QWORD *)(v2 + 16) = v7;
    v2 += 64LL;
    v5 = (v22 >> 17) ^ (v21 + v20);
    v11 = v24 + v22;
    v3 = v19 - v5;
    *(_QWORD *)(v2 - 40) = v5;
    v4 = v23 ^ (v24 << 14);
    v6 = v3 + v24;
    *(_QWORD *)(v2 - 24) = v11;
    *(_QWORD *)(v2 - 32) = v4;
    *(_QWORD *)(v2 - 16) = v6;
    *(_QWORD *)(v2 - 8) = v3;
  }
  while ( v9 != v2 );
  do
  {
    v25 = *(_QWORD *)(v1 + 56) + v3;
    v26 = *(_QWORD *)(v1 + 32) + v4;
    v27 = *(_QWORD *)v1 + v10 - v26;
    v28 = (v25 >> 9) ^ (*(_QWORD *)(v1 + 40) + v11);
    v29 = *(_QWORD *)(v1 + 8) + v8 - v28;
    v30 = (v27 << 9) ^ (*(_QWORD *)(v1 + 48) + v6);
    v31 = *(_QWORD *)(v1 + 16) + v7 - v30;
    v32 = (v29 >> 23) ^ (v27 + v25);
    v33 = *(_QWORD *)(v1 + 24) + v5 - v32;
    v10 = (v31 << 15) ^ (v29 + v27);
    v34 = v26 - v10;
    *(_QWORD *)v1 = v10;
    v8 = (v33 >> 14) ^ (v31 + v29);
    v35 = v28 - v8;
    *(_QWORD *)(v1 + 8) = v8;
    v7 = (v34 << 20) ^ (v33 + v31);
    result = v34 + v35;
    v37 = v30 - v7;
    *(_QWORD *)(v1 + 16) = v7;
    v1 += 64LL;
    v5 = (v35 >> 17) ^ (v34 + v33);
    v11 = v37 + v35;
    v3 = v32 - v5;
    *(_QWORD *)(v1 - 40) = v5;
    v4 = result ^ (v37 << 14);
    v6 = v3 + v37;
    *(_QWORD *)(v1 - 24) = v11;
    *(_QWORD *)(v1 - 32) = v4;
    *(_QWORD *)(v1 - 16) = v6;
    *(_QWORD *)(v1 - 8) = v3;
  }
  while ( v9 != v1 );
  *(_QWORD *)(a1 + 2064) = 0LL;
  *(_QWORD *)(a1 + 2056) = 0LL;
  *(_QWORD *)(a1 + 2048) = 0LL;
  return result;
}

int __fastcall sub_4102B0(__int64 a1)
{
  __int64 v1; // rdx@1
  __int64 v2; // rbx@1
  __int64 v3; // r12@1
  signed __int64 v4; // rbp@1
  __int64 v5; // rcx@3
  __int64 v6; // rax@3
  __int64 v7; // rdx@3
  __int64 v8; // rax@3
  __int64 v9; // rcx@3
  __int64 v10; // rdi@3
  _QWORD *v11; // rdx@5
  signed __int64 *v12; // rdx@7
  __int64 v13; // rax@7
  unsigned __int64 v14; // rax@7

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48) - v3 - 1;
  if ( v1 == v3 )
    *(_BYTE *)(a1 + 104) |= 2u;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = v1 + v5;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = ~v5 & v6;
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v2 + 48) = v8;
  if ( v8 - v9 > (unsigned __int64)(v10 - v9) )
  {
    *(_QWORD *)(v2 + 48) = v7;
    v8 = v7;
  }
  *(_QWORD *)(v2 + 40) = v8;
  v11 = *(_QWORD **)(v2 + 136);
  if ( *(_QWORD *)(v2 + 144) - (_QWORD)v11 <= 7uLL )
  {
    obstack_newchunk(v2 + 112, 8LL);
    v11 = *(_QWORD **)(v2 + 136);
  }
  *v11 = v3;
  v12 = *(signed __int64 **)(v2 + 224);
  v13 = *(_QWORD *)(v2 + 232);
  *(_QWORD *)(v2 + 136) += 8LL;
  v14 = v13 - (_QWORD)v12;
  if ( v14 <= 7 )
  {
    LODWORD(v14) = obstack_newchunk(v2 + 200, 8LL);
    v12 = *(signed __int64 **)(v2 + 224);
  }
  *v12 = v4;
  *(_QWORD *)(v2 + 224) += 8LL;
  ++*(_QWORD *)v2;
  return v14;
}

int __fastcall sub_4103A0(_QWORD *a1)
{
  _QWORD *v1; // rbx@1
  signed __int64 v2; // rdi@1

  v1 = a1;
  *a1 = 0LL;
  v2 = (signed __int64)(a1 + 3);
  *(_QWORD *)(v2 - 16) = 0LL;
  *(_QWORD *)(v2 - 8) = 0LL;
  obstack_begin(v2, 0LL, 0LL, malloc, free);
  obstack_begin(v1 + 14, 0LL, 0LL, malloc, free);
  return obstack_begin(v1 + 25, 0LL, 0LL, malloc, free);
}

bool __fastcall sub_410440(FILE *stream, __int64 a2)
{
  __int64 v2; // rbx@1
  int i; // eax@3
  _BYTE *v4; // rdx@4
  int v5; // ST0C_4@5
  _BYTE *v6; // rdx@5
  _BYTE *v7; // rax@7
  _QWORD *v8; // rdx@11
  __int64 v9; // rsi@13
  signed __int64 v10; // rdx@13
  __int64 v11; // rcx@15
  signed __int64 v12; // rax@15
  __int64 v13; // rdx@15
  signed __int64 v14; // rax@15
  signed __int64 v15; // rcx@15
  __int64 v16; // rdx@17
  __int64 v17; // rsi@17
  __int64 v18; // rcx@19
  __int64 v19; // rax@19
  __int64 v20; // rdx@19
  __int64 v21; // rax@19
  __int64 v22; // rcx@19

  v2 = a2;
LABEL_3:
  for ( i = fgetc(stream); i != -1; i = fgetc(stream) )
  {
    v4 = *(_BYTE **)(a2 + 48);
    if ( *(_BYTE **)(a2 + 56) == v4 )
    {
      v5 = i;
      obstack_newchunk(a2 + 24, 1LL);
      v6 = *(_BYTE **)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v6 + 1;
      *v6 = v5;
      if ( v5 )
        goto LABEL_3;
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v4 + 1;
      *v4 = i;
      if ( i )
        goto LABEL_3;
    }
    sub_4102B0(a2);
  }
  v7 = *(_BYTE **)(a2 + 48);
  if ( v7 != *(_BYTE **)(a2 + 40) )
  {
    if ( v7 == *(_BYTE **)(a2 + 56) )
    {
      obstack_newchunk(a2 + 24, 1LL);
      v7 = *(_BYTE **)(a2 + 48);
    }
    *(_QWORD *)(a2 + 48) = v7 + 1;
    *v7 = 0;
    sub_4102B0(a2);
  }
  v8 = *(_QWORD **)(a2 + 136);
  if ( *(_QWORD *)(a2 + 144) - (_QWORD)v8 <= 7uLL )
  {
    obstack_newchunk(a2 + 112, 8LL);
    v8 = *(_QWORD **)(a2 + 136);
  }
  *v8 = 0LL;
  v9 = *(_QWORD *)(a2 + 128);
  v10 = *(_QWORD *)(v2 + 136) + 8LL;
  *(_QWORD *)(v2 + 136) = v10;
  if ( v10 == v9 )
    *(_BYTE *)(v2 + 192) |= 2u;
  v11 = *(_QWORD *)(v2 + 160);
  v12 = v10 + v11;
  v13 = *(_QWORD *)(v2 + 120);
  v14 = ~v11 & v12;
  v15 = *(_QWORD *)(v2 + 144);
  *(_QWORD *)(v2 + 136) = v14;
  if ( v14 - v13 > (unsigned __int64)(v15 - v13) )
  {
    *(_QWORD *)(v2 + 136) = v15;
    v14 = v15;
  }
  *(_QWORD *)(v2 + 8) = v9;
  v16 = *(_QWORD *)(v2 + 224);
  v17 = *(_QWORD *)(v2 + 216);
  *(_QWORD *)(v2 + 128) = v14;
  if ( v16 == v17 )
    *(_BYTE *)(v2 + 280) |= 2u;
  v18 = *(_QWORD *)(v2 + 248);
  v19 = v16 + v18;
  v20 = *(_QWORD *)(v2 + 208);
  v21 = ~v18 & v19;
  v22 = *(_QWORD *)(v2 + 232);
  *(_QWORD *)(v2 + 224) = v21;
  if ( v21 - v20 > (unsigned __int64)(v22 - v20) )
  {
    *(_QWORD *)(v2 + 224) = v22;
    v21 = v22;
  }
  *(_QWORD *)(v2 + 216) = v21;
  *(_QWORD *)(v2 + 16) = v17;
  return ferror(stream) == 0;
}

__int64 __fastcall sub_410680(char *a1, __int64 a2)
{
  __int64 v2; // rdi@1
  __int64 result; // rax@2
  int v4; // er12@3
  int *v5; // rax@3
  int v6; // er13@3
  int *v7; // rbp@3

  a2 = (unsigned int)a2;
  v2 = (unsigned int)mkostemp(a1, a2);
  if ( (unsigned int)v2 <= 2 )
  {
    v4 = sub_413690(v2, a2);
    v5 = __errno_location();
    v6 = *v5;
    v7 = v5;
    close(v2);
    result = (unsigned int)v4;
    *v7 = v6;
  }
  else
  {
    result = (unsigned int)v2;
  }
  return result;
}

__int64 __fastcall sub_410680(char *a1, __int64 a2)
{
  __int64 v2; // rdi@1
  __int64 result; // rax@2
  int v4; // er12@3
  int *v5; // rax@3
  int v6; // er13@3
  int *v7; // rbp@3

  a2 = (unsigned int)a2;
  v2 = (unsigned int)mkostemp(a1, a2);
  if ( (unsigned int)v2 <= 2 )
  {
    v4 = sub_413690(v2, a2);
    v5 = __errno_location();
    v6 = *v5;
    v7 = v5;
    close(v2);
    result = (unsigned int)v4;
    *v7 = v6;
  }
  else
  {
    result = (unsigned int)v2;
  }
  return result;
}

__int64 __fastcall sub_410680(char *a1, __int64 a2)
{
  __int64 v2; // rdi@1
  __int64 result; // rax@2
  int v4; // er12@3
  int *v5; // rax@3
  int v6; // er13@3
  int *v7; // rbp@3

  a2 = (unsigned int)a2;
  v2 = (unsigned int)mkostemp(a1, a2);
  if ( (unsigned int)v2 <= 2 )
  {
    v4 = sub_413690(v2, a2);
    v5 = __errno_location();
    v6 = *v5;
    v7 = v5;
    close(v2);
    result = (unsigned int)v4;
    *v7 = v6;
  }
  else
  {
    result = (unsigned int)v2;
  }
  return result;
}

signed __int64 __fastcall sub_4106A0(__int64 a1, signed __int64 a2, int a3, int a4)
{
  unsigned __int8 v4; // r9@1
  unsigned __int8 v5; // r8@1
  int v6; // eax@3
  int v7; // esi@6
  signed __int64 result; // rax@6
  unsigned __int8 v9; // al@8
  int v10; // er9@9
  int v11; // er10@16
  int v12; // eax@21
  int v13; // er10@24
  unsigned __int8 v14; // r8@31
  int v15; // er10@32
  _BYTE *v16; // rsi@41
  int v17; // eax@46
  int v18; // er8@52
  int v19; // er10@53
  unsigned __int64 v20; // r8@54
  int v21; // edx@55
  unsigned __int64 v22; // rdi@58
  int v23; // edx@59
  int v24; // er8@64
  int v25; // eax@65
  int v26; // er10@65
  unsigned __int64 v27; // r8@66
  int v28; // edx@67
  int v29; // edx@71
  unsigned __int8 v30; // r8@80
  char *v31; // rax@82
  char i; // dl@82
  int v33; // eax@85
  unsigned __int8 v34; // cl@93
  int v35; // ecx@102
  int v36; // er8@109
  int v37; // er10@110
  int v38; // eax@120
  int v39; // ecx@120
  int v40; // er8@120
  int v41; // edx@121

  v4 = *(_BYTE *)a1;
  v5 = *(_BYTE *)a2;
  if ( *(_BYTE *)a1 != 45 )
  {
    if ( v5 == 45 )
    {
      do
      {
        do
          v6 = *(_BYTE *)++a2;
        while ( (_BYTE)v6 == 48 );
      }
      while ( a4 == v6 );
      if ( a3 == v6 )
      {
        do
        {
          v16 = (_BYTE *)(a2 + 1);
          v6 = *v16;
          if ( (_BYTE)v6 != 48 )
            break;
          a2 = (signed __int64)(v16 + 1);
          v6 = *(_BYTE *)a2;
        }
        while ( (_BYTE)v6 == 48 );
      }
      v7 = v6 - 48;
      result = 1LL;
      if ( (unsigned int)v7 <= 9 )
        return result;
      while ( 1 )
      {
        if ( v4 != 48 )
        {
          v17 = v4;
          if ( a4 != v4 )
            break;
        }
        v4 = *(_BYTE *)++a1;
      }
      if ( a3 == v4 )
      {
        do
          ++a1;
        while ( *(_BYTE *)a1 == 48 );
        v17 = *(_BYTE *)a1;
      }
      return (unsigned int)(v17 - 48) <= 9;
    }
    while ( 1 )
    {
      if ( v4 != 48 )
      {
        v12 = v4;
        if ( a4 != v4 )
          break;
      }
      v4 = *(_BYTE *)++a1;
    }
    if ( v5 != 48 )
      goto LABEL_24;
    do
    {
      do
        v5 = *(_BYTE *)++a2;
      while ( *(_BYTE *)a2 == 48 );
LABEL_24:
      v13 = v5;
    }
    while ( a4 == v5 );
    while ( v4 == v5 && (unsigned int)(v13 - 48) <= 9 )
    {
      do
      {
        v12 = *(_BYTE *)++a1;
        v4 = *(_BYTE *)a1;
      }
      while ( a4 == v12 );
      do
      {
        v13 = *(_BYTE *)++a2;
        v5 = *(_BYTE *)a2;
        if ( a4 != v13 )
          break;
        v13 = *(_BYTE *)++a2;
        v5 = *(_BYTE *)a2;
      }
      while ( a4 == v13 );
    }
    if ( a3 == v12 && (unsigned int)(v13 - 48) > 9 )
    {
LABEL_80:
      v30 = *(_BYTE *)a2;
      if ( (_BYTE)a3 != *(_BYTE *)a1 )
      {
        result = 0LL;
        if ( (_BYTE)a3 != v30 )
          return result;
        v31 = (char *)(a2 + 1);
LABEL_84:
        for ( i = *(_BYTE *)(a2 + 1); i == 48; i = *v31 )
          ++v31;
        v33 = i;
        return (unsigned int)-((unsigned int)(v33 - 48) <= 9);
      }
      v35 = *(_BYTE *)(a1 + 1);
      if ( (_BYTE)a3 == v30 )
      {
        while ( 1 )
        {
          i = *(_BYTE *)++a2;
          ++a1;
          v36 = (char)v35 - 48;
          if ( *(_BYTE *)a2 != (_BYTE)v35 )
            break;
          if ( (unsigned int)v36 > 9 )
            return 0LL;
          v35 = *(_BYTE *)(a1 + 1);
        }
        v37 = i - 48;
        if ( (unsigned int)v36 > 9 )
        {
          result = 0LL;
          if ( (unsigned int)v37 > 9 )
            return result;
          v31 = (char *)a2;
          goto LABEL_84;
        }
        if ( (unsigned int)v37 <= 9 )
          return (unsigned int)((char)v35 - i);
      }
      else
      {
        ++a1;
      }
      while ( (_BYTE)v35 == 48 )
        v35 = *(_BYTE *)++a1;
      return (unsigned int)(v35 - 48) <= 9;
    }
    v18 = v12 - 48;
    if ( a3 == v13 )
    {
      if ( (unsigned int)v18 > 9 )
        goto LABEL_80;
      result = (unsigned int)(v12 - a3);
      v19 = a3 - 48;
      goto LABEL_54;
    }
    result = (unsigned int)(v12 - v13);
    v19 = v13 - 48;
    if ( (unsigned int)v18 <= 9 )
    {
LABEL_54:
      v20 = 0LL;
      do
      {
        do
          v21 = *(_BYTE *)++a1;
        while ( a4 == v21 );
        ++v20;
      }
      while ( (unsigned int)(v21 - 48) <= 9 );
      if ( (unsigned int)v19 > 9 )
        return v20 != 0;
      goto LABEL_58;
    }
    v20 = 0LL;
    if ( (unsigned int)v19 <= 9 )
    {
LABEL_58:
      v22 = 0LL;
      do
      {
        do
          v23 = *(_BYTE *)++a2;
        while ( a4 == v23 );
        ++v22;
      }
      while ( (unsigned int)(v23 - 48) <= 9 );
      if ( v22 != v20 )
        return -(v20 < v22) | 1u;
LABEL_74:
      if ( !v22 )
        result = 0LL;
      return result;
    }
    return 0LL;
  }
  do
  {
    do
      v9 = *(_BYTE *)++a1;
    while ( *(_BYTE *)a1 == 48 );
    v10 = v9;
  }
  while ( a4 == v9 );
  if ( v5 != 45 )
  {
    if ( a3 == v9 )
    {
      do
        ++a1;
      while ( *(_BYTE *)a1 == 48 );
      v10 = *(_BYTE *)a1;
    }
    if ( (unsigned int)(v10 - 48) > 9 )
    {
      while ( 1 )
      {
        if ( v5 != 48 )
        {
          v11 = v5;
          if ( a4 != v5 )
            break;
        }
        v5 = *(_BYTE *)++a2;
      }
      if ( a3 == v5 )
      {
        do
          ++a2;
        while ( *(_BYTE *)a2 == 48 );
        v11 = *(_BYTE *)a2;
      }
      result = (unsigned int)-((unsigned int)(v11 - 48) <= 9);
    }
    else
    {
      result = 0xFFFFFFFFLL;
    }
    return result;
  }
  do
  {
    do
      v14 = *(_BYTE *)++a2;
    while ( *(_BYTE *)a2 == 48 );
    v15 = v14;
  }
  while ( a4 == v14 );
  while ( v9 == v14 && (unsigned int)(v15 - 48) <= 9 )
  {
    do
    {
      v10 = *(_BYTE *)++a1;
      v9 = *(_BYTE *)a1;
    }
    while ( a4 == v10 );
    do
    {
      v15 = *(_BYTE *)++a2;
      v14 = *(_BYTE *)a2;
      if ( a4 != v15 )
        break;
      v15 = *(_BYTE *)++a2;
      v14 = *(_BYTE *)a2;
    }
    while ( a4 == v15 );
  }
  if ( a3 != v10 || (unsigned int)(v15 - 48) <= 9 )
  {
    v24 = v10 - 48;
    if ( a3 == v15 )
    {
      if ( (unsigned int)v24 > 9 )
        goto LABEL_93;
      v26 = a3 - 48;
      result = (unsigned int)(a3 - v10);
    }
    else
    {
      v25 = v15;
      v26 = v15 - 48;
      result = (unsigned int)(v25 - v10);
      if ( (unsigned int)v24 > 9 )
      {
        v27 = 0LL;
        if ( (unsigned int)v26 > 9 )
          return 0LL;
LABEL_70:
        v22 = 0LL;
        do
        {
          do
            v29 = *(_BYTE *)++a2;
          while ( a4 == v29 );
          ++v22;
        }
        while ( (unsigned int)(v29 - 48) <= 9 );
        if ( v22 != v27 )
          return v27 < v22 ? 1 : -1;
        goto LABEL_74;
      }
    }
    v27 = 0LL;
    do
    {
      do
        v28 = *(_BYTE *)++a1;
      while ( a4 == v28 );
      ++v27;
    }
    while ( (unsigned int)(v28 - 48) <= 9 );
    if ( (unsigned int)v26 > 9 )
      return (unsigned int)-(v27 != 0);
    goto LABEL_70;
  }
LABEL_93:
  v34 = *(_BYTE *)a1;
  if ( (_BYTE)a3 != *(_BYTE *)a2 )
  {
    result = 0LL;
    if ( (_BYTE)a3 != v34 )
      return result;
    do
    {
      ++a1;
LABEL_96:
      v33 = *(_BYTE *)a1;
    }
    while ( *(_BYTE *)a1 == 48 );
    return (unsigned int)-((unsigned int)(v33 - 48) <= 9);
  }
  if ( (_BYTE)a3 != v34 )
  {
    do
    {
      ++a2;
LABEL_117:
      v17 = *(_BYTE *)a2;
    }
    while ( *(_BYTE *)a2 == 48 );
    return (unsigned int)(v17 - 48) <= 9;
  }
  while ( 1 )
  {
    ++a2;
    ++a1;
    v38 = *(_BYTE *)a2;
    v39 = *(_BYTE *)a1;
    v40 = v38 - 48;
    if ( *(_BYTE *)a2 != *(_BYTE *)a1 )
      break;
    if ( (unsigned int)v40 > 9 )
      return 0LL;
  }
  v41 = v39 - 48;
  if ( (unsigned int)v40 > 9 )
  {
    result = 0LL;
    if ( (unsigned int)v41 <= 9 )
      goto LABEL_96;
  }
  else
  {
    if ( (unsigned int)v41 > 9 )
      goto LABEL_117;
    result = (unsigned int)(v38 - v39);
  }
  return result;
}

int __fastcall sub_410C70(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_410C70(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12@1
  __int64 v7; // rbx@1
  char *v8; // rax@3
  char *v9; // rax@3
  __int64 v10; // rax@5
  __int64 v11; // r8@5
  __int64 v12; // r13@5
  __int64 v13; // r12@5
  __int64 v14; // r15@5
  __int64 v15; // ST40_8@5
  __int64 v16; // r14@5
  __int64 v17; // rbx@5
  char *v18; // rax@5
  int result; // eax@6
  const char *v20; // rsi@7
  __int64 v21; // r8@7
  __int64 v22; // r13@7
  __int64 v23; // r12@7
  __int64 v24; // ST48_8@7
  __int64 v25; // r15@7
  __int64 v26; // r14@7
  __int64 v27; // ST40_8@7
  __int64 v28; // ST30_8@7
  __int64 v29; // rbx@9
  char *v30; // rax@9
  __int64 v31; // r12@10
  __int64 v32; // rbx@10
  char *v33; // rax@10
  __int64 v34; // r13@11
  __int64 v35; // r12@11
  __int64 v36; // rbx@11
  char *v37; // rax@11
  __int64 v38; // r14@12
  __int64 v39; // r13@12
  __int64 v40; // r12@12
  __int64 v41; // rbx@12
  char *v42; // rax@12
  __int64 v43; // r15@14
  __int64 v44; // r13@14
  __int64 v45; // r12@14
  __int64 v46; // r12@15
  __int64 v47; // r15@15
  __int64 v48; // r14@15
  __int64 v49; // ST30_8@15
  __int64 v50; // r13@15
  __int64 v51; // rbx@15
  char *v52; // rax@15
  __int64 v53; // r13@17
  __int64 v54; // r12@17
  __int64 v55; // r15@17
  __int64 v56; // r14@17
  __int64 v57; // r8@17
  __int64 v58; // ST38_8@17
  __int64 v59; // r8@18
  __int64 v60; // r13@18
  __int64 v61; // r12@18
  __int64 v62; // ST48_8@18
  __int64 v63; // r15@18
  __int64 v64; // r14@18
  __int64 v65; // ST40_8@18
  __int64 v66; // ST30_8@18

  v6 = a6;
  v7 = a5;
  if ( a2 )
    __fprintf_chk(stream, 1LL, "%s (%s) %s\n", a2);
  else
    __fprintf_chk(stream, 1LL, "%s %s\n", a3);
  v8 = dcgettext(0LL, "(C)", 5);
  __fprintf_chk(stream, 1LL, "Copyright %s %d Free Software Foundation, Inc.", v8);
  v9 = dcgettext(
         0LL,
         "\n"
         "License GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
         "This is free software: you are free to change and redistribute it.\n"
         "There is NO WARRANTY, to the extent permitted by law.\n"
         "\n",
         5);
  fputs_unlocked(v9, stream);
  switch ( v6 )
  {
    case 0LL:
      abort();
      return result;
    case 8LL:
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_QWORD *)(v7 + 8);
      v12 = *(_QWORD *)(v7 + 48);
      v13 = *(_QWORD *)(v7 + 40);
      v14 = *(_QWORD *)(v7 + 32);
      v15 = *(_QWORD *)(v7 + 56);
      v16 = *(_QWORD *)(v7 + 24);
      v17 = *(_QWORD *)v7;
      v18 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_6;
    case 9LL:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v21 = *(_QWORD *)(v7 + 8);
      v22 = *(_QWORD *)(v7 + 48);
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_QWORD *)(v7 + 64);
      v25 = *(_QWORD *)(v7 + 32);
      v26 = *(_QWORD *)(v7 + 24);
      v27 = *(_QWORD *)(v7 + 56);
      v28 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
      goto LABEL_8;
    case 1LL:
      v29 = *(_QWORD *)v7;
      v30 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v30, v29);
    case 2LL:
      v31 = *(_QWORD *)(v7 + 8);
      v32 = *(_QWORD *)v7;
      v33 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v33, v32);
    case 3LL:
      v34 = *(_QWORD *)(v7 + 16);
      v35 = *(_QWORD *)(v7 + 8);
      v36 = *(_QWORD *)v7;
      v37 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v37, v36);
    case 4LL:
      v38 = *(_QWORD *)(v7 + 24);
      v39 = *(_QWORD *)(v7 + 16);
      v40 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v43 = *(_QWORD *)(v7 + 32);
      v38 = *(_QWORD *)(v7 + 24);
      v44 = *(_QWORD *)(v7 + 16);
      v45 = *(_QWORD *)(v7 + 8);
      v41 = *(_QWORD *)v7;
      v42 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v42, v41);
      return v38;
    case 6LL:
      v46 = *(_QWORD *)(v7 + 40);
      v47 = *(_QWORD *)(v7 + 32);
      v48 = *(_QWORD *)(v7 + 24);
      v49 = *(_QWORD *)(v7 + 8);
      v50 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      goto LABEL_16;
    case 7LL:
      v53 = *(_QWORD *)(v7 + 48);
      v54 = *(_QWORD *)(v7 + 40);
      v55 = *(_QWORD *)(v7 + 32);
      v56 = *(_QWORD *)(v7 + 24);
      v57 = *(_QWORD *)(v7 + 8);
      v58 = *(_QWORD *)(v7 + 16);
      v51 = *(_QWORD *)v7;
      v52 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
LABEL_16:
      result = __fprintf_chk(stream, 1LL, v52, v51);
      break;
    default:
      v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v59 = *(_QWORD *)(v7 + 8);
      v60 = *(_QWORD *)(v7 + 48);
      v61 = *(_QWORD *)(v7 + 40);
      v62 = *(_QWORD *)(v7 + 64);
      v63 = *(_QWORD *)(v7 + 32);
      v64 = *(_QWORD *)(v7 + 24);
      v65 = *(_QWORD *)(v7 + 56);
      v66 = *(_QWORD *)(v7 + 16);
      v17 = *(_QWORD *)v7;
LABEL_8:
      v18 = dcgettext(0LL, v20, 5);
LABEL_6:
      result = __fprintf_chk(stream, 1LL, v18, v17);
      break;
  }
  return result;
}

int __fastcall sub_4110D0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r10@1
  signed int v8; // er8@1
  __int64 v9; // r9@1
  __int64 v10; // rax@2
  __int64 v11; // rax@2
  __int64 *v12; // rax@5
  __int64 v13; // rax@5
  __int64 v15[10]; // [sp+20h] [bp-88h]@2
  char v16[32]; // [sp+70h] [bp-38h]@2
  __int64 v17; // [sp+90h] [bp-18h]@1
  __int64 v18; // [sp+98h] [bp-10h]@1

  v17 = a5;
  v7 = &a7;
  v8 = 32;
  v18 = a6;
  v9 = 0LL;
  do
  {
    if ( (unsigned int)v8 <= 0x2F )
    {
      v10 = (unsigned int)v8;
      v8 += 8;
      v11 = *(_QWORD *)&v16[v10];
      v15[v9] = v11;
      if ( !v11 )
        return sub_410C70(a1, a2, a3, a4, (__int64)v15, v9);
      goto LABEL_3;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[v9] = v13;
    if ( !v13 )
      break;
LABEL_3:
    ++v9;
  }
  while ( v9 != 10 );
  return sub_410C70(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_411210(size_t a1, __int64 a2)
{
  void *result; // rax@1
  __int64 v3; // rdx@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_411460(a1, a2, v3);
  }
  return result;
}

void *__fastcall sub_411270(void *a1, size_t a2)
{
  void *result; // rax@3
  __int64 v3; // rdx@3

  if ( !a2 && a1 )
  {
    free(a1);
    result = 0LL;
  }
  else
  {
    result = realloc(a1, a2);
    if ( !result )
    {
      if ( a2 )
        sub_411460(a1, a2, v3);
    }
  }
  return result;
}

__int64 __fastcall sub_4113E0(size_t a1, size_t a2)
{
  unsigned __int128 v2; // ax@1

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), BYTE8(v2))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_411460(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_411410(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_411210(a2, a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_411460()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

void __fastcall sub_4114A0(int errnum, char *a2, unsigned __int64 a3, char *a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r13@1
  unsigned __int64 v6; // r12@1
  char *v7; // rbp@1
  char *v8; // rax@1
  char *v9; // rax@1
  _BYTE *v10; // rbp@1
  _BYTE *v11; // rbx@1
  char *v12; // rax@1

  v5 = a5;
  v6 = a3;
  v7 = a4;
  v8 = dcgettext(0LL, "string comparison failed", 5);
  error(0, errnum, v8);
  v9 = dcgettext(0LL, "Set LC_ALL='C' to work around the problem.", 5);
  error(0, 0, v9);
  v10 = sub_40F5C0(1LL, 8, v7, v5);
  v11 = sub_40F5C0(0LL, 8, a2, v6);
  v12 = dcgettext(0LL, "The strings compared were %s and %s.", 5);
  error(status, 0, v12, v11, v10);
}

__int64 __fastcall sub_4115C0(char *a1, size_t a2, char *a3, __int64 a4)
{
  __int64 v4; // r14@1
  char *v5; // r12@1
  char *v6; // rbp@1
  unsigned int v7; // er13@1
  int v8; // edi@1
  __int64 result; // rax@2

  v4 = a4;
  v5 = a3;
  v6 = a1;
  v7 = sub_413E30(a1, a2, a3);
  v8 = *__errno_location();
  if ( v8 )
  {
    sub_4114A0(v8, v6, a2 - 1, v5, v4 - 1);
    result = v7;
  }
  else
  {
    result = v7;
  }
  return result;
}

int sub_411620()
{
  __int64 v0; // rax@1
  __int64 v1; // rdx@1
  int *v2; // rbx@1
  int result; // eax@3
  __int64 v4; // [sp+0h] [bp-18h]@1
  __int64 v5; // [sp+8h] [bp-10h]@1

  LODWORD(v0) = sub_413580();
  v4 = v0;
  v5 = v1;
  v2 = __errno_location();
  while ( 1 )
  {
    *v2 = 0;
    result = sub_413140(&v4, 0LL);
    if ( !result )
      break;
    if ( *v2 & 0xFFFFFFFB )
      return -1;
  }
  return result;
}

__int64 __fastcall sub_411680(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15@2
  unsigned __int64 *v6; // r14@2
  const char *v7; // r13@2
  int *v8; // rax@4
  int *v9; // r12@4
  char v10; // bl@4
  const unsigned __int16 *v11; // rsi@4
  char *v12; // rax@4
  unsigned __int64 v13; // rbx@8
  signed int v14; // ebp@10
  int v15; // er12@12
  char *v17; // rax@19
  char *v18; // r8@19
  signed __int64 v19; // rax@21
  char *v20; // rax@22
  char v21; // al@23
  int v22; // esi@27
  unsigned __int64 v23; // rdx@27
  char *v24; // r8@33
  unsigned __int64 v25; // kr18_8@37
  char *v26; // ST00_8@39
  char *v27; // rax@39
  signed int v28; // edi@47
  signed int v29; // er9@47
  bool v30; // of@48
  signed int v31; // edi@53
  signed int v32; // edi@59
  signed int v33; // edi@65
  signed int v34; // edi@71
  int v35; // [sp+0h] [bp-58h]@2
  char *v36; // [sp+0h] [bp-58h]@17
  char *v37; // [sp+8h] [bp-50h]@22
  char *endptr; // [sp+18h] [bp-40h]@3

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
  v5 = a2;
  v35 = a3;
  v6 = a4;
  v7 = a5;
  if ( !a2 )
    v5 = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( HIBYTE(v11[(unsigned __int8)v10]) & 0x20 )
    v10 = *++v12;
  if ( v10 == 45 )
    goto LABEL_16;
  v13 = strtoul(nptr, v5, v35);
  if ( *v5 == nptr )
  {
    v36 = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = v36;
        if ( v17 )
          goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
LABEL_16:
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      v26 = *v5;
      v27 = strchr(v7, (char)v15);
      v18 = v26;
      if ( !v27 )
      {
LABEL_40:
        *v6 = v13;
        v14 |= 2u;
        return (unsigned int)v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 142129060940101LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
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
          switch ( (_BYTE)v15 )
          {
            case 0x4D:
            case 0x6D:
LABEL_30:
              if ( !is_mul_ok((signed int)v23, v13) || !is_mul_ok((signed int)v23, (signed int)v23 * v13) )
                goto LABEL_38;
              v13 *= (signed int)v23 * (signed __int64)(signed int)v23;
              goto LABEL_33;
            case 0x63:
              goto LABEL_33;
            case 0x4B:
            case 0x6B:
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( !is_mul_ok(v23, v25) )
                goto LABEL_38;
              goto LABEL_33;
            default:
              goto LABEL_40;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_38;
              v13 *= 2LL;
              goto LABEL_33;
            case 0x62:
LABEL_44:
              if ( v13 >> 55 )
                goto LABEL_38;
              v13 <<= 9;
              goto LABEL_33;
            case 0x5A:
LABEL_47:
              v28 = 7;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v28;
              }
              while ( v28 );
              goto LABEL_51;
            case 0x59:
LABEL_53:
              v31 = 8;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 0x54:
            case 0x74:
LABEL_59:
              v32 = 4;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 0x50:
LABEL_65:
              v33 = 5;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 0x45:
LABEL_71:
              v34 = 6;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v34;
              }
              while ( v34 );
LABEL_51:
              v14 |= v29;
              break;
            case 0x47:
            case 0x67:
LABEL_77:
              if ( is_mul_ok((signed int)v23, v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * (signed int)v23 * v13) )
              {
                v13 *= (signed int)v23 * (signed int)v23 * (signed __int64)(signed int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              break;
            case 0x42:
              if ( v13 >> 54 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 10;
              }
              break;
          }
          goto LABEL_33;
        }
        if ( v21 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v15 - 69) )
          {
            case 0uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_71;
            case 1uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 7uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x27uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
            case 0x2DuLL:
            case 0x2EuLL:
              goto LABEL_40;
            case 2uLL:
            case 0x22uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_77;
            case 6uLL:
            case 0x26uLL:
              v22 = 1;
              v23 = 1024LL;
              goto LABEL_37;
            case 8uLL:
            case 0x28uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_30;
            case 0xBuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_65;
            case 0xFuLL:
            case 0x2FuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_59;
            case 0x14uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_53;
            case 0x15uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_47;
            case 0x1DuLL:
              v22 = 1;
              goto LABEL_44;
            case 0x1EuLL:
              v22 = 1;
              break;
          }
LABEL_33:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *v6 = v13;
  return (unsigned int)v14;
}

noreturn void __fastcall  sub_411AB0(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi@1
  int v6; // ebx@1
  int v7; // er10@2
  __int64 v8; // rbp@2
  const char *v9; // rsi@2
  char *v10; // r12@3
  char *v11; // r13@3
  char *v12; // rax@4
  char v13; // [sp+Eh] [bp-2Ah]@6
  char v14; // [sp+Fh] [bp-29h]@6

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_4181C0)[8 * v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_418149[-(signed __int64)v7];
      v14 = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * v7);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, v8);
    abort();
  }
  abort();
}

noreturn void __fastcall  sub_411AB0(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi@1
  int v6; // ebx@1
  int v7; // er10@2
  __int64 v8; // rbp@2
  const char *v9; // rsi@2
  char *v10; // r12@3
  char *v11; // r13@3
  char *v12; // rax@4
  char v13; // [sp+Eh] [bp-2Ah]@6
  char v14; // [sp+Fh] [bp-29h]@6

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v7 = a2;
    v8 = a5;
    v9 = (&off_4181C0)[8 * v5];
    if ( v7 < 0 )
    {
      v13 = a3;
      v11 = &v13;
      v10 = &asc_418149[-(signed __int64)v7];
      v14 = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * v7);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, v8);
    abort();
  }
  abort();
}

__int64 __fastcall sub_411B40(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
{
  char **v5; // r15@2
  unsigned __int64 *v6; // r14@2
  const char *v7; // r13@2
  int *v8; // rax@4
  int *v9; // r12@4
  char v10; // bl@4
  const unsigned __int16 *v11; // rsi@4
  char *v12; // rax@4
  unsigned __int64 v13; // rbx@8
  signed int v14; // ebp@10
  int v15; // er12@12
  char *v17; // rax@19
  char *v18; // r8@19
  signed __int64 v19; // rax@21
  char *v20; // rax@22
  char v21; // al@23
  int v22; // esi@27
  unsigned __int64 v23; // rdx@27
  char *v24; // r8@33
  unsigned __int64 v25; // kr18_8@37
  char *v26; // ST00_8@39
  char *v27; // rax@39
  signed int v28; // edi@47
  signed int v29; // er9@47
  bool v30; // of@48
  signed int v31; // edi@53
  signed int v32; // edi@59
  signed int v33; // edi@65
  signed int v34; // edi@71
  int v35; // [sp+0h] [bp-58h]@2
  char *v36; // [sp+0h] [bp-58h]@17
  char *v37; // [sp+8h] [bp-50h]@22
  char *endptr; // [sp+18h] [bp-40h]@3

  if ( a3 > 0x24 )
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoumax");
  v5 = a2;
  v35 = a3;
  v6 = a4;
  v7 = a5;
  if ( !a2 )
    v5 = &endptr;
  v8 = __errno_location();
  *v8 = 0;
  v9 = v8;
  v10 = *nptr;
  v11 = *__ctype_b_loc();
  v12 = nptr;
  while ( HIBYTE(v11[(unsigned __int8)v10]) & 0x20 )
    v10 = *++v12;
  if ( v10 == 45 )
    goto LABEL_16;
  v13 = __strtoul_internal(nptr, v5, v35, 0);
  if ( *v5 == nptr )
  {
    v36 = *v5;
    if ( v7 )
    {
      v15 = (unsigned __int8)*nptr;
      if ( (_BYTE)v15 )
      {
        v14 = 0;
        v13 = 1LL;
        v17 = strchr(v7, (char)v15);
        v18 = v36;
        if ( v17 )
          goto LABEL_20;
      }
    }
    goto LABEL_16;
  }
  if ( *v9 )
  {
    v14 = 1;
    if ( *v9 == 34 )
      goto LABEL_11;
LABEL_16:
    return 4;
  }
  v14 = 0;
LABEL_11:
  if ( v7 )
  {
    v15 = (unsigned __int8)**v5;
    if ( (_BYTE)v15 )
    {
      v26 = *v5;
      v27 = strchr(v7, (char)v15);
      v18 = v26;
      if ( !v27 )
      {
LABEL_40:
        *v6 = v13;
        v14 |= 2u;
        return (unsigned int)v14;
      }
LABEL_20:
      if ( (unsigned __int8)(v15 - 69) > 0x2Fu
        || (v19 = 142129060940101LL, !_bittest64(&v19, (unsigned int)(v15 - 69)))
        || (v37 = v18, v20 = strchr(v7, 48), v18 = v37, !v20) )
      {
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
          switch ( (_BYTE)v15 )
          {
            case 0x4D:
            case 0x6D:
LABEL_30:
              if ( !is_mul_ok((signed int)v23, v13) || !is_mul_ok((signed int)v23, (signed int)v23 * v13) )
                goto LABEL_38;
              v13 *= (signed int)v23 * (signed __int64)(signed int)v23;
              goto LABEL_33;
            case 0x63:
              goto LABEL_33;
            case 0x4B:
            case 0x6B:
LABEL_37:
              v25 = v13;
              v13 *= v23;
              if ( !is_mul_ok(v23, v25) )
                goto LABEL_38;
              goto LABEL_33;
            default:
              goto LABEL_40;
            case 0x77:
              if ( (v13 & 0x8000000000000000LL) != 0LL )
                goto LABEL_38;
              v13 *= 2LL;
              goto LABEL_33;
            case 0x62:
LABEL_44:
              if ( v13 >> 55 )
                goto LABEL_38;
              v13 <<= 9;
              goto LABEL_33;
            case 0x5A:
LABEL_47:
              v28 = 7;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v28;
              }
              while ( v28 );
              goto LABEL_51;
            case 0x59:
LABEL_53:
              v31 = 8;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v31;
              }
              while ( v31 );
              goto LABEL_51;
            case 0x54:
            case 0x74:
LABEL_59:
              v32 = 4;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v32;
              }
              while ( v32 );
              goto LABEL_51;
            case 0x50:
LABEL_65:
              v33 = 5;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v33;
              }
              while ( v33 );
              goto LABEL_51;
            case 0x45:
LABEL_71:
              v34 = 6;
              v29 = 0;
              do
              {
                v30 = (unsigned __int64)(signed int)v23 * (unsigned __int128)v13 >> 64 != 0;
                v13 *= (signed int)v23;
                if ( v30 )
                {
                  v29 = 1;
                  v13 = -1LL;
                }
                --v34;
              }
              while ( v34 );
LABEL_51:
              v14 |= v29;
              break;
            case 0x47:
            case 0x67:
LABEL_77:
              if ( is_mul_ok((signed int)v23, v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * v13)
                && is_mul_ok((signed int)v23, (signed int)v23 * (signed int)v23 * v13) )
              {
                v13 *= (signed int)v23 * (signed int)v23 * (signed __int64)(signed int)v23;
              }
              else
              {
                v13 = -1LL;
                v14 |= 1u;
              }
              break;
            case 0x42:
              if ( v13 >> 54 )
              {
LABEL_38:
                v14 = 1;
                v13 = -1LL;
              }
              else
              {
                v13 <<= 10;
              }
              break;
          }
          goto LABEL_33;
        }
        if ( v21 != 66 )
        {
          switch ( (unsigned __int64)(unsigned __int8)(v15 - 69) )
          {
            case 0uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_71;
            case 1uLL:
            case 3uLL:
            case 4uLL:
            case 5uLL:
            case 7uLL:
            case 9uLL:
            case 0xAuLL:
            case 0xCuLL:
            case 0xDuLL:
            case 0xEuLL:
            case 0x10uLL:
            case 0x11uLL:
            case 0x12uLL:
            case 0x13uLL:
            case 0x16uLL:
            case 0x17uLL:
            case 0x18uLL:
            case 0x19uLL:
            case 0x1AuLL:
            case 0x1BuLL:
            case 0x1CuLL:
            case 0x1FuLL:
            case 0x20uLL:
            case 0x21uLL:
            case 0x23uLL:
            case 0x24uLL:
            case 0x25uLL:
            case 0x27uLL:
            case 0x29uLL:
            case 0x2AuLL:
            case 0x2BuLL:
            case 0x2CuLL:
            case 0x2DuLL:
            case 0x2EuLL:
              goto LABEL_40;
            case 2uLL:
            case 0x22uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_77;
            case 6uLL:
            case 0x26uLL:
              v22 = 1;
              v23 = 1024LL;
              goto LABEL_37;
            case 8uLL:
            case 0x28uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_30;
            case 0xBuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_65;
            case 0xFuLL:
            case 0x2FuLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_59;
            case 0x14uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_53;
            case 0x15uLL:
              v22 = 1;
              LODWORD(v23) = 1024;
              goto LABEL_47;
            case 0x1DuLL:
              v22 = 1;
              goto LABEL_44;
            case 0x1EuLL:
              v22 = 1;
              break;
          }
LABEL_33:
          v24 = &v18[v22];
          *v5 = v24;
          if ( *v24 )
            v14 |= 2u;
          goto LABEL_13;
        }
      }
      v22 = 2;
      v23 = 1000LL;
      goto LABEL_28;
    }
  }
LABEL_13:
  *v6 = v13;
  return (unsigned int)v14;
}

int __fastcall sub_411F80(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_412140(stream) )
  {
    result = fclose(stream);
  }
  else
  {
    v1 = __errno_location();
    v2 = *v1;
    v3 = v1;
    result = fclose(stream);
    if ( v2 )
    {
      *v3 = v2;
      result = -1;
    }
  }
  return result;
}

__int64 __fastcall sub_412000(char a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // ebx@3
  int v6; // eax@8
  int *v7; // rax@10
  int v8; // edi@10
  int v9; // er12@10
  int *v10; // rbp@10
  __int64 v11; // [sp+30h] [bp-38h]@1
  __int64 v12; // [sp+38h] [bp-30h]@1

  v11 = a3;
  v12 = a4;
  if ( a2 == 1030 )
  {
    if ( dword_61CD18 < 0 )
    {
      v4 = sub_412000(a1);
      if ( v4 >= 0 && dword_61CD18 == -1 )
      {
LABEL_8:
        v6 = fcntl((unsigned __int8)v4, 1);
        if ( v6 < 0 || fcntl((unsigned __int8)v4, 2, v6 | 1u) == -1 )
        {
          v7 = __errno_location();
          v8 = v4;
          v4 = -1;
          v9 = *v7;
          v10 = v7;
          close(v8);
          *v10 = v9;
        }
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = fcntl(a1, 1030, (unsigned int)v11);
      if ( v4 >= 0 || *__errno_location() != 22 )
      {
        dword_61CD18 = 1;
      }
      else
      {
        v4 = sub_412000(a1);
        if ( v4 >= 0 )
        {
          dword_61CD18 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

int __fastcall sub_412140(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_412180(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_412180(FILE *a1, __off_t a2, int a3)
{
  __off_t v3; // rax@2
  int v4; // er12@5
  int v5; // eax@5

  if ( a1->_IO_read_end != a1->_IO_read_ptr || a1->_IO_write_ptr != a1->_IO_write_base || a1->_IO_save_base )
  {
    LODWORD(v3) = fseeko(a1, a2, a3);
  }
  else
  {
    v4 = a3;
    v5 = fileno(a1);
    v3 = lseek(v5, a2, v4);
    if ( v3 != -1 )
    {
      a1->_flags &= 0xFFFFFFEF;
      a1->_offset = v3;
      LODWORD(v3) = 0;
    }
  }
  return v3;
}

__int64 __fastcall sub_4121E0(__int64 a1, __int64 a2)
{
  signed __int64 v2; // r11@1
  int v3; // er12@1
  int v4; // ebp@1
  __int64 v5; // rbx@1
  int v6; // er9@1
  int v7; // er10@1
  int v8; // er8@1
  int v9; // er14@4
  int v10; // edx@4
  __int64 *v11; // rax@5
  unsigned __int64 v12; // r13@5
  signed __int64 v13; // rdx@5
  __int64 v14; // rcx@6
  __int64 result; // rax@8
  __int64 *v16; // rax@9
  __int64 v17; // rdx@9
  __int64 v18; // rcx@10

  v2 = a1 + 8;
  v3 = *(_DWORD *)(a2 + 44);
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 48);
  v6 = *(_DWORD *)(a2 + 44);
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 48);
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
      v12 = v2 + 8 * (v6 + (unsigned __int64)(unsigned int)(v10 - 1));
      v13 = v7 - (signed __int64)v6;
      do
      {
        v14 = *v11;
        *v11 = v11[v13];
        v11[v13] = v14;
        ++v11;
      }
      while ( (__int64 *)v12 != v11 );
      if ( v7 <= v8 )
        break;
    }
  }
  *(_DWORD *)(a2 + 48) = v4;
  result = (unsigned int)(v4 - v8);
  *(_DWORD *)(a2 + 44) = result + v3;
  return result;
}

signed __int64 __fastcall sub_4122C0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
{
  const char *v9; // r14@1
  char *v10; // rbp@1
  size_t v11; // r13@5
  char **v12; // rbx@6
  __int64 v13; // r12@6
  const char *v14; // r15@6
  const char *v15; // rdi@12
  __int64 v16; // r15@12
  char **v17; // rbp@12
  char *v18; // rdx@26
  signed __int64 result; // rax@26
  int v20; // edx@31
  int v21; // eax@31
  int v22; // ecx@31
  char *v23; // rdx@35
  __int64 v24; // rbx@28
  char *v25; // rax@28
  __int64 v26; // rbx@49
  char *v27; // rax@49
  const char *v28; // r12@57
  __int64 v29; // rbp@57
  char *v30; // rax@57
  __int64 v31; // rbx@64
  __int64 v32; // rbp@64
  char *v33; // rax@64
  FILE *v34; // rdi@64
  char **v35; // rbx@64
  _BYTE *v36; // rbp@64
  signed __int64 v37; // r12@64
  char *v38; // r8@67
  const char *v39; // r12@62
  __int64 v40; // rbp@62
  char *v41; // rax@62
  char **v42; // [sp+0h] [bp-88h]@1
  int v43; // [sp+Ch] [bp-7Ch]@1
  char *s1; // [sp+10h] [bp-78h]@6
  char *s1a; // [sp+10h] [bp-78h]@12
  _BYTE *ptr; // [sp+18h] [bp-70h]@12
  _DWORD *v47; // [sp+20h] [bp-68h]@1
  char *s; // [sp+30h] [bp-58h]@1
  signed int v49; // [sp+38h] [bp-50h]@12
  char v50; // [sp+3Fh] [bp-49h]@1
  int v51; // [sp+40h] [bp-48h]@1
  signed int v52; // [sp+44h] [bp-44h]@12
  signed int v53; // [sp+48h] [bp-40h]@12

  v51 = a1;
  v9 = *(const char **)(a7 + 32);
  s = a3;
  v42 = a4;
  v47 = a5;
  v10 = *(char **)(a7 + 32);
  v43 = a6;
  v50 = *v9;
  if ( *v9 != 61 && *v9 )
  {
    do
      ++v10;
    while ( *v10 && *v10 != 61 );
    v11 = v10 - v9;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = a4;
  v13 = 0LL;
  s1 = *a4;
  v14 = *a4;
  if ( !*a4 )
  {
LABEL_24:
    if ( !v43 || *(_BYTE *)(a2[*(_DWORD *)a7] + 1) == 45 || (v18 = strchr(s, v50), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
      }
      *(_QWORD *)(a7 + 32) = 0LL;
      ++*(_DWORD *)a7;
      *(_DWORD *)(a7 + 8) = 0;
      result = 63LL;
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
    v13 = (signed int)v13 + 1;
  }
  v12 = 0LL;
  v52 = -1;
  v15 = s1;
  v16 = 0LL;
  v49 = 0;
  v53 = 0;
  ptr = 0LL;
  s1a = v10;
  v17 = v42;
  do
  {
    if ( strncmp(v15, v9, v11) )
      goto LABEL_20;
    if ( v12 )
    {
      if ( (v43
         || *((_DWORD *)v12 + 2) != *((_DWORD *)v17 + 2)
         || v12[2] != v17[2]
         || *((_DWORD *)v12 + 6) != *((_DWORD *)v17 + 6))
        && !v49 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((signed int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v53 = 1;
            ptr[v52] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v49 = 1;
        }
        else
        {
          v49 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v52 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v49 )
  {
    if ( a8 )
    {
      if ( v49 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = *(const char **)(a7 + 32);
      }
      else
      {
        flockfile(stderr);
        v31 = *(_QWORD *)(a7 + 32);
        v32 = *a2;
        v33 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v33, v32);
        v34 = stderr;
        v35 = v42;
        v36 = ptr;
        v37 = (signed __int64)&ptr[v13 + 1];
        do
        {
          if ( *v36 )
          {
            v38 = *v35;
            __fprintf_chk(v34, 1LL, " '%s%s'", a9);
            v34 = stderr;
          }
          ++v36;
          v35 += 4;
        }
        while ( (_BYTE *)v37 != v36 );
        fputc(10, v34);
        funlockfile(stderr);
        v9 = *(const char **)(a7 + 32);
      }
    }
    if ( v53 )
      free(ptr);
    *(_QWORD *)(a7 + 32) = &v9[strlen(v9)];
    ++*(_DWORD *)a7;
    *(_DWORD *)(a7 + 8) = 0;
    result = 63LL;
  }
  else
  {
    if ( !v12 )
      goto LABEL_24;
    LODWORD(v13) = v52;
LABEL_31:
    v20 = *(_DWORD *)a7;
    *(_QWORD *)(a7 + 32) = 0LL;
    v21 = v20 + 1;
    *(_DWORD *)a7 = v20 + 1;
    v22 = *((_DWORD *)v12 + 2);
    if ( *v10 )
    {
      if ( v22 )
      {
        *(_QWORD *)(a7 + 16) = v10 + 1;
        goto LABEL_33;
      }
      if ( a8 )
      {
        v28 = *v12;
        v29 = *a2;
        v30 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v30, v29);
      }
      *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
      result = 63LL;
    }
    else
    {
      if ( v22 != 1 )
        goto LABEL_33;
      if ( v21 >= v51 )
      {
        if ( a8 )
        {
          v39 = *v12;
          v40 = *a2;
          v41 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v41, v40);
        }
        *(_DWORD *)(a7 + 8) = *((_DWORD *)v12 + 6);
        result = 5 * (unsigned int)(*s != 58) + 58;
      }
      else
      {
        *(_DWORD *)a7 = v20 + 2;
        *(_QWORD *)(a7 + 16) = a2[v21];
LABEL_33:
        if ( v47 )
          *v47 = v13;
        v23 = v12[2];
        result = *((_DWORD *)v12 + 6);
        if ( v23 )
        {
          *(_DWORD *)v23 = result;
          result = 0LL;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_4128E0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
{
  int v8; // er13@1
  signed int v9; // eax@2
  int v10; // ebp@2
  __int64 *v11; // r12@2
  char *v12; // r15@2
  _BYTE *v13; // rdx@6
  char v14; // al@8
  char v15; // al@9
  unsigned int v16; // eax@12
  bool v17; // cf@17
  bool v18; // zf@17
  signed __int64 v19; // rcx@18
  const char *v20; // rdi@18
  __int64 v21; // r14@18
  _BYTE *v22; // rsi@18
  int v23; // edx@22
  int v24; // ecx@22
  int v25; // eax@22
  int v26; // er14@32
  char *v27; // rax@32
  signed __int64 v28; // r8@32
  char v29; // cl@36
  signed int v31; // edx@47
  int v32; // ST3C_4@49
  __int64 v33; // rax@51
  __int64 v34; // rcx@53
  int v35; // esi@53
  char v36; // cl@57
  int v37; // ST3C_4@62
  char *v38; // rax@62
  __int64 v39; // rax@69
  unsigned int v40; // eax@71
  int v41; // ST3C_4@73
  char *v42; // rax@73
  char v43; // dl@75
  __int64 v44; // rax@76
  int v45; // edx@78
  __int64 v46; // rax@78
  __int64 v47; // rbp@85
  char *v48; // rax@85
  __int64 v49; // rbp@94
  char *v50; // rax@94
  __int64 v51; // rbp@98
  char *v52; // rax@98
  char **v53; // [sp+8h] [bp-60h]@1
  _DWORD *v54; // [sp+10h] [bp-58h]@1
  char v55; // [sp+1Ch] [bp-4Ch]@32
  _BYTE *v56; // [sp+20h] [bp-48h]@32
  signed __int64 v57; // [sp+28h] [bp-40h]@32

  v53 = a4;
  v54 = a5;
  v8 = *(_DWORD *)(a7 + 4);
  if ( a1 <= 0 )
    goto LABEL_46;
  v9 = *(_DWORD *)a7;
  v10 = a1;
  v11 = (__int64 *)a2;
  v12 = a3;
  *(_QWORD *)(a7 + 16) = 0LL;
  if ( !v9 )
  {
    *(_DWORD *)a7 = 1;
    v9 = 1;
LABEL_4:
    *(_DWORD *)(a7 + 48) = v9;
    *(_DWORD *)(a7 + 44) = v9;
    *(_QWORD *)(a7 + 32) = 0LL;
    if ( *a3 == 45 )
    {
      *(_DWORD *)(a7 + 40) = 2;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else if ( *a3 == 43 )
    {
      *(_DWORD *)(a7 + 40) = 0;
      v12 = a3 + 1;
      v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
      if ( !a8 )
      {
        v41 = a6;
        v42 = getenv("POSIXLY_CORRECT");
        a6 = v41;
        if ( !v42 )
        {
          *(_DWORD *)(a7 + 40) = 1;
          v13 = *(_BYTE **)(a7 + 32);
          goto LABEL_27;
        }
        v13 = *(_BYTE **)(a7 + 32);
      }
      *(_DWORD *)(a7 + 40) = 0;
    }
LABEL_27:
    *(_DWORD *)(a7 + 24) = 1;
    v14 = *v12;
    goto LABEL_28;
  }
  if ( !*(_DWORD *)(a7 + 24) )
    goto LABEL_4;
  v14 = *a3;
  v13 = *(_BYTE **)(a7 + 32);
  if ( !((v14 - 43) & 0xFD) )
  {
    v15 = (v12++)[1];
    if ( v15 == 58 )
      v8 = 0;
    if ( !v13 )
      goto LABEL_12;
    goto LABEL_31;
  }
LABEL_28:
  if ( v14 == 58 )
    v8 = 0;
  if ( !v13 )
    goto LABEL_12;
LABEL_31:
  if ( !*v13 )
  {
LABEL_12:
    v16 = *(_DWORD *)a7;
    if ( *(_DWORD *)(a7 + 48) > *(_DWORD *)a7 )
      *(_DWORD *)(a7 + 48) = v16;
    if ( (signed int)v16 < *(_DWORD *)(a7 + 44) )
      *(_DWORD *)(a7 + 44) = v16;
    if ( *(_DWORD *)(a7 + 40) == 1 )
    {
      v31 = *(_DWORD *)(a7 + 48);
      if ( *(_DWORD *)(a7 + 44) == v31 )
      {
        if ( v16 != v31 )
        {
          *(_DWORD *)(a7 + 44) = v16;
          v31 = v16;
        }
      }
      else if ( v16 != v31 )
      {
        v32 = a6;
        sub_4121E0(a2, a7);
        v31 = *(_DWORD *)a7;
        a6 = v32;
      }
      if ( a1 <= v31 )
      {
LABEL_82:
        v16 = v31;
      }
      else
      {
        v33 = v31;
        while ( 1 )
        {
          v34 = v11[v33];
          v35 = v33;
          v31 = v33;
          if ( *(_BYTE *)v34 == 45 )
          {
            if ( *(_BYTE *)(v34 + 1) )
              break;
          }
          v31 = v33++ + 1;
          *(_DWORD *)a7 = v35 + 1;
          if ( a1 <= (signed int)v33 )
            goto LABEL_82;
        }
        v16 = *(_DWORD *)a7;
      }
      *(_DWORD *)(a7 + 48) = v31;
    }
    v17 = a1 < v16;
    v18 = a1 == v16;
    if ( a1 == v16 )
    {
      v10 = *(_DWORD *)(a7 + 48);
      v23 = *(_DWORD *)(a7 + 44);
LABEL_44:
      if ( v23 != v10 )
        *(_DWORD *)a7 = v23;
      goto LABEL_46;
    }
    v19 = 3LL;
    v20 = "--";
    v21 = v11[v16];
    v22 = (_BYTE *)v11[v16];
    do
    {
      if ( !v19 )
        break;
      v17 = *v22 < (const unsigned __int8)*v20;
      v18 = *v22++ == *v20++;
      --v19;
    }
    while ( v18 );
    if ( (!v17 && !v18) == v17 )
    {
      v23 = *(_DWORD *)(a7 + 44);
      v24 = *(_DWORD *)(a7 + 48);
      v25 = v16 + 1;
      *(_DWORD *)a7 = v25;
      if ( v23 == v24 )
      {
        *(_DWORD *)(a7 + 44) = v25;
        v23 = v25;
      }
      else if ( v25 != v24 )
      {
        sub_4121E0((__int64)v11, a7);
        v23 = *(_DWORD *)(a7 + 44);
      }
      *(_DWORD *)(a7 + 48) = v10;
      *(_DWORD *)a7 = v10;
      goto LABEL_44;
    }
    if ( *(_BYTE *)v21 == 45 )
    {
      v36 = *(_BYTE *)(v21 + 1);
      if ( v36 )
      {
        if ( v53 )
        {
          if ( v36 == 45 )
          {
            *(_QWORD *)(a7 + 32) = v21 + 2;
            v40 = sub_4122C0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_4122C0(v10, v11, v12, v53, v54, a6, a7, v8, 4292938LL);
              if ( v26 != -1 )
                return (unsigned int)v26;
              v21 = v11[*(_DWORD *)a7];
            }
          }
        }
        v13 = (_BYTE *)(v21 + 1);
        goto LABEL_32;
      }
    }
    if ( *(_DWORD *)(a7 + 40) )
    {
      *(_QWORD *)(a7 + 16) = v21;
      v26 = 1;
      *(_DWORD *)a7 = v16 + 1;
      return (unsigned int)v26;
    }
LABEL_46:
    return (unsigned int)-1;
  }
LABEL_32:
  v56 = v13;
  *(_QWORD *)(a7 + 32) = v13 + 1;
  v26 = *v13;
  v57 = (signed __int64)(v13 + 1);
  v55 = *v13;
  v27 = strchr(v12, v26);
  v28 = v57;
  if ( !v56[1] )
    ++*(_DWORD *)a7;
  if ( (unsigned __int8)(v55 - 58) > 1u && v27 )
  {
    v29 = v27[1];
    if ( *v27 == 87 && v53 && v29 == 59 )
    {
      if ( v56[1] )
      {
LABEL_71:
        *(_QWORD *)(a7 + 32) = v28;
        *(_QWORD *)(a7 + 16) = 0LL;
        v40 = sub_4122C0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
LABEL_72:
        return v40;
      }
      v39 = *(_DWORD *)a7;
      if ( (_DWORD)v39 != v10 )
      {
        v28 = v11[v39];
        goto LABEL_71;
      }
      if ( v8 )
      {
        v51 = *v11;
        v52 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
        __fprintf_chk(stderr, 1LL, v52, v51);
      }
      *(_DWORD *)(a7 + 8) = v26;
      v26 = 5 * (*v12 != 58) + 58;
    }
    else if ( v29 == 58 )
    {
      v43 = v56[1];
      if ( v27[2] == 58 )
      {
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
          ++*(_DWORD *)a7;
        }
        else
        {
          *(_QWORD *)(a7 + 16) = 0LL;
        }
      }
      else
      {
        v44 = *(_DWORD *)a7;
        if ( v43 )
        {
          *(_QWORD *)(a7 + 16) = v57;
          *(_DWORD *)a7 = v44 + 1;
        }
        else if ( v10 == (_DWORD)v44 )
        {
          if ( v8 )
          {
            v49 = *v11;
            v50 = dcgettext(0LL, "%s: option requires an argument -- '%c'\n", 5);
            __fprintf_chk(stderr, 1LL, v50, v49);
          }
          *(_DWORD *)(a7 + 8) = v26;
          v26 = 5 * (*v12 != 58) + 58;
        }
        else
        {
          v45 = v44 + 1;
          v46 = v11[v44];
          *(_DWORD *)a7 = v45;
          *(_QWORD *)(a7 + 16) = v46;
        }
      }
      *(_QWORD *)(a7 + 32) = 0LL;
    }
  }
  else
  {
    if ( v8 )
    {
      v47 = *v11;
      v48 = dcgettext(0LL, "%s: invalid option -- '%c'\n", 5);
      __fprintf_chk(stderr, 1LL, v48, v47);
    }
    *(_DWORD *)(a7 + 8) = v26;
    v26 = 63;
  }
  return (unsigned int)v26;
}

__int64 __fastcall sub_412EB0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_61CD20 = dword_61C57C;
  dword_61CD24 = dword_61C578;
  result = sub_4128E0(a1, a2, a3, a4, a5, a6, (__int64)&dword_61CD20, a7);
  dword_61C57C = dword_61CD20;
  nptr = (char *)qword_61CD30;
  dword_61C574 = dword_61CD28;
  return result;
}

__int64 __fastcall sub_412F30(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_412EB0(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_412FB0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

  if ( !s )
  {
    a3 = 1LL;
    v6 = "Ordering options:\n\n" + 19;
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !sub_40BD10(0) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_413030(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax@8
  signed __int64 v4; // r9@9
  signed __int64 v5; // rcx@16
  _BYTE *v6; // rdi@16

  if ( !a3 )
    return 0LL;
  if ( (unsigned __int8)a1 & 7 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( !((unsigned __int8)a1 & 7) )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((signed __int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && !(((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( ((v4 ^ *(_QWORD *)a1) - 72340172838076673LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = (signed __int64)(a1 + 1);
    v6 = &a1[a3];
    while ( 1 )
    {
      result = (_BYTE *)v5;
      if ( (_BYTE *)v5 == v6 )
        break;
      if ( *(_BYTE *)(++v5 - 1) == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

int __fastcall sub_413140(__int64 a1, struct timespec *a2)
{
  signed __int64 v2; // rbx@2
  int result; // eax@5
  __int64 v4; // [sp+0h] [bp-28h]@5
  __int64 v5; // [sp+8h] [bp-20h]@2

  if ( *(_QWORD *)(a1 + 8) > 0x3B9AC9FFuLL )
  {
    *__errno_location() = 22;
    result = -1;
  }
  else
  {
    v2 = *(_QWORD *)a1;
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 > 2073600 )
    {
      while ( 1 )
      {
        v4 = 2073600LL;
        v2 -= 2073600LL;
        result = nanosleep((const struct timespec *)&v4, a2);
        if ( result )
          break;
        v5 = 0LL;
        if ( v2 <= 2073600 )
          goto LABEL_8;
      }
      if ( a2 )
        a2->tv_sec += v2;
    }
    else
    {
LABEL_8:
      v4 = v2;
      result = nanosleep((const struct timespec *)&v4, a2);
    }
  }
  return result;
}

noreturn void  sub_4131F0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, "%s\n", v0);
  exit(status);
}

int __fastcall sub_413230(__int64 a1, __int64 a2)
{
  int (__fastcall *v2)(__int64); // rax@1
  int result; // eax@2

  v2 = *(int (__fastcall **)(__int64))(a1 + 56);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

int __fastcall sub_413250(__int64 a1, __int64 a2)
{
  int (__fastcall *v2)(__int64); // rax@1
  int result; // eax@2

  v2 = *(int (__fastcall **)(__int64))(a1 + 64);
  if ( *(_BYTE *)(a1 + 80) & 1 )
    result = v2(*(_QWORD *)(a1 + 72));
  else
    result = v2(a2);
  return result;
}

signed __int64 __fastcall obstack_begin(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // rbp@2
  signed __int64 v6; // r12@2
  __int64 v7; // rax@5
  signed __int64 v8; // rbp@6
  __int64 v9; // rdx@6
  __int64 v10; // rdx@6
  signed __int64 result; // rax@6

  *(_BYTE *)(a1 + 80) &= 0xFEu;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  if ( a3 )
  {
    v5 = a3;
    v6 = a3 - 1;
  }
  else
  {
    v6 = 15LL;
    v5 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v6;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  LODWORD(v7) = sub_413230(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = (v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(v7 + 8) = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

signed __int64 __fastcall obstack_begin(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // rbp@2
  signed __int64 v6; // r12@2
  __int64 v7; // rax@5
  signed __int64 v8; // rbp@6
  __int64 v9; // rdx@6
  __int64 v10; // rdx@6
  signed __int64 result; // rax@6

  *(_BYTE *)(a1 + 80) &= 0xFEu;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  if ( a3 )
  {
    v5 = a3;
    v6 = a3 - 1;
  }
  else
  {
    v6 = 15LL;
    v5 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v6;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  LODWORD(v7) = sub_413230(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = (v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(v7 + 8) = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

signed __int64 __fastcall obstack_begin(__int64 a1, __int64 a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  signed __int64 v5; // rbp@2
  signed __int64 v6; // r12@2
  __int64 v7; // rax@5
  signed __int64 v8; // rbp@6
  __int64 v9; // rdx@6
  __int64 v10; // rdx@6
  signed __int64 result; // rax@6

  *(_BYTE *)(a1 + 80) &= 0xFEu;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  if ( a3 )
  {
    v5 = a3;
    v6 = a3 - 1;
  }
  else
  {
    v6 = 15LL;
    v5 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v6;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  LODWORD(v7) = sub_413230(a1, a2);
  *(_QWORD *)(a1 + 8) = v7;
  if ( !v7 )
    obstack_alloc_failed_handler();
  v8 = (v7 + v6 + 16) & -v5;
  v9 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v8;
  v10 = v7 + v9;
  *(_QWORD *)(a1 + 24) = v8;
  *(_QWORD *)v7 = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(v7 + 8) = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

void __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  JUMPOUT(&loc_413270);
}

int __fastcall obstack_newchunk(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13@1
  __int64 v5; // rbp@1
  unsigned __int64 v6; // rsi@1
  __int64 v7; // rax@1
  unsigned __int8 v8; // cf@1
  unsigned __int64 v9; // rsi@1
  unsigned __int64 v10; // rdx@1
  unsigned __int64 v11; // rbx@1
  __int64 v12; // rax@7
  __int64 v13; // r14@7
  void *v14; // rbx@8
  signed __int64 v15; // rax@8

  v4 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v8 = __CFADD__(v4, a2);
  v6 = v4 + a2;
  v7 = v8;
  v8 = __CFADD__(*(_QWORD *)(a1 + 48), v6);
  v9 = *(_QWORD *)(a1 + 48) + v6;
  LOBYTE(a4) = v8;
  v10 = v4 >> 3;
  v11 = v9 + (v4 >> 3) + 100;
  if ( *(_QWORD *)a1 >= v9 )
    v9 = *(_QWORD *)a1;
  if ( v9 >= v11 )
    v11 = v9;
  if ( v7 || (a4 = v8) != 0 || (v9 = v11, LODWORD(v12) = sub_413230(a1, v11), (v13 = v12) == 0) )
    obstack_alloc_failed_handler(a1, v9, v10, a4);
  *(_QWORD *)(a1 + 8) = v12;
  *(_QWORD *)(v12 + 8) = v5;
  *(_QWORD *)(a1 + 32) = v12 + v11;
  *(_QWORD *)v12 = v12 + v11;
  v14 = (void *)(~*(_QWORD *)(a1 + 48) & (v12 + *(_QWORD *)(a1 + 48) + 16));
  LODWORD(v15) = (unsigned __int64)memcpy(v14, *(const void **)(a1 + 16), v4);
  if ( !(*(_BYTE *)(a1 + 80) & 2) )
  {
    v15 = (v5 + *(_QWORD *)(a1 + 48) + 16) & ~*(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 16) == v15 )
    {
      *(_QWORD *)(v13 + 8) = *(_QWORD *)(v5 + 8);
      LODWORD(v15) = sub_413250(a1, v5);
    }
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = (char *)v14 + v4;
  *(_BYTE *)(a1 + 80) &= 0xFDu;
  return v15;
}

unsigned __int64 __fastcall obstack_allocated_p(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax@1

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    while ( a2 <= result || *(_QWORD *)result < a2 )
    {
      result = *(_QWORD *)(result + 8);
      if ( !result )
        return 0LL;
    }
    result = 1LL;
  }
  return result;
}

void obstack_free(struct obstack *obstack, void *block)
{
  char *v2; // rbp@1
  struct _obstack_chunk *v3; // rsi@1
  char *v4; // rax@3
  struct _obstack_chunk *v5; // r12@4

  v2 = (char *)block;
  v3 = obstack->chunk;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v3 < (struct _obstack_chunk *)v2 )
      {
        v4 = v3->limit;
        if ( v3->limit >= v2 )
          break;
      }
      v5 = v3->prev;
      sub_413250((__int64)obstack, (__int64)v3);
      *((_BYTE *)obstack + 80) |= 2u;
      v3 = v5;
      if ( !v5 )
        goto LABEL_5;
    }
    obstack->next_free = v2;
    obstack->object_base = v2;
    obstack->chunk_limit = v4;
    obstack->chunk = v3;
  }
  else
  {
LABEL_5:
    if ( v2 )
      abort();
  }
}

void obstack_free(struct obstack *obstack, void *block)
{
  char *v2; // rbp@1
  struct _obstack_chunk *v3; // rsi@1
  char *v4; // rax@3
  struct _obstack_chunk *v5; // r12@4

  v2 = (char *)block;
  v3 = obstack->chunk;
  if ( v3 )
  {
    while ( 1 )
    {
      if ( v3 < (struct _obstack_chunk *)v2 )
      {
        v4 = v3->limit;
        if ( v3->limit >= v2 )
          break;
      }
      v5 = v3->prev;
      sub_413250((__int64)obstack, (__int64)v3);
      *((_BYTE *)obstack + 80) |= 2u;
      v3 = v5;
      if ( !v5 )
        goto LABEL_5;
    }
    obstack->next_free = v2;
    obstack->object_base = v2;
    obstack->chunk_limit = v4;
    obstack->chunk = v3;
  }
  else
  {
LABEL_5:
    if ( v2 )
      abort();
  }
}

__int64 __fastcall obstack_memory_used(__int64 a1)
{
  __int64 v1; // rdx@1
  __int64 result; // rax@1
  __int64 v3; // rcx@2

  v1 = *(_QWORD *)(a1 + 8);
  for ( result = 0LL; v1; result += v3 )
  {
    v3 = *(_QWORD *)v1 - v1;
    v1 = *(_QWORD *)(v1 + 8);
  }
  return result;
}

int __fastcall sub_413520(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_411F80(stream);
  if ( v2 )
  {
    if ( !result )
    {
      *__errno_location() = 0;
      return -1;
    }
  }
  else
  {
    if ( !result )
      return result;
    if ( !v1 )
      return -(*__errno_location() != 9);
  }
  return -1;
}

signed __int64 __fastcall sub_413580(double a1)
{
  signed __int64 result; // rax@3
  __int64 v2; // rsi@4
  double v3; // xmm0_8@4
  __int64 v4; // rdx@4
  __int64 v5; // rcx@4
  signed __int64 v6; // rcx@4
  signed __int64 v7; // rdx@4

  if ( a1 <= -9.223372036854776e18 )
  {
    result = 0x8000000000000000LL;
  }
  else if ( a1 < 9.223372036854776e18 )
  {
    v2 = (unsigned int)(signed int)floor(a1);
    v3 = (a1 - (double)(signed int)v2) * 1000000000.0;
    v4 = (unsigned int)(signed int)floor(v3);
    v5 = v3 <= (double)(signed int)v4;
    LOBYTE(v5) = v3 > (double)(signed int)v4;
    v6 = v4 + v5;
    v7 = ((signed __int64)((unsigned __int128)(1237940039285380275LL * v6) >> 64) >> 26) - (v6 >> 63);
    result = v7 + v2;
    if ( v6 - 1000000000 * v7 < 0 )
      --result;
  }
  else
  {
    result = 0x7FFFFFFFFFFFFFFFLL;
  }
  return result;
}

__int64 __fastcall sub_413690(char a1, int a2, __int64 a3, __int64 a4)
{
  signed int v4; // esi@1

  v4 = a2 & 0x80000;
  if ( v4 )
    v4 = 1030;
  return sub_412000(a1, v4, 3LL, a4);
}

FILE *__fastcall sub_4136B0(const char *a1, const char *a2)
{
  FILE *v2; // rax@1
  FILE *v3; // rbx@1
  int v4; // eax@2
  int v6; // er12@4
  int *v7; // rax@7
  int v8; // ebp@7
  int *v9; // rbx@7
  int *v10; // rax@8
  FILE *v11; // rdi@8
  int v12; // er12@8
  int *v13; // rbp@8

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( (unsigned int)v4 <= 2 )
    {
      v6 = sub_413EA0((unsigned int)v4);
      if ( v6 < 0 )
      {
        v10 = __errno_location();
        v11 = v3;
        v3 = 0LL;
        v12 = *v10;
        v13 = v10;
        sub_411F80(v11);
        *v13 = v12;
      }
      else if ( sub_411F80(v3) || (v3 = fdopen(v6, a2)) == 0LL )
      {
        v7 = __errno_location();
        v8 = *v7;
        v9 = v7;
        close(v6);
        *v9 = v8;
        v3 = 0LL;
      }
    }
  }
  return v3;
}

const char *sub_413750()
{
  char *v0; // rax@1
  char *v1; // r15@1
  const char *v2; // rbx@1
  char v3; // bp@4
  size_t v4; // rax@6
  char *v6; // rax@14
  const char *v7; // r13@14
  size_t v8; // rax@16
  signed __int64 v9; // r12@16
  size_t v10; // r14@16
  size_t v11; // rdi@17
  char *v12; // rax@18
  const char *v13; // rbp@18
  size_t v14; // rdi@21
  char *v15; // rax@22
  const char *v16; // r12@24
  int v17; // eax@24
  int v18; // er12@24
  FILE *v19; // r13@28
  const char *v20; // rax@29
  _IO_FILE *v21; // rbx@29
  const char *v22; // r13@29
  char *v23; // rax@30
  int v24; // edi@31
  char *v25; // kr00_8@36
  char *v26; // rdx@36
  int v27; // esi@37
  unsigned int v28; // eax@37
  signed __int64 v29; // rdx@42
  signed __int64 v30; // rax@42
  char *v31; // rax@43
  signed __int64 v32; // rcx@43
  __int64 v33; // rdx@43
  signed __int64 v34; // rsi@45
  unsigned int v35; // ecx@45
  signed __int64 v36; // rdi@45
  char *v37; // rsi@45
  unsigned int v38; // edx@50
  char *v39; // rcx@50
  FILE *v40; // rdi@57
  int v41; // eax@59
  bool v42; // dl@59
  char *v43; // rax@62
  signed __int64 v44; // rax@64
  unsigned __int64 v45; // r9@65
  char *v46; // rsi@65
  char *v47; // r10@65
  unsigned int v48; // ecx@65
  unsigned int v49; // ecx@66
  unsigned int v50; // esi@66
  __int64 v51; // r8@67
  unsigned __int64 v52; // rdi@69
  char *v53; // rcx@69
  char *v54; // r9@69
  unsigned int v55; // edx@69
  unsigned int v56; // edx@70
  unsigned int v57; // ecx@70
  __int64 v58; // rsi@71
  const char *v59; // rax@80
  char *v60; // rdi@80
  FILE *v61; // r13@80
  signed __int64 v62; // [sp+8h] [bp-D0h]@28
  __int64 v63; // [sp+18h] [bp-C0h]@42
  char v64[64]; // [sp+20h] [bp-B8h]@35
  char v65[120]; // [sp+60h] [bp-78h]@35

  v0 = nl_langinfo(14);
  v1 = s;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !s )
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
          v1 = "Ordering options:\n\n" + 19;
LABEL_20:
          s = v1;
          goto LABEL_4;
        }
        memcpy(v12, v7, v10);
LABEL_24:
        v16 = &v13[v9];
        *(_QWORD *)v16 = 3347411969557751907LL;
        *((_WORD *)v16 + 6) = 115;
        *((_DWORD *)v16 + 2) = 1634298977;
        v17 = open(v13, 0);
        v18 = v17;
        if ( v17 >= 0 )
        {
          v1 = 0LL;
          v62 = 0LL;
          v19 = fdopen(v17, "r");
          if ( v19 )
          {
            v20 = v2;
            v21 = v19;
            v22 = v20;
LABEL_30:
            v23 = v21->_IO_read_ptr;
            if ( v23 < v21->_IO_read_end )
            {
LABEL_31:
              v21->_IO_read_ptr = v23 + 1;
              v24 = (unsigned __int8)*v23;
              goto LABEL_32;
            }
            while ( 1 )
            {
              v24 = __uflow(v21);
              if ( v24 == -1 )
                break;
LABEL_32:
              if ( (unsigned int)(v24 - 9) <= 1 || v24 == 32 )
                goto LABEL_30;
              if ( v24 == 35 )
              {
                do
                {
                  v43 = v21->_IO_read_ptr;
                  if ( v43 < v21->_IO_read_end )
                  {
                    v21->_IO_read_ptr = v43 + 1;
                    v41 = (unsigned __int8)*v43;
                    v42 = 1;
                  }
                  else
                  {
                    v41 = __uflow(v21);
                    v42 = v41 != -1;
                  }
                }
                while ( v41 != 10 && v42 );
                if ( v41 == -1 )
                  break;
                goto LABEL_30;
              }
              ungetc(v24, v21);
              if ( fscanf(v21, "%50s %50s", v64, v65) <= 1 )
                break;
              v25 = &v64[strlen(v64)];
              v26 = v65;
              do
              {
                v27 = *(_DWORD *)v26;
                v26 += 4;
                v28 = ~v27 & (v27 - 16843009) & 0x80808080;
              }
              while ( !v28 );
              if ( !(~v27 & (v27 - 16843009) & 0x8080) )
                v28 >>= 16;
              if ( !(~v27 & (v27 - 16843009) & 0x8080) )
                v26 += 2;
              v29 = &v26[-__CFADD__((_BYTE)v28, (_BYTE)v28) - 3] - v65;
              v30 = v25 - v64 + v29;
              v63 = v29;
              if ( v62 )
              {
                v44 = v62 + v30;
                v62 = v44 + 2;
                v31 = (char *)realloc(v1, v44 + 3);
                v33 = v63;
                v32 = v25 - v64;
              }
              else
              {
                v62 = v30 + 2;
                v31 = (char *)malloc(v30 + 3);
                v32 = v25 - v64;
                v33 = v63;
              }
              if ( !v31 )
              {
                v59 = v22;
                v60 = v1;
                v61 = v21;
                v1 = "Ordering options:\n\n" + 19;
                v2 = v59;
                free(v60);
                sub_411F80(v61);
                goto LABEL_26;
              }
              v34 = -2 - v32;
              v35 = v32 + 1;
              v36 = v62 - v33;
              v37 = &v31[v62 - v33] + v34;
              if ( v35 >= 8 )
              {
                *(_QWORD *)v37 = *(_QWORD *)v64;
                *(_QWORD *)&v37[v35 - 8] = *(_QWORD *)&v64[v35 - 8];
                v45 = (unsigned __int64)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v46 = &v37[-v45];
                v47 = (char *)(v64 - v46);
                v48 = ((_DWORD)v46 + v35) & 0xFFFFFFF8;
                if ( v48 >= 8 )
                {
                  v49 = v48 & 0xFFFFFFF8;
                  v50 = 0;
                  do
                  {
                    v51 = v50;
                    v50 += 8;
                    *(_QWORD *)(v45 + v51) = *(_QWORD *)&v47[v51];
                  }
                  while ( v50 < v49 );
                }
              }
              else if ( v35 & 4 )
              {
                *(_DWORD *)v37 = *(_DWORD *)v64;
                *(_DWORD *)&v37[v35 - 4] = *(_DWORD *)&v64[v35 - 4];
              }
              else if ( v35 )
              {
                *v37 = v64[0];
                if ( v35 & 2 )
                  *(_WORD *)&v37[v35 - 2] = *(_WORD *)&v64[v35 - 2];
              }
              v38 = v33 + 1;
              v39 = &v31[v36 - 1];
              if ( v38 >= 8 )
              {
                *(_QWORD *)v39 = *(_QWORD *)v65;
                *(_QWORD *)&v39[v38 - 8] = *(_QWORD *)&v65[v38 - 8];
                v52 = (unsigned __int64)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v53 = &v39[-v52];
                v54 = (char *)(v65 - v53);
                v55 = ((_DWORD)v53 + v38) & 0xFFFFFFF8;
                if ( v55 >= 8 )
                {
                  v56 = v55 & 0xFFFFFFF8;
                  v57 = 0;
                  do
                  {
                    v58 = v57;
                    v57 += 8;
                    *(_QWORD *)(v52 + v58) = *(_QWORD *)&v54[v58];
                  }
                  while ( v57 < v56 );
                }
              }
              else if ( v38 & 4 )
              {
                *(_DWORD *)v39 = *(_DWORD *)v65;
                *(_DWORD *)&v39[v38 - 4] = *(_DWORD *)&v65[v38 - 4];
              }
              else if ( v38 )
              {
                *v39 = v65[0];
                if ( v38 & 2 )
                  *(_WORD *)&v39[v38 - 2] = *(_WORD *)&v65[v38 - 2];
              }
              v1 = v31;
              v23 = v21->_IO_read_ptr;
              if ( v23 < v21->_IO_read_end )
                goto LABEL_31;
            }
            v40 = v21;
            v2 = v22;
            sub_411F80(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = "Ordering options:\n\n" + 19;
LABEL_26:
        free((void *)v13);
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
      v4 = strlen(v1);
      v1 += v4 + strlen(&v1[v4 + 1]) + 2;
      v3 = *v1;
      if ( !*v1 )
        goto LABEL_11;
    }
    v2 = &v1[strlen(v1) + 1];
  }
LABEL_11:
  if ( !*v2 )
    v2 = "ASCII";
  return v2;
}

int __fastcall sub_413CC0(char *s1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 v4; // r14@1
  __int64 v5; // r13@1
  char *v6; // r12@1
  const char *v7; // rbp@1
  int *v8; // r15@1
  size_t v9; // rbx@2
  size_t v10; // rax@2
  int result; // eax@4

  v4 = a2;
  v5 = a4;
  v6 = s1;
  v7 = a3;
  v8 = __errno_location();
  while ( 1 )
  {
    *v8 = 0;
    result = strcoll(v6, v7);
    if ( result )
      break;
    v9 = strlen(v6) + 1;
    v6 += v9;
    v10 = strlen(v7) + 1;
    v7 += v10;
    v5 -= v10;
    v4 -= v9;
    if ( !v4 )
      return -(v5 != 0);
    if ( !v5 )
      return 1;
  }
  return result;
}

__int64 __fastcall sub_413D80(char *s1, size_t n, void *s2, __int64 a4)
{
  const char *v4; // r13@1
  __int64 v5; // rbp@1
  char v6; // r9@3
  char v7; // r8@3
  char v8; // ST0F_1@3
  char v9; // ST08_1@3
  int v10; // edx@3
  int *v12; // rax@5

  v4 = (const char *)s2;
  v5 = a4;
  if ( n == a4 && !memcmp(s1, s2, n) )
  {
    v12 = __errno_location();
    v10 = 0;
    *v12 = 0;
  }
  else
  {
    v6 = s1[n];
    v7 = v4[v5];
    s1[n] = 0;
    v4[v5] = 0;
    v8 = v6;
    v9 = v7;
    v10 = sub_413CC0(s1, n + 1, v4, v5 + 1);
    s1[n] = v8;
    v4[v5] = v9;
  }
  return (unsigned int)v10;
}

int __fastcall sub_413E30(char *s1, size_t n, void *s2, __int64 a4)
{
  const char *v4; // r13@1
  __int64 v5; // rbp@1
  int result; // eax@3

  v4 = (const char *)s2;
  v5 = a4;
  if ( n == a4 && !memcmp(s1, s2, n) )
  {
    *__errno_location() = 0;
    result = 0;
  }
  else
  {
    result = sub_413CC0(s1, n, v4, v5);
  }
  return result;
}

__int64 __fastcall sub_413EA0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_412000(a1, 0, 3LL, a4);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_413F20(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_61C3E8 )
    v1 = unk_61C3E8;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_413F38(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_61BE20;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
