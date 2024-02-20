__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  __off_t st_size; // r12
  unsigned __int64 p_dest; // rbp
  __int64 v5; // rbx
  char v6; // r14
  struct lconv *v7; // rax
  char *decimal_point; // rcx
  char *thousands_sep; // rdx
  const unsigned __int16 **v10; // r13
  const __int32_t **v11; // rax
  __int64 i; // rdx
  char v13; // si
  __int64 v14; // rdi
  bool v15; // si
  const __int32_t *v16; // rcx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // dx
  __int64 j; // r14
  char *v20; // rbx
  size_t v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  const unsigned __int16 *v24; // r11
  char *v25; // rdi
  __int64 v26; // r8
  _BYTE *v27; // rcx
  __int64 v28; // rsi
  _BYTE *v29; // r9
  int v30; // r14d
  __int64 v31; // r13
  int v32; // r14d
  __int64 v33; // r13
  __m128i si128; // xmm1
  char *v35; // rsi
  _BOOL8 v36; // rdx
  double v37; // xmm0_8
  __int64 v38; // rdi
  unsigned __int64 v39; // r15
  __int64 v40; // r14
  __int64 *v41; // r13
  __int64 v42; // rax
  _BYTE *v43; // rdx
  int v44; // edx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rsi
  char v49; // dl
  char v50; // al
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  char *v54; // rax
  struct stat *p_ptr; // rdi
  __int64 v56; // rcx
  __int64 *v57; // rsi
  __int64 v58; // rbx
  unsigned __int64 v59; // rax
  char v60; // al
  unsigned __int64 v61; // r15
  unsigned __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rax
  unsigned __int64 v66; // r13
  const char *v67; // rax
  const char *v68; // rax
  __int64 v69; // r15
  char *v70; // rax
  char v71; // al
  char *v72; // rax
  int v73; // esi
  __int64 v74; // rdx
  char *v75; // rax
  unsigned int v76; // eax
  char *v77; // rax
  const char *v78; // rdi
  char *v79; // rdx
  int v80; // eax
  int v81; // eax
  unsigned int v82; // r11d
  __int64 v83; // rbp
  char *v84; // rax
  char *v85; // rax
  char *v86; // rdx
  int v87; // eax
  char *v88; // rdx
  int v89; // esi
  int v90; // eax
  __int64 v91; // rcx
  __int128 *v92; // rdi
  _BYTE *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  _BYTE *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 *v99; // rcx
  const char *v100; // rdi
  char *v101; // rdx
  int v102; // eax
  char *v103; // rdx
  char *v104; // rdi
  unsigned int v105; // eax
  __dev_t st_dev; // rax
  char v107; // al
  char st_size_high; // r12
  char *v109; // rax
  char *v110; // rax
  unsigned __int64 v111; // rax
  FILE *v112; // r14
  unsigned __int8 v113; // bl
  __int64 v114; // rax
  size_t v115; // r12
  __dev_t v116; // r15
  __dev_t v117; // rbp
  __dev_t v118; // rdi
  size_t v119; // rdx
  char *v120; // rax
  void *v121; // rax
  int v122; // eax
  char v123; // bl
  char *v125; // rax
  __int64 v126; // rbp
  char *v127; // rax
  char *v128; // rax
  _BYTE *v129; // rax
  __int64 v130; // rcx
  __int128 *v131; // rdi
  _BYTE *v132; // rax
  __int64 v133; // rcx
  pthread_mutex_t *v134; // rax
  _BYTE *v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rax
  const char *v139; // rsi
  void *v140; // rbx
  char *v141; // rax
  const char **v142; // rbp
  bool v143; // cf
  bool v144; // zf
  __int64 v145; // rbx
  const char *v146; // rdx
  __int64 v147; // rcx
  char *v148; // rdi
  __int64 v149; // rsi
  int v150; // eax
  __int64 v151; // rax
  unsigned __int64 v152; // r15
  unsigned __int64 v153; // r14
  __int64 v154; // rax
  __int64 v155; // r13
  char v156; // r12
  char *v157; // rbx
  __int64 v158; // rbp
  rlim_t v159; // rax
  char *v160; // rax
  char *v161; // rax
  char *v162; // rax
  __int64 v163; // rdx
  unsigned __int64 v164; // rax
  __int64 v165; // rsi
  unsigned __int64 v166; // rcx
  bool v167; // al
  rlim_t v168; // r14
  rlim_t v169; // r14
  double v170; // xmm0_8
  double v171; // xmm2_8
  double v172; // xmm0_8
  double v173; // xmm0_8
  unsigned __int64 v174; // rax
  int v175; // eax
  __int64 v176; // rax
  __int64 v177; // rbp
  __int64 v178; // r12
  char *v179; // rax
  char *v180; // rax
  __int64 v181; // rax
  __int64 k; // rdx
  _QWORD *v183; // rbx
  _QWORD *v184; // rbp
  _QWORD *v185; // rdx
  char *v186; // rax
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 *v189; // rcx
  _BYTE *v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rdx
  char *v194; // rax
  unsigned __int64 v195; // rax
  __int64 v196; // rdx
  double st_dev_low; // xmm1_8
  __int64 v198; // rbx
  char *v199; // rax
  char *v200; // rax
  char *v201; // rax
  const char *v202; // rsi
  const char *v203; // rbx
  char *v204; // rax
  char *v205; // rax
  __int64 v206; // rbx
  char *v207; // rax
  char *v208; // rax
  char *v209; // rax
  char *v210; // rax
  char *v211; // rax
  __int64 v212; // rbp
  char *v213; // rbx
  char *v214; // rax
  __int64 v215; // rbp
  char *v216; // rax
  char *v217; // rax
  __int64 v218; // rbx
  char *v219; // rax
  FILE *v220; // rbx
  char *v221; // rsi
  __sighandler_t v222; // rbx
  bool v223; // cf
  bool v224; // zf
  char *v225; // r8
  _BYTE *v226; // rdx
  __int64 v227; // rcx
  char *v228; // rdi
  _BYTE *v229; // rsi
  __int64 v230; // rbx
  char *v231; // rax
  __int64 v232; // rbx
  char *v233; // rax
  __int64 v234; // rbx
  char *v235; // rax
  __int64 v236; // rbx
  char *v237; // rax
  FILE *stream; // [rsp+0h] [rbp-388h]
  char *src; // [rsp+8h] [rbp-380h]
  char *v240; // [rsp+10h] [rbp-378h]
  char *v241; // [rsp+10h] [rbp-378h]
  double v242; // [rsp+10h] [rbp-378h]
  char *s1; // [rsp+18h] [rbp-370h]
  char *s1b; // [rsp+18h] [rbp-370h]
  char *s1a; // [rsp+18h] [rbp-370h]
  char *file; // [rsp+20h] [rbp-368h]
  char *v247; // [rsp+28h] [rbp-360h]
  __int64 *v248; // [rsp+30h] [rbp-358h]
  char *v249; // [rsp+38h] [rbp-350h]
  __int64 *v250; // [rsp+40h] [rbp-348h]
  pthread_mutex_t *mutex; // [rsp+48h] [rbp-340h]
  unsigned __int64 sa_handler; // [rsp+50h] [rbp-338h]
  unsigned int rlim_cur; // [rsp+50h] [rbp-338h]
  __int64 v254; // [rsp+58h] [rbp-330h]
  char **v255; // [rsp+60h] [rbp-328h]
  char *v256; // [rsp+68h] [rbp-320h]
  char v257[32]; // [rsp+70h] [rbp-318h] BYREF
  struct rlimit v258; // [rsp+90h] [rbp-2F8h] BYREF
  void *dest; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 v260; // [rsp+C8h] [rbp-2C0h]
  unsigned __int64 v261; // [rsp+D0h] [rbp-2B8h]
  char *v262; // [rsp+D8h] [rbp-2B0h]
  __int64 v263; // [rsp+E0h] [rbp-2A8h]
  char v264; // [rsp+F0h] [rbp-298h]
  __int128 v265; // [rsp+100h] [rbp-288h] BYREF
  __int64 v266; // [rsp+110h] [rbp-278h] BYREF
  __int64 v267[4]; // [rsp+118h] [rbp-270h] BYREF
  char v268; // [rsp+139h] [rbp-24Fh]
  __int64 v269[3]; // [rsp+150h] [rbp-238h] BYREF
  __int128 v270; // [rsp+168h] [rbp-220h]
  __int128 v271; // [rsp+178h] [rbp-210h]
  __int128 v272; // [rsp+188h] [rbp-200h]
  struct stat ptr; // [rsp+1A0h] [rbp-1E8h] BYREF
  struct sigaction rlimits[2]; // [rsp+230h] [rbp-158h] BYREF

  p_dest = (unsigned __int64)a2;
  v5 = a1;
  v249 = getenv("POSIXLY_CORRECT");
  LOBYTE(st_size) = v249 != 0LL;
  LOBYTE(src) = (unsigned int)sub_40DBE0() - 200112 > 0x2B8;
  sub_40DC60(*a2);
  v247 = setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  status = 2;
  byte_61CBA1 = sub_40BD10(3LL);
  v6 = sub_40BD10(2LL);
  byte_61CBA0 = v6;
  v7 = localeconv();
  decimal_point = v7->decimal_point;
  dword_61CBA8 = *(unsigned __int8 *)v7->decimal_point;
  if ( !(_BYTE)dword_61CBA8 || decimal_point[1] )
    dword_61CBA8 = 46;
  thousands_sep = v7->thousands_sep;
  dword_61CBA4 = (unsigned __int8)*thousands_sep;
  if ( !(_BYTE)dword_61CBA4 || thousands_sep[1] )
    dword_61CBA4 = -1;
  byte_61C758 = 0;
  v10 = __ctype_b_loc();
  v11 = __ctype_toupper_loc();
  for ( i = 0LL; i != 256; *(_BYTE *)(i + 6408063) = v16[v14] )
  {
    while ( 1 )
    {
      v13 = 1;
      v17 = (*v10)[i];
      if ( (v17 & 1) != 0 )
        break;
      if ( i != 10 )
      {
        v13 = 0;
        break;
      }
      v18 = (*v10)[10];
      byte_61CA8A = 1;
      byte_61C88A = 0;
      byte_61C98A = ((v18 >> 14) ^ 1) & 1;
      byte_61C78A = (*v11)[10];
      i = 11LL;
    }
    byte_61CA80[i] = v13;
    v14 = i;
    byte_61C980[i] = ((v17 >> 14) ^ 1) & 1;
    v15 = 0;
    if ( (v17 & 8) == 0 )
      v15 = !((i == 10) | v17 & 1);
    v16 = *v11;
    byte_61C880[i++] = v15;
  }
  if ( v6 )
  {
    LODWORD(stream) = v5;
    for ( j = 1LL; j != 13; ++j )
    {
      v20 = nl_langinfo((int)j + 131085);
      v21 = strlen(v20);
      v22 = sub_411210(v21 + 1);
      v23 = 4 * j;
      qword_61C430[v23 / 2] = v22;
      dword_61C438[v23] = j;
      if ( v21 )
      {
        v24 = *v10;
        v25 = v20;
        v26 = 0LL;
        v27 = (_BYTE *)v22;
        do
        {
          v28 = (unsigned __int8)*v25;
          v29 = v27;
          if ( (v24[v28] & 1) == 0 )
          {
            ++v26;
            *v27 = byte_61C780[v28];
            v27 = (_BYTE *)(v22 + v26);
            v29 = (_BYTE *)(v22 + v26);
          }
          ++v25;
        }
        while ( &v20[v21] != v25 );
      }
      else
      {
        v29 = (_BYTE *)v22;
      }
      *v29 = 0;
    }
    v5 = (unsigned int)stream;
    qsort(&off_61C440, 0xCuLL, 0x10uLL, compar);
  }
  v30 = 14;
  v31 = 0LL;
  sigemptyset(&newmask);
  while ( 1 )
  {
    sigaction(v30, 0LL, rlimits);
    if ( rlimits[0].sa_handler != (__sighandler_t)1 )
      sigaddset(&newmask, v30);
    if ( ++v31 == 11 )
      break;
    v30 = dword_414980[v31];
  }
  rlimits[0].sa_handler = (__sighandler_t)sub_405D80;
  v32 = 14;
  rlimits[0].sa_flags = 0;
  v33 = 0LL;
  *(__m128i *)rlimits[0].sa_mask.__val = _mm_load_si128((const __m128i *)&newmask);
  si128 = _mm_load_si128((const __m128i *)&newmask.__val[12]);
  *(__m128i *)&rlimits[0].sa_mask.__val[2] = _mm_load_si128((const __m128i *)&newmask.__val[2]);
  *(__m128i *)&rlimits[0].sa_mask.__val[4] = _mm_load_si128((const __m128i *)&newmask.__val[4]);
  *(__m128i *)&rlimits[0].sa_mask.__val[6] = _mm_load_si128((const __m128i *)&newmask.__val[6]);
  *(__m128i *)&rlimits[0].sa_mask.__val[8] = _mm_load_si128((const __m128i *)&newmask.__val[8]);
  *(__m128i *)&rlimits[0].sa_mask.__val[10] = _mm_load_si128((const __m128i *)&newmask.__val[10]);
  *(__m128i *)&rlimits[0].sa_mask.__val[12] = si128;
  *(__m128i *)&rlimits[0].sa_mask.__val[14] = _mm_load_si128((const __m128i *)&newmask.__val[14]);
  while ( 2 )
  {
    if ( !sigismember(&newmask, v32) )
    {
      if ( ++v33 == 11 )
        break;
      goto LABEL_31;
    }
    ++v33;
    sigaction(v32, rlimits, 0LL);
    if ( v33 != 11 )
    {
LABEL_31:
      v32 = dword_414980[v33];
      continue;
    }
    break;
  }
  v35 = 0LL;
  signal(17, 0LL);
  sub_413F20(sub_407890);
  v37 = 0.0;
  v269[1] = 0LL;
  v269[0] = -1LL;
  v269[2] = -1LL;
  v270 = 0LL;
  v38 = 8LL * (int)v5;
  v271 = 0LL;
  v272 = 0LL;
  if ( ((int)v5 & 0x1000000000000000LL) != 0 || (unsigned __int64)(int)v5 >> 61 )
    goto LABEL_449;
  v39 = 0LL;
  LOBYTE(v248) = 0;
  LODWORD(v40) = 0;
  v41 = (__int64 *)sub_411210(v38);
  LOBYTE(stream) = 0;
  file = 0LL;
  v240 = 0LL;
  sa_handler = 0LL;
  s1 = 0LL;
  v250 = &v266;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        LODWORD(v258.rlim_cur) = -1;
        if ( (_DWORD)v40 == -1 )
        {
LABEL_46:
          v42 = dword_61C57C;
LABEL_43:
          if ( (int)v5 > (int)v42 )
          {
            v44 = v42 + 1;
            v45 = *(_QWORD *)(p_dest + 8 * v42);
            dword_61C57C = v44;
            v41[v39++] = v45;
            continue;
          }
          goto LABEL_432;
        }
        break;
      }
      if ( !v39 || !(_BYTE)st_size )
      {
LABEL_50:
        v46 = sub_412F30((unsigned int)v5, p_dest, "-bcCdfghik:mMno:rRsS:t:T:uVy:z", &off_414B40, &v258);
        LODWORD(v40) = v46;
        if ( v46 == -1 )
          goto LABEL_46;
        switch ( v46 )
        {
          case -131:
            sub_4110D0(
              (_DWORD)stdout,
              4286066,
              (unsigned int)&unk_4165FE,
              (_DWORD)off_61C508,
              (unsigned int)"Mike Haertel",
              (unsigned int)"Paul Eggert",
              0LL,
              p_dest);
            exit(0);
          case -130:
            sub_40A0D0(0);
          case 1:
            v103 = nptr;
            if ( *nptr != 43 )
              goto LABEL_171;
            if ( dword_61C57C == (_DWORD)v5 )
            {
              LODWORD(mutex) = 0;
            }
            else
            {
              v129 = *(_BYTE **)(p_dest + 8LL * dword_61C57C);
              LODWORD(mutex) = 0;
              if ( *v129 == 45 )
                LODWORD(mutex) = (unsigned int)((char)v129[1] - 48) <= 9;
            }
            LOBYTE(src) = (unsigned __int8)mutex & (v249 == 0LL) | (unsigned __int8)src;
            if ( !(_BYTE)src )
              goto LABEL_171;
            v130 = 18LL;
            v131 = &v265;
            while ( v130 )
            {
              *(_DWORD *)v131 = 0;
              v131 = (__int128 *)((char *)v131 + 4);
              --v130;
            }
            v266 = -1LL;
            v132 = (_BYTE *)sub_407C00(v103 + 1, &v265, 0LL);
            v133 = -1LL;
            if ( !v132 )
            {
              v103 = nptr;
              if ( v265 == 0 )
                *(_QWORD *)&v265 = -1LL;
              goto LABEL_171;
            }
            if ( *v132 == 46 )
            {
              v132 = (_BYTE *)sub_407C00(v132 + 1, (char *)&v265 + 8, 0LL);
              if ( v265 != 0 )
              {
LABEL_241:
                if ( !v132 )
                  goto LABEL_395;
                goto LABEL_242;
              }
            }
            else if ( v265 != 0 )
            {
LABEL_242:
              if ( !*(_BYTE *)sub_405C00(v132, &v265, 0LL, v133) )
              {
                if ( (_DWORD)mutex )
                {
                  v134 = *(pthread_mutex_t **)(p_dest + 8LL * dword_61C57C++);
                  mutex = v134;
                  v135 = (_BYTE *)sub_407C00((char *)&v134->__lock + 1, v250, "invalid number after '-'");
                  if ( !v135 )
                    __assert_fail("s", "src/sort.c", 0x110Du, "main");
                  if ( *v135 == 46 )
LABEL_409:
                    v135 = (_BYTE *)sub_407C00(v135 + 1, v267, "invalid number after '.'");
                  if ( !v267[0] && v266 )
                    --v266;
                  if ( *(_BYTE *)sub_405C00(v135, &v265, 1LL, v136) )
                  {
                    sub_405D30(mutex, "stray character in field spec");
LABEL_427:
                    sub_407DD0(src);
                  }
                }
                v268 = 1;
                v97 = sub_411410(&v265, 0x48uLL);
                v137 = qword_61C750;
                v99 = &qword_61C750;
                while ( v137 )
                {
                  v99 = (__int64 *)(v137 + 64);
                  v137 = *(_QWORD *)(v137 + 64);
                }
LABEL_221:
                *v99 = v97;
                *(_QWORD *)(v97 + 64) = 0LL;
                continue;
              }
LABEL_395:
              v103 = nptr;
LABEL_171:
              v41[v39++] = (__int64)v103;
              continue;
            }
            *(_QWORD *)&v265 = -1LL;
            goto LABEL_241;
          case 67:
          case 99:
            goto LABEL_56;
          case 77:
          case 82:
          case 86:
          case 98:
          case 100:
          case 102:
          case 103:
          case 104:
          case 105:
          case 110:
          case 114:
            goto LABEL_53;
          case 83:
            v104 = nptr;
            mutex = (pthread_mutex_t *)nptr;
            LODWORD(v254) = v258.rlim_cur;
            v105 = sub_411B40(nptr);
            if ( !v105 )
            {
              if ( (unsigned int)(*((char *)rlimits[0].sa_handler - 1) - 48) <= 9 )
              {
                if ( ptr.st_dev > 0x3FFFFFFFFFFFFFLL )
                  goto LABEL_379;
                ptr.st_dev <<= 10;
              }
              goto LABEL_176;
            }
            if ( v105 != 2
              || (unsigned int)(*((char *)rlimits[0].sa_handler - 1) - 48) > 9
              || *((_BYTE *)rlimits[0].sa_handler + 1) )
            {
              goto LABEL_227;
            }
            if ( *(_BYTE *)rlimits[0].sa_handler != 37 )
            {
              if ( *(_BYTE *)rlimits[0].sa_handler != 98 )
                goto LABEL_227;
              goto LABEL_176;
            }
            sub_40D840(v104, rlimits);
            if ( (ptr.st_dev & 0x8000000000000000LL) != 0LL )
              st_dev_low = (double)(int)(ptr.st_dev & 1 | (ptr.st_dev >> 1))
                         + (double)(int)(ptr.st_dev & 1 | (ptr.st_dev >> 1));
            else
              st_dev_low = (double)SLODWORD(ptr.st_dev);
            v37 = v37 * st_dev_low / 100.0;
            if ( v37 >= 1.844674407370955e19 )
            {
LABEL_379:
              v105 = 1;
LABEL_227:
              sub_411AB0(v105, (unsigned int)v254, 83LL, &off_414B40, mutex);
            }
            si128.m128i_i64[0] = 0x43E0000000000000LL;
            if ( v37 < 9.223372036854776e18 )
            {
              ptr.st_dev = (unsigned int)(int)v37;
              goto LABEL_176;
            }
            goto LABEL_406;
          case 84:
            sub_40A010(nptr);
            continue;
          case 107:
            v91 = 18LL;
            v92 = &v265;
            while ( v91 )
            {
              *(_DWORD *)v92 = 0;
              v92 = (__int128 *)((char *)v92 + 4);
              --v91;
            }
            v266 = -1LL;
            v93 = (_BYTE *)sub_407C00(nptr, &v265, "invalid number at field start");
            v94 = v265;
            v95 = v265 - 1;
            *(_QWORD *)&v265 = v265 - 1;
            if ( !v94 )
              goto LABEL_423;
            if ( *v93 == 46 )
            {
              v93 = (_BYTE *)sub_407C00(v93 + 1, (char *)&v265 + 8, "invalid number after '.'");
              v193 = *((_QWORD *)&v265 + 1);
              v95 = --*((_QWORD *)&v265 + 1);
              if ( !v193 )
              {
                sub_405D30(nptr, "character offset is zero");
                goto LABEL_375;
              }
            }
            if ( v265 == 0 )
              *(_QWORD *)&v265 = -1LL;
            v96 = (_BYTE *)sub_405C00(v93, &v265, 0LL, v95);
            if ( *v96 == 44 )
            {
              v190 = (_BYTE *)sub_407C00(v96 + 1, v250, "invalid number after ','");
              v191 = v266;
              v192 = --v266;
              if ( !v191 )
                goto LABEL_423;
              if ( *v190 == 46 )
                v190 = (_BYTE *)sub_407C00(v190 + 1, v267, "invalid number after '.'");
              v96 = (_BYTE *)sub_405C00(v190, &v265, 1LL, v192);
            }
            else
            {
              v266 = -1LL;
              v267[0] = 0LL;
            }
            if ( *v96 )
            {
              sub_405D30(nptr, "stray character in field spec");
              start();
            }
            v97 = sub_411410(&v265, 0x48uLL);
            v98 = qword_61C750;
            v99 = &qword_61C750;
            while ( v98 )
            {
              v99 = (__int64 *)(v98 + 64);
              v98 = *(_QWORD *)(v98 + 64);
            }
            goto LABEL_221;
          case 109:
            LOBYTE(v248) = 1;
            continue;
          case 111:
            v100 = file;
            v101 = nptr;
            if ( file )
            {
              file = nptr;
              v102 = strcmp(v100, nptr);
              v101 = file;
              if ( v102 )
                goto LABEL_419;
            }
            file = v101;
            continue;
          case 115:
            byte_61C75A = 1;
            continue;
          case 116:
            v90 = *nptr;
            if ( !*nptr )
            {
              v201 = dcgettext(0LL, "empty tab", 5);
              error(2, 0, v201);
              goto LABEL_409;
            }
            if ( nptr[1] )
            {
              mutex = (pthread_mutex_t *)nptr;
              if ( strcmp(nptr, "\\0") )
              {
                v206 = sub_40F880(mutex);
                v207 = dcgettext(0LL, "multi-character tab %s", 5);
                error(2, 0, v207, v206);
LABEL_416:
                v208 = dcgettext(0LL, "incompatible tabs", 5);
                error(2, 0, v208);
LABEL_417:
                v209 = dcgettext(0LL, "multiple random sources specified", 5);
                error(2, 0, v209);
LABEL_418:
                v210 = dcgettext(0LL, "multiple compress programs specified", 5);
                error(2, 0, v210);
LABEL_419:
                v211 = dcgettext(0LL, "multiple output files specified", 5);
                error(2, 0, v211);
LABEL_420:
                if ( !(_BYTE)stream )
                  LOBYTE(stream) = 111;
                byte_61C408 = (char)stream;
                sub_405D00(&byte_61C408);
LABEL_423:
                sub_405D30(nptr, "field number is zero");
LABEL_424:
                sub_405D00("cC");
LABEL_425:
                sub_407DD0(file);
              }
              v90 = 0;
            }
            if ( dword_61C424 != 128 && dword_61C424 != v90 )
              goto LABEL_416;
            dword_61C424 = v90;
            continue;
          case 117:
            byte_61C759 = 1;
            continue;
          case 121:
            v88 = nptr;
            if ( *(char **)(p_dest + 8LL * dword_61C57C - 8) == nptr )
            {
              while ( 1 )
              {
                v89 = *v88;
                if ( (unsigned int)(v89 - 48) > 9 )
                  break;
                ++v88;
              }
              dword_61C57C -= (_BYTE)v89 != 0;
            }
            continue;
          case 122:
            byte_61C500 = 0;
            continue;
          case 128:
            LODWORD(v40) = 99;
            if ( nptr )
              LODWORD(v40) = byte_414B18[sub_40A910("--check", nptr, off_414B20, byte_414B18, 1LL, off_61C510)];
LABEL_56:
            if ( (_BYTE)stream && (char)stream != (_DWORD)v40 )
              goto LABEL_424;
            LOBYTE(stream) = v40;
            continue;
          case 129:
            v86 = nptr;
            if ( arg )
            {
              mutex = (pthread_mutex_t *)nptr;
              v87 = strcmp(arg, nptr);
              v86 = (char *)mutex;
              if ( v87 )
                goto LABEL_418;
            }
            arg = v86;
            continue;
          case 130:
            byte_61C740 = 1;
            continue;
          case 131:
            goto LABEL_133;
          case 132:
            v254 = (__int64)nptr;
            LODWORD(v255) = v258.rlim_cur;
            LODWORD(mutex) = sub_411B40(nptr);
            v81 = getrlimit(RLIMIT_NOFILE, (struct rlimit *)rlimits);
            v82 = 17;
            if ( !v81 )
              v82 = LODWORD(rlimits[0].sa_handler) - 3;
            if ( (_DWORD)mutex )
            {
              if ( (_DWORD)mutex != 1 )
                sub_411AB0((unsigned int)mutex, (unsigned int)v255, 4294967172LL, &off_414B40, v254);
            }
            else
            {
              dword_61C420 = (int)dest;
              if ( dest == (void *)(unsigned int)dest )
              {
                if ( (unsigned int)dest <= 1 )
                {
                  v212 = sub_40F880(v254);
                  v213 = (&off_414B40)[4 * (int)v255];
                  v214 = dcgettext(0LL, "invalid --%s argument %s", 5);
                  error(0, 0, v214, v213, v212);
                  v215 = sub_40F880("2");
                  v216 = dcgettext(0LL, "minimum --%s argument is %s", 5);
                  error(2, 0, v216, v213, v215);
                  goto LABEL_429;
                }
                if ( (unsigned int)dest <= v82 )
                  continue;
              }
            }
            LODWORD(stream) = v82;
            v83 = sub_40F880(v254);
            v5 = (__int64)(&off_414B40)[4 * (int)v255];
            v84 = dcgettext(0LL, "--%s argument %s too large", 5);
            error(0, 0, v84, v5, v83);
            p_dest = sub_40D330((unsigned int)stream, &ptr);
            v85 = dcgettext(0LL, "maximum --%s argument with current rlimit is %s", 5);
            error(2, 0, v85, v5, p_dest);
LABEL_133:
            v240 = nptr;
            continue;
          case 133:
            goto LABEL_123;
          case 134:
            LODWORD(v40) = aGhmnrv[sub_40A910("--sort", nptr, off_414AE0, "ghMnRV", 1LL, off_61C510)];
LABEL_53:
            LOWORD(rlimits[0].sa_handler) = (unsigned __int8)v40;
            sub_405C00(rlimits, v269, 2LL, v47);
            continue;
          case 135:
            mutex = (pthread_mutex_t *)nptr;
            rlim_cur = v258.rlim_cur;
            v76 = sub_411680(nptr);
            if ( v76 == 1 )
            {
              sa_handler = -1LL;
            }
            else
            {
              if ( v76 )
                sub_411AB0(v76, rlim_cur, 4294967175LL, &off_414B40, mutex);
              sa_handler = (unsigned __int64)rlimits[0].sa_handler;
              if ( !rlimits[0].sa_handler )
              {
                v77 = dcgettext(0LL, "number in parallel must be nonzero", 5);
                error(2, 0, v77);
LABEL_123:
                v78 = s1;
                v79 = nptr;
                if ( s1 )
                {
                  s1b = nptr;
                  v80 = strcmp(v78, nptr);
                  v79 = s1b;
                  if ( v80 )
                    goto LABEL_417;
                }
                s1 = v79;
              }
            }
            continue;
          default:
            goto LABEL_404;
        }
      }
      break;
    }
    v42 = dword_61C57C;
    if ( (_BYTE)src != 1 || (_BYTE)stream )
      goto LABEL_43;
    if ( dword_61C57C != (_DWORD)v5 )
    {
      v43 = *(_BYTE **)(p_dest + 8LL * dword_61C57C);
      if ( *v43 != 45 || v43[1] != 111 || !v43[2] && dword_61C57C + 1 == (_DWORD)v5 )
        goto LABEL_43;
      goto LABEL_50;
    }
    if ( v240 )
      goto LABEL_403;
    LOBYTE(stream) = 0;
LABEL_61:
    if ( qword_61C750 )
    {
      v48 = qword_61C750;
      LODWORD(v5) = 0;
      do
      {
        while ( (unsigned __int8)sub_405AF0(v48) && !*(_BYTE *)(v48 + 55) )
        {
          v49 = HIBYTE(v271);
          *(_QWORD *)(v48 + 32) = *((_QWORD *)&v270 + 1);
          *(_QWORD *)(v48 + 40) = v271;
          *(_WORD *)(v48 + 48) = WORD4(v271);
          *(_BYTE *)(v48 + 54) = BYTE14(v271);
          *(_BYTE *)(v48 + 50) = BYTE10(v271);
          *(_WORD *)(v48 + 52) = WORD6(v271);
          v50 = v272;
          *(_BYTE *)(v48 + 55) = v49;
          *(_BYTE *)(v48 + 56) = v50;
          v51 = BYTE11(v271);
          *(_BYTE *)(v48 + 51) = BYTE11(v271);
          v48 = *(_QWORD *)(v48 + 64);
          v5 = v51 | (unsigned int)v5;
          if ( !v48 )
            goto LABEL_67;
        }
        v53 = *(unsigned __int8 *)(v48 + 51);
        v48 = *(_QWORD *)(v48 + 64);
        v5 = v53 | (unsigned int)v5;
      }
      while ( v48 );
LABEL_67:
      st_size = 0LL;
LABEL_68:
      if ( (unsigned __int8)((*(_QWORD *)(v52 + 32) != 0LL) | *(_BYTE *)(v52 + 56) | *(_BYTE *)(v52 + 51))
         + *(unsigned __int8 *)(v52 + 54)
         + *(unsigned __int8 *)(v52 + 53)
         + *(unsigned __int8 *)(v52 + 52)
         + *(unsigned __int8 *)(v52 + 50) > 1 )
      {
LABEL_405:
        *(_BYTE *)(v52 + 55) = 0;
        *(_WORD *)(v52 + 48) = 0;
        sub_405B50(v52, &ptr);
        v37 = sub_405D00(&ptr);
LABEL_406:
        v37 = v37 - *(double *)si128.m128i_i64;
        ptr.st_dev = (unsigned int)(int)v37;
        ptr.st_dev ^= 0x8000000000000000LL;
LABEL_176:
        if ( ptr.st_dev >= qword_61C778 )
        {
          st_dev = 34LL * (unsigned int)dword_61C420;
          if ( st_dev < ptr.st_dev )
            st_dev = ptr.st_dev;
          qword_61C778 = st_dev;
        }
        continue;
      }
      while ( 1 )
      {
        v52 = *(_QWORD *)(v52 + 64);
        if ( !v52 )
          break;
        if ( *(unsigned __int8 *)(v52 + 53)
           + *(unsigned __int8 *)(v52 + 52)
           + *(unsigned __int8 *)(v52 + 50)
           + *(unsigned __int8 *)(v52 + 54)
           + (unsigned __int8)((*(_QWORD *)(v52 + 32) != 0LL) | *(_BYTE *)(v52 + 51) | *(_BYTE *)(v52 + 56)) > 1 )
          goto LABEL_405;
      }
LABEL_72:
      if ( byte_61C740 )
      {
LABEL_73:
        if ( (_BYTE)stream || file )
          goto LABEL_420;
        if ( !v247 || !setlocale(3, "") )
        {
          v128 = dcgettext(0LL, "failed to set locale", 5);
          error(0, 0, "%s", v128);
        }
        if ( byte_61CBA1 )
        {
          v125 = setlocale(3, 0LL);
          v126 = sub_40F880(v125);
          v127 = dcgettext(0LL, "using %s sorting rules", 5);
          error(0, 0, v127, v126);
        }
        else
        {
          v54 = dcgettext(0LL, "using simple byte comparison", 5);
          error(0, 0, "%s", v54);
        }
        v40 = qword_61C750;
        p_ptr = &ptr;
        v56 = 18LL;
        v57 = v269;
        src = (char *)&ptr;
        p_dest = 1LL;
        while ( v56 )
        {
          LODWORD(p_ptr->st_dev) = *(_DWORD *)v57;
          v57 = (__int64 *)((char *)v57 + 4);
          p_ptr = (struct stat *)((char *)p_ptr + 4);
          --v56;
        }
        if ( v40 )
        {
          LOBYTE(mutex) = v5;
          v58 = v40;
          v247 = (char *)&v258.rlim_cur + 1;
          v249 = (char *)v39;
          v250 = v41;
          while ( 1 )
          {
            v61 = *(_QWORD *)v58;
            v62 = *(_QWORD *)(v58 + 16);
            if ( *(_BYTE *)(v58 + 57) )
            {
              if ( v61 == -1LL )
                v61 = 0LL;
              v63 = sub_40D370(v61, v257);
              LOBYTE(v258.rlim_cur) = 43;
              v64 = __stpcpy_chk((char *)&v258.rlim_cur + 1, v63, 45LL);
              v65 = sub_40D370(v61 + 1, v257);
              LODWORD(dest) = 2124589;
              v240 = (char *)__stpcpy_chk((char *)&dest + 3, v65, 44LL);
              if ( *(_QWORD *)(v58 + 16) != -1LL )
              {
                v66 = v62 + 1;
                v67 = (const char *)sub_40D370(v66, v257);
                *(_WORD *)v64 = 11552;
                strcpy((char *)(v64 + 2), v67);
                v68 = (const char *)sub_40D370(v66 + (*(_QWORD *)(v58 + 24) == -1LL), v257);
                *v240 = 44;
                strcpy(v240 + 1, v68);
              }
              v40 = sub_40F860(1LL, &dest);
              v69 = sub_40F860(0LL, &v258);
              v70 = dcgettext(0LL, "obsolescent key %s used; consider %s instead", 5);
              error(0, 0, v70, v69, v40);
              v61 = *(_QWORD *)v58;
              v62 = *(_QWORD *)(v58 + 16);
            }
            v71 = st_size;
            if ( v61 != -1LL && v62 < v61 )
            {
              v72 = dcgettext(0LL, "key %lu has zero width and will be ignored", 5);
              error(0, 0, v72, p_dest);
              v62 = *(_QWORD *)(v58 + 16);
              v71 = 1;
            }
            v73 = 1;
            v74 = *(_QWORD *)(v58 + 48) & 0xFFFF00FF0000LL;
            if ( !v74 )
              v73 = *(unsigned __int8 *)(v58 + 54);
            if ( v62 || !*(_QWORD *)(v58 + 24) )
            {
              if ( !v71 )
              {
                if ( dword_61C424 == 128
                  && (!*(_BYTE *)(v58 + 48) && (!v73 || *(_QWORD *)(v58 + 8))
                   || !*(_BYTE *)(v58 + 49) && *(_QWORD *)(v58 + 24)) )
                {
                  v75 = dcgettext(0LL, "leading blanks are significant in key %lu; consider also specifying 'b'", 5);
                  error(0, 0, v75, p_dest);
                  v74 = *(_QWORD *)(v58 + 48) & 0xFFFF00FF0000LL;
                }
LABEL_86:
                if ( v74 )
                {
                  v59 = *(_QWORD *)v58 + 1LL;
                  if ( *(_QWORD *)v58 == -1LL )
                    v59 = 1LL;
                  if ( *(_QWORD *)(v58 + 16) == -1LL || *(_QWORD *)(v58 + 16) + 1LL > v59 )
                  {
                    v141 = dcgettext(0LL, "key %lu is numeric and spans multiple fields", 5);
                    error(0, 0, v141, p_dest);
                  }
                }
                goto LABEL_91;
              }
            }
            else if ( !v71 )
            {
              goto LABEL_86;
            }
            if ( !(_BYTE)st_size )
              goto LABEL_86;
LABEL_91:
            if ( *(_QWORD *)&ptr.st_gid && *(_QWORD *)&ptr.st_gid == *(_QWORD *)(v58 + 32) )
              *(_QWORD *)&ptr.st_gid = 0LL;
            if ( ptr.st_rdev && ptr.st_rdev == *(_QWORD *)(v58 + 40) )
              ptr.st_rdev = 0LL;
            ++p_dest;
            LOBYTE(ptr.st_size) &= *(_BYTE *)(v58 + 48) ^ 1;
            BYTE1(ptr.st_size) &= *(_BYTE *)(v58 + 49) ^ 1;
            BYTE6(ptr.st_size) &= *(_BYTE *)(v58 + 54) ^ 1;
            BYTE2(ptr.st_size) &= *(_BYTE *)(v58 + 50) ^ 1;
            BYTE4(ptr.st_size) &= *(_BYTE *)(v58 + 52) ^ 1;
            BYTE5(ptr.st_size) &= *(_BYTE *)(v58 + 53) ^ 1;
            BYTE3(ptr.st_size) &= *(_BYTE *)(v58 + 51) ^ 1;
            LOBYTE(ptr.st_blksize) &= *(_BYTE *)(v58 + 56) ^ 1;
            v60 = *(_BYTE *)(v58 + 55);
            v58 = *(_QWORD *)(v58 + 64);
            HIBYTE(ptr.st_size) &= v60 ^ 1;
            if ( !v58 )
            {
              v39 = (unsigned __int64)v249;
              v41 = v250;
              LOBYTE(v5) = (_BYTE)mutex;
              break;
            }
          }
        }
        v107 = sub_405AF0(&ptr);
        st_size_high = HIBYTE(ptr.st_size);
        if ( v107 )
        {
          if ( HIBYTE(ptr.st_size) )
          {
            if ( byte_61C75A )
            {
              if ( qword_61C750 )
              {
                p_dest = (unsigned __int64)&dest;
                sub_405B50(&ptr, &dest);
                v194 = dcngettext(
                         0LL,
                         "option '-%s' is ignored",
                         "options '-%s' are ignored",
                         strlen((const char *)&dest),
                         5);
                error(0, 0, v194, &dest);
                HIBYTE(ptr.st_size) = 1;
                goto LABEL_186;
              }
            }
            else
            {
              if ( byte_61C759 && qword_61C750 )
              {
                p_dest = (unsigned __int64)&dest;
                sub_405B50(&ptr, &dest);
                v161 = dcngettext(
                         0LL,
                         "option '-%s' is ignored",
                         "options '-%s' are ignored",
                         strlen((const char *)&dest),
                         5);
                error(0, 0, v161, &dest);
                HIBYTE(ptr.st_size) = st_size_high;
                goto LABEL_186;
              }
LABEL_187:
              if ( !byte_61C759 && qword_61C750 )
              {
                v110 = dcgettext(0LL, "option '-r' only applies to last-resort comparison", 5);
                error(0, 0, v110);
              }
            }
          }
        }
        else
        {
          if ( !byte_61C75A && !byte_61C759 )
            HIBYTE(ptr.st_size) = 0;
          p_dest = (unsigned __int64)&dest;
          sub_405B50(&ptr, &dest);
          v109 = dcngettext(0LL, "option '-%s' is ignored", "options '-%s' are ignored", strlen((const char *)&dest), 5);
          error(0, 0, v109, &dest);
          HIBYTE(ptr.st_size) = st_size_high;
          if ( st_size_high )
          {
LABEL_186:
            if ( !byte_61C75A )
              goto LABEL_187;
          }
        }
      }
      byte_61C75B = HIBYTE(v271);
      if ( (_BYTE)v5 )
      {
        v138 = sub_40F900(s1, 16LL);
        v139 = "open failed";
        v140 = (void *)v138;
        if ( !v138 )
          goto LABEL_414;
        src = (char *)&ptr;
        sub_40FC10(v138, &ptr, 16LL);
        if ( (unsigned int)sub_40FD70(v140) )
        {
          v139 = "close failed";
LABEL_414:
          v205 = dcgettext(0LL, v139, 5);
          sub_405DD0(v205, s1);
        }
        sub_40AA90(&xmmword_61C600);
        sub_40B360(&ptr, 0x10uLL);
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_405AF0(v269) )
      {
        v187 = sub_411410(v269, 0x48uLL);
        v188 = qword_61C750;
        v189 = &qword_61C750;
        while ( v188 )
        {
          v189 = (__int64 *)(v188 + 64);
          v188 = *(_QWORD *)(v188 + 64);
        }
        *v189 = v187;
        v52 = qword_61C750;
        st_size = 1LL;
        *(_QWORD *)(v187 + 64) = 0LL;
        v5 = BYTE11(v271);
        if ( v52 )
          goto LABEL_68;
        goto LABEL_72;
      }
      if ( byte_61C740 )
      {
        LOBYTE(st_size) = 0;
        LOBYTE(v5) = 0;
        goto LABEL_73;
      }
      byte_61C75B = HIBYTE(v271);
    }
    break;
  }
  if ( !qword_61C768 )
  {
    v160 = getenv("TMPDIR");
    if ( !v160 )
      v160 = "/tmp";
    sub_40A010(v160);
  }
  if ( !v39 )
  {
    v39 = 1LL;
    free(v41);
    v41 = (__int64 *)sub_411210(8LL);
    *v41 = (__int64)"-";
  }
  if ( qword_61C778 )
  {
    v111 = 34LL * (unsigned int)dword_61C420;
    if ( v111 < qword_61C778 )
      v111 = qword_61C778;
    qword_61C778 = v111;
  }
  if ( (_BYTE)stream )
  {
    if ( v39 <= 1 )
    {
      if ( file )
      {
        byte_61C400 = (char)stream;
        sub_405D00(&byte_61C400);
      }
      else
      {
        v41 = (__int64 *)*v41;
        v112 = (FILE *)sub_407CD0((char *)v41, "r");
        if ( v112 )
        {
          s1a = (char *)qword_61C750;
          v113 = byte_61C759 ^ 1;
          v114 = qword_61C428;
          if ( qword_61C778 >= (unsigned __int64)qword_61C428 )
            v114 = qword_61C778;
          v115 = 0LL;
          sub_405E30(&ptr, 32LL, v114);
          dest = 0LL;
          v241 = 0LL;
          while ( 1 )
          {
            if ( !(unsigned __int8)sub_4074D0(&ptr, v112, v41) )
            {
              v123 = 1;
              goto LABEL_220;
            }
            v116 = ptr.st_dev + *(_QWORD *)&ptr.st_mode - 32;
            v117 = ptr.st_dev + *(_QWORD *)&ptr.st_mode - 32 * ptr.st_nlink;
            if ( v115 )
            {
              v122 = sub_4082A0(&dest, ptr.st_dev + *(_QWORD *)&ptr.st_mode - 32);
              if ( v113 <= v122 )
                break;
            }
            while ( 1 )
            {
              v118 = v116;
              if ( v117 >= v116 )
                break;
              v116 -= 32LL;
              if ( v113 <= (int)sub_4082A0(v118, v116) )
                goto LABEL_218;
            }
            v119 = *(_QWORD *)(v116 + 8);
            v241 += ptr.st_nlink;
            if ( v115 < v119 )
            {
              while ( 1 )
              {
                v115 *= 2LL;
                if ( !v115 )
                  break;
                if ( v119 <= v115 )
                  goto LABEL_216;
              }
              v115 = *(_QWORD *)(v116 + 8);
LABEL_216:
              free(dest);
              v121 = (void *)sub_411210(v115);
              v119 = *(_QWORD *)(v116 + 8);
              dest = v121;
            }
            memcpy(dest, *(const void **)v116, v119);
            v260 = *(_QWORD *)(v116 + 8);
            if ( s1a )
            {
              v120 = (char *)dest + *(_QWORD *)(v116 + 24) - *(_QWORD *)v116;
              v261 = (unsigned __int64)dest + *(_QWORD *)(v116 + 16) - *(_QWORD *)v116;
              v262 = v120;
            }
          }
LABEL_218:
          v123 = 0;
          if ( (_BYTE)stream == 99 )
          {
            v176 = sub_40D370(&v241[(__int64)(ptr.st_dev + *(_QWORD *)&ptr.st_mode - v116) >> 5], &v258);
            v177 = qword_61CBC8;
            v178 = v176;
            v179 = dcgettext(0LL, "%s: %s:%s: disorder: ", 5);
            __fprintf_chk(stderr, 1LL, v179, v177, v41, v178);
            v180 = dcgettext(0LL, "standard error", 5);
            sub_407E70(v116, stderr, v180);
          }
LABEL_220:
          sub_407DF0(v112);
          free((void *)ptr.st_dev);
          free(dest);
          return (unsigned __int8)v123 ^ 1u;
        }
      }
      sub_407DD0(v41);
    }
    v218 = sub_40F630(4LL, v41[1]);
    v219 = dcgettext(0LL, "extra operand %s not allowed with -%c", 5);
    error(2, 0, v219, v218, (unsigned int)(char)stream);
LABEL_432:
    if ( v240 )
    {
      if ( v39 )
      {
LABEL_403:
        v198 = sub_40F630(4LL, *v41);
        v199 = dcgettext(0LL, "extra operand %s", 5);
        error(0, 0, v199, v198);
        v200 = dcgettext(0LL, "file operands cannot be combined with --files0-from", 5);
        __fprintf_chk(stderr, 1LL, "%s\n", v200);
LABEL_404:
        sub_40A0D0(2);
      }
      v220 = (FILE *)sub_407CD0(v240, "r");
      if ( !v220 )
LABEL_446:
        sub_407DD0(v240);
      sub_4103A0(rlimits);
      v221 = v240;
      if ( (unsigned __int8)sub_410440(v220) )
      {
        sub_407DF0(v220);
        v222 = rlimits[0].sa_handler;
        if ( rlimits[0].sa_handler )
        {
          free(v41);
          v41 = (__int64 *)rlimits[0].sa_mask.__val[0];
          v225 = "-";
          while ( 1 )
          {
            v226 = *(_BYTE **)(rlimits[0].sa_mask.__val[0] + 8 * v39);
            v227 = 2LL;
            v228 = "-";
            v229 = v226;
            do
            {
              if ( !v227 )
                break;
              v223 = *v229 < (unsigned __int8)*v228;
              v224 = *v229++ == (unsigned __int8)*v228++;
              --v227;
            }
            while ( v224 );
            if ( (!v223 && !v224) == v223 )
              break;
            ++v39;
            if ( !*v226 )
              goto LABEL_445;
            v223 = (unsigned __int64)v222 < v39;
            v224 = v222 == (__sighandler_t)v39;
            if ( v222 == (__sighandler_t)v39 )
              goto LABEL_61;
          }
          v230 = sub_40F630(4LL, *(_QWORD *)(rlimits[0].sa_mask.__val[0] + 8 * v39));
          v231 = dcgettext(0LL, "when reading file names from stdin, no file name of %s allowed", 5);
          error(2, 0, v231, v230);
LABEL_445:
          v232 = sub_40F700(0LL, 3LL, v240, v227, v225);
          v233 = dcgettext(0LL, "%s:%lu: invalid zero-length file name", 5);
          error(2, 0, v233, v232, v39);
          goto LABEL_446;
        }
        v234 = sub_40F630(4LL, v240);
        v235 = dcgettext(0LL, "no input from %s", 5);
        v221 = 0LL;
        error(2, 0, v235, v234);
      }
      v236 = sub_40F630(4LL, v221);
      v237 = dcgettext(0LL, "cannot read file names from %s", 5);
      v35 = 0LL;
      v38 = 2LL;
      error(2, 0, v237, v236);
LABEL_449:
      sub_411460(v38, v35, v36);
    }
    goto LABEL_61;
  }
  v142 = (const char **)v41;
  v143 = 0;
  v144 = 1;
  v145 = 0LL;
  v256 = "-";
  while ( 2 )
  {
    v146 = *v142;
    v147 = 2LL;
    v148 = "-";
    v149 = (__int64)*v142;
    do
    {
      if ( !v147 )
        break;
      v143 = *(_BYTE *)v149 < (unsigned __int8)*v148;
      v144 = *(_BYTE *)v149++ == (unsigned __int8)*v148++;
      --v147;
    }
    while ( v144 );
    if ( (!v143 && !v144) != v143 )
    {
      v149 = 4LL;
      if ( euidaccess(*v142, 4) )
      {
        v203 = *v142;
        v202 = "cannot read";
LABEL_412:
        v204 = dcgettext(0LL, v202, 5);
        sub_405DD0(v204, v203);
      }
    }
    ++v142;
    v143 = v39 < v145 + 1;
    v144 = v39 == v145 + 1;
    if ( v39 != v145 + 1 )
    {
      ++v145;
      continue;
    }
    break;
  }
  if ( !file )
    goto LABEL_271;
  v149 = 524353LL;
  v150 = open(file, 524353, 438LL);
  if ( v150 < 0 )
  {
LABEL_429:
    v217 = dcgettext(0LL, "open failed", 5);
    sub_405DD0(v217, file);
  }
  if ( v150 != 1 )
  {
    v149 = 1LL;
    sub_408E10(v150);
  }
LABEL_271:
  if ( (_BYTE)v248 )
  {
    v181 = sub_4113E0(v145 + 1, 16LL, v146, v147);
    for ( k = 0LL; ; ++k )
    {
      *(_QWORD *)(v181 + 16 * k) = v41[k];
      if ( k == v145 )
        break;
    }
    sub_409330(v181, 0LL, v145 + 1, file);
    goto LABEL_309;
  }
  if ( !sa_handler )
  {
    v195 = sub_40D6F0(2LL, v149, v146, v147);
    v196 = 8LL;
    if ( v195 <= 8 )
      v196 = v195;
    sa_handler = v196;
  }
  v255 = (char **)v41;
  v151 = 0xFFFFFFFFFFFFFFLL;
  v262 = 0LL;
  v248 = (__int64 *)(v145 + 1);
  if ( sa_handler <= 0xFFFFFFFFFFFFFFLL )
    v151 = sa_handler;
  v152 = 0LL;
  v247 = (char *)v151;
  v249 = (char *)(v151 << 8);
  v250 = (__int64 *)(2 * v151);
  mutex = (pthread_mutex_t *)&ptr.st_ino;
  while ( 2 )
  {
    src = *v255;
    stream = (FILE *)sub_407CD0(*v255, "r");
    if ( !stream )
      goto LABEL_427;
    v254 = 48LL;
    if ( sa_handler > 1 )
    {
      v163 = 1LL;
      v164 = 1LL;
      do
      {
        v164 *= 2LL;
        ++v163;
      }
      while ( (unsigned __int64)v247 > v164 );
      v254 = 32 * v163;
    }
    if ( v262 )
      goto LABEL_279;
    v41 = v248;
    s1 = (char *)v152;
    v39 = 0LL;
    p_dest = v254 + 1;
    v5 = v254 + 2;
    while ( 2 )
    {
      if ( v39 )
      {
        if ( !memcmp(v255[v39], v256, 2uLL) )
          v167 = __fxstat(1, 0, &ptr) != 0;
        else
          v167 = __xstat(1, v255[v39], &ptr) != 0;
      }
      else
      {
        v175 = fileno(stream);
        v167 = __fxstat(1, v175, &ptr) != 0;
      }
      if ( v167 )
      {
        v202 = "stat failed";
        v203 = v255[v39];
        goto LABEL_412;
      }
      if ( (ptr.st_mode & 0xF000) == 0x8000 )
      {
        st_size = ptr.st_size;
        if ( !qword_61C5E0 )
        {
          qword_61C5E0 = qword_61C778;
          if ( !qword_61C778 )
            goto LABEL_329;
        }
      }
      else
      {
        v165 = qword_61C778;
        if ( qword_61C778 )
          goto LABEL_361;
        st_size = 0x20000LL;
        if ( !qword_61C5E0 )
        {
LABEL_329:
          v168 = -1LL;
          if ( !getrlimit(RLIMIT_DATA, &v258) )
            v168 = v258.rlim_cur;
          if ( !getrlimit(RLIMIT_AS, &v258) && v168 > v258.rlim_cur )
            v168 = v258.rlim_cur;
          v169 = v168 >> 1;
          if ( !getrlimit(__RLIMIT_RSS, &v258) && v169 > 15 * (v258.rlim_cur >> 4) )
            v169 = 15 * (v258.rlim_cur >> 4);
          v242 = sub_40D900();
          v170 = sub_40D840(5LL, &v258);
          v171 = 0.125 * v170;
          v172 = v170 * 0.75;
          *(double *)si128.m128i_i64 = fmax(v242, v171);
          if ( (double)(int)v169 > v172 )
          {
            if ( v172 < 9.223372036854776e18 )
              v169 = (unsigned int)(int)v172;
            else
              v169 = (unsigned int)(int)(v172 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          }
          if ( (v169 & 0x8000000000000000LL) != 0LL )
            v173 = (double)(int)(v169 & 1 | (v169 >> 1)) + (double)(int)(v169 & 1 | (v169 >> 1));
          else
            v173 = (double)(int)v169;
          if ( v173 > *(double *)si128.m128i_i64 )
          {
            if ( *(double *)si128.m128i_i64 < 9.223372036854776e18 )
LABEL_375:
              v169 = (unsigned int)(int)*(double *)si128.m128i_i64;
            else
              v169 = (unsigned int)(int)(*(double *)si128.m128i_i64 - 9.223372036854776e18) ^ 0x8000000000000000LL;
          }
          v174 = 34LL * (unsigned int)dword_61C420;
          if ( v174 < v169 )
            v174 = v169;
          qword_61C5E0 = v174;
        }
      }
      v165 = qword_61C5E0;
      v166 = st_size * p_dest + 1;
      if ( st_size != v166 / p_dest || v166 >= qword_61C5E0 - v5 )
      {
LABEL_361:
        v152 = (unsigned __int64)s1;
        v5 = v165;
        goto LABEL_362;
      }
      ++v39;
      v5 += v166;
      if ( v39 < (unsigned __int64)v41 )
        continue;
      break;
    }
    v152 = (unsigned __int64)s1;
LABEL_362:
    sub_405E30(&dest, v254, v5);
LABEL_279:
    v264 = 0;
    v248 = (__int64 *)((char *)v248 - 1);
LABEL_282:
    if ( !(unsigned __int8)sub_4074D0(&dest, stream, src) )
    {
      v35 = src;
      sub_407DF0(stream);
      if ( v248 )
        goto LABEL_305;
      v38 = (__int64)dest;
      free(dest);
      v183 = ::ptr;
      v36 = (v152 * (unsigned __int128)0x10uLL) >> 64 != 0;
      if ( (v152 & 0x800000000000000LL) == 0 && is_mul_ok(v152, 0x10uLL) )
      {
        v184 = (_QWORD *)sub_411210(16 * v152);
        v185 = v184;
        while ( v183 )
        {
          v186 = (char *)v183 + 13;
          v185[1] = v183;
          v183 = (_QWORD *)*v183;
          v185 += 2;
          *(v185 - 2) = v186;
        }
        sub_409330(v184, v152, v152, file);
        free(v184);
        goto LABEL_307;
      }
      goto LABEL_449;
    }
    v156 = v264;
    if ( !v264 )
      goto LABEL_286;
    if ( v248 )
    {
      if ( v254 + 1 >= (unsigned __int64)&v262[-v260 - v261 * v254] )
      {
LABEL_286:
        *(_QWORD *)&xmmword_61CB80 = 0LL;
        v157 = &v262[(_QWORD)dest];
        goto LABEL_287;
      }
      v263 = v260;
      sub_407DF0(stream);
LABEL_305:
      ++v255;
      continue;
    }
    break;
  }
  v157 = &v262[(_QWORD)dest];
  *(_QWORD *)&xmmword_61CB80 = 0LL;
  if ( v263 | v152 )
  {
LABEL_287:
    ++v152;
    v156 = 0;
    v158 = sub_4090C0(&v258, 0LL) + 13;
  }
  else
  {
    sub_407DF0(stream);
    v159 = sub_407CD0(file, "w");
    if ( !v159 )
      goto LABEL_425;
    v258.rlim_cur = v159;
    v158 = (__int64)file;
    v152 = 0LL;
  }
  if ( v261 > 1 )
  {
    ptr.st_dev = sub_40CFD0(sub_407850, v250);
    pthread_mutex_init(mutex, 0LL);
    pthread_cond_init((pthread_cond_t *)&ptr.st_size, 0LL);
    v153 = v261;
    v154 = sub_411210(v249);
    *(_QWORD *)(v154 + 48) = v153;
    v155 = v154;
    *(_QWORD *)(v154 + 40) = v153;
    *(_QWORD *)(v154 + 24) = 0LL;
    *(_QWORD *)(v154 + 16) = 0LL;
    *(_QWORD *)(v154 + 8) = 0LL;
    *(_QWORD *)v154 = 0LL;
    *(_QWORD *)(v154 + 32) = 0LL;
    *(_QWORD *)(v154 + 56) = 0LL;
    *(_DWORD *)(v154 + 80) = 0;
    *(_BYTE *)(v154 + 84) = 0;
    pthread_mutex_init((pthread_mutex_t *)(v154 + 88), 0LL);
    sub_4061F0(v155, v155 + 128, v157, v247, v153, 0LL);
    sub_409880((_DWORD)v157, (_DWORD)v247, v261, v155 + 128, (unsigned int)&ptr, v258.rlim_cur, v158);
  }
  else
  {
    sub_4085D0(v157 - 32, v258.rlim_cur, v158);
  }
  sub_407DF0((FILE *)v258.rlim_cur);
  if ( !v156 )
    goto LABEL_282;
  free(dest);
LABEL_307:
  while ( dword_61C69C > 0 )
    sub_405FB0(-1);
LABEL_309:
  if ( byte_61C758 && (unsigned int)sub_411F80(stdin) == -1 )
  {
    v162 = dcgettext(0LL, "close failed", 5);
    sub_405DD0(v162, "-");
  }
  return 0LL;
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

void *sub_40585B()
{
  return &unk_61C588;
}

__int64 sub_40587A()
{
  return 0LL;
}

void *sub_4058B1()
{
  void *result; // rax

  if ( !byte_61C5C8 )
  {
    while ( qword_61C5D0 < (unsigned __int64)(&qword_61BE38 - qword_61BE30 - 1) )
      ((void (*)(void))qword_61BE30[++qword_61C5D0])();
    result = sub_40585B();
    byte_61C5C8 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_405908()
{
  return sub_40587A();
}

unsigned __int64 __fastcall sub_405910(__int64 a1, unsigned __int64 a2)
{
  return *(int *)(a1 + 8) % a2;
}

bool __fastcall sub_405920(__int64 a1, __int64 a2)
{
  return *(_DWORD *)(a1 + 8) == *(_DWORD *)(a2 + 8);
}

__int64 __fastcall sub_405930(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // rcx
  char v2; // r10
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 *v5; // rsi
  unsigned int v6; // r8d
  unsigned __int8 *v7; // rcx
  unsigned int v8; // edx

  v1 = *a1;
  v2 = 0;
  result = 0LL;
  v4 = **a1;
  while ( 1 )
  {
    v5 = v1 + 1;
    if ( (unsigned int)(unsigned __int8)v4 - 48 > 9 )
      break;
    if ( (unsigned __int8)result < (unsigned __int8)v4 )
      result = v4;
    v2 = 0;
    v4 = (char)v1[1];
    if ( v4 == dword_61CBA4 )
    {
      v4 = v1[2];
      v5 = v1 + 2;
      v2 = 1;
    }
    v1 = v5;
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
      v1 = v5;
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
  char v1; // bl
  unsigned __int8 v2; // al
  unsigned int v3; // edx
  char *v5; // [rsp+8h] [rbp-10h] BYREF

  v1 = *a1;
  v5 = &a1[*a1 == 45];
  v2 = sub_405930((unsigned __int8 **)&v5);
  v3 = 0;
  if ( v2 > 0x30u )
  {
    v3 = byte_4149C0[(unsigned __int8)*v5];
    if ( v1 == 45 )
      return (unsigned int)-byte_4149C0[(unsigned __int8)*v5];
  }
  return v3;
}

__int64 __fastcall sub_405A40(unsigned __int8 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r9
  char *v5; // rax
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdx
  __int64 v9; // r8
  unsigned __int8 v10; // cl

  while ( byte_61CA80[*a1] )
    ++a1;
  v2 = 12LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = (v3 + v2) >> 1;
    v5 = (&off_61C440)[2 * v4];
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
  __int64 result; // rax

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 32) && !*(_QWORD *)(a1 + 40) )
  {
    result = *(unsigned __int8 *)(a1 + 48);
    if ( (_BYTE)result )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 49) && (*(_QWORD *)(a1 + 48) & 0xFFFF00FF0000LL) == 0 )
    {
      result = *(unsigned __int8 *)(a1 + 54);
      if ( !(_BYTE)result )
      {
        if ( !*(_BYTE *)(a1 + 56) )
          return *(unsigned __int8 *)(a1 + 51) ^ 1u;
        return result;
      }
      return 0LL;
    }
  }
  return result;
}

_BYTE *__fastcall sub_405B50(__int64 a1, _BYTE *a2)
{
  _BYTE *result; // rax

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
  char v3; // cl
  unsigned int v5; // edx
  unsigned int v6; // eax

  v3 = *a1;
  if ( *a1 )
  {
    v5 = a3 - 1;
    v6 = a3 & 0xFFFFFFFD;
    while ( 2 )
    {
      switch ( v3 )
      {
        case 'M':
          *(_BYTE *)(a2 + 54) = 1;
          goto LABEL_5;
        case 'R':
          *(_BYTE *)(a2 + 51) = 1;
          goto LABEL_5;
        case 'V':
          *(_BYTE *)(a2 + 56) = 1;
          goto LABEL_5;
        case 'b':
          if ( !v6 )
            *(_BYTE *)(a2 + 48) = 1;
          if ( v5 <= 1 )
            *(_BYTE *)(a2 + 49) = 1;
          goto LABEL_5;
        case 'd':
          *(_QWORD *)(a2 + 32) = byte_61C880;
          goto LABEL_5;
        case 'f':
          *(_QWORD *)(a2 + 40) = byte_61C780;
          goto LABEL_5;
        case 'g':
          *(_BYTE *)(a2 + 52) = 1;
          goto LABEL_5;
        case 'h':
          *(_BYTE *)(a2 + 53) = 1;
          goto LABEL_5;
        case 'i':
          if ( !*(_QWORD *)(a2 + 32) )
            *(_QWORD *)(a2 + 32) = byte_61C980;
          goto LABEL_5;
        case 'n':
          *(_BYTE *)(a2 + 50) = 1;
          goto LABEL_5;
        case 'r':
          *(_BYTE *)(a2 + 55) = 1;
LABEL_5:
          v3 = *++a1;
          if ( !*a1 )
            return a1;
          continue;
        default:
          return a1;
      }
    }
  }
  return a1;
}

int __fastcall compar(const char **a1, const char **a2)
{
  return strcmp(*a1, *a2);
}

__int64 __fastcall sub_405D00(__int64 a1)
{
  char *v1; // rax

  v1 = dcgettext(0LL, "options '-%s' are incompatible", 5);
  error(2, 0, v1, a1);
  return sub_405D30(2LL, 0LL);
}

__int64 __fastcall sub_405D30(__int64 a1, const char *a2)
{
  __int64 v2; // rbp
  char *v3; // rbx
  char *v4; // rax

  v2 = sub_40F880(a1);
  v3 = dcgettext(0LL, a2, 5);
  v4 = dcgettext(0LL, "%s: invalid field specification %s", 5);
  error(2, 0, v4, v3, v2);
  return sub_405D80(2);
}

int __fastcall sub_405D80(int sig)
{
  const char *v1; // rbx

  v1 = (const char *)ptr;
  if ( ptr )
  {
    do
    {
      unlink(v1 + 13);
      v1 = *(const char **)v1;
    }
    while ( v1 );
  }
  ptr = 0LL;
  signal(sig, 0LL);
  return raise(sig);
}

void __fastcall __noreturn sub_405DD0(const char *a1, char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rdx
  const char *v6; // rbp
  int *v7; // rax

  v5 = a2;
  if ( !a2 )
    goto LABEL_3;
  while ( 1 )
  {
    v6 = (const char *)sub_40F700(0LL, 3LL, v5, a4, a5);
    v7 = __errno_location();
    error(2, *v7, "%s: %s", a1, v6);
LABEL_3:
    v5 = dcgettext(0LL, "standard output", 5);
  }
}

void *__fastcall sub_405E30(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  size_t v5; // rbx
  size_t v6; // rdi
  void *result; // rax
  __int64 v8; // rdx

  while ( 1 )
  {
    v5 = (a3 & 0xFFFFFFFFFFFFFFE0LL) + 32;
    v6 = v5;
    result = malloc(v5);
    *(_QWORD *)a1 = result;
    if ( result )
      break;
    a3 = v5 >> 1;
    if ( a2 + 1 >= a3 )
      sub_411460(v6, a2, v8);
  }
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}

__int64 __fastcall sub_405EB0(char *a1, char *a2)
{
  char *v2; // rbx
  __int64 result; // rax

  v2 = a1;
  result = (int)sub_40D3C0(a1);
  if ( a2 > a1 )
  {
    do
      result += *v2++ == 9;
    while ( a2 != v2 );
  }
  return result;
}

size_t __fastcall sub_405EF0(char *dest, char *src, size_t n)
{
  int *v4; // rax
  int *v5; // rbx
  size_t result; // rax
  char *v7; // rax
  char *v8; // rax
  __int64 v9; // rbx
  char *v10; // rax

  v4 = __errno_location();
  *v4 = 0;
  v5 = v4;
  result = strxfrm(dest, src, n);
  if ( *v5 )
  {
    v7 = dcgettext(0LL, "string transformation failed", 5);
    error(0, *v5, v7);
    v8 = dcgettext(0LL, "set LC_ALL='C' to work around the problem", 5);
    error(0, 0, v8);
    v9 = sub_40F550(0LL, 8LL, src);
    v10 = dcgettext(0LL, "the untransformed string was %s", 5);
    error(2, 0, v10, v9);
    return sub_405FB0(2);
  }
  return result;
}

__int64 __fastcall sub_405FB0(__pid_t pid)
{
  int v1; // edx
  bool v3; // zf
  __pid_t v4; // edi
  __pid_t v5; // eax
  unsigned int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rbx
  char *v10; // rax
  __int64 v11; // rbp
  char *v12; // rbx
  int *v13; // rax
  int stat_loc; // [rsp+Ch] [rbp-2Ch] BYREF
  char v15[8]; // [rsp+10h] [rbp-28h] BYREF
  __pid_t v16; // [rsp+18h] [rbp-20h]

  v1 = 0;
  v3 = pid == 0;
  v4 = -1;
  if ( !v3 )
    v4 = pid;
  LOBYTE(v1) = v3;
  v5 = waitpid(v4, &stat_loc, v1);
  if ( v5 >= 0 )
  {
    v6 = v5;
    if ( !v5 )
      return v6;
    if ( pid <= 0 )
    {
      v16 = v5;
      v8 = sub_40CDE0(qword_61C6A0, v15);
      if ( !v8 )
        return v6;
      *(_BYTE *)(v8 + 12) = 2;
    }
    if ( !(stat_loc & 0x7F | BYTE1(stat_loc)) )
    {
      --dword_61C69C;
      return v6;
    }
    v9 = sub_40F630(4LL, arg);
    v10 = dcgettext(0LL, "%s [-d] terminated abnormally", 5);
    error(2, 0, v10, v9);
  }
  v11 = sub_40F630(4LL, arg);
  v12 = dcgettext(0LL, "waiting for %s [-d]", 5);
  v13 = __errno_location();
  error(2, *v13, v12, v11);
  return sub_4060A0(2);
}

__int64 __fastcall sub_4060A0(__pid_t pid)
{
  __int64 result; // rax
  _DWORD v2[6]; // [rsp+0h] [rbp-18h] BYREF

  v2[2] = pid;
  result = sub_40CDE0(qword_61C6A0, v2);
  if ( result )
  {
    *(_BYTE *)(result + 12) = 2;
    return sub_405FB0(pid);
  }
  return result;
}

void __fastcall __noreturn sub_4060D0(unsigned int a1, const void *a2)
{
  const void *v2; // rbx
  char v3[20]; // [rsp+4h] [rbp-14h] BYREF

  write(2, a2, strlen((const char *)a2));
  if ( a1 )
  {
    v2 = (const void *)sub_40D2B0(a1, v3);
    write(2, ": errno ", 8uLL);
    write(2, v2, strlen((const char *)v2));
  }
  write(2, "\n", 1uLL);
  _exit(2);
}

__int64 __fastcall sub_406190(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = qword_61C6A0;
  if ( !qword_61C6A0 && (v3 = 0LL, v2 = sub_40C600(47LL, 0LL, sub_405910, sub_405920, 0LL), (qword_61C6A0 = v2) == 0)
    || (*(_BYTE *)(a1 + 12) = 1, v3 = a1, (result = sub_40CDA0(v2, a1)) == 0) )
  {
    sub_411460(v2, v3, v5);
  }
  return result;
}

__int64 __fastcall sub_4061F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, char a6)
{
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax

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
    v15 = sub_4061F0(a2, a2 + 128, v8, v6 >> 1, v7, 1LL);
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
  sub_40D070(*(_QWORD *)a1, a2);
  *(_BYTE *)(a2 + 84) = 1;
  pthread_cond_signal((pthread_cond_t *)(a1 + 48));
  return pthread_mutex_unlock((pthread_mutex_t *)(a1 + 8));
}

unsigned __int64 __fastcall sub_406360(char *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  unsigned __int8 *v7; // rdi
  unsigned __int8 *v8; // rdi
  __int64 v9; // rsi
  char v10; // cl
  unsigned __int8 *v11; // rdi

  result = (unsigned __int64)&a1[a2 - 1];
  v4 = *a3;
  v5 = a3[1];
  if ( dword_61C424 == 128 )
  {
    if ( result <= (unsigned __int64)a1 )
      goto LABEL_6;
    v9 = v4 - 1;
    if ( v4 )
    {
      do
      {
        v10 = byte_61CA80[(unsigned __int8)*a1];
        while ( !v10 )
        {
          if ( result <= (unsigned __int64)a1 )
            goto LABEL_6;
          do
          {
            if ( (char *)result == ++a1 )
            {
              a1 = (char *)result;
              goto LABEL_6;
            }
            v10 = byte_61CA80[(unsigned __int8)*a1];
          }
          while ( !v10 );
          if ( --v9 == -1 )
            goto LABEL_12;
        }
        ++a1;
      }
      while ( result > (unsigned __int64)a1 );
      v11 = (unsigned __int8 *)&a1[v5];
      if ( result > (unsigned __int64)v11 )
        return (unsigned __int64)v11;
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
  if ( !*((_BYTE *)a3 + 48) )
  {
LABEL_6:
    v7 = (unsigned __int8 *)&a1[v5];
    if ( result > (unsigned __int64)v7 )
      return (unsigned __int64)v7;
    return result;
  }
  while ( byte_61CA80[(unsigned __int8)*a1] )
  {
    if ( result <= (unsigned __int64)++a1 )
      goto LABEL_6;
  }
  v8 = (unsigned __int8 *)&a1[v5];
  if ( result > (unsigned __int64)v8 )
    return (unsigned __int64)v8;
  return result;
}

char *__fastcall sub_406470(char *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rcx
  char *result; // rax
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdi
  char v9; // si

  v3 = *(_QWORD *)(a3 + 24);
  v4 = (unsigned __int64)&a1[a2 - 1];
  result = a1;
  v6 = (v3 == 0) + *(_QWORD *)(a3 + 16);
  if ( dword_61C424 == 128 )
  {
    if ( v4 > (unsigned __int64)a1 )
    {
      v8 = v6 - 1;
      if ( v6 )
      {
        do
        {
          v9 = byte_61CA80[(unsigned __int8)*result];
          while ( !v9 )
          {
            if ( v4 > (unsigned __int64)result )
            {
              do
              {
                if ( (char *)v4 == ++result )
                {
                  result = (char *)v4;
                  goto LABEL_6;
                }
                v9 = byte_61CA80[(unsigned __int8)*result];
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
      while ( byte_61CA80[(unsigned __int8)*result] )
      {
        if ( (char *)v4 == ++result )
        {
          result = (char *)(v3 + v4);
          if ( v4 <= v3 + v4 )
            return (char *)v4;
          return result;
        }
      }
    }
    result += v3;
    if ( v4 <= (unsigned __int64)result )
      return (char *)v4;
  }
  return result;
}

__int64 __fastcall sub_4065B0(__int64 a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // r15
  char *v3; // rbx
  char *v4; // r10
  __int64 v5; // r12
  char *v6; // r14
  char *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  size_t v10; // r11
  size_t v11; // r10
  char v12; // cl
  unsigned __int8 v13; // cl
  unsigned int v14; // eax
  __int64 v15; // rbp
  __int64 v16; // r11
  __int64 v17; // r11
  char *i; // rdi
  unsigned __int8 *j; // rsi
  unsigned int v21; // eax
  unsigned __int64 v22; // rdi
  char *v23; // rcx
  char *v24; // rsi
  char *v25; // rdi
  char *v26; // r8
  unsigned __int8 v27; // al
  unsigned __int8 *v28; // rdi
  unsigned __int8 v29; // al
  char *v30; // rax
  long double v31; // fst7
  long double v32; // fst6
  char *k; // rbx
  char *v34; // rbp
  int v35; // r13d
  int v36; // eax
  unsigned int v37; // eax
  char *v38; // rcx
  char *v39; // r8
  int v40; // edx
  bool v41; // cf
  int v42; // ebx
  int v43; // eax
  __int64 v44; // rax
  char *v45; // rbp
  char *v46; // r13
  size_t v47; // r15
  size_t v48; // r12
  size_t v49; // rbx
  size_t v50; // rdx
  unsigned __int64 v51; // rax
  char *v52; // rcx
  size_t v53; // rax
  size_t v54; // rdx
  char *v55; // rdi
  unsigned __int64 v56; // r14
  char *v57; // rax
  size_t v58; // r11
  size_t v59; // r10
  int v60; // eax
  char *v61; // r11
  size_t v62; // r10
  unsigned int v63; // eax
  int v64; // eax
  size_t v65; // rdx
  int v66; // eax
  __int64 v67; // r14
  size_t v68; // rdx
  unsigned int v69; // [rsp+0h] [rbp-2188h]
  long double v70; // [rsp+0h] [rbp-2188h]
  size_t v71; // [rsp+0h] [rbp-2188h]
  __int64 v72; // [rsp+18h] [rbp-2170h]
  char v73; // [rsp+26h] [rbp-2162h]
  unsigned __int8 v74; // [rsp+27h] [rbp-2161h]
  char *srcd; // [rsp+28h] [rbp-2160h]
  char *srce; // [rsp+28h] [rbp-2160h]
  char *srcf; // [rsp+28h] [rbp-2160h]
  char *src; // [rsp+28h] [rbp-2160h]
  char *srcg; // [rsp+28h] [rbp-2160h]
  char *srch; // [rsp+28h] [rbp-2160h]
  char *srca; // [rsp+28h] [rbp-2160h]
  char *srcb; // [rsp+28h] [rbp-2160h]
  char *srci; // [rsp+28h] [rbp-2160h]
  char *srcj; // [rsp+28h] [rbp-2160h]
  char *srcc; // [rsp+28h] [rbp-2160h]
  size_t v86; // [rsp+30h] [rbp-2158h]
  size_t v87; // [rsp+30h] [rbp-2158h]
  size_t v88; // [rsp+30h] [rbp-2158h]
  size_t v89; // [rsp+30h] [rbp-2158h]
  size_t v90; // [rsp+30h] [rbp-2158h]
  char *v91; // [rsp+30h] [rbp-2158h]
  char *v92; // [rsp+30h] [rbp-2158h]
  size_t v93; // [rsp+30h] [rbp-2158h]
  size_t v94; // [rsp+30h] [rbp-2158h]
  char *v95; // [rsp+30h] [rbp-2158h]
  size_t v96; // [rsp+30h] [rbp-2158h]
  unsigned __int8 *v99; // [rsp+48h] [rbp-2140h]
  size_t v100; // [rsp+48h] [rbp-2140h]
  size_t v101; // [rsp+48h] [rbp-2140h]
  char *v102; // [rsp+50h] [rbp-2138h]
  char *s2; // [rsp+58h] [rbp-2130h]
  void *ptr; // [rsp+60h] [rbp-2128h]
  size_t size; // [rsp+68h] [rbp-2120h]
  char *v106; // [rsp+78h] [rbp-2110h]
  __int64 v107; // [rsp+80h] [rbp-2108h]
  unsigned __int8 *v108; // [rsp+88h] [rbp-2100h]
  size_t v109; // [rsp+90h] [rbp-20F8h]
  size_t v110; // [rsp+98h] [rbp-20F0h]
  char *endptr; // [rsp+A8h] [rbp-20E0h] BYREF
  char *v112[2]; // [rsp+B0h] [rbp-20D8h] BYREF
  char v113[16]; // [rsp+C0h] [rbp-20C8h] BYREF
  __int128 v114[9]; // [rsp+D0h] [rbp-20B8h] BYREF
  __int64 v115; // [rsp+160h] [rbp-2028h]
  int v116; // [rsp+168h] [rbp-2020h]
  __m128i si128; // [rsp+16Ch] [rbp-201Ch] BYREF
  __m128i v118; // [rsp+17Ch] [rbp-200Ch]
  __m128i v119; // [rsp+18Ch] [rbp-1FFCh]
  __m128i v120; // [rsp+19Ch] [rbp-1FECh]
  __m128i v121; // [rsp+1ACh] [rbp-1FDCh]
  __m128i v122; // [rsp+1BCh] [rbp-1FCCh]
  __m128i v123; // [rsp+1CCh] [rbp-1FBCh]
  __m128i v124; // [rsp+1DCh] [rbp-1FACh]
  __m128i v125; // [rsp+1ECh] [rbp-1F9Ch]
  __int64 v126; // [rsp+1FCh] [rbp-1F8Ch]
  int v127; // [rsp+204h] [rbp-1F84h]
  char v128[4000]; // [rsp+210h] [rbp-1F78h] BYREF
  _TBYTE s1[405]; // [rsp+11B0h] [rbp-FD8h] BYREF

  v2 = a2[2];
  v3 = *(char **)(a1 + 24);
  v4 = (char *)a2[3];
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
    if ( v2 >= (unsigned __int8 *)v4 )
      v7 = (char *)v2;
    v10 = v3 - v6;
    v11 = v7 - (char *)v2;
    if ( byte_61CBA1 || (*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFF0000LL) != 0 || *(_BYTE *)(v5 + 56) )
      break;
    if ( !v9 )
    {
      if ( !v10 )
      {
        v69 = -(v7 != (char *)v2);
        goto LABEL_19;
      }
      if ( v11 )
      {
        if ( v8 )
        {
          while ( v6 < v3 && v2 < (unsigned __int8 *)v7 )
          {
            v40 = *(unsigned __int8 *)(v8 + (unsigned __int8)*v6++) - *(unsigned __int8 *)(v8 + *v2++);
            if ( v40 )
            {
LABEL_171:
              v69 = v40;
              v67 = v5;
              goto LABEL_172;
            }
          }
        }
        else
        {
          v68 = v7 - (char *)v2;
          if ( v10 <= v11 )
            v68 = v3 - v6;
          srcc = (char *)(v7 - (char *)v2);
          v69 = memcmp(v6, v2, v68);
          if ( v69 )
            goto LABEL_35;
          v10 = v3 - v6;
          v11 = (size_t)srcc;
        }
        if ( v10 >= v11 )
        {
          v69 = v10 != v11;
          goto LABEL_19;
        }
        v67 = v5;
        v69 = -1;
      }
      else
      {
        v67 = v5;
        v69 = 1;
      }
LABEL_172:
      if ( !*(_BYTE *)(v67 + 55) )
        return v69;
      return -v69;
    }
    v38 = v6;
    v39 = v6;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( v38 >= v3 || !*(_BYTE *)(v9 + (unsigned __int8)*v38) )
        {
          if ( v2 >= (unsigned __int8 *)v7 )
            goto LABEL_101;
          while ( *(_BYTE *)(v9 + *v2) )
          {
            if ( v7 == (char *)++v2 )
            {
              v2 = (unsigned __int8 *)v7;
              goto LABEL_101;
            }
          }
          if ( v3 <= v38 || v7 <= (char *)v2 )
          {
LABEL_101:
            v41 = v38 < v3;
            goto LABEL_102;
          }
          v40 = *(unsigned __int8 *)(v8 + (unsigned __int8)*v38) - *(unsigned __int8 *)(v8 + *v2);
          if ( v40 )
            goto LABEL_171;
          ++v2;
        }
        ++v38;
      }
    }
    while ( 1 )
    {
      if ( v39 < v3 && *(_BYTE *)(v9 + (unsigned __int8)*v39) )
        goto LABEL_92;
      if ( v2 >= (unsigned __int8 *)v7 )
        break;
      while ( *(_BYTE *)(v9 + *v2) )
      {
        if ( v7 == (char *)++v2 )
        {
          v2 = (unsigned __int8 *)v7;
          goto LABEL_153;
        }
      }
      if ( v3 <= v39 || v7 <= (char *)v2 )
        break;
      v40 = (unsigned __int8)*v39 - *v2;
      if ( v40 )
        goto LABEL_171;
      ++v2;
LABEL_92:
      ++v39;
    }
LABEL_153:
    v41 = v39 < v3;
LABEL_102:
    v69 = v41 - (v7 > (char *)v2);
LABEL_19:
    if ( v69 )
      goto LABEL_35;
LABEL_20:
    v5 = *(_QWORD *)(v5 + 64);
    if ( !v5 )
      return v69;
    v6 = *(char **)a1;
    v15 = *(_QWORD *)(a1 + 8);
    v2 = *a2;
    if ( *(_QWORD *)(v5 + 16) == -1LL )
    {
      v3 = &v6[v15 - 1];
      v4 = (char *)&a2[1][(_QWORD)v2 - 1];
      if ( *(_QWORD *)v5 == -1LL )
        goto LABEL_25;
LABEL_23:
      v6 = (char *)sub_406360(v6, v15, (__int64 *)v5);
      v2 = (unsigned __int8 *)sub_406360((char *)v2, v17, (__int64 *)v5);
    }
    else
    {
      v3 = sub_406470(*(char **)a1, *(_QWORD *)(a1 + 8), v5);
      v4 = sub_406470((char *)v2, v16, v5);
      if ( *(_QWORD *)v5 != -1LL )
        goto LABEL_23;
LABEL_25:
      if ( *(_BYTE *)(v5 + 48) )
      {
        if ( v3 > v6 )
        {
          while ( byte_61CA80[(unsigned __int8)*v6] )
          {
            if ( v3 == ++v6 )
            {
              v6 = v3;
              break;
            }
          }
        }
        if ( v4 > (char *)v2 )
        {
          while ( byte_61CA80[*v2] )
          {
            if ( v4 == (char *)++v2 )
            {
              v2 = (unsigned __int8 *)v4;
              goto LABEL_2;
            }
          }
        }
      }
    }
  }
  v72 = v9 | v8;
  if ( !(v9 | v8) )
  {
    v12 = *v3;
    *v3 = 0;
    v73 = v12;
    v13 = *v7;
    *v7 = 0;
    v74 = v13;
    goto LABEL_10;
  }
  v22 = v10 + v11 + 2;
  if ( v22 <= 0xFA0 )
  {
    v23 = v128;
    ptr = 0LL;
    v24 = &v128[v10 + 1];
    if ( v10 )
      goto LABEL_44;
LABEL_105:
    *v23 = 0;
    if ( !v11 )
      goto LABEL_106;
LABEL_52:
    v28 = &v2[v11];
    v11 = 0LL;
    while ( 2 )
    {
      v29 = *v2;
      if ( !v9 )
      {
LABEL_58:
        v29 = *(_BYTE *)(v8 + v29);
        goto LABEL_55;
      }
      if ( !*(_BYTE *)(v9 + v29) )
      {
        if ( v8 )
          goto LABEL_58;
LABEL_55:
        v24[v11++] = v29;
      }
      if ( v28 == ++v2 )
      {
        v30 = &v24[v11];
        goto LABEL_60;
      }
      continue;
    }
  }
  srch = (char *)(v7 - (char *)v2);
  v44 = sub_411210(v22);
  v10 = v3 - v6;
  v11 = (size_t)srch;
  v23 = (char *)v44;
  ptr = (void *)v44;
  v24 = (char *)(v44 + v3 - v6 + 1);
  if ( v3 == v6 )
    goto LABEL_105;
LABEL_44:
  v25 = &v6[v10];
  v26 = v6;
  v10 = 0LL;
  while ( 2 )
  {
    v27 = *v26;
    if ( !v9 )
    {
LABEL_50:
      v27 = *(_BYTE *)(v8 + v27);
      goto LABEL_47;
    }
    if ( !*(_BYTE *)(v9 + v27) )
    {
      if ( v8 )
        goto LABEL_50;
LABEL_47:
      v23[v10++] = v27;
    }
    if ( v25 != ++v26 )
      continue;
    break;
  }
  v23[v10] = 0;
  if ( v11 )
    goto LABEL_52;
LABEL_106:
  v30 = v24;
LABEL_60:
  *v30 = 0;
  v2 = (unsigned __int8 *)v24;
  v6 = v23;
LABEL_10:
  if ( *(_BYTE *)(v5 + 50) )
  {
    for ( i = v6; byte_61CA80[(unsigned __int8)*i]; ++i )
      ;
    for ( j = v2; byte_61CA80[*j]; ++j )
      ;
    v87 = v11;
    srce = (char *)v10;
    v21 = sub_4106A0(i, j, (unsigned int)dword_61CBA8, (unsigned int)dword_61CBA4);
    v10 = (size_t)srce;
    v11 = v87;
    v69 = v21;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v5 + 52) )
  {
    v88 = v11;
    srcf = (char *)v10;
    v70 = strtold(v6, &endptr);
    v31 = strtold((const char *)v2, v112);
    v10 = (size_t)srcf;
    v11 = v88;
    if ( v6 == endptr )
    {
      v69 = -(v112[0] != (char *)v2);
      goto LABEL_17;
    }
    if ( v2 == (unsigned __int8 *)v112[0] )
    {
      v69 = 1;
      goto LABEL_17;
    }
    if ( v31 <= v70 )
    {
      v32 = v70;
      v69 = 1;
      if ( v32 > v31 )
        goto LABEL_17;
      if ( v32 == v31 )
      {
        v69 = 0;
        goto LABEL_17;
      }
    }
    v69 = -1;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v5 + 53) )
  {
    for ( k = v6; byte_61CA80[(unsigned __int8)*k]; ++k )
      ;
    v34 = (char *)v2;
    if ( byte_61CA80[*v2] )
    {
      do
        ++v34;
      while ( byte_61CA80[(unsigned __int8)*v34] );
    }
    v89 = v11;
    src = (char *)v10;
    v35 = sub_4059F0(k);
    v36 = sub_4059F0(v34);
    v10 = (size_t)src;
    v11 = v89;
    v69 = v35 - v36;
    if ( v35 == v36 )
    {
      v37 = sub_4106A0(k, v34, (unsigned int)dword_61CBA8, (unsigned int)dword_61CBA4);
      v10 = (size_t)src;
      v11 = v89;
      v69 = v37;
    }
    goto LABEL_17;
  }
  if ( *(_BYTE *)(v5 + 54) )
  {
    v90 = v11;
    srcg = (char *)v10;
    v42 = sub_405A40((unsigned __int8 *)v6, 0LL);
    v43 = sub_405A40(v2, 0LL);
    v10 = (size_t)srcg;
    v11 = v90;
    v69 = v42 - v43;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(v5 + 51) )
  {
    if ( *(_BYTE *)(v5 + 56) )
    {
      v86 = v11;
      srcd = (char *)v10;
      v14 = sub_40B900(v6, (char *)v2);
      v10 = (size_t)srcd;
      v11 = v86;
      v69 = v14;
    }
    else if ( v10 )
    {
      v69 = 1;
      if ( v11 )
      {
        v93 = v11;
        srci = (char *)v10;
        v63 = sub_4115C0(v6, v10 + 1, v2, v11 + 1);
        v11 = v93;
        v10 = (size_t)srci;
        v69 = v63;
      }
    }
    else
    {
      v69 = -(v11 != 0);
    }
    goto LABEL_17;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_61C600);
  v118 = _mm_load_si128((const __m128i *)&xmmword_61C610);
  v119 = _mm_load_si128((const __m128i *)&xmmword_61C620);
  v120 = _mm_load_si128((const __m128i *)&xmmword_61C630);
  v121 = _mm_load_si128((const __m128i *)&xmmword_61C640);
  v122 = _mm_load_si128((const __m128i *)&xmmword_61C650);
  v123 = _mm_load_si128((const __m128i *)&xmmword_61C660);
  v124 = _mm_load_si128((const __m128i *)&xmmword_61C670);
  v125 = _mm_load_si128((const __m128i *)&xmmword_61C680);
  v126 = qword_61C690;
  v127 = dword_61C698;
  v114[0] = (__int128)si128;
  v114[1] = (__int128)v118;
  v114[2] = (__int128)v119;
  v114[3] = (__int128)v120;
  v114[4] = (__int128)v121;
  v114[5] = (__int128)v122;
  v114[6] = (__int128)v123;
  v114[7] = (__int128)v124;
  v114[8] = (__int128)v125;
  v115 = qword_61C690;
  v116 = dword_61C698;
  if ( !byte_61CBA1 )
  {
    v71 = v11;
    v94 = v10;
    sub_40B360(v6, v10);
    sub_40B250(v114, v112);
    srcb = (char *)v71;
    sub_40B360(v2, v71);
    sub_40B250(&si128, v113);
    v64 = memcmp(v112, v113, 0x10uLL);
    v62 = v71;
    v61 = (char *)v94;
    v69 = v64;
    if ( !v64 )
    {
      v49 = v94;
      v46 = v6;
      s2 = (char *)v2;
      v102 = 0LL;
      goto LABEL_161;
    }
    v102 = 0LL;
    goto LABEL_166;
  }
  v69 = 0;
  v45 = v6;
  v46 = (char *)s1;
  v91 = &v6[v10];
  v99 = &v2[v11];
  v106 = v6;
  v102 = 0LL;
  v107 = v5;
  v109 = v10;
  v110 = v11;
  size = 3 * (v10 + v11) + 2;
  srca = (char *)v2;
  v108 = v2;
  v47 = 4000LL;
LABEL_111:
  if ( size > v47 )
  {
    while ( 1 )
    {
      v46 = (char *)s1;
      v51 = (3 * v47) >> 1;
      if ( size >= v51 )
        v51 = size;
      v47 = v51;
      free(v102);
      v52 = (char *)malloc(v47);
      v102 = v52;
      if ( v52 )
        v46 = v52;
      else
        v47 = 4000LL;
      if ( v91 <= v45 )
        goto LABEL_113;
LABEL_130:
      v53 = sub_405EF0(v46, v45, v47);
      v49 = v53 + 1;
      if ( v99 > (unsigned __int8 *)srca )
        break;
      v56 = v53 + 1;
      v48 = 0LL;
      if ( v47 < v49 )
        goto LABEL_134;
LABEL_175:
      if ( v47 < v56 )
        goto LABEL_134;
LABEL_115:
      s2 = &v46[v49];
      if ( v91 <= v45 )
      {
        if ( v99 <= (unsigned __int8 *)srca )
          goto LABEL_149;
        goto LABEL_147;
      }
      v45 += strlen(v45) + 1;
      if ( v99 > (unsigned __int8 *)srca )
        goto LABEL_147;
LABEL_117:
      if ( v91 <= v45 && v99 <= (unsigned __int8 *)srca )
      {
LABEL_149:
        srcb = (char *)v48;
        v6 = v106;
        v2 = v108;
        v58 = v109;
        v59 = v110;
        v5 = v107;
        goto LABEL_141;
      }
      sub_40B360(v46, v49);
      sub_40B360(s2, v48);
      if ( v69 )
        goto LABEL_111;
      v50 = v48;
      if ( v49 <= v48 )
        v50 = v49;
      v69 = memcmp(v46, s2, v50);
      if ( v69 )
        goto LABEL_111;
      v69 = (v49 > v48) - (v49 < v48);
      if ( size <= v47 )
        goto LABEL_112;
    }
    if ( v47 >= v49 )
    {
      v55 = &v46[v49];
      v54 = v47 - v49;
    }
    else
    {
      v54 = 0LL;
      v55 = 0LL;
    }
  }
  else
  {
LABEL_112:
    if ( v91 > v45 )
      goto LABEL_130;
LABEL_113:
    if ( v99 <= (unsigned __int8 *)srca )
    {
      v48 = 0LL;
      v49 = 0LL;
      goto LABEL_115;
    }
    v55 = v46;
    v54 = v47;
    v49 = 0LL;
  }
  v48 = sub_405EF0(v55, srca, v54) + 1;
  v56 = v48 + v49;
  if ( v47 >= v49 )
    goto LABEL_175;
LABEL_134:
  if ( v56 <= 0x5555555555555554LL )
    v56 = (3 * v56) >> 1;
  free(v102);
  v57 = (char *)sub_411210(v56);
  v46 = v57;
  if ( v91 > v45 )
    strxfrm(v57, v45, v49);
  s2 = &v46[v49];
  if ( v99 > (unsigned __int8 *)srca )
  {
    strxfrm(&v46[v49], srca, v48);
    if ( v91 > v45 )
      v45 += strlen(v45) + 1;
    v102 = v46;
    v47 = v56;
LABEL_147:
    srca += strlen(srca) + 1;
    goto LABEL_117;
  }
  if ( v91 > v45 )
  {
    v47 = v56;
    v102 = v46;
    v45 += strlen(v45) + 1;
    goto LABEL_117;
  }
  v102 = v46;
  v6 = v106;
  srcb = (char *)v48;
  v2 = v108;
  v58 = v109;
  v59 = v110;
  v5 = v107;
LABEL_141:
  v100 = v59;
  v92 = (char *)v58;
  sub_40B360(v46, v49);
  sub_40B250(v114, v112);
  sub_40B360(s2, (size_t)srcb);
  sub_40B250(&si128, v113);
  v60 = memcmp(v112, v113, 0x10uLL);
  v61 = v92;
  v62 = v100;
  if ( v60 )
  {
LABEL_165:
    v69 = v60;
  }
  else if ( !v69 )
  {
LABEL_161:
    v101 = v62;
    v95 = v61;
    v65 = (size_t)srcb;
    if ( v49 <= (unsigned __int64)srcb )
      v65 = v49;
    v66 = memcmp(v46, s2, v65);
    v61 = v95;
    v62 = v101;
    v69 = v66;
    if ( !v66 )
    {
      v60 = (v49 > (unsigned __int64)srcb) - (v49 < (unsigned __int64)srcb);
      goto LABEL_165;
    }
  }
LABEL_166:
  v96 = v62;
  srcj = v61;
  free(v102);
  v10 = (size_t)srcj;
  v11 = v96;
LABEL_17:
  if ( !v72 )
  {
    v6[v10] = v73;
    v2[v11] = v74;
    goto LABEL_19;
  }
  free(ptr);
  if ( !v69 )
    goto LABEL_20;
LABEL_35:
  if ( *(_BYTE *)(v5 + 55) )
    return -v69;
  return v69;
}

__int64 __fastcall sub_4074D0(char **a1, FILE *a2, char *a3)
{
  char *v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rbp
  char *v6; // r15
  size_t v7; // rdx
  char *v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rsi
  char *v12; // r12
  char **v13; // r13
  unsigned __int64 v14; // r12
  char *v15; // r15
  char **v16; // r14
  char *v17; // r13
  size_t v18; // rax
  unsigned __int64 v19; // r11
  char *v20; // rax
  char *v21; // r10
  char *v22; // r15
  char *v23; // rax
  unsigned __int64 v24; // r11
  bool v25; // zf
  char *v26; // rax
  char **v27; // r13
  char *v28; // r14
  char *v29; // r15
  char *v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rax
  __int64 result; // rax
  char *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  char *v41; // [rsp+0h] [rbp-78h]
  char *v42; // [rsp+8h] [rbp-70h]
  unsigned __int64 v43; // [rsp+10h] [rbp-68h]
  char v46; // [rsp+37h] [rbp-41h]

  if ( *((_BYTE *)a1 + 48) )
    return 0LL;
  v3 = a1[1];
  v4 = qword_61C750;
  v5 = qword_61C428;
  v6 = *a1;
  v7 = (size_t)a1[4];
  v46 = byte_61C500;
  v41 = a1[5];
  if ( v3 == (char *)v7 )
  {
    v8 = a1[2];
  }
  else
  {
    memmove(v6, &v3[(_QWORD)v6 - v7], v7);
    v3 = a1[4];
    v6 = *a1;
    a1[2] = 0LL;
    a1[1] = v3;
    v8 = 0LL;
  }
  v9 = v5 - 34;
  v43 = (unsigned __int64)(v41 + 1);
  v10 = (__int64)a1[3];
  v11 = (unsigned int)v46;
  while ( 1 )
  {
    v12 = &v6[v10];
    v13 = (char **)&v12[-32 * (_QWORD)v8];
    v14 = &v12[-((_QWORD)v8 * (_QWORD)v41)] - &v3[(_QWORD)v6];
    if ( v8 )
    {
      v15 = &v3[(_QWORD)v6];
      v16 = v13;
      v17 = &v13[1][(_QWORD)*v13];
    }
    else
    {
      v34 = v6;
      v15 = &v3[(_QWORD)v6];
      v16 = v13;
      v17 = v34;
    }
    while ( v14 > v43 )
    {
      v18 = fread_unlocked(v15, 1uLL, (v14 - 1) / v43, a2);
      v19 = (v14 - 1) / v43;
      v14 -= v18;
      v42 = &v15[v18];
      if ( v19 == v18 )
        goto LABEL_36;
      if ( (a2->_flags & 0x20) != 0 )
      {
        v37 = dcgettext(0LL, "read failed", 5);
        sub_405DD0(v37, a3, v38, v39, v40);
      }
      if ( (a2->_flags & 0x10) == 0 )
        goto LABEL_36;
      *((_BYTE *)a1 + 48) = 1;
      v20 = &v15[v18];
      if ( *a1 == v42 )
        return 0LL;
      if ( v17 == v42 || *(v42 - 1) == v46 )
      {
LABEL_36:
        v21 = v15;
        v22 = v42;
      }
      else
      {
        *v42 = v46;
        v21 = v15;
        ++v42;
        v22 = v20 + 1;
      }
      while ( 1 )
      {
        v11 = (unsigned int)v46;
        v23 = (char *)sub_413030(v21, v11, v22 - v21);
        if ( !v23 )
          break;
        v21 = v23 + 1;
        v16 -= 4;
        *v23 = 0;
        *v16 = v17;
        v24 = v23 + 1 - v17;
        v16[1] = (char *)v24;
        if ( v9 < v24 )
          v9 = v23 + 1 - v17;
        v14 -= (unsigned __int64)v41;
        if ( v4 )
        {
          if ( *(_QWORD *)(v4 + 16) != -1LL )
            v23 = sub_406470(v17, v23 + 1 - v17, v4);
          v25 = *(_QWORD *)v4 == -1LL;
          v16[3] = v23;
          if ( v25 )
          {
            if ( *(_BYTE *)(v4 + 48) )
            {
              while ( byte_61CA80[(unsigned __int8)*v17] )
                ++v17;
            }
            v16[2] = v17;
          }
          else
          {
            v16[2] = (char *)sub_406360(v17, v24, (__int64 *)v4);
          }
        }
        v17 = v21;
      }
      v15 = v42;
      if ( *((_BYTE *)a1 + 48) )
        break;
    }
    v26 = v17;
    v27 = v16;
    v28 = v15;
    v29 = v26;
    v30 = *a1;
    v31 = (unsigned __int64)a1[3];
    a1[1] = (char *)(v28 - *a1);
    v32 = (&v30[v31] - (char *)v27) >> 5;
    a1[2] = (char *)v32;
    if ( v32 )
      break;
    v33 = v31 >> 5;
    if ( v30 )
    {
      v11 = 0x555555555555553FLL;
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
      v35 = 32 * v33;
      if ( v35 < 0 )
LABEL_46:
        sub_411460(v30, v11, v31);
      v10 = v35;
    }
    v11 = v10;
    v6 = (char *)sub_411270(v30, v10);
    *a1 = v6;
    v3 = a1[1];
    a1[3] = (char *)v10;
    v8 = a1[2];
  }
  result = 1LL;
  qword_61C428 = v9 + 34;
  a1[4] = (char *)(v28 - v29);
  return result;
}

_BOOL8 __fastcall sub_407850(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a2 + 80);
  if ( *(_DWORD *)(a1 + 80) == v2 )
    return *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 48) < *(_QWORD *)(a2 + 40) + *(_QWORD *)(a2 + 48);
  else
    return *(_DWORD *)(a1 + 80) < v2;
}

int __fastcall sub_407880(__int64 a1)
{
  return pthread_sigmask(2, (const __sigset_t *)(a1 + 8), 0LL);
}

__int64 sub_407890()
{
  int v0; // eax
  const char *v1; // rbx
  char v2; // al
  char v4[8]; // [rsp+0h] [rbp-98h] BYREF
  __sigset_t oldmask; // [rsp+8h] [rbp-90h] BYREF

  if ( !ptr )
    return sub_40A9F0();
  v0 = pthread_sigmask(0, &newmask, &oldmask);
  v1 = (const char *)ptr;
  v2 = v0 == 0;
  v4[0] = v2;
  if ( ptr )
  {
    do
    {
      unlink(v1 + 13);
      v1 = *(const char **)v1;
    }
    while ( v1 );
    v2 = v4[0];
  }
  ptr = 0LL;
  if ( !v2 )
    return sub_40A9F0();
  sub_407880((__int64)v4);
  return sub_40A9F0();
}

void __fastcall sub_407920(char *name)
{
  __int64 *v1; // r13
  char *v2; // rbx
  char *i; // rax
  __int64 v4; // r12
  int v5; // r14d
  int *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  int v10; // r15d
  __int64 v11; // rbp
  char *v12; // rax
  char v13[8]; // [rsp+0h] [rbp-C8h] BYREF
  __sigset_t oldmask; // [rsp+8h] [rbp-C0h] BYREF

  v1 = (__int64 *)&ptr;
  v2 = (char *)ptr;
  if ( name != (char *)ptr + 13 )
  {
    for ( i = *(char **)ptr; i + 13 != name; i = *(char **)i )
      v2 = i;
    v1 = (__int64 *)v2;
    v2 = i;
  }
  if ( v2[12] == 1 )
    sub_4060A0(*((_DWORD *)v2 + 2));
  v4 = *(_QWORD *)v2;
  v13[0] = pthread_sigmask(0, &newmask, &oldmask) == 0;
  v5 = unlink(name);
  v6 = __errno_location();
  v9 = v13[0] == 0;
  v10 = *v6;
  *v1 = v4;
  if ( v9 )
  {
    if ( !v5 )
      goto LABEL_9;
LABEL_12:
    v11 = sub_40F700(0LL, 3LL, name, v7, v8);
    v12 = dcgettext(0LL, "warning: cannot remove: %s", 5);
    error(0, v10, v12, v11);
    if ( v4 )
      goto LABEL_10;
LABEL_13:
    off_61C418 = v1;
    goto LABEL_10;
  }
  sub_407880((__int64)v13);
  if ( v5 )
    goto LABEL_12;
LABEL_9:
  if ( !v4 )
    goto LABEL_13;
LABEL_10:
  free(v2);
}

__int64 __fastcall sub_407A30(int *a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rbp
  int v4; // eax
  void *v5; // r12
  __pid_t v6; // eax
  int v7; // r15d
  unsigned int v8; // r13d
  double v10; // [rsp+8h] [rbp-E0h]
  __pid_t v11; // [rsp+14h] [rbp-D4h]
  char v12[8]; // [rsp+20h] [rbp-C8h] BYREF
  __sigset_t oldmask; // [rsp+28h] [rbp-C0h] BYREF

  if ( (int)sub_40DA00(a1) < 0 )
    return (unsigned int)-1;
  if ( dword_61C420 + 1 < (unsigned int)dword_61C69C )
  {
    sub_405FB0(-1);
    while ( dword_61C69C > 0 && (unsigned int)sub_405FB0(0) )
      ;
  }
  v2 = a2 - 1;
  v3 = __errno_location();
  v10 = 0.25;
  while ( 1 )
  {
    v4 = pthread_sigmask(0, &newmask, &oldmask);
    v5 = ptr;
    ptr = 0LL;
    v12[0] = v4 == 0;
    v6 = fork();
    v7 = *v3;
    v8 = v6;
    if ( v6 )
    {
      ptr = v5;
      if ( !v12[0] )
        goto LABEL_5;
    }
    else if ( !v12[0] )
    {
      goto LABEL_19;
    }
    v11 = v6;
    sub_407880((__int64)v12);
    v6 = v11;
LABEL_5:
    *v3 = v7;
    if ( v6 >= 0 )
      break;
    if ( v7 != 11 )
      goto LABEL_18;
    sub_411620(v10);
    v10 = v10 + v10;
    while ( dword_61C69C > 0 && (unsigned int)sub_405FB0(0) )
      ;
    if ( --v2 == -1 )
    {
      v7 = *v3;
LABEL_18:
      close(*a1);
      close(a1[1]);
      *v3 = v7;
      return v8;
    }
  }
  if ( v6 )
  {
    ++dword_61C69C;
    return v8;
  }
LABEL_19:
  v8 = 0;
  close(0);
  close(1);
  return v8;
}

__int64 __fastcall sub_407C00(char *a1, _QWORD *a2, const char *a3)
{
  __int64 v5; // rbp
  char *v6; // rbx
  char *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-28h]
  __int64 v9; // [rsp+8h] [rbp-20h]

  switch ( (unsigned int)sub_411B40(a1) )
  {
    case 0u:
    case 2u:
      *a2 = v9;
      return v8;
    case 1u:
    case 3u:
      *a2 = -1LL;
      return v8;
    case 4u:
      if ( !a3 )
        return 0LL;
      v5 = sub_40F880(a1);
      v6 = dcgettext(0LL, a3, 5);
      v7 = dcgettext(0LL, "%s: invalid count at start of %s", 5);
      error(2, 0, v7, v6, v5);
      return sub_407CD0((char *)2, 0LL);
    default:
      return v8;
  }
}

_IO_FILE *__fastcall sub_407CD0(char *file, char *modes)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  FILE *v5; // rbx
  int v6; // eax
  __int64 v7; // rbp
  char *v8; // rbx
  int *v9; // rax

  if ( *modes != 114 )
  {
    if ( *modes == 119 )
    {
      if ( !file || !ftruncate(1, 0LL) )
        return stdout;
      v7 = sub_40F700(0LL, 3LL, file, v2, v3);
      v8 = dcgettext(0LL, "%s: error truncating", 5);
      v9 = __errno_location();
      error(2, *v9, v8, v7);
    }
    __assert_fail("!\"unexpected mode passed to stream_open\"", "src/sort.c", 0x3CCu, "stream_open");
  }
  if ( !strcmp(file, "-") )
  {
    byte_61C758 = 1;
    v5 = stdin;
  }
  else
  {
    v5 = 0LL;
    v6 = open(file, 0x80000);
    if ( v6 >= 0 )
      v5 = fdopen(v6, modes);
  }
  sub_40B800(v5, 2LL);
  return v5;
}

void __fastcall __noreturn sub_407DD0(char *a1)
{
  char *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = dcgettext(0LL, "open failed", 5);
  sub_405DD0(v1, a1, v2, v3, v4);
}

void __fastcall sub_407DF0(FILE *stream, char *a2)
{
  int v3; // eax
  const char *v4; // rsi
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

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
      sub_405DD0(v5, a2, v6, v7, v8);
    }
    if ( fflush_unlocked(stream) )
    {
      v4 = "fflush failed";
      goto LABEL_10;
    }
  }
  else if ( (stream->_flags & 0x10) != 0 )
  {
    clearerr_unlocked(stream);
  }
}

int __fastcall sub_407E70(__int64 a1, FILE *a2, char *a3)
{
  char *v5; // rbx
  __int64 v6; // r15
  char *v7; // r12
  size_t v8; // rdx
  char *v9; // rdi
  char *v10; // rax
  unsigned __int8 v11; // si
  char *IO_write_ptr; // rdx
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // al
  __int64 v18; // r12
  char *v19; // r14
  __int64 v20; // r10
  char *v21; // rbp
  __int64 v22; // r11
  char v23; // r15
  unsigned __int8 *v24; // rax
  unsigned __int8 *v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbx
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char *v36; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int8 *v37; // [rsp+8h] [rbp-40h] BYREF

  v5 = *(char **)a1;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (char *)(*(_QWORD *)a1 + v6);
  if ( !a3 && byte_61C740 )
  {
    if ( v5 >= v7 )
      goto LABEL_18;
    while ( 1 )
    {
      v17 = *v5++;
      if ( v17 == 9 )
      {
        v11 = 62;
        v17 = 62;
        IO_write_ptr = a2->_IO_write_ptr;
        if ( a2->_IO_write_end <= IO_write_ptr )
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
        IO_write_ptr = a2->_IO_write_ptr;
        if ( a2->_IO_write_end <= IO_write_ptr )
        {
LABEL_15:
          if ( __overflow(a2, v11) == -1 )
          {
            v13 = dcgettext(0LL, "write failed", 5);
            sub_405DD0(v13, 0LL, v14, v15, v16);
          }
          goto LABEL_12;
        }
      }
      a2->_IO_write_ptr = IO_write_ptr + 1;
      *IO_write_ptr = v17;
LABEL_12:
      if ( v7 == v5 )
      {
        v5 = *(char **)a1;
        v6 = *(_QWORD *)(a1 + 8);
LABEL_18:
        v18 = qword_61C750;
        v19 = &v5[v6 - 1];
        if ( !qword_61C750 )
        {
          v21 = v5;
          goto LABEL_39;
        }
        while ( 2 )
        {
          v20 = *(_QWORD *)v18;
          if ( *(_QWORD *)v18 == -1LL )
          {
            v21 = v5;
            if ( *(_QWORD *)(v18 + 16) != -1LL )
LABEL_21:
              v19 = sub_406470(v5, v6, v18);
            if ( *(_BYTE *)(v18 + 48) && v20 == -1 )
            {
LABEL_26:
              v23 = *v19;
              for ( *v19 = 0; byte_61CA80[(unsigned __int8)*v21]; ++v21 )
                ;
              v36 = v21;
              if ( v21 > v19 )
                goto LABEL_55;
              if ( *(_BYTE *)(v18 + 54) )
              {
                sub_405A40((unsigned __int8 *)v21, &v36);
              }
              else if ( *(_BYTE *)(v18 + 52) )
              {
                strtold(v21, &v36);
              }
              else
              {
                if ( (*(_QWORD *)(v18 + 48) & 0xFF0000FF0000LL) != 0 )
                {
                  v24 = (unsigned __int8 *)v21;
                  if ( v21 < v19 )
                    v24 = (unsigned __int8 *)&v21[*v21 == 45];
                  v37 = v24;
                  if ( (unsigned __int8)sub_405930(&v37) > 0x2Fu )
                  {
                    v25 = v37;
                    if ( *(_BYTE *)(v18 + 53) )
                      v25 = &v37[-(byte_4149C0[*v37] == 0) + 1];
                    v36 = (char *)v25;
                  }
                  goto LABEL_38;
                }
LABEL_55:
                v36 = v19;
              }
LABEL_38:
              *v19 = v23;
              v19 = v36;
              goto LABEL_39;
            }
          }
          else
          {
            v21 = (char *)sub_406360(v5, v6, (__int64 *)v18);
            if ( v22 != -1 )
              goto LABEL_21;
          }
          if ( *(_BYTE *)(v18 + 54) || (*(_QWORD *)(v18 + 48) & 0xFFFF00FF0000LL) != 0 )
            goto LABEL_26;
          while ( 1 )
          {
LABEL_39:
            v26 = sub_405EB0(v5, v21);
            v27 = sub_405EB0(v21, v19);
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
              v10 = stdout->_IO_write_ptr;
              if ( v10 >= stdout->_IO_write_end )
              {
                LODWORD(v10) = __overflow(stdout, 10);
              }
              else
              {
                stdout->_IO_write_ptr = v10 + 1;
                *v10 = 10;
              }
            }
            else
            {
              v30 = dcgettext(0LL, "^ no match for key\n", 5);
              LODWORD(v10) = __printf_chk(1LL, v30);
            }
            if ( !v18 )
              return (int)v10;
            v18 = *(_QWORD *)(v18 + 64);
            if ( v18 )
              break;
            if ( byte_61C759 || byte_61C75A )
              return (int)v10;
            v21 = *(char **)a1;
            v5 = *(char **)a1;
            v19 = (char *)(*(_QWORD *)a1 + *(_QWORD *)(a1 + 8) - 1LL);
          }
          v5 = *(char **)a1;
          v6 = *(_QWORD *)(a1 + 8);
          v19 = (char *)(*(_QWORD *)a1 + v6 - 1);
          continue;
        }
      }
    }
  }
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(char **)a1;
  *(v7 - 1) = byte_61C500;
  v10 = (char *)fwrite_unlocked(v9, 1uLL, v8, a2);
  if ( (char *)v6 != v10 )
  {
    v31 = dcgettext(0LL, "write failed", 5);
    sub_405DD0(v31, a3, v32, v33, v34);
  }
  *(v7 - 1) = 0;
  return (int)v10;
}

int __fastcall sub_4082A0(const void **a1, unsigned __int8 **a2)
{
  int result; // eax
  unsigned __int8 *v5; // r12
  unsigned __int8 *v6; // r14
  unsigned __int8 *v7; // r13
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // rsi
  const void *v10; // rdi
  size_t v11; // rdx

  if ( !qword_61C750 || (result = sub_4065B0((__int64)a1, a2)) == 0 && !byte_61C759 && !byte_61C75A )
  {
    v5 = (unsigned __int8 *)a1[1];
    v6 = a2[1];
    v7 = v6 - 1;
    v8 = v5 - 1;
    if ( v5 == (unsigned __int8 *)1 )
    {
      result = -(v6 != (unsigned __int8 *)1);
    }
    else
    {
      result = 1;
      if ( v6 != (unsigned __int8 *)1 )
      {
        v9 = *a2;
        v10 = *a1;
        if ( byte_61CBA1 )
        {
          result = sub_4115C0(v10, a1[1], *a2, a2[1]);
        }
        else
        {
          v11 = (size_t)(v6 - 1);
          if ( v8 <= v7 )
            v11 = (size_t)(v5 - 1);
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
      return -result;
  }
  return result;
}

int __fastcall sub_408370(__m128i *a1, unsigned __int64 a2, __m128i *a3, char a4)
{
  const __m128i *v4; // rbp
  __m128i *v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  __m128i v8; // xmm1
  unsigned __int8 **v9; // r13
  __m128i *v10; // rax
  const void **v11; // rdx
  unsigned __int8 **i; // r14
  __int64 v13; // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __m128i v16; // xmm2
  __m128i v17; // xmm3
  int v18; // edx
  const __m128i *v19; // rdx
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  const void **v24; // [rsp+8h] [rbp-40h]

  v4 = a1;
  v5 = a3;
  if ( a2 == 2 )
  {
    LODWORD(v13) = sub_4082A0((const void **)&a1[-2], (unsigned __int8 **)&a1[-4]);
    if ( a4 )
    {
      v18 = (int)v13 > 0;
      v13 = 32LL * (v18 - 2);
      v19 = &a1[2 * ~v18];
      v20 = _mm_loadu_si128(v19 + 1);
      v5[-2] = _mm_loadu_si128(v19);
      v21 = _mm_loadu_si128((__m128i *)((char *)a1 + v13));
      v5[-1] = v20;
      v22 = _mm_loadu_si128((__m128i *)((char *)a1 + v13 + 16));
      v5[-4] = v21;
      v5[-3] = v22;
    }
    else if ( (int)v13 > 0 )
    {
      v14 = _mm_loadu_si128(a1 - 2);
      v15 = _mm_loadu_si128(a1 - 1);
      v16 = _mm_loadu_si128(a1 - 4);
      v17 = _mm_loadu_si128(a1 - 3);
      v5[-2] = v14;
      v5[-1] = v15;
      a1[-2] = v16;
      a1[-1] = v17;
      a1[-4] = v14;
      a1[-3] = v15;
    }
  }
  else
  {
    v6 = a2 >> 1;
    v7 = a2 - (a2 >> 1);
    if ( a4 )
    {
      v9 = (unsigned __int8 **)&a3[-2 * (a2 >> 1)];
      sub_408370(&a1[-2 * (a2 >> 1)], a2 - (a2 >> 1), v9, 1LL);
      if ( a2 > 3 )
        sub_408370(a1, v6, v5, 0LL);
    }
    else
    {
      sub_408370(&a1[-2 * (a2 >> 1)], a2 - (a2 >> 1), a3, 0LL);
      if ( a2 > 3 )
      {
        sub_408370(a1, v6, v5, 1LL);
        v9 = (unsigned __int8 **)&a1[-2 * (a2 >> 1)];
        v10 = v5;
      }
      else
      {
        v8 = _mm_loadu_si128(a1 - 1);
        v9 = (unsigned __int8 **)&a1[-2 * (a2 >> 1)];
        v10 = v5;
        v5[-2] = _mm_loadu_si128(a1 - 2);
        v5[-1] = v8;
      }
      v5 = a1;
      v4 = v10;
    }
    v11 = (const void **)&v4[-2];
    for ( i = v9 - 4; ; i -= 4 )
    {
      while ( 1 )
      {
        v24 = v11;
        v5 -= 2;
        LODWORD(v13) = sub_4082A0(v11, i);
        v11 = v24;
        if ( (int)v13 > 0 )
          break;
        *v5 = _mm_loadu_si128(v4 - 2);
        v5[1] = _mm_loadu_si128(v4 - 1);
        if ( !--v6 )
          return v13;
        v4 = (const __m128i *)v24;
        v11 = v24 - 4;
      }
      *v5 = _mm_loadu_si128((const __m128i *)v9 - 2);
      v5[1] = _mm_loadu_si128((const __m128i *)v9 - 1);
      if ( !--v7 )
        break;
      v9 = i;
    }
    v13 = -32LL;
    do
    {
      *(__m128i *)((char *)v5 + v13) = _mm_loadu_si128((const __m128i *)((char *)v4 + v13));
      *(__m128i *)((char *)&v5[1] + v13) = _mm_loadu_si128((const __m128i *)((char *)v4 + v13 + 16));
      v13 -= 32LL;
      --v6;
    }
    while ( v6 );
  }
  return v13;
}

int __fastcall sub_4085D0(__m128i *a1, FILE *a2, char *a3)
{
  int result; // eax
  char *v4; // [rsp+8h] [rbp-20h]

  if ( !byte_61C759 )
    return sub_407E70((__int64)a1, a2, a3);
  if ( !(_QWORD)xmmword_61CB80
    || (v4 = a3, result = sub_4082A0((const void **)a1, (unsigned __int8 **)&xmmword_61CB80), a3 = v4, result) )
  {
    xmmword_61CB80 = (__int128)_mm_loadu_si128(a1);
    xmmword_61CB90 = (__int128)_mm_loadu_si128(a1 + 1);
    return sub_407E70((__int64)a1, a2, a3);
  }
  return result;
}

void __fastcall sub_408640(__int64 a1, unsigned __int64 a2, __int64 a3, FILE *a4, char *a5, FILE **a6)
{
  __int64 v6; // rdi
  unsigned __int128 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int8 ***v10; // r13
  unsigned __int64 *v11; // rbx
  __int64 v12; // rbx
  char **v13; // r13
  __int64 v14; // rdx
  char **v15; // rbp
  char *v16; // rax
  unsigned __int64 i; // rax
  unsigned __int8 ***v18; // rdx
  unsigned __int64 v19; // rbp
  unsigned __int64 *v20; // r13
  unsigned __int64 *v21; // r12
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r14
  int v24; // eax
  unsigned __int8 ***v25; // r14
  __int64 v26; // r15
  const void ***v27; // r12
  unsigned __int64 v28; // r13
  char **v29; // r13
  FILE *v30; // rsi
  char *v31; // r15
  char v32; // al
  FILE **v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // r13
  const void **v36; // rax
  unsigned __int64 v37; // r12
  unsigned __int8 ***v38; // rax
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // r15
  unsigned __int8 ***v41; // r13
  unsigned __int64 v42; // rbp
  int v43; // eax
  unsigned __int64 v44; // r15
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  void *v47; // rdx
  void *v48; // rdi
  const void *v49; // rsi
  char *v50; // rax
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  const __m128i *v56; // rdx
  __m128i v57; // xmm0
  __m128i v58; // xmm1
  __m128i v59; // xmm2
  __int64 v60; // r9
  __m128i v61; // xmm3
  unsigned __int8 **v62; // r9
  __int64 v63; // r9
  unsigned __int64 *v64; // rax
  unsigned __int64 v65; // rdx
  FILE *v66; // rax
  unsigned __int64 v67; // rsi
  unsigned __int8 ***v68; // [rsp+8h] [rbp-D0h]
  FILE **v69; // [rsp+8h] [rbp-D0h]
  const void **v70; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v71; // [rsp+8h] [rbp-D0h]
  unsigned __int8 ***v72; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v73; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v74; // [rsp+18h] [rbp-C0h]
  _QWORD *v75; // [rsp+20h] [rbp-B8h]
  char *v77; // [rsp+30h] [rbp-A8h]
  unsigned __int64 *v78; // [rsp+38h] [rbp-A0h]
  void **v79; // [rsp+38h] [rbp-A0h]
  _QWORD *v81; // [rsp+48h] [rbp-90h]
  unsigned __int64 *v82; // [rsp+50h] [rbp-88h]
  unsigned __int64 v85; // [rsp+68h] [rbp-70h]
  unsigned __int64 v86; // [rsp+70h] [rbp-68h]
  __int64 v87; // [rsp+78h] [rbp-60h]
  void *dest[11]; // [rsp+80h] [rbp-58h] BYREF

  v6 = a3;
  v74 = a3;
  v85 = a2;
  v7 = (unsigned __int64)a3 * (unsigned __int128)0x38uLL;
  BYTE8(v7) = *((_QWORD *)&v7 + 1) != 0LL;
  if ( (v7 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v7 + 1) = BYTE8(v7), BYTE8(v7))
    || (v8 = 8 * v74, v6 = 56 * v74, v77 = (char *)sub_411210(56 * v74), (v74 & 0x1000000000000000LL) != 0)
    || v74 >> 61 )
  {
    sub_411460(v6, a2, *((_QWORD *)&v7 + 1));
  }
  v9 = 0LL;
  v10 = (unsigned __int8 ***)sub_411210(v8);
  v75 = (_QWORD *)sub_411210(v8);
  dest[0] = 0LL;
  v11 = (unsigned __int64 *)sub_411210(v8);
  v87 = qword_61C750;
  if ( v74 )
  {
    v78 = v11;
    v72 = v10;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = 8 * v9;
        v13 = (char **)&v77[56 * v9];
        v14 = qword_61C428;
        if ( qword_61C778 / v74 >= qword_61C428 )
          v14 = qword_61C778 / v74;
        sub_405E30((__int64)&v77[56 * v9], 32LL, v14);
        v15 = (char **)(a1 + 16 * v9);
        if ( !(unsigned __int8)sub_4074D0(v13, a6[v9], *v15) )
          break;
        v16 = &v13[3][(_QWORD)*v13];
        v72[v9] = (unsigned __int8 **)(v16 - 32);
        v75[v9++] = &v16[-32 * (_QWORD)v13[2]];
        if ( v9 >= v74 )
        {
          v11 = v78;
          v10 = v72;
          goto LABEL_12;
        }
      }
      sub_407DF0(a6[v9], *v15);
      if ( v85 > v9 )
      {
        --v85;
        sub_407920(*v15);
      }
      free(*v13);
      if ( v74 - 1 <= v9 )
        break;
      do
      {
        v66 = a6[(unsigned __int64)v12 / 8 + 1];
        *(__m128i *)(a1 + 2 * v12) = _mm_loadu_si128((const __m128i *)(a1 + 2 * v12 + 16));
        a6[(unsigned __int64)v12 / 8] = v66;
        v12 += 8LL;
      }
      while ( 8 * v74 - 8 != v12 );
      --v74;
    }
    v11 = v78;
    v10 = v72;
    --v74;
LABEL_12:
    if ( !v74 )
      goto LABEL_68;
    for ( i = 0LL; i != v74; ++i )
      v11[i] = i;
    if ( v74 != 1 )
    {
      v18 = v10;
      v19 = 1LL;
      v20 = v11;
      do
      {
        while ( 1 )
        {
          v68 = v18;
          v21 = &v20[v19];
          v22 = *v21;
          v23 = *(v21 - 1);
          v24 = sub_4082A0((const void **)v18[v23], v18[*v21]);
          v18 = v68;
          if ( v24 <= 0 )
            break;
          *(v21 - 1) = v22;
          v19 = 1LL;
          *v21 = v23;
        }
        ++v19;
      }
      while ( v19 < v74 );
      v11 = v20;
      v10 = v68;
    }
    v86 = 0LL;
    v25 = v10;
    v79 = 0LL;
    v82 = v11 - 1;
    while ( 1 )
    {
      v26 = *v11;
      v73 = *v11;
      v27 = (const void ***)&v25[v26];
      v28 = (unsigned __int64)v25[v26];
      if ( byte_61C759 )
      {
        if ( !v79 )
          goto LABEL_42;
        if ( sub_4082A0((const void **)v79, v25[v26]) )
        {
          sub_407E70((__int64)dest, a4, a5);
LABEL_42:
          v47 = *(void **)(v28 + 8);
          v48 = dest[0];
          if ( (unsigned __int64)v47 > v86 )
          {
            if ( v86 )
            {
              v67 = 2 * v86;
              if ( (unsigned __int64)v47 > 2 * v86 )
              {
                while ( v67 )
                {
                  v67 *= 2LL;
                  if ( (unsigned __int64)v47 <= v67 )
                    goto LABEL_75;
                }
              }
              else
              {
LABEL_75:
                v47 = (void *)v67;
              }
            }
            v71 = (unsigned __int64)v47;
            free(dest[0]);
            v48 = (void *)sub_411210(v71);
            dest[0] = v48;
            v86 = v71;
            v47 = *(void **)(v28 + 8);
          }
          v49 = *(const void **)v28;
          dest[1] = v47;
          memcpy(v48, v49, (size_t)v47);
          v79 = dest;
          if ( v87 )
          {
            v50 = (char *)dest[0] + *(_QWORD *)(v28 + 24) - *(_QWORD *)v28;
            dest[2] = (char *)dest[0] + *(_QWORD *)(v28 + 16) - *(_QWORD *)v28;
            dest[3] = v50;
          }
        }
      }
      else
      {
        sub_407E70((__int64)v25[v26], a4, a5);
      }
      if ( v75[v26] < v28 )
      {
        *v27 = (const void **)(v28 - 32);
        v35 = v74;
        if ( v74 != 1 )
          goto LABEL_28;
LABEL_39:
        *v11 = v73;
      }
      else
      {
        v81 = &v75[v26];
        v29 = (char **)(a1 + 16 * v73);
        v30 = a6[v26];
        v69 = &a6[v26];
        v31 = &v77[56 * v73];
        v32 = sub_4074D0((char **)v31, v30, *v29);
        v33 = v69;
        if ( v32 )
        {
          v34 = *(_QWORD *)v31 + *((_QWORD *)v31 + 3);
          v35 = v74;
          *v27 = (const void **)(v34 - 32);
          *v81 = v34 - 32LL * *((_QWORD *)v31 + 2);
          if ( v74 == 1 )
            goto LABEL_39;
LABEL_28:
          v36 = *v27;
          v37 = 1LL;
          v70 = v36;
          v38 = v25;
          v39 = 1LL;
          v40 = v35;
          v41 = v38;
          do
          {
            while ( 1 )
            {
              v42 = v11[v37];
              v43 = sub_4082A0(v70, v41[v42]);
              if ( v43 < 0 || v73 < v42 && !v43 )
                break;
              v39 = v37 + 1;
              v37 = (v37 + 1 + v40) >> 1;
              if ( v39 >= v40 )
                goto LABEL_34;
            }
            v40 = v37;
            v37 = (v39 + v37) >> 1;
          }
          while ( v39 < v40 );
LABEL_34:
          v44 = v39;
          v25 = v41;
          if ( v44 != 1 )
          {
            v45 = v11;
            do
            {
              v46 = v45[1];
              *v45++ = v46;
            }
            while ( v45 != &v82[v44] );
          }
          v11[v44 - 1] = v73;
        }
        else
        {
          v51 = v11 + 1;
          if ( v74 != 1 )
          {
            v52 = v73;
            do
            {
              if ( *v51 > v52 )
              {
                --*v51;
                v52 = *v11;
              }
              ++v51;
            }
            while ( &v11[v74] != v51 );
            v53 = v52;
            v54 = 8 * v52;
            v73 = v52;
            v29 = (char **)(a1 + 16 * v52);
            v33 = &a6[v52];
            v31 = &v77[8 * (v54 - v53)];
          }
          sub_407DF0(*v33, *v29);
          if ( v85 > v73 )
          {
            --v85;
            sub_407920(*v29);
          }
          free(*(void **)v31);
          if ( v74 - 1 > v73 )
          {
            v55 = 8 * v73;
            v56 = (const __m128i *)&v77[56 * v73];
            do
            {
              v57 = _mm_loadu_si128((const __m128i *)(a1 + 2 * v55 + 16));
              v56 = (const __m128i *)((char *)v56 + 56);
              v58 = _mm_loadu_si128(v56);
              v59 = _mm_loadu_si128(v56 + 1);
              a6[(unsigned __int64)v55 / 8] = a6[(unsigned __int64)v55 / 8 + 1];
              v60 = v56[3].m128i_i64[0];
              v61 = _mm_loadu_si128(v56 + 2);
              *(__m128i *)(a1 + 2 * v55) = v57;
              v56[-1].m128i_i64[1] = v60;
              v62 = v25[(unsigned __int64)v55 / 8 + 1];
              *(__m128i *)((char *)v56 - 56) = v58;
              v25[(unsigned __int64)v55 / 8] = v62;
              v63 = v75[(unsigned __int64)v55 / 8 + 1];
              *(__m128i *)((char *)v56 - 40) = v59;
              v75[(unsigned __int64)v55 / 8] = v63;
              v55 += 8LL;
              *(__m128i *)((char *)v56 - 24) = v61;
            }
            while ( 8 * v74 - 8 != v55 );
          }
          if ( v74 == 1 )
          {
            v10 = v25;
            if ( v79 && byte_61C759 )
            {
              sub_407E70((__int64)dest, a4, a5);
              free(dest[0]);
            }
            break;
          }
          v64 = v11;
          do
          {
            v65 = v64[1];
            *v64++ = v65;
          }
          while ( &v82[v74] != v64 );
          --v74;
        }
      }
    }
  }
LABEL_68:
  sub_407DF0(a4, a5);
  free(a6);
  free(v77);
  free(v11);
  free(v75);
  free(v10);
}

int __fastcall sub_408E10(int fd, int a2)
{
  dup2(fd, a2);
  return close(fd);
}

__int64 __fastcall sub_408E20(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  _IO_FILE *v9; // rax
  __int64 v10; // r12
  char v11; // al
  int v12; // r15d
  int v13; // eax
  int *v14; // rbp
  FILE *v16; // rax
  int *v17; // rax
  int v18; // r13d
  int *v19; // rbp
  int *v20; // rax
  __int64 v21; // rbx
  char *v22; // rax
  int v23; // [rsp+8h] [rbp-40h] BYREF
  int fd; // [rsp+Ch] [rbp-3Ch]

  v4 = 8 * a2;
  if ( (a2 & 0x1000000000000000LL) != 0 || a2 >> 61 )
    sub_411460(v4, a2, a3);
  v6 = sub_411210(v4);
  *a3 = v6;
  v7 = v6;
  v8 = 0LL;
  if ( !a2 )
    return v8;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( !v10 || (v11 = *(_BYTE *)(v10 + 12)) == 0 )
    {
      v9 = sub_407CD0(*(char **)a1, "r");
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
    v13 = sub_407A30(&v23, 9LL);
    if ( v13 == -1 )
      break;
    if ( !v13 )
    {
      close(v23);
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
    v16 = fdopen(v23, "r");
    if ( !v16 )
    {
      v17 = __errno_location();
      v18 = *v17;
      v19 = v17;
      close(v23);
      *(_QWORD *)(v7 + 8 * v8) = 0LL;
      *v19 = v18;
      return v8;
    }
    *(_QWORD *)(v7 + 8 * v8) = v16;
LABEL_6:
    ++v8;
    a1 += 16LL;
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
  v21 = sub_40F630(4LL, arg);
  v22 = dcgettext(0LL, "couldn't create process for %s -d", 5);
  error(2, *v14, v22, v21);
  return sub_409030();
}

unsigned __int64 __fastcall sub_409030(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, FILE *a4, char *a5)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  char *v11; // rbx
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  FILE **v16; // [rsp+8h] [rbp-40h] BYREF

  v8 = sub_408E20(a1, a3, (__int64 *)&v16);
  v9 = v8;
  if ( a3 > v8 && v8 <= 1 )
  {
    v11 = *(char **)(a1 + 16 * v8);
    v12 = dcgettext(0LL, "open failed", 5);
    sub_405DD0(v12, v11, v13, v14, v15);
  }
  sub_408640(a1, a2, v8, a4, a5, v16);
  return v9;
}

__int64 __fastcall sub_4090C0(FILE **a1, char a2)
{
  const char *v2; // r13
  size_t v3; // r12
  __int64 v4; // rax
  char *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r12d
  int *v9; // rax
  unsigned int *v10; // r14
  __int64 *v11; // rax
  bool v12; // zf
  int v13; // eax
  FILE *v14; // rax
  int v16; // ebp
  void *v17; // rdi
  unsigned int v18; // r13d
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  char *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int fd; // [rsp+10h] [rbp-C8h] BYREF
  int v29; // [rsp+14h] [rbp-C4h]
  __sigset_t oldmask; // [rsp+18h] [rbp-C0h] BYREF

  v2 = *(const char **)(qword_61C770 + 8 * qword_61C5E8);
  v3 = strlen(v2);
  v4 = sub_411210((v3 + 32) & 0xFFFFFFFFFFFFFFF8LL);
  v5 = (char *)(v4 + 13);
  v6 = v4;
  memcpy((void *)(v4 + 13), v2, v3);
  *(_QWORD *)(v6 + v3 + 13) = 0x58585874726F732FLL;
  *(_DWORD *)&v5[v3 + 8] = 5789784;
  v7 = qword_61C5E8;
  *(_QWORD *)v6 = 0LL;
  qword_61C5E8 = v7 + 1;
  if ( v7 + 1 == qword_61C768 )
    qword_61C5E8 = 0LL;
  LOBYTE(fd) = pthread_sigmask(0, &newmask, &oldmask) == 0;
  v8 = sub_410680(v5, 0x80000LL);
  v9 = __errno_location();
  v10 = (unsigned int *)v9;
  if ( v8 >= 0 )
  {
    v11 = off_61C418;
    v12 = (_BYTE)fd == 0;
    off_61C418 = (__int64 *)v6;
    *v11 = v6;
    if ( !v12 )
    {
      v18 = *v10;
      sub_407880((__int64)&fd);
      *v10 = v18;
    }
    v12 = arg == 0LL;
    *(_BYTE *)(v6 + 12) = 0;
    if ( !v12 )
    {
      v13 = sub_407A30(&fd, 4LL);
      *(_DWORD *)(v6 + 8) = v13;
      if ( v13 > 0 )
      {
        close(v8);
        close(fd);
        v8 = v29;
        sub_406190(v6);
      }
      else if ( !v13 )
      {
        close(v29);
        if ( v8 != 1 )
          sub_408E10(v8, 1);
        if ( fd )
          sub_408E10(fd, 0);
        execlp(arg, arg, 0LL);
        sub_4060D0(*v10, "couldn't execute compress program");
      }
    }
    v14 = fdopen(v8, "w");
    *a1 = v14;
    if ( !v14 )
    {
      v19 = dcgettext(0LL, "couldn't create temporary file", 5);
      sub_405DD0(v19, v5, v20, v21, v22);
    }
    return v6;
  }
  v16 = *v9;
  if ( (_BYTE)fd )
  {
    sub_407880((__int64)&fd);
    *v10 = v16;
  }
  if ( v16 == 24 && a2 == 1 )
  {
    v17 = (void *)v6;
    v6 = 0LL;
    free(v17);
    return v6;
  }
  v23 = sub_40F630(4LL, v2);
  v24 = dcgettext(0LL, "cannot create temporary file in %s", 5);
  v25 = *v10;
  error(2, v25, v24, v23);
  return sub_409330(2LL, v25, v26, v27);
}

void __fastcall sub_409330(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char *a4)
{
  _QWORD *v4; // r14
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // r15
  const void *v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rbp
  char v25; // r12
  __int64 v26; // r14
  _BOOL4 v27; // r13d
  int v28; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  char **v31; // r15
  char **v32; // rbp
  __int64 v33; // rax
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r13
  size_t v36; // rdx
  FILE *v37; // rax
  char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rsi
  bool v45; // cc
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char *v48; // rbx
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned __int64 v53; // [rsp+0h] [rbp-198h]
  unsigned __int64 v54; // [rsp+0h] [rbp-198h]
  __int64 v55; // [rsp+0h] [rbp-198h]
  __int64 v56; // [rsp+8h] [rbp-190h]
  unsigned __int64 v57; // [rsp+8h] [rbp-190h]
  __int64 v58; // [rsp+8h] [rbp-190h]
  struct stat *v59; // [rsp+10h] [rbp-188h]
  unsigned __int64 v61; // [rsp+20h] [rbp-178h]
  __int64 v62; // [rsp+20h] [rbp-178h]
  FILE *v63; // [rsp+38h] [rbp-160h] BYREF
  struct stat v64; // [rsp+40h] [rbp-158h] BYREF
  struct stat stat_buf; // [rsp+D0h] [rbp-C8h] BYREF

  v4 = (_QWORD *)a1;
  v5 = a3;
  v7 = (unsigned int)dword_61C420;
  if ( (unsigned int)dword_61C420 < a3 )
  {
    v53 = a3;
    do
    {
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 > v53 )
      {
        v21 = v7;
        v19 = (_QWORD *)a1;
        v20 = (const void *)a1;
        v16 = v53;
        v18 = 0LL;
      }
      else
      {
        do
        {
          v10 = sub_4090C0((FILE **)&stat_buf, 0);
          v11 = a2;
          v12 = v10 + 13;
          v13 = v10;
          if ( (unsigned int)dword_61C420 <= a2 )
            v11 = (unsigned int)dword_61C420;
          v14 = sub_409030(a1 + 16 * v9, v11, (unsigned int)dword_61C420, (FILE *)stat_buf.st_dev, (char *)(v10 + 13));
          v15 = a2;
          v7 = (unsigned int)dword_61C420;
          if ( v14 <= a2 )
            v15 = v14;
          v9 += v14;
          v16 = v53 - v9;
          a2 -= v15;
          v17 = v8++;
          v17 *= 16LL;
          *(_QWORD *)(a1 + v17) = v12;
          *(_QWORD *)(a1 + v17 + 8) = v13;
        }
        while ( v7 <= v53 - v9 );
        v18 = v8 % v7;
        v19 = (_QWORD *)(a1 + 16 * v8);
        v20 = (const void *)(a1 + 16 * v9);
        v21 = v7 - v8 % v7;
      }
      if ( v16 > v21 )
      {
        v62 = (__int64)v20;
        v57 = v16 + v18 + 1 - v7;
        v42 = sub_4090C0((FILE **)&stat_buf, 0);
        v43 = v57;
        v44 = a2;
        v59 = (struct stat *)v42;
        v45 = v57 <= a2;
        v58 = v42 + 13;
        if ( v45 )
          v44 = v43;
        v46 = sub_409030(v62, v44, v43, (FILE *)stat_buf.st_dev, (char *)(v42 + 13));
        v47 = a2;
        if ( v46 <= a2 )
          v47 = v46;
        ++v8;
        v9 += v46;
        *v19 = v58;
        v19[1] = v59;
        a2 -= v47;
        v20 = (const void *)(a1 + 16 * v9);
        v19 = (_QWORD *)(a1 + 16 * v8);
      }
      a2 += v8;
      memmove(v19, v20, 16 * (v53 - v9));
      v7 = (unsigned int)dword_61C420;
      v53 += v8 - v9;
    }
    while ( (unsigned int)dword_61C420 < v53 );
    v5 = v53;
  }
  if ( v5 <= a2 )
  {
    v29 = sub_408E20(a1, v5, (__int64 *)&v64);
    goto LABEL_27;
  }
  v22 = a2;
  v23 = 0LL;
  v24 = a1 + 16 * a2;
  v61 = a2;
  v25 = 0;
  v26 = v24;
  v54 = v5;
  while ( 1 )
  {
    v27 = strcmp(*(const char **)v26, "-") != 0;
    if ( a4 )
    {
      v28 = strcmp(a4, *(const char **)v26);
      if ( v27 && !v28 )
      {
LABEL_35:
        if ( !v23 )
        {
          v23 = sub_4090C0(&v63, 0);
          sub_409030(v26, 0LL, 1uLL, v63, (char *)(v23 + 13));
        }
        *(_QWORD *)v26 = v23 + 13;
        *(_QWORD *)(v26 + 8) = v23;
        goto LABEL_17;
      }
    }
    if ( !v25 && __fxstat(1, 1, &v64) )
      break;
    if ( !v27 )
    {
      v25 = 1;
      if ( __fxstat(1, 0, &stat_buf) )
        goto LABEL_17;
      goto LABEL_16;
    }
    v25 = 1;
    if ( __xstat(1, *(const char **)v26, &stat_buf) )
    {
      ++v22;
      v26 += 16LL;
      if ( v22 == v54 )
        break;
    }
    else
    {
LABEL_16:
      v25 = 1;
      if ( stat_buf.st_ino == v64.st_ino && stat_buf.st_dev == v64.st_dev )
        goto LABEL_35;
LABEL_17:
      ++v22;
      v26 += 16LL;
      if ( v22 == v54 )
        break;
    }
  }
  v4 = (_QWORD *)a1;
  a2 = v61;
  v5 = v54;
  while ( 2 )
  {
    v29 = sub_408E20((__int64)v4, v5, (__int64 *)&v64);
LABEL_27:
    v30 = v29;
    if ( v5 != v29 )
    {
      if ( v29 <= 2 )
      {
        v48 = (char *)v4[2 * v29];
        v49 = dcgettext(0LL, "open failed", 5);
        sub_405DD0(v49, v48, v50, v51, v52);
      }
LABEL_29:
      v31 = (char **)&v4[2 * v30 - 2];
      do
      {
        --v30;
        v32 = v31;
        sub_407DF0(*(FILE **)(v64.st_dev + 8 * v30), *v31);
        v31 -= 2;
        v33 = sub_4090C0((FILE **)&stat_buf, v30 > 2);
      }
      while ( !v33 );
      v34 = v30;
      if ( a2 <= v30 )
        v34 = a2;
      v56 = v33;
      v35 = v5 - v30;
      v55 = v33 + 13;
      sub_408640((__int64)v4, v34, v30, (FILE *)stat_buf.st_dev, (char *)(v33 + 13), (FILE **)v64.st_dev);
      v36 = 16 * v35;
      a2 = a2 - v34 + 1;
      *v4 = v55;
      v5 = v35 + 1;
      v4[1] = v56;
      memmove(v4 + 2, v32, v36);
      continue;
    }
    break;
  }
  v37 = sub_407CD0(a4, "w");
  if ( !v37 )
  {
    if ( *__errno_location() != 24 || v5 <= 2 )
    {
      v38 = dcgettext(0LL, "open failed", 5);
      sub_405DD0(v38, a4, v39, v40, v41);
    }
    goto LABEL_29;
  }
  sub_408640((__int64)v4, a2, v5, v37, a4, (FILE **)v64.st_dev);
}

int __fastcall sub_409830(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax

  v2 = a2[1];
  v3 = a2[3];
  if ( *a2 != a2[2] )
  {
    if ( v2 == v3 && a2[6] )
      return v3;
LABEL_3:
    LODWORD(v3) = sub_406320(a1, (__int64)a2);
    return v3;
  }
  if ( v2 != v3 && !a2[5] )
    goto LABEL_3;
  return v3;
}

int __fastcall sub_409880(
        __m128i *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __m128i **a4,
        pthread_cond_t *a5,
        FILE *a6,
        char *a7)
{
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  __m128i *v14; // r10
  pthread_mutex_t *v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r15
  const __m128i *v22; // rsi
  __int64 v23; // rdi
  __m128i *v24; // r8
  __int64 v25; // rax
  __m128i v26; // xmm2
  const __m128i *v27; // r11
  int v28; // eax
  __m128i v29; // xmm0
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  const __m128i *v35; // rdi
  __m128i v36; // xmm4
  const __m128i *v37; // rax
  bool v38; // zf
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rdi
  __m128i *v42; // rdi
  __int64 v43; // r15
  const __m128i *v44; // r11
  __int64 v45; // rdi
  const __m128i *v46; // rdx
  __m128i v47; // xmm6
  const __m128i *v48; // rcx
  __int64 i; // r15
  __m128i *v50; // rdi
  int v52; // [rsp-10h] [rbp-C8h]
  __m128i *mutexa; // [rsp+8h] [rbp-B0h]
  pthread_mutex_t *mutexb; // [rsp+8h] [rbp-B0h]
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-B0h]
  pthread_mutex_t *v57; // [rsp+18h] [rbp-A0h]
  pthread_mutex_t *v58; // [rsp+18h] [rbp-A0h]
  pthread_mutex_t *v59; // [rsp+18h] [rbp-A0h]
  __m128i *v60; // [rsp+20h] [rbp-98h]
  pthread_cond_t *cond; // [rsp+28h] [rbp-90h]
  pthread_t newthread; // [rsp+38h] [rbp-80h] BYREF
  __int64 arg[15]; // [rsp+40h] [rbp-78h] BYREF

  v10 = (unsigned __int64)a4[5];
  v11 = (unsigned __int64)a4[6];
  arg[2] = a3;
  v12 = (__int64)a4[8];
  arg[0] = (__int64)a1;
  arg[3] = v12;
  arg[1] = a2 >> 1;
  arg[4] = (__int64)a5;
  arg[5] = (__int64)a6;
  arg[6] = (__int64)a7;
  if ( v10 + v11 > 0x1FFFF && a2 > 1 )
  {
    if ( !pthread_create(&newthread, 0LL, start_routine, arg) )
    {
      sub_409880(
        (_DWORD)a1 - 32 * *((_DWORD *)a4 + 10),
        a2 - (a2 >> 1),
        a3,
        (unsigned int)a4[9],
        (_DWORD)a5,
        (_DWORD)a6,
        (__int64)a7);
      pthread_join(newthread, 0LL);
      return v52;
    }
    v10 = (unsigned __int64)a4[5];
    v11 = (unsigned __int64)a4[6];
  }
  v13 = -32LL * v10;
  v14 = &a1[-2 * a3];
  v15 = (pthread_mutex_t *)&a1[-2 * v10];
  if ( v11 > 1 )
  {
    cond = (pthread_cond_t *)v10;
    v57 = (pthread_mutex_t *)v11;
    mutexa = &a1[-2 * v10];
    sub_408370(mutexa, v11, &v14[-2 * (v10 >> 1)], 0);
    v10 = (unsigned __int64)cond;
    v14 = &a1[-2 * a3];
    v11 = (unsigned __int64)v57;
    v15 = (pthread_mutex_t *)mutexa;
  }
  if ( v10 > 1 )
  {
    v58 = v15;
    mutexb = (pthread_mutex_t *)v11;
    sub_408370(a1, v10, v14, 0);
    v15 = v58;
    v11 = (unsigned __int64)mutexb;
  }
  *a4 = a1;
  a4[1] = (__m128i *)v15;
  a4[2] = (__m128i *)v15;
  a4[3] = (__m128i *)((char *)a1 + v13 - 32 * v11);
  sub_406320((__int64)a5, (__int64)a4);
  mutex = (pthread_mutex_t *)(&a5->__align + 1);
  while ( 1 )
  {
    pthread_mutex_lock(mutex);
    while ( 1 )
    {
      v16 = sub_40D190(a5->__align);
      if ( v16 )
        break;
      pthread_cond_wait(a5 + 1, mutex);
    }
    v17 = v16;
    pthread_mutex_unlock(mutex);
    v59 = (pthread_mutex_t *)(v17 + 88);
    pthread_mutex_lock((pthread_mutex_t *)(v17 + 88));
    v18 = *(_DWORD *)(v17 + 80);
    *(_BYTE *)(v17 + 84) = 0;
    if ( !v18 )
      break;
    v19 = *(_QWORD *)v17;
    v20 = *(_QWORD *)(v17 + 8);
    v21 = (a3 >> (2 * (unsigned __int8)v18 + 2)) + 1;
    if ( v18 > 1 )
    {
      v22 = *(const __m128i **)(v17 + 8);
      v23 = *(_QWORD *)v17;
      v24 = **(__m128i ***)(v17 + 32);
      while ( 1 )
      {
        v27 = *(const __m128i **)(v17 + 16);
        if ( v27 == (const __m128i *)v23 )
        {
          v30 = *(_QWORD *)(v17 + 48);
          v31 = *(_QWORD *)(v17 + 40);
          v33 = (v19 - v23) >> 5;
          if ( (v20 - (__int64)v22) >> 5 == v30 )
          {
            v32 = *(_QWORD *)(v17 + 48);
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        if ( *(const __m128i **)(v17 + 24) == v22 )
          break;
        if ( !v21 )
        {
          v30 = *(_QWORD *)(v17 + 48);
          v31 = *(_QWORD *)(v17 + 40);
          v21 = -1LL;
          v32 = (v20 - (__int64)v22) >> 5;
          v33 = (v19 - v23) >> 5;
          if ( v30 == v32 )
          {
            v34 = -2LL;
LABEL_23:
            v35 = (const __m128i *)(v23 - 32);
            do
            {
              v36 = _mm_loadu_si128(v35);
              v24 -= 2;
              *(_QWORD *)v17 = v35;
              v37 = v35;
              *v24 = v36;
              v24[1] = _mm_loadu_si128(v35 + 1);
              if ( v27 == v35 )
              {
                v30 = v32;
                v33 = (v19 - (__int64)v27) >> 5;
                goto LABEL_27;
              }
              --v34;
              v35 -= 2;
            }
            while ( v34 != -1 );
            v30 = v32;
            v33 = (v19 - (__int64)v37) >> 5;
            goto LABEL_27;
          }
          goto LABEL_35;
        }
        v60 = v24;
        v28 = sub_4082A0((const void **)(v23 - 32), (unsigned __int8 **)&v22[-2]);
        v24 = v60 - 2;
        if ( v28 > 0 )
        {
          v25 = *(_QWORD *)(v17 + 8);
          v23 = *(_QWORD *)v17;
          v26 = _mm_loadu_si128((const __m128i *)(v25 - 32));
          v22 = (const __m128i *)(v25 - 32);
          *(_QWORD *)(v17 + 8) = v25 - 32;
          *v24 = v26;
        }
        else
        {
          v25 = *(_QWORD *)v17;
          v22 = *(const __m128i **)(v17 + 8);
          v29 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)v17 - 32LL));
          v23 = *(_QWORD *)v17 - 32LL;
          *(_QWORD *)v17 = v23;
          *v24 = v29;
        }
        v24[1] = _mm_loadu_si128((const __m128i *)(v25 - 16));
        --v21;
      }
      v30 = *(_QWORD *)(v17 + 48);
      v31 = *(_QWORD *)(v17 + 40);
      v32 = (v20 - (__int64)v22) >> 5;
      v33 = (v19 - v23) >> 5;
      if ( v30 == v32 )
      {
        v34 = v21 - 1;
        if ( !v21 )
          goto LABEL_27;
        goto LABEL_23;
      }
LABEL_35:
      if ( v33 == v31 && (v44 = *(const __m128i **)(v17 + 24), v44 != v22) && (v45 = v21 - 1, v46 = v22 - 2, v21) )
      {
        do
        {
          v47 = _mm_loadu_si128(v46);
          v24 -= 2;
          *(_QWORD *)(v17 + 8) = v46;
          v48 = v46;
          *v24 = v47;
          v24[1] = _mm_loadu_si128(v46 + 1);
          if ( v46 == v44 )
          {
            v32 = (v20 - (__int64)v46) >> 5;
            goto LABEL_27;
          }
          --v45;
          v46 -= 2;
        }
        while ( v45 != -1 );
        v32 = (v20 - (__int64)v48) >> 5;
      }
      else
      {
        v32 = (v20 - (__int64)v22) >> 5;
      }
LABEL_27:
      **(_QWORD **)(v17 + 32) = v24;
      goto LABEL_28;
    }
    v40 = *(_QWORD *)(v17 + 8);
    v41 = *(_QWORD *)v17;
    while ( 1 )
    {
      if ( *(_QWORD *)(v17 + 16) == v41 )
      {
        v32 = *(_QWORD *)(v17 + 48);
        v31 = *(_QWORD *)(v17 + 40);
        v33 = (v19 - v41) >> 5;
        if ( (v20 - v40) >> 5 == v32 )
        {
          v30 = *(_QWORD *)(v17 + 48);
          goto LABEL_28;
        }
        if ( v33 == v31 )
          goto LABEL_56;
        goto LABEL_53;
      }
      if ( *(_QWORD *)(v17 + 24) == v40 )
        break;
      if ( !v21 )
      {
        v21 = -1LL;
        v33 = (v19 - v41) >> 5;
        if ( *(_QWORD *)(v17 + 48) == (v20 - v40) >> 5 )
        {
          for ( i = -2LL; i != -1; --i )
          {
LABEL_71:
            v50 = (__m128i *)(v41 - 32);
            *(_QWORD *)v17 = v50;
            sub_4085D0(v50, a6, a7);
            v41 = *(_QWORD *)v17;
            if ( *(_QWORD *)v17 == *(_QWORD *)(v17 + 16) )
              break;
          }
          v31 = *(_QWORD *)(v17 + 40);
          v30 = *(_QWORD *)(v17 + 48);
          v33 = (v19 - v41) >> 5;
          v32 = (v20 - *(_QWORD *)(v17 + 8)) >> 5;
          goto LABEL_28;
        }
LABEL_55:
        v31 = *(_QWORD *)(v17 + 40);
        if ( v33 == v31 )
        {
LABEL_56:
          if ( *(_QWORD *)(v17 + 24) != v40 && v21 )
          {
            v43 = v21 - 1;
            do
            {
              *(_QWORD *)(v17 + 8) = v40 - 32;
              sub_4085D0((__m128i *)(v40 - 32), a6, a7);
              v40 = *(_QWORD *)(v17 + 8);
              if ( v40 == *(_QWORD *)(v17 + 24) )
                break;
              --v43;
            }
            while ( v43 != -1 );
            v31 = *(_QWORD *)(v17 + 40);
            v30 = *(_QWORD *)(v17 + 48);
            v33 = (v19 - *(_QWORD *)v17) >> 5;
            v32 = (v20 - v40) >> 5;
            goto LABEL_28;
          }
        }
LABEL_53:
        v30 = *(_QWORD *)(v17 + 48);
        v32 = (v20 - v40) >> 5;
        goto LABEL_28;
      }
      if ( sub_4082A0((const void **)(v41 - 32), (unsigned __int8 **)(v40 - 32)) > 0 )
      {
        v42 = (__m128i *)(*(_QWORD *)(v17 + 8) - 32LL);
        *(_QWORD *)(v17 + 8) = v42;
      }
      else
      {
        v42 = (__m128i *)(*(_QWORD *)v17 - 32LL);
        *(_QWORD *)v17 = v42;
      }
      sub_4085D0(v42, a6, a7);
      v41 = *(_QWORD *)v17;
      v40 = *(_QWORD *)(v17 + 8);
      --v21;
    }
    v32 = *(_QWORD *)(v17 + 48);
    v33 = (v19 - v41) >> 5;
    if ( (v20 - v40) >> 5 != v32 )
      goto LABEL_55;
    if ( v21 )
    {
      i = v21 - 1;
      goto LABEL_71;
    }
    v31 = *(_QWORD *)(v17 + 40);
    v30 = *(_QWORD *)(v17 + 48);
LABEL_28:
    v38 = *(_BYTE *)(v17 + 84) == 0;
    *(_QWORD *)(v17 + 40) = v31 - v33;
    *(_QWORD *)(v17 + 48) = v30 - v32;
    if ( v38 )
      sub_409830((__int64)a5, (_QWORD *)v17);
    if ( *(_DWORD *)(v17 + 80) > 1u )
    {
      pthread_mutex_lock((pthread_mutex_t *)(*(_QWORD *)(v17 + 56) + 88LL));
      v39 = *(_QWORD *)(v17 + 56);
      if ( !*(_BYTE *)(v39 + 84) )
      {
        sub_409830((__int64)a5, (_QWORD *)v39);
        v39 = *(_QWORD *)(v17 + 56);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(v39 + 88));
    }
    else if ( !(*(_QWORD *)(v17 + 40) + *(_QWORD *)(v17 + 48)) )
    {
      sub_406320((__int64)a5, *(_QWORD *)(v17 + 56));
    }
    pthread_mutex_unlock(v59);
  }
  pthread_mutex_unlock(v59);
  return sub_406320((__int64)a5, v17);
}

void *__fastcall start_routine(void *a1)
{
  sub_409880(
    *(__m128i **)a1,
    *((_QWORD *)a1 + 1),
    *((_QWORD *)a1 + 2),
    *((__m128i ***)a1 + 3),
    *((pthread_cond_t **)a1 + 4),
    *((FILE **)a1 + 5),
    *((char **)a1 + 6));
  return 0LL;
}

__int64 __fastcall sub_40A010(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = qword_61C768;
  v3 = qword_61C760;
  result = qword_61C770;
  if ( qword_61C768 == qword_61C760 )
  {
    if ( qword_61C770 )
    {
      v5 = 0xAAAAAAAAAAAAAA9LL;
      if ( (unsigned __int64)qword_61C760 <= 0xAAAAAAAAAAAAAA9LL )
      {
        v3 = qword_61C760 + ((unsigned __int64)qword_61C760 >> 1) + 1;
        a2 = 8 * v3;
LABEL_6:
        qword_61C760 = v3;
        result = sub_411270(qword_61C770, a2);
        v2 = qword_61C768;
        qword_61C770 = result;
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
      if ( (qword_61C760 & 0x1000000000000000LL) == 0 && !((unsigned __int64)qword_61C760 >> 61) )
        goto LABEL_6;
    }
    sub_411460(a1, a2, v5);
  }
LABEL_2:
  *(_QWORD *)(result + 8 * v2) = a1;
  qword_61C768 = v2 + 1;
  return result;
}

void __fastcall __noreturn sub_40A0D0(int status)
{
  __int64 v2; // rbp
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
  FILE *v13; // rbp
  char *v14; // rax
  FILE *v15; // rbp
  char *v16; // rax
  FILE *v17; // rbp
  char *v18; // rax
  FILE *v19; // rbp
  char *v20; // rax
  FILE *v21; // rbp
  char *v22; // rax
  FILE *v23; // rbp
  char *v24; // rax
  FILE *v25; // rbp
  char *v26; // rax
  FILE *v27; // rbp
  char *v28; // rax
  FILE *v29; // rbp
  char *v30; // rax
  FILE *v31; // rbp
  char *v32; // rax
  FILE *v33; // rbp
  char *v34; // rax
  char *v35; // rax
  FILE *v36; // rbp
  char *v37; // rax
  FILE *v38; // rbp
  char *v39; // rax
  FILE *v40; // rbp
  char *v41; // rax
  FILE *v42; // rbp
  char *v43; // rax
  FILE *v44; // rbp
  char *v45; // rax
  __int64 *v46; // rax
  char *v47; // rax
  char *v48; // rax
  char *v49; // rax
  char *v50; // rax
  char *v51; // rax
  char *v52; // rax
  char *v53; // rax
  __int64 v54[17]; // [rsp+0h] [rbp-88h] BYREF

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
  v54[0] = (__int64)"[";
  v46 = v54;
  v54[1] = (__int64)"test invocation";
  v54[2] = (__int64)"coreutils";
  v54[3] = (__int64)"Multi-call invocation";
  v54[4] = (__int64)"sha224sum";
  v54[5] = (__int64)"sha2 utilities";
  v54[6] = (__int64)"sha256sum";
  v54[7] = (__int64)"sha2 utilities";
  v54[8] = (__int64)"sha384sum";
  v54[9] = (__int64)"sha2 utilities";
  v54[10] = (__int64)"sha512sum";
  v54[11] = (__int64)"sha2 utilities";
  v54[12] = 0LL;
  v54[13] = 0LL;
  do
    v46 += 2;
  while ( *v46 && memcmp("sort", (const void *)*v46, 5uLL) );
  if ( v46[1] )
  {
    v47 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v47);
    v48 = setlocale(5, 0LL);
    if ( !v48 || !strncmp(v48, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v51 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v51);
    v52 = setlocale(5, 0LL);
    if ( !v52 || !strncmp(v52, "en_", 3uLL) )
      goto LABEL_10;
  }
  v53 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v53);
LABEL_10:
  v49 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v49);
  v50 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v50);
LABEL_3:
  exit(status);
}

void __noreturn sub_40A640()
{
  sub_40A0D0(1);
}

__int64 __fastcall sub_40A650(const char *a1, const char **a2, char *a3, size_t a4)
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

void __fastcall sub_40A770(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax

  if ( a3 == -1 )
    v3 = dcgettext(0LL, "invalid argument %s for %s", 5);
  else
    v3 = dcgettext(0LL, "ambiguous argument %s for %s", 5);
  v4 = sub_40F860(1LL, a1);
  v5 = sub_40F550(0LL, 8LL, a2);
  error(0, 0, v3, v5, v4);
}

int __fastcall sub_40A7F0(__int64 *a1, char *a2, size_t a3)
{
  const void *v3; // r14
  FILE *v6; // rbx
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
      v11 = (const char *)sub_40F880(i);
      __fprintf_chk(stderr, 1LL, "\n  - %s", v11);
      i = a1[v9];
      if ( !i )
        goto LABEL_7;
    }
    ++v9;
    a2 += a3;
    v12 = (const char *)sub_40F880(i);
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

__int64 __fastcall sub_40A910(__int64 a1, const char *a2, const char **a3, char *a4, size_t a5, void (*a6)(void))
{
  __int64 result; // rax

  result = sub_40A650(a2, a3, a4, a5);
  if ( result < 0 )
  {
    sub_40A770(a1, (__int64)a2, result);
    sub_40A7F0((__int64 *)a3, a4, a5);
    a6();
    return -1LL;
  }
  return result;
}

__int64 __fastcall sub_40A980(void *s1, __int64 *a2, char *a3, size_t a4)
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

__int64 sub_40A9F0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

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
        v5 = (const char *)sub_40F6D0();
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

__int64 __fastcall sub_40AA90(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = 0xEFCDAB8967452301LL;
  result = 0x1032547698BADCFELL;
  *(_QWORD *)(a1 + 8) = 0x1032547698BADCFELL;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}

_DWORD *__fastcall sub_40AAC0(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // rax

  result = a2;
  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[3];
  return result;
}

_DWORD *__fastcall sub_40AAE0(char *a1, __int64 a2, _DWORD *a3)
{
  int v5; // r11d
  char *v6; // rcx
  int v7; // r10d
  int v8; // edx
  _BOOL4 v9; // eax
  int v10; // esi
  int v11; // r15d
  int v12; // r14d
  int v13; // r13d
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // r9d
  int v18; // esi
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // ebp
  int v23; // esi
  int v24; // r12d
  int v25; // eax
  int v26; // edx
  int v27; // r8d
  int v28; // ecx
  int v29; // esi
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v33; // esi
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // esi
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  int v41; // esi
  int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // edi
  int v46; // eax
  int v47; // edx
  int v48; // esi
  int v49; // edi
  int v50; // ecx
  int v51; // edx
  int v52; // esi
  int v53; // eax
  int v54; // ecx
  int v55; // edi
  int v56; // edx
  int v57; // esi
  int v58; // ecx
  int v59; // eax
  int v60; // edi
  int v61; // esi
  int v62; // edx
  int v63; // ecx
  int v64; // edi
  int v65; // eax
  int v66; // edx
  int v67; // ecx
  int v68; // esi
  int v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // esi
  int v73; // eax
  int v74; // edx
  int v75; // ecx
  int v76; // esi
  int v77; // edi
  int v78; // eax
  int v79; // edx
  int v80; // ecx
  _DWORD *result; // rax
  int v82; // [rsp+0h] [rbp-74h]
  int v83; // [rsp+4h] [rbp-70h]
  int v84; // [rsp+8h] [rbp-6Ch]
  int v85; // [rsp+Ch] [rbp-68h]
  int v86; // [rsp+10h] [rbp-64h]
  int v87; // [rsp+14h] [rbp-60h]
  int v88; // [rsp+18h] [rbp-5Ch]
  int v89; // [rsp+1Ch] [rbp-58h]
  int v90; // [rsp+20h] [rbp-54h]
  int v91; // [rsp+24h] [rbp-50h]
  int v92; // [rsp+28h] [rbp-4Ch]
  int v93; // [rsp+2Ch] [rbp-48h]
  unsigned __int64 v94; // [rsp+34h] [rbp-40h]

  v5 = a3[1];
  v6 = &a1[a2 & 0xFFFFFFFFFFFFFFFCLL];
  v7 = a3[2];
  v93 = *a3;
  v91 = a3[3];
  v8 = a3[4] + a2;
  v9 = __CFADD__(a3[4], (_DWORD)a2);
  v10 = a3[5] + HIDWORD(a2);
  v94 = (unsigned __int64)v6;
  a3[4] = v8;
  a3[5] = v9 + v10;
  if ( a1 < v6 )
  {
    v11 = v7;
    do
    {
      v12 = *(_DWORD *)a1;
      v82 = *((_DWORD *)a1 + 1);
      v13 = *((_DWORD *)a1 + 7);
      v86 = *((_DWORD *)a1 + 5);
      v84 = *((_DWORD *)a1 + 3);
      v88 = *((_DWORD *)a1 + 9);
      v90 = *((_DWORD *)a1 + 11);
      v14 = v5 + __ROL4__(*(_DWORD *)a1 + v93 - 680876936 + (v91 ^ v5 & (v11 ^ v91)), 7);
      v15 = v14 + __ROL4__(v82 + v91 - 389564586 + (v11 ^ v14 & (v11 ^ v5)), 12);
      v83 = *((_DWORD *)a1 + 2);
      v16 = v15 + __ROR4__(v83 + v11 + 606105819 + (v5 ^ v15 & (v5 ^ v14)), 15);
      v85 = *((_DWORD *)a1 + 4);
      v17 = *((_DWORD *)a1 + 15);
      v18 = v16 + __ROR4__(v84 + v5 - 1044525330 + (v14 ^ v16 & (v15 ^ v14)), 10);
      v92 = *((_DWORD *)a1 + 6);
      v19 = v18 + __ROL4__(v85 + v14 - 176418897 + (v15 ^ v18 & (v16 ^ v15)), 7);
      v20 = v19 + __ROL4__(v86 + v15 + 1200080426 + (v16 ^ v19 & (v18 ^ v16)), 12);
      v21 = v20 + __ROR4__(v92 + v16 - 1473231341 + (v18 ^ v20 & (v19 ^ v18)), 15);
      v87 = *((_DWORD *)a1 + 8);
      v22 = *((_DWORD *)a1 + 12);
      v23 = v21 + __ROR4__(v13 + v18 - 45705983 + (v19 ^ v21 & (v20 ^ v19)), 10);
      v24 = *((_DWORD *)a1 + 14);
      v25 = v23 + __ROL4__(v87 + v19 + 1770035416 + (v20 ^ v23 & (v21 ^ v20)), 7);
      v89 = *((_DWORD *)a1 + 10);
      v26 = v25 + __ROL4__(v88 + v20 - 1958414417 + (v21 ^ v25 & (v23 ^ v21)), 12);
      v27 = *((_DWORD *)a1 + 13);
      a1 += 64;
      v28 = v26 + __ROR4__(v89 + v21 - 42063 + (v23 ^ v26 & (v25 ^ v23)), 15);
      v29 = v28 + __ROR4__(v90 + v23 - 1990404162 + (v25 ^ v28 & (v26 ^ v25)), 10);
      v30 = v29 + __ROL4__(v22 + v25 + 1804603682 + (v26 ^ v29 & (v28 ^ v26)), 7);
      v31 = v30 + __ROL4__(v27 + v26 - 40341101 + (v28 ^ v30 & (v29 ^ v28)), 12);
      v32 = v31 + __ROR4__(v24 + v28 - 1502002290 + (v29 ^ v31 & (v30 ^ v29)), 15);
      v33 = v32 + __ROR4__(v17 + v29 + 1236535329 + (v30 ^ v32 & (v31 ^ v30)), 10);
      v34 = v33 + __ROL4__(v82 + v30 - 165796510 + (v32 ^ v31 & (v33 ^ v32)), 5);
      v35 = v34 + __ROL4__(v92 + v31 - 1069501632 + (v33 ^ v32 & (v34 ^ v33)), 9);
      v36 = v35 + __ROL4__(v90 + v32 + 643717713 + (v34 ^ v33 & (v35 ^ v34)), 14);
      v37 = v36 + __ROR4__(v12 + v33 - 373897302 + (v35 ^ v34 & (v36 ^ v35)), 12);
      v38 = v37 + __ROL4__(v86 + v34 - 701558691 + (v36 ^ v35 & (v37 ^ v36)), 5);
      v39 = v38 + __ROL4__(v89 + v35 + 38016083 + (v37 ^ v36 & (v38 ^ v37)), 9);
      v40 = v39 + __ROL4__(v17 + v36 - 660478335 + (v38 ^ v37 & (v39 ^ v38)), 14);
      v41 = v40 + __ROR4__(v85 + v37 - 405537848 + (v39 ^ v38 & (v40 ^ v39)), 12);
      v42 = v41 + __ROL4__(v88 + v38 + 568446438 + (v40 ^ v39 & (v41 ^ v40)), 5);
      v43 = v42 + __ROL4__(v24 + v39 - 1019803690 + (v41 ^ v40 & (v42 ^ v41)), 9);
      v44 = v43 + __ROL4__(v84 + v40 - 187363961 + (v42 ^ v41 & (v43 ^ v42)), 14);
      v45 = v44 + __ROR4__(v87 + v41 + 1163531501 + (v43 ^ v42 & (v44 ^ v43)), 12);
      v46 = v45 + __ROL4__(v27 + v42 - 1444681467 + (v44 ^ v43 & (v45 ^ v44)), 5);
      v47 = v46 + __ROL4__(v83 + v43 - 51403784 + (v45 ^ v44 & (v46 ^ v45)), 9);
      v48 = v47 + __ROL4__(v13 + v44 + 1735328473 + (v46 ^ v45 & (v47 ^ v46)), 14);
      v49 = v48 + __ROR4__(v22 + v45 - 1926607734 + (v47 ^ v46 & (v48 ^ v47)), 12);
      v50 = v49 + __ROL4__(v86 + v46 - 378558 + (v49 ^ v48 ^ v47), 4);
      v51 = v50 + __ROL4__(v87 + v47 - 2022574463 + (v50 ^ v49 ^ v48), 11);
      v52 = v51 + __ROL4__(v90 + v48 + 1839030562 + (v51 ^ v50 ^ v49), 16);
      v53 = v52 + __ROR4__(v24 + v49 - 35309556 + (v52 ^ v51 ^ v50), 9);
      v54 = v53 + __ROL4__(v82 + v50 - 1530992060 + (v53 ^ v52 ^ v51), 4);
      v55 = v54 + __ROL4__(v85 + v51 + 1272893353 + (v54 ^ v53 ^ v52), 11);
      v56 = v55 + __ROL4__(v13 + v52 - 155497632 + (v55 ^ v54 ^ v53), 16);
      v57 = v56 + __ROR4__(v89 + v53 - 1094730640 + (v56 ^ v55 ^ v54), 9);
      v58 = v57 + __ROL4__(v27 + v54 + 681279174 + (v57 ^ v56 ^ v55), 4);
      v59 = v58 + __ROL4__(v12 + v55 - 358537222 + (v58 ^ v57 ^ v56), 11);
      v60 = v59 + __ROL4__(v84 + v56 - 722521979 + (v59 ^ v58 ^ v57), 16);
      v61 = v60 + __ROR4__(v92 + v57 + 76029189 + (v60 ^ v59 ^ v58), 9);
      v62 = v61 + __ROL4__(v88 + v58 - 640364487 + (v61 ^ v60 ^ v59), 4);
      v63 = v62 + __ROL4__(v22 + v59 - 421815835 + (v62 ^ v61 ^ v60), 11);
      v64 = v63 + __ROL4__(v17 + v60 + 530742520 + (v63 ^ v62 ^ v61), 16);
      v65 = v64 + __ROR4__(v83 + v61 - 995338651 + (v64 ^ v63 ^ v62), 9);
      v66 = v65 + __ROL4__(v12 + v62 - 198630844 + (v64 ^ (v65 | ~v63)), 6);
      v67 = v66 + __ROL4__(v13 + v63 + 1126891415 + (v65 ^ (v66 | ~v64)), 10);
      v68 = v67 + __ROL4__(v24 + v64 - 1416354905 + (v66 ^ (v67 | ~v65)), 15);
      v69 = v68 + __ROR4__(v86 + v65 - 57434055 + (v67 ^ (v68 | ~v66)), 11);
      v70 = v69 + __ROL4__(v22 + v66 + 1700485571 + (v68 ^ (v69 | ~v67)), 6);
      v71 = v70 + __ROL4__(v84 + v67 - 1894986606 + (v69 ^ (v70 | ~v68)), 10);
      v72 = v71 + __ROL4__(v89 + v68 - 1051523 + (v70 ^ (v71 | ~v69)), 15);
      v73 = v72 + __ROR4__(v82 + v69 - 2054922799 + (v71 ^ (v72 | ~v70)), 11);
      v74 = v73 + __ROL4__(v87 + v70 + 1873313359 + (v72 ^ (v73 | ~v71)), 6);
      v75 = v74 + __ROL4__(v17 + v71 - 30611744 + (v73 ^ (v74 | ~v72)), 10);
      v76 = v75 + __ROL4__(v92 + v72 - 1560198380 + (v74 ^ (v75 | ~v73)), 15);
      v77 = v76 + __ROR4__(v27 + v73 + 1309151649 + (v75 ^ (v76 | ~v74)), 11);
      v78 = v77 + __ROL4__(v85 + v74 - 145523070 + (v76 ^ (v77 | ~v75)), 6);
      v79 = v78 + __ROL4__(v90 + v75 - 1120210379 + (v77 ^ (v78 | ~v76)), 10);
      v80 = v79 + __ROL4__(v83 + v76 + 718787259 + (v78 ^ (v79 | ~v77)), 15);
      v93 += v78;
      v11 += v80;
      v5 += v80 + __ROR4__(v88 + v77 - 343485551 + (v79 ^ (v80 | ~v78)), 11);
      v91 += v79;
    }
    while ( v94 > (unsigned __int64)a1 );
    v7 = v11;
  }
  result = a3;
  *a3 = v93;
  a3[1] = v5;
  a3[2] = v7;
  a3[3] = v91;
  return result;
}

_DWORD *__fastcall sub_40B250(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // esi
  __int64 v6; // r8
  bool v7; // cf
  unsigned int v8; // esi
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rcx

  v3 = *(unsigned int *)(a1 + 24);
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = (-(__int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFC0LL) + 128;
  v7 = __CFADD__(*(_DWORD *)(a1 + 16), v5);
  v8 = *(_DWORD *)(a1 + 16) + v5;
  *(_DWORD *)(a1 + 16) = v8;
  if ( v7 )
    *(_DWORD *)(a1 + 20) = ++v4;
  *(_DWORD *)(a1 + 4 * ((-(__int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 30) + 28) = 8 * v8;
  *(_DWORD *)(a1 + 4 * ((-(__int64)((unsigned int)v3 < 0x38) & 0xFFFFFFFFFFFFFFF0LL) + 31) + 28) = (v8 >> 29) | (8 * v4);
  v9 = (_QWORD *)(a1 + 28 + v3);
  v10 = v6 - v3 - 8;
  if ( v10 >= 8 )
  {
    *v9 = 128LL;
    *(_QWORD *)((char *)v9 + v10 - 8) = *(_QWORD *)((char *)&unk_416AD8 + v10);
    qmemcpy(
      (void *)((unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)&qword_416AE0 - ((char *)v9 - ((unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8 * (((unsigned __int64)v9 + v10 - ((unsigned __int64)(v9 + 1) & 0xFFFFFFFFFFFFFFF8LL)) >> 3));
  }
  else if ( (v10 & 4) != 0 )
  {
    *(_DWORD *)v9 = 128;
    *(_DWORD *)((char *)v9 + v10 - 4) = *(_DWORD *)((char *)&unk_416ADC + v10);
  }
  else if ( v6 - v3 != 8 )
  {
    *(_BYTE *)v9 = 0x80;
    if ( (v10 & 2) != 0 )
      *(_WORD *)((char *)v9 + v10 - 2) = *(__int16 *)((char *)&word_416ADE + v10);
  }
  sub_40AAE0((char *)(a1 + 28), v6, (_DWORD *)a1);
  return sub_40AAC0((_DWORD *)a1, a2);
}

__int64 __fastcall sub_40B360(const __m128i *src, size_t n, __int64 a3)
{
  unsigned __int64 v3; // r13
  __m128i *v5; // rbx
  __int64 result; // rax
  char *v7; // rbp
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  __int64 v10; // rcx
  char *v11; // rsi
  size_t v12; // r13
  unsigned __int64 v13; // rbp
  char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r15
  size_t v17; // rdx
  size_t v18; // r14
  unsigned int v19; // esi
  unsigned __int64 v20; // rdi
  signed __int64 v21; // r14
  unsigned int v22; // edx
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  __int64 v27; // r15
  unsigned int v28; // r15d
  unsigned int v29; // r15d
  unsigned int v30; // edx
  __int64 v31; // rcx

  v3 = n;
  v5 = (__m128i *)src;
  result = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)result )
  {
    v15 = (unsigned int)result;
    v16 = a3 + 28;
    v17 = 128LL - (unsigned int)result;
    if ( v17 > n )
      v17 = n;
    v18 = v17;
    result = (__int64)memcpy((void *)(a3 + 28 + (unsigned int)result), src, v17);
    v19 = v18 + *(_DWORD *)(a3 + 24);
    *(_DWORD *)(a3 + 24) = v19;
    if ( v19 > 0x40 )
    {
      sub_40AAE0((char *)(a3 + 28), v19 & 0xFFFFFFC0, (_DWORD *)a3);
      v24 = *(_DWORD *)(a3 + 24);
      result = v16 + ((v15 + v18) & 0xFFFFFFFFFFFFFFC0LL);
      v25 = v24 & 0x3F;
      *(_DWORD *)(a3 + 24) = v25;
      if ( (unsigned int)v25 >= 8 )
      {
        *(_QWORD *)(a3 + 28) = *(_QWORD *)result;
        *(_QWORD *)(v16 + (v24 & 0x3F) - 8) = *(_QWORD *)(result + (v24 & 0x3F) - 8);
        v26 = (a3 + 36) & 0xFFFFFFFFFFFFFFF8LL;
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
            *(_QWORD *)(v26 + v31) = *(_QWORD *)(result + v31);
          }
          while ( v30 < v29 );
        }
      }
      else if ( (v24 & 4) != 0 )
      {
        *(_DWORD *)(a3 + 28) = *(_DWORD *)result;
        result = *(unsigned int *)(result + v25 - 4);
        *(_DWORD *)(v16 + v25 - 4) = result;
      }
      else if ( (v24 & 0x3F) != 0 )
      {
        *(_BYTE *)(a3 + 28) = *(_BYTE *)result;
        if ( (v24 & 2) != 0 )
        {
          result = *(unsigned __int16 *)(result + v25 - 2);
          *(_WORD *)(v16 + v25 - 2) = result;
        }
      }
    }
    v5 = (__m128i *)((char *)src + v18);
    v3 -= v18;
  }
  if ( v3 > 0x3F )
  {
    if ( ((unsigned __int8)v5 & 3) != 0 )
    {
      v7 = (char *)(a3 + 28);
      if ( v3 == 64 )
      {
        v8 = v5;
      }
      else
      {
        v8 = &v5[4 * ((v3 - 65) >> 6) + 4];
        do
        {
          v9 = _mm_loadu_si128(v5);
          v5 += 4;
          *(__m128i *)v7 = v9;
          *(__m128i *)(a3 + 44) = _mm_loadu_si128(v5 - 3);
          *(__m128i *)(a3 + 60) = _mm_loadu_si128(v5 - 2);
          *(__m128i *)(a3 + 76) = _mm_loadu_si128(v5 - 1);
          sub_40AAE0((char *)(a3 + 28), 64LL, (_DWORD *)a3);
        }
        while ( v5 != v8 );
        v3 = v3 - ((v3 - 65) >> 6 << 6) - 64;
      }
      goto LABEL_8;
    }
    v13 = v3;
    v14 = (char *)v5;
    v3 &= 0x3Fu;
    v5 = (__m128i *)((char *)v5 + (v13 & 0xFFFFFFFFFFFFFFC0LL));
    result = (__int64)sub_40AAE0(v14, v13 & 0xFFFFFFFFFFFFFFC0LL, (_DWORD *)a3);
  }
  if ( !v3 )
    return result;
  v7 = (char *)(a3 + 28);
  v8 = v5;
LABEL_8:
  v10 = *(unsigned int *)(a3 + 24);
  result = (unsigned int)v3;
  v11 = &v7[v10];
  if ( (unsigned int)v3 >= 8 )
  {
    v20 = (unsigned __int64)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)v11 = v8->m128i_i64[0];
    *(_QWORD *)&v11[(unsigned int)v3 - 8] = *(__int64 *)((char *)&v8->m128i_i64[-1] + (unsigned int)v3);
    v21 = (char *)v8 - &v11[-v20];
    result = ((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v20) & 0xFFFFFFF8;
    if ( (unsigned int)result >= 8 )
    {
      result = ((_DWORD)v3 + (_DWORD)v11 - (_DWORD)v20) & 0xFFFFFFF8;
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
  else if ( (v3 & 4) != 0 )
  {
    *(_DWORD *)v11 = v8->m128i_i32[0];
    result = *(unsigned int *)((char *)&v8->m128i_u32[-1] + (unsigned int)v3);
    *(_DWORD *)&v11[(unsigned int)v3 - 4] = result;
  }
  else if ( (_DWORD)v3 )
  {
    *v11 = v8->m128i_i8[0];
    if ( (v3 & 2) != 0 )
    {
      result = *(unsigned __int16 *)((char *)&v8->m128i_u16[-1] + (unsigned int)v3);
      *(_WORD *)&v11[(unsigned int)v3 - 2] = result;
    }
  }
  v12 = v10 + v3;
  if ( v12 > 0x3F )
  {
    v12 -= 64LL;
    sub_40AAE0(v7, 64LL, (_DWORD *)a3);
    result = (__int64)memcpy(v7, (const void *)(a3 + 92), v12);
  }
  *(_DWORD *)(a3 + 24) = v12;
  return result;
}

_DWORD *__fastcall sub_40B660(const __m128i *a1, size_t a2, _DWORD *a3)
{
  __int64 v5[3]; // [rsp+0h] [rbp-A8h] BYREF
  int v6; // [rsp+18h] [rbp-90h]

  v5[0] = 0xEFCDAB8967452301LL;
  v5[1] = 0x1032547698BADCFELL;
  v5[2] = 0LL;
  v6 = 0;
  sub_40B360(a1, a2, (__int64)v5);
  return sub_40B250((__int64)v5, a3);
}

__int64 __fastcall sub_40B6C0(FILE *stream, _DWORD *a2)
{
  __m128i *v2; // rax
  __m128i *v3; // r12
  size_t v4; // rbx
  int flags; // edx
  size_t v6; // rax
  __int64 v8[3]; // [rsp+0h] [rbp-C8h] BYREF
  int v9; // [rsp+18h] [rbp-B0h]

  v2 = (__m128i *)malloc(0x8048uLL);
  if ( !v2 )
    return 1LL;
  v3 = v2;
  v9 = 0;
  v8[0] = 0xEFCDAB8967452301LL;
  v8[1] = 0x1032547698BADCFELL;
  v8[2] = 0LL;
LABEL_3:
  v4 = 0LL;
  while ( 1 )
  {
    v6 = fread_unlocked(&v3->m128i_i8[v4], 1uLL, 0x8000 - v4, stream);
    v4 += v6;
    if ( v4 == 0x8000 )
    {
      sub_40AAE0(v3->m128i_i8, 0x8000LL, v8);
      goto LABEL_3;
    }
    flags = stream->_flags;
    if ( !v6 )
      break;
    if ( (flags & 0x10) != 0 )
      goto LABEL_9;
  }
  if ( (flags & 0x20) != 0 )
  {
    free(v3);
    return 1LL;
  }
LABEL_9:
  if ( v4 )
    sub_40B360(v3, v4, (__int64)v8);
  sub_40B250((__int64)v8, a2);
  free(v3);
  return 0LL;
}

void __fastcall sub_40B800(FILE *a1, int a2)
{
  int v2; // eax

  if ( a1 )
  {
    v2 = fileno(a1);
    posix_fadvise(v2, 0LL, 0LL, a2);
  }
}

char *__fastcall sub_40B830(char **a1)
{
  char *v1; // rsi
  char v2; // dl
  char v3; // cl
  char *result; // rax
  unsigned int v5; // ecx
  __int64 v6; // r8

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
          if ( v5 > 0x39 || (v6 = 1LL << v5, v3 = 0, (v6 & 0x3FFFFFF03FFFFFFLL) == 0) )
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
  char *v2; // rbp
  char *v3; // rbx
  unsigned int v4; // r12d
  char v5; // r8
  char v6; // r9
  char *v7; // r13
  char *v8; // rax
  char *v9; // r13
  char *v10; // r14
  unsigned __int64 v11; // rsi
  char *v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int8 v14; // al
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 v18; // di
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r9d
  char *v25; // rdi
  unsigned int v26; // r9d
  unsigned int v27; // eax
  unsigned int v28; // [rsp+4h] [rbp-54h]
  char *v29; // [rsp+10h] [rbp-48h] BYREF
  char *v30; // [rsp+18h] [rbp-40h] BYREF

  v2 = s2;
  v3 = s1;
  v4 = strcmp(s1, s2);
  if ( v4 )
  {
    v5 = *s1;
    if ( *s1 )
    {
      v6 = *s2;
      if ( !*s2 )
        return 1;
      if ( !strcmp(".", s1) )
        return (unsigned int)-1;
      if ( !strcmp(".", s2) )
        return 1;
      if ( !strcmp("..", s1) )
        return (unsigned int)-1;
      if ( !strcmp("..", s2) )
        return 1;
      if ( v6 == 46 || v5 != 46 )
      {
        if ( v5 == 46 )
        {
          if ( v6 == 46 )
          {
            v3 = s1 + 1;
            v2 = s2 + 1;
          }
LABEL_12:
          v29 = v3;
          v30 = v2;
          v7 = sub_40B830(&v29);
          v8 = sub_40B830(&v30);
          if ( v7 )
          {
            v9 = (char *)(v7 - v3);
            if ( !v8 )
            {
              v10 = (char *)(v30 - v2);
LABEL_15:
              if ( v9 != v10 || strncmp(v3, v2, (size_t)v9) )
                goto LABEL_16;
              v9 = (char *)(v29 - v3);
LABEL_62:
              v10 = (char *)(v30 - v2);
LABEL_16:
              v11 = 0LL;
              v12 = 0LL;
              while ( 1 )
              {
                if ( v9 <= v12 && (unsigned __int64)v10 <= v11 )
                  return v4;
                v13 = v11 - (_QWORD)v12;
                if ( v9 > v12 )
                  break;
LABEL_31:
                while ( 1 )
                {
                  v18 = v2[v11];
                  v20 = (char)v18;
                  if ( (unsigned __int64)v10 <= v11 || (unsigned int)((char)v18 - 48) <= 9 )
                    break;
                  if ( v9 != v12 )
                  {
                    v16 = (unsigned __int8)v12[(_QWORD)v3];
                    v14 = v12[(_QWORD)v3];
                    v15 = v16;
                    if ( v16 - 48 > 9 )
                      goto LABEL_22;
                  }
                  v19 = v18;
                  v15 = 0;
                  if ( (unsigned int)v18 - 48 > 9 )
                    goto LABEL_36;
LABEL_30:
                  ++v12;
                  ++v11;
                  if ( v9 > v12 )
                    goto LABEL_20;
                }
                while ( 1 )
                {
                  v22 = v12[(_QWORD)v3];
                  if ( v12[(_QWORD)v3] != 48 )
                    break;
                  ++v12;
                }
                if ( v18 == 48 )
                {
                  do
                    v20 = v2[++v11];
                  while ( v2[v11] == 48 );
                }
                v23 = v20 - 48;
                if ( (unsigned int)(v22 - 48) > 9 )
                {
                  if ( v23 <= 9 )
                    return (unsigned int)-1;
                }
                else
                {
                  if ( v23 > 9 )
                    return 1;
                  v25 = v12;
                  v26 = 0;
                  while ( 1 )
                  {
                    v27 = v22 - v20;
                    if ( !v26 )
                      v26 = v27;
                    v20 = v2[v11 - (_QWORD)v12 + (_QWORD)++v25];
                    v22 = v25[(_QWORD)v3];
                    v28 = v20 - 48;
                    if ( (unsigned int)(v22 - 48) > 9 )
                      break;
                    if ( v28 > 9 )
                      return 1;
                  }
                  if ( v28 <= 9 )
                    return (unsigned int)-1;
                  if ( v26 )
                    return v26;
                  v11 += v25 - v12;
                  v12 = v25;
                }
              }
LABEL_20:
              v14 = v12[(_QWORD)v3];
              if ( (unsigned int)((char)v14 - 48) <= 9 )
                goto LABEL_31;
              v15 = v14;
              v16 = v14;
LABEL_22:
              v17 = v16 - 65;
              if ( v17 <= 0x39 && ((1LL << v17) & 0x3FFFFFF03FFFFFFLL) != 0 )
              {
                v19 = 0;
                if ( v10 == &v12[v13] )
                {
LABEL_29:
                  if ( v19 == v15 )
                    goto LABEL_30;
                  return v15 - v19;
                }
              }
              else
              {
                if ( v14 == 126 )
                  v15 = -1;
                else
                  v15 += 256;
                if ( v10 == &v12[v13] )
                  return v15;
              }
              v18 = v2[v11];
              v19 = v18;
              if ( (unsigned int)v18 - 48 > 9 )
              {
LABEL_36:
                v21 = v18 - 65;
                if ( v21 > 0x39 || ((1LL << v21) & 0x3FFFFFF03FFFFFFLL) == 0 )
                {
                  if ( v18 == 126 )
                    v19 = -1;
                  else
                    v19 += 256;
                }
              }
              else
              {
                v19 = 0;
              }
              goto LABEL_29;
            }
          }
          else
          {
            v9 = (char *)(v29 - v3);
            if ( !v8 )
              goto LABEL_62;
          }
          v10 = (char *)(v8 - v2);
          goto LABEL_15;
        }
        if ( v6 != 46 )
          goto LABEL_12;
        return 1;
      }
    }
    return (unsigned int)-1;
  }
  return v4;
}

bool __fastcall sub_40BD10(int a1)
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

unsigned __int64 __fastcall sub_40BD70(unsigned __int64 a1)
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

unsigned __int64 __fastcall sub_40BE10(__int64 a1, unsigned __int64 a2)
{
  return __ROR8__(a1, 3) % a2;
}

bool __fastcall sub_40BE20(__int64 a1, __int64 a2)
{
  return a1 == a2;
}

__int64 __fastcall sub_40BE30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40BE30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)(a1 + 16) <= v2 )
    abort();
  return *(_QWORD *)a1 + 16 * v2;
}

__int64 __fastcall sub_40BE60(__int64 a1, __int64 a2, __m128i **a3, char a4)
{
  __m128i *v7; // rax
  __int64 v8; // rsi
  __m128i *v9; // rbx
  __int64 *v10; // rax
  const __m128i *v12; // rax

  v7 = (__m128i *)sub_40BE30(a1, a2);
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

__int64 __fastcall sub_40BF80(float **a1)
{
  float *v1; // rax
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 == (float *)&unk_416BA0 )
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
    *a1 = (float *)&unk_416BA0;
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_40C000(__int64 a1, __int64 a2, char a3)
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
              v8 = (_QWORD *)sub_40BE30(a1, *v6);
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

__int64 __fastcall sub_40C240(__int64 a1, __int64 a2)
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
  __fprintf_chk(a2, 1LL, "# buckets used:    %lu (%.2f%%)\n", v6, v11 / v12);
  return __fprintf_chk(a2, 1LL, "max bucket length: %lu\n", v3);
}

__int64 __fastcall sub_40C390(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  __int64 v4; // rsi
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = (_QWORD *)sub_40BE30(a1, a2);
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

__int64 __fastcall sub_40C440(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = (_QWORD *)sub_40BE30(a1, a2);
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

__int64 __fastcall sub_40C520(__int64 a1, unsigned __int8 (__fastcall *a2)(__int64, __int64), __int64 a3)
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

_QWORD *__fastcall sub_40C600(
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
    v7 = sub_40BE10;
  if ( !a4 )
    v6 = sub_40BE20;
  v9 = (char *)malloc(0x50uLL);
  v10 = v9;
  if ( v9 )
  {
    v11 = (float **)(v9 + 40);
    if ( a2 )
    {
      *((_QWORD *)v9 + 5) = a2;
      if ( !(unsigned __int8)sub_40BF80(v11) )
        goto LABEL_14;
      if ( *(_BYTE *)(a2 + 16) )
      {
LABEL_9:
        v12 = sub_40BD70(a1);
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
      *((_QWORD *)v9 + 5) = &unk_416BA0;
      v16 = 0.80000001;
      if ( !(unsigned __int8)sub_40BF80(v11) )
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

void __fastcall sub_40C790(_QWORD *a1)
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

void __fastcall sub_40C840(_QWORD *ptr)
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

__int64 __fastcall sub_40C920(__int64 a1, __int64 a2)
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
  v5 = sub_40BD70(a2);
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
  v12 = sub_40C000((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40C000(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40C000(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40C920(__int64 a1, __int64 a2)
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
  v5 = sub_40BD70(a2);
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
  v12 = sub_40C000((__int64)&ptr, a1, 0);
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
  if ( !(unsigned __int8)sub_40C000(a1, (__int64)&ptr, 1) || !(unsigned __int8)sub_40C000(a1, (__int64)&ptr, 0) )
    abort();
  free(ptr);
  return v12;
}

__int64 __fastcall sub_40CB20(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40BE60(a1, a2, v26, 0);
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
        sub_40BF80((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40C920(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40BE60(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40CB20(__int64 a1, __int64 a2, __int64 *a3)
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
  v5 = sub_40BE60(a1, a2, v26, 0);
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
        sub_40BF80((float **)(a1 + 40));
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
        if ( !(unsigned __int8)sub_40C920(a1, v25) )
          return 0xFFFFFFFFLL;
        if ( !sub_40BE60(a1, a2, v26, 0) )
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

__int64 __fastcall sub_40CDA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+8h] [rbp-10h] BYREF

  v2 = a2;
  v3 = sub_40CB20(a1, a2, &v5);
  if ( v3 == -1 )
    return 0LL;
  if ( !v3 )
    return v5;
  return v2;
}

__int64 __fastcall sub_40CDE0(__int64 a1, __int64 a2)
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

  v3 = sub_40BE60(a1, a2, &v24, 1);
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
    sub_40BF80((float **)(a1 + 40));
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
      if ( !(unsigned __int8)sub_40C920(a1, v17) )
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

__int64 sub_40CFC0()
{
  return 0LL;
}

_QWORD *__fastcall sub_40CFD0(__int64 (__fastcall *a1)(), unsigned __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  _QWORD *result; // rax

  v3 = a2;
  v5 = (_QWORD *)sub_411210(32LL);
  if ( a2 )
  {
    v6 = 8 * a2;
    if ( (a2 & 0x1000000000000000LL) != 0 || a2 >> 61 )
      sub_411460(v6, a2, v4);
  }
  else
  {
    v6 = 8LL;
    v3 = 1LL;
  }
  v7 = (_QWORD *)sub_411210(v6);
  v5[1] = v3;
  *v7 = 0LL;
  *v5 = v7;
  if ( !a1 )
    a1 = sub_40CFC0;
  v5[2] = 0LL;
  result = v5;
  v5[3] = a1;
  return result;
}

void __fastcall sub_40D050(void **ptr)
{
  free(*ptr);
  free(ptr);
}

__int64 __fastcall sub_40D070(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 (__fastcall *v8)(_QWORD, __int64); // r13
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  _QWORD *v12; // r12
  int v13; // eax
  _QWORD *v14; // rdx

  v2 = a2;
  v3 = a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = *a1;
  if ( v4 - 1 <= v5 )
  {
    if ( v6 )
    {
      if ( v4 <= 0xAAAAAAAAAAAAAA9LL )
      {
        v4 += (v4 >> 1) + 1;
        a2 = 8 * v4;
LABEL_11:
        v3[1] = v4;
        v6 = sub_411270(v6, a2);
        v5 = v3[2];
        *v3 = v6;
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
      a1 = (__int64 *)(v4 >> 61);
      a2 = 8 * v4;
      if ( (v4 & 0x1000000000000000LL) == 0 && !(v4 >> 61) )
        goto LABEL_11;
    }
    sub_411460(a1, a2, v4);
  }
LABEL_2:
  v7 = v5 + 1;
  v3[2] = v7;
  *(_QWORD *)(v6 + 8 * v7) = v2;
  v8 = (__int64 (__fastcall *)(_QWORD, __int64))v3[3];
  v9 = *v3;
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

__int64 __fastcall sub_40D190(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r15
  int (__fastcall *v7)(_QWORD, __int64); // r13
  __int64 v8; // r14
  _QWORD *v9; // rbx
  int v10; // eax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r12
  __int64 v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]

  v1 = a1[2];
  v14 = 0LL;
  if ( v1 )
  {
    v2 = *a1;
    v3 = v1 - 1;
    v4 = *(_QWORD *)(*a1 + 8 * v1);
    v5 = *(_QWORD *)(*a1 + 8LL);
    a1[2] = v3;
    *(_QWORD *)(v2 + 8) = v4;
    v6 = *a1;
    v14 = v5;
    v7 = (int (__fastcall *)(_QWORD, __int64))a1[3];
    v15 = *(_QWORD *)(*a1 + 8LL);
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
          if ( v7(*v9, *(_QWORD *)(v6 + 8 * (v12 + 1))) < 0 )
            v9 = (_QWORD *)(v6 + 8 * ++v12);
        }
        v10 = v7(*v9, v15);
        v11 = (_QWORD *)(v6 + 8 * v8);
        if ( v10 <= 0 )
          break;
        v8 = v12;
        *v11 = *v9;
        if ( v12 > v3 >> 1 )
        {
          *v9 = v15;
          return v14;
        }
      }
    }
    else
    {
      v11 = (_QWORD *)(v6 + 8);
    }
    *v11 = v15;
  }
  return v14;
}

__int64 __fastcall sub_40D2B0(int a1, __int64 a2)
{
  __int64 v2; // rcx
  char v4; // al

  v2 = a2 + 11;
  *(_BYTE *)(a2 + 11) = 0;
  if ( a1 < 0 )
  {
    while ( 1 )
    {
      v4 = 10 * (a1 / 10) + 48 - a1;
      a1 /= 10;
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
      *(_BYTE *)--v2 = a1 % 0xAu + 48;
      a1 /= 0xAu;
    }
    while ( a1 );
    return v2;
  }
}

__int64 __fastcall sub_40D330(unsigned int a1, __int64 a2)
{
  __int64 v2; // rcx

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

__int64 __fastcall sub_40D370(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = a2 + 20;
  *(_BYTE *)(a2 + 20) = 0;
  while ( 1 )
  {
    *(_BYTE *)--v2 = a1 % 0xA + 48;
    if ( a1 <= 9 )
      break;
    a1 /= 0xAuLL;
  }
  return v2;
}

__int64 __fastcall sub_40D3C0(char *s, __int64 a2, char a3)
{
  char *v4; // r13
  char *v5; // rbx
  unsigned int v6; // r12d
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // eax
  int v12; // r15d
  const unsigned __int16 *v13; // rdx
  unsigned __int16 v14; // ax
  wchar_t c; // [rsp+4h] [rbp-44h] BYREF
  mbstate_t ps; // [rsp+8h] [rbp-40h] BYREF

  v4 = &s[a2];
  v5 = s;
  if ( __ctype_get_mb_cur_max() <= 1 )
  {
    v6 = 0;
    if ( s >= v4 )
      return v6;
    v6 = 0;
    v12 = a3 & 2;
    v13 = *__ctype_b_loc();
    while ( 1 )
    {
      v14 = v13[(unsigned __int8)*v5++];
      if ( (v14 & 0x4000) != 0 )
        goto LABEL_33;
      if ( v12 )
        return (unsigned int)-1;
      if ( (v14 & 2) == 0 )
      {
LABEL_33:
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
              if ( (a3 & 1) == 0 )
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
              if ( (int)(0x7FFFFFFF - v6) < v10 )
                return 0x7FFFFFFF;
              v6 += v10;
            }
            else
            {
              if ( (a3 & 2) != 0 )
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
          if ( (a3 & 1) != 0 )
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

__int64 __fastcall sub_40D580(char *s, char a2)
{
  __int64 v2; // rax

  v2 = strlen(s);
  return sub_40D3C0(s, v2, a2);
}

__int64 sub_40D5B0()
{
  __int64 result; // rax
  cpu_set_t v1; // [rsp+0h] [rbp-88h] BYREF

  if ( sched_getaffinity(0, 0x80uLL, &v1) )
    return 0LL;
  result = __sched_cpucount(0x80uLL, &v1);
  if ( !(_DWORD)result )
    return 0LL;
  return result;
}

unsigned __int64 __fastcall sub_40D600(const char *a1)
{
  unsigned __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rdx
  char v4; // cl
  unsigned int v5; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  char *v9; // rdx
  char *endptr; // [rsp+0h] [rbp-10h] BYREF

  v1 = *(unsigned __int8 *)a1;
  if ( !(_BYTE)v1 )
    return 0LL;
  v2 = (char)v1;
  if ( (unsigned int)(char)v1 <= 0x20 )
  {
    v3 = 0x100003E00LL;
    if ( _bittest64(&v3, v1) )
    {
      do
      {
        v4 = *++a1;
        if ( !*a1 )
          return 0LL;
        v2 = v4;
      }
      while ( (unsigned int)v4 <= 0x20 && ((1LL << v4) & 0x100003E00LL) != 0 );
    }
  }
  v5 = v2 - 48;
  result = 0LL;
  if ( v5 <= 9 )
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
        v8 = 0x100003E00LL;
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
              if ( ((1LL << v7) & 0x100003E00LL) != 0 )
                continue;
            }
            break;
          }
        }
      }
      if ( (_BYTE)v7 == 44 )
        return result;
    }
    return 0LL;
  }
  return result;
}

__int64 __fastcall sub_40D6F0(int a1)
{
  __int64 result; // rax
  char *v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  char *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  char *v8; // rax

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
          return v3;
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
        return v3;
    }
    else
    {
      v6 = sysconf(84);
      result = 1LL;
      if ( v6 > 0 )
      {
        result = v3;
        if ( v6 <= v3 )
          return v6;
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
    return 1LL;
  return result;
}

double sub_40D840()
{
  int v0; // eax
  double totalram_low; // xmm0_8
  double mem_unit; // xmm1_8
  double result; // xmm0_8
  double v4; // [rsp+8h] [rbp-80h]
  struct sysinfo v5; // [rsp+10h] [rbp-78h] BYREF

  v4 = (double)(int)sysconf(85);
  v0 = sysconf(30);
  totalram_low = v4;
  if ( v4 < 0.0 || (mem_unit = (double)v0, (double)v0 < 0.0) )
  {
    result = 67108864.0;
    if ( sysinfo(&v5) )
      return result;
    if ( (v5.totalram & 0x8000000000000000LL) != 0LL )
      totalram_low = (double)(int)(v5.totalram & 1 | (v5.totalram >> 1))
                   + (double)(int)(v5.totalram & 1 | (v5.totalram >> 1));
    else
      totalram_low = (double)SLODWORD(v5.totalram);
    mem_unit = (double)(int)v5.mem_unit;
  }
  return totalram_low * mem_unit;
}

double sub_40D900()
{
  int v0; // eax
  double v1; // xmm0_8
  double mem_unit; // xmm1_8
  double freeram_low; // xmm0_8
  __kernel_ulong_t bufferram; // rax
  double v5; // xmm1_8
  double v7; // [rsp+8h] [rbp-80h]
  struct sysinfo v8; // [rsp+10h] [rbp-78h] BYREF

  v7 = (double)(int)sysconf(86);
  v0 = sysconf(30);
  v1 = v7;
  if ( v7 >= 0.0 )
  {
    mem_unit = (double)v0;
    if ( (double)v0 >= 0.0 )
      return v1 * mem_unit;
  }
  if ( !sysinfo(&v8) )
  {
    if ( (v8.freeram & 0x8000000000000000LL) != 0LL )
    {
      bufferram = v8.bufferram;
      freeram_low = (double)(int)(v8.freeram & 1 | (v8.freeram >> 1))
                  + (double)(int)(v8.freeram & 1 | (v8.freeram >> 1));
      if ( (v8.bufferram & 0x8000000000000000LL) == 0LL )
        goto LABEL_6;
    }
    else
    {
      freeram_low = (double)SLODWORD(v8.freeram);
      bufferram = v8.bufferram;
      if ( (v8.bufferram & 0x8000000000000000LL) == 0LL )
      {
LABEL_6:
        v5 = (double)(int)bufferram;
LABEL_7:
        v1 = freeram_low + v5;
        mem_unit = (double)(int)v8.mem_unit;
        return v1 * mem_unit;
      }
    }
    v5 = (double)(int)(bufferram & 1 | (bufferram >> 1)) + (double)(int)(bufferram & 1 | (bufferram >> 1));
    goto LABEL_7;
  }
  return sub_40D840() * 0.25;
}

__int64 __fastcall sub_40DA00(int pipedes[2], int a2)
{
  __int64 v2; // r13
  unsigned int v3; // r12d
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int *v19; // rax
  int v20; // r12d
  int *v21; // rbp
  int v22; // eax
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  int v29; // eax
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // r12d

  v2 = *(_QWORD *)pipedes;
  if ( dword_61CBC0 >= 0 )
  {
    v33 = pipe2(pipedes, a2);
    if ( v33 >= 0 || *__errno_location() != 38 )
    {
      dword_61CBC0 = 1;
      return (unsigned int)v33;
    }
    dword_61CBC0 = -1;
  }
  v3 = a2 & 0xFFF7F7FF;
  if ( (a2 & 0xFFF7F7FF) != 0 )
  {
    v3 = -1;
    *__errno_location() = 22;
    return v3;
  }
  if ( pipe(pipedes) < 0 )
    return (unsigned int)-1;
  if ( (a2 & 0x800) != 0 )
  {
    v8 = sub_412000(pipedes[1], 3, 0, v4, v5, v6);
    if ( v8 < 0 )
      goto LABEL_11;
    BYTE1(v8) |= 8u;
    if ( (unsigned int)sub_412000(pipedes[1], 4, v8, v9, v10, v11) == -1 )
      goto LABEL_11;
    v15 = sub_412000(*pipedes, 3, 0, v12, v13, v14);
    if ( v15 < 0 )
      goto LABEL_11;
    BYTE1(v15) |= 8u;
    if ( (unsigned int)sub_412000(*pipedes, 4, v15, v16, v17, v18) == -1 )
      goto LABEL_11;
  }
  if ( (a2 & 0x80000) == 0 )
    return v3;
  v22 = sub_412000(pipedes[1], 1, 0, v4, v5, v6);
  if ( v22 < 0
    || (unsigned int)sub_412000(pipedes[1], 2, v22 | 1u, v23, v24, v25) == -1
    || (v29 = sub_412000(*pipedes, 1, 0, v26, v27, v28), v29 < 0)
    || (unsigned int)sub_412000(*pipedes, 2, v29 | 1u, v30, v31, v32) == -1 )
  {
LABEL_11:
    v19 = __errno_location();
    v20 = *v19;
    v21 = v19;
    close(*pipedes);
    close(pipedes[1]);
    *(_QWORD *)pipedes = v2;
    *v21 = v20;
    return (unsigned int)-1;
  }
  return 0LL;
}

__int64 sub_40DBE0()
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

char *__fastcall sub_40DC60(const char *a1)
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
  qword_61CBC8 = v1;
  program_invocation_name = v1;
  return result;
}

const char *__fastcall sub_40DD00(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_413750();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_416C61;
      if ( !v5 )
        return (const char *)&unk_416C56;
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
    v2 = (char *)&unk_416C5D;
    if ( !v5 )
      return (const char *)&unk_416C5A;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "invalid number after ','" + 23;
  return v6;
}

unsigned __int64 __fastcall sub_40DE00(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
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
  const char *v58; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "invalid number after ','" + 23;
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
      s2 = "invalid number after ','" + 23;
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
        s2 = "invalid number after ','" + 23;
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
      s2 = "invalid number after ','" + 23;
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
                return sub_40DE00((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "invalid number after ','" + 23;
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
              return sub_40DE00((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_412FB0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_40DE00((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_40DD00("`", a5);
        v51 = (char *)sub_40DD00("'", a5);
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

unsigned __int64 __fastcall sub_40DE00(
        _BYTE *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        const char *a8,
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
  const char *v58; // rax
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
  const char *s2; // [rsp+50h] [rbp-78h]
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
      s2 = "invalid number after ','" + 23;
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
      s2 = "invalid number after ','" + 23;
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
        s2 = "invalid number after ','" + 23;
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
      s2 = "invalid number after ','" + 23;
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
                return sub_40DE00((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
              v42 = v83 != 0 && v10 == 0;
              if ( v42 )
              {
                v10 = v83;
LABEL_142:
                *v9 = 39;
                a5 = 2;
                v15 = 1LL;
                s2 = "invalid number after ','" + 23;
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
              return sub_40DE00((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_412FB0((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_40DE00((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_40DD00("`", a5);
        v51 = (char *)sub_40DD00("'", a5);
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

_BYTE *__fastcall sub_40F030(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // r8d
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v8 = (__m128i *)off_61C558;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61C570 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411460(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_61C558 == &xmmword_61C560 )
    {
      v8 = (__m128i *)sub_411270(0LL, v10);
      off_61C558 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_61C560);
    }
    else
    {
      off_61C558 = (void *)sub_411270(off_61C558, v10);
      v8 = (__m128i *)off_61C558;
    }
    memset(&v8[dword_61C570], 0, 16LL * ((int)a1 + 1 - dword_61C570));
    dword_61C570 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_40DE00(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_61CBE0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_411210(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40DE00(v15, v14, a2, a3, v16, v22, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_40F030(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int *v6; // rax
  __int64 v7; // rdx
  __m128i *v8; // rbx
  int *v9; // r13
  __int64 v10; // rsi
  unsigned __int64 *v11; // rbx
  _BYTE *v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _BYTE *v15; // rax
  int v16; // r8d
  unsigned __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+10h] [rbp-48h]
  int v21; // [rsp+18h] [rbp-40h]
  int v22; // [rsp+1Ch] [rbp-3Ch]

  v6 = __errno_location();
  v8 = (__m128i *)off_61C558;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_61C570 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_411460(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_61C558 == &xmmword_61C560 )
    {
      v8 = (__m128i *)sub_411270(0LL, v10);
      off_61C558 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_61C560);
    }
    else
    {
      off_61C558 = (void *)sub_411270(off_61C558, v10);
      v8 = (__m128i *)off_61C558;
    }
    memset(&v8[dword_61C570], 0, 16LL * ((int)a1 + 1 - dword_61C570));
    dword_61C570 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_40DE00(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_61CBE0 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_411210(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_40DE00(v15, v14, a2, a3, v16, v22, a4 + 8, *(const char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_40F1D0(__int128 *a1)
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
    v1 = &xmmword_61CCE0;
  result = sub_411410(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_40F2C0(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_61CCE0;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_40DE00(
             a1,
             a2,
             a3,
             a4,
             *(_DWORD *)v6,
             *((_DWORD *)v6 + 1),
             (__int64)v6 + 8,
             *((const char **)v6 + 5),
             *((char **)v6 + 6));
  *v9 = v8;
  return result;
}

_BYTE *__fastcall sub_40F340(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_61CCE0;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_40DE00(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_411210(v11 + 1);
  sub_40DE00(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((const char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_40F440()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_61C558;
  if ( dword_61C570 > 1 )
  {
    v1 = (void **)((char *)off_61C558 + 24);
    v2 = (void **)((char *)off_61C558 + 16 * (unsigned int)(dword_61C570 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_61CBE0 )
  {
    free(v4);
    *(_QWORD *)&xmmword_61C560 = 256LL;
    *((_QWORD *)&xmmword_61C560 + 1) = &unk_61CBE0;
  }
  if ( v0 != &xmmword_61C560 )
  {
    free(v0);
    off_61C558 = &xmmword_61C560;
  }
  dword_61C570 = 1;
}

_BYTE *__fastcall sub_40F550(__int64 a1, int a2, __int64 a3)
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
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40F550(__int64 a1, int a2, __int64 a3)
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
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40F5C0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_40F030(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_40F5C0(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_40F030(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_40F630(int a1, __int64 a2)
{
  return sub_40F550(0LL, a1, a2);
}

_BYTE *__fastcall sub_40F650(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_61CD10;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61CCE0);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61CCF0);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61CD00);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_40F030(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_40F6D0(__int64 a1)
{
  return sub_40F650(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_40F700(__int64 a1, int a2, __int64 a3)
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
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40F700(__int64 a1, int a2, __int64 a3)
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
  return sub_40F030(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_40F770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61CCE0);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_61CCF0);
  si128 = _mm_load_si128((const __m128i *)&xmmword_61CD00);
  v8 = qword_61CD10;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_40F030(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_40F860(__int64 a1, __int64 a2)
{
  return sub_40F030(a1, a2, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61C520);
}

_BYTE *__fastcall sub_40F880(__int64 a1)
{
  return sub_40F030(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_61C520);
}

void __fastcall __noreturn sub_40F8A0(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

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

void __fastcall __noreturn sub_40F8A0(__int64 a1)
{
  _BYTE *v1; // rbp
  int *v2; // rbx
  char *v3; // rax

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

__m128i *__fastcall sub_40F900(__int64 a1, unsigned __int64 a2)
{
  FILE *v2; // r13
  __int64 v3; // rax
  size_t v4; // rcx
  __m128i *v5; // rbx
  __m128i *v7; // rax
  __m128i *v8; // r13
  int v9; // eax
  int v10; // r15d
  __int64 v11; // rdx
  __int64 chk; // rbp
  unsigned __int64 v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  int v22; // eax
  unsigned int v23; // edi
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct timeval *v27; // r15
  __int64 v28; // rbp
  __int64 v29; // r14
  unsigned __int64 v30; // rcx
  unsigned int v31; // [rsp+8h] [rbp-50h]
  struct timeval tv; // [rsp+10h] [rbp-48h] BYREF

  if ( !a2 )
  {
    v5 = (__m128i *)sub_411210(4152LL);
    v5->m128i_i64[0] = 0LL;
    v5->m128i_i64[1] = (__int64)sub_40F8A0;
    v5[1].m128i_i64[0] = 0LL;
    return v5;
  }
  if ( !a1 )
  {
    v7 = (__m128i *)sub_411210(4152LL);
    v7->m128i_i64[0] = 0LL;
    v5 = v7;
    v8 = v7 + 2;
    v7->m128i_i64[1] = (__int64)sub_40F8A0;
    v7[1].m128i_i64[0] = 0LL;
    v7[1].m128i_i64[1] = 0LL;
    v9 = open("/dev/urandom", 0);
    v10 = v9;
    if ( v9 < 0 )
    {
      v13 = 20LL;
      gettimeofday(&tv, 0LL);
      v5[2] = _mm_load_si128((const __m128i *)&tv);
      LODWORD(tv.tv_sec) = getpid();
      v5[3].m128i_i32[0] = tv.tv_sec;
    }
    else
    {
      v11 = a2;
      if ( a2 > 0x800 )
        v11 = 2048LL;
      chk = __read_chk((unsigned int)v9, v8, v11, 4120LL);
      close(v10);
      if ( chk > 2047 )
        goto LABEL_12;
      if ( chk < 0 )
        chk = 0LL;
      v26 = 2048 - chk;
      v27 = (struct timeval *)&v8->m128i_i8[chk];
      if ( (unsigned __int64)(2048 - chk) > 0x10 )
        v26 = 16LL;
      v28 = v26 + chk;
      v31 = v26;
      gettimeofday(&tv, 0LL);
      qmemcpy(v27, &tv, v31);
      if ( v28 > 2047 )
        goto LABEL_12;
      v29 = 2048 - v28;
      if ( (unsigned __int64)(2048 - v28) > 4 )
        v29 = 4LL;
      LODWORD(tv.tv_sec) = getpid();
      v30 = (unsigned int)v29;
      v13 = v28 + v29;
      qmemcpy(&v8->m128i_i8[v28], &tv, v30);
      if ( v13 > 0x7FF )
        goto LABEL_12;
    }
    v14 = 2048 - v13;
    if ( 2048 - v13 > 4 )
      v14 = 4LL;
    LODWORD(tv.tv_sec) = getppid();
    if ( (_DWORD)v14 )
    {
      v15 = 0;
      do
      {
        v16 = v15++;
        v8->m128i_i8[v13 + v16] = *((_BYTE *)&tv.tv_sec + v16);
      }
      while ( v15 < (unsigned int)v14 );
    }
    v17 = v13 + v14;
    if ( v17 <= 0x7FF )
    {
      v18 = 2048 - v17;
      if ( 2048 - v17 > 4 )
        v18 = 4LL;
      LODWORD(tv.tv_sec) = getuid();
      if ( (_DWORD)v18 )
      {
        v19 = 0;
        do
        {
          v20 = v19++;
          v8->m128i_i8[v17 + v20] = *((_BYTE *)&tv.tv_sec + v20);
        }
        while ( v19 < (unsigned int)v18 );
      }
      v21 = v18 + v17;
      if ( v21 <= 0x7FF )
      {
        LODWORD(tv.tv_sec) = getgid();
        v22 = 2048 - v21;
        if ( 2048 - v21 > 4 )
          v22 = 4;
        v23 = v22;
        if ( v22 )
        {
          v24 = 0;
          do
          {
            v25 = v24++;
            v8->m128i_i8[v21 + v25] = *((_BYTE *)&tv.tv_sec + v25);
          }
          while ( v24 < v23 );
        }
      }
    }
LABEL_12:
    sub_410070(v8);
    return v5;
  }
  v2 = (FILE *)sub_4136B0(a1, "rb");
  if ( !v2 )
    return 0LL;
  v3 = sub_411210(4152LL);
  v4 = 4096LL;
  *(_QWORD *)v3 = v2;
  if ( a2 <= 0x1000 )
    v4 = a2;
  *(_QWORD *)(v3 + 8) = sub_40F8A0;
  v5 = (__m128i *)v3;
  *(_QWORD *)(v3 + 16) = a1;
  setvbuf(v2, (char *)(v3 + 24), 0, v4);
  return v5;
}

__int64 __fastcall sub_40FC10(__int64 a1, char *a2, size_t a3)
{
  size_t v5; // rbx
  FILE *v6; // r13
  int *v7; // r14
  __int64 v8; // rdi
  int v9; // edx
  __int64 result; // rax
  size_t v11; // r15
  char *v12; // r13
  __int64 v13; // r14
  void *v14; // rdi
  char *v15; // rsi

  v5 = a3;
  v6 = *(FILE **)a1;
  if ( *(_QWORD *)a1 )
  {
    v7 = __errno_location();
    while ( 1 )
    {
      result = fread_unlocked(a2, 1uLL, v5, v6);
      v9 = *v7;
      a2 += result;
      v5 -= result;
      if ( !v5 )
        break;
      v8 = *(_QWORD *)(a1 + 16);
      if ( (**(_BYTE **)a1 & 0x20) == 0 )
        v9 = 0;
      *v7 = v9;
      (*(void (__fastcall **)(__int64))(a1 + 8))(v8);
      v6 = *(FILE **)a1;
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
      result = (__int64)memcpy(a2, v12, v5);
      *(_QWORD *)(a1 + 24) = v11 - v5;
    }
    else
    {
      while ( 1 )
      {
        v14 = a2;
        a2 += v11;
        v5 -= v11;
        memcpy(v14, &v12[2048 - v11], v11);
        if ( ((unsigned __int8)a2 & 7) == 0 )
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
        v15 = a2;
        a2 += 2048;
        result = sub_40FDC0(v13, v15);
        v5 -= 2048LL;
      }
      while ( v5 );
      *(_QWORD *)(a1 + 24) = 0LL;
    }
  }
  return result;
}

__int64 __fastcall sub_40FD70(FILE **ptr)
{
  FILE *v1; // rbp

  v1 = *ptr;
  __explicit_bzero_chk(ptr, 4152LL, -1LL);
  free(ptr);
  if ( v1 )
    return sub_411F80(v1);
  else
    return 0LL;
}

unsigned __int64 *__fastcall sub_40FDC0(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r11
  unsigned __int64 v3; // rdx
  unsigned __int64 *v4; // r9
  __int64 v5; // r8
  unsigned __int64 *result; // rax
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rcx

  v2 = a1[257];
  v3 = a1[256];
  v4 = a2;
  v5 = a1[258] + 1;
  result = a1;
  a1[258] = v5;
  v7 = v5 + v2;
  do
  {
    v8 = *result;
    v9 = result[128] + ~((v3 << 21) ^ v3);
    v10 = v7 + v9 + *(unsigned __int64 *)((char *)a1 + (*result & 0x7F8));
    *result = v10;
    v11 = v8 + *(unsigned __int64 *)((char *)a1 + ((v10 >> 8) & 0x7F8));
    *v4 = v11;
    v12 = result[1];
    v13 = result[129] + ((v9 >> 5) ^ v9);
    v14 = v11 + v13 + *(unsigned __int64 *)((char *)a1 + (v12 & 0x7F8));
    result[1] = v14;
    v15 = v12 + *(unsigned __int64 *)((char *)a1 + ((v14 >> 8) & 0x7F8));
    v4[1] = v15;
    v16 = result[2];
    v17 = result[130] + (v13 ^ (v13 << 12));
    v18 = v15 + v17 + *(unsigned __int64 *)((char *)a1 + (v16 & 0x7F8));
    result[2] = v18;
    v19 = *(unsigned __int64 *)((char *)a1 + ((v18 >> 8) & 0x7F8)) + v16;
    v4[2] = v19;
    v20 = result[3];
    v3 = result[131] + ((v17 >> 33) ^ v17);
    v21 = v19 + v3 + *(unsigned __int64 *)((char *)a1 + (v20 & 0x7F8));
    result += 4;
    v4 += 4;
    *(result - 1) = v21;
    v7 = v20 + *(unsigned __int64 *)((char *)a1 + ((v21 >> 8) & 0x7F8));
    *(v4 - 1) = v7;
  }
  while ( result != a1 + 128 );
  v22 = a2 + 128;
  do
  {
    v23 = *result;
    v24 = *(result - 128) + ~((v3 << 21) ^ v3);
    v25 = v24 + *(unsigned __int64 *)((char *)a1 + (*result & 0x7F8));
    *result = v7 + v25;
    v26 = *(unsigned __int64 *)((char *)a1 + (((v7 + v25) >> 8) & 0x7F8)) + v23;
    *v22 = v26;
    v27 = result[1];
    v28 = *(result - 127) + ((v24 >> 5) ^ v24);
    v29 = v26 + v28 + *(unsigned __int64 *)((char *)a1 + (v27 & 0x7F8));
    result[1] = v29;
    v30 = v27 + *(unsigned __int64 *)((char *)a1 + ((v29 >> 8) & 0x7F8));
    v22[1] = v30;
    v31 = result[2];
    v32 = *(result - 126) + (v28 ^ (v28 << 12));
    v33 = v30 + v32 + *(unsigned __int64 *)((char *)a1 + (v31 & 0x7F8));
    result[2] = v33;
    v34 = *(unsigned __int64 *)((char *)a1 + ((v33 >> 8) & 0x7F8)) + v31;
    v22[2] = v34;
    v35 = result[3];
    v3 = *(result - 125) + ((v32 >> 33) ^ v32);
    v36 = v34 + v3 + *(unsigned __int64 *)((char *)a1 + (v35 & 0x7F8));
    result += 4;
    v22 += 4;
    *(result - 1) = v36;
    v7 = v35 + *(unsigned __int64 *)((char *)a1 + ((v36 >> 8) & 0x7F8));
    *(v22 - 1) = v7;
  }
  while ( result != a1 + 256 );
  a1[256] = v3;
  a1[257] = v7;
  return result;
}

unsigned __int64 __fastcall sub_410070(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 *v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r8
  __int64 v28; // rbx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v37; // r12

  v1 = a1;
  v2 = a1;
  v3 = 0x98F5704F6C44C0ABLL;
  v4 = 0x82F053DB8355E0CELL;
  v5 = 0xB29B2E824A595524LL;
  v6 = 0xAE985BF2CBFC89EDLL;
  v7 = 0x8C0EA5053D4712A0LL;
  v8 = 0xB9F8B322C73AC862LL;
  v9 = a1 + 256;
  v10 = 0x647C4677A2884B7CLL;
  v11 = 0x48FE4A0FA5A09315LL;
  do
  {
    v12 = v2[4] + v4;
    v13 = v2[7] + v3;
    v14 = *v2 - v12 + v10;
    v15 = (v13 >> 9) ^ (v2[5] + v11);
    v16 = v2[1] - v15 + v8;
    v17 = (v14 << 9) ^ (v2[6] + v6);
    v18 = v2[2] - v17 + v7;
    v19 = (v16 >> 23) ^ (v14 + v13);
    v20 = v2[3] - v19 + v5;
    v10 = (v18 << 15) ^ (v16 + v14);
    v21 = v12 - v10;
    *v2 = v10;
    v8 = (v20 >> 14) ^ (v18 + v16);
    v22 = v15 - v8;
    v2[1] = v8;
    v7 = (v21 << 20) ^ (v20 + v18);
    v23 = v21 + v22;
    v24 = v17 - v7;
    v2[2] = v7;
    v2 += 8;
    v5 = (v22 >> 17) ^ (v21 + v20);
    v11 = v24 + v22;
    v3 = v19 - v5;
    *(v2 - 5) = v5;
    v4 = v23 ^ (v24 << 14);
    v6 = v3 + v24;
    *(v2 - 3) = v11;
    *(v2 - 4) = v4;
    *(v2 - 2) = v6;
    *(v2 - 1) = v3;
  }
  while ( v9 != v2 );
  do
  {
    v25 = v1[7] + v3;
    v26 = v1[4] + v4;
    v27 = *v1 + v10 - v26;
    v28 = (v25 >> 9) ^ (v1[5] + v11);
    v29 = v1[1] + v8 - v28;
    v30 = (v27 << 9) ^ (v1[6] + v6);
    v31 = v1[2] + v7 - v30;
    v32 = (v29 >> 23) ^ (v27 + v25);
    v33 = v1[3] + v5 - v32;
    v10 = (v31 << 15) ^ (v29 + v27);
    v34 = v26 - v10;
    *v1 = v10;
    v8 = (v33 >> 14) ^ (v31 + v29);
    v35 = v28 - v8;
    v1[1] = v8;
    v7 = (v34 << 20) ^ (v33 + v31);
    result = v34 + v35;
    v37 = v30 - v7;
    v1[2] = v7;
    v1 += 8;
    v5 = (v35 >> 17) ^ (v34 + v33);
    v11 = v37 + v35;
    v3 = v32 - v5;
    *(v1 - 5) = v5;
    v4 = result ^ (v37 << 14);
    v6 = v3 + v37;
    *(v1 - 3) = v11;
    *(v1 - 4) = v4;
    *(v1 - 2) = v6;
    *(v1 - 1) = v3;
  }
  while ( v9 != v1 );
  a1[258] = 0LL;
  a1[257] = 0LL;
  a1[256] = 0LL;
  return result;
}

unsigned __int64 __fastcall sub_4102B0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rax
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v3 = v1 - v2 - 1;
  if ( v1 == v2 )
    *(_BYTE *)(a1 + 104) |= 2u;
  v4 = *(_QWORD *)(a1 + 72);
  v5 = v1 + v4;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = ~v4 & v5;
  v8 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 48) = v7;
  if ( v7 - v8 > (unsigned __int64)(v6 - v8) )
  {
    *(_QWORD *)(a1 + 48) = v6;
    v7 = v6;
  }
  *(_QWORD *)(a1 + 40) = v7;
  v9 = *(_QWORD **)(a1 + 136);
  if ( *(_QWORD *)(a1 + 144) - (_QWORD)v9 <= 7uLL )
  {
    obstack_newchunk(a1 + 112, 8LL);
    v9 = *(_QWORD **)(a1 + 136);
  }
  *v9 = v2;
  v10 = *(__int64 **)(a1 + 224);
  v11 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 136) += 8LL;
  result = v11 - (_QWORD)v10;
  if ( result <= 7 )
  {
    result = obstack_newchunk(a1 + 200, 8LL);
    v10 = *(__int64 **)(a1 + 224);
  }
  *v10 = v3;
  *(_QWORD *)(a1 + 224) += 8LL;
  ++*(_QWORD *)a1;
  return result;
}

__int64 __fastcall sub_4103A0(_QWORD *a1)
{
  _QWORD *v2; // rdi

  *a1 = 0LL;
  v2 = a1 + 3;
  *(v2 - 2) = 0LL;
  *(v2 - 1) = 0LL;
  obstack_begin(v2, 0LL, 0LL, malloc, free);
  obstack_begin(a1 + 14, 0LL, 0LL, malloc, free);
  return obstack_begin(a1 + 25, 0LL, 0LL, malloc, free);
}

void __fastcall sub_410410(__int64 a1)
{
  obstack_free((struct obstack *)(a1 + 24), 0LL);
  obstack_free((struct obstack *)(a1 + 112), 0LL);
  obstack_free((struct obstack *)(a1 + 200), 0LL);
}

bool __fastcall sub_410440(FILE *stream, __int64 a2)
{
  int i; // eax
  _BYTE *v4; // rdx
  _BYTE *v5; // rdx
  _BYTE *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v23; // [rsp+Ch] [rbp-1Ch]

LABEL_3:
  for ( i = fgetc(stream); i != -1; i = fgetc(stream) )
  {
    v4 = *(_BYTE **)(a2 + 48);
    if ( *(_BYTE **)(a2 + 56) == v4 )
    {
      v23 = i;
      obstack_newchunk(a2 + 24, 1LL);
      v5 = *(_BYTE **)(a2 + 48);
      *(_QWORD *)(a2 + 48) = v5 + 1;
      *v5 = v23;
      if ( v23 )
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
  v6 = *(_BYTE **)(a2 + 48);
  if ( v6 != *(_BYTE **)(a2 + 40) )
  {
    if ( v6 == *(_BYTE **)(a2 + 56) )
    {
      obstack_newchunk(a2 + 24, 1LL);
      v6 = *(_BYTE **)(a2 + 48);
    }
    *(_QWORD *)(a2 + 48) = v6 + 1;
    *v6 = 0;
    sub_4102B0(a2);
  }
  v7 = *(_QWORD **)(a2 + 136);
  if ( *(_QWORD *)(a2 + 144) - (_QWORD)v7 <= 7uLL )
  {
    obstack_newchunk(a2 + 112, 8LL);
    v7 = *(_QWORD **)(a2 + 136);
  }
  *v7 = 0LL;
  v8 = *(_QWORD *)(a2 + 128);
  v9 = *(_QWORD *)(a2 + 136) + 8LL;
  *(_QWORD *)(a2 + 136) = v9;
  if ( v9 == v8 )
    *(_BYTE *)(a2 + 192) |= 2u;
  v10 = *(_QWORD *)(a2 + 160);
  v11 = v9 + v10;
  v12 = *(_QWORD *)(a2 + 120);
  v13 = ~v10 & v11;
  v14 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a2 + 136) = v13;
  if ( v13 - v12 > (unsigned __int64)(v14 - v12) )
  {
    *(_QWORD *)(a2 + 136) = v14;
    v13 = v14;
  }
  *(_QWORD *)(a2 + 8) = v8;
  v15 = *(_QWORD *)(a2 + 224);
  v16 = *(_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 128) = v13;
  if ( v15 == v16 )
    *(_BYTE *)(a2 + 280) |= 2u;
  v17 = *(_QWORD *)(a2 + 248);
  v18 = v15 + v17;
  v19 = *(_QWORD *)(a2 + 208);
  v20 = ~v17 & v18;
  v21 = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 224) = v20;
  if ( v20 - v19 > (unsigned __int64)(v21 - v19) )
  {
    *(_QWORD *)(a2 + 224) = v21;
    v20 = v21;
  }
  *(_QWORD *)(a2 + 216) = v20;
  *(_QWORD *)(a2 + 16) = v16;
  return ferror(stream) == 0;
}

__int64 __fastcall sub_410660(char *a1)
{
  int v1; // eax

  v1 = mkstemp(a1);
  return sub_410C20(v1);
}

__int64 __fastcall sub_410680(char *a1, int a2)
{
  int v2; // eax

  v2 = mkostemp(a1, a2);
  return sub_413640(v2);
}

__int64 __fastcall sub_4106A0(unsigned __int8 *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 v4; // r9
  unsigned __int8 v5; // r8
  int v6; // eax
  unsigned int v7; // esi
  __int64 result; // rax
  unsigned __int8 v9; // al
  int v10; // r9d
  int v11; // r10d
  int v12; // eax
  int v13; // r10d
  unsigned __int8 v14; // r8
  int v15; // r10d
  unsigned __int8 *v16; // rsi
  int v17; // eax
  unsigned int v18; // r8d
  unsigned int v19; // r10d
  unsigned __int64 v20; // r8
  int v21; // edx
  unsigned __int64 v22; // rdi
  int v23; // edx
  unsigned int v24; // r8d
  int v25; // eax
  unsigned int v26; // r10d
  unsigned __int64 v27; // r8
  int v28; // edx
  int v29; // edx
  unsigned __int8 v30; // r8
  signed __int8 *v31; // rax
  signed __int8 i; // dl
  int v33; // eax
  unsigned __int8 v34; // cl
  int v35; // ecx
  unsigned int v36; // r8d
  unsigned int v37; // r10d
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // r8d
  unsigned int v41; // edx

  v4 = *a1;
  v5 = *a2;
  if ( *a1 != 45 )
  {
    if ( v5 == 45 )
    {
      do
      {
        do
          v6 = *++a2;
        while ( (_BYTE)v6 == 48 );
      }
      while ( a4 == v6 );
      if ( a3 == v6 )
      {
        do
        {
          v16 = a2 + 1;
          v6 = *v16;
          if ( (_BYTE)v6 != 48 )
            break;
          a2 = v16 + 1;
          v6 = *a2;
        }
        while ( (_BYTE)v6 == 48 );
      }
      v7 = v6 - 48;
      result = 1LL;
      if ( v7 <= 9 )
        return result;
      while ( 1 )
      {
        if ( v4 != 48 )
        {
          v17 = v4;
          if ( a4 != v4 )
            break;
        }
        v4 = *++a1;
      }
      if ( a3 == v4 )
      {
        do
          ++a1;
        while ( *a1 == 48 );
        v17 = *a1;
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
      v4 = *++a1;
    }
    if ( v5 != 48 )
      goto LABEL_24;
    do
    {
      do
        v5 = *++a2;
      while ( *a2 == 48 );
LABEL_24:
      v13 = v5;
    }
    while ( a4 == v5 );
    while ( v4 == v5 && (unsigned int)(v13 - 48) <= 9 )
    {
      do
      {
        v12 = *++a1;
        v4 = *a1;
      }
      while ( a4 == v12 );
      do
      {
        v13 = *++a2;
        v5 = *a2;
        if ( a4 != v13 )
          break;
        v13 = *++a2;
        v5 = *a2;
      }
      while ( a4 == v13 );
    }
    if ( a3 == v12 && (unsigned int)(v13 - 48) > 9 )
    {
LABEL_80:
      v30 = *a2;
      if ( (_BYTE)a3 != *a1 )
      {
        result = 0LL;
        if ( (_BYTE)a3 != v30 )
          return result;
        v31 = (signed __int8 *)(a2 + 1);
LABEL_84:
        for ( i = a2[1]; i == 48; i = *v31 )
          ++v31;
        v33 = i;
        return (unsigned int)-((unsigned int)(v33 - 48) <= 9);
      }
      v35 = (char)a1[1];
      if ( (_BYTE)a3 == v30 )
      {
        while ( 1 )
        {
          i = *++a2;
          ++a1;
          v36 = (char)v35 - 48;
          if ( *a2 != (_BYTE)v35 )
            break;
          if ( v36 > 9 )
            return 0LL;
          v35 = (char)a1[1];
        }
        v37 = i - 48;
        if ( v36 > 9 )
        {
          result = 0LL;
          if ( v37 > 9 )
            return result;
          v31 = (signed __int8 *)a2;
          goto LABEL_84;
        }
        if ( v37 <= 9 )
          return (unsigned int)((char)v35 - i);
      }
      else
      {
        ++a1;
      }
      while ( (_BYTE)v35 == 48 )
        v35 = (char)*++a1;
      return (unsigned int)(v35 - 48) <= 9;
    }
    v18 = v12 - 48;
    if ( a3 == v13 )
    {
      if ( v18 > 9 )
        goto LABEL_80;
      result = (unsigned int)(v12 - a3);
      v19 = a3 - 48;
      goto LABEL_54;
    }
    result = (unsigned int)(v12 - v13);
    v19 = v13 - 48;
    if ( v18 <= 9 )
    {
LABEL_54:
      v20 = 0LL;
      do
      {
        do
          v21 = *++a1;
        while ( a4 == v21 );
        ++v20;
      }
      while ( (unsigned int)(v21 - 48) <= 9 );
      if ( v19 > 9 )
        return v20 != 0;
      goto LABEL_58;
    }
    v20 = 0LL;
    if ( v19 <= 9 )
    {
LABEL_58:
      v22 = 0LL;
      do
      {
        do
          v23 = *++a2;
        while ( a4 == v23 );
        ++v22;
      }
      while ( (unsigned int)(v23 - 48) <= 9 );
      if ( v22 != v20 )
        return v20 < v22 ? -1 : 1;
LABEL_74:
      if ( !v22 )
        return 0LL;
      return result;
    }
    return 0LL;
  }
  do
  {
    do
      v9 = *++a1;
    while ( *a1 == 48 );
    v10 = v9;
  }
  while ( a4 == v9 );
  if ( v5 != 45 )
  {
    if ( a3 == v9 )
    {
      do
        ++a1;
      while ( *a1 == 48 );
      v10 = *a1;
    }
    if ( (unsigned int)(v10 - 48) <= 9 )
      return 0xFFFFFFFFLL;
    while ( 1 )
    {
      if ( v5 != 48 )
      {
        v11 = v5;
        if ( a4 != v5 )
          break;
      }
      v5 = *++a2;
    }
    if ( a3 == v5 )
    {
      do
        ++a2;
      while ( *a2 == 48 );
      v11 = *a2;
    }
    return (unsigned int)-((unsigned int)(v11 - 48) <= 9);
  }
  do
  {
    do
      v14 = *++a2;
    while ( *a2 == 48 );
    v15 = v14;
  }
  while ( a4 == v14 );
  while ( v9 == v14 && (unsigned int)(v15 - 48) <= 9 )
  {
    do
    {
      v10 = *++a1;
      v9 = *a1;
    }
    while ( a4 == v10 );
    do
    {
      v15 = *++a2;
      v14 = *a2;
      if ( a4 != v15 )
        break;
      v15 = *++a2;
      v14 = *a2;
    }
    while ( a4 == v15 );
  }
  if ( a3 != v10 || (unsigned int)(v15 - 48) <= 9 )
  {
    v24 = v10 - 48;
    if ( a3 == v15 )
    {
      if ( v24 > 9 )
        goto LABEL_93;
      v26 = a3 - 48;
      result = (unsigned int)(a3 - v10);
    }
    else
    {
      v25 = v15;
      v26 = v15 - 48;
      result = (unsigned int)(v25 - v10);
      if ( v24 > 9 )
      {
        v27 = 0LL;
        if ( v26 > 9 )
          return 0LL;
LABEL_70:
        v22 = 0LL;
        do
        {
          do
            v29 = *++a2;
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
        v28 = *++a1;
      while ( a4 == v28 );
      ++v27;
    }
    while ( (unsigned int)(v28 - 48) <= 9 );
    if ( v26 > 9 )
      return (unsigned int)-(v27 != 0);
    goto LABEL_70;
  }
LABEL_93:
  v34 = *a1;
  if ( (_BYTE)a3 != *a2 )
  {
    result = 0LL;
    if ( (_BYTE)a3 != v34 )
      return result;
    do
    {
      ++a1;
LABEL_96:
      v33 = (char)*a1;
    }
    while ( *a1 == 48 );
    return (unsigned int)-((unsigned int)(v33 - 48) <= 9);
  }
  if ( (_BYTE)a3 != v34 )
  {
    do
    {
      ++a2;
LABEL_117:
      v17 = (char)*a2;
    }
    while ( *a2 == 48 );
    return (unsigned int)(v17 - 48) <= 9;
  }
  while ( 1 )
  {
    ++a2;
    ++a1;
    v38 = (char)*a2;
    v39 = (char)*a1;
    v40 = v38 - 48;
    if ( *a2 != *a1 )
      break;
    if ( v40 > 9 )
      return 0LL;
  }
  v41 = v39 - 48;
  if ( v40 > 9 )
  {
    result = 0LL;
    if ( v41 <= 9 )
      goto LABEL_96;
  }
  else
  {
    if ( v41 > 9 )
      goto LABEL_117;
    return (unsigned int)(v38 - v39);
  }
  return result;
}

__int64 __fastcall sub_410C20(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_413EA0();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

__int64 __fastcall sub_410C70(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_410C70(FILE *stream, const char *a2, const char *a3, const char *a4, __int64 *a5, __int64 a6)
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

__int64 __fastcall sub_411070(FILE *a1, const char *a2, const char *a3, const char *a4, int *a5)
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
        return sub_410C70(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_410C70(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_4110D0(
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
        return sub_410C70(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_410C70(a1, a2, a3, a4, v15, i);
}

int sub_411190()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0);
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_411210(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_411460(a1, a2, v3);
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_411260(size_t a1, __int64 a2)
{
  return sub_411210(a1, a2);
}

void *__fastcall sub_411270(void *a1, size_t a2)
{
  void *result; // rax
  __int64 v3; // rdx

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
        sub_411460(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_4113C0(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_411210(n, a2);
  return memset(v2, 0, n);
}

__int64 __fastcall sub_4113E0(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_411460(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_411410(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_411210(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_411440(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_411410(src, v1 + 1);
}

void __noreturn sub_411460()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

void __fastcall sub_4114A0(int errnum, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  char *v8; // rax
  char *v9; // rax
  _BYTE *v10; // rbp
  _BYTE *v11; // rbx
  char *v12; // rax

  v8 = dcgettext(0LL, "string comparison failed", 5);
  error(0, errnum, v8);
  v9 = dcgettext(0LL, "Set LC_ALL='C' to work around the problem.", 5);
  error(0, 0, v9);
  v10 = sub_40F5C0(1LL, 8, a4, a5);
  v11 = sub_40F5C0(0LL, 8, a2, a3);
  v12 = dcgettext(0LL, "The strings compared were %s and %s.", 5);
  error(status, 0, v12, v11, v10);
}

__int64 __fastcall sub_411560(char *a1, size_t a2, void *a3, unsigned __int64 a4)
{
  unsigned int v7; // r14d
  int v8; // edi

  v7 = sub_413D80(a1, a2, a3);
  v8 = *__errno_location();
  if ( v8 )
    sub_4114A0(v8, (__int64)a1, a2, (__int64)a3, a4);
  return v7;
}

__int64 __fastcall sub_4115C0(char *a1, size_t a2, void *a3, __int64 a4)
{
  unsigned int v7; // r13d
  int v8; // edi

  v7 = sub_413E30(a1, a2, a3);
  v8 = *__errno_location();
  if ( v8 )
    sub_4114A0(v8, (__int64)a1, a2 - 1, (__int64)a3, a4 - 1);
  return v7;
}

__int64 sub_411620()
{
  __int64 v0; // rdx
  int *v1; // rbx
  __int64 result; // rax
  __int64 v3[3]; // [rsp+0h] [rbp-18h] BYREF

  v3[0] = sub_413580();
  v3[1] = v0;
  v1 = __errno_location();
  while ( 1 )
  {
    *v1 = 0;
    result = sub_413140(v3, 0LL);
    if ( !(_DWORD)result )
      break;
    if ( (*v1 & 0xFFFFFFFB) != 0 )
      return 0xFFFFFFFFLL;
  }
  return result;
}

__int64 __fastcall sub_411680(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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
    __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 0x60u, "xstrtoul");
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
  v13 = strtoul(nptr, p_endptr, a3);
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

void __fastcall __noreturn sub_411AB0(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_4181C0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_418149[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

void __fastcall __noreturn sub_411AB0(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  int v6; // ebx
  const char *v9; // rsi
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  char v13[42]; // [rsp+Eh] [rbp-2Ah] BYREF

  v5 = (unsigned int)(a1 - 1);
  v6 = status;
  if ( (unsigned int)v5 <= 3 )
  {
    v9 = (&off_4181C0)[v5];
    if ( a2 < 0 )
    {
      v13[0] = a3;
      v11 = v13;
      v10 = &asc_418149[-a2];
      v13[1] = 0;
    }
    else
    {
      v10 = "--";
      v11 = *(char **)(a4 + 32LL * a2);
    }
    v12 = dcgettext(0LL, v9, 5);
    error(v6, 0, v12, v10, v11, a5);
    abort();
  }
  abort();
}

__int64 __fastcall sub_411B40(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

int __fastcall sub_411F80(FILE *stream)
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
  if ( !(unsigned int)sub_412140(stream) )
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

__int64 __fastcall sub_412000(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_61CD18 < 0 )
    {
      v6 = sub_412000(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_61CD18 == -1 )
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
        v6 = sub_412000(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_61CD18 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_61CD18 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

int __fastcall sub_412140(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_412180(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_412180(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_4121E0(__int64 a1, int *a2)
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

__int64 __fastcall sub_4122C0(
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

__int64 __fastcall sub_4128E0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_4121E0((__int64)a2, a7);
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
        sub_4121E0((__int64)a2, a7);
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
            return (unsigned int)sub_4122C0(a1, a2, v12, a4, a5, a6, a7, v8, "--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_4122C0(a1, a2, v12, a4, a5, a6, a7, v8, "-");
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
        return (unsigned int)sub_4122C0(a1, a2, v12, a4, a5, 0, a7, v8, "-W ");
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

__int64 __fastcall sub_412EB0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_61CD20 = dword_61C57C;
  dword_61CD24 = dword_61C578;
  result = sub_4128E0(a1, a2, a3, a4, a5, a6, &dword_61CD20, a7);
  dword_61C57C = dword_61CD20;
  nptr = (char *)qword_61CD30;
  dword_61C574 = dword_61CD28;
  return result;
}

__int64 __fastcall sub_412F10(int a1, __int64 *a2, const char *a3)
{
  return sub_412EB0(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_412F30(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_412EB0(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_412F50(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4128E0(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_412F70(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_412EB0(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_412F90(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_4128E0(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_412FB0(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
{
  size_t v4; // rbx
  wchar_t *v5; // r12
  const char *v6; // rbp
  char v8; // [rsp+Ch] [rbp-1Ch] BYREF

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
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_413030(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

int __fastcall sub_413140(__time_t *a1, struct timespec *a2)
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

void __noreturn sub_4131F0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  __fprintf_chk(stderr, 1LL, "%s\n", v0);
  exit(status);
}

__int64 __fastcall sub_413230(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 56);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    return v2(*(_QWORD *)(a1 + 72));
  else
    return v2(a2);
}

__int64 __fastcall sub_413250(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(a1 + 64);
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    return v2(*(_QWORD *)(a1 + 72));
  else
    return v2(a2);
}

__int64 __fastcall sub_413270(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  char *v8; // rdx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3;
    v4 = a3 - 1;
  }
  else
  {
    v4 = 15LL;
    v3 = 16LL;
  }
  *(_QWORD *)(a1 + 48) = v4;
  if ( !a2 )
    a2 = 4064LL;
  *(_QWORD *)a1 = a2;
  v5 = (_QWORD *)sub_413230(a1, a2);
  *(_QWORD *)(a1 + 8) = v5;
  if ( !v5 )
    obstack_alloc_failed_handler();
  v6 = ((unsigned __int64)v5 + v4 + 16) & -v3;
  v7 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = v6;
  v8 = (char *)v5 + v7;
  *(_QWORD *)(a1 + 24) = v6;
  *v5 = v8;
  *(_QWORD *)(a1 + 32) = v8;
  v5[1] = 0LL;
  result = 1LL;
  *(_BYTE *)(a1 + 80) &= 0xF9u;
  return result;
}

__int64 __fastcall obstack_begin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  *(_BYTE *)(a1 + 80) &= ~1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  return sub_413270(a1, a2, a3);
}

__int64 __fastcall obstack_begin_1(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  *(_BYTE *)(a1 + 80) |= 1u;
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  return sub_413270(a1, a2, a3);
}

__int64 __fastcall obstack_newchunk(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  size_t v4; // r13
  __int64 v5; // rbp
  size_t v6; // rsi
  _BOOL8 v7; // rax
  bool v8; // cf
  unsigned __int64 v9; // rsi
  size_t v10; // rdx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  char *v14; // rbx
  __int64 result; // rax

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
  if ( v7 || (a4 = v8) || (v9 = v11, v12 = (_QWORD *)sub_413230(a1, v11), (v13 = v12) == 0LL) )
    obstack_alloc_failed_handler(a1, v9, v10, a4);
  *(_QWORD *)(a1 + 8) = v12;
  v12[1] = v5;
  *(_QWORD *)(a1 + 32) = (char *)v12 + v11;
  *v12 = (char *)v12 + v11;
  v14 = (char *)(~*(_QWORD *)(a1 + 48) & ((unsigned __int64)v12 + *(_QWORD *)(a1 + 48) + 16));
  result = (__int64)memcpy(v14, *(const void **)(a1 + 16), v4);
  if ( (*(_BYTE *)(a1 + 80) & 2) == 0 )
  {
    result = (v5 + *(_QWORD *)(a1 + 48) + 16) & ~*(_QWORD *)(a1 + 48);
    if ( *(_QWORD *)(a1 + 16) == result )
    {
      v13[1] = *(_QWORD *)(v5 + 8);
      result = sub_413250(a1, v5);
    }
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(_QWORD *)(a1 + 24) = &v14[v4];
  *(_BYTE *)(a1 + 80) &= ~2u;
  return result;
}

unsigned __int64 __fastcall obstack_allocated_p(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    while ( a2 <= result || *(_QWORD *)result < a2 )
    {
      result = *(_QWORD *)(result + 8);
      if ( !result )
        return 0LL;
    }
    return 1LL;
  }
  return result;
}

void obstack_free(struct obstack *obstack, void *block)
{
  struct _obstack_chunk *chunk; // rsi
  char *limit; // rax
  struct _obstack_chunk *prev; // r12

  chunk = obstack->chunk;
  if ( chunk )
  {
    while ( 1 )
    {
      if ( chunk < block )
      {
        limit = chunk->limit;
        if ( chunk->limit >= block )
          break;
      }
      prev = chunk->prev;
      sub_413250((__int64)obstack, (__int64)chunk);
      *((_BYTE *)obstack + 80) |= 2u;
      chunk = prev;
      if ( !prev )
        goto LABEL_5;
    }
    obstack->next_free = (char *)block;
    obstack->object_base = (char *)block;
    obstack->chunk_limit = limit;
    obstack->chunk = chunk;
  }
  else
  {
LABEL_5:
    if ( block )
      abort();
  }
}

void obstack_free(struct obstack *obstack, void *block)
{
  struct _obstack_chunk *chunk; // rsi
  char *limit; // rax
  struct _obstack_chunk *prev; // r12

  chunk = obstack->chunk;
  if ( chunk )
  {
    while ( 1 )
    {
      if ( chunk < block )
      {
        limit = chunk->limit;
        if ( chunk->limit >= block )
          break;
      }
      prev = chunk->prev;
      sub_413250((__int64)obstack, (__int64)chunk);
      *((_BYTE *)obstack + 80) |= 2u;
      chunk = prev;
      if ( !prev )
        goto LABEL_5;
    }
    obstack->next_free = (char *)block;
    obstack->object_base = (char *)block;
    obstack->chunk_limit = limit;
    obstack->chunk = chunk;
  }
  else
  {
LABEL_5:
    if ( block )
      abort();
  }
}

__int64 __fastcall obstack_memory_used(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD **)(a1 + 8);
  for ( result = 0LL; v1; result += v3 )
  {
    v3 = *v1 - (_QWORD)v1;
    v1 = (_QWORD *)v1[1];
  }
  return result;
}

int __fastcall sub_413520(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

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
    return -1;
  }
  if ( !result )
    return result;
  if ( v1 )
    return -1;
  return -(*__errno_location() != 9);
}

__int64 __fastcall sub_413580(double a1)
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

__int64 __fastcall sub_413640(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_413690();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

__int64 __fastcall sub_413690(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // esi

  v6 = a2 & 0x80000;
  if ( v6 )
    v6 = 1030;
  return sub_412000(a1, v6, 3LL, a4, a5, a6);
}

FILE *__fastcall sub_4136B0(const char *a1, const char *a2)
{
  FILE *v2; // rax
  FILE *v3; // rbx
  unsigned int v4; // eax
  int v6; // r12d
  int *v7; // rax
  int v8; // ebp
  int *v9; // rbx
  int *v10; // rax
  FILE *v11; // rdi
  int v12; // r12d
  int *v13; // rbp

  v2 = fopen(a1, a2);
  v3 = v2;
  if ( v2 )
  {
    v4 = fileno(v2);
    if ( v4 <= 2 )
    {
      v6 = sub_413EA0(v4);
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
        return 0LL;
      }
    }
  }
  return v3;
}

const char *sub_413750()
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
          v1 = (_BYTE *)("Ordering options:\n\n" + 19);
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
                v1 = (_BYTE *)("Ordering options:\n\n" + 19);
                v2 = v58;
                free(v59);
                sub_411F80(v60);
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
            sub_411F80(v39);
            if ( !v61 )
              goto LABEL_25;
            v1[v61] = 0;
            goto LABEL_26;
          }
          close(v17);
        }
LABEL_25:
        v1 = (_BYTE *)("Ordering options:\n\n" + 19);
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

int __fastcall sub_413CC0(char *s1, __int64 a2, const char *a3, __int64 a4)
{
  int *v8; // r15
  size_t v9; // rbx
  size_t v10; // rax
  int result; // eax

  v8 = __errno_location();
  while ( 1 )
  {
    *v8 = 0;
    result = strcoll(s1, a3);
    if ( result )
      break;
    v9 = strlen(s1) + 1;
    s1 += v9;
    v10 = strlen(a3) + 1;
    a3 += v10;
    a4 -= v10;
    a2 -= v9;
    if ( !a2 )
      return -(a4 != 0);
    if ( !a4 )
      return 1;
  }
  return result;
}

__int64 __fastcall sub_413D80(char *s1, size_t n, const char *s2, __int64 a4)
{
  char v6; // r9
  char v7; // r8
  unsigned int v8; // edx
  int *v10; // rax
  char v11; // [rsp+8h] [rbp-40h]
  char v12; // [rsp+Fh] [rbp-39h]

  if ( n == a4 && !memcmp(s1, s2, n) )
  {
    v10 = __errno_location();
    v8 = 0;
    *v10 = 0;
  }
  else
  {
    v6 = s1[n];
    v7 = s2[a4];
    s1[n] = 0;
    s2[a4] = 0;
    v12 = v6;
    v11 = v7;
    v8 = sub_413CC0(s1, n + 1, s2, a4 + 1);
    s1[n] = v12;
    s2[a4] = v11;
  }
  return v8;
}

int __fastcall sub_413E30(char *s1, size_t n, const char *s2, __int64 a4)
{
  if ( n != a4 || memcmp(s1, s2, n) )
    return sub_413CC0(s1, n, s2, a4);
  *__errno_location() = 0;
  return 0;
}

__int64 __fastcall sub_413EA0(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  return sub_412000(a1, 0, 3LL, a4, a5, a6);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_413F20(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( qword_61C3E8 )
    v1 = (void *)qword_61C3E8[0];
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_413F38(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_61BE20; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
