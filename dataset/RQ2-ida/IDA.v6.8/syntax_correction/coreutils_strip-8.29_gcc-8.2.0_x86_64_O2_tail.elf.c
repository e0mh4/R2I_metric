#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
signed __int64 __usercall main(char **a1, char **a2, int a3, signed __int64 a4)
{
  int v4; // ebp@1
  char *v5; // rdi@4
  int v6; // eax@6
  char *v7; // rdx@6
  char *v8; // rdi@6
  signed __int64 v9; // rax@8
  char **v10; // r12@9
  __int64 v11; // rbx@9
  int v12; // ebp@9
  int v13; // eax@10
  __int64 v14; // rdx@10
  __int64 v15; // rax@28
  int v16; // er14@29
  __int64 v17; // rax@36
  char *v18; // rax@36
  char *v19; // r8@42
  unsigned __int64 v20; // rax@43
  char *v21; // rax@52
  __int64 v22; // rax@52
  char *v23; // rax@54
  char v24; // r12@60
  int v25; // eax@61
  char *v26; // rdx@61
  char v27; // cl@61
  char *v28; // rax@66
  signed int v29; // ecx@66
  char v30; // r14@67
  __pid_t v31; // edi@82
  signed __int64 v32; // rcx@88
  void **v33; // rbp@88
  bool v34; // cf@89
  bool v35; // zf@89
  signed __int64 v36; // r8@89
  signed __int64 v37; // r9@89
  unsigned __int64 v38; // r12@89
  void **v39; // rax@89
  _BYTE *v40; // rsi@90
  signed __int64 v41; // rcx@90
  char *v42; // rdi@90
  unsigned __int64 v43; // rax@106
  void *v44; // rdx@107
  signed __int64 v45; // r15@111
  unsigned __int8 v46; // cf@111
  bool v47; // zf@111
  unsigned __int64 v48; // r14@111
  signed __int64 v49; // rcx@112
  char *v50; // rdi@112
  _BYTE *v51; // rax@112
  _BYTE *v52; // rsi@112
  const char *v53; // rsi@115
  signed __int64 v54; // rax@119
  signed __int64 v55; // rsi@119
  __int64 v56; // rdx@120
  __int64 v57; // rcx@120
  __int64 v58; // r8@120
  __int64 v59; // r9@120
  signed __int64 v60; // rax@124
  signed __int64 v61; // rbp@124
  __int64 v62; // rdx@124
  __int64 v63; // rcx@124
  __int64 v64; // r8@124
  __int64 v65; // r9@124
  signed __int64 v66; // rax@124
  signed __int64 v67; // r14@124
  signed __int64 v68; // rsi@125
  size_t v69; // rbx@125
  signed __int64 v70; // rdi@126
  __int64 v71; // rbp@126
  unsigned int v72; // er12@126
  __int64 v73; // rsi@128
  __int64 v74; // rax@128
  __int64 v75; // rcx@128
  __int64 v76; // r8@128
  __int64 v77; // r9@128
  signed __int64 v78; // rdx@128
  __int64 v79; // rdi@129
  char *v80; // r12@129
  const char *v81; // rsi@132
  char *v82; // rax@133
  char *v83; // rax@136
  char *v84; // rax@139
  signed __int64 v85; // rbp@141
  int v86; // eax@142
  char v87; // bl@142
  int *v88; // rax@145
  int *v89; // rbp@145
  int v90; // eax@146
  __int64 v91; // rax@147
  __int64 v92; // rdx@147
  __int64 v93; // rcx@147
  __int64 v94; // r8@147
  __int64 v95; // r9@147
  __int64 v96; // rax@147
  __int64 v97; // rbx@147
  char *v98; // rax@147
  signed __int64 result; // rax@151
  signed __int64 v100; // rdx@153
  __int64 v101; // rcx@153
  __int64 v102; // r8@153
  __int64 v103; // r9@153
  __int64 v104; // rcx@154
  __int64 v105; // rax@160
  __int64 v106; // rax@164
  __int64 v107; // rdx@164
  __int64 v108; // rcx@164
  __int64 v109; // r8@164
  __int64 v110; // r9@164
  __int64 v111; // rax@164
  __int64 v112; // rbp@164
  char *v113; // rbx@164
  int *v114; // rax@164
  unsigned int v115; // eax@165
  signed __int64 v116; // rax@167
  __int64 v117; // rax@168
  char *v118; // rdx@168
  const char *v119; // rsi@171
  signed int v120; // eax@175
  __int64 v121; // rdi@175
  __dev_t v122; // rcx@175
  __time_t v123; // rcx@177
  __syscall_slong_t v124; // rcx@177
  __int64 v125; // rax@177
  signed __int64 v126; // rbp@180
  char *v127; // rdx@180
  __int64 v128; // rcx@180
  __int64 v129; // r8@180
  __int64 v130; // r9@180
  __int64 v131; // rcx@181
  signed __int64 v132; // rdi@182
  signed __int64 v133; // rbx@183
  int *v134; // rax@185
  __int64 v135; // rdi@185
  int *v136; // rbx@185
  __int64 v137; // rax@185
  __int64 v138; // rdx@185
  __int64 v139; // rcx@185
  __int64 v140; // r8@185
  __int64 v141; // r9@185
  __int64 v142; // rax@185
  __int64 v143; // rbp@185
  char *v144; // rax@185
  _BYTE *v145; // rdi@186
  __int64 v146; // rax@186
  unsigned __int64 v147; // r12@188
  __int64 v148; // rax@188
  __int64 v149; // r13@188
  __int64 v150; // rbp@188
  __int64 v151; // rdx@188
  __int64 v152; // rcx@188
  __int64 v153; // r8@188
  __int64 v154; // r9@188
  __int64 v155; // rax@188
  __int64 v156; // r14@188
  __int64 v157; // rbx@188
  unsigned __int64 v158; // rax@189
  __int64 v159; // rax@190
  size_t v160; // rax@192
  __int64 v161; // rcx@192
  __int64 v162; // r8@192
  __int64 v163; // r9@192
  __int64 v164; // rdx@193
  size_t v165; // rsi@193
  unsigned int v166; // eax@195
  __int64 v167; // rax@201
  __int64 v168; // rbx@201
  char *v169; // rbp@201
  __int64 v170; // rax@202
  __int64 v171; // rbx@202
  char *v172; // rbp@202
  __off_t v173; // rbp@205
  signed __int64 v174; // rbx@205
  __blksize_t v175; // rax@206
  unsigned int v176; // er12@215
  char *v177; // rax@217
  signed __int64 v178; // rdi@220
  signed __int64 v179; // rbx@220
  __int64 v180; // rax@222
  signed __int64 v181; // rbx@224
  __int64 i; // rbx@226
  __off_t v183; // rbx@237
  signed __int64 v184; // rax@238
  __int64 v185; // rax@241
  char *v186; // rbp@242
  signed __int64 v187; // r12@242
  __int64 v188; // rbx@242
  int v189; // edi@245
  char *v190; // rsi@250
  __int64 v191; // rdx@251
  unsigned __int64 v192; // rbx@254
  __int64 v193; // rax@258
  __int64 v194; // rax@262
  char v195; // cl@264
  char *v196; // rbx@271
  signed __int64 v197; // rax@272
  int v198; // eax@272
  int v199; // eax@273
  int v200; // edx@275
  __off_t v201; // rcx@278
  __int64 v202; // rax@279
  unsigned __int64 v203; // rdi@283
  signed __int64 v204; // rax@286
  char *v205; // rax@291
  char v206; // al@296
  char *v207; // rbx@296
  __int64 v208; // rax@298
  __int64 v209; // rax@298
  __int64 v210; // rbp@298
  char *v211; // rax@298
  char *v212; // rax@300
  __off_t v213; // rax@301
  __mode_t v214; // eax@304
  __time_t v215; // rdx@305
  __syscall_slong_t v216; // rcx@305
  int v217; // er12@306
  char *v218; // rdx@309
  int *v219; // rax@317
  unsigned __int64 v220; // rax@323
  __off_t v221; // rax@327
  char *v222; // rax@327
  __int64 v223; // rdi@335
  int *v224; // rax@337
  int *v225; // r12@338
  __int64 v226; // rax@338
  void *v227; // rdi@347
  __int64 v228; // rbx@347
  __int64 v229; // rcx@347
  __int64 v230; // r8@347
  __int64 v231; // r9@347
  unsigned __int64 v232; // rdx@347
  __int64 v233; // rsi@350
  unsigned __int64 v234; // rax@351
  __int64 v235; // rbx@359
  signed __int64 v236; // rax@210
  __int64 v237; // rax@362
  __int64 v238; // rbx@362
  char *v239; // r12@362
  __int64 v240; // rax@363
  char *v241; // rax@367
  __int64 v242; // rax@348
  __int64 v243; // rbx@348
  char *v244; // r12@348
  __int64 v245; // rdi@348
  int *v246; // ST20_8@371
  __int64 v247; // rax@371
  __int64 v248; // rbx@371
  char *v249; // rax@371
  const char **v250; // rbx@372
  struct stat *v251; // r15@372
  __int64 v252; // rax@376
  int v253; // edx@378
  int v254; // eax@383
  const char *v255; // rsi@385
  signed __int64 v256; // rax@385
  __int64 v257; // rcx@385
  __int64 v258; // r8@385
  __int64 v259; // r9@385
  signed __int64 v260; // rdx@386
  signed int v261; // eax@386
  unsigned __int64 v262; // rbp@388
  char *v263; // rbx@388
  const char *v264; // r15@390
  unsigned __int64 v265; // kr08_8@390
  __int64 v266; // rax@393
  __int64 v267; // r14@393
  __int64 v268; // rax@393
  const char *v269; // rsi@393
  int v270; // eax@396
  int *v271; // rax@399
  int *v272; // r14@399
  int v273; // eax@399
  char *v274; // rax@400
  char *v275; // rbx@402
  int *v276; // rax@402
  unsigned __int64 v277; // rbx@402
  int v278; // esi@403
  __int64 v279; // rax@409
  __int64 v280; // rbx@409
  char *v281; // rax@409
  char *v282; // rbx@411
  int *v283; // rax@411
  int *v284; // rax@412
  unsigned __int64 v285; // rax@414
  int *v286; // rax@414
  __int64 v287; // rax@415
  char *v288; // rbx@419
  __int64 v289; // rsi@421
  char *v290; // rax@430
  char *v291; // rax@430
  signed __int64 v292; // rax@431
  char *v293; // rax@431
  __int64 v294; // rax@439
  struct timeval *v295; // r8@441
  signed int v296; // edi@441
  int v297; // eax@445
  __int64 v298; // rdx@450
  int v299; // er9@450
  int v300; // ebx@450
  __int64 v301; // rbp@452
  unsigned __int64 v302; // r15@452
  unsigned int v303; // er14@452
  int v304; // er13@452
  unsigned __int64 v305; // rbx@452
  int v306; // eax@455
  __int64 v307; // rdx@456
  char *v308; // rbx@456
  int v309; // eax@459
  char *v310; // rax@464
  __int64 v311; // rax@466
  char *v312; // rax@467
  __int64 v313; // rax@469
  int *v314; // rax@472
  char *v315; // rax@480
  __int64 v316; // rax@481
  char *v317; // rax@484
  __int64 v318; // rdx@486
  __int64 v319; // rcx@486
  int *v320; // r8@486
  __int64 v321; // r9@486
  int *s1; // STA0_8@487
  __int64 v323; // rax@487
  __int64 v324; // ST98_8@487
  char *v325; // rax@487
  int v326; // esi@488
  char *v327; // rsi@493
  char *v328; // rax@493
  char *v329; // rdx@493
  __int64 v330; // rax@496
  __int64 v331; // rax@497
  __int64 v332; // rax@500
  __int64 v333; // rdx@500
  __int64 v334; // rcx@500
  __int64 v335; // r8@500
  __int64 v336; // r9@500
  __int64 v337; // rax@500
  __int64 v338; // rbp@500
  char *v339; // r12@500
  int *v340; // rbx@500
  char *v341; // r14@502
  __int64 v342; // rdx@502
  __int64 v343; // rcx@502
  int *v344; // rbx@502
  __int64 v345; // r8@502
  __int64 v346; // r9@502
  __int64 v347; // rax@503
  __int64 v348; // rbp@503
  char *v349; // rax@503
  int *v350; // rax@504
  char *v351; // ST90_8@505
  char *v352; // rbx@506
  int *v353; // rax@506
  char *v354; // rax@507
  signed __int64 v355; // [sp+0h] [bp-208h]@0
  int *fildes; // [sp+8h] [bp-200h]@0
  char fildesa; // [sp+8h] [bp-200h]@388
  signed __int64 v358; // [sp+10h] [bp-1F8h]@0
  signed __int64 v359; // [sp+18h] [bp-1F0h]@0
  char *buf; // [sp+20h] [bp-1E8h]@0
  char bufa; // [sp+20h] [bp-1E8h]@393
  __off_t offset; // [sp+28h] [bp-1E0h]@0
  uint32_t mask; // [sp+34h] [bp-1D4h]@0
  double v364; // [sp+38h] [bp-1D0h]@0
  char v365; // [sp+40h] [bp-1C8h]@0
  signed __int64 v366; // [sp+40h] [bp-1C8h]@119
  char *v367; // [sp+48h] [bp-1C0h]@0
  unsigned __int64 v368; // [sp+50h] [bp-1B8h]@0
  char *v369; // [sp+58h] [bp-1B0h]@0
  char *v370; // [sp+60h] [bp-1A8h]@0
  signed __int64 v371; // [sp+68h] [bp-1A0h]@0
  char *v372; // [sp+70h] [bp-198h]@0
  struct stat *v373; // [sp+78h] [bp-190h]@452
  char v374; // [sp+8Bh] [bp-17Dh]@0
  int v375; // [sp+8Ch] [bp-17Ch]@455
  unsigned __int64 v376; // [sp+90h] [bp-178h]@1
  unsigned __int64 v377; // [sp+98h] [bp-170h]@419
  struct timeval timeout; // [sp+A0h] [bp-168h]@331
  struct stat v379; // [sp+B0h] [bp-158h]@119
  struct stat stat_buf; // [sp+140h] [bp-C8h]@34

  v4 = a3;
  v376 = 10LL;
  sub_407B40(*a1, a1, a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40C180(
    sub_406590,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  byte_61237A = 0;
  byte_612385 = 1;
  byte_612381 = 0;
  byte_612382 = 0;
  byte_612384 = 0;
  byte_612380 = 10;
  if ( a3 != 2 )
  {
    if ( a3 == 3 )
    {
      v5 = a1[2];
      if ( *v5 != 45 || !v5[1] )
        goto LABEL_6;
    }
    else
    {
      if ( a3 != 4 )
        goto LABEL_8;
      v5 = a1[2];
    }
    if ( strcmp(v5, "--") )
      goto LABEL_8;
  }
LABEL_6:
  v6 = sub_407AC0();
  v7 = a1[1];
  v8 = v7 + 1;
  if ( *v7 == 43 )
  {
    v24 = 1;
    if ( (unsigned int)(v6 - 200112) <= 0x2B8 )
      goto LABEL_8;
  }
  else
  {
    if ( *v7 != 45 || v6 > 200111 && !v7[(v7[1] == 99) + 1] )
      goto LABEL_8;
    v24 = 0;
  }
  v25 = v7[1];
  v26 = v7 + 1;
  v27 = v25;
  if ( (unsigned int)(v25 - 48) <= 9 )
  {
    do
      v27 = *++v26;
    while ( (unsigned int)(*v26 - 48) <= 9 );
  }
  if ( v27 == 99 )
  {
    a4 = 0LL;
    v29 = 10;
  }
  else if ( v27 == 108 )
  {
    a4 = 1LL;
    v29 = 10;
  }
  else
  {
    if ( v27 != 98 )
    {
      v28 = v26;
      a4 = 1LL;
      v29 = 10;
      goto LABEL_67;
    }
    a4 = 0LL;
    v29 = 5120;
  }
  v28 = v26 + 1;
LABEL_67:
  v30 = 0;
  if ( *v28 == 102 )
  {
    ++v28;
    v30 = 1;
  }
  if ( !*v28 )
  {
    if ( v8 == v26 )
    {
      v376 = (unsigned int)v29;
      goto LABEL_72;
    }
    if ( !(sub_40A260(v8) & 0xFFFFFFFD) )
    {
LABEL_72:
      byte_612382 = v24;
      v9 = 1LL;
      byte_612385 = a4;
      byte_612384 = v30;
      goto LABEL_9;
    }
    LODWORD(v285) = sub_409760(a1[1], 0LL);
    v262 = v285;
    v263 = dcgettext(0LL, "invalid number", 5);
    v286 = __errno_location();
    error(1, *v286, "%s: %s", v263, v262);
LABEL_415:
    v255 = v263;
    LODWORD(v287) = sub_407800(v359, v263);
    if ( !v287 )
      goto LABEL_501;
    fildesa = v365;
LABEL_417:
    v263 += 96;
    if ( v367 != v263 )
      goto LABEL_389;
    v251 = (struct stat *)offset;
    if ( dword_6122A8 == 2 )
    {
      if ( v24 )
        goto LABEL_401;
      if ( !fildesa )
        return 1LL;
    }
    v288 = (char *)v368;
    v377 = v368 + v371 - 96;
    do
    {
      if ( !v288[52] )
      {
        if ( dword_6122A8 == 1 )
        {
          sub_4056E0(v288, 0LL);
        }
        else if ( *((_DWORD *)v288 + 14) != -1 )
        {
          v289 = *(_QWORD *)v288;
          if ( !__xstat(1, *(const char **)v288, (struct stat *)offset)
            && (*((_QWORD *)v288 + 4) != stat_buf.st_dev || *((_QWORD *)v288 + 5) != stat_buf.st_ino) )
          {
            LODWORD(v332) = sub_4047E0(*(_QWORD *)v288, v289);
            LODWORD(v337) = sub_409510(4LL, v332, v333, v334, v335, v336);
            v338 = v337;
            v339 = dcgettext(0LL, "%s was replaced", 5);
            v340 = __errno_location();
            error(0, *v340, v339, v338, v355);
            sub_4072A0(v359);
            *v340 = 0;
            goto LABEL_402;
          }
        }
        v255 = (const char *)&v377;
        sub_404F00(v288, &v377);
      }
      v288 += 96;
    }
    while ( v367 != v288 );
    v292 = v262 + 17;
    v48 = 0LL;
    v186 = 0LL;
    offset = v292;
    LODWORD(v293) = sub_409DD0(v292, v255, v260, v257, v258, v259);
    LODWORD(v369) = 3;
    buf = v293;
    v187 = 1LL << a4;
    fildes = (int *)(signed int)a4;
    while ( 1 )
    {
LABEL_432:
      if ( dword_6122A8 == 1 && !byte_612386 )
      {
        LODWORD(v311) = sub_406BD0(v359);
        if ( !v311 )
        {
          v312 = dcgettext(0LL, "no files remaining", 5);
          error(0, 0, v312, v355);
          return 1LL;
        }
      }
      while ( 1 )
      {
        do
        {
          if ( (unsigned __int64)v186 < v48 )
            goto LABEL_450;
          if ( pid )
          {
            if ( (_BYTE)v358 )
              exit(0);
            if ( kill(pid, 0) && *__errno_location() != 1 )
            {
              timeout.tv_usec = 0LL;
              timeout.tv_sec = 0LL;
              LOBYTE(v358) = v365;
            }
            else
            {
              timeout.tv_sec = (unsigned int)(signed int)floor(v364);
              timeout.tv_usec = (unsigned int)(signed int)floor(1000000.0 * (v364 - (double)SLODWORD(timeout.tv_sec)));
            }
          }
          memset(v251, 0, 0x80uLL);
          LODWORD(v294) = __fdelt_chk(fildes);
          *(&stat_buf.st_dev + v294) |= v187;
          if ( byte_612383 )
            stat_buf.st_dev |= 2uLL;
          v295 = 0LL;
          v296 = 1;
          if ( pid )
            v295 = &timeout;
          if ( (signed int)a4 > 0 )
            v296 = a4;
          v297 = select(v296 + 1, (fd_set *)v251, 0LL, 0LL, v295);
        }
        while ( !v297 );
        if ( v297 == -1 )
        {
          v352 = dcgettext(0LL, "error waiting for inotify and output events", 5);
          v353 = __errno_location();
          error(1, *v353, v352, v355);
LABEL_507:
          fildes = v320;
          v354 = dcgettext(0LL, "inotify resources exhausted", 5);
          error(0, 0, v354, v355);
          sub_4072A0(v359);
          *fildes = 0;
          goto LABEL_402;
        }
        if ( !(stat_buf.st_dev & 2) )
          break;
        raise(13);
      }
      v313 = sub_409780(a4, buf, offset);
      v48 = v313;
      if ( !v313 )
        goto LABEL_479;
      v186 = 0LL;
      if ( v313 == -1 )
      {
        if ( *__errno_location() == 22 )
        {
LABEL_479:
          if ( (_DWORD)v369 )
          {
            v48 = 0LL;
            v186 = 0LL;
            LODWORD(v369) = (_DWORD)v369 - 1;
            offset *= 2LL;
            LODWORD(v315) = sub_409E30(buf, offset);
            buf = v315;
            continue;
          }
        }
        v308 = dcgettext(0LL, "error reading inotify event", 5);
        v314 = __errno_location();
        error(1, *v314, v308, v355);
        goto LABEL_473;
      }
LABEL_450:
      v298 = *(_DWORD *)&v186[(_QWORD)buf + 12];
      v299 = *(_DWORD *)&v186[(_QWORD)buf + 4];
      v370 = &v186[(_QWORD)buf];
      v300 = *(_DWORD *)&v186[(_QWORD)buf];
      v186 += v298 + 16;
      if ( !(v299 & 0x400) )
      {
        if ( !(_DWORD)v298 )
          goto LABEL_464;
        goto LABEL_452;
      }
      if ( !(_DWORD)v298 )
        break;
LABEL_452:
      v372 = v186;
      v373 = v251;
      v301 = 0LL;
      v302 = v48;
      v303 = a4;
      v304 = v300;
      v305 = v368;
      while ( 1 )
      {
        if ( *(_DWORD *)(v305 + 72) == v304 )
        {
          v375 = v299;
          v306 = strcmp(v370 + 16, (const char *)(*(_QWORD *)v305 + *(_QWORD *)(v305 + 80)));
          v299 = v375;
          if ( !v306 )
            break;
        }
        ++v301;
        v305 += 96LL;
        if ( v355 == v301 )
        {
          a4 = v303;
          v186 = v372;
          v48 = v302;
          v251 = v373;
          goto LABEL_432;
        }
      }
      v307 = v301;
      a4 = v303;
      v186 = v372;
      v48 = v302;
      v251 = v373;
      v308 = (char *)(v368 + 96 * v307);
      if ( v375 & 0x200 )
      {
        if ( dword_6122A8 == 1 )
          goto LABEL_499;
LABEL_458:
        if ( v308 )
          goto LABEL_459;
      }
      else
      {
        LODWORD(v372) = inotify_add_watch(a4, *(const char **)v308, mask);
        if ( (signed int)v372 < 0 )
        {
          v320 = __errno_location();
          if ( (*v320 & 0xFFFFFFEF) == 12 )
            goto LABEL_507;
          s1 = v320;
          LODWORD(v323) = sub_409510(4LL, *(_QWORD *)v308, v318, v319, v320, v321);
          v324 = v323;
          v325 = dcgettext(0LL, "cannot watch %s", 5);
          error(0, *s1, v325, v324, v355);
        }
        v326 = *((_DWORD *)v308 + 17);
        if ( v326 >= 0 && (_DWORD)v372 == v326 )
          goto LABEL_498;
        if ( v326 >= 0 )
        {
          inotify_rm_watch(a4, v326);
          sub_407840(v359, v308);
        }
        *((_DWORD *)v308 + 17) = (_DWORD)v372;
        if ( (_DWORD)v372 != -1 )
        {
          v327 = v308;
          LODWORD(v328) = sub_407840(v359, v308);
          v329 = v328;
          if ( v328 && v308 != v328 )
          {
            if ( dword_6122A8 == 1 )
              goto LABEL_505;
            goto LABEL_496;
          }
          goto LABEL_497;
        }
      }
    }
    v316 = 0LL;
    while ( *(_DWORD *)(v368 + 96 * v316 + 72) != v300 )
    {
      if ( v355 == ++v316 )
      {
LABEL_464:
        HIDWORD(stat_buf.st_blocks) = v300;
        LODWORD(v310) = sub_406DF0(v359, v251);
        v308 = v310;
        goto LABEL_458;
      }
    }
    sub_4072A0(v359);
    v317 = dcgettext(0LL, "directory containing watched file was removed", 5);
    error(0, 0, v317, v355);
    *__errno_location() = 0;
LABEL_402:
    v275 = dcgettext(0LL, "inotify cannot be used, reverting to polling", 5);
    v276 = __errno_location();
    error(0, *v276, v275, v355);
    v277 = v368;
    LODWORD(v186) = (_DWORD)v367;
    do
    {
      v278 = *(_DWORD *)(v277 + 68);
      if ( v278 != -1 )
        inotify_rm_watch(a4, v278);
      v190 = (char *)*(_DWORD *)(v277 + 72);
      if ( (_DWORD)v190 != -1 )
        inotify_rm_watch(a4, (int)v190);
      v277 += 96LL;
    }
    while ( v367 != (char *)v277 );
LABEL_266:
    byte_612378 = 1;
    if ( pid || dword_6122A8 != 2 || v355 != 1 || *(_DWORD *)(v368 + 56) == -1 )
    {
      LODWORD(v45) = 0;
    }
    else
    {
      LODWORD(fildes) = *(_DWORD *)(v368 + 48);
      LODWORD(v45) = (*(_DWORD *)(v368 + 48) & 0xF000) != 0x8000;
    }
    LOBYTE(mask) = 0;
    LOBYTE(buf) = v45 & 1;
    v358 = v355 - 1;
    v359 = v368 + v371 + 52;
LABEL_271:
    v48 = v368;
    LOBYTE(fildes) = 0;
    v196 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(v48 + 52) )
          goto LABEL_280;
        v186 = (char *)*(_DWORD *)(v48 + 56);
        if ( (signed int)v186 >= 0 )
          break;
        v203 = v48;
        v190 = (char *)(unsigned int)v45;
        ++v196;
        v48 += 96LL;
        sub_4056E0(v203, (unsigned int)v45);
        if ( (char *)v355 == v196 )
        {
LABEL_284:
          if ( !byte_612386 || dword_6122A8 != 1 )
          {
            v204 = v368 + 52;
            do
            {
              v190 = (char *)*(_DWORD *)(v204 + 4);
              if ( (signed int)v190 >= 0 || *(_BYTE *)v204 != 1 && byte_612386 )
                goto LABEL_328;
              v204 += 96LL;
            }
            while ( v359 != v204 );
            v205 = dcgettext(0LL, "no files remaining", 5);
            error(0, 0, v205, v355);
            while ( 1 )
            {
LABEL_150:
              if ( !byte_61237A || close(0) >= 0 )
                return (unsigned __int8)(v374 ^ 1);
              v119 = (const char *)(unsigned int)*__errno_location();
              error(1, (int)v119, "-", v355);
LABEL_296:
              v206 = byte_612386;
              *(_BYTE *)(v48 + 54) = 0;
              v207 = "";
              *(_DWORD *)(v48 + 60) = -1;
              v206 ^= 1u;
              *(_BYTE *)(v48 + 52) = v206;
              if ( v206 )
              {
                v119 = "; giving up on this name";
                v207 = dcgettext(0LL, "; giving up on this name", 5);
              }
              LODWORD(v208) = sub_4047E0(*(_BYTE **)v48, v119);
              LODWORD(v209) = sub_4095E0(0LL, 3LL, v208);
              v210 = v209;
              v211 = dcgettext(0LL, "%s: cannot follow end of this type of file%s", 5);
              v119 = 0LL;
              error(0, 0, v211, v210, v207, v355);
LABEL_186:
              v145 = *(_BYTE **)v48;
              *(_BYTE *)(v48 + 52) = byte_612386 ^ 1;
              LODWORD(v146) = sub_4047E0(v145, v119);
              sub_404820((unsigned int)fildes, v146);
              *(_DWORD *)(v48 + 56) = -1;
              LOBYTE(v359) = 0;
              while ( 1 )
              {
                v48 += 96LL;
                v374 &= v359;
                v46 = (unsigned __int64)v367 < v48;
                v47 = v367 == (char *)v48;
                if ( v367 == (char *)v48 )
                  break;
LABEL_112:
                v49 = 2LL;
                v50 = "-";
                offset = v376;
                v51 = *(_BYTE **)v48;
                v52 = *(_BYTE **)v48;
                do
                {
                  if ( !v49 )
                    break;
                  v46 = *v52 < (unsigned __int8)*v50;
                  v47 = *v52++ == *v50++;
                  --v49;
                }
                while ( v47 );
                v53 = (const char *)(unsigned int)(char)(!(v46 | v47) - v46);
                mask = (char)(!(v46 | v47) - v46);
                if ( !(v46 | v47) == v46 )
                {
                  byte_61237A = 1;
                  LODWORD(fildes) = 0;
LABEL_117:
                  *(_BYTE *)(v48 + 54) = 1;
                  goto LABEL_118;
                }
                v53 = 0LL;
                v86 = sub_406780((char)v51);
                v87 = byte_612386;
                LODWORD(fildes) = v86;
                if ( byte_612386 )
                {
                  if ( v86 != -1 )
                  {
                    v51 = *(_BYTE **)v48;
                    goto LABEL_117;
                  }
                  *(_BYTE *)(v48 + 54) = 0;
LABEL_145:
                  v88 = __errno_location();
                  v89 = v88;
                  if ( byte_612384 )
                  {
                    v90 = *v88;
                    *(_DWORD *)(v48 + 56) = -1;
                    *(_BYTE *)(v48 + 52) = v87 ^ 1;
                    *(_DWORD *)(v48 + 60) = v90;
                    *(_QWORD *)(v48 + 40) = 0LL;
                    *(_QWORD *)(v48 + 32) = 0LL;
                  }
                  LODWORD(v91) = sub_4047E0(*(_BYTE **)v48, 0LL);
                  LODWORD(v96) = sub_409510(4LL, v91, v92, v93, v94, v95);
                  v97 = v96;
                  v98 = dcgettext(0LL, "cannot open %s for reading", 5);
                  error(0, *v89, v98, v97, v355);
                  LOBYTE(v359) = 0;
                }
                else
                {
                  *(_BYTE *)(v48 + 54) = 1;
                  if ( v86 == -1 )
                    goto LABEL_145;
                  v51 = *(_BYTE **)v48;
LABEL_118:
                  if ( byte_612381 )
                  {
                    LODWORD(v117) = sub_4047E0(v51, v53);
                    v118 = "";
                    if ( !byte_612290 )
                      v118 = "\n";
                    v53 = "%s==> %s <==\n";
                    __printf_chk(1LL, "%s==> %s <==\n", v118, v117);
                    byte_612290 = 0;
                  }
                  LODWORD(v54) = sub_4047E0(*(_QWORD *)v48, v53);
                  v55 = (unsigned int)fildes;
                  v379.st_dev = 0LL;
                  v366 = v54;
                  LOBYTE(v359) = byte_612385;
                  if ( byte_612385 )
                  {
                    if ( __fxstat(1, (int)fildes, &stat_buf) )
                    {
                      LODWORD(v167) = sub_409510(4LL, v366, v56, v57, v58, v59);
                      v168 = v167;
                      v169 = dcgettext(0LL, "cannot fstat %s", 5);
                      v68 = (unsigned int)*__errno_location();
                      error(0, v68, v169, v168, v355);
                      LOBYTE(v369) = 0;
                    }
                    else
                    {
                      LOBYTE(v369) = byte_612382;
                      if ( byte_612382 )
                      {
                        v68 = (unsigned int)fildes;
                        v166 = sub_404920(v366, (unsigned int)fildes, v376, &v379);
                        if ( v166 )
                        {
                          LODWORD(v369) = v166 >> 31;
                        }
                        else
                        {
                          v68 = v366;
                          LODWORD(v185) = sub_404A20(0LL, v366, (unsigned int)fildes, -1LL);
                          v379.st_dev += v185;
                        }
                      }
                      else
                      {
                        if ( !byte_612379 && (stat_buf.st_mode & 0xF000) == 0x8000 )
                        {
                          LODWORD(v45) = (_DWORD)fildes;
                          v55 = 0LL;
                          v183 = lseek((int)fildes, 0LL, 1);
                          if ( v183 != -1 )
                          {
                            v68 = 0LL;
                            v184 = lseek((int)fildes, 0LL, 2);
                            if ( v183 < v184 )
                            {
                              v379.st_dev = v184;
                              LOBYTE(v369) = v359;
                              if ( v184 )
                              {
                                v68 = (unsigned int)fildes;
                                LOBYTE(v369) = sub_404CD0(v366, (unsigned int)fildes, v376, v183, v184, &v379);
                              }
                              goto LABEL_184;
                            }
                            v55 = v183;
                            sub_404C20((unsigned int)fildes, v183, 0LL, v366);
                          }
                        }
                        LODWORD(v60) = sub_409DD0(8216LL, v55, v56, v57, v58, v59);
                        *(_QWORD *)(v60 + 8200) = 0LL;
                        v61 = v60;
                        *(_QWORD *)(v60 + 0x2000) = 0LL;
                        *(_QWORD *)(v60 + 8208) = 0LL;
                        v358 = v60;
                        LODWORD(v66) = sub_409DD0(8216LL, v55, v62, v63, v64, v65);
                        v370 = (char *)v48;
                        v67 = v61;
                        buf = 0LL;
                        v45 = v66;
                        while ( 1 )
                        {
                          v68 = v45;
                          v69 = sub_409780((int)fildes, (void *)v45, 0x2000uLL);
                          if ( v69 - 1 > 0xFFFFFFFFFFFFFFFDLL )
                            break;
                          *(_QWORD *)(v45 + 0x2000) = v69;
                          a4 = v45 + v69;
                          v70 = v45;
                          v71 = 0LL;
                          v379.st_dev += v69;
                          v72 = byte_612380;
                          *(_QWORD *)(v45 + 8200) = 0LL;
                          *(_QWORD *)(v45 + 8208) = 0LL;
                          while ( 1 )
                          {
                            v73 = v72;
                            LODWORD(v74) = sub_40B730(v70, v72, a4 - v70);
                            v78 = v71 + 1;
                            if ( !v74 )
                              break;
                            *(_QWORD *)(v45 + 8200) = v78;
                            v70 = v74 + 1;
                            ++v71;
                          }
                          v79 = *(_QWORD *)(v358 + 0x2000);
                          v80 = &buf[v71];
                          if ( v69 + v79 <= 0x1FFF )
                          {
                            v85 = v358;
                            memcpy((void *)(v358 + v79), (const void *)v45, v69);
                            buf = v80;
                            *(_QWORD *)(v85 + 0x2000) += *(_QWORD *)(v45 + 0x2000);
                            *(_QWORD *)(v85 + 8200) += *(_QWORD *)(v45 + 8200);
                          }
                          else
                          {
                            *(_QWORD *)(v358 + 8208) = v45;
                            buf = &v80[-*(_QWORD *)(v67 + 8200)];
                            if ( v376 >= (unsigned __int64)buf )
                            {
                              LODWORD(v116) = sub_409DD0(8216LL, v73, v78, v75, v76, v77);
                              v358 = v45;
                              buf = v80;
                              v45 = v116;
                            }
                            else
                            {
                              v358 = v45;
                              v45 = v67;
                              v67 = *(_QWORD *)(v67 + 8208);
                            }
                          }
                        }
                        v126 = v67;
                        v48 = (unsigned __int64)v370;
                        free((void *)v45);
                        if ( v69 != -1LL )
                        {
                          v131 = *(_QWORD *)(v358 + 0x2000);
                          LOBYTE(v127) = v376 == 0 || v131 == 0;
                          LOBYTE(v369) = v376 == 0 || v131 == 0;
                          if ( (_BYTE)v127 )
                            goto LABEL_182;
                          v176 = byte_612380;
                          if ( *(_BYTE *)(v358 + v131 - 1) != byte_612380 )
                          {
                            ++*(_QWORD *)(v358 + 8200);
                            ++buf;
                          }
                          a4 = v126;
                          v177 = &buf[-*(_QWORD *)(v126 + 8200)];
                          if ( v376 < (unsigned __int64)v177 )
                          {
                            do
                            {
                              a4 = *(_QWORD *)(a4 + 8208);
                              v127 = v177;
                              v177 -= *(_QWORD *)(a4 + 8200);
                            }
                            while ( v376 < (unsigned __int64)v177 );
                            buf = v127;
                          }
                          v178 = a4;
                          LODWORD(v45) = (_DWORD)buf;
                          v179 = a4 + *(_QWORD *)(a4 + 0x2000);
                          if ( v376 < (unsigned __int64)buf )
                          {
                            v45 = (signed __int64)&buf[-v376];
                            while ( 1 )
                            {
                              v68 = v176;
                              LODWORD(v180) = sub_40B730(v178, v176, v179 - v178);
                              if ( !v180 )
                                break;
                              v178 = v180 + 1;
                              if ( !--v45 )
                                goto LABEL_224;
                            }
LABEL_410:
                            __assert_fail("beg", "src/tail.c", 0x2C9u, "pipe_lines");
                          }
LABEL_224:
                          v181 = v179 - v178;
                          if ( v181 )
                          {
                            v68 = v181;
                            sub_4048A0(v178, v181, v127);
                          }
                          for ( i = *(_QWORD *)(a4 + 8208); i; i = *(_QWORD *)(i + 8208) )
                          {
                            v68 = *(_QWORD *)(i + 0x2000);
                            if ( v68 )
                              sub_4048A0(i, v68, v127);
                          }
                          v132 = v126;
                          LOBYTE(v369) = v359;
                          goto LABEL_183;
                        }
                        LODWORD(v237) = sub_409510(4LL, v366, v127, v128, v129, v130);
                        v238 = v237;
                        v239 = dcgettext(0LL, "error reading %s", 5);
                        v68 = (unsigned int)*__errno_location();
                        error(0, v68, v239, v238, v355);
LABEL_182:
                        v132 = v126;
                        if ( v126 )
                        {
                          do
                          {
LABEL_183:
                            v133 = *(_QWORD *)(v132 + 8208);
                            free((void *)v132);
                            v132 = v133;
                          }
                          while ( v133 );
                        }
                      }
                    }
LABEL_184:
                    LOBYTE(v359) = (_BYTE)v369;
                    goto LABEL_161;
                  }
                  if ( __fxstat(1, (int)fildes, &stat_buf) )
                  {
                    LODWORD(v170) = sub_409510(4LL, v366, v100, v101, v102, v103);
                    v171 = v170;
                    v172 = dcgettext(0LL, "cannot fstat %s", 5);
                    v68 = (unsigned int)*__errno_location();
                    error(0, v68, v172, v171, v355);
                    goto LABEL_161;
                  }
                  v104 = (unsigned __int8)byte_612382;
                  LOBYTE(v359) = byte_612382;
                  if ( byte_612382 )
                  {
                    if ( byte_612379
                      || (v376 & 0x8000000000000000LL) != 0LL
                      || ((stat_buf.st_mode & 0xF000) != 0x8000
                       || (LODWORD(v240) = sub_404C20((unsigned int)fildes, v376, 1LL, v366), v240 < 0))
                      && lseek((int)fildes, v376, 1) == -1 )
                    {
                      v68 = (unsigned int)fildes;
                      v115 = sub_404B40(v366, (unsigned int)fildes, v376, &v379);
                      offset = -1LL;
                      if ( v115 )
                      {
                        LODWORD(v359) = v115 >> 31;
                        goto LABEL_161;
                      }
                    }
                    else
                    {
                      v379.st_dev += v376;
                      offset = -1LL;
                    }
                  }
                  else
                  {
                    if ( byte_612379 || (v376 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_188;
                    if ( (stat_buf.st_mode & 0xD000) == 0x8000 )
                    {
                      v173 = stat_buf.st_size;
                      v174 = -1LL;
                    }
                    else
                    {
                      LODWORD(v45) = v376;
                      v55 = -(signed __int64)v376;
                      v213 = lseek((int)fildes, -(signed __int64)v376, 2);
                      v174 = v213;
                      if ( v213 == -1 )
                        goto LABEL_188;
                      v173 = v213 + v376;
                    }
                    v175 = stat_buf.st_blksize;
                    v55 = 0x1FFFFFFFFFFFFFFFLL;
                    v100 = 512LL;
                    if ( (unsigned __int64)(stat_buf.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
                      v175 = 512LL;
                    if ( v173 <= v175 )
                    {
LABEL_188:
                      v147 = 0LL;
                      LODWORD(v148) = sub_409DD0(8208LL, v55, v100, v104, v102, v103);
                      *(_QWORD *)(v148 + 0x2000) = 0LL;
                      v149 = v148;
                      *(_QWORD *)(v148 + 8200) = 0LL;
                      v150 = v148;
                      LODWORD(v155) = sub_409DD0(8208LL, v55, v151, v152, v153, v154);
                      v358 = v48;
                      LODWORD(v45) = (_DWORD)fildes;
                      v156 = v149;
                      v157 = v155;
                      a4 = v376;
                      while ( 1 )
                      {
                        v160 = sub_409780((int)fildes, (void *)v157, 0x2000uLL);
                        if ( v160 - 1 > 0xFFFFFFFFFFFFFFFDLL )
                          break;
                        v379.st_dev += v160;
                        v147 += v160;
                        *(_QWORD *)(v157 + 0x2000) = v160;
                        v164 = *(_QWORD *)(v156 + 0x2000);
                        *(_QWORD *)(v157 + 8200) = 0LL;
                        v165 = v160 + v164;
                        if ( v160 + v164 > 0x1FFF )
                        {
                          v158 = v147 - *(_QWORD *)(v150 + 0x2000);
                          *(_QWORD *)(v156 + 8200) = v157;
                          if ( v376 >= v158 )
                          {
                            LODWORD(v159) = sub_409DD0(8208LL, v165, v164, v161, v162, v163);
                          }
                          else
                          {
                            v147 = v158;
                            v159 = v150;
                            v150 = *(_QWORD *)(v150 + 8200);
                          }
                        }
                        else
                        {
                          memcpy((void *)(v156 + v164), (const void *)v157, v160);
                          *(_QWORD *)(v156 + 0x2000) += *(_QWORD *)(v157 + 0x2000);
                          v159 = v157;
                          v157 = v156;
                        }
                        v156 = v157;
                        v157 = v159;
                      }
                      v227 = (void *)v157;
                      buf = (char *)v160;
                      v48 = v358;
                      v228 = v150;
                      free(v227);
                      v232 = v376;
                      if ( buf == (char *)-1 )
                      {
                        LODWORD(v242) = sub_409510(4LL, v366, v376, v229, v230, v231);
                        v243 = v242;
                        v244 = dcgettext(0LL, "error reading %s", 5);
                        v68 = (unsigned int)*__errno_location();
                        error(0, v68, v244, v243, v355);
                        v245 = v150;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v233 = *(_QWORD *)(v228 + 0x2000);
                          if ( v376 >= v147 - v233 )
                            break;
                          v228 = *(_QWORD *)(v228 + 8200);
                          v147 -= v233;
                        }
                        v234 = 0LL;
                        if ( v376 < v147 )
                          v234 = v147 - v376;
                        v68 = v233 - v234;
                        if ( v68 )
                          sub_4048A0(v228 + v234, v68, v376);
                        while ( 1 )
                        {
                          v228 = *(_QWORD *)(v228 + 8200);
                          if ( !v228 )
                            break;
                          v68 = *(_QWORD *)(v228 + 0x2000);
                          if ( v68 )
                            sub_4048A0(v228, v68, v232);
                        }
                        LOBYTE(v359) = 1;
                        v245 = v150;
                      }
                      while ( v245 )
                      {
                        v235 = *(_QWORD *)(v245 + 8200);
                        free((void *)v245);
                        v245 = v235;
                      }
                      goto LABEL_161;
                    }
                    if ( v174 == -1 )
                    {
                      LODWORD(v236) = sub_404C20((unsigned int)fildes, 0LL, 1LL, v366);
                      v174 = v236;
                    }
                    if ( v173 > v174 && v376 < v173 - v174 )
                    {
                      v174 = v173 - v376;
                      sub_404C20((unsigned int)fildes, v173 - v376, 0LL, v366);
                    }
                    v379.st_dev = v174;
                  }
                  v68 = v366;
                  LODWORD(v105) = sub_404A20(0LL, v366, (unsigned int)fildes, offset);
                  v379.st_dev += v105;
                  LOBYTE(v359) = 1;
LABEL_161:
                  if ( byte_612384 )
                  {
                    v119 = (const char *)(unsigned int)fildes;
                    *(_DWORD *)(v48 + 60) = (unsigned __int8)v359 - 1;
                    if ( __fxstat(1, (int)fildes, &stat_buf) < 0 )
                    {
                      v134 = __errno_location();
                      v135 = *(_QWORD *)v48;
                      v136 = v134;
                      *(_DWORD *)(v48 + 60) = *v134;
                      LODWORD(v137) = sub_4047E0(v135, (unsigned int)fildes);
                      LODWORD(v142) = sub_409510(4LL, v137, v138, v139, v140, v141);
                      v143 = v142;
                      v144 = dcgettext(0LL, "error reading %s", 5);
                      v119 = (const char *)(unsigned int)*v136;
                      error(0, (int)v119, v144, v143, v355);
                      goto LABEL_186;
                    }
                    if ( ((stat_buf.st_mode & 0xF000) - 4096) & 0xFFFFE000 && (stat_buf.st_mode & 0xB000) != 0x8000 )
                      goto LABEL_296;
                    if ( !(_BYTE)v359 )
                      goto LABEL_186;
                    v120 = 1;
                    v121 = *(_QWORD *)v48;
                    *(_DWORD *)(v48 + 48) = stat_buf.st_mode;
                    v122 = v379.st_dev;
                    *(_BYTE *)(v48 + 52) = 0;
                    if ( !mask )
                      v120 = (signed int)v372;
                    *(_DWORD *)(v48 + 56) = (_DWORD)fildes;
                    *(_QWORD *)(v48 + 8) = v122;
                    v123 = stat_buf.st_mtim.tv_sec;
                    *(_DWORD *)(v48 + 64) = v120;
                    *(_QWORD *)(v48 + 16) = v123;
                    v124 = stat_buf.st_mtim.tv_nsec;
                    *(_QWORD *)(v48 + 88) = 0LL;
                    *(_QWORD *)(v48 + 24) = v124;
                    *(_QWORD *)(v48 + 32) = stat_buf.st_dev;
                    *(_QWORD *)(v48 + 40) = stat_buf.st_ino;
                    LODWORD(v125) = sub_4047E0(v121, (unsigned int)fildes);
                    *(_BYTE *)(v48 + 53) = sub_405090((unsigned int)fildes, v125);
                  }
                  else if ( mask && close((int)fildes) )
                  {
                    LODWORD(v106) = sub_4047E0(*(_QWORD *)v48, v68);
                    LODWORD(v111) = sub_409510(4LL, v106, v107, v108, v109, v110);
                    v112 = v111;
                    v113 = dcgettext(0LL, "error reading %s", 5);
                    v114 = __errno_location();
                    error(0, *v114, v113, v112, v355);
                    LOBYTE(v359) = 0;
                  }
                }
              }
              v365 = byte_612384;
              if ( byte_612384 )
              {
                v186 = (char *)v368;
                v187 = (signed __int64)v367;
                v188 = 0LL;
                do
                {
                  if ( !strcmp(*(const char **)v186, "-")
                    && !v186[52]
                    && (v189 = *((_DWORD *)v186 + 14), v189 >= 0)
                    && ((*((_DWORD *)v186 + 12) & 0xF000) == 4096 || (unsigned int)sub_40B5B0(v189)) )
                  {
                    *((_DWORD *)v186 + 14) = -1;
                    v186[52] = 1;
                  }
                  else
                  {
                    ++v188;
                  }
                  v186 += 96;
                }
                while ( v367 != v186 );
                if ( v188 )
                {
                  v190 = (char *)1;
                  if ( __fxstat(1, 1, &v379) >= 0 )
                  {
                    LOBYTE(v191) = 1;
                    if ( (v379.st_mode & 0xF000) != 4096 )
                      v191 = (unsigned int)sub_40B5B0(1) != 0;
                    byte_612383 = v191 & 1;
                    if ( !byte_612378 )
                    {
                      v192 = v368;
                      v186 = v367;
                      do
                      {
                        if ( !*(_BYTE *)(v192 + 52) )
                        {
                          v190 = "-";
                          if ( !strcmp(*(const char **)v192, "-") )
                            goto LABEL_266;
                        }
                        v192 += 96LL;
                      }
                      while ( v367 != (char *)v192 );
                      v193 = 0LL;
                      do
                      {
                        if ( *(_DWORD *)(v368 + v193 + 56) >= 0 && *(_BYTE *)(v368 + v193 + 53) )
                          goto LABEL_266;
                        v193 += 96LL;
                      }
                      while ( v371 != v193 );
                      v194 = 0LL;
                      while ( 1 )
                      {
                        if ( *(_DWORD *)(v368 + v194 + 56) >= 0 )
                        {
                          v195 = *(_BYTE *)(v368 + v194 + 53);
                          if ( !v195 )
                            break;
                        }
                        v194 += 96LL;
                        if ( v371 == v194 )
                          goto LABEL_266;
                      }
LABEL_372:
                      LOBYTE(v358) = v195;
                      v250 = (const char **)v368;
                      v251 = &stat_buf;
                      do
                      {
                        v190 = (char *)*v250;
                        if ( !__lxstat(1, *v250, &stat_buf) && (stat_buf.st_mode & 0xF000) == 40960 )
                          goto LABEL_266;
                        v250 += 12;
                      }
                      while ( (const char **)v367 != v250 );
                      v252 = 0LL;
                      do
                      {
                        if ( *(_DWORD *)(v368 + v252 + 56) >= 0 )
                        {
                          v253 = *(_DWORD *)(v368 + v252 + 48) & 0xF000;
                          if ( v253 != 0x8000 && v253 != 4096 )
                            goto LABEL_266;
                        }
                        v252 += 96LL;
                      }
                      while ( v371 != v252 );
                      if ( v374 || dword_6122A8 != 2 )
                      {
                        v254 = inotify_init();
                        a4 = (unsigned int)v254;
                        if ( v254 < 0 )
                          goto LABEL_402;
                        if ( !fflush_unlocked(stdout) )
                        {
                          v255 = 0LL;
                          LODWORD(v256) = sub_407060(v355, 0LL, sub_4047C0, sub_4047D0, 0LL);
                          v359 = v256;
                          if ( !v256 )
                            goto LABEL_501;
                          v260 = 2LL;
                          v261 = 3078;
                          if ( dword_6122A8 != 1 )
                            v261 = 2;
                          fildesa = 0;
                          v24 = 0;
                          v262 = 0LL;
                          offset = (__off_t)&stat_buf;
                          v263 = (char *)v368;
                          mask = v261;
LABEL_389:
                          if ( v263[52] )
                            goto LABEL_417;
                          v264 = *(const char **)v263;
                          v265 = strlen(*(const char **)v263) + 1;
                          *((_DWORD *)v263 + 17) = -1;
                          if ( v262 < v265 - 1 )
                            v262 = v265 - 1;
                          if ( dword_6122A8 != 1 )
                            goto LABEL_510;
                          LODWORD(v266) = sub_406630(v264);
                          v267 = v266;
                          v369 = (char *)&v264[v266];
                          bufa = v264[v266];
                          LODWORD(v268) = sub_4066F0(v264);
                          *((_QWORD *)v263 + 10) = v268 - (_QWORD)v264;
                          *v369 = 0;
                          v269 = ".";
                          if ( v267 )
                            v269 = *(const char **)v263;
                          *((_DWORD *)v263 + 18) = inotify_add_watch(a4, v269, 0x784u);
                          *(_BYTE *)(*(_QWORD *)v263 + v267) = bufa;
                          if ( *((_DWORD *)v263 + 18) >= 0 )
                          {
LABEL_510:
                            v255 = *(const char **)v263;
                            v270 = inotify_add_watch(a4, *(const char **)v263, mask);
                            *((_DWORD *)v263 + 17) = v270;
                            if ( v270 < 0 )
                            {
                              if ( *((_DWORD *)v263 + 14) != -1 )
                                v24 = v365;
                              v271 = __errno_location();
                              v272 = v271;
                              v273 = *v271;
                              v260 = v273 & 0xFFFFFFEF;
                              if ( (_DWORD)v260 == 12 )
                              {
LABEL_400:
                                v274 = dcgettext(0LL, "inotify resources exhausted", 5);
                                error(0, 0, v274, v355);
                                goto LABEL_401;
                              }
                              if ( v273 != *((_DWORD *)v263 + 15) )
                              {
                                LODWORD(v290) = sub_409510(4LL, *(_QWORD *)v263, v260, v257, v258, v259);
                                buf = v290;
                                v291 = dcgettext(0LL, "cannot watch %s", 5);
                                v255 = (const char *)(unsigned int)*v272;
                                error(0, (int)v255, v291, buf, v355);
                              }
                              goto LABEL_417;
                            }
                            goto LABEL_415;
                          }
                          v341 = v263;
                          v344 = __errno_location();
                          if ( *v344 == 28 )
                            goto LABEL_400;
                          LODWORD(v347) = sub_409510(4LL, *(_QWORD *)v341, v342, v343, v345, v346);
                          v348 = v347;
                          v349 = dcgettext(0LL, "cannot watch parent directory of %s", 5);
                          error(0, *v344, v349, v348, v355);
LABEL_401:
                          sub_4072A0(v359);
                          *__errno_location() = 0;
                          goto LABEL_402;
                        }
                        v308 = dcgettext(0LL, "write error", 5);
                        v350 = __errno_location();
                        error(1, *v350, v308, v355);
LABEL_505:
                        v327 = 0LL;
                        v351 = v328;
                        sub_4056E0(v328, 0LL);
                        v329 = v351;
LABEL_496:
                        *((_DWORD *)v329 + 17) = -1;
                        v372 = v329;
                        LODWORD(v330) = sub_4047E0(*(_QWORD *)v329, v327);
                        sub_404820(*((_DWORD *)v372 + 14), v330);
LABEL_497:
                        LODWORD(v331) = sub_407800(v359, v308);
                        if ( !v331 )
LABEL_501:
                          sub_40A020();
LABEL_498:
                        if ( dword_6122A8 == 1 )
                        {
LABEL_499:
                          sub_4056E0(v308, 0LL);
                          goto LABEL_458;
                        }
LABEL_459:
                        v309 = *((_DWORD *)v370 + 1);
                        if ( v309 & 0xE04 )
                        {
                          if ( BYTE1(v309) & 4 )
                          {
                            inotify_rm_watch(a4, *((_DWORD *)v308 + 17));
                            sub_407840(v359, v308);
                          }
                          sub_4056E0(v308, 0LL);
                          goto LABEL_432;
                        }
LABEL_473:
                        sub_404F00(v308, &v377);
                        goto LABEL_432;
                      }
                    }
                    goto LABEL_266;
                  }
                  v282 = dcgettext(0LL, "standard output", 5);
                  v283 = __errno_location();
                  error(1, *v283, v282, v355);
LABEL_412:
                  v196 = dcgettext(0LL, "write error", 5);
                  v284 = __errno_location();
                  error(1, *v284, v196, v355);
LABEL_413:
                  v201 = -2LL;
                  goto LABEL_279;
                }
              }
            }
          }
LABEL_328:
          if ( (_BYTE)fildes == 1 && !(_BYTE)buf )
          {
            if ( !byte_612383 )
              goto LABEL_271;
            goto LABEL_331;
          }
          if ( fflush_unlocked(stdout) )
            goto LABEL_412;
          if ( byte_612383 )
          {
LABEL_331:
            timeout.tv_usec = 0LL;
            timeout.tv_sec = 0LL;
            memset(&stat_buf, 0, 0x80uLL);
            v190 = (char *)&stat_buf;
            stat_buf.st_dev |= 2uLL;
            if ( select(2, (fd_set *)&stat_buf, 0LL, 0LL, &timeout) == 1 )
              raise(13);
          }
          if ( (_BYTE)fildes )
            goto LABEL_271;
          if ( (_BYTE)mask )
            goto LABEL_150;
          v223 = (unsigned int)pid;
          if ( pid )
          {
            v190 = 0LL;
            if ( kill(pid, 0) )
            {
              if ( *__errno_location() != 1 )
              {
                LOBYTE(mask) = v365;
                goto LABEL_271;
              }
            }
          }
          if ( !sub_40A160(v223, v190) )
            goto LABEL_271;
          v196 = dcgettext(0LL, "cannot read realtime clock", 5);
          v224 = __errno_location();
          error(1, *v224, v196, v364, v355);
LABEL_338:
          *(_DWORD *)(v48 + 56) = -1;
          v225 = __errno_location();
          *(_DWORD *)(v48 + 60) = *v225;
          LODWORD(v226) = sub_4095E0(0LL, 3LL, a4);
          v190 = (char *)(unsigned int)*v225;
          error(0, (int)v190, "%s", v226, v355);
          close((int)v186);
          goto LABEL_280;
        }
      }
      LODWORD(v197) = sub_4047E0(*(_QWORD *)v48, v190);
      v187 = *(_DWORD *)(v48 + 48);
      a4 = v197;
      v198 = *(_DWORD *)(v48 + 64);
      if ( (_DWORD)v45 != v198 )
      {
        v199 = sub_40A6A0((char)v186);
        if ( (_DWORD)v45 )
        {
          if ( v199 >= 0 )
            goto LABEL_277;
        }
        else if ( v199 >= 0 )
        {
          v200 = v199;
          BYTE1(v200) |= 8u;
          if ( v199 == v200 || (unsigned int)sub_40A6A0((char)v186) != -1 )
          {
LABEL_277:
            *(_DWORD *)(v48 + 64) = v45;
            v198 = v45;
            goto LABEL_278;
          }
        }
        v219 = __errno_location();
        if ( (*(_DWORD *)(v48 + 48) & 0xF000) != 0x8000 || *v219 != 1 )
        {
          v246 = v219;
          LODWORD(v247) = sub_4095E0(0LL, 3LL, a4);
          v248 = v247;
          v249 = dcgettext(0LL, "%s: cannot change nonblocking mode", 5);
          error(1, *v246, v249, v248, v246);
          goto LABEL_372;
        }
        v198 = *(_DWORD *)(v48 + 64);
      }
LABEL_278:
      v201 = -2LL;
      if ( v198 )
        goto LABEL_279;
      v190 = (char *)(unsigned int)v186;
      if ( __fxstat(1, (int)v186, &stat_buf) )
        goto LABEL_338;
      v214 = stat_buf.st_mode;
      if ( *(_DWORD *)(v48 + 48) != stat_buf.st_mode )
      {
        v215 = stat_buf.st_mtim.tv_sec;
        v216 = stat_buf.st_mtim.tv_nsec;
LABEL_306:
        v217 = v187 & 0xF000;
        *(_QWORD *)(v48 + 16) = v215;
        *(_QWORD *)(v48 + 24) = v216;
        *(_DWORD *)(v48 + 48) = v214;
        *(_QWORD *)(v48 + 88) = 0LL;
        if ( v217 == 0x8000 && stat_buf.st_size < *(_QWORD *)(v48 + 8) )
        {
          LODWORD(v221) = sub_4095E0(0LL, 3LL, a4);
          offset = v221;
          v222 = dcgettext(0LL, "%s: file truncated", 5);
          error(0, 0, v222, offset, v355);
          sub_404C20((unsigned int)v186, 0LL, 0LL, a4);
          *(_QWORD *)(v48 + 8) = 0LL;
        }
        if ( v196 != (char *)v358 )
        {
          v358 = (signed __int64)v196;
          if ( byte_612381 )
          {
            v218 = "\n";
            if ( byte_612290 )
              v218 = "";
            __printf_chk(1LL, "%s==> %s <==\n", v218, a4);
            byte_612290 = 0;
            v358 = (signed __int64)v196;
          }
        }
        if ( *(_DWORD *)(v48 + 64) )
          goto LABEL_413;
        v201 = -1LL;
        if ( v217 == 0x8000 && *(_BYTE *)(v48 + 53) )
          v201 = stat_buf.st_size - *(_QWORD *)(v48 + 8);
LABEL_279:
        v190 = (char *)a4;
        LODWORD(v202) = sub_404A20(0LL, a4, (unsigned int)v186, v201);
        *(_QWORD *)(v48 + 8) += v202;
        LOBYTE(fildes) = (v202 != 0) | (unsigned __int8)fildes;
        goto LABEL_280;
      }
      v215 = stat_buf.st_mtim.tv_sec;
      if ( (stat_buf.st_mode & 0xF000) == 0x8000 && *(_QWORD *)(v48 + 8) != stat_buf.st_size )
      {
        v216 = stat_buf.st_mtim.tv_nsec;
        goto LABEL_306;
      }
      v216 = stat_buf.st_mtim.tv_nsec;
      if ( *(_QWORD *)(v48 + 16) != stat_buf.st_mtim.tv_sec
        || *(_DWORD *)(v48 + 24) != LODWORD(stat_buf.st_mtim.tv_nsec) )
      {
        goto LABEL_306;
      }
      v220 = *(_QWORD *)(v48 + 88);
      v34 = v220 < qword_6122A0;
      *(_QWORD *)(v48 + 88) = v220 + 1;
      if ( !v34 && dword_6122A8 == 1 )
      {
        v190 = (char *)(*(_DWORD *)(v48 + 64) != 0);
        sub_4056E0(v48, v190);
        *(_QWORD *)(v48 + 88) = 0LL;
      }
LABEL_280:
      ++v196;
      v48 += 96LL;
      if ( (char *)v355 == v196 )
        goto LABEL_284;
    }
  }
LABEL_8:
  v9 = 0LL;
LABEL_9:
  v10 = &a1[v9];
  LODWORD(v11) = 0;
  v12 = v4 - (unsigned __int8)v9;
  v364 = 1.0;
  while ( 1 )
  {
    v13 = sub_40B530((unsigned int)v12, v10, "c:n:fFqs:vz0123456789", &off_40D560, 0LL);
    if ( v13 == -1 )
      break;
    if ( v13 == 113 )
    {
      LODWORD(v11) = 2;
    }
    else if ( v13 <= 113 )
    {
      if ( v13 <= 57 )
      {
        v16 = v13;
        if ( v13 >= 48 )
        {
          v241 = dcgettext(0LL, "option used in invalid context -- %c", 5);
          error(1, 0, v241, (unsigned int)v16);
        }
        else
        {
          if ( v13 == -131 )
          {
            sub_409C90((char)stdout);
            exit(0);
          }
          if ( v13 == -130 )
            sub_405D10(0);
        }
LABEL_368:
        sub_405D10(1);
      }
      if ( v13 == 99 )
      {
LABEL_38:
        byte_612385 = v13 == 110;
        if ( *(_BYTE *)qword_612540 == 43 )
        {
          byte_612382 = 1;
        }
        else if ( *(_BYTE *)qword_612540 == 45 )
        {
          ++qword_612540;
        }
        if ( v13 == 110 )
          v19 = dcgettext(0LL, "invalid number of lines", 5);
        else
          v19 = dcgettext(0LL, "invalid number of bytes", 5);
        LODWORD(v20) = sub_40A130(qword_612540, 0LL, -1LL, "bkKmMGTPEZY0", v19, 0LL);
        v376 = v20;
      }
      else if ( v13 > 99 )
      {
        if ( v13 != 102 )
          goto LABEL_37;
LABEL_27:
        byte_612384 = 1;
        if ( qword_612540 )
        {
          LODWORD(v15) = sub_406440("--follow", qword_612540, &off_40D770, dword_40D760, 4LL, off_6122B8);
          dword_6122A8 = dword_40D760[v15];
        }
        else
        {
          dword_6122A8 = 2;
        }
      }
      else
      {
        if ( v13 != 70 )
          goto LABEL_368;
        byte_612384 = 1;
        dword_6122A8 = 1;
        byte_612386 = 1;
      }
    }
    else if ( v13 == 129 )
    {
      v21 = dcgettext(0LL, "invalid maximum number of unchanged stats between opens", 5);
      LODWORD(v22) = sub_40A130(qword_612540, 0LL, -1LL, "", v21, 0LL);
      qword_6122A0 = v22;
    }
    else if ( v13 > 129 )
    {
      if ( v13 == 131 )
      {
        byte_612379 = 1;
      }
      else if ( v13 < 131 )
      {
        v23 = dcgettext(0LL, "invalid PID", 5);
        pid = sub_40A130(qword_612540, 0LL, 0x7FFFFFFFLL, "", v23, 0LL);
      }
      else
      {
        if ( v13 == 132 )
          goto LABEL_27;
        if ( v13 != 133 )
          goto LABEL_368;
        byte_612378 = 1;
      }
    }
    else if ( v13 == 118 )
    {
      LODWORD(v11) = 1;
    }
    else if ( v13 <= 118 )
    {
      if ( v13 != 115 )
        goto LABEL_368;
      if ( !(unsigned __int8)sub_40A1C0(qword_612540, 0LL, &stat_buf, sub_406500) )
      {
        LODWORD(v17) = sub_409760(qword_612540, 0LL);
        v11 = v17;
        v18 = dcgettext(0LL, "invalid number of seconds: %s", 5);
        error(1, 0, v18, v11);
LABEL_37:
        if ( v13 != 110 )
          goto LABEL_368;
        goto LABEL_38;
      }
      v364 = *(double *)&stat_buf.st_dev;
    }
    else if ( v13 == 122 )
    {
      byte_612380 = 0;
    }
    else
    {
      if ( v13 != 128 )
        goto LABEL_368;
      byte_612386 = 1;
    }
  }
  if ( byte_612386 )
  {
    if ( byte_612384 )
    {
      if ( dword_6122A8 != 2 )
      {
        v31 = pid;
        if ( pid )
          goto LABEL_83;
        goto LABEL_84;
      }
      v81 = "warning: --retry only effective for the initial open";
    }
    else
    {
      byte_612386 = 0;
      v81 = "warning: --retry ignored; --retry is useful only when following";
    }
    v82 = dcgettext(0LL, v81, 5);
    error(0, 0, v82);
  }
  v31 = pid;
  if ( pid )
  {
    if ( byte_612384 )
    {
LABEL_83:
      if ( kill(v31, 0) && *__errno_location() == 38 )
      {
        v212 = dcgettext(0LL, "warning: --pid=PID is not supported on this system", 5);
        error(0, 0, v212);
        pid = 0;
      }
    }
    else
    {
      v83 = dcgettext(0LL, "warning: PID ignored; --pid=PID is useful only when following", 5);
      error(0, 0, v83);
    }
  }
LABEL_84:
  if ( byte_612382 && v376 )
    --v376;
  if ( dword_61233C >= v12 )
  {
    v33 = &off_612298;
    v355 = 1LL;
  }
  else
  {
    v32 = v12 - dword_61233C;
    v33 = (void **)&v10[dword_61233C];
    v355 = v32;
  }
  v34 = 0;
  v35 = 1;
  v36 = 0LL;
  v37 = 1LL;
  v38 = (unsigned __int64)&v33[v355];
  v39 = v33;
  do
  {
    v40 = *v39;
    v41 = 2LL;
    v42 = "-";
    do
    {
      if ( !v41 )
        break;
      v34 = *v40 < (unsigned __int8)*v42;
      v35 = *v40++ == *v42++;
      --v41;
    }
    while ( v35 );
    LOBYTE(v14) = (!v34 && !v35) - v34;
    if ( (!v34 && !v35) == v34 )
      v36 = 1LL;
    ++v39;
    v34 = (unsigned __int64)v39 < v38;
    v35 = v39 == (void **)v38;
  }
  while ( v39 != (void **)v38 );
  if ( !(_BYTE)v36 )
  {
LABEL_104:
    if ( !v376 && !byte_612384 )
      goto LABEL_235;
    goto LABEL_106;
  }
  if ( dword_6122A8 == 1 )
  {
    LODWORD(v279) = sub_409510(4LL, "-", v14, v41, v36, 1LL);
    v280 = v279;
    v281 = dcgettext(0LL, "cannot follow %s by name", 5);
    error(1, 0, v281, v280, v355);
    goto LABEL_410;
  }
  if ( byte_612384 )
  {
    if ( pid
      || v355 != 1
      || dword_6122A8 != 2
      || (v40 = 0LL, __fxstat(1, 0, &stat_buf))
      || (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      if ( isatty(0) )
      {
        v84 = dcgettext(0LL, "warning: following standard input indefinitely is ineffective", 5);
        v40 = 0LL;
        error(0, 0, v84, v355);
      }
    }
    goto LABEL_104;
  }
  if ( v376 )
  {
LABEL_106:
    v371 = 96 * v355;
    LODWORD(v43) = sub_409DD0(96 * v355, v40, v14, v41, v36, v37);
    v368 = v43;
    do
    {
      v44 = *v33;
      ++v33;
      v43 += 96LL;
      *(_QWORD *)(v43 - 96) = v44;
    }
    while ( v33 != (void **)v38 );
    if ( (_DWORD)v11 == 1 || !(_DWORD)v11 && v355 != 1 )
      byte_612381 = 1;
    LODWORD(v45) = v368;
    LODWORD(v372) = -1;
    v374 = 1;
    v46 = __CFADD__(v368, v371);
    v47 = v368 + v371 == 0;
    v48 = v368;
    v367 = (char *)(v368 + v371);
    goto LABEL_112;
  }
LABEL_235:
  result = 0LL;
  if ( byte_612382 )
    goto LABEL_106;
  return result;
}

int sub_40470B()
{
  __int64 *v0; // rax@1

  v0 = &program_invocation_short_name;
  if ( &program_invocation_short_name != &program_invocation_short_name )
    LODWORD(v0) = 0;
  return (unsigned __int64)v0;
}

int sub_40472A()
{
  return 0;
}

int sub_404761()
{
  int result; // eax@4

  if ( !byte_612368 )
  {
    while ( qword_612370 < (unsigned __int64)(((&unk_611E48 - (_UNKNOWN *)&qword_611E40) >> 3) - 1) )
      (*(&qword_611E40 + ++qword_612370))();
    result = sub_40470B();
    byte_612368 = 1;
  }
  return result;
}

int sub_4047B8()
{
  return sub_40472A();
}

unsigned __int64 __fastcall sub_4047C0(__int64 a1, unsigned __int64 a2)
{
  return *(_DWORD *)(a1 + 68) % a2;
}

bool __fastcall sub_4047D0(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 68) == *(_DWORD *)(a2 + 68);
}

char *__usercall sub_4047E0(bool a1, bool a2, char *a3)
{
  char *result; // rax@1
  signed __int64 v4; // rcx@1
  char *v5; // rdi@1
  char *v6; // rsi@1

  result = a3;
  v4 = 2LL;
  v5 = "-";
  v6 = result;
  do
  {
    if ( !v4 )
      break;
    a1 = (unsigned __int8)*v6 < (unsigned __int8)*v5;
    a2 = *v6++ == *v5++;
    --v4;
  }
  while ( a2 );
  if ( (!a1 && !a2) == a1 )
    result = dcgettext(0LL, "standard input", 5);
  return result;
}

void __fastcall sub_404820(int a1, __int64 a2)
{
  __int64 v2; // rdx@2
  __int64 v3; // rcx@2
  __int64 v4; // r8@2
  __int64 v5; // r9@2
  __int64 v6; // rax@3
  __int64 v7; // r12@3
  char *v8; // rbp@3
  int *v9; // rax@3

  if ( (unsigned int)a1 < 0xFFFFFFFF && a1 != 0 )
  {
    if ( close(a1) )
    {
      LODWORD(v6) = sub_409510(4LL, a2, v2, v3, v4, v5);
      v7 = v6;
      v8 = dcgettext(0LL, "closing %s (fd=%d)", 5);
      v9 = __errno_location();
      error(0, *v9, v8, v7, (unsigned int)a1);
    }
  }
}

int __fastcall sub_4048A0(const void *a1, size_t a2)
{
  size_t v2; // rax@1
  __int64 v3; // rdx@2
  __int64 v4; // rcx@2
  __int64 v5; // r8@2
  __int64 v6; // r9@2
  __int64 v7; // rax@2
  __int64 v8; // rbp@2
  char *v9; // rbx@2
  __int64 v10; // rsi@2
  __int64 v11; // rdx@2
  __int64 v12; // rcx@2

  v2 = fwrite_unlocked(a1, 1uLL, a2, stdout);
  if ( a2 > v2 )
  {
    clearerr_unlocked(stdout);
    LODWORD(v7) = sub_409510(4LL, "standard output", v3, v4, v5, v6);
    v8 = v7;
    v9 = dcgettext(0LL, "error writing %s", 5);
    v10 = (unsigned int)*__errno_location();
    error(1, v10, v9, v8);
    LODWORD(v2) = sub_404920(1LL, v10, v11, v12);
  }
  return v2;
}

signed __int64 __fastcall sub_404920(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  signed __int64 result; // rax@1
  __int64 v5; // r15@2
  _QWORD *v6; // r13@2
  __int64 v7; // rbx@2
  __int64 v8; // rax@3
  __int64 v9; // rdx@3
  __int64 v10; // rcx@3
  __int64 v11; // r8@3
  __int64 v12; // r9@3
  unsigned int v13; // er12@5
  char *v14; // rbp@5
  char *v15; // rdi@5
  __int64 v16; // rax@6
  size_t v17; // rbp@9
  __int64 v18; // rax@14
  __int64 v19; // rbp@14
  char *v20; // rbx@14
  int *v21; // rax@14
  char buf[8248]; // [sp+4h] [bp-2038h]@3

  result = 0LL;
  if ( a3 )
  {
    v5 = a1;
    v6 = a4;
    v7 = a3;
    while ( 1 )
    {
      v8 = sub_409780(a2, buf, 0x2000uLL);
      if ( !v8 )
        return 0xFFFFFFFFLL;
      if ( v8 == -1 )
        break;
      *v6 += v8;
      v13 = byte_612380;
      v14 = &buf[v8];
      v15 = buf;
      while ( 1 )
      {
        LODWORD(v16) = sub_40B730(v15, v13, v14 - v15);
        if ( !v16 )
          break;
        v15 = (char *)(v16 + 1);
        if ( !--v7 )
        {
          result = 0LL;
          if ( v14 > v15 )
          {
            v17 = v14 - v15;
            if ( v17 )
            {
              sub_4048A0(v15, v17);
              result = 0LL;
            }
          }
          return result;
        }
      }
    }
    LODWORD(v18) = sub_409510(4LL, v5, v9, v10, v11, v12);
    v19 = v18;
    v20 = dcgettext(0LL, "error reading %s", 5);
    v21 = __errno_location();
    error(0, *v21, v20, v19);
    result = 1LL;
  }
  return result;
}

int __fastcall sub_404A20(char a1, __int64 a2, int a3, unsigned __int64 a4)
{
  int v4; // er15@1
  unsigned __int64 v5; // r13@1
  int v6; // er12@1
  char v7; // bp@1
  unsigned __int64 v8; // rbx@1
  size_t v9; // rdx@2
  __int64 v10; // rax@4
  size_t v11; // r14@4
  char *v12; // rdx@7
  __int64 v13; // rdx@14
  __int64 v14; // rcx@14
  int *v15; // rbx@14
  __int64 v16; // r8@14
  __int64 v17; // r9@14
  __int64 v19; // rax@16
  __int64 v20; // rbp@16
  char *v21; // rax@16
  __int64 v22; // rsi@16
  __int64 v23; // rdx@16
  __int64 v24; // rcx@16
  char buf; // [sp+10h] [bp-2038h]@4

  v4 = a3;
  v5 = a4;
  v6 = 0;
  v7 = a1;
  v8 = a4;
  while ( 1 )
  {
    v9 = 0x2000LL;
    if ( v8 <= 0x2000 )
      v9 = v8;
    v10 = sub_409780(v4, &buf, v9);
    v11 = v10;
    if ( v10 == -1 )
      break;
    if ( !v10 )
      return v6;
    if ( v7 )
    {
      v12 = "";
      if ( !byte_612290 )
        v12 = "\n";
      __printf_chk(1LL, "%s==> %s <==\n", v12, a2);
      byte_612290 = 0;
    }
    v6 += v11;
    sub_4048A0(&buf, v11);
    if ( v5 != -1LL )
    {
      v8 -= v11;
      if ( !v8 || v5 == -2LL )
        return v6;
    }
    v7 = 0;
  }
  v15 = __errno_location();
  if ( *v15 == 11 )
    return v6;
  LODWORD(v19) = sub_409510(4LL, a2, v13, v14, v16, v17);
  v20 = v19;
  v21 = dcgettext(0LL, "error reading %s", 5);
  v22 = (unsigned int)*v15;
  error(1, v22, v21, v20);
  return sub_404B40(1LL, v22, v23, v24);
}

signed __int64 __fastcall sub_404B40(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbp@2
  unsigned __int64 v5; // rbx@2
  unsigned __int64 v6; // rax@6
  __int64 v7; // rdx@6
  __int64 v8; // rcx@6
  __int64 v9; // r8@6
  __int64 v10; // r9@6
  signed __int64 result; // rax@7
  __int64 v12; // rax@10
  __int64 v13; // rbp@10
  char *v14; // rbx@10
  int *v15; // rax@10
  char v16[8232]; // [sp+0h] [bp-2028h]@6

  if ( a3 )
  {
    v4 = a4;
    v5 = a3;
    while ( 1 )
    {
      v6 = sub_409780(a2, v16, 0x2000uLL);
      if ( !v6 )
        return 0xFFFFFFFFLL;
      if ( v6 == -1LL )
        break;
      *v4 += v6;
      if ( v6 > v5 )
      {
        sub_4048A0(&v16[v5], v6 - v5);
        return 0LL;
      }
      v5 -= v6;
      if ( !v5 )
        return 0LL;
    }
    LODWORD(v12) = sub_409510(4LL, a1, v7, v8, v9, v10);
    v13 = v12;
    v14 = dcgettext(0LL, "error reading %s", 5);
    v15 = __errno_location();
    error(0, *v15, v14, v13);
    result = 1LL;
  }
  else
  {
    result = 0LL;
  }
  return result;
}

__off_t __fastcall sub_404C20(int a1, __off_t a2, int a3, __int64 a4)
{
  __int64 v4; // r12@1
  int v5; // ebx@1
  __off_t result; // rax@1
  __int64 v7; // rax@2
  __int64 v8; // r13@2
  int *v9; // rbp@2
  __int64 v10; // rax@3
  const char *v11; // rsi@3
  __int64 v12; // rbx@3
  char *v13; // rax@4
  __int64 v14; // rax@6
  __int64 v15; // [sp+0h] [bp-48h]@2

  v4 = a4;
  v5 = a3;
  result = lseek(a1, a2, a3);
  if ( result < 0 )
  {
    LODWORD(v7) = sub_407A20(a2, &v15);
    v8 = v7;
    v9 = __errno_location();
    if ( v5 == 1 )
    {
      LODWORD(v14) = sub_4095E0(0LL, 3LL, v4);
      v11 = "%s: cannot seek to relative offset %s";
      v12 = v14;
    }
    else
    {
      LODWORD(v10) = sub_4095E0(0LL, 3LL, v4);
      v11 = "%s: cannot seek to offset %s";
      v12 = v10;
    }
    v13 = dcgettext(0LL, v11, 5);
    error(0, *v9, v13, v12, v8);
    exit(1);
  }
  return result;
}

signed __int64 __fastcall sub_404CD0(__int64 a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5, _QWORD *a6)
{
  __int64 v6; // r15@2
  size_t v7; // rbp@2
  __off_t v8; // r13@4
  __int64 v9; // rax@4
  __int64 v10; // rdx@4
  __int64 v11; // rcx@4
  __int64 v12; // r8@4
  __int64 v13; // r9@4
  __int64 v14; // r12@4
  __int64 v15; // rax@7
  int v16; // ebp@9
  size_t v17; // rdx@9
  char *v18; // rax@11
  __int64 v19; // rax@15
  __int64 v21; // rax@18
  __int64 v22; // rax@20
  __int64 v23; // rbp@20
  char *v24; // rbx@20
  int *v25; // rax@20
  _QWORD *v26; // [sp+8h] [bp-2050h]@1
  __int64 v27; // [sp+10h] [bp-2048h]@1
  unsigned __int64 v28; // [sp+18h] [bp-2040h]@1
  char s; // [sp+20h] [bp-2038h]@4

  v27 = a4;
  v28 = a5;
  v26 = a6;
  if ( !a3 )
    return 1LL;
  v6 = a3;
  v7 = ((((unsigned __int64)((signed __int64)(v28 - a4) >> 63) >> 51) + (unsigned __int16)v28 - (unsigned __int16)a4) & 0x1FFF)
     - ((unsigned __int64)((signed __int64)(v28 - a4) >> 63) >> 51);
  if ( ((((unsigned __int64)((signed __int64)(v28 - a4) >> 63) >> 51) + (unsigned __int16)v28 - (unsigned __int16)a4) & 0x1FFF) == (unsigned __int64)((signed __int64)(v28 - a4) >> 63) >> 51 )
    v7 = 0x2000LL;
  v8 = v28 - v7;
  sub_404C20(a2, v28 - v7, 0, a1);
  v9 = sub_409780(a2, &s, v7);
  v14 = v9;
  if ( v9 != -1 )
  {
    *v26 = v8 + v9;
    if ( v9 )
    {
      v6 -= *((_BYTE *)&v28 + v9 + 7) != byte_612380;
      goto LABEL_9;
    }
LABEL_6:
    while ( v8 != v27 )
    {
      v8 -= 0x2000LL;
      sub_404C20(a2, v8, 0, a1);
      v15 = sub_409780(a2, &s, 0x2000uLL);
      v14 = v15;
      if ( v15 == -1 )
        goto LABEL_20;
      *v26 = v8 + v15;
      if ( !v15 )
        return 1LL;
LABEL_9:
      v16 = byte_612380;
      v17 = v14;
      while ( 1 )
      {
        v18 = (char *)memrchr(&s, v16, v17);
        if ( !v18 )
          break;
        v17 = v18 - &s;
        if ( !v6 )
        {
          if ( v14 - 1 != v17 )
            sub_4048A0(v18 + 1, v14 - 1 - v17);
          LODWORD(v19) = sub_404A20(0, a1, a2, v28 - v14 - v8);
          *v26 += v19;
          return 1LL;
        }
        --v6;
        if ( v18 == &s )
          goto LABEL_6;
      }
    }
    sub_404C20(a2, v8, 0, a1);
    LODWORD(v21) = sub_404A20(0, a1, a2, v28);
    *v26 = v21 + v8;
    return 1LL;
  }
LABEL_20:
  LODWORD(v22) = sub_409510(4LL, a1, v10, v11, v12, v13);
  v23 = v22;
  v24 = dcgettext(0LL, "error reading %s", 5);
  v25 = __errno_location();
  error(0, *v25, v24, v23, a1);
  return 0LL;
}

void __fastcall sub_404F00(__int64 a1, _QWORD *a2)
{
  char *v2; // rbx@2
  char *v3; // r13@2
  int v4; // eax@2
  bool v5; // bp@2
  __int64 v6; // rax@6
  __int64 v7; // rax@9
  int *v8; // rax@15
  int *v9; // rax@16
  int v10; // edi@16
  __int64 v11; // rax@17
  __int64 v12; // r14@17
  char *v13; // rax@17
  __int64 v14; // [sp-30h] [bp-B8h]@2
  __int64 v15; // [sp+0h] [bp-88h]@9
  __int64 v16; // [sp+28h] [bp-60h]@11
  __int64 v17; // [sp+30h] [bp-58h]@12
  __int64 v18; // [sp+60h] [bp-28h]@2

  if ( *(_DWORD *)(a1 + 56) != -1 )
  {
    v2 = (char *)a1;
    v3 = sub_4047E0((unsigned __int64)&v18 < 0x90, &v18 == 0LL, *(char **)a1);
    v4 = __fxstat(1, *(_DWORD *)(a1 + 56), (struct stat *)&v14);
    v5 = v4;
    if ( v4 )
    {
LABEL_16:
      v9 = __errno_location();
      v10 = *((_DWORD *)v2 + 14);
      *((_DWORD *)v2 + 15) = *v9;
      sub_404820(v10, (__int64)v3);
      *((_DWORD *)v2 + 14) = -1;
      return;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0xF000) == 0x8000 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( v15 < v7 )
      {
        LODWORD(v11) = sub_4095E0(0LL, 3LL, v3);
        v12 = v11;
        v13 = dcgettext(0LL, "%s: file truncated", 5);
        error(0, 0, v13, v12);
        sub_404C20(*(_DWORD *)(a1 + 56), 0LL, 0, (__int64)v3);
        *(_QWORD *)(a1 + 8) = 0LL;
      }
      else if ( v15 == v7 && *(_QWORD *)(a1 + 16) == v16 && *(_DWORD *)(a1 + 24) == (_DWORD)v17 )
      {
        return;
      }
    }
    if ( byte_612381 )
      v5 = *a2 != a1;
    LODWORD(v6) = sub_404A20(v5, (__int64)v3, *(_DWORD *)(a1 + 56), 0xFFFFFFFFFFFFFFFFLL);
    *(_QWORD *)(a1 + 8) += v6;
    if ( v6 )
    {
      *a2 = a1;
      if ( fflush_unlocked(stdout) )
      {
        v2 = dcgettext(0LL, "write error", 5);
        v8 = __errno_location();
        error(1, *v8, v2);
        goto LABEL_16;
      }
    }
  }
}

signed __int64 __usercall sub_405090(signed int a1, int a2, __int64 a3)
{
  __int64 v3; // rdx@2
  __int64 v4; // rcx@2
  int *v5; // rbp@2
  __int64 v6; // r8@2
  __int64 v7; // r9@2
  __int64 v9; // rax@4
  __int64 v10; // r12@4
  char *v11; // rax@4
  struct statfs v12; // [sp+0h] [bp-98h]@1

  if ( !fstatfs(a2, &v12) )
  {
    if ( v12.f_type != 352400198 )
    {
      if ( v12.f_type > 352400198 )
      {
        if ( v12.f_type != 1650746742 )
        {
          if ( v12.f_type > 1650746742 )
          {
            if ( v12.f_type != 1936880249 )
            {
              if ( v12.f_type > 1936880249 )
              {
                if ( v12.f_type != 3380511080LL )
                {
                  if ( v12.f_type > 3380511080LL )
                  {
                    if ( v12.f_type != 4076150800LL )
                    {
                      if ( v12.f_type > 4076150800LL )
                      {
                        if ( v12.f_type != 4185718668LL )
                        {
                          LOBYTE(a1) = v12.f_type != 4187351113LL;
                          return (unsigned int)a1;
                        }
                      }
                      else if ( v12.f_type != 3405662737LL )
                      {
                        LOBYTE(a1) = v12.f_type != 3730735588LL;
                        return (unsigned int)a1;
                      }
                    }
                  }
                  else if ( v12.f_type != 2435016766LL )
                  {
                    if ( v12.f_type > 2435016766LL )
                    {
                      if ( v12.f_type != 2508478710LL )
                      {
                        LOBYTE(a1) = v12.f_type != 2881100148LL;
                        return (unsigned int)a1;
                      }
                    }
                    else if ( v12.f_type != 1953653091 )
                    {
                      LOBYTE(a1) = v12.f_type != 2240043254LL;
                      return (unsigned int)a1;
                    }
                  }
                }
              }
              else if ( v12.f_type != 1684300152 )
              {
                if ( v12.f_type > 1684300152 )
                {
                  if ( v12.f_type != 1853056627 )
                  {
                    if ( v12.f_type > 1853056627 )
                    {
                      if ( v12.f_type != 1935894131 )
                      {
                        LOBYTE(a1) = v12.f_type != 1936814952;
                        return (unsigned int)a1;
                      }
                    }
                    else if ( v12.f_type != 1733912937 )
                    {
                      LOBYTE(a1) = v12.f_type != 1746473250;
                      return (unsigned int)a1;
                    }
                  }
                }
                else if ( v12.f_type != 1650812274 )
                {
                  if ( v12.f_type <= 1650812274 )
                  {
                    LOBYTE(a1) = v12.f_type != 1650812272;
                    return (unsigned int)a1;
                  }
                  if ( v12.f_type != 1667723888 )
                  {
                    LOBYTE(a1) = v12.f_type != 1684170528;
                    return (unsigned int)a1;
                  }
                }
              }
            }
          }
          else if ( v12.f_type != 1161678120 )
          {
            if ( v12.f_type > 1161678120 )
            {
              if ( v12.f_type != 1410924800 )
              {
                if ( v12.f_type > 1410924800 )
                {
                  if ( v12.f_type != 1481003842 )
                  {
                    if ( v12.f_type > 1481003842 )
                    {
                      if ( v12.f_type != 1513908720 )
                      {
                        LOBYTE(a1) = v12.f_type != 1634035564;
                        return (unsigned int)a1;
                      }
                    }
                    else if ( v12.f_type != 1448756819 )
                    {
                      LOBYTE(a1) = v12.f_type != 1479104553;
                      return (unsigned int)a1;
                    }
                  }
                }
                else if ( v12.f_type != 1397114950 )
                {
                  if ( v12.f_type > 1397114950 )
                  {
                    if ( v12.f_type != 1397118030 )
                    {
                      LOBYTE(a1) = v12.f_type != 1397703499;
                      return (unsigned int)a1;
                    }
                  }
                  else if ( v12.f_type != 1382369651 )
                  {
                    LOBYTE(a1) = v12.f_type != 1397109069;
                    return (unsigned int)a1;
                  }
                }
              }
            }
            else if ( v12.f_type != 732765674 )
            {
              if ( v12.f_type > 732765674 )
              {
                if ( v12.f_type != 1111905073 )
                {
                  if ( v12.f_type > 1111905073 )
                  {
                    if ( v12.f_type != 1112100429 )
                    {
                      LOBYTE(a1) = v12.f_type != 1128357203;
                      return (unsigned int)a1;
                    }
                  }
                  else if ( v12.f_type != 801189825 )
                  {
                    LOBYTE(a1) = v12.f_type != 827541066;
                    return (unsigned int)a1;
                  }
                }
              }
              else if ( v12.f_type != 464386766 )
              {
                if ( v12.f_type <= 464386766 )
                {
                  LOBYTE(a1) = v12.f_type != 427819522;
                  return (unsigned int)a1;
                }
                if ( v12.f_type != 604313861 )
                {
                  LOBYTE(a1) = v12.f_type != 684539205;
                  return (unsigned int)a1;
                }
              }
            }
          }
        }
      }
      else if ( v12.f_type != 29366 )
      {
        if ( v12.f_type > 29366 )
        {
          if ( v12.f_type != 4278867 )
          {
            if ( v12.f_type > 4278867 )
            {
              if ( v12.f_type > 19920823 )
              {
                if ( v12.f_type != 195894762 )
                {
                  if ( v12.f_type > 195894762 )
                  {
                    if ( v12.f_type != 288389204 )
                    {
                      LOBYTE(a1) = v12.f_type != 325456742;
                      return (unsigned int)a1;
                    }
                  }
                  else if ( v12.f_type != 124082209 )
                  {
                    LOBYTE(a1) = v12.f_type != 151263540;
                    return (unsigned int)a1;
                  }
                }
              }
              else if ( v12.f_type < 19920820 && v12.f_type != 16914836 )
              {
                if ( v12.f_type <= 16914836 )
                {
                  LOBYTE(a1) = v12.f_type != 12648430;
                  return (unsigned int)a1;
                }
                if ( v12.f_type != 16914839 )
                {
                  LOBYTE(a1) = v12.f_type != 19911021;
                  return (unsigned int)a1;
                }
              }
            }
            else if ( v12.f_type != 44543 )
            {
              if ( v12.f_type > 44543 )
              {
                if ( v12.f_type != 61791 )
                {
                  if ( v12.f_type > 61791 )
                  {
                    if ( v12.f_type != 72020 )
                    {
                      LOBYTE(a1) = v12.f_type != 2613483;
                      return (unsigned int)a1;
                    }
                  }
                  else if ( v12.f_type != 61265 )
                  {
                    LOBYTE(a1) = v12.f_type != 61267;
                    return (unsigned int)a1;
                  }
                }
              }
              else
              {
                if ( v12.f_type > 40866 )
                {
                  LOBYTE(a1) = v12.f_type != 44533;
                  return (unsigned int)a1;
                }
                if ( v12.f_type < 40864 )
                {
                  LOBYTE(a1) = v12.f_type != 38496;
                  return (unsigned int)a1;
                }
              }
            }
          }
        }
        else if ( v12.f_type != 13364 )
        {
          if ( v12.f_type > 13364 )
          {
            if ( v12.f_type != 18475 )
            {
              if ( v12.f_type > 18475 )
              {
                if ( v12.f_type != 19802 )
                {
                  if ( v12.f_type > 19802 )
                  {
                    if ( v12.f_type != 24053 )
                    {
                      LOBYTE(a1) = v12.f_type != 29301;
                      return (unsigned int)a1;
                    }
                  }
                  else if ( v12.f_type != 18520 )
                  {
                    LOBYTE(a1) = v12.f_type != 19780;
                    return (unsigned int)a1;
                  }
                }
              }
              else if ( v12.f_type != 16388 )
              {
                if ( v12.f_type <= 16388 )
                {
                  LOBYTE(a1) = v12.f_type != 0x4000;
                  return (unsigned int)a1;
                }
                if ( v12.f_type != 16390 )
                {
                  LOBYTE(a1) = v12.f_type != 16964;
                  return (unsigned int)a1;
                }
              }
            }
          }
          else if ( v12.f_type != 4989 )
          {
            if ( v12.f_type > 4989 )
            {
              if ( v12.f_type != 7377 )
              {
                if ( v12.f_type > 7377 )
                {
                  if ( v12.f_type != 9320 )
                  {
                    LOBYTE(a1) = v12.f_type != 9336;
                    return (unsigned int)a1;
                  }
                }
                else if ( v12.f_type != 4991 )
                {
                  LOBYTE(a1) = v12.f_type != 5007;
                  return (unsigned int)a1;
                }
              }
            }
            else if ( v12.f_type != 391 )
            {
              if ( v12.f_type <= 391 )
              {
                LOBYTE(a1) = v12.f_type != 47;
                return (unsigned int)a1;
              }
              if ( v12.f_type != 1984 )
              {
                LOBYTE(a1) = v12.f_type != 4979;
                return (unsigned int)a1;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  a1 = 1;
  v5 = __errno_location();
  if ( *v5 == 38 )
    return (unsigned int)a1;
  LODWORD(v9) = sub_409510(4LL, a3, v3, v4, v6, v7);
  v10 = v9;
  v11 = dcgettext(0LL, "cannot determine location of %s. reverting to polling", 5);
  error(0, *v5, v11, v10);
  return 1LL;
}

void __fastcall sub_4056E0(_QWORD *a1, char a2)
{
  signed __int64 v2; // rcx@1
  signed int v3; // er13@1
  _QWORD *v4; // rbx@1
  bool v5; // cf@1
  bool v6; // zf@1
  _BYTE *v7; // rax@1
  char *v8; // rdi@1
  unsigned int v9; // er14@1
  _BYTE *v10; // rsi@1
  int v11; // ebp@4
  int v12; // er12@5
  int v13; // eax@5
  char v14; // r15@7
  char v15; // al@7
  int *v16; // rax@10
  char v17; // r15@10
  char *v18; // rbp@10
  int *v19; // r13@10
  int v20; // eax@10
  unsigned __int8 v21; // cf@11
  bool v22; // zf@11
  char *v23; // rax@13
  char *v24; // rax@13
  struct stat *v25; // r8@17
  int v26; // eax@19
  bool v27; // cf@19
  bool v28; // zf@19
  int v29; // edx@20
  char *v30; // rax@21
  char v31; // al@21
  bool v32; // zf@22
  int v33; // eax@23
  char *v34; // rax@25
  __int64 v35; // rdx@25
  __int64 v36; // rcx@25
  __int64 v37; // r8@25
  __int64 v38; // r9@25
  __int64 v39; // rax@25
  const char *v40; // rsi@25
  __int64 v41; // r14@25
  char *v42; // rax@26
  __time_t v43; // rax@29
  char *v44; // rdi@29
  __syscall_slong_t v45; // rax@29
  __dev_t v46; // rax@29
  char *v47; // rax@29
  char *v48; // rax@33
  __int64 v49; // rdx@33
  __int64 v50; // rcx@33
  __int64 v51; // r8@33
  __int64 v52; // r9@33
  __int64 v53; // rax@33
  __int64 v54; // rbp@33
  char *v55; // rax@33
  char *v56; // rax@12
  __int64 v57; // rax@12
  int v58; // eax@35
  bool v59; // cf@35
  bool v60; // zf@35
  int v61; // eax@38
  int v62; // eax@39
  char *v63; // rdi@41
  bool v64; // cf@42
  bool v65; // zf@42
  char *v66; // rax@44
  char *v67; // rax@45
  __int64 v68; // rdx@45
  __int64 v69; // rcx@45
  __int64 v70; // r8@45
  __int64 v71; // r9@45
  __int64 v72; // rax@45
  __int64 v73; // r14@45
  char *v74; // rax@45
  char *v75; // rax@45
  char *v76; // r13@49
  char *v77; // rax@52
  char *v78; // rax@53
  __int64 v79; // rdx@53
  __int64 v80; // rcx@53
  __int64 v81; // r8@53
  __int64 v82; // r9@53
  __int64 v83; // rax@53
  __int64 v84; // rbp@53
  char *v85; // rax@53
  int v86; // eax@56
  char *v87; // rdi@57
  char *v88; // rax@57
  __int64 v89; // rdx@57
  __int64 v90; // rcx@57
  __int64 v91; // r8@57
  __int64 v92; // r9@57
  __int64 v93; // rax@57
  __int64 v94; // rbp@57
  char *v95; // rax@57
  char *v96; // rax@58
  __int64 v97; // rdx@58
  __int64 v98; // rcx@58
  __int64 v99; // r8@58
  __int64 v100; // r9@58
  __int64 v101; // rax@58
  __int64 v102; // rbp@58
  char *v103; // rax@58
  char *v104; // rax@59
  __int64 v105; // rdx@59
  __int64 v106; // rcx@59
  __int64 v107; // r8@59
  __int64 v108; // r9@59
  __int64 v109; // rax@59
  char v110; // [sp+7h] [bp-D1h]@4
  struct stat stat_buf; // [sp+10h] [bp-C8h]@17

  v2 = 2LL;
  LOBYTE(v3) = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = (_BYTE *)*a1;
  v8 = "-";
  v9 = *((_DWORD *)v4 + 15);
  v10 = v7;
  do
  {
    if ( !v2 )
      break;
    v5 = *v10 < (unsigned __int8)*v8;
    v6 = *v10++ == *v8++;
    --v2;
  }
  while ( v6 );
  v110 = *((_BYTE *)v4 + 54);
  v11 = (char)((!v5 && !v6) - v5);
  if ( (!v5 && !v6) == v5 )
  {
    v13 = *((_DWORD *)v4 + 15);
    v12 = 0;
  }
  else
  {
    v12 = sub_406780((char)v7);
    v13 = *((_DWORD *)v4 + 15);
  }
  if ( (*((_DWORD *)v4 + 14) == -1) == (v13 == 0) )
    __assert_fail("valid_file_spec (f)", "src/tail.c", 0x3C7u, "recheck");
  v14 = byte_612386;
  v15 = byte_612378;
  if ( byte_612386 )
  {
    if ( v12 == -1 )
    {
      *((_BYTE *)v4 + 54) = 0;
      v18 = (char *)*v4;
      if ( v15 )
      {
        *((_DWORD *)v4 + 15) = *__errno_location();
        goto LABEL_32;
      }
      if ( !__lxstat(1, (const char *)*v4, &stat_buf) )
      {
        v86 = stat_buf.st_mode & 0xF000;
        v59 = (unsigned int)v86 < 0xA000;
        v60 = v86 == 40960;
        if ( v86 == 40960 )
          goto LABEL_57;
      }
LABEL_10:
      v16 = __errno_location();
      v17 = *((_BYTE *)v4 + 54);
      v18 = (char *)*v4;
      v19 = v16;
      v20 = *v16;
      *((_DWORD *)v4 + 15) = v20;
      if ( v17 )
      {
        v21 = v20 < v9;
        v22 = v20 == v9;
        if ( v20 != v9 )
        {
          v56 = sub_4047E0(v20 < v9, v20 == v9, v18);
          LODWORD(v57) = sub_4095E0(0LL, 3LL, v56);
          error(0, *v19, "%s", v57);
          v18 = (char *)*v4;
        }
        goto LABEL_13;
      }
LABEL_32:
      v21 = 0;
      v22 = v110 == 0;
      if ( v110 )
      {
        v48 = sub_4047E0(0, v110 == 0, v18);
        LODWORD(v53) = sub_409510(4LL, v48, v49, v50, v51, v52);
        v54 = v53;
        v55 = dcgettext(0LL, "%s has become inaccessible", 5);
        error(0, *((_DWORD *)v4 + 15), v55, v54);
        v18 = (char *)*v4;
      }
      goto LABEL_13;
    }
    *((_BYTE *)v4 + 54) = 1;
    v25 = &stat_buf;
    if ( !v15 )
    {
      v61 = __lxstat(1, (const char *)*v4, &stat_buf);
      v25 = &stat_buf;
      if ( !v61 )
      {
        v62 = stat_buf.st_mode & 0xF000;
        v59 = (unsigned int)v62 < 0xA000;
        v60 = v62 == 40960;
        if ( v62 == 40960 )
          goto LABEL_57;
      }
    }
  }
  else
  {
    *((_BYTE *)v4 + 54) = 1;
    if ( !v15 && !__lxstat(1, (const char *)*v4, &stat_buf) )
    {
      v58 = stat_buf.st_mode & 0xF000;
      v59 = (unsigned int)v58 < 0xA000;
      v60 = v58 == 40960;
      if ( v58 == 40960 )
      {
LABEL_57:
        *((_DWORD *)v4 + 15) = -1;
        v87 = (char *)*v4;
        *((_BYTE *)v4 + 52) = 1;
        v88 = sub_4047E0(v59, v60, v87);
        LODWORD(v93) = sub_409510(4LL, v88, v89, v90, v91, v92);
        v94 = v93;
        v95 = dcgettext(0LL, "%s has been replaced with an untailable symbolic link", 5);
        error(0, 0, v95, v94);
        v18 = (char *)*v4;
        goto LABEL_13;
      }
    }
    if ( v12 == -1 )
      goto LABEL_10;
    v25 = &stat_buf;
  }
  if ( __fxstat(1, v12, v25) < 0 )
    goto LABEL_10;
  v26 = (unsigned __int16)(stat_buf.st_mode & 0xF000) - 4096;
  v27 = 0;
  v28 = (v26 & 0xFFFFE000) == 0;
  if ( v26 & 0xFFFFE000 )
  {
    v29 = stat_buf.st_mode & 0xB000;
    v27 = (unsigned int)v29 < 0x8000;
    v28 = v29 == 0x8000;
    if ( v29 != 0x8000 )
    {
      *((_DWORD *)v4 + 15) = -1;
      *((_BYTE *)v4 + 54) = 0;
      if ( v14 && dword_6122A8 == 1 )
      {
        v21 = 0;
        v22 = v110 == 0;
        v18 = (char *)*v4;
        *((_BYTE *)v4 + 52) = 0;
        if ( v110 )
        {
          v76 = "";
        }
        else
        {
          v21 = __CFADD__(v9, 1);
          v22 = v9 == -1;
          v76 = "";
          if ( v9 == -1 )
            goto LABEL_13;
        }
      }
      else
      {
        *((_BYTE *)v4 + 52) = 1;
        if ( !v110 )
        {
          v21 = v9 < 0xFFFFFFFF;
          v22 = v9 == -1;
          if ( v9 == -1 )
            goto LABEL_54;
        }
        v77 = dcgettext(0LL, "; giving up on this name", 5);
        v18 = (char *)*v4;
        v76 = v77;
      }
      v78 = sub_4047E0(v21, v22, v18);
      LODWORD(v83) = sub_409510(4LL, v78, v79, v80, v81, v82);
      v84 = v83;
      v85 = dcgettext(0LL, "%s has been replaced with an untailable file%s", 5);
      error(0, 0, v85, v84, v76);
LABEL_54:
      v18 = (char *)*v4;
LABEL_13:
      v23 = sub_4047E0(v21, v22, v18);
      sub_404820(v12, (__int64)v23);
      v24 = sub_4047E0(v5, v6, (char *)*v4);
      sub_404820(*((_DWORD *)v4 + 14), (__int64)v24);
      *((_DWORD *)v4 + 14) = -1;
      return;
    }
  }
  v30 = sub_4047E0(v27, v28, (char *)*v4);
  v31 = sub_405090((signed int)v4, v12, (__int64)v30);
  *((_BYTE *)v4 + 53) = v31;
  if ( v31 )
  {
    v32 = byte_612378 == 0;
    if ( !byte_612378 )
    {
      *((_DWORD *)v4 + 15) = -1;
      v96 = sub_4047E0(0, v32, (char *)*v4);
      LODWORD(v101) = sub_409510(4LL, v96, v97, v98, v99, v100);
      v102 = v101;
      v103 = dcgettext(0LL, "%s has been replaced with an untailable remote file", 5);
      error(0, 0, v103, v102);
      v18 = (char *)*v4;
      *((_WORD *)v4 + 26) = 257;
      goto LABEL_13;
    }
  }
  *((_DWORD *)v4 + 15) = 0;
  v33 = *((_DWORD *)v4 + 14);
  if ( v9 & 0xFFFFFFFD )
  {
    if ( v33 != -1 )
      __assert_fail("f->fd == -1", "src/tail.c", 0x414u, "recheck");
    v34 = sub_4047E0(0, 1, (char *)*v4);
    LODWORD(v39) = sub_409510(4LL, v34, v35, v36, v37, v38);
    v40 = "%s has become accessible";
    v41 = v39;
    goto LABEL_26;
  }
  v63 = (char *)*v4;
  if ( v33 == -1 )
  {
    v104 = sub_4047E0(0, 1, v63);
    LODWORD(v109) = sub_409510(4LL, v104, v105, v106, v107, v108);
    v40 = "%s has appeared;  following new file";
    v41 = v109;
LABEL_26:
    v42 = dcgettext(0LL, v40, 5);
    error(0, 0, v42, v41);
    goto LABEL_27;
  }
  v64 = v4[5] < stat_buf.st_ino;
  v65 = v4[5] == stat_buf.st_ino;
  if ( v4[5] == stat_buf.st_ino )
  {
    v64 = v4[4] < stat_buf.st_dev;
    v65 = v4[4] == stat_buf.st_dev;
    if ( v4[4] == stat_buf.st_dev )
    {
      v66 = sub_4047E0(v4[4] < stat_buf.st_dev, v4[4] == stat_buf.st_dev, v63);
      sub_404820(v12, (__int64)v66);
      return;
    }
  }
  v67 = sub_4047E0(v64, v65, v63);
  LODWORD(v72) = sub_409510(4LL, v67, v68, v69, v70, v71);
  v73 = v72;
  v74 = dcgettext(0LL, "%s has been replaced;  following new file", 5);
  error(0, 0, v74, v73);
  v75 = sub_4047E0(v5, v6, (char *)*v4);
  sub_404820(*((_DWORD *)v4 + 14), (__int64)v75);
LABEL_27:
  v3 = (unsigned __int8)v3;
  *((_DWORD *)v4 + 14) = v12;
  if ( !v11 )
    v3 = -1;
  v43 = stat_buf.st_mtim.tv_sec;
  v44 = (char *)*v4;
  *((_BYTE *)v4 + 52) = 0;
  v4[1] = 0LL;
  v4[2] = v43;
  v45 = stat_buf.st_mtim.tv_nsec;
  *((_DWORD *)v4 + 16) = v3;
  v4[3] = v45;
  v46 = stat_buf.st_dev;
  v4[11] = 0LL;
  v4[4] = v46;
  v4[5] = stat_buf.st_ino;
  *((_DWORD *)v4 + 12) = stat_buf.st_mode;
  v47 = sub_4047E0(0, v11 == 0, v44);
  sub_404C20(v12, 0LL, 0, (__int64)v47);
}

noreturn void __fastcall  sub_405D10(int status)
{
  int v1; // ebx@1
  __int64 v2; // rbp@1
  char *v3; // rax@2
  char *v4; // rax@4
  __int64 v5; // rcx@4
  char *v6; // rax@4
  __int64 v7; // rcx@4
  FILE *v8; // rbp@4
  char *v9; // rax@4
  FILE *v10; // rbp@4
  char *v11; // rax@4
  FILE *v12; // rbp@4
  char *v13; // rax@4
  FILE *v14; // rbp@4
  char *v15; // rax@4
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
  __int64 *v31; // rax@4
  _BYTE *v32; // rdi@5
  bool v33; // cf@5
  bool v34; // zf@5
  const char *v35; // rsi@6
  signed __int64 v36; // rcx@6
  char *v37; // rbp@10
  char *v38; // rax@11
  char *v39; // rax@11
  char *v40; // r12@13
  char *v41; // rax@13
  char *v42; // rax@15
  char *v43; // rax@16
  char *v44; // rax@16
  char *v45; // rax@18
  char *v46; // rax@20
  __int64 v47; // rcx@20
  const char *v48; // [sp+0h] [bp-88h]@4
  const char *v49; // [sp+8h] [bp-80h]@4
  const char *v50; // [sp+10h] [bp-78h]@4
  const char *v51; // [sp+18h] [bp-70h]@4
  const char *v52; // [sp+20h] [bp-68h]@4
  const char *v53; // [sp+28h] [bp-60h]@4
  const char *v54; // [sp+30h] [bp-58h]@4
  const char *v55; // [sp+38h] [bp-50h]@4
  const char *v56; // [sp+40h] [bp-48h]@4
  const char *v57; // [sp+48h] [bp-40h]@4
  const char *v58; // [sp+50h] [bp-38h]@4
  const char *v59; // [sp+58h] [bp-30h]@4
  __int64 v60; // [sp+60h] [bp-28h]@4
  __int64 v61; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_6123A0;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v4, v2, v5);
  v6 = dcgettext(
         0LL,
         "Print the last %d lines of each FILE to standard output.\n"
         "With more than one FILE, precede each with a header giving the file name.\n",
         5);
  __printf_chk(1LL, v6, 10LL, v7);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = stdout;
  v11 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v11, v10);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n"
          "                             output starting with byte NUM of each file\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "  -f, --follow[={name|descriptor}]\n"
          "                           output appended data as the file grows;\n"
          "                             an absent option argument means 'descriptor'\n"
          "  -F                       same as --follow=name --retry\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = dcgettext(
          0LL,
          "  -n, --lines=[+]NUM       output the last NUM lines, instead of the last %d;\n"
          "                             or use -n +NUM to output starting with line NUM\n"
          "      --max-unchanged-stats=N\n"
          "                           with --follow=name, reopen a FILE which has not\n"
          "                             changed size after N (default %d) iterations\n"
          "                             to see if it has been unlinked or renamed\n"
          "                             (this is the usual case of rotated log files);\n"
          "                             with inotify, this option is rarely useful\n",
          5);
  __printf_chk(1LL, v16, 10LL, 5LL);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "      --pid=PID            with -f, terminate after process ID, PID dies\n"
          "  -q, --quiet, --silent    never output headers giving file names\n"
          "      --retry              keep trying to open a file if it is inaccessible\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n"
          "                             (default 1.0) between iterations;\n"
          "                             with inotify and --pid=P, check process P at\n"
          "                             least once every N seconds\n"
          "  -v, --verbose            always output headers giving file names\n",
          5);
  fputs_unlocked(v20, v19);
  v21 = stdout;
  v22 = dcgettext(0LL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v22, v21);
  v23 = stdout;
  v24 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v24, v23);
  v25 = stdout;
  v26 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v26, v25);
  v27 = stdout;
  v28 = dcgettext(
          0LL,
          "\n"
          "NUM may have a multiplier suffix:\n"
          "b 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\n"
          "GB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n"
          "\n",
          5);
  fputs_unlocked(v28, v27);
  v29 = stdout;
  v30 = dcgettext(
          0LL,
          "With --follow (-f), tail defaults to following the file descriptor, which\n"
          "means that even if a tail'ed file is renamed, tail will continue to track\n"
          "its end.  This default behavior is not desirable when you really want to\n"
          "track the actual name of the file, not the file descriptor (e.g., log\n"
          "rotation).  Use --follow=name in that case.  That causes tail to track the\n"
          "named file in a way that accommodates renaming, removal and creation.\n",
          5);
  fputs_unlocked(v30, v29);
  v48 = "[";
  v31 = (__int64 *)&v48;
  v49 = "test invocation";
  v50 = "coreutils";
  v51 = "Multi-call invocation";
  v52 = "sha224sum";
  v53 = "sha2 utilities";
  v54 = "sha256sum";
  v55 = "sha2 utilities";
  v56 = "sha384sum";
  v57 = "sha2 utilities";
  v58 = "sha512sum";
  v59 = "sha2 utilities";
  v60 = 0LL;
  v61 = 0LL;
  do
  {
    v31 += 2;
    v32 = (_BYTE *)*v31;
    v33 = 0;
    v34 = *v31 == 0;
    if ( !*v31 )
      break;
    v35 = "tail";
    v36 = 5LL;
    do
    {
      if ( !v36 )
        break;
      v33 = (const unsigned __int8)*v35 < *v32;
      v34 = *v35++ == *v32++;
      --v36;
    }
    while ( v34 );
  }
  while ( (!v33 && !v34) != v33 );
  v37 = (char *)v31[1];
  if ( v37 )
  {
    v38 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v38, &unk_40C375, "https://www.gnu.org/software/coreutils/");
    v39 = setlocale(5, 0LL);
    if ( !v39 || !strncmp(v39, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v43 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v43, &unk_40C375, "https://www.gnu.org/software/coreutils/");
    v44 = setlocale(5, 0LL);
    if ( !v44 || !strncmp(v44, "en_", 3uLL) )
    {
      v37 = "tail";
      v45 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v40 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v45, "https://www.gnu.org/software/coreutils/", "tail");
LABEL_15:
      v42 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v42, v37, v40);
LABEL_3:
      exit(v1);
    }
    v37 = "tail";
  }
  v46 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v46, "tail", v47);
LABEL_13:
  v40 = "Multi-call invocation" + 10;
  v41 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v41, "https://www.gnu.org/software/coreutils/", "tail");
  if ( v37 != "tail" )
    v40 = "";
  goto LABEL_15;
}

noreturn void  sub_406170()
{
  sub_405D10(1);
}

signed __int64 __fastcall sub_406180(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_4062A0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx@2
  __int64 v4; // rax@3
  __int64 v5; // rbp@3
  __int64 v6; // rax@3

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  LODWORD(v4) = sub_409740(1LL, a1);
  v5 = v4;
  LODWORD(v6) = sub_409430(0LL, 8LL, a2);
  error(0, 0, v3, v6, v5);
}

int __fastcall sub_406320(__int64 *a1, FILE *a2, size_t a3)
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
      LODWORD(v11) = sub_409760(i, v8);
      v8 = (FILE *)1;
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    v5 = (FILE *)((char *)v5 + v4);
    LODWORD(v12) = sub_409760(i, v8);
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

__int64 __fastcall sub_406440(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (__fastcall *a6)(__int64 *, FILE *))
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
  result = sub_406180(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_4062A0(a1, (__int64)a2, result);
    sub_406320(v9, v8, v6);
    v7(v9, v8);
    result = -1LL;
  }
  return result;
}

void __fastcall sub_406500(const char *a1, char **a2)
{
  if ( !qword_612388 )
    qword_612388 = (__int64)newlocale(8127, "C", 0LL);
  if ( qword_612388 )
  {
    strtod_l(a1, a2, (__locale_t)qword_612388);
  }
  else if ( a2 )
  {
    *a2 = (char *)a1;
  }
}

__int64 sub_406590()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

  if ( (unsigned int)sub_40B8F0(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_612390 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_612398 )
      {
        LODWORD(v5) = sub_4095B0(qword_612398, "write error");
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
  result = sub_40B8F0(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

signed __int64 __fastcall sub_406630(_BYTE *a1)
{
  unsigned __int64 v1; // rbp@1
  __int64 v2; // rax@1
  signed __int64 v3; // rdx@2
  signed __int64 result; // rax@7

  v1 = *a1 == 47;
  LODWORD(v2) = sub_4066F0(a1);
  if ( v2 - (signed __int64)a1 > v1 && (v3 = v2 - (_QWORD)a1 - 1, *(_BYTE *)(v2 - 1) == 47) )
  {
    while ( v1 != v3 && a1[v3 - 1] == 47 )
      --v3;
    result = v3;
  }
  else
  {
    result = v2 - (_QWORD)a1;
  }
  return result;
}

_BYTE *__fastcall sub_4066F0(_BYTE *a1)
{
  char v1; // dl@1
  _BYTE *result; // rax@1
  _BYTE *v3; // rcx@4
  char v4; // si@4

  v1 = *a1;
  for ( result = a1; *result == 47; v1 = *result )
    ++result;
  if ( v1 )
  {
    v3 = result;
    v4 = 0;
    do
    {
      while ( v1 == 47 )
      {
        v1 = *++v3;
        v4 = 1;
        if ( !*v3 )
          return result;
      }
      if ( v4 )
      {
        result = v3;
        v4 = 0;
      }
      v1 = *++v3;
    }
    while ( *v3 );
  }
  return result;
}

__int64 __fastcall sub_406780(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_4097E0(v4);
}

unsigned __int64 __fastcall sub_4067D0(unsigned __int64 a1)
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

signed __int64 __fastcall sub_406890(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

signed __int64 __fastcall sub_406890(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax@1

  LODWORD(v2) = (*(int (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_4068C0(__int64 a1, __int64 a2, __int64 **a3, char a4)
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
  v7 = (__int64 *)sub_406890(a1, a2);
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

signed __int64 __fastcall sub_4069E0(void **a1)
{
  void *v1; // rax@1
  float v2; // xmm0_4@2
  float v3; // xmm1_4@5
  float v4; // xmm2_4@5
  signed __int64 result; // rax@7

  v1 = *a1;
  if ( *a1 == &unk_40D880 )
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
      *a1 = &unk_40D880;
      result = 0LL;
    }
  }
  return result;
}

signed __int64 __fastcall sub_406A60(__int64 a1, __int64 a2, char a3)
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
              v8 = sub_406890(a1, *(_QWORD *)v6);
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
    v10 = (_QWORD *)sub_406890(a1, v5);
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

__int64 __fastcall sub_406BD0(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}

__int64 __fastcall sub_406DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp@1
  __int64 *v3; // rax@1
  __int64 v4; // rsi@1
  __int64 *v5; // rbx@2
  __int64 result; // rax@7

  v2 = a2;
  v3 = (__int64 *)sub_406890(a1, a2);
  v4 = *v3;
  if ( *v3 )
  {
    v5 = v3;
    while ( v4 != v2 )
    {
      if ( (unsigned __int8)(*(int (__fastcall **)(__int64))(a1 + 56))(v2) )
      {
        v2 = *v5;
        break;
      }
      v5 = (__int64 *)v5[1];
      if ( !v5 )
        goto LABEL_7;
      v4 = *v5;
    }
    result = v2;
  }
  else
  {
LABEL_7:
    result = 0LL;
  }
  return result;
}

char **__fastcall sub_407060(unsigned __int64 a1, __int64 a2, __int64 (__fastcall *a3)(), __int64 (__fastcall *a4)(), char *a5)
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
    v7 = sub_406870;
  if ( !a4 )
    v6 = sub_406880;
  v9 = malloc(0x50uLL);
  v10 = (char **)v9;
  if ( v9 )
  {
    v11 = (void **)((char *)v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_4069E0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_4067D0(v8);
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
      *((_QWORD *)v9 + 5) = &unk_40D880;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_4069E0(v11) )
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

void __fastcall sub_4072A0(__int64 a1)
{
  __int64 v1; // r12@1
  void *v2; // rbp@1
  unsigned __int64 v3; // rax@1
  __int64 *i; // rbx@7
  __int64 v5; // rdi@8
  __int64 v6; // rdi@13
  __int64 v7; // rbx@14
  __int64 v8; // rdi@16
  __int64 v9; // rbx@17

  v1 = a1;
  v2 = *(void **)a1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 64) && *(_QWORD *)(a1 + 32) )
  {
    if ( (unsigned __int64)v2 >= v3 )
      goto LABEL_16;
    do
    {
      while ( !*(_QWORD *)v2 )
      {
        v2 = (char *)v2 + 16;
        if ( v3 <= (unsigned __int64)v2 )
          goto LABEL_11;
      }
      for ( i = (__int64 *)v2; ; v5 = *i )
      {
        (*(void (**)(void))(v1 + 64))();
        i = (__int64 *)i[1];
        if ( !i )
          break;
      }
      v3 = *(_QWORD *)(v1 + 8);
      v2 = (char *)v2 + 16;
    }
    while ( v3 > (unsigned __int64)v2 );
LABEL_11:
    v2 = *(void **)v1;
  }
  if ( (unsigned __int64)v2 < v3 )
  {
    do
    {
      v6 = *((_QWORD *)v2 + 1);
      if ( v6 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 8);
          free((void *)v6);
          v6 = v7;
        }
        while ( v7 );
      }
      v2 = (char *)v2 + 16;
    }
    while ( *(_QWORD *)(v1 + 8) > (unsigned __int64)v2 );
  }
LABEL_16:
  v8 = *(_QWORD *)(v1 + 72);
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 8);
      free((void *)v8);
      v8 = v9;
    }
    while ( v9 );
  }
  free(*(void **)v1);
  free((void *)v1);
}

signed __int64 __fastcall sub_407380(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_4067D0(a2);
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
  v14 = sub_406A60((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_406A60(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_406A60(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_407380(__int64 a1, unsigned __int64 a2)
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
  v5 = sub_4067D0(a2);
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
  v14 = sub_406A60((__int64)&v16, a1, 0);
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
  if ( !(unsigned __int8)sub_406A60(a1, (__int64)&v16, 1) || !(unsigned __int8)sub_406A60(a1, (__int64)&v16, 0) )
    abort();
  free(v16);
  return v14;
}

signed __int64 __fastcall sub_407580(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_4068C0(a1, a2, &v26, 0);
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
        sub_4069E0((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_407380(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_4068C0(a1, v4, &v26, 0) )
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

signed __int64 __fastcall sub_407580(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_4068C0(a1, a2, &v26, 0);
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
        sub_4069E0((void **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_407380(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_4068C0(a1, v4, &v26, 0) )
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

__int64 __fastcall sub_407800(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx@1
  int v3; // eax@1
  __int64 result; // rax@4
  __int64 v5; // [sp+8h] [bp-10h]@1

  v2 = a2;
  v3 = sub_407580(a1, a2, &v5);
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

__int64 __fastcall sub_407840(__int64 a1, __int64 a2)
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
  v3 = sub_4068C0(a1, a2, &v24, 1);
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
    sub_4069E0((void **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_407380(a1, v17) )
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

signed __int64 __fastcall sub_407A20(signed __int64 a1, __int64 a2)
{
  _BYTE *v2; // rcx@1
  unsigned __int64 v3; // rdx@2
  signed __int64 result; // rax@3
  signed __int64 v5; // rdx@5
  int v6; // eax@5

  v2 = (_BYTE *)(a2 + 20);
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v5 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      v6 = 10 * v5 + 48 - a1;
      a1 = ((signed __int64)((unsigned __int128)(7378697629483820647LL * a1) >> 64) >> 2) - (a1 >> 63);
      *(v2 - 1) = v6;
      if ( !v5 )
        break;
      --v2;
    }
    *(v2 - 2) = 45;
    result = (signed __int64)(v2 - 2);
  }
  else
  {
    do
    {
      --v2;
      v3 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
      *v2 = a1 - 10 * v3 + 48;
      a1 = (unsigned __int64)(0x0CCCCCCCCCCCCCCCDLL * (unsigned __int128)(unsigned __int64)a1 >> 64) >> 3;
    }
    while ( v3 );
    result = (signed __int64)v2;
  }
  return result;
}

__int64 sub_407AC0()
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

char *__fastcall sub_407B40(const char *a1)
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
  qword_6123A0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_407BE0(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_40BA70(0LL);
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
      return (char *)v2;
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
    return (char *)v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    v6 = "'";
  return v6;
}

unsigned __int64 __fastcall sub_407CE0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
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
  char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "'";
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
        a8 = sub_407BE0("`", v11);
        v58 = sub_407BE0("'", v11);
        v14 = v67;
        a9 = v58;
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
      s2 = "'";
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
        s2 = "'";
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
        s2 = "'";
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
            return sub_407CE0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_407CE0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
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
                return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
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
            return sub_407CE0((__int64)v9, v10, s);
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
            return sub_407CE0((__int64)v9, v10, s);
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
            return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
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
          return sub_407CE0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_407CE0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40B6B0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_407CE0((__int64)v9, v10, s);
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
      return sub_407CE0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_407CE0(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
  char *v58; // rax@218
  unsigned __int64 v59; // ST30_8@220
  size_t v60; // rax@220
  signed __int64 v61; // rsi@246
  char *v62; // rsi@258
  char *v63; // rcx@258
  char i; // al@265
  char v65; // dl@276
  char *v66; // rax@277
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
  char *s2; // [sp+50h] [bp-78h]@2
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
        s2 = "'";
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
        a8 = sub_407BE0("`", v11);
        v58 = sub_407BE0("'", v11);
        v14 = v67;
        a9 = v58;
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
      s2 = "'";
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
        s2 = "'";
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
        s2 = "'";
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
            return sub_407CE0((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_407CE0((__int64)v9, v79, s);
              v46 = v79 != 0 && v10 == 0;
              if ( v46 )
              {
                v10 = v79;
LABEL_138:
                *v9 = 39;
                v11 = 2;
                v16 = 1LL;
                s2 = "'";
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
                return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
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
            return sub_407CE0((__int64)v9, v10, s);
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
            return sub_407CE0((__int64)v9, v10, s);
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
            return sub_407CE0((__int64)v9, v10, s);
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
              return sub_407CE0((__int64)v9, v10, s);
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
          return sub_407CE0((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_407CE0((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_40B6B0((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_407CE0((__int64)v9, v10, s);
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
      return sub_407CE0((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_408F10(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  __int64 v15; // rdx@7
  __int64 v16; // rcx@7
  __int64 v17; // r8@7
  __int64 v18; // r9@7
  unsigned __int64 v19; // rsi@8
  __int64 v20; // ST30_8@9
  _BYTE *v21; // rax@10
  int v22; // er8@10
  __int128 *v24; // rax@12
  char *v25; // [sp+8h] [bp-50h]@1
  int v26; // [sp+18h] [bp-40h]@1
  int v27; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v25 = a2;
  v6 = __errno_location();
  v7 = off_612318;
  v8 = v6;
  v26 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40A020();
    v9 = 16LL * (a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      LODWORD(v24) = sub_409E30(0LL, v9);
      v7 = v24;
      off_612318 = v24;
      *v24 = (__int128)_mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      LODWORD(v10) = sub_409E30(off_612318, v9);
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16LL * (a1 + 1 - dword_612330));
    dword_612330 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v27 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_407CE0(v12, *(_QWORD *)v11, v25, v4, *(_DWORD *)v5, v27, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v19 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6123C0 )
    {
      v20 = v14 + 1;
      free(v12);
      v19 = v20;
    }
    LODWORD(v21) = sub_409DD0(v19, v19, v15, v16, v17, v18);
    v22 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v21;
    v12 = v21;
    sub_407CE0(v21, v19, v25, v4, v22, v27, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v26;
  return v12;
}

_BYTE *__fastcall sub_408F10(int a1, char *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r14@1
  __int64 v5; // rbp@1
  int *v6; // rax@1
  __int128 *v7; // rbx@1
  int *v8; // r13@1
  signed __int64 v9; // rsi@4
  __int128 *v10; // rax@5
  signed __int64 v11; // rbx@7
  _BYTE *v12; // r12@7
  unsigned __int64 v13; // ST30_8@7
  unsigned __int64 v14; // rax@7
  __int64 v15; // rdx@7
  __int64 v16; // rcx@7
  __int64 v17; // r8@7
  __int64 v18; // r9@7
  unsigned __int64 v19; // rsi@8
  __int64 v20; // ST30_8@9
  _BYTE *v21; // rax@10
  int v22; // er8@10
  __int128 *v24; // rax@12
  char *v25; // [sp+8h] [bp-50h]@1
  int v26; // [sp+18h] [bp-40h]@1
  int v27; // [sp+1Ch] [bp-3Ch]@7

  v4 = a3;
  v5 = a4;
  v25 = a2;
  v6 = __errno_location();
  v7 = off_612318;
  v8 = v6;
  v26 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40A020();
    v9 = 16LL * (a1 + 1);
    if ( off_612318 == &xmmword_612320 )
    {
      LODWORD(v24) = sub_409E30(0LL, v9);
      v7 = v24;
      off_612318 = v24;
      *v24 = (__int128)_mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      LODWORD(v10) = sub_409E30(off_612318, v9);
      off_612318 = v10;
      v7 = v10;
    }
    memset(&v7[dword_612330], 0, 16LL * (a1 + 1 - dword_612330));
    dword_612330 = a1 + 1;
  }
  v11 = (signed __int64)&v7[a1];
  v12 = *(_BYTE **)(v11 + 8);
  v27 = *(_DWORD *)(v5 + 4) | 1;
  v13 = *(_QWORD *)v11;
  v14 = sub_407CE0(v12, *(_QWORD *)v11, v25, v4, *(_DWORD *)v5, v27, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v13 <= v14 )
  {
    v19 = v14 + 1;
    *(_QWORD *)v11 = v14 + 1;
    if ( (_UNKNOWN *)v12 != &unk_6123C0 )
    {
      v20 = v14 + 1;
      free(v12);
      v19 = v20;
    }
    LODWORD(v21) = sub_409DD0(v19, v19, v15, v16, v17, v18);
    v22 = *(_DWORD *)v5;
    *(_QWORD *)(v11 + 8) = v21;
    v12 = v21;
    sub_407CE0(v21, v19, v25, v4, v22, v27, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v8 = v26;
  return v12;
}

_BYTE *__fastcall sub_409430(int a1, int a2, char *a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409430(int a1, int a2, char *a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409510(int a1, char *a2)
{
  return sub_409430(0, a1, a2);
}

_BYTE *__fastcall sub_409530(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_6124F0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_6124C0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_6124D0);
  v6 = _mm_load_si128((const __m128i *)&xmmword_6124E0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_408F10(0, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_4095B0(char *a1)
{
  return sub_409530(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4095E0(int a1, int a2, char *a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_4095E0(int a1, int a2, char *a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_409740(int a1, char *a2)
{
  return sub_408F10(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6122E0);
}

_BYTE *__fastcall sub_409760(char *a1)
{
  return sub_408F10(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6122E0);
}

__int64 __fastcall sub_409780(int fd, void *buf, size_t nbytes)
{
  unsigned __int64 v3; // rbx@1
  ssize_t v4; // rbp@2
  int v5; // eax@3

  v3 = nbytes;
  while ( 1 )
  {
    v4 = read(fd, buf, v3);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( v3 <= 0x7FFFE000 || v5 != 22 )
        return v4;
      v3 = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_4097E0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_40BFE0();
    v3 = __errno_location();
    v4 = *v3;
    v5 = v3;
    close(fd);
    result = (unsigned int)v2;
    *v5 = v4;
  }
  else
  {
    result = (unsigned int)fd;
  }
  return result;
}

int __fastcall sub_409830(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_409830(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_409C90(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_409830(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_409830(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_409DD0(size_t a1)
{
  void *result; // rax@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_40A020();
  }
  return result;
}

void *__fastcall sub_409E30(void *a1, size_t a2)
{
  void *result; // rax@3

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
        sub_40A020();
    }
  }
  return result;
}

void *__fastcall sub_409FD0(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_409DD0(a2);
  return memcpy(v2, a1, a2);
}

noreturn void  sub_40A020()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_40A060(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v7; // r15@1
  unsigned __int64 v8; // r14@1
  __int64 v9; // r13@1
  int v10; // ebx@1
  int v11; // eax@1
  unsigned __int64 v12; // rbp@2
  int *v13; // r14@4
  _BYTE *v14; // rax@5
  int v15; // esi@5
  int v17; // ebp@11
  int *v18; // rax@11
  unsigned __int64 v19; // [sp+8h] [bp-40h]@0

  v7 = a4;
  v8 = a3;
  v9 = a6;
  v10 = a7;
  v11 = sub_40A260(a1);
  if ( v11 )
  {
    v17 = v11;
    v18 = __errno_location();
    v13 = v18;
    if ( v17 == 1 )
    {
      *v18 = 75;
    }
    else if ( v17 == 3 )
    {
      *v18 = 0;
    }
  }
  else
  {
    v12 = v19;
    if ( v19 >= v8 && v19 <= v7 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_409760(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v19;
}

unsigned __int64 __fastcall sub_40A130(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_40A060(a1, 10LL, a2, a3, a4, a5, a6);
}

int sub_40A160()
{
  __int64 v0; // rax@1
  __int64 v1; // rdx@1
  int *v2; // rbx@1
  int result; // eax@3
  __int64 v4; // [sp+0h] [bp-18h]@1
  __int64 v5; // [sp+8h] [bp-10h]@1

  LODWORD(v0) = sub_40B950();
  v4 = v0;
  v5 = v1;
  v2 = __errno_location();
  while ( 1 )
  {
    *v2 = 0;
    result = sub_40B840(&v4, 0LL);
    if ( !result )
      break;
    if ( *v2 & 0xFFFFFFFB )
      return -1;
  }
  return result;
}

bool __fastcall sub_40A1C0(_BYTE *a1, _QWORD *a2, double *a3, void (__fastcall *a4)(_QWORD, _QWORD), double a5)
{
  void (__fastcall *v5)(_QWORD, _QWORD); // r14@1
  double *v6; // r13@1
  int *v7; // r12@1
  bool result; // al@3
  _BYTE *v9; // [sp+8h] [bp-30h]@1

  v5 = a4;
  v6 = a3;
  v7 = __errno_location();
  *v7 = 0;
  v5(a1, &v9);
  if ( v9 == a1 )
  {
    result = 0;
  }
  else
  {
    if ( a2 )
    {
      result = 1;
      if ( a5 == 0.0 )
      {
LABEL_6:
        *a2 = v9;
        goto LABEL_7;
      }
    }
    else
    {
      result = 0;
      if ( *v9 )
        goto LABEL_7;
      if ( a5 == 0.0 )
      {
        result = 1;
        goto LABEL_7;
      }
    }
    result = *v7 != 34;
  }
  if ( a2 )
    goto LABEL_6;
LABEL_7:
  *v6 = a5;
  return result;
}

__int64 __fastcall sub_40A260(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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

__int64 __fastcall sub_40A6A0(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_6124F8 < 0 )
    {
      v4 = sub_40A6A0(a1);
      if ( v4 >= 0 && dword_6124F8 == -1 )
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
        dword_6124F8 = 1;
      }
      else
      {
        v4 = sub_40A6A0(a1);
        if ( v4 >= 0 )
        {
          dword_6124F8 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

__int64 __fastcall sub_40A7E0(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_40A8C0(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_40AEE0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_40A7E0(a2, a7);
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
        sub_40A7E0((__int64)v11, a7);
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
            v40 = sub_40A8C0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_40A8C0(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_40A8C0(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_40B4B0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_612500 = dword_61233C;
  dword_612504 = dword_612338;
  result = sub_40AEE0(a1, a2, a3, a4, a5, a6, (__int64)&dword_612500, a7);
  dword_61233C = dword_612500;
  qword_612540 = qword_612510;
  dword_612334 = dword_612508;
  return result;
}

__int64 __fastcall sub_40B530(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_40B4B0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B5B0(int fildes)
{
  int v1; // ebx@1
  int *v3; // rbp@6
  int v4; // er12@6
  int v5; // edx@8
  int pipedes[2]; // [sp+8h] [bp-140h]@5
  struct stat stat_buf; // [sp+10h] [bp-138h]@1
  struct stat v8; // [sp+A0h] [bp-A8h]@6

  v1 = __fxstat(1, fildes, &stat_buf);
  if ( !v1 )
  {
    v1 = (stat_buf.st_mode & 0xF000) == 49152 || (stat_buf.st_mode & 0xF000) == 4096;
    if ( !(_BYTE)v1 )
LABEL_3:
      return (unsigned __int8)v1;
    v1 = pipe(pipedes);
    if ( !v1 )
    {
      v1 = __fxstat(1, pipedes[0], &v8);
      v3 = __errno_location();
      v4 = *v3;
      close(pipedes[0]);
      close(pipedes[1]);
      if ( v1 )
      {
        *v3 = v4;
        return (unsigned int)v1;
      }
      if ( stat_buf.st_nlink <= v8.st_nlink )
      {
        v5 = stat_buf.st_mode & 0xF000;
        v1 = v5 == 4096;
        if ( (v8.st_mode & 0xF000) != 4096 )
        {
          LOBYTE(v1) = v5 == 49152;
          goto LABEL_3;
        }
      }
    }
  }
  return (unsigned int)v1;
}

size_t __fastcall sub_40B6B0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx@2
  wchar_t *v5; // r12@3
  char *v6; // rbp@3
  char v8; // [sp+Ch] [bp-1Ch]@7

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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40BA10(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_40B730(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

int __fastcall sub_40B840(__int64 a1, struct timespec *a2)
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

__int64 __fastcall sub_40B8F0(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  __int64 result; // rax@1

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_40BFF0(stream);
  if ( v2 )
  {
    if ( !(_DWORD)result )
    {
      *__errno_location() = 0;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( !(_DWORD)result )
      return result;
    if ( !v1 )
      return (unsigned int)-(*__errno_location() != 9);
  }
  return 0xFFFFFFFFLL;
}

signed __int64 __fastcall sub_40B950(double a1)
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

bool __fastcall sub_40BA10(int a1)
{
  char *v1; // rdx@1
  bool result; // al@1
  bool v3; // cf@1
  bool v4; // zf@1
  signed __int64 v5; // rcx@2
  const char *v6; // rdi@2
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
      v3 = (unsigned __int8)*v7 < *v6;
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

const char *sub_40BA70()
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
          v1 = "%s: invalid option -- '%c'\n" + 27;
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
                v1 = "%s: invalid option -- '%c'\n" + 27;
                v2 = v59;
                free(v60);
                sub_40BFF0(v61);
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
            sub_40BFF0(v40);
            if ( !v62 )
              goto LABEL_25;
            v1[v62] = 0;
            goto LABEL_26;
          }
          close(v18);
        }
LABEL_25:
        v1 = "%s: invalid option -- '%c'\n" + 27;
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

__int64 __fastcall sub_40BFE0(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return sub_40A6A0(a1, 0, 3LL, a4);
}

int __fastcall sub_40BFF0(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_40C070(stream) )
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

int __fastcall sub_40C070(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_40C0B0(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_40C0B0(FILE *a1, __off_t a2, int a3)
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40C180(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_612288 )
    v1 = unk_612288;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40C198(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_611E30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
