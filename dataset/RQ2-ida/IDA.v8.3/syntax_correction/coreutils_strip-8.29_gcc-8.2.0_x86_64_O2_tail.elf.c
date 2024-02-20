#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(int a1, char **a2, char **a3)
{
  __int64 v3; // r13
  char *v5; // rdi
  int v6; // eax
  char *v7; // rdx
  char *v8; // rdi
  __int64 v9; // rax
  char **v10; // r12
  __int64 v11; // rbx
  int v12; // ebp
  int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // r14d
  char *v16; // rax
  char *v17; // r8
  char *v18; // rax
  char *v19; // rax
  char v20; // r12
  int v21; // eax
  char *v22; // rdx
  int v23; // ecx
  char *v24; // rax
  unsigned int v25; // ecx
  char v26; // r14
  __pid_t v27; // edi
  __int64 v28; // rcx
  void **v29; // rbp
  bool v30; // cf
  bool v31; // zf
  __int64 v32; // r8
  __int64 v33; // r9
  void **v34; // r12
  void **v35; // rax
  const char *v36; // rsi
  __int64 v37; // rcx
  const char *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  char *v42; // rdx
  __int64 v43; // r15
  bool v44; // cf
  bool v45; // zf
  char *v46; // r14
  __int64 v47; // rcx
  const char *v48; // rdi
  const char *v49; // rax
  const char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  char *v62; // r14
  size_t v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rbp
  unsigned int v66; // r12d
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rdi
  char *v74; // r12
  const char *v75; // rsi
  char *v76; // rax
  char *v77; // rax
  char *v78; // rax
  int v79; // eax
  char v80; // bl
  int *v81; // rax
  int *v82; // rbp
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rbx
  char *v90; // rax
  __int64 result; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rbp
  char *v104; // rbx
  int *v105; // rax
  unsigned int v106; // eax
  const char *v107; // rax
  const char *v108; // rdx
  int v109; // eax
  const char *v110; // rdi
  __dev_t st_dev; // rcx
  __time_t tv_sec; // rcx
  __syscall_slong_t tv_nsec; // rcx
  __int64 v114; // rax
  char *v115; // rbp
  __int64 v116; // rcx
  __int64 v117; // rcx
  char *v118; // rdi
  char *v119; // rbx
  int *v120; // rax
  const char *v121; // rdi
  int *v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rbp
  char *v129; // rax
  __int64 v130; // rdi
  __int64 v131; // rax
  unsigned __int64 v132; // r12
  __int64 v133; // rax
  _QWORD *v134; // rbp
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  _QWORD *v139; // r14
  _QWORD *v140; // rbx
  unsigned __int64 v141; // rax
  __int64 v142; // rax
  size_t v143; // rax
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rdx
  size_t v148; // rsi
  unsigned int v149; // eax
  __int64 v150; // rbx
  char *v151; // rbp
  int *v152; // rax
  __int64 v153; // rbx
  char *v154; // rbp
  int *v155; // rax
  __off_t st_size; // rbp
  signed __int64 v157; // rbx
  __blksize_t st_blksize; // rax
  unsigned int v159; // r12d
  char *v160; // rax
  __int64 v161; // rdi
  __int64 v162; // rbx
  __int64 v163; // rax
  __int64 v164; // rbx
  __int64 i; // rbx
  __int64 v166; // rsi
  __off_t v167; // rbx
  signed __int64 v168; // rax
  __int64 v169; // rax
  unsigned __int64 v170; // rbp
  __int64 v171; // r12
  __int64 v172; // rbx
  int v173; // edi
  bool v174; // dl
  unsigned __int64 v175; // rbx
  __int64 v176; // rax
  __int64 v177; // rax
  char v178; // cl
  char *v179; // rbx
  __int64 v180; // rax
  int v181; // edx
  int v182; // ecx
  int v183; // r8d
  int v184; // r9d
  int v185; // eax
  int v186; // eax
  int v187; // ecx
  int v188; // r8d
  int v189; // r9d
  int v190; // edx
  __off_t v191; // rcx
  __int64 v192; // rax
  char *v193; // rdi
  unsigned __int64 v194; // rax
  char *v195; // rax
  int *v196; // rax
  char v197; // al
  char *v198; // rbx
  __int64 v199; // rax
  __int64 v200; // rbp
  char *v201; // rax
  char *v202; // rax
  __off_t v203; // rax
  __mode_t st_mode; // eax
  __time_t v205; // rdx
  __syscall_slong_t v206; // rcx
  int v207; // r12d
  const char *v208; // rdx
  int *v209; // rax
  unsigned __int64 v210; // rax
  char *v211; // rax
  int *v212; // rax
  int *v213; // r12
  const char *v214; // rax
  void *v215; // rdi
  _QWORD *v216; // rbx
  __int64 v217; // rcx
  __int64 v218; // rsi
  unsigned __int64 v219; // rax
  __int64 v220; // rsi
  __int64 v221; // rsi
  _QWORD *v222; // rbx
  __int64 v223; // rbx
  char *v224; // r12
  int *v225; // rax
  char *v226; // rax
  __int64 v227; // rbx
  char *v228; // r12
  int *v229; // rax
  _QWORD *v230; // rdi
  __int64 v231; // rbx
  char *v232; // rax
  const char **v233; // rbx
  fd_set *p_stat_buf; // r15
  __int64 v235; // rax
  int v236; // edx
  int v237; // eax
  char *v238; // rsi
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 v242; // rdx
  int v243; // eax
  const char *v244; // rbp
  char *v245; // rbx
  const char *v246; // r15
  unsigned __int64 v247; // kr08_8
  __int64 v248; // r14
  const char *v249; // rsi
  int v250; // eax
  int *v251; // r14
  char *v252; // rax
  char *v253; // rbx
  int *v254; // rax
  unsigned __int64 v255; // rbx
  int v256; // esi
  int v257; // esi
  __int64 v258; // rbx
  char *v259; // rax
  char *v260; // rbx
  int *v261; // rax
  int *v262; // rax
  int *v263; // rax
  unsigned __int64 v264; // rbx
  char *v265; // rax
  const char *v266; // rax
  __int64 v267; // rax
  struct timeval *p_timeout; // r8
  int v269; // edi
  int v270; // eax
  __int64 v271; // rdx
  int v272; // r9d
  int v273; // ebx
  __int64 v274; // rbp
  char *v275; // r15
  unsigned int v276; // r14d
  int v277; // r13d
  unsigned __int64 v278; // rbx
  int v279; // eax
  __int64 v280; // rdx
  char *v281; // rbx
  int v282; // eax
  char *v283; // rax
  __int64 v284; // rax
  int *v285; // rax
  __int64 v286; // rax
  char *v287; // rax
  __int64 v288; // rdx
  __int64 v289; // rcx
  int *v290; // r8
  __int64 v291; // r9
  char *v292; // rax
  int v293; // esi
  __int64 v294; // rax
  __int64 v295; // rdx
  __int64 v296; // rax
  __int64 v297; // rax
  __int64 v298; // rdx
  __int64 v299; // rcx
  __int64 v300; // r8
  __int64 v301; // r9
  __int64 v302; // rbp
  char *v303; // r12
  int *v304; // rbx
  char *v305; // r14
  __int64 v306; // rdx
  __int64 v307; // rcx
  int *v308; // rbx
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 v311; // rbp
  char *v312; // rax
  int *v313; // rax
  char *v314; // rbx
  int *v315; // rax
  char *v316; // rax
  __int64 v317; // [rsp+0h] [rbp-208h]
  int *fildes; // [rsp+8h] [rbp-200h]
  char fildesa; // [rsp+8h] [rbp-200h]
  char *v320; // [rsp+10h] [rbp-1F8h]
  __int64 ptr; // [rsp+18h] [rbp-1F0h]
  char *buf; // [rsp+20h] [rbp-1E8h]
  char bufa; // [rsp+20h] [rbp-1E8h]
  __off_t offset; // [rsp+28h] [rbp-1E0h]
  uint32_t mask; // [rsp+34h] [rbp-1D4h]
  double v326; // [rsp+38h] [rbp-1D0h]
  char v327; // [rsp+40h] [rbp-1C8h]
  __int64 v328; // [rsp+40h] [rbp-1C8h]
  char *v329; // [rsp+48h] [rbp-1C0h]
  unsigned __int64 v330; // [rsp+50h] [rbp-1B8h]
  int v331; // [rsp+58h] [rbp-1B0h]
  char *v332; // [rsp+60h] [rbp-1A8h]
  __int64 v333; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v334; // [rsp+70h] [rbp-198h]
  __int64 v335; // [rsp+70h] [rbp-198h]
  fd_set *v336; // [rsp+78h] [rbp-190h]
  __int64 v337; // [rsp+78h] [rbp-190h]
  int *s1; // [rsp+80h] [rbp-188h]
  char v339; // [rsp+8Bh] [rbp-17Dh]
  int v340; // [rsp+8Ch] [rbp-17Ch]
  unsigned __int64 v341; // [rsp+90h] [rbp-178h]
  unsigned __int64 v342; // [rsp+98h] [rbp-170h] BYREF
  struct timeval timeout; // [rsp+A0h] [rbp-168h] BYREF
  struct stat v344; // [rsp+B0h] [rbp-158h] BYREF
  struct stat stat_buf; // [rsp+140h] [rbp-C8h] BYREF

  v341 = 10LL;
  sub_407B40(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_40C180(sub_406590);
  byte_61237A = 0;
  byte_612385 = 1;
  byte_612381 = 0;
  byte_612382 = 0;
  byte_612384 = 0;
  byte_612380 = 10;
  if ( a1 != 2 )
  {
    if ( a1 == 3 )
    {
      v5 = a2[2];
      if ( *v5 != 45 || !v5[1] )
        goto LABEL_6;
    }
    else
    {
      if ( a1 != 4 )
        goto LABEL_8;
      v5 = a2[2];
    }
    if ( strcmp(v5, "--") )
      goto LABEL_8;
  }
LABEL_6:
  v6 = sub_407AC0();
  v7 = a2[1];
  v8 = v7 + 1;
  if ( *v7 == 43 )
  {
    v20 = 1;
    if ( (unsigned int)(v6 - 200112) <= 0x2B8 )
      goto LABEL_8;
  }
  else
  {
    if ( *v7 != 45 || v6 > 200111 && !v7[(v7[1] == 99) + 1] )
      goto LABEL_8;
    v20 = 0;
  }
  v21 = v7[1];
  v22 = v7 + 1;
  LOBYTE(v23) = v21;
  if ( (unsigned int)(v21 - 48) <= 9 )
  {
    do
      v23 = *++v22;
    while ( (unsigned int)(v23 - 48) <= 9 );
  }
  switch ( (_BYTE)v23 )
  {
    case 'c':
      v3 = 0LL;
      v25 = 10;
      break;
    case 'l':
      v3 = 1LL;
      v25 = 10;
      break;
    case 'b':
      v3 = 0LL;
      v25 = 5120;
      break;
    default:
      v24 = v22;
      v3 = 1LL;
      v25 = 10;
      goto LABEL_66;
  }
  v24 = v22 + 1;
LABEL_66:
  v26 = 0;
  if ( *v24 == 102 )
  {
    ++v24;
    v26 = 1;
  }
  if ( !*v24 )
  {
    if ( v8 == v22 )
    {
      v341 = v25;
      goto LABEL_71;
    }
    if ( (sub_40A260(v8) & 0xFFFFFFFD) == 0 )
    {
LABEL_71:
      byte_612382 = v20;
      v9 = 1LL;
      byte_612385 = v3;
      byte_612384 = v26;
      goto LABEL_9;
    }
    v244 = (const char *)sub_409760(a2[1], 0LL);
    v245 = dcgettext(0LL, "invalid number", 5);
    v263 = __errno_location();
    error(1, *v263, "%s: %s", v245, v244);
LABEL_413:
    v238 = v245;
    if ( !sub_407800(ptr, v245) )
      goto LABEL_499;
    fildesa = v327;
LABEL_415:
    v245 += 96;
    if ( v329 != v245 )
      goto LABEL_387;
    p_stat_buf = (fd_set *)offset;
    if ( dword_6122A8 == 2 )
    {
      if ( v20 )
        goto LABEL_399;
      if ( !fildesa )
        return 1LL;
    }
    v264 = v330;
    v342 = v330 + v333 - 96;
    do
    {
      if ( !*(_BYTE *)(v264 + 52) )
      {
        if ( dword_6122A8 == 1 )
        {
          sub_4056E0(v264, 0LL);
        }
        else if ( *(_DWORD *)(v264 + 56) != -1
               && !__xstat(1, *(const char **)v264, (struct stat *)offset)
               && (*(_QWORD *)(v264 + 32) != stat_buf.st_dev || *(_QWORD *)(v264 + 40) != stat_buf.st_ino) )
        {
          v297 = sub_4047E0(*(_QWORD *)v264);
          v302 = sub_409510(4LL, v297, v298, v299, v300, v301);
          v303 = dcgettext(0LL, "%s was replaced", 5);
          v304 = __errno_location();
          error(0, *v304, v303, v302);
          sub_4072A0((void *)ptr);
          *v304 = 0;
          goto LABEL_400;
        }
        v238 = (char *)&v342;
        sub_404F00(v264, &v342);
      }
      v264 += 96LL;
    }
    while ( v329 != (char *)v264 );
    v266 = v244 + 17;
    v46 = 0LL;
    v170 = 0LL;
    offset = (__off_t)v266;
    v331 = 3;
    buf = (char *)sub_409DD0(v266, v238, v242, v239, v240, v241);
    v171 = 1LL << v3;
    fildes = (int *)(int)v3;
    while ( 1 )
    {
LABEL_430:
      if ( dword_6122A8 == 1 && !byte_612386 && !sub_406BD0(ptr) )
      {
        v283 = dcgettext(0LL, "no files remaining", 5);
        error(0, 0, v283);
        return 1LL;
      }
      while ( 1 )
      {
        do
        {
          if ( v170 < (unsigned __int64)v46 )
            goto LABEL_448;
          if ( pid )
          {
            if ( (_BYTE)v320 )
              exit(0);
            if ( !kill(pid, 0) || *__errno_location() == 1 )
            {
              timeout.tv_sec = (unsigned int)(int)v326;
              timeout.tv_usec = (unsigned int)(int)(1000000.0 * (v326 - (double)(int)v326));
            }
            else
            {
              timeout.tv_usec = 0LL;
              timeout.tv_sec = 0LL;
              LOBYTE(v320) = v327;
            }
          }
          memset(p_stat_buf, 0, sizeof(fd_set));
          v267 = __fdelt_chk(fildes);
          *(&stat_buf.st_dev + v267) |= v171;
          if ( byte_612383 )
            stat_buf.st_dev |= 2uLL;
          p_timeout = 0LL;
          v269 = 1;
          if ( pid )
            p_timeout = &timeout;
          if ( (int)v3 > 0 )
            v269 = v3;
          v270 = select(v269 + 1, p_stat_buf, 0LL, 0LL, p_timeout);
        }
        while ( !v270 );
        if ( v270 == -1 )
        {
          v314 = dcgettext(0LL, "error waiting for inotify and output events", 5);
          v315 = __errno_location();
          error(1, *v315, v314);
LABEL_505:
          fildes = v290;
          v316 = dcgettext(0LL, "inotify resources exhausted", 5);
          error(0, 0, v316);
          sub_4072A0((void *)ptr);
          *fildes = 0;
          goto LABEL_400;
        }
        if ( (stat_buf.st_dev & 2) == 0 )
          break;
        raise(13);
      }
      v284 = sub_409780(v3, buf, offset);
      v46 = (char *)v284;
      if ( !v284 )
        goto LABEL_477;
      v170 = 0LL;
      if ( v284 == -1 )
      {
        if ( *__errno_location() == 22 )
        {
LABEL_477:
          if ( v331 )
          {
            v46 = 0LL;
            v170 = 0LL;
            --v331;
            offset *= 2LL;
            buf = (char *)sub_409E30(buf, offset);
            continue;
          }
        }
        v281 = dcgettext(0LL, "error reading inotify event", 5);
        v285 = __errno_location();
        error(1, *v285, v281);
        goto LABEL_471;
      }
LABEL_448:
      v271 = *(unsigned int *)&buf[v170 + 12];
      v272 = *(_DWORD *)&buf[v170 + 4];
      v332 = &buf[v170];
      v273 = *(_DWORD *)&buf[v170];
      v170 += v271 + 16;
      if ( (v272 & 0x400) == 0 )
      {
        if ( !(_DWORD)v271 )
          goto LABEL_462;
        goto LABEL_450;
      }
      if ( !(_DWORD)v271 )
        break;
LABEL_450:
      v334 = v170;
      v336 = p_stat_buf;
      v274 = 0LL;
      v275 = v46;
      v276 = v3;
      v277 = v273;
      v278 = v330;
      while ( 1 )
      {
        if ( *(_DWORD *)(v278 + 72) == v277 )
        {
          v340 = v272;
          v279 = strcmp(v332 + 16, (const char *)(*(_QWORD *)v278 + *(_QWORD *)(v278 + 80)));
          v272 = v340;
          if ( !v279 )
            break;
        }
        ++v274;
        v278 += 96LL;
        if ( v317 == v274 )
        {
          v3 = v276;
          v170 = v334;
          v46 = v275;
          p_stat_buf = v336;
          goto LABEL_430;
        }
      }
      v280 = v274;
      v3 = v276;
      v170 = v334;
      v46 = v275;
      p_stat_buf = v336;
      v281 = (char *)(v330 + 96 * v280);
      if ( (v340 & 0x200) != 0 )
      {
        if ( dword_6122A8 == 1 )
          goto LABEL_497;
LABEL_456:
        if ( v281 )
          goto LABEL_457;
      }
      else
      {
        LODWORD(v334) = inotify_add_watch(v3, *(const char **)v281, mask);
        if ( (v334 & 0x80000000) != 0LL )
        {
          v290 = __errno_location();
          if ( (*v290 & 0xFFFFFFEF) == 12 )
            goto LABEL_505;
          s1 = v290;
          v337 = sub_409510(4LL, *(_QWORD *)v281, v288, v289, v290, v291);
          v292 = dcgettext(0LL, "cannot watch %s", 5);
          error(0, *s1, v292, v337);
        }
        v293 = *((_DWORD *)v281 + 17);
        if ( v293 >= 0 && (_DWORD)v334 == v293 )
          goto LABEL_496;
        if ( v293 >= 0 )
        {
          inotify_rm_watch(v3, v293);
          sub_407840(ptr, v281);
        }
        *((_DWORD *)v281 + 17) = v334;
        if ( (_DWORD)v334 != -1 )
        {
          v294 = sub_407840(ptr, v281);
          v295 = v294;
          if ( v294 && v281 != (char *)v294 )
          {
            if ( dword_6122A8 == 1 )
              goto LABEL_503;
            goto LABEL_494;
          }
          goto LABEL_495;
        }
      }
    }
    v286 = 0LL;
    while ( *(_DWORD *)(v330 + 96 * v286 + 72) != v273 )
    {
      if ( v317 == ++v286 )
      {
LABEL_462:
        HIDWORD(stat_buf.st_blocks) = v273;
        v281 = (char *)sub_406DF0(ptr, p_stat_buf);
        goto LABEL_456;
      }
    }
    sub_4072A0((void *)ptr);
    v287 = dcgettext(0LL, "directory containing watched file was removed", 5);
    error(0, 0, v287);
    *__errno_location() = 0;
LABEL_400:
    v253 = dcgettext(0LL, "inotify cannot be used, reverting to polling", 5);
    v254 = __errno_location();
    error(0, *v254, v253);
    v255 = v330;
    LODWORD(v170) = (_DWORD)v329;
    do
    {
      v256 = *(_DWORD *)(v255 + 68);
      if ( v256 != -1 )
        inotify_rm_watch(v3, v256);
      v257 = *(_DWORD *)(v255 + 72);
      if ( v257 != -1 )
        inotify_rm_watch(v3, v257);
      v255 += 96LL;
    }
    while ( v329 != (char *)v255 );
LABEL_264:
    byte_612378 = 1;
    if ( pid || dword_6122A8 != 2 || v317 != 1 || *(_DWORD *)(v330 + 56) == -1 )
    {
      LODWORD(v43) = 0;
    }
    else
    {
      LODWORD(fildes) = *(_DWORD *)(v330 + 48);
      LODWORD(v43) = ((unsigned __int16)fildes & 0xF000) != 0x8000;
    }
    LOBYTE(mask) = 0;
    LOBYTE(buf) = v43 & 1;
    v320 = (char *)(v317 - 1);
    ptr = v330 + v333 + 52;
LABEL_269:
    v46 = (char *)v330;
    LOBYTE(fildes) = 0;
    v179 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v46[52] )
          goto LABEL_278;
        v170 = *((unsigned int *)v46 + 14);
        if ( (v170 & 0x80000000) == 0LL )
          break;
        v193 = v46;
        ++v179;
        v46 += 96;
        sub_4056E0(v193, (unsigned int)v43);
        if ( (char *)v317 == v179 )
        {
LABEL_282:
          if ( !byte_612386 || dword_6122A8 != 1 )
          {
            v194 = v330 + 52;
            do
            {
              if ( *(int *)(v194 + 4) >= 0 || *(_BYTE *)v194 != 1 && byte_612386 )
                goto LABEL_326;
              v194 += 96LL;
            }
            while ( ptr != v194 );
            v195 = dcgettext(0LL, "no files remaining", 5);
            error(0, 0, v195);
            while ( 1 )
            {
LABEL_149:
              if ( !byte_61237A || close(0) >= 0 )
                return (unsigned __int8)v339 ^ 1u;
              v196 = __errno_location();
              error(1, *v196, "-");
LABEL_294:
              v197 = byte_612386;
              v46[54] = 0;
              v198 = (char *)"";
              *((_DWORD *)v46 + 15) = -1;
              v197 ^= 1u;
              v46[52] = v197;
              if ( v197 )
                v198 = dcgettext(0LL, "; giving up on this name", 5);
              v199 = sub_4047E0(*(_QWORD *)v46);
              v200 = sub_4095E0(0LL, 3LL, v199);
              v201 = dcgettext(0LL, "%s: cannot follow end of this type of file%s", 5);
              error(0, 0, v201, v200, v198);
LABEL_184:
              v130 = *(_QWORD *)v46;
              v46[52] = byte_612386 ^ 1;
              v131 = sub_4047E0(v130);
              sub_404820((unsigned int)fildes, v131);
              *((_DWORD *)v46 + 14) = -1;
              LOBYTE(ptr) = 0;
              while ( 1 )
              {
                v46 += 96;
                v339 &= ptr;
                v44 = v329 < v46;
                v45 = v329 == v46;
                if ( v329 == v46 )
                  break;
LABEL_111:
                v47 = 2LL;
                v48 = "-";
                offset = v341;
                v49 = *(const char **)v46;
                v50 = *(const char **)v46;
                do
                {
                  if ( !v47 )
                    break;
                  v44 = *v50 < (unsigned int)*v48;
                  v45 = *v50++ == *v48++;
                  --v47;
                }
                while ( v45 );
                LOBYTE(v42) = (!v44 && !v45) - v44;
                mask = (char)v42;
                if ( !(_BYTE)v42 )
                {
                  byte_61237A = 1;
                  LODWORD(fildes) = 0;
LABEL_116:
                  v46[54] = 1;
                  goto LABEL_117;
                }
                v79 = sub_406780((_DWORD)v49, 0, (_DWORD)v42, v47, v40, v41, v317);
                v80 = byte_612386;
                LODWORD(fildes) = v79;
                if ( byte_612386 )
                {
                  if ( v79 != -1 )
                  {
                    v49 = *(const char **)v46;
                    goto LABEL_116;
                  }
                  v46[54] = 0;
LABEL_144:
                  v81 = __errno_location();
                  v82 = v81;
                  if ( byte_612384 )
                  {
                    v83 = *v81;
                    *((_DWORD *)v46 + 14) = -1;
                    v46[52] = v80 ^ 1;
                    *((_DWORD *)v46 + 15) = v83;
                    *((_QWORD *)v46 + 5) = 0LL;
                    *((_QWORD *)v46 + 4) = 0LL;
                  }
                  v84 = sub_4047E0(*(_QWORD *)v46);
                  v89 = sub_409510(4LL, v84, v85, v86, v87, v88);
                  v90 = dcgettext(0LL, "cannot open %s for reading", 5);
                  error(0, *v82, v90, v89);
                  LOBYTE(ptr) = 0;
                }
                else
                {
                  v46[54] = 1;
                  if ( v79 == -1 )
                    goto LABEL_144;
                  v49 = *(const char **)v46;
LABEL_117:
                  if ( byte_612381 )
                  {
                    v107 = (const char *)sub_4047E0(v49);
                    v108 = "";
                    if ( !byte_612290 )
                      v108 = "\n";
                    __printf_chk(1LL, "%s==> %s <==\n", v108, v107);
                    byte_612290 = 0;
                  }
                  v51 = sub_4047E0(*(_QWORD *)v46);
                  v52 = (unsigned int)fildes;
                  v344.st_dev = 0LL;
                  v328 = v51;
                  LOBYTE(ptr) = byte_612385;
                  if ( byte_612385 )
                  {
                    if ( __fxstat(1, (int)fildes, &stat_buf) )
                    {
                      v150 = sub_409510(4LL, v328, v53, v54, v55, v56);
                      v151 = dcgettext(0LL, "cannot fstat %s", 5);
                      v152 = __errno_location();
                      error(0, *v152, v151, v150);
                      LOBYTE(v331) = 0;
                    }
                    else
                    {
                      LOBYTE(v331) = byte_612382;
                      if ( byte_612382 )
                      {
                        v149 = sub_404920(v328, (unsigned int)fildes, v341, &v344);
                        if ( v149 )
                        {
                          v331 = v149 >> 31;
                        }
                        else
                        {
                          v169 = sub_404A20(0LL, v328, (unsigned int)fildes, -1LL);
                          v344.st_dev += v169;
                        }
                      }
                      else
                      {
                        if ( !byte_612379 && (stat_buf.st_mode & 0xF000) == 0x8000 )
                        {
                          LODWORD(v43) = (_DWORD)fildes;
                          v52 = 0LL;
                          v167 = lseek((int)fildes, 0LL, 1);
                          if ( v167 != -1 )
                          {
                            v168 = lseek((int)fildes, 0LL, 2);
                            if ( v167 < v168 )
                            {
                              v344.st_dev = v168;
                              LOBYTE(v331) = ptr;
                              if ( v168 )
                                LOBYTE(v331) = sub_404CD0(v328, (unsigned int)fildes, v341, v167, v168, &v344);
                              goto LABEL_182;
                            }
                            v52 = v167;
                            sub_404C20((unsigned int)fildes, v167, 0LL, v328);
                          }
                        }
                        v57 = (char *)sub_409DD0(8216LL, v52, v53, v54, v55, v56);
                        *((_QWORD *)v57 + 1025) = 0LL;
                        *((_QWORD *)v57 + 1024) = 0LL;
                        *((_QWORD *)v57 + 1026) = 0LL;
                        v320 = v57;
                        v332 = v46;
                        v62 = v57;
                        buf = 0LL;
                        v43 = sub_409DD0(8216LL, v52, v58, v59, v60, v61);
                        while ( 1 )
                        {
                          v63 = sub_409780((int)fildes, (void *)v43, 0x2000uLL);
                          if ( v63 - 1 > 0xFFFFFFFFFFFFFFFDLL )
                            break;
                          *(_QWORD *)(v43 + 0x2000) = v63;
                          v3 = v43 + v63;
                          v64 = v43;
                          v65 = 0LL;
                          v344.st_dev += v63;
                          v66 = byte_612380;
                          *(_QWORD *)(v43 + 8200) = 0LL;
                          *(_QWORD *)(v43 + 8208) = 0LL;
                          while ( 1 )
                          {
                            v67 = v66;
                            v68 = sub_40B730(v64, v66, v3 - v64);
                            v72 = v65 + 1;
                            if ( !v68 )
                              break;
                            *(_QWORD *)(v43 + 8200) = v72;
                            v64 = v68 + 1;
                            ++v65;
                          }
                          v73 = *((_QWORD *)v320 + 1024);
                          v74 = &buf[v65];
                          if ( v63 + v73 <= 0x1FFF )
                          {
                            memcpy(&v320[v73], (const void *)v43, v63);
                            buf += v65;
                            *((_QWORD *)v320 + 1024) += *(_QWORD *)(v43 + 0x2000);
                            *((_QWORD *)v320 + 1025) += *(_QWORD *)(v43 + 8200);
                          }
                          else
                          {
                            *((_QWORD *)v320 + 1026) = v43;
                            buf = &v74[-*((_QWORD *)v62 + 1025)];
                            v320 = (char *)v43;
                            if ( v341 >= (unsigned __int64)buf )
                            {
                              buf = v74;
                              v43 = sub_409DD0(8216LL, v67, v72, v69, v70, v71);
                            }
                            else
                            {
                              v43 = (__int64)v62;
                              v62 = (char *)*((_QWORD *)v62 + 1026);
                            }
                          }
                        }
                        v115 = v62;
                        v46 = v332;
                        free((void *)v43);
                        if ( v63 != -1LL )
                        {
                          v117 = *((_QWORD *)v320 + 1024);
                          LOBYTE(v42) = v341 == 0 || v117 == 0;
                          LOBYTE(v331) = (_BYTE)v42;
                          if ( (_BYTE)v42 )
                            goto LABEL_180;
                          v159 = byte_612380;
                          if ( v320[v117 - 1] != byte_612380 )
                          {
                            ++*((_QWORD *)v320 + 1025);
                            ++buf;
                          }
                          v3 = (__int64)v115;
                          v160 = &buf[-*((_QWORD *)v115 + 1025)];
                          if ( v341 < (unsigned __int64)v160 )
                          {
                            do
                            {
                              v3 = *(_QWORD *)(v3 + 8208);
                              v42 = v160;
                              v160 -= *(_QWORD *)(v3 + 8200);
                            }
                            while ( v341 < (unsigned __int64)v160 );
                            buf = v42;
                          }
                          v161 = v3;
                          LODWORD(v43) = (_DWORD)buf;
                          v162 = v3 + *(_QWORD *)(v3 + 0x2000);
                          if ( v341 < (unsigned __int64)buf )
                          {
                            v43 = (__int64)&buf[-v341];
                            while ( 1 )
                            {
                              v163 = sub_40B730(v161, v159, v162 - v161);
                              if ( !v163 )
                                break;
                              v161 = v163 + 1;
                              if ( !--v43 )
                                goto LABEL_222;
                            }
LABEL_408:
                            __assert_fail("beg", "src/tail.c", 0x2C9u, "pipe_lines");
                          }
LABEL_222:
                          v164 = v162 - v161;
                          if ( v164 )
                            sub_4048A0(v161, v164, v42);
                          for ( i = *(_QWORD *)(v3 + 8208); i; i = *(_QWORD *)(i + 8208) )
                          {
                            v166 = *(_QWORD *)(i + 0x2000);
                            if ( v166 )
                              sub_4048A0(i, v166, v42);
                          }
                          v118 = v115;
                          LOBYTE(v331) = ptr;
                          goto LABEL_181;
                        }
                        v223 = sub_409510(4LL, v328, v42, v116, v40, v41);
                        v224 = dcgettext(0LL, "error reading %s", 5);
                        v225 = __errno_location();
                        error(0, *v225, v224, v223);
LABEL_180:
                        v118 = v115;
                        if ( v115 )
                        {
                          do
                          {
LABEL_181:
                            v119 = (char *)*((_QWORD *)v118 + 1026);
                            free(v118);
                            v118 = v119;
                          }
                          while ( v119 );
                        }
                      }
                    }
LABEL_182:
                    LOBYTE(ptr) = v331;
                    goto LABEL_159;
                  }
                  if ( __fxstat(1, (int)fildes, &stat_buf) )
                  {
                    v153 = sub_409510(4LL, v328, v92, v93, v94, v95);
                    v154 = dcgettext(0LL, "cannot fstat %s", 5);
                    v155 = __errno_location();
                    error(0, *v155, v154, v153);
                    goto LABEL_159;
                  }
                  v96 = (unsigned __int8)byte_612382;
                  LOBYTE(ptr) = byte_612382;
                  if ( byte_612382 )
                  {
                    if ( byte_612379
                      || (v341 & 0x8000000000000000LL) != 0LL
                      || ((stat_buf.st_mode & 0xF000) != 0x8000 || sub_404C20((unsigned int)fildes, v341, 1LL, v328) < 0)
                      && lseek((int)fildes, v341, 1) == -1 )
                    {
                      v106 = sub_404B40(v328, (unsigned int)fildes, v341, &v344);
                      offset = -1LL;
                      if ( v106 )
                      {
                        LODWORD(ptr) = v106 >> 31;
                        goto LABEL_159;
                      }
                    }
                    else
                    {
                      v344.st_dev += v341;
                      offset = -1LL;
                    }
                  }
                  else
                  {
                    if ( byte_612379 || (v341 & 0x8000000000000000LL) != 0LL )
                      goto LABEL_186;
                    if ( (stat_buf.st_mode & 0xD000) == 0x8000 )
                    {
                      st_size = stat_buf.st_size;
                      v157 = -1LL;
                    }
                    else
                    {
                      LODWORD(v43) = v341;
                      v52 = -(__int64)v341;
                      v203 = lseek((int)fildes, -(__int64)v341, 2);
                      v157 = v203;
                      if ( v203 == -1 )
                        goto LABEL_186;
                      st_size = v203 + v341;
                    }
                    st_blksize = stat_buf.st_blksize;
                    v52 = 0x1FFFFFFFFFFFFFFFLL;
                    v92 = 512LL;
                    if ( (unsigned __int64)(stat_buf.st_blksize - 1) > 0x1FFFFFFFFFFFFFFFLL )
                      st_blksize = 512LL;
                    if ( st_size <= st_blksize )
                    {
LABEL_186:
                      v132 = 0LL;
                      v133 = sub_409DD0(8208LL, v52, v92, v96, v94, v95);
                      *(_QWORD *)(v133 + 0x2000) = 0LL;
                      *(_QWORD *)(v133 + 8200) = 0LL;
                      v134 = (_QWORD *)v133;
                      v320 = v46;
                      LODWORD(v43) = (_DWORD)fildes;
                      v139 = (_QWORD *)v133;
                      v140 = (_QWORD *)sub_409DD0(8208LL, v52, v135, v136, v137, v138);
                      v3 = v341;
                      while ( 1 )
                      {
                        v143 = sub_409780((int)fildes, v140, 0x2000uLL);
                        if ( v143 - 1 > 0xFFFFFFFFFFFFFFFDLL )
                          break;
                        v344.st_dev += v143;
                        v132 += v143;
                        v140[1024] = v143;
                        v147 = v139[1024];
                        v140[1025] = 0LL;
                        v148 = v143 + v147;
                        if ( v143 + v147 > 0x1FFF )
                        {
                          v141 = v132 - v134[1024];
                          v139[1025] = v140;
                          if ( v341 >= v141 )
                          {
                            v142 = sub_409DD0(8208LL, v148, v147, v144, v145, v146);
                          }
                          else
                          {
                            v132 = v141;
                            v142 = (__int64)v134;
                            v134 = (_QWORD *)v134[1025];
                          }
                        }
                        else
                        {
                          memcpy((char *)v139 + v147, v140, v143);
                          v139[1024] += v140[1024];
                          v142 = (__int64)v140;
                          v140 = v139;
                        }
                        v139 = v140;
                        v140 = (_QWORD *)v142;
                      }
                      v215 = v140;
                      buf = (char *)v143;
                      v46 = v320;
                      v216 = v134;
                      free(v215);
                      v42 = (char *)v341;
                      if ( buf == (char *)-1LL )
                      {
                        v227 = sub_409510(4LL, v328, v341, v217, v40, v41);
                        v228 = dcgettext(0LL, "error reading %s", 5);
                        v229 = __errno_location();
                        error(0, *v229, v228, v227);
                        v230 = v134;
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v218 = v216[1024];
                          if ( v341 >= v132 - v218 )
                            break;
                          v216 = (_QWORD *)v216[1025];
                          v132 -= v218;
                        }
                        v219 = 0LL;
                        if ( v341 < v132 )
                          v219 = v132 - v341;
                        v220 = v218 - v219;
                        if ( v220 )
                          sub_4048A0((char *)v216 + v219, v220, v341);
                        while ( 1 )
                        {
                          v216 = (_QWORD *)v216[1025];
                          if ( !v216 )
                            break;
                          v221 = v216[1024];
                          if ( v221 )
                            sub_4048A0(v216, v221, v42);
                        }
                        LOBYTE(ptr) = 1;
                        v230 = v134;
                      }
                      while ( v230 )
                      {
                        v222 = (_QWORD *)v230[1025];
                        free(v230);
                        v230 = v222;
                      }
                      goto LABEL_159;
                    }
                    if ( v157 == -1 )
                      v157 = sub_404C20((unsigned int)fildes, 0LL, 1LL, v328);
                    if ( st_size > v157 && v341 < st_size - v157 )
                    {
                      v157 = st_size - v341;
                      sub_404C20((unsigned int)fildes, st_size - v341, 0LL, v328);
                    }
                    v344.st_dev = v157;
                  }
                  v97 = sub_404A20(0LL, v328, (unsigned int)fildes, offset);
                  v344.st_dev += v97;
                  LOBYTE(ptr) = 1;
LABEL_159:
                  if ( byte_612384 )
                  {
                    *((_DWORD *)v46 + 15) = (unsigned __int8)ptr - 1;
                    if ( __fxstat(1, (int)fildes, &stat_buf) < 0 )
                    {
                      v120 = __errno_location();
                      v121 = *(const char **)v46;
                      v122 = v120;
                      *((_DWORD *)v46 + 15) = *v120;
                      v123 = sub_4047E0(v121);
                      v128 = sub_409510(4LL, v123, v124, v125, v126, v127);
                      v129 = dcgettext(0LL, "error reading %s", 5);
                      error(0, *v122, v129, v128);
                      goto LABEL_184;
                    }
                    if ( (((stat_buf.st_mode & 0xF000) - 4096) & 0xFFFFE000) != 0
                      && (stat_buf.st_mode & 0xB000) != 0x8000 )
                    {
                      goto LABEL_294;
                    }
                    if ( !(_BYTE)ptr )
                      goto LABEL_184;
                    v109 = 1;
                    v110 = *(const char **)v46;
                    *((_DWORD *)v46 + 12) = stat_buf.st_mode;
                    st_dev = v344.st_dev;
                    v46[52] = 0;
                    if ( !mask )
                      v109 = v334;
                    *((_DWORD *)v46 + 14) = (_DWORD)fildes;
                    *((_QWORD *)v46 + 1) = st_dev;
                    tv_sec = stat_buf.st_mtim.tv_sec;
                    *((_DWORD *)v46 + 16) = v109;
                    *((_QWORD *)v46 + 2) = tv_sec;
                    tv_nsec = stat_buf.st_mtim.tv_nsec;
                    *((_QWORD *)v46 + 11) = 0LL;
                    *((_QWORD *)v46 + 3) = tv_nsec;
                    *((_QWORD *)v46 + 4) = stat_buf.st_dev;
                    *((_QWORD *)v46 + 5) = stat_buf.st_ino;
                    v114 = sub_4047E0(v110);
                    v46[53] = sub_405090((unsigned int)fildes, v114);
                  }
                  else if ( mask && close((int)fildes) )
                  {
                    v98 = sub_4047E0(*(_QWORD *)v46);
                    v103 = sub_409510(4LL, v98, v99, v100, v101, v102);
                    v104 = dcgettext(0LL, "error reading %s", 5);
                    v105 = __errno_location();
                    error(0, *v105, v104, v103);
                    LOBYTE(ptr) = 0;
                  }
                }
              }
              v327 = byte_612384;
              if ( byte_612384 )
              {
                v170 = v330;
                v171 = (__int64)v329;
                v172 = 0LL;
                do
                {
                  if ( !strcmp(*(const char **)v170, "-")
                    && !*(_BYTE *)(v170 + 52)
                    && (v173 = *(_DWORD *)(v170 + 56), v173 >= 0)
                    && ((*(_DWORD *)(v170 + 48) & 0xF000) == 4096 || (unsigned int)sub_40B5B0(v173)) )
                  {
                    *(_DWORD *)(v170 + 56) = -1;
                    *(_BYTE *)(v170 + 52) = 1;
                  }
                  else
                  {
                    ++v172;
                  }
                  v170 += 96LL;
                }
                while ( v329 != (char *)v170 );
                if ( v172 )
                {
                  if ( __fxstat(1, 1, &v344) >= 0 )
                  {
                    v174 = 1;
                    if ( (v344.st_mode & 0xF000) != 4096 )
                      v174 = (unsigned int)sub_40B5B0(1) != 0;
                    byte_612383 = v174;
                    if ( !byte_612378 )
                    {
                      v175 = v330;
                      v170 = (unsigned __int64)v329;
                      do
                      {
                        if ( !*(_BYTE *)(v175 + 52) && !strcmp(*(const char **)v175, "-") )
                          goto LABEL_264;
                        v175 += 96LL;
                      }
                      while ( v329 != (char *)v175 );
                      v176 = 0LL;
                      do
                      {
                        if ( *(int *)(v330 + v176 + 56) >= 0 && *(_BYTE *)(v330 + v176 + 53) )
                          goto LABEL_264;
                        v176 += 96LL;
                      }
                      while ( v333 != v176 );
                      v177 = 0LL;
                      while ( 1 )
                      {
                        if ( *(int *)(v330 + v177 + 56) >= 0 )
                        {
                          v178 = *(_BYTE *)(v330 + v177 + 53);
                          if ( !v178 )
                            break;
                        }
                        v177 += 96LL;
                        if ( v333 == v177 )
                          goto LABEL_264;
                      }
LABEL_370:
                      LOBYTE(v320) = v178;
                      v233 = (const char **)v330;
                      p_stat_buf = (fd_set *)&stat_buf;
                      do
                      {
                        if ( !__lxstat(1, *v233, &stat_buf) && (stat_buf.st_mode & 0xF000) == 40960 )
                          goto LABEL_264;
                        v233 += 12;
                      }
                      while ( v329 != (char *)v233 );
                      v235 = 0LL;
                      do
                      {
                        if ( *(int *)(v330 + v235 + 56) >= 0 )
                        {
                          v236 = *(_DWORD *)(v330 + v235 + 48) & 0xF000;
                          if ( v236 != 0x8000 && v236 != 4096 )
                            goto LABEL_264;
                        }
                        v235 += 96LL;
                      }
                      while ( v333 != v235 );
                      if ( v339 || dword_6122A8 != 2 )
                      {
                        v237 = inotify_init();
                        v3 = (unsigned int)v237;
                        if ( v237 < 0 )
                          goto LABEL_400;
                        if ( !fflush_unlocked(stdout) )
                        {
                          v238 = 0LL;
                          ptr = sub_407060(v317, 0LL, sub_4047C0, sub_4047D0, 0LL);
                          if ( !ptr )
                            goto LABEL_499;
                          v242 = 2LL;
                          v243 = 3078;
                          if ( dword_6122A8 != 1 )
                            v243 = 2;
                          fildesa = 0;
                          v20 = 0;
                          v244 = 0LL;
                          offset = (__off_t)&stat_buf;
                          v245 = (char *)v330;
                          mask = v243;
LABEL_387:
                          if ( v245[52] )
                            goto LABEL_415;
                          v246 = *(const char **)v245;
                          v247 = strlen(*(const char **)v245) + 1;
                          *((_DWORD *)v245 + 17) = -1;
                          if ( (unsigned __int64)v244 < v247 - 1 )
                            v244 = (const char *)(v247 - 1);
                          if ( dword_6122A8 != 1 )
                            goto LABEL_394;
                          v248 = sub_406630(v246);
                          v331 = (_DWORD)v246 + v248;
                          bufa = v246[v248];
                          *((_QWORD *)v245 + 10) = sub_4066F0(v246) - (_QWORD)v246;
                          v246[v248] = 0;
                          v249 = ".";
                          if ( v248 )
                            v249 = *(const char **)v245;
                          *((_DWORD *)v245 + 18) = inotify_add_watch(v3, v249, 0x784u);
                          *(_BYTE *)(*(_QWORD *)v245 + v248) = bufa;
                          if ( *((int *)v245 + 18) >= 0 )
                          {
LABEL_394:
                            v238 = *(char **)v245;
                            v250 = inotify_add_watch(v3, *(const char **)v245, mask);
                            *((_DWORD *)v245 + 17) = v250;
                            if ( v250 < 0 )
                            {
                              if ( *((_DWORD *)v245 + 14) != -1 )
                                v20 = v327;
                              v251 = __errno_location();
                              v242 = *v251 & 0xFFFFFFEF;
                              if ( (_DWORD)v242 == 12 )
                              {
LABEL_398:
                                v252 = dcgettext(0LL, "inotify resources exhausted", 5);
                                error(0, 0, v252);
                                goto LABEL_399;
                              }
                              if ( *v251 != *((_DWORD *)v245 + 15) )
                              {
                                buf = (char *)sub_409510(4LL, *(_QWORD *)v245, v242, v239, v240, v241);
                                v265 = dcgettext(0LL, "cannot watch %s", 5);
                                v238 = (char *)(unsigned int)*v251;
                                error(0, (int)v238, v265, buf);
                              }
                              goto LABEL_415;
                            }
                            goto LABEL_413;
                          }
                          v305 = v245;
                          v308 = __errno_location();
                          if ( *v308 == 28 )
                            goto LABEL_398;
                          v311 = sub_409510(4LL, *(_QWORD *)v305, v306, v307, v309, v310);
                          v312 = dcgettext(0LL, "cannot watch parent directory of %s", 5);
                          error(0, *v308, v312, v311);
LABEL_399:
                          sub_4072A0((void *)ptr);
                          *__errno_location() = 0;
                          goto LABEL_400;
                        }
                        v281 = dcgettext(0LL, "write error", 5);
                        v313 = __errno_location();
                        error(1, *v313, v281);
LABEL_503:
                        v335 = v294;
                        sub_4056E0(v294, 0LL);
                        v295 = v335;
LABEL_494:
                        *(_DWORD *)(v295 + 68) = -1;
                        v334 = v295;
                        v296 = sub_4047E0(*(_QWORD *)v295);
                        sub_404820(*(unsigned int *)(v334 + 56), v296);
LABEL_495:
                        if ( !sub_407800(ptr, v281) )
LABEL_499:
                          sub_40A020();
LABEL_496:
                        if ( dword_6122A8 == 1 )
                        {
LABEL_497:
                          sub_4056E0(v281, 0LL);
                          goto LABEL_456;
                        }
LABEL_457:
                        v282 = *((_DWORD *)v332 + 1);
                        if ( (v282 & 0xE04) != 0 )
                        {
                          if ( (v282 & 0x400) != 0 )
                          {
                            inotify_rm_watch(v3, *((_DWORD *)v281 + 17));
                            sub_407840(ptr, v281);
                          }
                          sub_4056E0(v281, 0LL);
                          goto LABEL_430;
                        }
LABEL_471:
                        sub_404F00(v281, &v342);
                        goto LABEL_430;
                      }
                    }
                    goto LABEL_264;
                  }
                  v260 = dcgettext(0LL, "standard output", 5);
                  v261 = __errno_location();
                  error(1, *v261, v260);
LABEL_410:
                  v179 = dcgettext(0LL, "write error", 5);
                  v262 = __errno_location();
                  error(1, *v262, v179);
LABEL_411:
                  v191 = -2LL;
                  goto LABEL_277;
                }
              }
            }
          }
LABEL_326:
          if ( (_BYTE)fildes == 1 && !(_BYTE)buf )
          {
            if ( !byte_612383 )
              goto LABEL_269;
            goto LABEL_329;
          }
          if ( fflush_unlocked(stdout) )
            goto LABEL_410;
          if ( byte_612383 )
          {
LABEL_329:
            timeout.tv_usec = 0LL;
            timeout.tv_sec = 0LL;
            memset(&stat_buf, 0, 0x80uLL);
            stat_buf.st_dev |= 2uLL;
            if ( select(2, (fd_set *)&stat_buf, 0LL, 0LL, &timeout) == 1 )
              raise(13);
          }
          if ( (_BYTE)fildes )
            goto LABEL_269;
          if ( (_BYTE)mask )
            goto LABEL_149;
          if ( pid && kill(pid, 0) && *__errno_location() != 1 )
          {
            LOBYTE(mask) = v327;
            goto LABEL_269;
          }
          if ( !(unsigned int)sub_40A160(v326) )
            goto LABEL_269;
          v179 = dcgettext(0LL, "cannot read realtime clock", 5);
          v212 = __errno_location();
          error(1, *v212, v179);
LABEL_336:
          *((_DWORD *)v46 + 14) = -1;
          v213 = __errno_location();
          *((_DWORD *)v46 + 15) = *v213;
          v214 = (const char *)sub_4095E0(0LL, 3LL, v3);
          error(0, *v213, "%s", v214);
          close(v170);
          goto LABEL_278;
        }
      }
      v180 = sub_4047E0(*(_QWORD *)v46);
      v171 = *((unsigned int *)v46 + 12);
      v3 = v180;
      v185 = *((_DWORD *)v46 + 16);
      if ( (_DWORD)v43 != v185 )
      {
        v186 = sub_40A6A0(v170, 3, v181, v182, v183, v184, v317);
        if ( (_DWORD)v43 )
        {
          if ( v186 >= 0 )
            goto LABEL_275;
        }
        else if ( v186 >= 0 )
        {
          v190 = v186;
          BYTE1(v190) = BYTE1(v186) | 8;
          if ( v186 == v190 || (unsigned int)sub_40A6A0(v170, 4, v190, v187, v188, v189, v317) != -1 )
          {
LABEL_275:
            *((_DWORD *)v46 + 16) = v43;
            v185 = v43;
            goto LABEL_276;
          }
        }
        v209 = __errno_location();
        if ( (*((_DWORD *)v46 + 12) & 0xF000) != 0x8000 || *v209 != 1 )
        {
          v317 = (__int64)v209;
          v231 = sub_4095E0(0LL, 3LL, v3);
          v232 = dcgettext(0LL, "%s: cannot change nonblocking mode", 5);
          error(1, *(_DWORD *)v317, v232, v231);
          goto LABEL_370;
        }
        v185 = *((_DWORD *)v46 + 16);
      }
LABEL_276:
      v191 = -2LL;
      if ( v185 )
        goto LABEL_277;
      if ( __fxstat(1, v170, &stat_buf) )
        goto LABEL_336;
      st_mode = stat_buf.st_mode;
      if ( *((_DWORD *)v46 + 12) != stat_buf.st_mode )
      {
        v205 = stat_buf.st_mtim.tv_sec;
        v206 = stat_buf.st_mtim.tv_nsec;
LABEL_304:
        v207 = v171 & 0xF000;
        *((_QWORD *)v46 + 2) = v205;
        *((_QWORD *)v46 + 3) = v206;
        *((_DWORD *)v46 + 12) = st_mode;
        *((_QWORD *)v46 + 11) = 0LL;
        if ( v207 == 0x8000 && stat_buf.st_size < *((_QWORD *)v46 + 1) )
        {
          offset = sub_4095E0(0LL, 3LL, v3);
          v211 = dcgettext(0LL, "%s: file truncated", 5);
          error(0, 0, v211, offset);
          sub_404C20((unsigned int)v170, 0LL, 0LL, v3);
          *((_QWORD *)v46 + 1) = 0LL;
        }
        if ( v179 != v320 )
        {
          v320 = v179;
          if ( byte_612381 )
          {
            v208 = "\n";
            if ( byte_612290 )
              v208 = "";
            __printf_chk(1LL, "%s==> %s <==\n", v208, (const char *)v3);
            byte_612290 = 0;
            v320 = v179;
          }
        }
        if ( *((_DWORD *)v46 + 16) )
          goto LABEL_411;
        v191 = -1LL;
        if ( v207 == 0x8000 && v46[53] )
          v191 = stat_buf.st_size - *((_QWORD *)v46 + 1);
LABEL_277:
        v192 = sub_404A20(0LL, v3, (unsigned int)v170, v191);
        *((_QWORD *)v46 + 1) += v192;
        LOBYTE(fildes) = (v192 != 0) | (unsigned __int8)fildes;
        goto LABEL_278;
      }
      v205 = stat_buf.st_mtim.tv_sec;
      if ( (stat_buf.st_mode & 0xF000) == 0x8000 && *((_QWORD *)v46 + 1) != stat_buf.st_size )
      {
        v206 = stat_buf.st_mtim.tv_nsec;
        goto LABEL_304;
      }
      v206 = stat_buf.st_mtim.tv_nsec;
      if ( *((_QWORD *)v46 + 2) != stat_buf.st_mtim.tv_sec || *((_DWORD *)v46 + 6) != LODWORD(stat_buf.st_mtim.tv_nsec) )
        goto LABEL_304;
      v210 = *((_QWORD *)v46 + 11);
      v30 = v210 < qword_6122A0;
      *((_QWORD *)v46 + 11) = v210 + 1;
      if ( !v30 && dword_6122A8 == 1 )
      {
        sub_4056E0(v46, *((_DWORD *)v46 + 16) != 0);
        *((_QWORD *)v46 + 11) = 0LL;
      }
LABEL_278:
      ++v179;
      v46 += 96;
      if ( (char *)v317 == v179 )
        goto LABEL_282;
    }
  }
LABEL_8:
  v9 = 0LL;
LABEL_9:
  v10 = &a2[v9];
  LODWORD(v11) = 0;
  v12 = a1 - (unsigned __int8)v9;
  v326 = 1.0;
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
        v15 = v13;
        if ( v13 >= 48 )
        {
          v226 = dcgettext(0LL, "option used in invalid context -- %c", 5);
          error(1, 0, v226, v15);
        }
        else
        {
          if ( v13 == -131 )
          {
            sub_409C90(
              (_DWORD)stdout,
              (unsigned int)"tail",
              (unsigned int)&unk_40C375,
              (_DWORD)off_6122B0,
              (unsigned int)"Paul Rubin",
              (unsigned int)"David MacKenzie",
              "Ian Lance Taylor",
              "Jim Meyering",
              0LL);
            exit(0);
          }
          if ( v13 == -130 )
            sub_405D10(0);
        }
LABEL_366:
        sub_405D10(1);
      }
      if ( v13 == 99 )
      {
LABEL_37:
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
          v17 = dcgettext(0LL, "invalid number of lines", 5);
        else
          v17 = dcgettext(0LL, "invalid number of bytes", 5);
        v341 = sub_40A130(qword_612540, 0LL, -1LL, "bkKmMGTPEZY0", v17, 0LL);
      }
      else if ( v13 > 99 )
      {
        if ( v13 != 102 )
          goto LABEL_36;
LABEL_27:
        byte_612384 = 1;
        if ( qword_612540 )
          dword_6122A8 = dword_40D760[sub_406440("--follow", qword_612540, &off_40D770, dword_40D760, 4LL, off_6122B8)];
        else
          dword_6122A8 = 2;
      }
      else
      {
        if ( v13 != 70 )
          goto LABEL_366;
        byte_612384 = 1;
        dword_6122A8 = 1;
        byte_612386 = 1;
      }
    }
    else if ( v13 == 129 )
    {
      v18 = dcgettext(0LL, "invalid maximum number of unchanged stats between opens", 5);
      qword_6122A0 = sub_40A130(qword_612540, 0LL, -1LL, "", v18, 0LL);
    }
    else if ( v13 > 129 )
    {
      if ( v13 == 131 )
      {
        byte_612379 = 1;
      }
      else if ( v13 < 131 )
      {
        v19 = dcgettext(0LL, "invalid PID", 5);
        pid = sub_40A130(qword_612540, 0LL, 0x7FFFFFFFLL, "", v19, 0LL);
      }
      else
      {
        if ( v13 == 132 )
          goto LABEL_27;
        if ( v13 != 133 )
          goto LABEL_366;
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
        goto LABEL_366;
      if ( !(unsigned __int8)sub_40A1C0(qword_612540, 0LL, &stat_buf, sub_406500)
        || (v326 = *(double *)&stat_buf.st_dev, *(double *)&stat_buf.st_dev < 0.0) )
      {
        v11 = sub_409760(qword_612540, 0LL);
        v16 = dcgettext(0LL, "invalid number of seconds: %s", 5);
        error(1, 0, v16, v11);
LABEL_36:
        if ( v13 != 110 )
          goto LABEL_366;
        goto LABEL_37;
      }
    }
    else if ( v13 == 122 )
    {
      byte_612380 = 0;
    }
    else
    {
      if ( v13 != 128 )
        goto LABEL_366;
      byte_612386 = 1;
    }
  }
  if ( byte_612386 )
  {
    if ( byte_612384 )
    {
      if ( dword_6122A8 != 2 )
      {
        v27 = pid;
        if ( pid )
          goto LABEL_82;
        goto LABEL_83;
      }
      v75 = "warning: --retry only effective for the initial open";
    }
    else
    {
      byte_612386 = 0;
      v75 = "warning: --retry ignored; --retry is useful only when following";
    }
    v76 = dcgettext(0LL, v75, 5);
    error(0, 0, v76);
  }
  v27 = pid;
  if ( pid )
  {
    if ( byte_612384 )
    {
LABEL_82:
      if ( kill(v27, 0) && *__errno_location() == 38 )
      {
        v202 = dcgettext(0LL, "warning: --pid=PID is not supported on this system", 5);
        error(0, 0, v202);
        pid = 0;
      }
    }
    else
    {
      v77 = dcgettext(0LL, "warning: PID ignored; --pid=PID is useful only when following", 5);
      error(0, 0, v77);
    }
  }
LABEL_83:
  if ( byte_612382 && v341 )
    --v341;
  if ( dword_61233C >= v12 )
  {
    v29 = &off_612298;
    v317 = 1LL;
  }
  else
  {
    v28 = v12 - dword_61233C;
    v29 = (void **)&v10[dword_61233C];
    v317 = v28;
  }
  v30 = 0;
  v31 = 1;
  v32 = 0LL;
  v33 = 1LL;
  v34 = &v29[v317];
  v35 = v29;
  do
  {
    v36 = (const char *)*v35;
    v37 = 2LL;
    v38 = "-";
    do
    {
      if ( !v37 )
        break;
      v30 = *v36 < (unsigned int)*v38;
      v31 = *v36++ == *v38++;
      --v37;
    }
    while ( v31 );
    LOBYTE(v14) = (!v30 && !v31) - v30;
    if ( !(_BYTE)v14 )
      v32 = 1LL;
    v30 = ++v35 < v34;
    v31 = v35 == v34;
  }
  while ( v35 != v34 );
  if ( !(_BYTE)v32 )
  {
LABEL_103:
    if ( !v341 && !byte_612384 )
      goto LABEL_233;
    goto LABEL_105;
  }
  if ( dword_6122A8 == 1 )
  {
    v258 = sub_409510(4LL, "-", v14, v37, v32, 1LL);
    v259 = dcgettext(0LL, "cannot follow %s by name", 5);
    error(1, 0, v259, v258);
    goto LABEL_408;
  }
  if ( byte_612384 )
  {
    if ( pid
      || v317 != 1
      || dword_6122A8 != 2
      || (v36 = 0LL, __fxstat(1, 0, &stat_buf))
      || (stat_buf.st_mode & 0xF000) == 0x8000 )
    {
      if ( isatty(0) )
      {
        v78 = dcgettext(0LL, "warning: following standard input indefinitely is ineffective", 5);
        v36 = 0LL;
        error(0, 0, v78);
      }
    }
    goto LABEL_103;
  }
  if ( v341 )
  {
LABEL_105:
    v333 = 96 * v317;
    v39 = sub_409DD0(96 * v317, v36, v14, v37, v32, v33);
    v330 = v39;
    do
    {
      v42 = (char *)*v29++;
      v39 += 96LL;
      *(_QWORD *)(v39 - 96) = v42;
    }
    while ( v29 != v34 );
    if ( (_DWORD)v11 == 1 || !(_DWORD)v11 && v317 != 1 )
      byte_612381 = 1;
    LODWORD(v43) = v330;
    LODWORD(v334) = -1;
    v339 = 1;
    v44 = __CFADD__(v330, v333);
    v45 = v330 + v333 == 0;
    v46 = (char *)v330;
    v329 = (char *)(v330 + v333);
    goto LABEL_111;
  }
LABEL_233:
  result = 0LL;
  if ( byte_612382 )
    goto LABEL_105;
  return result;
}

// positive sp value has been detected, the output may be wrong!
noreturn void __fastcall  start(__int64 a1, __int64 a2, void (*a3)(void))
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

__int64 *sub_40470B()
{
  return &program_invocation_short_name;
}

__int64 sub_40472A()
{
  return 0LL;
}

__int64 *sub_404761()
{
  __int64 *result; // rax

  if ( !byte_612368 )
  {
    while ( qword_612370 < (unsigned __int64)(&qword_611E48 - qword_611E40 - 1) )
      ((void (*)(void))qword_611E40[++qword_612370])();
    result = sub_40470B();
    byte_612368 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_4047B8()
{
  return sub_40472A();
}

unsigned __int64 __fastcall sub_4047C0(__int64 a1, unsigned __int64 a2)
{
  return *(int *)(a1 + 68) % a2;
}

bool __fastcall sub_4047D0(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 68) == *(_DWORD *)(a2 + 68);
}

char *__fastcall sub_4047E0(const char *a1)
{
  char *result; // rax

  result = (char *)a1;
  if ( !strcmp(a1, "-") )
    return dcgettext(0LL, "standard input", 5);
  return result;
}

void __fastcall sub_404820(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r12
  char *v7; // rbp
  int *v8; // rax

  if ( a1 + 1 > 1 )
  {
    if ( close(a1) )
    {
      v6 = sub_409510(4LL, a2, v2, v3, v4, v5);
      v7 = dcgettext(0LL, "closing %s (fd=%d)", 5);
      v8 = __errno_location();
      error(0, *v8, v7, v6, a1);
    }
  }
}

size_t __fastcall sub_4048A0(const void *a1, size_t a2)
{
  size_t result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  char *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx

  result = fwrite_unlocked(a1, 1uLL, a2, stdout);
  if ( a2 > result )
  {
    clearerr_unlocked(stdout);
    v7 = sub_409510(4LL, "standard output", v3, v4, v5, v6);
    v8 = dcgettext(0LL, "error writing %s", 5);
    v9 = (unsigned int)*__errno_location();
    error(1, v9, v8, v7);
    return sub_404920(1LL, v9, v10, v11);
  }
  return result;
}

__int64 __fastcall sub_404920(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r12d
  char *v14; // rbp
  char *v15; // rdi
  __int64 v16; // rax
  size_t v17; // rbp
  __int64 v18; // rbp
  char *v19; // rbx
  int *v20; // rax
  unsigned int v21; // [rsp+0h] [rbp-203Ch]
  char buf[8248]; // [rsp+4h] [rbp-2038h] BYREF

  result = 0LL;
  if ( a3 )
  {
    v7 = a3;
    while ( 1 )
    {
      v8 = sub_409780(a2, buf, 0x2000uLL);
      if ( !v8 )
        return 0xFFFFFFFFLL;
      if ( v8 == -1 )
        break;
      *a4 += v8;
      v13 = byte_612380;
      v14 = &buf[v8];
      v15 = buf;
      while ( 1 )
      {
        v16 = sub_40B730(v15, v13, v14 - v15);
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
              v21 = 0;
              sub_4048A0(v15, v17);
              return v21;
            }
          }
          return result;
        }
      }
    }
    v18 = sub_409510(4LL, a1, v9, v10, v11, v12);
    v19 = dcgettext(0LL, "error reading %s", 5);
    v20 = __errno_location();
    error(0, *v20, v19, v18);
    return 1LL;
  }
  return result;
}

__int64 __fastcall sub_404A20(char a1, const char *a2, int a3, unsigned __int64 a4)
{
  __int64 v6; // r12
  unsigned __int64 v8; // rbx
  size_t v9; // rdx
  __int64 v10; // rax
  size_t v11; // r14
  const char *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rbp
  char *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  char buf[8248]; // [rsp+10h] [rbp-2038h] BYREF

  v6 = 0LL;
  v8 = a4;
  while ( 1 )
  {
    v9 = 0x2000LL;
    if ( v8 <= 0x2000 )
      v9 = v8;
    v10 = sub_409780(a3, buf, v9);
    v11 = v10;
    if ( v10 == -1 )
      break;
    if ( !v10 )
      return v6;
    if ( a1 )
    {
      v12 = "";
      if ( !byte_612290 )
        v12 = "\n";
      __printf_chk(1LL, "%s==> %s <==\n", v12, a2);
      byte_612290 = 0;
    }
    v6 += v11;
    sub_4048A0(buf, v11);
    if ( a4 != -1LL )
    {
      v8 -= v11;
      if ( !v8 || a4 == -2LL )
        return v6;
    }
    a1 = 0;
  }
  v15 = __errno_location();
  if ( *v15 == 11 )
    return v6;
  v19 = sub_409510(4LL, a2, v13, v14, v16, v17);
  v20 = dcgettext(0LL, "error reading %s", 5);
  v21 = (unsigned int)*v15;
  error(1, v21, v20, v19);
  return sub_404B40(1LL, v21, v22, v23);
}

__int64 __fastcall sub_404B40(__int64 a1, int a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rbp
  char *v13; // rbx
  int *v14; // rax
  char v15[8232]; // [rsp+0h] [rbp-2028h] BYREF

  if ( !a3 )
    return 0LL;
  v5 = a3;
  while ( 1 )
  {
    v6 = sub_409780(a2, v15, 0x2000uLL);
    if ( !v6 )
      return 0xFFFFFFFFLL;
    if ( v6 == -1LL )
      break;
    *a4 += v6;
    if ( v6 > v5 )
    {
      sub_4048A0(&v15[v5], v6 - v5);
      return 0LL;
    }
    v5 -= v6;
    if ( !v5 )
      return 0LL;
  }
  v12 = sub_409510(4LL, a1, v7, v8, v9, v10);
  v13 = dcgettext(0LL, "error reading %s", 5);
  v14 = __errno_location();
  error(0, *v14, v13, v12);
  return 1LL;
}

__off_t __fastcall sub_404C20(int a1, __off_t a2, int a3, __int64 a4)
{
  __off_t result; // rax
  __int64 v7; // r13
  int *v8; // rbp
  __int64 v9; // rax
  const char *v10; // rsi
  __int64 v11; // rbx
  char *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF

  result = lseek(a1, a2, a3);
  if ( result < 0 )
  {
    v7 = sub_407A20(a2, &v13);
    v8 = __errno_location();
    v9 = sub_4095E0(0LL, 3LL, a4);
    if ( a3 == 1 )
      v10 = "%s: cannot seek to relative offset %s";
    else
      v10 = "%s: cannot seek to offset %s";
    v11 = v9;
    v12 = dcgettext(0LL, v10, 5);
    error(0, *v8, v12, v11, v7);
    exit(1);
  }
  return result;
}

__int64 __fastcall sub_404CD0(const char *a1, int a2, __int64 a3, __int64 a4, unsigned __int64 a5, _QWORD *a6)
{
  __int64 v6; // r15
  __int64 v7; // rbp
  __off_t v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // ebp
  size_t v17; // rdx
  char *v18; // rax
  __int64 v20; // rbp
  char *v21; // rbx
  int *v22; // rax
  unsigned __int64 v25; // [rsp+18h] [rbp-2040h]
  char s[8248]; // [rsp+20h] [rbp-2038h] BYREF

  v25 = a5;
  if ( !a3 )
    return 1LL;
  v6 = a3;
  v7 = (__int64)(v25 - a4) % 0x2000;
  if ( !v7 )
    v7 = 0x2000LL;
  v8 = v25 - v7;
  sub_404C20(a2, v25 - v7, 0, (__int64)a1);
  v9 = sub_409780(a2, s, v7);
  v14 = v9;
  if ( v9 != -1 )
  {
    *a6 = v8 + v9;
    if ( v9 )
    {
      v6 -= s[v9 - 1] != (unsigned __int8)byte_612380;
      goto LABEL_9;
    }
LABEL_6:
    while ( v8 != a4 )
    {
      v8 -= 0x2000LL;
      sub_404C20(a2, v8, 0, (__int64)a1);
      v15 = sub_409780(a2, s, 0x2000uLL);
      v14 = v15;
      if ( v15 == -1 )
        goto LABEL_19;
      *a6 = v8 + v15;
      if ( !v15 )
        return 1LL;
LABEL_9:
      v16 = byte_612380;
      v17 = v14;
      while ( 1 )
      {
        v18 = (char *)memrchr(s, v16, v17);
        if ( !v18 )
          break;
        v17 = v18 - s;
        if ( !v6 )
        {
          if ( v14 - 1 != v17 )
            sub_4048A0(v18 + 1, v14 - 1 - v17);
          *a6 += sub_404A20(0, a1, a2, v25 - v14 - v8);
          return 1LL;
        }
        --v6;
        if ( !v17 )
          goto LABEL_6;
      }
    }
    sub_404C20(a2, v8, 0, (__int64)a1);
    *a6 = sub_404A20(0, a1, a2, v25) + v8;
    return 1LL;
  }
LABEL_19:
  v20 = sub_409510(4LL, a1, v10, v11, v12, v13);
  v21 = dcgettext(0LL, "error reading %s", 5);
  v22 = __errno_location();
  error(0, *v22, v21, v20);
  return 0LL;
}

void __fastcall sub_404F00(__int64 a1, _QWORD *a2)
{
  char *v2; // rbx
  char *v3; // r13
  int v4; // eax
  bool v5; // bp
  __int64 v6; // rax
  __off_t v7; // rax
  int *v8; // rax
  int *v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r14
  char *v12; // rax
  struct stat v13; // [rsp-30h] [rbp-B8h] BYREF

  if ( *(_DWORD *)(a1 + 56) != -1 )
  {
    v2 = (char *)a1;
    v3 = sub_4047E0(*(const char **)a1);
    v4 = __fxstat(1, *(_DWORD *)(a1 + 56), &v13);
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
      if ( v13.st_size < v7 )
      {
        v11 = sub_4095E0(0LL, 3LL, v3);
        v12 = dcgettext(0LL, "%s: file truncated", 5);
        error(0, 0, v12, v11);
        sub_404C20(*(_DWORD *)(a1 + 56), 0LL, 0, (__int64)v3);
        *(_QWORD *)(a1 + 8) = 0LL;
      }
      else if ( v13.st_size == v7
             && *(_QWORD *)(a1 + 16) == v13.st_mtim.tv_sec
             && *(_DWORD *)(a1 + 24) == LODWORD(v13.st_mtim.tv_nsec) )
      {
        return;
      }
    }
    if ( byte_612381 )
      v5 = *a2 != a1;
    v6 = sub_404A20(v5, v3, *(_DWORD *)(a1 + 56), 0xFFFFFFFFFFFFFFFFLL);
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

__int64 __fastcall sub_405090(int a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // r12
  char *v10; // rax
  struct statfs v11; // [rsp+0h] [rbp-98h] BYREF

  if ( !fstatfs(a1, &v11) )
  {
    if ( v11.f_type != 352400198 )
    {
      if ( v11.f_type > 352400198 )
      {
        if ( v11.f_type != 1650746742 )
        {
          if ( v11.f_type > 1650746742 )
          {
            if ( v11.f_type != 1936880249 )
            {
              if ( v11.f_type > 1936880249 )
              {
                if ( v11.f_type != 3380511080LL )
                {
                  if ( v11.f_type > 3380511080LL )
                  {
                    if ( v11.f_type != 4076150800LL )
                    {
                      if ( v11.f_type > 4076150800LL )
                      {
                        if ( v11.f_type != 4185718668LL )
                        {
                          LOBYTE(v2) = v11.f_type != 4187351113LL;
                          return v2;
                        }
                      }
                      else if ( v11.f_type != 3405662737LL )
                      {
                        LOBYTE(v2) = v11.f_type != 3730735588LL;
                        return v2;
                      }
                    }
                  }
                  else if ( v11.f_type != 2435016766LL )
                  {
                    if ( v11.f_type > 2435016766LL )
                    {
                      if ( v11.f_type != 2508478710LL )
                      {
                        LOBYTE(v2) = v11.f_type != 2881100148LL;
                        return v2;
                      }
                    }
                    else if ( v11.f_type != 1953653091 )
                    {
                      LOBYTE(v2) = v11.f_type != 2240043254LL;
                      return v2;
                    }
                  }
                }
              }
              else if ( v11.f_type != 1684300152 )
              {
                if ( v11.f_type > 1684300152 )
                {
                  if ( v11.f_type != 1853056627 )
                  {
                    if ( v11.f_type > 1853056627 )
                    {
                      if ( v11.f_type != 1935894131 )
                      {
                        LOBYTE(v2) = v11.f_type != 1936814952;
                        return v2;
                      }
                    }
                    else if ( v11.f_type != 1733912937 )
                    {
                      LOBYTE(v2) = v11.f_type != 1746473250;
                      return v2;
                    }
                  }
                }
                else if ( v11.f_type != 1650812274 )
                {
                  if ( v11.f_type <= 1650812274 )
                  {
                    LOBYTE(v2) = v11.f_type != 1650812272;
                    return v2;
                  }
                  if ( v11.f_type != 1667723888 )
                  {
                    LOBYTE(v2) = v11.f_type != 1684170528;
                    return v2;
                  }
                }
              }
            }
          }
          else if ( v11.f_type != 1161678120 )
          {
            if ( v11.f_type > 1161678120 )
            {
              if ( v11.f_type != 1410924800 )
              {
                if ( v11.f_type > 1410924800 )
                {
                  if ( v11.f_type != 1481003842 )
                  {
                    if ( v11.f_type > 1481003842 )
                    {
                      if ( v11.f_type != 1513908720 )
                      {
                        LOBYTE(v2) = v11.f_type != 1634035564;
                        return v2;
                      }
                    }
                    else if ( v11.f_type != 1448756819 )
                    {
                      LOBYTE(v2) = v11.f_type != 1479104553;
                      return v2;
                    }
                  }
                }
                else if ( v11.f_type != 1397114950 )
                {
                  if ( v11.f_type > 1397114950 )
                  {
                    if ( v11.f_type != 1397118030 )
                    {
                      LOBYTE(v2) = v11.f_type != 1397703499;
                      return v2;
                    }
                  }
                  else if ( v11.f_type != 1382369651 )
                  {
                    LOBYTE(v2) = v11.f_type != 1397109069;
                    return v2;
                  }
                }
              }
            }
            else if ( v11.f_type != 732765674 )
            {
              if ( v11.f_type > 732765674 )
              {
                if ( v11.f_type != 1111905073 )
                {
                  if ( v11.f_type > 1111905073 )
                  {
                    if ( v11.f_type != 1112100429 )
                    {
                      LOBYTE(v2) = v11.f_type != 1128357203;
                      return v2;
                    }
                  }
                  else if ( v11.f_type != 801189825 )
                  {
                    LOBYTE(v2) = v11.f_type != 827541066;
                    return v2;
                  }
                }
              }
              else if ( v11.f_type != 464386766 )
              {
                if ( v11.f_type <= 464386766 )
                {
                  LOBYTE(v2) = v11.f_type != 427819522;
                  return v2;
                }
                if ( v11.f_type != 604313861 )
                {
                  LOBYTE(v2) = v11.f_type != 684539205;
                  return v2;
                }
              }
            }
          }
        }
      }
      else if ( v11.f_type != 29366 )
      {
        if ( v11.f_type > 29366 )
        {
          if ( v11.f_type != 4278867 )
          {
            if ( v11.f_type > 4278867 )
            {
              if ( v11.f_type > 19920823 )
              {
                if ( v11.f_type != 195894762 )
                {
                  if ( v11.f_type > 195894762 )
                  {
                    if ( v11.f_type != 288389204 )
                    {
                      LOBYTE(v2) = v11.f_type != 325456742;
                      return v2;
                    }
                  }
                  else if ( v11.f_type != 124082209 )
                  {
                    LOBYTE(v2) = v11.f_type != 151263540;
                    return v2;
                  }
                }
              }
              else if ( v11.f_type < 19920820 && v11.f_type != 16914836 )
              {
                if ( v11.f_type <= 16914836 )
                {
                  LOBYTE(v2) = v11.f_type != 12648430;
                  return v2;
                }
                if ( v11.f_type != 16914839 )
                {
                  LOBYTE(v2) = v11.f_type != 19911021;
                  return v2;
                }
              }
            }
            else if ( v11.f_type != 44543 )
            {
              if ( v11.f_type > 44543 )
              {
                if ( v11.f_type != 61791 )
                {
                  if ( v11.f_type > 61791 )
                  {
                    if ( v11.f_type != 72020 )
                    {
                      LOBYTE(v2) = v11.f_type != 2613483;
                      return v2;
                    }
                  }
                  else if ( v11.f_type != 61265 )
                  {
                    LOBYTE(v2) = v11.f_type != 61267;
                    return v2;
                  }
                }
              }
              else
              {
                if ( v11.f_type > 40866 )
                {
                  LOBYTE(v2) = v11.f_type != 44533;
                  return v2;
                }
                if ( v11.f_type < 40864 )
                {
                  LOBYTE(v2) = v11.f_type != 38496;
                  return v2;
                }
              }
            }
          }
        }
        else if ( v11.f_type != 13364 )
        {
          if ( v11.f_type > 13364 )
          {
            if ( v11.f_type != 18475 )
            {
              if ( v11.f_type > 18475 )
              {
                if ( v11.f_type != 19802 )
                {
                  if ( v11.f_type > 19802 )
                  {
                    if ( v11.f_type != 24053 )
                    {
                      LOBYTE(v2) = v11.f_type != 29301;
                      return v2;
                    }
                  }
                  else if ( v11.f_type != 18520 )
                  {
                    LOBYTE(v2) = v11.f_type != 19780;
                    return v2;
                  }
                }
              }
              else if ( v11.f_type != 16388 )
              {
                if ( v11.f_type <= 16388 )
                {
                  LOBYTE(v2) = v11.f_type != 0x4000;
                  return v2;
                }
                if ( v11.f_type != 16390 )
                {
                  LOBYTE(v2) = v11.f_type != 16964;
                  return v2;
                }
              }
            }
          }
          else if ( v11.f_type != 4989 )
          {
            if ( v11.f_type > 4989 )
            {
              if ( v11.f_type != 7377 )
              {
                if ( v11.f_type > 7377 )
                {
                  if ( v11.f_type != 9320 )
                  {
                    LOBYTE(v2) = v11.f_type != 9336;
                    return v2;
                  }
                }
                else if ( v11.f_type != 4991 )
                {
                  LOBYTE(v2) = v11.f_type != 5007;
                  return v2;
                }
              }
            }
            else if ( v11.f_type != 391 )
            {
              if ( v11.f_type <= 391 )
              {
                LOBYTE(v2) = v11.f_type != 47;
                return v2;
              }
              if ( v11.f_type != 1984 )
              {
                LOBYTE(v2) = v11.f_type != 4979;
                return v2;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  v2 = 1;
  v5 = __errno_location();
  if ( *v5 == 38 )
    return v2;
  v9 = sub_409510(4LL, a2, v3, v4, v6, v7);
  v10 = dcgettext(0LL, "cannot determine location of %s. reverting to polling", 5);
  error(0, *v5, v10, v9);
  return 1LL;
}

void __fastcall sub_4056E0(__int64 a1, char a2, int a3, __int64 a4, int a5, int a6)
{
  int v6; // r13d
  int v8; // r14d
  bool v9; // zf
  _BOOL4 v10; // ebp
  unsigned int v11; // r12d
  int v12; // eax
  char v13; // r15
  char v14; // al
  int *v15; // rax
  char v16; // r15
  const char *v17; // rbp
  int *v18; // r13
  int v19; // eax
  char *v20; // rax
  char *v21; // rax
  char *v22; // rax
  char v23; // al
  int v24; // eax
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  const char *v30; // rsi
  __int64 v31; // r14
  char *v32; // rax
  __time_t tv_sec; // rax
  const char *v34; // rdi
  __syscall_slong_t tv_nsec; // rax
  __dev_t st_dev; // rax
  char *v37; // rax
  char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbp
  char *v44; // rax
  char *v45; // rax
  const char *v46; // rax
  const char *v47; // rdi
  char *v48; // rax
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r14
  char *v55; // rax
  char *v56; // rax
  const char *v57; // r13
  char *v58; // rax
  char *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbp
  char *v65; // rax
  const char *v66; // rdi
  char *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbp
  char *v73; // rax
  char *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rbp
  char *v80; // rax
  char *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  char v86; // [rsp+7h] [rbp-D1h]
  struct stat stat_buf; // [rsp+10h] [rbp-C8h] BYREF

  LOBYTE(v6) = a2;
  v8 = *(_DWORD *)(a1 + 60);
  v9 = strcmp(*(const char **)a1, "-") == 0;
  v86 = *(_BYTE *)(a1 + 54);
  v10 = !v9;
  if ( v9 )
  {
    v12 = *(_DWORD *)(a1 + 60);
    v11 = 0;
  }
  else
  {
    v11 = sub_406780(*(_QWORD *)a1, (unsigned __int8)(a2 == 0) << 11, a3, *(unsigned __int8 *)(a1 + 54), a5, a6);
    v12 = *(_DWORD *)(a1 + 60);
  }
  if ( (*(_DWORD *)(a1 + 56) == -1) == (v12 == 0) )
    __assert_fail("valid_file_spec (f)", "src/tail.c", 0x3C7u, "recheck");
  v13 = byte_612386;
  v14 = byte_612378;
  if ( byte_612386 )
  {
    if ( v11 == -1 )
    {
      *(_BYTE *)(a1 + 54) = 0;
      v17 = *(const char **)a1;
      if ( v14 )
      {
        *(_DWORD *)(a1 + 60) = *__errno_location();
        goto LABEL_28;
      }
      if ( !__lxstat(1, *(const char **)a1, &stat_buf) && (stat_buf.st_mode & 0xF000) == 40960 )
        goto LABEL_53;
LABEL_7:
      v15 = __errno_location();
      v16 = *(_BYTE *)(a1 + 54);
      v17 = *(const char **)a1;
      v18 = v15;
      v19 = *v15;
      *(_DWORD *)(a1 + 60) = v19;
      if ( v16 )
      {
        if ( v19 != v8 )
        {
          v45 = sub_4047E0(v17);
          v46 = (const char *)sub_4095E0(0LL, 3LL, v45);
          error(0, *v18, "%s", v46);
          v17 = *(const char **)a1;
        }
        goto LABEL_10;
      }
LABEL_28:
      if ( v86 )
      {
        v38 = sub_4047E0(v17);
        v43 = sub_409510(4LL, v38, v39, v40, v41, v42);
        v44 = dcgettext(0LL, "%s has become inaccessible", 5);
        error(0, *(_DWORD *)(a1 + 60), v44, v43);
        v17 = *(const char **)a1;
      }
      goto LABEL_10;
    }
    *(_BYTE *)(a1 + 54) = 1;
    if ( !v14 && !__lxstat(1, *(const char **)a1, &stat_buf) && (stat_buf.st_mode & 0xF000) == 40960 )
      goto LABEL_53;
  }
  else
  {
    *(_BYTE *)(a1 + 54) = 1;
    if ( !v14 && !__lxstat(1, *(const char **)a1, &stat_buf) && (stat_buf.st_mode & 0xF000) == 40960 )
    {
LABEL_53:
      *(_DWORD *)(a1 + 60) = -1;
      v66 = *(const char **)a1;
      *(_BYTE *)(a1 + 52) = 1;
      v67 = sub_4047E0(v66);
      v72 = sub_409510(4LL, v67, v68, v69, v70, v71);
      v73 = dcgettext(0LL, "%s has been replaced with an untailable symbolic link", 5);
      error(0, 0, v73, v72);
      v17 = *(const char **)a1;
      goto LABEL_10;
    }
    if ( v11 == -1 )
      goto LABEL_7;
  }
  if ( __fxstat(1, v11, &stat_buf) < 0 )
    goto LABEL_7;
  if ( (((stat_buf.st_mode & 0xF000) - 4096) & 0xFFFFE000) != 0 && (stat_buf.st_mode & 0xB000) != 0x8000 )
  {
    *(_DWORD *)(a1 + 60) = -1;
    *(_BYTE *)(a1 + 54) = 0;
    if ( v13 && dword_6122A8 == 1 )
    {
      v17 = *(const char **)a1;
      *(_BYTE *)(a1 + 52) = 0;
      if ( v86 )
      {
        v57 = "";
      }
      else
      {
        v57 = "";
        if ( v8 == -1 )
          goto LABEL_10;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 52) = 1;
      if ( !v86 && v8 == -1 )
        goto LABEL_50;
      v58 = dcgettext(0LL, "; giving up on this name", 5);
      v17 = *(const char **)a1;
      v57 = v58;
    }
    v59 = sub_4047E0(v17);
    v64 = sub_409510(4LL, v59, v60, v61, v62, v63);
    v65 = dcgettext(0LL, "%s has been replaced with an untailable file%s", 5);
    error(0, 0, v65, v64, v57);
LABEL_50:
    v17 = *(const char **)a1;
LABEL_10:
    v20 = sub_4047E0(v17);
    sub_404820(v11, (__int64)v20);
    v21 = sub_4047E0(*(const char **)a1);
    sub_404820(*(_DWORD *)(a1 + 56), (__int64)v21);
    *(_DWORD *)(a1 + 56) = -1;
    return;
  }
  v22 = sub_4047E0(*(const char **)a1);
  v23 = sub_405090(v11, (__int64)v22);
  *(_BYTE *)(a1 + 53) = v23;
  if ( v23 && !byte_612378 )
  {
    *(_DWORD *)(a1 + 60) = -1;
    v74 = sub_4047E0(*(const char **)a1);
    v79 = sub_409510(4LL, v74, v75, v76, v77, v78);
    v80 = dcgettext(0LL, "%s has been replaced with an untailable remote file", 5);
    error(0, 0, v80, v79);
    v17 = *(const char **)a1;
    *(_WORD *)(a1 + 52) = 257;
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 60) = 0;
  v24 = *(_DWORD *)(a1 + 56);
  if ( (v8 & 0xFFFFFFFD) != 0 )
  {
    if ( v24 != -1 )
      __assert_fail("f->fd == -1", "src/tail.c", 0x414u, "recheck");
    v25 = sub_4047E0(*(const char **)a1);
    v30 = "%s has become accessible";
    v31 = sub_409510(4LL, v25, v26, v27, v28, v29);
    goto LABEL_22;
  }
  v47 = *(const char **)a1;
  if ( v24 == -1 )
  {
    v81 = sub_4047E0(v47);
    v30 = "%s has appeared;  following new file";
    v31 = sub_409510(4LL, v81, v82, v83, v84, v85);
LABEL_22:
    v32 = dcgettext(0LL, v30, 5);
    error(0, 0, v32, v31);
    goto LABEL_23;
  }
  if ( *(_QWORD *)(a1 + 40) == stat_buf.st_ino && *(_QWORD *)(a1 + 32) == stat_buf.st_dev )
  {
    v48 = sub_4047E0(v47);
    sub_404820(v11, (__int64)v48);
    return;
  }
  v49 = sub_4047E0(v47);
  v54 = sub_409510(4LL, v49, v50, v51, v52, v53);
  v55 = dcgettext(0LL, "%s has been replaced;  following new file", 5);
  error(0, 0, v55, v54);
  v56 = sub_4047E0(*(const char **)a1);
  sub_404820(*(_DWORD *)(a1 + 56), (__int64)v56);
LABEL_23:
  v6 = (unsigned __int8)v6;
  *(_DWORD *)(a1 + 56) = v11;
  if ( !v10 )
    v6 = -1;
  tv_sec = stat_buf.st_mtim.tv_sec;
  v34 = *(const char **)a1;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = tv_sec;
  tv_nsec = stat_buf.st_mtim.tv_nsec;
  *(_DWORD *)(a1 + 64) = v6;
  *(_QWORD *)(a1 + 24) = tv_nsec;
  st_dev = stat_buf.st_dev;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 32) = st_dev;
  *(_QWORD *)(a1 + 40) = stat_buf.st_ino;
  *(_DWORD *)(a1 + 48) = stat_buf.st_mode;
  v37 = sub_4047E0(v34);
  sub_404C20(v11, 0LL, 0, (__int64)v37);
}

noreturn void __fastcall  sub_405D10(int status)
{
  __int64 v1; // rbp
  char *v2; // rax
  char *v3; // rax
  char *v4; // rax
  FILE *v5; // rbp
  char *v6; // rax
  FILE *v7; // rbp
  char *v8; // rax
  FILE *v9; // rbp
  char *v10; // rax
  FILE *v11; // rbp
  char *v12; // rax
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
  __int64 *v28; // rax
  char *v29; // rbp
  char *v30; // rax
  char *v31; // rax
  const char *v32; // r12
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  __int64 v39[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_6123A0;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE]...\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = dcgettext(
         0LL,
         "Print the last %d lines of each FILE to standard output.\n"
         "With more than one FILE, precede each with a header giving the file name.\n",
         5);
  __printf_chk(1LL, v4, 10LL);
  v5 = stdout;
  v6 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(
          0LL,
          "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n"
          "                             output starting with byte NUM of each file\n",
          5);
  fputs_unlocked(v10, v9);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "  -f, --follow[={name|descriptor}]\n"
          "                           output appended data as the file grows;\n"
          "                             an absent option argument means 'descriptor'\n"
          "  -F                       same as --follow=name --retry\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = dcgettext(
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
  __printf_chk(1LL, v13, 10LL, 5LL);
  v14 = stdout;
  v15 = dcgettext(
          0LL,
          "      --pid=PID            with -f, terminate after process ID, PID dies\n"
          "  -q, --quiet, --silent    never output headers giving file names\n"
          "      --retry              keep trying to open a file if it is inaccessible\n",
          5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(
          0LL,
          "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n"
          "                             (default 1.0) between iterations;\n"
          "                             with inotify and --pid=P, check process P at\n"
          "                             least once every N seconds\n"
          "  -v, --verbose            always output headers giving file names\n",
          5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(0LL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v21, v20);
  v22 = stdout;
  v23 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v23, v22);
  v24 = stdout;
  v25 = dcgettext(
          0LL,
          "\n"
          "NUM may have a multiplier suffix:\n"
          "b 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\n"
          "GB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n"
          "\n",
          5);
  fputs_unlocked(v25, v24);
  v26 = stdout;
  v27 = dcgettext(
          0LL,
          "With --follow (-f), tail defaults to following the file descriptor, which\n"
          "means that even if a tail'ed file is renamed, tail will continue to track\n"
          "its end.  This default behavior is not desirable when you really want to\n"
          "track the actual name of the file, not the file descriptor (e.g., log\n"
          "rotation).  Use --follow=name in that case.  That causes tail to track the\n"
          "named file in a way that accommodates renaming, removal and creation.\n",
          5);
  fputs_unlocked(v27, v26);
  v39[0] = (__int64)"[";
  v28 = v39;
  v39[1] = (__int64)"test invocation";
  v39[2] = (__int64)"coreutils";
  v39[3] = (__int64)"Multi-call invocation";
  v39[4] = (__int64)"sha224sum";
  v39[5] = (__int64)"sha2 utilities";
  v39[6] = (__int64)"sha256sum";
  v39[7] = (__int64)"sha2 utilities";
  v39[8] = (__int64)"sha384sum";
  v39[9] = (__int64)"sha2 utilities";
  v39[10] = (__int64)"sha512sum";
  v39[11] = (__int64)"sha2 utilities";
  v39[12] = 0LL;
  v39[13] = 0LL;
  do
    v28 += 2;
  while ( *v28 && strcmp("tail", (const char *)*v28) );
  v29 = (char *)v28[1];
  if ( v29 )
  {
    v30 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v30, &unk_40C375, "https://www.gnu.org/software/coreutils/");
    v31 = setlocale(5, 0LL);
    if ( !v31 || !strncmp(v31, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v35 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v35, &unk_40C375, "https://www.gnu.org/software/coreutils/");
    v36 = setlocale(5, 0LL);
    if ( !v36 || !strncmp(v36, "en_", 3uLL) )
    {
      v29 = "tail";
      v37 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      v32 = "Multi-call invocation" + 10;
      __printf_chk(1LL, v37, "https://www.gnu.org/software/coreutils/", "tail");
LABEL_12:
      v34 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
      __printf_chk(1LL, v34, v29, v32);
LABEL_3:
      exit(status);
    }
    v29 = "tail";
  }
  v38 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v38, "tail");
LABEL_10:
  v32 = "Multi-call invocation" + 10;
  v33 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v33, "https://www.gnu.org/software/coreutils/", "tail");
  if ( v29 != "tail" )
    v32 = "";
  goto LABEL_12;
}

noreturn void  sub_406170()
{
  sub_405D10(1);
}

__int64 __fastcall sub_406180(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_4062A0(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_409740(1LL, a1);
  v5 = sub_409430(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_406320(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
  char *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 i; // r12
  const char *v11; // rax
  const char *v12; // rax
  char *IO_write_ptr; // rax

  v3 = 0LL;
  v6 = stderr;
  v7 = dcgettext(0LL, "Valid arguments are:", 5);
  v8 = (__int64)v6;
  v9 = 0LL;
  fputs_unlocked(v7, (FILE *)v8);
  for ( i = *a1; i; i = a1[v9] )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v8 = (__int64)a2;
        if ( !memcmp(v3, a2, a3) )
          break;
      }
      ++v9;
      v3 = a2;
      a2 += a3;
      v11 = (const char *)sub_409760(i, v8);
      v8 = 1LL;
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_409760(i, v8);
    v8 = 1LL;
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

__int64 __fastcall sub_406440(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_406180(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_4062A0(a1, (__int64)a2, result);
    sub_406320((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_4064B0(void *s1, __int64 *a2, char *a3, size_t a4)
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

double __fastcall sub_406500(char *nptr, char **endptr)
{
  if ( !loc )
    loc = newlocale(8127, "C", 0LL);
  if ( loc )
    return strtod_l(nptr, endptr, loc);
  if ( endptr )
    *endptr = nptr;
  return 0.0;
}

__int64 sub_406590()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_4095B0();
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

__int64 __fastcall sub_406630(_BYTE *a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rdx

  v1 = *a1 == 47;
  v2 = sub_4066F0(a1);
  if ( v2 - (__int64)a1 <= v1 )
    return v2 - (_QWORD)a1;
  v3 = v2 - (_QWORD)a1 - 1;
  if ( *(_BYTE *)(v2 - 1) != 47 )
    return v2 - (_QWORD)a1;
  while ( v1 != v3 && a1[v3 - 1] == 47 )
    --v3;
  return v3;
}

_BYTE *__fastcall sub_406690(_BYTE *src)
{
  __int64 v1; // rbx
  _BYTE *v2; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // rax

  v1 = sub_406630(src);
  v2 = malloc(v1 + (v1 == 0) + 1);
  v3 = v2;
  if ( v2 )
  {
    v4 = memcpy(v2, src, v1);
    v3 = v4;
    if ( !v1 )
    {
      *v4 = 46;
      v1 = 1LL;
    }
    v4[v1] = 0;
  }
  return v3;
}

_BYTE *__fastcall sub_4066F0(_BYTE *a1)
{
  char v1; // dl
  _BYTE *result; // rax
  _BYTE *v3; // rcx
  char v4; // si

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

size_t __fastcall sub_406750(const char *a1)
{
  size_t result; // rax
  size_t v2; // rdx

  result = strlen(a1);
  if ( result > 1 )
  {
    do
    {
      v2 = result - 1;
      if ( a1[result - 1] != 47 )
        break;
      --result;
    }
    while ( v2 != 1 );
  }
  return result;
}

__int64 __fastcall sub_406780(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = 0LL;
  if ( (a2 & 0x40) != 0 )
    v3 = a3;
  v4 = open(a1, a2, v3);
  return sub_4097E0(v4);
}

unsigned __int64 __fastcall sub_4067D0(unsigned __int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx

  v1 = 10LL;
  if ( a1 >= 0xA )
    v1 = a1;
  v2 = v1 | 1;
  if ( v2 != -1LL )
  {
    while ( 1 )
    {
      v3 = v2 % 3;
      if ( v2 <= 9 )
        goto LABEL_9;
      if ( v2 % 3 )
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

unsigned __int64 __fastcall sub_406870(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_406880(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_406890(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_406890(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_4068C0(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_406890(a1, a2);
  *a3 = v7;
  v8 = v7->m128i_i64[0];
  if ( v7->m128i_i64[0] )
  {
    v9 = v7;
    if ( v8 != a2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(a2) )
      {
        v10 = (__int64 *)v9->m128i_i64[1];
        if ( v10 )
        {
          v8 = *v10;
          if ( a2 != *v10 )
          {
            while ( !(*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(a2) )
            {
              v9 = (__m128i *)v9->m128i_i64[1];
              v10 = (__int64 *)v9->m128i_i64[1];
              if ( !v10 )
                return 0LL;
              v8 = *v10;
              if ( *v10 == a2 )
                goto LABEL_11;
            }
            v10 = (__int64 *)v9->m128i_i64[1];
            v8 = *v10;
          }
LABEL_11:
          if ( a4 )
          {
            v9->m128i_i64[1] = v10[1];
            *v10 = 0LL;
            v10[1] = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v10;
          }
          return v8;
        }
        return 0LL;
      }
      v8 = v9->m128i_i64[0];
    }
    if ( a4 )
    {
      v12 = (const __m128i *)v9->m128i_i64[1];
      if ( v12 )
      {
        *v9 = _mm_loadu_si128(v12);
        v12->m128i_i64[0] = 0LL;
        v12->m128i_i64[1] = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v12;
        return v8;
      }
      v9->m128i_i64[0] = 0LL;
    }
    return v8;
  }
  return 0LL;
}

__int64 __fastcall sub_4069E0(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_40D880 )
    return 1LL;
  v2 = v1[2];
  if ( v2 <= 0.1
    || v2 >= 0.89999998
    || v1[3] <= 1.1
    || *v1 < 0.0
    || (v3 = *v1 + 0.1, v4 = v1[1], v4 <= v3)
    || v4 > 1.0
    || (result = 1LL, v2 <= v3) )
  {
    *a1 = (float *)&unk_40D880;
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_406A60(__int64 a1, __int64 a2, char a3)
{
  __int64 *v4; // r12
  __int64 v5; // r15
  __int64 *v6; // rbx
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx

  v4 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    return 1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = (__int64 *)v4[1];
        if ( v6 )
        {
          do
          {
            while ( 1 )
            {
              v7 = *v6;
              v8 = (_QWORD *)sub_406890(a1, *v6);
              v9 = (__int64 *)v6[1];
              if ( !*v8 )
                break;
              v6[1] = v8[1];
              v8[1] = v6;
              v6 = v9;
              if ( !v9 )
                goto LABEL_10;
            }
            *v8 = v7;
            ++*(_QWORD *)(a1 + 24);
            *v6 = 0LL;
            v6[1] = *(_QWORD *)(a1 + 72);
            *(_QWORD *)(a1 + 72) = v6;
            v6 = v9;
          }
          while ( v9 );
LABEL_10:
          v5 = *v4;
        }
        v4[1] = 0LL;
        if ( !a3 )
          break;
      }
      v4 += 2;
      if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
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
    *v4 = 0LL;
    v4 += 2;
    --*(_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 8) <= (unsigned __int64)v4 )
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

__int64 __fastcall sub_406CA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r13
  _QWORD *v7; // rsi
  unsigned __int64 i; // rdi
  __int64 v9; // rax
  unsigned __int64 j; // rdx
  double v11; // xmm0_8
  double v12; // xmm1_8

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD **)a1;
  for ( i = *(_QWORD *)(a1 + 8); (unsigned __int64)v7 < i; v7 += 2 )
  {
    while ( !*v7 )
    {
      v7 += 2;
      if ( (unsigned __int64)v7 >= i )
        goto LABEL_10;
    }
    v9 = v7[1];
    for ( j = 1LL; v9; ++j )
      v9 = *(_QWORD *)(v9 + 8);
    if ( v3 < j )
      v3 = j;
  }
LABEL_10:
  __fprintf_chk(a2, 1LL, "# entries:         %lu\n", v4);
  __fprintf_chk(a2, 1LL, "# buckets:         %lu\n", v5);
  if ( v6 < 0 )
  {
    v11 = ((double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)) + (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)))
        * 100.0;
    if ( v5 >= 0 )
      goto LABEL_12;
LABEL_15:
    v12 = (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1)) + (double)(int)(v5 & 1 | ((unsigned __int64)v5 >> 1));
    goto LABEL_13;
  }
  v11 = (double)(int)v6 * 100.0;
  if ( v5 < 0 )
    goto LABEL_15;
LABEL_12:
  v12 = (double)(int)v5;
LABEL_13:
  __fprintf_chk(a2, 1LL, "# buckets used:    %lu (%f%%)\n", v6, v11 / v12);
  return __fprintf_chk(a2, 1LL, "max bucket length: %lu\n", v3);
}

__int64 __fastcall sub_406DF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_406890(a1, a2);
  v4 = *v3;
  if ( !*v3 )
    return 0LL;
  v5 = v3;
  while ( v4 != v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(a1 + 56))(v2) )
      return *v5;
    v5 = (_QWORD *)v5[1];
    if ( !v5 )
      return 0LL;
    v4 = *v5;
  }
  return v2;
}

__int64 __fastcall sub_406EA0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_406890(a1, a2);
  v3 = v2;
  while ( 1 )
  {
    v4 = *v3;
    v3 = (_QWORD *)v3[1];
    if ( v4 == a2 )
      break;
    if ( !v3 )
      goto LABEL_7;
  }
  if ( v3 )
    return *v3;
LABEL_7:
  while ( 1 )
  {
    v2 += 2;
    if ( *(_QWORD *)(a1 + 8) <= (unsigned __int64)v2 )
      break;
    result = *v2;
    if ( *v2 )
      return result;
  }
  return 0LL;
}

__int64 __fastcall sub_406F80(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 *v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 *v9; // rbx

  v3 = *(__int64 **)a1;
  if ( *(_QWORD *)(a1 + 8) <= *(_QWORD *)a1 )
    return 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = *v3;
    if ( *v3 )
      break;
LABEL_4:
    v3 += 2;
    if ( *(_QWORD *)(a1 + 8) <= (unsigned __int64)v3 )
      return v6;
  }
  v9 = v3;
  while ( a2(v7, a3) )
  {
    v9 = (__int64 *)v9[1];
    ++v6;
    if ( !v9 )
      goto LABEL_4;
    v7 = *v9;
  }
  return v6;
}

_QWORD *__fastcall sub_407060(
        __int64 a1,
        __int64 a2,
        unsigned __int64 (__fastcall *a3)(__int64 a1, unsigned __int64 a2),
        bool (__fastcall *a4)(__int64 a1, __int64 a2),
        __int64 a5)
{
  bool (__fastcall *v6)(__int64, __int64); // r13
  unsigned __int64 (__fastcall *v7)(__int64, unsigned __int64); // r12
  char *v9; // rax
  _QWORD *v10; // rbx
  float **v11; // rdi
  unsigned __int64 v12; // rbp
  char *v13; // rax
  void *v14; // rdi
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4

  v6 = a4;
  v7 = a3;
  if ( !a3 )
    v7 = sub_406870;
  if ( !a4 )
    v6 = sub_406880;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_4069E0(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_4067D0(a1);
        if ( (v12 & 0x1000000000000000LL) == 0 && !(v12 >> 61) )
        {
          v10[2] = v12;
          if ( v12 )
          {
            v13 = (char *)calloc(v12, 0x10uLL);
            *v10 = v13;
            if ( v13 )
            {
              v10[3] = 0LL;
              v10[4] = 0LL;
              v10[1] = &v13[16 * v12];
              v10[6] = v7;
              v10[7] = v6;
              v10[8] = a5;
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
      if ( a1 < 0 )
        goto LABEL_23;
    }
    else
    {
      *((_QWORD *)v9 + 5) = &unk_40D880;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_4069E0(v11) )
        goto LABEL_14;
      if ( a1 < 0 )
      {
LABEL_23:
        v17 = (float)(a1 & 1 | (unsigned int)((unsigned __int64)a1 >> 1))
            + (float)(a1 & 1 | (unsigned int)((unsigned __int64)a1 >> 1));
        goto LABEL_19;
      }
    }
    v17 = (float)(int)a1;
LABEL_19:
    v18 = v17 / v16;
    if ( v18 >= 1.8446744e19 )
      goto LABEL_14;
    if ( v18 < 9.223372e18 )
      a1 = (unsigned int)(int)v18;
    else
      a1 = (unsigned int)(int)(float)(v18 - 9.223372e18) ^ 0x8000000000000000LL;
    goto LABEL_9;
  }
  return v10;
}

void __fastcall sub_4071F0(_QWORD *a1)
{
  _QWORD *v1; // r12
  _QWORD *v2; // rbx
  void (__fastcall *v3)(_QWORD); // rax
  _QWORD *v4; // rdx
  __int64 v5; // rcx

  v1 = (_QWORD *)*a1;
  if ( *a1 < a1[1] )
  {
    do
    {
      while ( !*v1 )
      {
        v1 += 2;
        if ( a1[1] <= (unsigned __int64)v1 )
          goto LABEL_12;
      }
      v2 = (_QWORD *)v1[1];
      v3 = (void (__fastcall *)(_QWORD))a1[8];
      if ( v2 )
      {
        do
        {
          if ( v3 )
          {
            v3(*v2);
            v3 = (void (__fastcall *)(_QWORD))a1[8];
          }
          v4 = (_QWORD *)v2[1];
          v5 = a1[9];
          *v2 = 0LL;
          v2[1] = v5;
          a1[9] = v2;
          v2 = v4;
        }
        while ( v4 );
      }
      if ( v3 )
        v3(*v1);
      *v1 = 0LL;
      v1 += 2;
      *(v1 - 1) = 0LL;
    }
    while ( a1[1] > (unsigned __int64)v1 );
  }
LABEL_12:
  a1[3] = 0LL;
  a1[4] = 0LL;
}

void __fastcall sub_4072A0(_QWORD *ptr)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v2 = (_QWORD *)*ptr;
  v3 = ptr[1];
  if ( ptr[8] && ptr[4] )
  {
    if ( (unsigned __int64)v2 >= v3 )
      goto LABEL_15;
    do
    {
      while ( !*v2 )
      {
        v2 += 2;
        if ( v3 <= (unsigned __int64)v2 )
          goto LABEL_10;
      }
      v4 = v2;
      do
      {
        ((void (*)(void))ptr[8])();
        v4 = (_QWORD *)v4[1];
      }
      while ( v4 );
      v3 = ptr[1];
      v2 += 2;
    }
    while ( v3 > (unsigned __int64)v2 );
LABEL_10:
    v2 = (_QWORD *)*ptr;
  }
  if ( (unsigned __int64)v2 < v3 )
  {
    do
    {
      v5 = (_QWORD *)v2[1];
      if ( v5 )
      {
        do
        {
          v6 = (_QWORD *)v5[1];
          free(v5);
          v5 = v6;
        }
        while ( v6 );
      }
      v2 += 2;
    }
    while ( ptr[1] > (unsigned __int64)v2 );
  }
LABEL_15:
  v7 = (_QWORD *)ptr[9];
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)v7[1];
      free(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  free((void *)*ptr);
  free(ptr);
}

__int64 __fastcall sub_407380(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rbx
  _BOOL8 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  unsigned __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( a2 < 0 )
      v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
         + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
    else
      v3 = (float)(int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(int)v4;
    else
      a2 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_4067D0(a2);
  v6 = v5 >> 61 != 0;
  if ( (v5 & 0x1000000000000000LL) != 0 )
    v6 = 1LL;
  if ( !v5 || v6 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v5 )
    return 1LL;
  v7 = calloc(v5, 0x10uLL);
  ptr = v7;
  if ( !v7 )
    return 0;
  v16 = v5;
  v8 = (__int64)v7 + 16 * v5;
  v9 = *(_QWORD *)(a1 + 48);
  v17 = 0LL;
  v15 = v8;
  v20 = v9;
  v10 = *(_QWORD *)(a1 + 56);
  v18 = 0LL;
  v21 = v10;
  v11 = *(_QWORD *)(a1 + 64);
  v19 = v2;
  v22 = v11;
  v23 = *(_QWORD *)(a1 + 72);
  v12 = sub_406A60((__int64)&ptr, a1, 0);
  if ( (_BYTE)v12 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(a1 + 72) = v23;
    return v12;
  }
  *(_QWORD *)(a1 + 72) = v23;
  if ( !(unsigned __int8)sub_406A60(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_406A60(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_407380(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  float v3; // xmm0_4
  float v4; // xmm0_4
  unsigned __int64 v5; // rbx
  _BOOL8 v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  unsigned __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+38h] [rbp-30h]
  __int64 v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( !*(_BYTE *)(v2 + 16) )
  {
    if ( a2 < 0 )
      v3 = (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1))
         + (float)(a2 & 1 | (unsigned int)((unsigned __int64)a2 >> 1));
    else
      v3 = (float)(int)a2;
    v4 = v3 / *(float *)(v2 + 8);
    if ( v4 >= 1.8446744e19 )
      return 0;
    if ( v4 < 9.223372e18 )
      a2 = (unsigned int)(int)v4;
    else
      a2 = (unsigned int)(int)(float)(v4 - 9.223372e18) ^ 0x8000000000000000LL;
  }
  v5 = sub_4067D0(a2);
  v6 = v5 >> 61 != 0;
  if ( (v5 & 0x1000000000000000LL) != 0 )
    v6 = 1LL;
  if ( !v5 || v6 )
    return 0;
  if ( *(_QWORD *)(a1 + 16) == v5 )
    return 1LL;
  v7 = calloc(v5, 0x10uLL);
  ptr = v7;
  if ( !v7 )
    return 0;
  v16 = v5;
  v8 = (__int64)v7 + 16 * v5;
  v9 = *(_QWORD *)(a1 + 48);
  v17 = 0LL;
  v15 = v8;
  v20 = v9;
  v10 = *(_QWORD *)(a1 + 56);
  v18 = 0LL;
  v21 = v10;
  v11 = *(_QWORD *)(a1 + 64);
  v19 = v2;
  v22 = v11;
  v23 = *(_QWORD *)(a1 + 72);
  v12 = sub_406A60((__int64)&ptr, a1, 0);
  if ( (_BYTE)v12 )
  {
    free(*(void **)a1);
    *(_QWORD *)a1 = ptr;
    *(_QWORD *)(a1 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v16;
    *(_QWORD *)(a1 + 24) = v17;
    *(_QWORD *)(a1 + 72) = v23;
    return v12;
  }
  *(_QWORD *)(a1 + 72) = v23;
  if ( !(unsigned __int8)sub_406A60(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_406A60(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_407580(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  __int64 v10; // rax
  __m128i *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  float v15; // xmm1_4
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i *v26[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a2 )
    goto LABEL_35;
  v5 = sub_4068C0(a1, a2, v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 < 0 )
    {
      v14 = v7 & 1 | ((unsigned __int64)v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( v10 >= 0 )
      {
LABEL_8:
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_4069E0((float **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(int)v24 + (float)(int)v24;
        }
        else
        {
          v19 = (float)(int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(int)v23 + (float)(int)v23;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18
            ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL
            : (unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_407380(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_4068C0(a1, a2, v26, 0) )
        {
LABEL_9:
          v11 = v26[0];
          if ( !*(_QWORD *)v26[0] )
          {
            *(_QWORD *)v26[0] = a2;
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
            v13 = v11->m128i_i64[1];
            *v12 = a2;
            v12[1] = v13;
            v11->m128i_i64[1] = (__int64)v12;
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
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 >= 0 )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
                             + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( a3 )
    *a3 = v5;
  return result;
}

__int64 __fastcall sub_407580(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  __int64 v10; // rax
  __m128i *v11; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  float v15; // xmm1_4
  __int64 v16; // rdx
  __int64 v17; // rax
  float v18; // xmm2_4
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __m128i *v26[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !a2 )
    goto LABEL_35;
  v5 = sub_4068C0(a1, a2, v26, 0);
  if ( !v5 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 < 0 )
    {
      v14 = v7 & 1 | ((unsigned __int64)v7 >> 1);
      v10 = *(_QWORD *)(a1 + 16);
      v15 = (float)v14;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = v15 + v15;
      if ( v10 >= 0 )
      {
LABEL_8:
        if ( v9 <= (float)((float)(int)v10 * *(float *)(v8 + 8)) )
          goto LABEL_9;
LABEL_15:
        sub_4069E0((float **)(a1 + 40));
        v16 = *(_QWORD *)(a1 + 40);
        v17 = *(_QWORD *)(a1 + 16);
        v18 = *(float *)(v16 + 8);
        if ( v17 < 0 )
        {
          v24 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
          v19 = (float)(int)v24 + (float)(int)v24;
        }
        else
        {
          v19 = (float)(int)v17;
        }
        v20 = *(_QWORD *)(a1 + 24);
        if ( v20 < 0 )
        {
          v23 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
          v21 = (float)(int)v23 + (float)(int)v23;
        }
        else
        {
          v21 = (float)(int)v20;
        }
        if ( v21 <= (float)(v18 * v19) )
          goto LABEL_9;
        v22 = v19 * *(float *)(v16 + 12);
        if ( !*(_BYTE *)(v16 + 16) )
          v22 = v22 * v18;
        if ( v22 >= 1.8446744e19 )
          return 0xFFFFFFFFLL;
        v25 = v22 >= 9.223372e18
            ? (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL
            : (unsigned int)(int)v22;
        if ( !(unsigned __int8)sub_407380(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_4068C0(a1, a2, v26, 0) )
        {
LABEL_9:
          v11 = v26[0];
          if ( !*(_QWORD *)v26[0] )
          {
            *(_QWORD *)v26[0] = a2;
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
            v13 = v11->m128i_i64[1];
            *v12 = a2;
            v12[1] = v13;
            v11->m128i_i64[1] = (__int64)v12;
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
      v9 = (float)(int)v7;
      v10 = *(_QWORD *)(a1 + 16);
      if ( v10 >= 0 )
        goto LABEL_8;
    }
    if ( v9 <= (float)((float)((float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
                             + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1)))
                     * *(float *)(v8 + 8)) )
      goto LABEL_9;
    goto LABEL_15;
  }
  result = 0LL;
  if ( a3 )
    *a3 = v5;
  return result;
}

__int64 __fastcall sub_407800(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_407580(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_407840(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __m128i *v4; // rax
  __int64 v6; // rax
  float *v7; // rdx
  float v8; // xmm0_4
  __int64 v9; // rax
  float v10; // xmm1_4
  __int64 v11; // rax
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // r12
  int v20; // edx
  float v21; // xmm0_4
  __int64 v22; // rcx
  __int64 v23; // rcx
  __m128i *v24; // [rsp+8h] [rbp-20h] BYREF

  v3 = sub_4068C0(a1, a2, &v24, 1);
  if ( !v3 )
    return v3;
  v4 = v24;
  --*(_QWORD *)(a1 + 32);
  if ( v4->m128i_i64[0] )
    return v3;
  v6 = *(_QWORD *)(a1 + 24) - 1LL;
  *(_QWORD *)(a1 + 24) = v6;
  if ( v6 < 0 )
  {
    v20 = v6 & 1 | ((unsigned __int64)v6 >> 1);
    v9 = *(_QWORD *)(a1 + 16);
    v21 = (float)v20;
    v7 = *(float **)(a1 + 40);
    v8 = v21 + v21;
    if ( v9 >= 0 )
      goto LABEL_6;
LABEL_22:
    v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
        + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    goto LABEL_7;
  }
  v7 = *(float **)(a1 + 40);
  v8 = (float)(int)v6;
  v9 = *(_QWORD *)(a1 + 16);
  if ( v9 < 0 )
    goto LABEL_22;
LABEL_6:
  v10 = (float)(int)v9;
LABEL_7:
  if ( (float)(v10 * *v7) > v8 )
  {
    sub_4069E0((float **)(a1 + 40));
    v11 = *(_QWORD *)(a1 + 16);
    v12 = *(_QWORD *)(a1 + 40);
    if ( v11 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
      v13 = (float)(int)v23 + (float)(int)v23;
    }
    else
    {
      v13 = (float)(int)v11;
    }
    v14 = *(_QWORD *)(a1 + 24);
    if ( v14 < 0 )
    {
      v22 = *(_QWORD *)(a1 + 24) & 1LL | (*(_QWORD *)(a1 + 24) >> 1);
      v15 = (float)(int)v22 + (float)(int)v22;
    }
    else
    {
      v15 = (float)(int)v14;
    }
    if ( (float)(*(float *)v12 * v13) > v15 )
    {
      v16 = v13 * *(float *)(v12 + 4);
      if ( !*(_BYTE *)(v12 + 16) )
        v16 = v16 * *(float *)(v12 + 8);
      if ( v16 >= 9.223372e18 )
        v17 = (unsigned int)(int)(float)(v16 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v17 = (unsigned int)(int)v16;
      if ( !(unsigned __int8)sub_407380(a1, v17) )
      {
        v18 = *(_QWORD **)(a1 + 72);
        if ( v18 )
        {
          do
          {
            v19 = (_QWORD *)v18[1];
            free(v18);
            v18 = v19;
          }
          while ( v19 );
        }
        *(_QWORD *)(a1 + 72) = 0LL;
      }
    }
  }
  return v3;
}

__int64 __fastcall sub_407A20(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int v4; // eax

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (a1 / 10) + 48 - a1;
      a1 /= 10LL;
      *(_BYTE *)(v2 - 1) = v4;
      if ( !a1 )
        break;
      --v2;
    }
    *(_BYTE *)(v2 - 2) = 45;
    return v2 - 2;
  }
  else
  {
    do
    {
      *(_BYTE *)--v2 = a1 % 0xAuLL + 48;
      a1 /= 0xAuLL;
    }
    while ( a1 );
    return v2;
  }
}

__int64 sub_407AC0()
{
  unsigned int v0; // ebx
  char *v1; // rax
  __int64 v3; // rax
  unsigned int v4; // ebx
  char *endptr; // [rsp+8h] [rbp-10h] BYREF

  v0 = 200809;
  v1 = getenv("_POSIX2_VERSION");
  if ( !v1 )
    return v0;
  if ( !*v1 )
    return v0;
  v3 = strtol(v1, &endptr, 10);
  if ( *endptr )
    return v0;
  if ( v3 < (__int64)0xFFFFFFFF80000000LL )
    return 0x80000000;
  v4 = 0x7FFFFFFF;
  if ( v3 <= 0x7FFFFFFF )
    return (unsigned int)v3;
  return v4;
}

char *__fastcall sub_407B40(const char *a1)
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
  qword_6123A0 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_407BE0(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_40BA70();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40D921;
      if ( !v5 )
        return (char *)&unk_40D916;
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
    v2 = (char *)&unk_40D91D;
    if ( !v5 )
      return (char *)&unk_40D91A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_407CE0(
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
                return sub_407CE0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_407CE0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40B6B0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_407CE0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_407BE0("`", a5);
        v51 = sub_407BE0("'", a5);
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

unsigned __int64 __fastcall sub_407CE0(
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
                return sub_407CE0((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_407CE0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_40B6B0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_407CE0((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_407BE0("`", a5);
        v51 = sub_407BE0("'", a5);
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

_BYTE *__fastcall sub_408F10(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  _BYTE *v18; // rax
  int v19; // r8d
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  unsigned __int64 v23; // [rsp+10h] [rbp-48h]
  int v24; // [rsp+18h] [rbp-40h]
  int v25; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v24 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40A020();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_612320 )
    {
      v7 = (__m128i *)sub_409E30(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      ptr = (void *)sub_409E30(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_612330], 0, 16LL * (a1 + 1 - dword_612330));
    dword_612330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v25 = *(_DWORD *)(a4 + 4) | 1;
  v22 = *v10;
  v12 = sub_407CE0(v11, *v10, a2, a3, *(_DWORD *)a4, v25, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v22 <= v12 )
  {
    v17 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6123C0 )
    {
      v23 = v12 + 1;
      free(v11);
      v17 = v23;
    }
    v18 = (_BYTE *)sub_409DD0(v17, v17, v13, v14, v15, v16);
    v19 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v18;
    v11 = v18;
    sub_407CE0(v18, v17, a2, a3, v19, v25, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v24;
  return v11;
}

_BYTE *__fastcall sub_408F10(int a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __m128i *v7; // rbx
  int *v8; // r13
  __int64 v9; // rsi
  unsigned __int64 *v10; // rbx
  _BYTE *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  _BYTE *v18; // rax
  int v19; // r8d
  unsigned __int64 v22; // [rsp+10h] [rbp-48h]
  unsigned __int64 v23; // [rsp+10h] [rbp-48h]
  int v24; // [rsp+18h] [rbp-40h]
  int v25; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v7 = (__m128i *)ptr;
  v8 = v6;
  v24 = *v6;
  if ( a1 < 0 )
    abort();
  if ( dword_612330 <= a1 )
  {
    if ( a1 == 0x7FFFFFFF )
      sub_40A020();
    v9 = 16LL * (a1 + 1);
    if ( ptr == &xmmword_612320 )
    {
      v7 = (__m128i *)sub_409E30(0LL, v9);
      ptr = v7;
      *v7 = _mm_load_si128((const __m128i *)&xmmword_612320);
    }
    else
    {
      ptr = (void *)sub_409E30(ptr, v9);
      v7 = (__m128i *)ptr;
    }
    memset(&v7[dword_612330], 0, 16LL * (a1 + 1 - dword_612330));
    dword_612330 = a1 + 1;
  }
  v10 = (unsigned __int64 *)&v7[a1];
  v11 = (_BYTE *)v10[1];
  v25 = *(_DWORD *)(a4 + 4) | 1;
  v22 = *v10;
  v12 = sub_407CE0(v11, *v10, a2, a3, *(_DWORD *)a4, v25, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v22 <= v12 )
  {
    v17 = v12 + 1;
    *v10 = v12 + 1;
    if ( v11 != (_BYTE *)&unk_6123C0 )
    {
      v23 = v12 + 1;
      free(v11);
      v17 = v23;
    }
    v18 = (_BYTE *)sub_409DD0(v17, v17, v13, v14, v15, v16);
    v19 = *(_DWORD *)a4;
    v10[1] = (unsigned __int64)v18;
    v11 = v18;
    sub_407CE0(v18, v17, a2, a3, v19, v25, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v8 = v24;
  return v11;
}

__int64 __fastcall sub_4090B0(__int128 *a1)
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
    v1 = &xmmword_6124C0;
  result = sub_409FD0(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_4091A0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_6124C0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_407CE0(
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

_BYTE *__fastcall sub_409220(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v14; // [rsp+10h] [rbp-58h]
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_6124C0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v13 = *v6;
  v15 = sub_407CE0(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v14 = (_BYTE *)sub_409DD0(v15 + 1, v15 + 1, v8, v9, v10, v11);
  sub_407CE0(v14, v15 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v13;
  if ( a3 )
    *a3 = v15;
  return v14;
}

void sub_409320()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)ptr;
  if ( dword_612330 > 1 )
  {
    v1 = (void **)((char *)ptr + 24);
    v2 = (void **)((char *)ptr + 16 * (unsigned int)(dword_612330 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_6123C0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_612320 = 256LL;
    *((_QWORD *)&xmmword_612320 + 1) = &unk_6123C0;
  }
  if ( v0 != &xmmword_612320 )
  {
    free(v0);
    ptr = &xmmword_612320;
  }
  dword_612330 = 1;
}

_BYTE *__fastcall sub_409430(int a1, int a2, __int64 a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409430(int a1, int a2, __int64 a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4094A0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_408F10(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_4094A0(int a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_408F10(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_409510(int a1, __int64 a2)
{
  return sub_409430(0, a1, a2);
}

_BYTE *__fastcall sub_409530(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_6124F0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124C0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124D0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124E0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_408F10(0, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_4095B0(__int64 a1)
{
  return sub_409530(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_4095E0(int a1, int a2, __int64 a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_4095E0(int a1, int a2, __int64 a3)
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
  return sub_408F10(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_409650(int a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124C0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_6124D0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_6124E0);
  v8 = qword_6124F0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_408F10(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_409740(int a1, __int64 a2)
{
  return sub_408F10(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6122E0);
}

_BYTE *__fastcall sub_409760(__int64 a1)
{
  return sub_408F10(0, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_6122E0);
}

ssize_t __fastcall sub_409780(int fd, void *buf, size_t nbytes)
{
  ssize_t v4; // rbp
  int v5; // eax

  while ( 1 )
  {
    v4 = read(fd, buf, nbytes);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( nbytes <= 0x7FFFE000 || v5 != 22 )
        return v4;
      nbytes = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_4097E0(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_40BFE0();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

__int64 __fastcall sub_409830(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_409830(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_409C30(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_409830(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_409830(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_409C90(
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
        return sub_409830(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_409830(a1, a2, a3, a4, v15, i);
}

int sub_409D50()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_40C375, "https://www.gnu.org/software/coreutils/");
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_409DD0(size_t a1)
{
  void *result; // rax

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_40A020();
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_409E20(size_t a1)
{
  return sub_409DD0(a1);
}

void *__fastcall sub_409E30(void *a1, size_t a2)
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
        sub_40A020();
    }
  }
  return result;
}

void *__fastcall sub_409F80(size_t n)
{
  void *v1; // rax

  v1 = sub_409DD0(n);
  return memset(v1, 0, n);
}

__int64 __fastcall sub_409FA0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_40A020(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_409FD0(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_409DD0(n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_40A000(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_409FD0(src, v1 + 1);
}

noreturn void  sub_40A020()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_40A060(
        char *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v10; // ebx
  int v11; // eax
  unsigned __int64 v12; // rbp
  int *v13; // r14
  _BYTE *v14; // rax
  int v15; // esi
  int v17; // ebp
  int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

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
    if ( v19 >= a3 && v19 <= a4 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_409760((__int64)a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", a6, v14);
  return v19;
}

unsigned __int64 __fastcall sub_40A130(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return sub_40A060(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 sub_40A160()
{
  __int64 v0; // rdx
  int *v1; // rbx
  __int64 result; // rax
  __int64 v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[0] = sub_40B950();
  v3[1] = v0;
  v1 = __errno_location();
  while ( 1 )
  {
    *v1 = 0;
    result = sub_40B840(v3, 0LL);
    if ( !(_DWORD)result )
      break;
    if ( (*v1 & 0xFFFFFFFB) != 0 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

bool __fastcall sub_40A1C0(_BYTE *a1, _QWORD *a2, double *a3, void (__fastcall *a4)(_BYTE *, __int64 *), double a5)
{
  int *v7; // r12
  bool result; // al
  __int64 v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = __errno_location();
  *v7 = 0;
  a4(a1, v9);
  if ( (_BYTE *)v9[0] == a1 )
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
        *a2 = v9[0];
        goto LABEL_7;
      }
    }
    else
    {
      result = 0;
      if ( *(_BYTE *)v9[0] )
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
  *a3 = a5;
  return result;
}

__int64 __fastcall sub_40A260(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

__int64 __fastcall sub_40A6A0(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_6124F8 < 0 )
    {
      v6 = sub_40A6A0(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_6124F8 == -1 )
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
        v6 = sub_40A6A0(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_6124F8 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_6124F8 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

__int64 __fastcall sub_40A7E0(__int64 a1, int *a2)
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

__int64 __fastcall sub_40A8C0(
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

__int64 __fastcall sub_40AEE0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_40A7E0((__int64)a2, a7);
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
        sub_40A7E0((__int64)a2, a7);
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
            return (unsigned int)sub_40A8C0(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_40A8C0(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_40A8C0(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_40B4B0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_612500 = dword_61233C;
  dword_612504 = dword_612338;
  result = sub_40AEE0(a1, a2, a3, a4, a5, a6, &dword_612500, a7);
  dword_61233C = dword_612500;
  qword_612540 = qword_612510;
  dword_612334 = dword_612508;
  return result;
}

__int64 __fastcall sub_40B510(int a1, __int64 *a2, const char *a3)
{
  return sub_40B4B0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_40B530(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40B4B0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_40B550(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40AEE0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_40B570(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_40B4B0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_40B590(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_40AEE0(a1, a2, a3, a4, a5, 1, a6, 0);
}

__int64 __fastcall sub_40B5B0(int fildes)
{
  unsigned int v1; // ebx
  int *v3; // rbp
  int v4; // r12d
  int v5; // edx
  int pipedes[2]; // [rsp+8h] [rbp-140h] BYREF
  struct stat stat_buf; // [rsp+10h] [rbp-138h] BYREF
  struct stat v8; // [rsp+A0h] [rbp-A8h] BYREF

  v1 = __fxstat(1, fildes, &stat_buf);
  if ( !v1 )
  {
    LOBYTE(v1) = (stat_buf.st_mode & 0xF000) == 49152 || (stat_buf.st_mode & 0xF000) == 4096;
    if ( !(_BYTE)v1 )
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
        return v1;
      }
      if ( stat_buf.st_nlink <= v8.st_nlink )
      {
        v5 = stat_buf.st_mode & 0xF000;
        v1 = v5 == 4096;
        if ( (v8.st_mode & 0xF000) != 4096 )
        {
          LOBYTE(v1) = v5 == 49152;
          return (unsigned __int8)v1;
        }
      }
    }
  }
  return v1;
}

size_t __fastcall sub_40B6B0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_40BA10(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_40B730(_BYTE *a1, __int16 a2, unsigned __int64 a3)
{
  _BYTE *result; // rax
  __int64 v4; // r9
  _BYTE *v5; // rcx
  _BYTE *v6; // rdi

  if ( !a3 )
    return 0LL;
  if ( ((unsigned __int8)a1 & 7) != 0 )
  {
    if ( (_BYTE)a2 == *a1 )
      return a1;
    while ( 1 )
    {
      ++a1;
      if ( !--a3 )
        return 0LL;
      if ( ((unsigned __int8)a1 & 7) == 0 )
        break;
      if ( *a1 == (_BYTE)a2 )
        return a1;
    }
  }
  v4 = ((((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 32) | ((__int64)((unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8)) << 16) | (unsigned __int8)a2 | (unsigned int)(unsigned __int16)(a2 << 8);
  if ( a3 > 7 && (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) == 0 )
  {
    while ( 1 )
    {
      a3 -= 8LL;
      a1 += 8;
      if ( a3 <= 7 )
        break;
      if ( (((v4 ^ *(_QWORD *)a1) - 0x101010101010101LL) & ~(v4 ^ *(_QWORD *)a1) & 0x8080808080808080LL) != 0 )
        goto LABEL_15;
    }
    if ( !a3 )
      return 0LL;
  }
LABEL_15:
  if ( (_BYTE)a2 != *a1 )
  {
    v5 = a1 + 1;
    v6 = &a1[a3];
    while ( 1 )
    {
      result = v5;
      if ( v5 == v6 )
        break;
      if ( *v5++ == (_BYTE)a2 )
        return result;
    }
    return 0LL;
  }
  return a1;
}

int __fastcall sub_40B840(__time_t *a1, struct timespec *a2)
{
  __time_t v2; // rbx
  int result; // eax
  struct timespec v4[2]; // [rsp+0h] [rbp-28h] BYREF

  if ( (unsigned __int64)a1[1] > 0x3B9AC9FF )
  {
    *__errno_location() = 22;
    return -1;
  }
  else
  {
    v2 = *a1;
    v4[0].tv_nsec = a1[1];
    if ( v2 > 2073600 )
    {
      while ( 1 )
      {
        v4[0].tv_sec = 2073600LL;
        v2 -= 2073600LL;
        result = nanosleep(v4, a2);
        if ( result )
          break;
        v4[0].tv_nsec = 0LL;
        if ( v2 <= 2073600 )
          goto LABEL_8;
      }
      if ( a2 )
        a2->tv_sec += v2;
    }
    else
    {
LABEL_8:
      v4[0].tv_sec = v2;
      return nanosleep(v4, a2);
    }
  }
  return result;
}

__int64 __fastcall sub_40B8F0(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  __int64 result; // rax

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
    return 0xFFFFFFFFLL;
  }
  if ( !(_DWORD)result )
    return result;
  if ( v1 )
    return 0xFFFFFFFFLL;
  return (unsigned int)-(*__errno_location() != 9);
}

__int64 __fastcall sub_40B950(double a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  signed __int64 v3; // rcx

  if ( a1 <= -9.223372036854776e18 )
    return 0x8000000000000000LL;
  if ( a1 >= 9.223372036854776e18 )
    return 0x7FFFFFFFFFFFFFFFLL;
  v2 = (unsigned int)(int)a1;
  v3 = (unsigned int)(int)((a1 - (double)(int)v2) * 1000000000.0)
     + (unsigned __int64)((a1 - (double)(int)v2) * 1000000000.0 > (double)(int)((a1 - (double)(int)v2) * 1000000000.0));
  result = v3 / 1000000000 + v2;
  if ( v3 % 1000000000 < 0 )
    --result;
  return result;
}

bool __fastcall sub_40BA10(int a1)
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

const char *sub_40BA70()
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
          v1 = (_BYTE *)("%s: invalid option -- '%c'\n" + 27);
LABEL_20:
          s = v1;
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
                sub_40BFF0(v60);
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
            sub_40BFF0(v39);
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

__int64 __fastcall sub_40BFE0(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  return sub_40A6A0(a1, 0, 3LL, a4, a5, a6);
}

int __fastcall sub_40BFF0(FILE *stream)
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
  if ( !(unsigned int)sub_40C070(stream) )
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

int __fastcall sub_40C070(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_40C0B0(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_40C0B0(FILE *a1, __off_t a2, int a3)
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

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_40C180(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_612288 )
    v1 = (void *)qword_612288;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_40C198(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_611E30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
