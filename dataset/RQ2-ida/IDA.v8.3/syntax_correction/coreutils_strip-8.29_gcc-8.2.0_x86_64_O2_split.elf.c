#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char *v3; // r15
  signed __int64 v4; // r13
  size_t v5; // rbp
  const char *v6; // rbx
  const char *v7; // rsi
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char *v13; // r14
  int v14; // eax
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char *v19; // rax
  char *v20; // rax
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // rsi
  char *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  char *i; // rax
  char *v30; // rax
  char *v31; // rax
  const unsigned __int16 *v32; // rcx
  char *j; // rax
  char *v34; // r14
  char *v35; // r14
  char *v36; // rax
  char *v37; // rax
  unsigned __int64 v38; // r12
  size_t v39; // rdi
  int v40; // eax
  __int64 v41; // rsi
  char *v42; // rcx
  char *v43; // rdx
  const char *v44; // rsi
  char *v45; // rbx
  unsigned __int64 v46; // rsi
  __blksize_t st_blksize; // rax
  unsigned __int64 v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rax
  char *v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r9
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __int64 v56; // rdi
  int v57; // eax
  unsigned __int64 v58; // rsi
  __sighandler_t sa_handler; // r9
  const char *v60; // rbx
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // r15
  unsigned __int8 v64; // r12
  char *v65; // rbx
  char *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  char *v70; // rbx
  _BOOL8 v71; // rdx
  char *v72; // r8
  _BOOL8 v73; // rdi
  char *v74; // rsi
  size_t v75; // r15
  char *v76; // rsi
  __int64 v77; // r12
  char *v78; // rsi
  void *v79; // rdi
  char v80; // dl
  unsigned __int64 v81; // r10
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rax
  int *v84; // r11
  __int64 v85; // r10
  unsigned __int8 v86; // bl
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  int *v90; // rcx
  signed __int64 v91; // rbp
  char v92; // bl
  char v93; // al
  __int64 v94; // rbx
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned __int64 v97; // rax
  bool v98; // zf
  __int64 v99; // rax
  bool v100; // al
  char v101; // al
  char v102; // al
  int *v104; // rax
  const char *v105; // rax
  __int64 v106; // rax
  int *v107; // rax
  const char *v108; // rax
  int *v109; // rax
  __int64 v110; // rdi
  unsigned __int64 v111; // rbx
  __int64 v112; // rbp
  unsigned __int64 k; // r12
  __int64 v114; // rsi
  size_t v115; // rbx
  __int64 v116; // rax
  char *v117; // rbx
  int *v118; // rax
  unsigned __int64 v119; // rsi
  signed __int64 v120; // rbx
  unsigned __int64 v121; // rax
  size_t v122; // rbp
  int *v123; // rax
  const char *v124; // rax
  __off_t st_size; // r14
  unsigned __int64 v126; // rbp
  __off_t v127; // rbx
  __off_t v128; // rax
  char *v129; // rbx
  int *v130; // rax
  __off_t v131; // rsi
  __off_t v132; // rax
  const char *v133; // rbx
  int *v134; // rax
  const char *v135; // rbx
  int *v136; // rax
  char *v137; // rax
  unsigned __int64 v138; // r12
  const char *v139; // rax
  __int64 v140; // rbx
  char *v141; // rax
  __int64 v142; // rax
  int v143; // edx
  const char *v144; // rsi
  const char *v145; // rbx
  char *v146; // rax
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  char *v151; // rax
  char *v152; // rax
  __int64 v153; // rbx
  char *v154; // rax
  __int64 v155; // rax
  const char *v156; // rbx
  int *v157; // rax
  __int64 v158; // rbp
  char *v159; // rbx
  int *v160; // rax
  int *v161; // rax
  const char *v162; // rbx
  int *v163; // rax
  char *v164; // rax
  __int64 v165; // rax
  const char *v166; // rbx
  char *v167; // rax
  char *v168; // rax
  const char *v169; // rbx
  int *v170; // rax
  const char *v171; // rbx
  int *v172; // rax
  int *v173; // rax
  unsigned __int64 offset; // [rsp+8h] [rbp-140h]
  unsigned __int64 v175; // [rsp+10h] [rbp-138h]
  __int64 v176; // [rsp+10h] [rbp-138h]
  char *v177; // [rsp+10h] [rbp-138h]
  unsigned int v178; // [rsp+10h] [rbp-138h]
  __int64 ptr; // [rsp+18h] [rbp-130h]
  unsigned __int64 v180; // [rsp+20h] [rbp-128h]
  unsigned __int64 v181; // [rsp+20h] [rbp-128h]
  unsigned __int64 nbytes; // [rsp+28h] [rbp-120h]
  int *v183; // [rsp+30h] [rbp-118h]
  __int64 v184; // [rsp+30h] [rbp-118h]
  int *v185; // [rsp+30h] [rbp-118h]
  int *v186; // [rsp+30h] [rbp-118h]
  int *v187; // [rsp+38h] [rbp-110h]
  unsigned __int64 v188; // [rsp+38h] [rbp-110h]
  char v189; // [rsp+38h] [rbp-110h]
  char *v190; // [rsp+38h] [rbp-110h]
  unsigned __int64 v191; // [rsp+38h] [rbp-110h]
  unsigned __int64 v192; // [rsp+38h] [rbp-110h]
  __int64 v193; // [rsp+40h] [rbp-108h]
  unsigned __int64 v194; // [rsp+48h] [rbp-100h]
  char *s; // [rsp+50h] [rbp-F8h]
  int *v196; // [rsp+58h] [rbp-F0h]
  char v197; // [rsp+58h] [rbp-F0h]
  int *v198; // [rsp+58h] [rbp-F0h]
  int *v199; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v200; // [rsp+60h] [rbp-E8h]
  char v201; // [rsp+6Eh] [rbp-DAh]
  char v202; // [rsp+6Fh] [rbp-D9h]
  struct sigaction v203; // [rsp+70h] [rbp-D8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = a1;
  v6 = (const char *)a2;
  v175 = getpagesize();
  sub_4053A0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409900(sub_4050E0);
  qword_60E5F0 = "-";
  src = "x";
  offset = 0LL;
  v194 = 0LL;
  nbytes = 0LL;
  while ( 1 )
  {
    v7 = v6;
    v8 = dword_60E31C;
    if ( !dword_60E31C )
      v8 = 1;
    v9 = sub_408CD0((unsigned int)v5, v6, "0123456789C:a:b:del:n:t:ux", &off_40AAA0, 0LL);
    v12 = (unsigned int)v9;
    if ( v9 == -1 )
      break;
    if ( v9 == 101 )
    {
      byte_60E541 = 1;
    }
    else if ( v9 <= 101 )
    {
      if ( v9 <= 57 )
      {
        if ( v9 < 48 )
        {
          if ( v9 == -131 )
          {
            sub_407550(
              (_DWORD)stdout,
              (unsigned int)"split",
              (unsigned int)&unk_409B0F,
              (_DWORD)off_60E2A8,
              (unsigned int)"Torbjorn Granlund",
              (unsigned int)"Richard M. Stallman",
              0);
            exit(0);
          }
          if ( v9 == -130 )
            sub_404CF0(0);
          goto LABEL_317;
        }
        if ( !(_DWORD)v4 )
          goto LABEL_61;
        if ( (_DWORD)v4 != 4 )
          goto LABEL_327;
        if ( !(_DWORD)v3 || (_DWORD)v3 == v8 )
        {
          if ( offset > 0x1999999999999999LL || (v52 = v9 - 48, v52 + 10 * offset < offset) )
          {
LABEL_326:
            v178 = v12;
            v140 = sub_405350(offset, &v203);
            v141 = dcgettext(0LL, "line count option -%s%c... is too large", 5);
            error(1, 0, v141, v140, v178);
LABEL_327:
            v44 = "cannot split in more than one way";
LABEL_316:
            v137 = dcgettext(0LL, v44, 5);
            error(0, 0, v137);
LABEL_317:
            sub_404CF0(1);
          }
          offset = v52 + 10 * offset;
          v3 = (char *)v8;
        }
        else
        {
LABEL_61:
          v3 = (char *)v8;
          v4 = 4LL;
          offset = v9 - 48;
        }
      }
      else if ( v9 == 97 )
      {
        v31 = dcgettext(0LL, "invalid suffix length", 5);
        qword_60E608 = sub_4079F0(s1, 0LL, 0x1FFFFFFFFFFFFFFFLL, "", v31, 0LL);
      }
      else if ( v9 <= 97 )
      {
        if ( v9 != 67 )
          goto LABEL_317;
        if ( (_DWORD)v4 )
          goto LABEL_327;
        v4 = 2LL;
        v30 = dcgettext(0LL, "invalid number of bytes", 5);
        offset = sub_4079F0(s1, 1LL, 0x7FFFFFFFFFFFFFFFLL, "bEGKkMmPTYZ0", v30, 0LL);
      }
      else
      {
        if ( v9 != 98 )
        {
          if ( v9 != 100 )
            goto LABEL_317;
          v25 = "0123456789";
          goto LABEL_41;
        }
        if ( (_DWORD)v4 )
          goto LABEL_327;
        v4 = 1LL;
        v21 = dcgettext(0LL, "invalid number of bytes", 5);
        offset = sub_4079F0(s1, 1LL, 0x7FFFFFFFFFFFFFFFLL, "bEGKkMmPTYZ0", v21, 0LL);
      }
    }
    else if ( v9 == 120 )
    {
      v25 = "0123456789abcdef";
LABEL_41:
      v26 = s1;
      LODWORD(ptr) = v9;
      off_60E298 = v25;
      if ( s1 )
      {
        v180 = strlen(s1);
        if ( v180 != strspn(s1, v25) )
        {
          v142 = sub_406FC0(v26, v25, v27, v28, (unsigned int)ptr);
          v143 = 5;
          v144 = "%s: invalid start value for hexadecimal suffix";
          v145 = (const char *)v142;
          if ( (_DWORD)ptr == 100 )
            goto LABEL_332;
          goto LABEL_329;
        }
        if ( *v26 == 48 )
        {
          for ( i = v26 + 1; *i; ++i )
          {
            s1 = i;
            v26 = i;
            if ( *i != 48 )
              break;
          }
        }
        s = v26;
      }
    }
    else if ( v9 > 120 )
    {
      if ( v9 == 129 )
      {
        qword_60E760 = (__int64)s1;
      }
      else if ( v9 <= 129 )
      {
        if ( v9 != 128 )
          goto LABEL_317;
        byte_60E542 = 1;
      }
      else if ( v9 == 130 )
      {
        v20 = dcgettext(0LL, "invalid IO block size", 5);
        nbytes = sub_4079F0(s1, 1LL, ~v175, "bEGKkMmPTYZ0", v20, 0LL);
      }
      else
      {
        if ( v9 != 131 )
          goto LABEL_317;
        v13 = s1;
        if ( v13 != (char *)sub_405180(s1, v6, v10, v11, 131LL) )
          goto LABEL_336;
        qword_60E5F8 = v13;
      }
    }
    else if ( v9 == 110 )
    {
      if ( (_DWORD)v4 )
        goto LABEL_327;
      v32 = *__ctype_b_loc();
      for ( j = s1; ; s1 = j )
      {
        v34 = j++;
        if ( (v32[(unsigned __int8)*v34] & 0x2000) == 0 )
          break;
      }
      if ( !memcmp(v34, "r/", 2uLL) )
      {
        v4 = 7LL;
        s1 = v34 + 2;
      }
      else
      {
        v4 = 5LL;
        if ( !strncmp(v34, "l/", 2uLL) )
        {
          v4 = 6LL;
          s1 = v34 + 2;
        }
      }
      v35 = strchr(s1, 47);
      if ( v35 )
      {
        v36 = dcgettext(0LL, "invalid number of chunks", 5);
        offset = sub_4079F0(v35 + 1, 1LL, -1LL, "", v36, 0LL);
        if ( v35 != s1 )
        {
          *v35 = 0;
          v37 = dcgettext(0LL, "invalid chunk number", 5);
          v194 = sub_4079F0(s1, 1LL, offset, "", v37, 0LL);
        }
      }
      else
      {
        v51 = dcgettext(0LL, "invalid number of chunks", 5);
        offset = sub_4079F0(s1, 1LL, -1LL, "", v51, 0LL);
      }
    }
    else if ( v9 <= 110 )
    {
      if ( v9 != 108 )
        goto LABEL_317;
      if ( (_DWORD)v4 )
        goto LABEL_327;
      v4 = 3LL;
      v19 = dcgettext(0LL, "invalid number of lines", 5);
      offset = sub_4079F0(s1, 1LL, -1LL, "", v19, 0LL);
    }
    else if ( v9 == 116 )
    {
      v13 = s1;
      v14 = *s1;
      if ( !*s1 )
      {
        v168 = dcgettext(0LL, "empty record separator", 5);
        error(1, 0, v168);
LABEL_354:
        v169 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
        v170 = __errno_location();
        error(1, *v170, "%s", v169);
LABEL_355:
        v171 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
        v172 = __errno_location();
        error(1, *v172, "%s", v171);
        goto LABEL_356;
      }
      if ( s1[1] )
      {
        v15 = "\\0";
        if ( strcmp(s1, "\\0") )
          goto LABEL_335;
        v14 = 0;
      }
      if ( c >= 0 && c != v14 )
      {
        v152 = dcgettext(0LL, "multiple separator characters specified", 5);
        v15 = 0LL;
        error(1, 0, v152);
LABEL_335:
        v153 = sub_406FC0(v13, v15, v16, v17, v18);
        v154 = dcgettext(0LL, "multi-character separator %s", 5);
        v7 = 0LL;
        error(1, 0, v154, v153);
LABEL_336:
        v155 = sub_406FC0(v13, v7, v22, v23, v24);
        v144 = "invalid suffix %s, contains directory separator";
        v145 = (const char *)v155;
LABEL_329:
        v146 = dcgettext(0LL, v144, 5);
        goto LABEL_330;
      }
      c = v14;
    }
    else
    {
      if ( v9 != 117 )
        goto LABEL_317;
      byte_60E540 = 1;
    }
  }
  if ( v194 && qword_60E760 )
  {
    v44 = "--filter does not process a chunk extracted to stdout";
    goto LABEL_316;
  }
  if ( (_DWORD)v4 )
  {
    if ( !offset )
    {
      v166 = (const char *)sub_406FC0("0", v6, v10, v11, (unsigned int)v9);
      v167 = dcgettext(0LL, "invalid number of lines", 5);
      error(0, 0, "%s: %s", v167, v166);
      sub_404CF0(1);
    }
  }
  else
  {
    offset = 1000LL;
    LODWORD(v4) = 3;
  }
  if ( c < 0 )
    c = 10;
  v38 = (unsigned int)(v4 - 5);
  if ( s )
  {
    byte_60E2A0 = 0;
    if ( (unsigned int)v38 > 2 )
      goto LABEL_84;
    v57 = sub_407A20(s);
    v58 = offset;
    v53 = offset;
    if ( !v57 )
    {
      sa_handler = v203.sa_handler;
      if ( (char *)~offset >= (char *)v203.sa_handler && (char *)v203.sa_handler < (char *)offset )
LABEL_314:
        v53 = (unsigned __int64)sa_handler + v58;
      else
        v53 = offset;
    }
LABEL_112:
    v54 = strlen(off_60E298);
    v55 = v53 / v54;
    LOBYTE(v12) = v53 % v54 != 0;
    v56 = 0LL;
    if ( v54 <= v53 )
    {
      while ( 1 )
      {
        ++v56;
        if ( v54 > v55 )
          break;
        v55 /= v54;
      }
    }
    v12 = (unsigned __int8)v12;
    byte_60E2A0 = 0;
    v13 = (char *)((unsigned __int8)v12 + v56);
    if ( qword_60E608 )
    {
      if ( (unsigned __int64)v13 <= qword_60E608 )
        goto LABEL_118;
      v164 = dcgettext(0LL, "the suffix length needs to be at least %lu", 5);
      v41 = 0LL;
      error(1, 0, v164, v13);
LABEL_351:
      v165 = sub_406FC0(*(_QWORD *)&v6[v41 + 16], v41, v43, v42, v12);
      v144 = "extra operand %s";
      v145 = (const char *)v165;
      goto LABEL_329;
    }
LABEL_85:
    v39 = 2LL;
    if ( (unsigned __int64)v13 >= 2 )
      v39 = (size_t)v13;
    qword_60E608 = v39;
  }
  else
  {
    v53 = offset;
    if ( (unsigned int)v38 <= 2 )
      goto LABEL_112;
LABEL_84:
    v13 = 0LL;
    if ( !qword_60E608 )
      goto LABEL_85;
LABEL_118:
    byte_60E2A0 = 0;
  }
  v40 = dword_60E31C;
  if ( dword_60E31C < (int)v5 )
  {
    v41 = 8LL * dword_60E31C;
    v42 = *(char **)&v6[v41];
    ++dword_60E31C;
    qword_60E5F0 = v42;
    if ( v40 + 1 < (int)v5 )
    {
      v43 = *(char **)&v6[v41 + 8];
      dword_60E31C = v40 + 2;
      src = v43;
      if ( v40 + 2 < (int)v5 )
        goto LABEL_351;
    }
  }
  if ( s )
  {
    v44 = "numerical suffix start value is too large for the suffix length";
    if ( strlen(s) > qword_60E608 )
      goto LABEL_316;
  }
  v45 = qword_60E5F0;
  if ( strcmp(qword_60E5F0, "-") && (int)sub_405260(0, v45, 0) < 0 )
    goto LABEL_338;
  v46 = 0LL;
  if ( __fxstat(1, 0, &stat_buf) )
  {
    v156 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
    v157 = __errno_location();
    error(1, *v157, "%s", v156);
LABEL_338:
    v158 = sub_406D70(4LL, qword_60E5F0);
    v159 = dcgettext(0LL, "cannot open %s for reading", 5);
    v160 = __errno_location();
    error(1, *v160, v159, v158);
    goto LABEL_339;
  }
  if ( !nbytes )
  {
    st_blksize = 0x20000LL;
    if ( (unsigned __int64)(stat_buf.st_blksize - 0x20000) <= 0x1FFFFFFFFFFE0000LL )
      st_blksize = stat_buf.st_blksize;
    nbytes = st_blksize;
  }
  v48 = v175;
  v5 = -1LL;
  v49 = v175 + nbytes;
  v50 = sub_407690(v175 + nbytes);
  v175 = 0x7FFFFFFFFFFFFFFFLL;
  s = (char *)(v50 + v48 - 1 - (v50 + v48 - 1) % v48);
  if ( (unsigned int)v38 <= 1 )
  {
    v38 = 0LL;
    v60 = (const char *)lseek(0, 0LL, 1);
    if ( (__int64)v60 >= 0 )
    {
      v13 = s;
      while ( 1 )
      {
        v49 = 0LL;
        v46 = (unsigned __int64)&s[v38];
        v62 = sub_406FE0(0, &s[v38], nbytes - v38);
        if ( !v62 )
          goto LABEL_128;
        if ( v62 == -1 )
          goto LABEL_305;
        v61 = v38 + v62;
        v38 = v61;
        if ( nbytes <= v61 )
          goto LABEL_295;
      }
    }
LABEL_339:
    v161 = __errno_location();
    if ( *v161 == 29 )
      *v161 = 0;
    goto LABEL_305;
  }
LABEL_101:
  if ( qword_60E760 )
  {
    sigemptyset(&set);
    sigaction(13, 0LL, &v203);
    if ( v203.sa_handler != (__sighandler_t)1 )
      sigaddset(&set, 13);
    v46 = (unsigned __int64)&set;
    v49 = 0LL;
    sigprocmask(0, &set, &oset);
  }
  v4 = (unsigned int)(v4 - 2);
  switch ( (int)v4 )
  {
    case 0:
      LOBYTE(v177) = 0;
      v38 = 0LL;
      v4 = 0LL;
      v180 = 0LL;
      ptr = 0LL;
      goto LABEL_142;
    case 1:
    case 2:
      v63 = offset;
      v13 = 0LL;
      v64 = 1;
      while ( 1 )
      {
        v176 = sub_406FE0(0, s, nbytes);
        if ( v176 == -1 )
          goto LABEL_354;
        v5 = (unsigned int)c;
        v65 = &s[v176];
        v4 = (signed __int64)s;
        v66 = s;
        s[v176] = c;
        while ( 1 )
        {
          v67 = sub_408DD0(v66, (unsigned int)v5, v65 - v66 + 1);
          if ( v65 == (char *)v67 )
            break;
          ++v13;
          v66 = (char *)(v67 + 1);
          if ( (unsigned __int64)v13 >= v63 )
          {
            v68 = v64;
            offset = v67 + 1;
            v13 = 0LL;
            v64 = 1;
            sub_4049A0(v68, v4, &v66[-v4]);
            v66 = (char *)offset;
            v5 = (unsigned int)c;
            v4 = offset;
          }
        }
        if ( v65 != (char *)v4 )
        {
          v110 = v64;
          v64 = 0;
          sub_4049A0(v110, v4, &v65[-v4]);
        }
        if ( !v176 )
          goto LABEL_228;
      }
    case 3:
      if ( v194 )
        goto LABEL_276;
      sub_404AB0(v175 / offset);
      goto LABEL_228;
    case 4:
      if ( v194 > offset || v175 < offset )
        __assert_fail("n && k <= n && n <= file_size", "src/split.c", 0x361u, "lines_chunk_split");
      v81 = v175 / offset;
      if ( v194 <= 1 )
        goto LABEL_306;
      v38 = v194 - 1;
      v180 = v175 / offset;
      v82 = (v194 - 1) * v81 - 1;
      v4 = v82;
      if ( v5 > v82 )
      {
        v5 -= v82;
        memmove(s, &s[v82], v5);
        ptr = v82;
        v81 = v175 / offset;
        goto LABEL_170;
      }
      v131 = v82 - v5;
      v5 = -1LL;
      v132 = lseek(0, v131, 1);
      ptr = v82;
      v81 = v175 / offset;
      if ( v132 < 0 )
      {
        v133 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
        v134 = __errno_location();
        error(1, *v134, "%s", v133);
        goto LABEL_309;
      }
LABEL_170:
      v202 = 0;
      v13 = (char *)v194;
      LOBYTE(v180) = 1;
      v3 = (char *)v81;
      v83 = v5;
      v84 = (int *)(v175 - 1);
LABEL_171:
      if ( (__int64)v175 <= ptr )
        goto LABEL_320;
      if ( v83 == -1LL )
        goto LABEL_312;
LABEL_173:
      if ( v83 )
      {
        v202 = 0;
        v85 = (__int64)v3;
        v5 = (size_t)s;
        v86 = v180;
        if ( v175 - ptr <= v83 )
          v83 = v175 - ptr;
        v87 = offset;
        v200 = v83;
        v3 = &s[v83];
        while ( 1 )
        {
          v83 = -1LL;
          if ( v3 == (char *)v5 )
          {
            LOBYTE(v180) = v86;
            v3 = (char *)v85;
            goto LABEL_171;
          }
          v88 = v4 - ptr;
          if ( v4 - ptr < 0 )
            v88 = 0LL;
          v187 = v84;
          v184 = v85;
          v181 = v87;
          if ( v88 > v200 )
            v88 = v200;
          v89 = sub_408DD0(v5 + v88, (unsigned int)c, v200 - v88);
          v87 = v181;
          v85 = v184;
          v84 = v187;
          if ( v89 )
          {
            v201 = 1;
            v90 = (int *)(v89 + 1);
          }
          else
          {
            v90 = (int *)v3;
            v201 = 0;
          }
          v180 = (unsigned __int64)v90 - v5;
          if ( (char *)v38 == v13 )
          {
            v199 = v187;
            v193 = v184;
            v115 = (size_t)v90 - v5;
            v192 = v87;
            v183 = v90;
            v116 = sub_4052D0(1, (void *)v5, (size_t)v90 - v5);
            v90 = v183;
            v87 = v192;
            v85 = v193;
            v84 = v199;
            if ( v115 != v116 )
            {
              v117 = dcgettext(0LL, "write error", 5);
              v118 = __errno_location();
              error(1, *v118, "%s", v117);
LABEL_276:
              if ( v194 > offset || v175 < offset )
                goto LABEL_342;
              v119 = v175 / offset * (v194 - 1);
              v120 = v119;
              if ( v194 != offset )
                v175 = v194 * (v175 / offset);
              if ( v5 > v119 )
              {
                v5 -= v119;
                memmove(s, &s[v119], v5);
LABEL_282:
                v4 = nbytes;
                v121 = v5;
                v3 = s;
                while ( 1 )
                {
                  if ( (__int64)v175 <= v120 )
                    goto LABEL_228;
                  if ( v121 == -1LL )
                  {
                    v121 = sub_406FE0(0, s, v4);
                    if ( v121 == -1LL )
                      break;
                  }
                  if ( !v121 )
                    goto LABEL_228;
                  v122 = v175 - v120;
                  if ( v175 - v120 > v121 )
                    v122 = v121;
                  if ( v122 != sub_4052D0(1, s, v122) )
                  {
                    v123 = __errno_location();
                    if ( !qword_60E760 || *v123 != 32 )
                    {
                      v4 = (signed __int64)v123;
                      v124 = (const char *)sub_406E40(0LL, 3LL, "-");
                      error(1, *(_DWORD *)v4, "%s", v124);
                    }
                  }
                  v120 += v122;
                  v121 = -1LL;
                }
                v60 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
                v49 = 1LL;
                v46 = (unsigned int)*__errno_location();
                error(1, v46, "%s", v60);
LABEL_295:
                st_size = stat_buf.st_size;
                v126 = v61;
                if ( !stat_buf.st_size )
                  goto LABEL_304;
                v127 = (__off_t)&v60[v61];
                if ( (stat_buf.st_mode & 0xD000) == 0x8000 && stat_buf.st_size >= v127 )
                  goto LABEL_303;
                v46 = 0LL;
                v49 = 0LL;
                v128 = lseek(0, 0LL, 2);
                st_size = v128;
                if ( v128 >= 0 )
                {
                  if ( v127 == v128 )
                    goto LABEL_303;
                  v49 = 0LL;
                  v46 = v127;
                  if ( lseek(0, v127, 0) >= 0 )
                  {
                    if ( st_size < v127 )
                      st_size = v127;
LABEL_303:
                    v13 = (char *)(st_size - v127);
                    v38 = (unsigned __int64)&v13[v126];
                    if ( &v13[v126] == (char *)0x7FFFFFFFFFFFFFFFLL )
                    {
LABEL_304:
                      *__errno_location() = 75;
                      goto LABEL_305;
                    }
LABEL_128:
                    if ( (v38 & 0x8000000000000000LL) == 0LL )
                    {
                      v5 = nbytes;
                      if ( v38 <= nbytes )
                        v5 = v38;
                      if ( (offset & 0x8000000000000000LL) == 0LL )
                      {
                        if ( v38 < offset )
                          v38 = offset;
                        v175 = v38;
                        goto LABEL_101;
                      }
                      v147 = sub_405350(offset, &v203);
                      v145 = (const char *)sub_406FC0(v147, &v203, v148, v149, v150);
                      v151 = dcgettext(0LL, "invalid number of chunks", 5);
                      error(1, 75, "%s: %s", v151, v145);
LABEL_332:
                      v146 = dcgettext(0LL, "%s: invalid start value for numerical suffix", v143);
LABEL_330:
                      error(0, 0, v146, v145);
                      sub_404CF0(1);
                    }
                  }
                }
LABEL_305:
                v5 = sub_406E40(0LL, 3LL, qword_60E5F0);
                v129 = dcgettext(0LL, "%s: cannot determine file size", 5);
                v130 = __errno_location();
                error(1, *v130, v129, v5);
LABEL_306:
                v4 = v81 - 1;
                v38 = 1LL;
                ptr = 0LL;
                goto LABEL_170;
              }
              v5 = -1LL;
              if ( lseek(0, v119, 1) >= 0 )
                goto LABEL_282;
              v135 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
              v136 = __errno_location();
              error(1, *v136, "%s", v135);
LABEL_312:
              v183 = v84;
              v83 = sub_406FE0(0, s, nbytes);
              v84 = v183;
              if ( v83 == -1LL )
              {
                v6 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
                v58 = (unsigned int)*__errno_location();
                error(1, v58, "%s", v6);
                goto LABEL_314;
              }
              goto LABEL_173;
            }
          }
          else if ( !v13 )
          {
            v198 = v187;
            v193 = v184;
            v191 = v87;
            v186 = v90;
            sub_4049A0(v86, v5, v180);
            v84 = v198;
            v85 = v193;
            v87 = v191;
            v90 = v186;
          }
          v91 = v180 + ptr;
          ptr += v180;
          v92 = v201;
          while ( v91 > v4 || v92 )
          {
            v93 = (v3 == (char *)v90) & (v92 ^ 1);
            if ( v93 )
              goto LABEL_258;
            if ( ++v38 > (unsigned __int64)v13 && v13 != 0LL )
              goto LABEL_228;
            v4 += v85;
            if ( v38 == v87 )
              v4 = (signed __int64)v84;
            if ( v91 <= v4 )
            {
              v92 = 0;
            }
            else if ( !v13 )
            {
              v196 = v84;
              v193 = v85;
              v188 = v87;
              v185 = v90;
              sub_4049A0(1LL, 0LL, 0LL);
              v90 = v185;
              v87 = v188;
              v85 = v193;
              v84 = v196;
            }
          }
          v93 = v202;
LABEL_258:
          v5 = (size_t)v90;
          v200 -= v180;
          v202 = v93;
          v86 = v201;
        }
      }
LABEL_320:
      v138 = v38 - ((v202 == 0) - 1LL);
      if ( !v194 )
      {
        while ( v138 <= offset )
        {
          ++v138;
          sub_4049A0(1LL, 0LL, 0LL);
        }
      }
      goto LABEL_228;
    case 5:
      if ( v194 )
        goto LABEL_202;
      v71 = (offset * (unsigned __int128)0x20uLL) >> 64 != 0;
      if ( (offset & 0x400000000000000LL) != 0 || !is_mul_ok(offset, 0x20uLL) )
        goto LABEL_319;
      v5 = 0LL;
      v193 = sub_407690(32 * offset);
      v94 = v193;
      do
      {
        sub_403CC0();
        ++v5;
        v94 += 32LL;
        v95 = sub_4078C0(value);
        *(_DWORD *)(v94 - 24) = -1;
        *(_QWORD *)(v94 - 32) = v95;
        *(_QWORD *)(v94 - 16) = 0LL;
        *(_DWORD *)(v94 - 8) = 0;
      }
      while ( v5 != offset );
LABEL_202:
      ptr = 0LL;
      v38 = 1LL;
      v189 = 0;
      LOBYTE(v180) = 0;
      v197 = 0;
      break;
    default:
      sub_404AB0(offset);
      goto LABEL_228;
  }
  while ( 2 )
  {
    v96 = sub_406FE0(0, s, nbytes);
    if ( v96 == -1 )
      goto LABEL_355;
    if ( v96 )
    {
      v177 = &s[v96];
      if ( s == &s[v96] )
        continue;
      v75 = (size_t)s;
LABEL_212:
      v5 = (size_t)&v177[-v75];
      v99 = sub_408DD0(v75, (unsigned int)c, &v177[-v75]);
      if ( v99 )
      {
        v70 = (char *)(v99 + 1);
        v4 = 1LL;
        v5 = v99 + 1 - v75;
      }
      else
      {
        v70 = v177;
        v4 = 0LL;
      }
      if ( !v194 )
      {
        v13 = (char *)(v193 + 32 * ptr);
        v189 |= sub_404500(v193, ptr, offset);
        v183 = __errno_location();
        if ( !byte_60E540 )
        {
          if ( fwrite_unlocked((const void *)v75, v5, 1uLL, *((FILE **)v13 + 2)) == 1 )
          {
            v100 = *v183 == 32 && qword_60E760 != 0;
            goto LABEL_218;
          }
LABEL_234:
          if ( *v183 != 32 || !qword_60E760 )
          {
            v105 = (const char *)sub_406E40(0LL, 3LL, *(_QWORD *)v13);
            LOBYTE(v49) = 1;
            error(1, *v183, "%s", v105);
            while ( 1 )
            {
              v49 = (unsigned __int8)v49;
              v190 = v72;
              sub_4049A0((unsigned __int8)v49, ptr, v38);
              v4 = (signed __int64)v183;
              v72 = v190;
              v180 = nbytes;
              if ( v38 > nbytes )
                break;
              do
              {
                while ( 1 )
                {
                  if ( !v72 )
                    goto LABEL_239;
LABEL_155:
                  v76 = v70;
                  v77 = v72 - v70 + 1;
                  v49 = v4 == 0;
                  v4 += v77;
                  v5 -= v77;
                  v70 = v72 + 1;
                  sub_4049A0(v49, v76, v77);
                  if ( v13 )
                  {
                    v75 -= v77;
                    LOBYTE(v177) = v75 != 0;
                    if ( v75 )
                      goto LABEL_157;
                    goto LABEL_357;
                  }
                  LOBYTE(v177) = v5 != 0;
                  if ( v5 )
                  {
                    v75 = v5;
LABEL_157:
                    v38 = 0LL;
LABEL_158:
                    if ( v180 - v38 < v75 )
                    {
                      v46 = nbytes;
                      if ( ~nbytes < v180 )
LABEL_319:
                        sub_4078E0(v49, v46, v71);
                      v180 += nbytes;
                      ptr = sub_4076F0(ptr, v180);
                    }
                    v78 = v70;
                    v5 -= v75;
                    v70 += v75;
                    v79 = (void *)(ptr + v38);
                    v38 += v75;
                    memcpy(v79, v78, v75);
LABEL_162:
                    v80 = (char)v177;
                    if ( v13 )
                    {
                      v80 = 0;
                      v4 = 0LL;
                    }
                    LOBYTE(v177) = v80;
                    goto LABEL_151;
                  }
                  v38 = 0LL;
                  LOBYTE(v177) = 1;
LABEL_151:
                  if ( !v5 )
                    goto LABEL_142;
LABEL_152:
                  v183 = (int *)(v38 + v4);
                  v75 = offset - (v38 + v4);
                  if ( v5 < v75 )
                    break;
                  v49 = (__int64)v70;
                  v13 = &v70[v75 - 1];
                  v72 = (char *)memrchr(v70, c, offset - (v38 + v4));
                  if ( v38 )
                    goto LABEL_146;
                }
                v49 = (__int64)v70;
                v13 = 0LL;
                v75 = 0LL;
                v72 = (char *)memrchr(v70, c, v5);
              }
              while ( !v38 );
LABEL_146:
              LOBYTE(v49) = v4 == 0;
              if ( !v72 && v4 )
                goto LABEL_148;
            }
            v49 = ptr;
            v106 = sub_4076F0(ptr, nbytes);
            v72 = v190;
            v180 = nbytes;
            ptr = v106;
            if ( v190 )
              goto LABEL_155;
LABEL_239:
            v38 = 0LL;
LABEL_148:
            if ( (_BYTE)v177 )
            {
              if ( v13 && v75 )
                goto LABEL_158;
              if ( !v13 && v5 )
              {
                v75 = v5;
                goto LABEL_158;
              }
              goto LABEL_162;
            }
            v73 = v4 == 0;
            if ( v13 )
            {
              v74 = v70;
              v5 -= v75;
              v70 += v75;
              sub_4049A0(v73, v74, v75);
              v4 = 0LL;
              goto LABEL_151;
            }
            v4 += v5;
            sub_4049A0(v73, v70, v5);
LABEL_142:
            v69 = sub_406FE0(0, s, nbytes);
            v5 = v69;
            if ( v69 == -1 )
            {
LABEL_356:
              v70 = (char *)sub_406E40(0LL, 3LL, qword_60E5F0);
              v173 = __errno_location();
              error(1, *v173, "%s", v70);
LABEL_357:
              LOBYTE(v177) = 1;
              v38 = 0LL;
              goto LABEL_162;
            }
            if ( v69 )
            {
              v70 = s;
              goto LABEL_152;
            }
            if ( v38 )
LABEL_309:
              sub_4049A0(v4 == 0, ptr, v38);
            free((void *)ptr);
            goto LABEL_228;
          }
LABEL_221:
          if ( !v189 )
          {
LABEL_222:
            if ( (_BYTE)v4 )
            {
              if ( ++ptr == offset )
              {
                if ( !(_BYTE)v180 )
                  goto LABEL_273;
                ptr = 0LL;
                v102 = v180;
                LOBYTE(v180) = 0;
                v197 = v102;
              }
            }
            goto LABEL_211;
          }
LABEL_247:
          if ( (unsigned int)sub_407E60(*((FILE **)v13 + 2)) )
          {
            v139 = (const char *)sub_406E40(0LL, 3LL, *(_QWORD *)v13);
            error(1, *v183, "%s", v139);
            goto LABEL_326;
          }
          *((_QWORD *)v13 + 2) = 0LL;
          *((_DWORD *)v13 + 2) = -2;
          goto LABEL_222;
        }
        v98 = v5 == sub_4052D0(*((_DWORD *)v13 + 2), (void *)v75, v5);
        v107 = v183;
        if ( !v98 )
        {
          if ( *v183 == 32 && qword_60E760 )
            goto LABEL_221;
          v108 = (const char *)sub_406E40(0LL, 3LL, *(_QWORD *)v13);
          error(1, *v183, "%s", v108);
          goto LABEL_247;
        }
LABEL_251:
        v100 = qword_60E760 != 0 && *v107 == 32;
LABEL_218:
        v98 = !v100;
        v101 = v180;
        if ( v98 )
          v101 = 1;
        LOBYTE(v180) = v101;
        goto LABEL_221;
      }
      if ( v194 == v38 )
      {
        if ( byte_60E540 )
        {
          if ( v5 != sub_4052D0(1, (void *)v75, v5) )
          {
            v70 = dcgettext(0LL, "write error", 5);
            v109 = __errno_location();
            error(1, *v109, "%s", v70);
            goto LABEL_251;
          }
        }
        else if ( fwrite_unlocked((const void *)v75, v5, 1uLL, stdout) != 1 )
        {
          clearerr_unlocked(stdout);
          v70 = dcgettext(0LL, "write error", 5);
          v104 = __errno_location();
          error(1, *v104, "%s", v70);
          goto LABEL_234;
        }
      }
      if ( (_BYTE)v4 )
      {
        v97 = v38 + 1;
        v98 = offset == v38;
        v38 = 1LL;
        if ( !v98 )
          v38 = v97;
      }
LABEL_211:
      v75 = (size_t)v70;
      if ( v177 == v70 )
        continue;
      goto LABEL_212;
    }
    break;
  }
  if ( !v194 )
  {
    if ( v197 )
LABEL_273:
      v111 = (int)offset;
    else
      v111 = (int)ptr;
    v112 = v193;
    for ( k = 0LL; k != offset; ++k )
    {
      if ( v111 <= k && !byte_60E541 )
        sub_404500(v193, k, offset);
      v114 = *(unsigned int *)(v112 + 8);
      if ( (int)v114 >= 0 )
        sub_4046F0(*(_QWORD *)(v112 + 16), v114, *(unsigned int *)(v112 + 24), *(_QWORD *)v112);
      *(_DWORD *)(v112 + 8) = -2;
      v112 += 32LL;
    }
  }
LABEL_228:
  if ( close(0) )
  {
    v162 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
    v163 = __errno_location();
    error(1, *v163, "%s", v162);
LABEL_342:
    __assert_fail("k && n && k <= n && n <= file_size", "src/split.c", 0x3DFu, "bytes_chunk_extract");
  }
  sub_4046F0(0LL, (unsigned int)dword_60E294, (unsigned int)dword_60E758, value);
  return 0LL;
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

void *sub_403C0B()
{
  return &unk_60E4C8;
}

__int64 sub_403C2A()
{
  return 0LL;
}

void *sub_403C61()
{
  void *result; // rax

  if ( !byte_60E508 )
  {
    while ( qword_60E510 < (unsigned __int64)(&qword_60DE48 - qword_60DE40 - 1) )
      ((void (*)(void))qword_60DE40[++qword_60E510])();
    result = sub_403C0B();
    byte_60E508 = 1;
  }
  return result;
}

// attributes: thunk
__int64 sub_403CB8()
{
  return sub_403C2A();
}

size_t __fastcall sub_403CC0(char *a1, __int64 a2, __int64 a3)
{
  char *v3; // rbp
  size_t v4; // rbx
  size_t result; // rax
  _QWORD *v6; // r9
  char v7; // r8
  char *v8; // rsi
  __int64 *v9; // rcx
  char v10; // dl
  __int64 v11; // r12
  size_t v12; // rax
  unsigned __int64 v13; // r13
  size_t v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  char *v17; // rax
  size_t v18; // rbx
  char *v19; // rbp
  char *v20; // rax
  void *v21; // r13
  char *v22; // rax
  size_t v23; // rcx
  __int64 v24; // rdx
  char *v25; // rcx
  size_t v26; // rbx
  int v27; // esi
  char *v28; // rax
  char *v29; // r13
  size_t v30; // rbx
  size_t v31; // rbp
  size_t v32; // r12
  size_t v33; // rcx
  char *v34; // rax

  v3 = value;
  v4 = qword_60E608;
  if ( value )
  {
    result = qword_60E608 - 1;
    if ( !qword_60E608 )
    {
LABEL_28:
      v34 = dcgettext(0LL, "output file suffixes exhausted", 5);
      error(1, 0, v34);
LABEL_29:
      __assert_fail("! widen", "src/split.c", 0x198u, "next_file_name");
    }
    v6 = ptr;
    v7 = byte_60E2A0;
    v8 = off_60E298;
    a1 = (char *)qword_60E610;
    v9 = (__int64 *)((char *)ptr + 8 * qword_60E608 - 8);
    while ( 1 )
    {
      a3 = *v9 + 1;
      *v9 = a3;
      if ( !result )
      {
        if ( v7 )
          break;
      }
      v10 = v8[a3];
      a1[result] = v10;
      if ( v10 )
        return result;
      *v9-- = 0LL;
      a1[result--] = *v8;
      if ( result == -1LL )
        goto LABEL_28;
    }
    if ( v8[*v6 + 1] )
    {
      result = (unsigned __int8)v8[a3];
      *a1 = result;
      if ( (_BYTE)result )
        return result;
      *v9 = 0LL;
      *a1 = *v8;
      goto LABEL_28;
    }
  }
  v11 = qword_60E538;
  if ( !qword_60E538 )
  {
    v12 = strlen(src);
    a1 = qword_60E5F8;
    v13 = v12;
    n = v12;
    v14 = 0LL;
    if ( qword_60E5F8 )
      v14 = strlen(qword_60E5F8);
    qword_60E528 = v14;
    v15 = v13 + v4 + v14;
    v16 = v15 + 1;
    qword_60E538 = v15;
    if ( v13 <= v15 + 1 )
    {
      v17 = (char *)sub_4076F0(v3, v16);
      v18 = n;
      v19 = v17;
      value = v17;
      memcpy(v17, src, n);
      v20 = off_60E298;
      v21 = ptr;
      goto LABEL_18;
    }
LABEL_26:
    sub_4078E0(a1, v16, a3);
  }
  v16 = qword_60E538 + 3;
  qword_60E538 += 2LL;
  qword_60E608 = v4 + 1;
  if ( v11 + 3 < n )
    goto LABEL_26;
  v22 = (char *)sub_4076F0(v3, v16);
  v21 = ptr;
  v23 = n;
  v19 = v22;
  value = v22;
  v20 = off_60E298;
  v24 = *(_QWORD *)ptr;
  v18 = ++n;
  v19[v23] = off_60E298[v24];
LABEL_18:
  v25 = &v19[v18];
  v26 = qword_60E608;
  v27 = *v20;
  qword_60E610 = (__int64)v25;
  v28 = (char *)memset(v25, v27, qword_60E608);
  if ( qword_60E5F8 )
    memcpy(&v28[v26], qword_60E5F8, qword_60E528);
  v19[qword_60E538] = 0;
  free(v21);
  result = sub_407860(v26, 8LL);
  v29 = s;
  v30 = result;
  ptr = (void *)result;
  if ( s )
  {
    if ( v11 )
      goto LABEL_29;
    v31 = strlen(s);
    v32 = 8 * qword_60E608;
    result = (size_t)memcpy((void *)(qword_60E610 + qword_60E608 - v31), v29, v31);
    v33 = v31 - 1;
    if ( v31 )
    {
      result = v30 + v32 - 8 * v31;
      do
      {
        *(_QWORD *)(result + 8 * v33) = v29[v33] - 48;
        --v33;
      }
      while ( v33 != -1LL );
    }
  }
  return result;
}

__int64 __fastcall sub_403FC0(__int64 value, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  char *v8; // rbp
  __pid_t v9; // eax
  int v10; // ebx
  __int64 st_dev_low; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // rbx
  int *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const char *v22; // rax
  char *v23; // rax
  int v24; // eax
  char *v25; // rbx
  int *v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  char *v29; // rax
  __int64 v30; // rbx
  char *v31; // rax
  __int64 v32; // rdx
  char *v33; // rbx
  int *v34; // rax
  char *v35; // rbx
  int *v36; // rax
  __int64 v37; // rbx
  char *v38; // rax
  int *v39; // rax
  char *v40; // rax
  char *v41; // rbx
  int *v42; // rax
  __int64 v43; // rbp
  int *v44; // rax
  char *v45; // rax
  char *v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rdx
  struct stat fd; // [rsp+0h] [rbp-A8h] BYREF

  v6 = value;
  if ( !qword_60E760 )
    goto LABEL_21;
  v7 = value;
  v8 = getenv("SHELL");
  if ( !v8 )
    v8 = "/bin/sh";
  if ( setenv("FILE", (const char *)value, 1) )
  {
LABEL_48:
    v46 = dcgettext(0LL, "failed to set FILE environment variable", 5);
    v47 = (unsigned int)*__errno_location();
    error(1, v47, v46);
    return sub_404500(1LL, v47, v48);
  }
  if ( byte_60E542 )
    goto LABEL_28;
  while ( 1 )
  {
    if ( pipe((int *)&fd) )
      goto LABEL_45;
    v9 = fork();
    v10 = v9;
    if ( v9 )
      break;
    v17 = 0LL;
    if ( qword_60E740 )
    {
      while ( !close(*(_DWORD *)(qword_60E750 + 4 * v17)) )
      {
        if ( qword_60E740 <= (unsigned __int64)++v17 )
          goto LABEL_16;
      }
      v33 = dcgettext(0LL, "closing prior pipe", 5);
      v34 = __errno_location();
      error(1, *v34, v33);
      goto LABEL_41;
    }
LABEL_16:
    v6 = (unsigned int)close(SHIDWORD(fd.st_dev));
    v18 = __errno_location();
    if ( (_DWORD)v6 )
      goto LABEL_44;
    if ( LODWORD(fd.st_dev) )
    {
      if ( dup2(fd.st_dev, 0) )
        goto LABEL_47;
      if ( close(fd.st_dev) )
      {
        v29 = dcgettext(0LL, "closing input pipe", 5);
        value = 1LL;
        error(1, *v18, v29);
LABEL_30:
        v30 = sub_406D70(4LL, value);
        v31 = dcgettext(0LL, "creating file %s\n", 5);
        __fprintf_chk(stdout, 1LL, v31, v30);
        goto LABEL_22;
      }
    }
    sigprocmask(2, &oset, 0LL);
    v6 = qword_60E760;
    v22 = (const char *)sub_405180(v8, &oset, v19, v20, v21);
    execl(v8, v22, "-c", v6, 0LL);
    v23 = dcgettext(0LL, "failed to run command: \"%s -c %s\"", 5);
    value = 1LL;
    error(1, *v18, v23, v8, v6);
LABEL_21:
    if ( byte_60E542 )
      goto LABEL_30;
LABEL_22:
    v24 = sub_405210(v6, 65, 438, a4, a5, a6, fd.st_dev);
    v15 = v24;
    if ( v24 < 0 )
      return v15;
    if ( __fxstat(1, v24, &fd) )
      goto LABEL_46;
    if ( stat_buf.st_ino == fd.st_ino && stat_buf.st_dev == fd.st_dev )
      goto LABEL_42;
    if ( !ftruncate(v15, 0LL) )
      return v15;
    v8 = (char *)sub_406E40(0LL, 3LL, v6);
    v25 = dcgettext(0LL, "%s: error truncating", 5);
    v26 = __errno_location();
    error(1, *v26, v25, v8);
LABEL_28:
    v27 = sub_406E40(0LL, 3LL, v6);
    v28 = dcgettext(0LL, "executing with FILE=%s\n", 5);
    v7 = 1LL;
    __fprintf_chk(stdout, 1LL, v28, v27);
  }
  if ( v9 == -1 )
    goto LABEL_43;
  st_dev_low = LODWORD(fd.st_dev);
  if ( close(fd.st_dev) )
  {
LABEL_41:
    v35 = dcgettext(0LL, "failed to close input pipe", 5);
    v36 = __errno_location();
    error(1, *v36, v35);
LABEL_42:
    v37 = sub_406D70(4LL, v6);
    v38 = dcgettext(0LL, "%s would overwrite input; aborting", 5);
    error(1, 0, v38, v37);
LABEL_43:
    v18 = (int *)dcgettext(0LL, "fork system call failed", 5);
    v39 = __errno_location();
    error(1, *v39, (const char *)v18);
LABEL_44:
    v40 = dcgettext(0LL, "closing output pipe", 5);
    error(1, *v18, v40);
LABEL_45:
    v41 = dcgettext(0LL, "failed to create pipe", 5);
    v42 = __errno_location();
    error(1, *v42, v41);
LABEL_46:
    v43 = sub_406D70(4LL, v6);
    v18 = (int *)dcgettext(0LL, "failed to stat %s", 5);
    v44 = __errno_location();
    error(1, *v44, (const char *)v18, v43);
LABEL_47:
    v45 = dcgettext(0LL, "moving input pipe", 5);
    error(1, *v18, v45);
    goto LABEL_48;
  }
  v12 = qword_60E740;
  v13 = qword_60E748;
  dword_60E758 = v10;
  v14 = qword_60E750;
  if ( qword_60E740 == qword_60E748 )
  {
    if ( qword_60E750 )
    {
      v32 = 0x1555555555555554LL;
      if ( (unsigned __int64)qword_60E748 <= 0x1555555555555554LL )
      {
        v13 = qword_60E748 + ((unsigned __int64)qword_60E748 >> 1) + 1;
        v7 = 4 * v13;
LABEL_34:
        qword_60E748 = v13;
        v14 = sub_4076F0(qword_60E750, v7);
        v12 = qword_60E740;
        qword_60E750 = v14;
        goto LABEL_11;
      }
    }
    else
    {
      if ( !qword_60E748 )
      {
        v7 = 128LL;
        v13 = 32LL;
        goto LABEL_34;
      }
      v32 = (unsigned __int64)qword_60E748 >> 62 != 0;
      v7 = 4 * qword_60E748;
      if ( (qword_60E748 & 0x2000000000000000LL) == 0 && !((unsigned __int64)qword_60E748 >> 62) )
        goto LABEL_34;
    }
    sub_4078E0(st_dev_low, v7, v32);
  }
LABEL_11:
  qword_60E740 = v12 + 1;
  *(_DWORD *)(v14 + 4 * v12) = HIDWORD(fd.st_dev);
  return HIDWORD(fd.st_dev);
}

__int64 __fastcall sub_404500(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  _QWORD *v6; // r13
  __int64 v7; // rbp
  int v8; // eax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v13; // r15
  __int64 v14; // rdi
  int v15; // eax
  int *v16; // r8
  __int64 v17; // rax
  int v18; // eax
  FILE *v19; // rax
  int v20; // eax
  const char *v21; // rax
  const char *v22; // rax
  const char *v23; // rax
  const char *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v28; // [rsp+0h] [rbp-48h]
  int *v29; // [rsp+8h] [rbp-40h]
  int *v30; // [rsp+8h] [rbp-40h]

  v6 = (_QWORD *)(a1 + 32 * a2);
  v7 = 0LL;
  v8 = *((_DWORD *)v6 + 2);
  if ( v8 >= 0 )
    return (unsigned int)v7;
  v10 = a2 - 1;
  v11 = a3 - 1;
  v13 = a2;
  if ( !a2 )
    v10 = a3 - 1;
  v14 = *v6;
  if ( v8 == -1 )
    goto LABEL_15;
LABEL_6:
  a2 = 3073LL;
  v15 = sub_405210(v14, 3073, a3, a4, a5, a6, v28);
  if ( v15 >= 0 )
  {
LABEL_16:
    *((_DWORD *)v6 + 2) = v15;
    v19 = fdopen(v15, "a");
    v6[2] = v19;
    if ( v19 )
    {
      v20 = dword_60E758;
      dword_60E758 = 0;
      *((_DWORD *)v6 + 6) = v20;
      return (unsigned int)v7;
    }
  }
  else
  {
    while ( 1 )
    {
      v16 = __errno_location();
      if ( (unsigned int)(*v16 - 23) > 1 )
        break;
      while ( 1 )
      {
        v7 = a1 + 32 * v10;
        if ( *(int *)(v7 + 8) >= 0 )
          break;
        v17 = v10 - 1;
        if ( !v10 )
          v17 = v11;
        v10 = v17;
        if ( v17 == v13 )
        {
          v30 = v16;
          v21 = (const char *)sub_406E40(0LL, 3LL, *v6);
          error(1, *v30, "%s", v21);
          goto LABEL_19;
        }
      }
      v29 = v16;
      if ( (unsigned int)sub_407E60(*(FILE **)(v7 + 16)) )
        goto LABEL_20;
      *(_DWORD *)(v7 + 8) = -2;
      v18 = *((_DWORD *)v6 + 2);
      *(_QWORD *)(v7 + 16) = 0LL;
      v14 = *v6;
      v7 = 1LL;
      if ( v18 != -1 )
        goto LABEL_6;
LABEL_15:
      v15 = sub_403FC0(v14, a2, a3, a4, a5, a6);
      if ( v15 >= 0 )
        goto LABEL_16;
    }
LABEL_19:
    v29 = v16;
    v22 = (const char *)sub_406E40(0LL, 3LL, *v6);
    error(1, *v29, "%s", v22);
LABEL_20:
    v23 = (const char *)sub_406E40(0LL, 3LL, *(_QWORD *)v7);
    error(1, *v29, "%s", v23);
  }
  v24 = (const char *)sub_406E40(0LL, 3LL, *v6);
  v25 = (unsigned int)*__errno_location();
  error(1, v25, "%s", v24);
  return sub_4046F0(1LL, v25, v26, v27);
}

void __fastcall sub_4046F0(FILE *a1, int a2, __pid_t a3, const char *a4)
{
  int *v6; // rax
  int *v7; // r13
  const char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  _DWORD *v12; // rcx
  int *v13; // rax
  int *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rbx
  char *v17; // rax
  int v18; // eax
  unsigned int v19; // ebp
  __int64 v20; // r12
  __int64 v21; // rbx
  char *v22; // rax
  char *v23; // rax
  char *v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // [rsp+Ch] [rbp-5Ch]
  int stat_loc; // [rsp+1Ch] [rbp-4Ch] BYREF
  char v28[72]; // [rsp+20h] [rbp-48h] BYREF

  if ( a1 )
  {
    if ( (unsigned int)sub_407E60(a1) )
    {
      v6 = __errno_location();
      v7 = v6;
      if ( !qword_60E760 || *v6 != 32 )
      {
        v8 = (const char *)sub_406E40(0LL, 3LL, a4);
        error(1, *v7, "%s", v8);
      }
    }
    if ( a2 < 0 )
      goto LABEL_12;
  }
  else
  {
    if ( a2 < 0 )
      goto LABEL_12;
    if ( close(a2) < 0 )
    {
      a4 = (const char *)sub_406E40(0LL, 3LL, a4);
      v13 = __errno_location();
      error(1, *v13, "%s", a4);
      goto LABEL_17;
    }
  }
  if ( qword_60E740 )
  {
    if ( a2 == *(_DWORD *)qword_60E750 )
    {
      v12 = (_DWORD *)qword_60E750;
      v10 = qword_60E740 - 1;
LABEL_23:
      v18 = *(_DWORD *)(qword_60E750 + 4 * v10);
      qword_60E740 = v10;
      *v12 = v18;
    }
    else
    {
      v9 = qword_60E750 + 4;
      v10 = qword_60E740 - 1;
      v11 = 0LL;
      while ( v10 != v11 )
      {
        v12 = (_DWORD *)v9;
        ++v11;
        v9 += 4LL;
        if ( *v12 == a2 )
          goto LABEL_23;
      }
    }
  }
LABEL_12:
  if ( a3 <= 0 )
    return;
LABEL_17:
  stat_loc = 0;
  if ( waitpid(a3, &stat_loc, 0) == -1 )
  {
    v14 = __errno_location();
    if ( *v14 != 10 )
    {
      v23 = dcgettext(0LL, "waiting for child process", 5);
      error(1, *v14, v23);
      goto LABEL_29;
    }
  }
  LODWORD(v14) = stat_loc & 0x7F;
  if ( __OFSUB__((_BYTE)v14 + 1, 1) || (_BYTE)v14 == 0 )
  {
    if ( (stat_loc & 0x7F) != 0 )
    {
      v26 = stat_loc;
      v24 = dcgettext(0LL, "unknown status from command (0x%X)", 5);
      error(1, 0, v24, v26);
      sub_4049A0(1LL, 0LL, v25);
    }
    else
    {
      v19 = BYTE1(stat_loc);
      if ( BYTE1(stat_loc) )
      {
        v20 = qword_60E760;
        v21 = sub_406E40(0LL, 3LL, a4);
        v22 = dcgettext(0LL, "with FILE=%s, exit %d from command: %s", 5);
        error(v19, 0, v22, v21, v19, v20);
      }
    }
  }
  else if ( (_DWORD)v14 != 13 )
  {
    if ( !(unsigned int)sub_409040(stat_loc & 0x7F, v28) )
    {
LABEL_21:
      v15 = qword_60E760;
      v16 = sub_406E40(0LL, 3LL, a4);
      v17 = dcgettext(0LL, "with FILE=%s, signal %s from command: %s", 5);
      error((_DWORD)v14 + 128, 0, v17, v16, v28, v15);
      return;
    }
LABEL_29:
    __sprintf_chk(v28, 1LL, 19LL, "%d", (unsigned int)v14);
    goto LABEL_21;
  }
}

__int64 __fastcall sub_4049A0(char a1, unsigned __int64 a2, size_t a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  int v11; // edi
  int *v12; // rbx
  __int64 result; // rax
  const char *v14; // rax
  const char *v15; // rbx
  int *v16; // rax

  if ( a1 )
  {
    if ( !(a3 | a2) && byte_60E541 )
      return 1LL;
    v5 = (unsigned int)dword_60E294;
    sub_4046F0(0LL, dword_60E294, dword_60E758, value);
    sub_403CC0(0LL, v5, v6);
    v11 = sub_403FC0((__int64)value, v5, v7, v8, v9, v10);
    dword_60E294 = v11;
    if ( v11 < 0 )
    {
      v15 = (const char *)sub_406E40(0LL, 3LL, value);
      v16 = __errno_location();
      error(1, *v16, "%s", v15);
      return sub_404AB0(1LL);
    }
  }
  else
  {
    v11 = dword_60E294;
  }
  if ( sub_4052D0(v11, (void *)a2, a3) == a3 )
    return 1LL;
  v12 = __errno_location();
  if ( !qword_60E760 || (result = 0LL, *v12 != 32) )
  {
    v14 = (const char *)sub_406E40(0LL, 3LL, value);
    error(1, *v12, "%s", v14);
    return 1LL;
  }
  return result;
}

void __fastcall sub_404AB0(unsigned __int64 offset, void *a2, size_t a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r12
  char v7; // bp
  unsigned __int8 v8; // bl
  size_t v9; // r13
  unsigned __int64 v10; // r9
  bool v11; // r11
  char v12; // al
  unsigned __int64 v13; // rax
  char v14; // al
  __off_t v15; // rax
  unsigned __int64 v16; // rbx
  const char *v17; // rbx
  int *v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned __int64 v20; // [rsp+8h] [rbp-60h]
  unsigned __int64 v21; // [rsp+8h] [rbp-60h]
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  unsigned __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned __int64 v24; // [rsp+10h] [rbp-58h]
  bool v25; // [rsp+1Eh] [rbp-4Ah]
  bool v26; // [rsp+1Fh] [rbp-49h]

  v5 = 0LL;
  v6 = offset;
  v7 = 1;
  v8 = 1;
  if ( a4 == -1LL )
    goto LABEL_11;
  v9 = a4;
  v26 = a4 < a3;
  if ( a4 < offset )
    goto LABEL_14;
LABEL_3:
  v10 = (unsigned __int64)a2;
  v11 = a5 == 0;
  do
  {
    v7 |= v8;
    if ( v7 )
    {
      v24 = a5;
      v25 = v11;
      v19 = v10;
      v12 = sub_4049A0(v8, v10, v6);
      a5 = v24;
      v11 = v25;
      v7 = v12;
      v10 = v19;
    }
    v5 += v8;
    v8 = v11 || v5 < a5;
    if ( !v8 && !v7 )
      return;
    v9 -= v6;
    v10 += v6;
    v6 = offset;
  }
  while ( offset <= v9 );
  if ( v9 )
    goto LABEL_19;
  while ( !v26 )
  {
LABEL_11:
    if ( !v7 )
    {
      v22 = a5;
      v15 = lseek(0, v6, 1);
      a5 = v22;
      if ( v15 != -1 )
      {
        v6 = offset;
        v8 = 1;
      }
    }
    v20 = a5;
    v13 = sub_406FE0(0, a2, a3);
    a5 = v20;
    v9 = v13;
    if ( v13 == -1LL )
    {
      v17 = (const char *)sub_406E40(0LL, 3LL, qword_60E5F0);
      v18 = __errno_location();
      error(1, *v18, "%s", v17);
      sub_404CF0(1);
    }
    v26 = v13 == 0;
    if ( v13 >= v6 )
      goto LABEL_3;
LABEL_14:
    if ( v9 )
    {
      if ( !(v8 | (unsigned __int8)v7) )
      {
        v7 = 0;
        v8 = a5 == v5;
        if ( a5 == v5 )
          return;
        goto LABEL_20;
      }
      v10 = (unsigned __int64)a2;
LABEL_19:
      v21 = a5;
      v14 = sub_4049A0(v8, v10, v9);
      a5 = v21;
      v7 = v14;
      v5 += v8;
      v8 = (v14 ^ 1) & (v21 == v5);
      if ( v8 )
        return;
LABEL_20:
      v6 -= v9;
    }
  }
  v16 = v5 + 1;
  if ( v5 < a5 )
  {
    while ( 1 )
    {
      v23 = a5;
      sub_4049A0(1, 0LL, 0LL);
      a5 = v23;
      if ( v23 == v16 )
        break;
      ++v16;
    }
  }
}

noreturn void __fastcall  sub_404CF0(int status)
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
  __int64 *v21; // rax
  const char *v22; // rbp
  char *v23; // rax
  char *v24; // rax
  char *v25; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  __int64 v31[17]; // [rsp+0h] [rbp-88h] BYREF

  v1 = qword_60E778;
  if ( status )
  {
    v2 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v2, v1);
    goto LABEL_3;
  }
  v3 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE [PREFIX]]\n", 5);
  __printf_chk(1LL, v3, v1);
  v4 = stdout;
  v5 = dcgettext(
         0LL,
         "Output pieces of FILE to PREFIXaa, PREFIXab, ...;\ndefault size is 1000 lines, and default PREFIX is 'x'.\n",
         5);
  fputs_unlocked(v5, v4);
  v6 = stdout;
  v7 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v7, v6);
  v8 = stdout;
  v9 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v9, v8);
  v10 = dcgettext(
          0LL,
          "  -a, --suffix-length=N   generate suffixes of length N (default %d)\n"
          "      --additional-suffix=SUFFIX  append an additional SUFFIX to file names\n"
          "  -b, --bytes=SIZE        put SIZE bytes per output file\n"
          "  -C, --line-bytes=SIZE   put at most SIZE bytes of records per output file\n"
          "  -d                      use numeric suffixes starting at 0, not alphabetic\n"
          "      --numeric-suffixes[=FROM]  same as -d, but allow setting the start value\n"
          "  -x                      use hex suffixes starting at 0, not alphabetic\n"
          "      --hex-suffixes[=FROM]  same as -x, but allow setting the start value\n"
          "  -e, --elide-empty-files  do not generate empty output files with '-n'\n"
          "      --filter=COMMAND    write to shell COMMAND; file name is $FILE\n"
          "  -l, --lines=NUMBER      put NUMBER lines/records per output file\n"
          "  -n, --number=CHUNKS     generate CHUNKS output files; see explanation below\n"
          "  -t, --separator=SEP     use SEP instead of newline as the record separator;\n"
          "                            '\\0' (zero) specifies the NUL character\n"
          "  -u, --unbuffered        immediately copy input to output with '-n r/...'\n",
          5);
  __fprintf_chk(stdout, 1LL, v10, 2LL);
  v11 = stdout;
  v12 = dcgettext(
          0LL,
          "      --verbose           print a diagnostic just before each\n"
          "                            output file is opened\n",
          5);
  fputs_unlocked(v12, v11);
  v13 = stdout;
  v14 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v14, v13);
  v15 = stdout;
  v16 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v16, v15);
  v17 = stdout;
  v18 = dcgettext(
          0LL,
          "\n"
          "The SIZE argument is an integer and optional unit (example: 10K is 10*1024).\n"
          "Units are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n",
          5);
  fputs_unlocked(v18, v17);
  v19 = stdout;
  v20 = dcgettext(
          0LL,
          "\n"
          "CHUNKS may be:\n"
          "  N       split into N files based on size of input\n"
          "  K/N     output Kth of N to stdout\n"
          "  l/N     split into N files without splitting lines/records\n"
          "  l/K/N   output Kth of N to stdout without splitting lines/records\n"
          "  r/N     like 'l' but use round robin distribution\n"
          "  r/K/N   likewise but only output Kth of N to stdout\n",
          5);
  fputs_unlocked(v20, v19);
  v31[0] = (__int64)"[";
  v21 = v31;
  v31[1] = (__int64)"test invocation";
  v31[2] = (__int64)"coreutils";
  v31[3] = (__int64)"Multi-call invocation";
  v31[4] = (__int64)"sha224sum";
  v31[5] = (__int64)"sha2 utilities";
  v31[6] = (__int64)"sha256sum";
  v31[7] = (__int64)"sha2 utilities";
  v31[8] = (__int64)"sha384sum";
  v31[9] = (__int64)"sha2 utilities";
  v31[10] = (__int64)"sha512sum";
  v31[11] = (__int64)"sha2 utilities";
  v31[12] = 0LL;
  v31[13] = 0LL;
  do
    v21 += 2;
  while ( *v21 && strcmp("split", (const char *)*v21) );
  v22 = (const char *)v21[1];
  if ( v22 )
  {
    v23 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v23, &unk_409B0F);
    v24 = setlocale(5, 0LL);
    if ( !v24 || !strncmp(v24, "en_", 3uLL) )
      goto LABEL_10;
  }
  else
  {
    v27 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v27, &unk_409B0F);
    v28 = setlocale(5, 0LL);
    if ( !v28 || !strncmp(v28, "en_", 3uLL) )
    {
      v22 = "split";
      v29 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v29, "https://www.gnu.org/software/coreutils/");
      goto LABEL_11;
    }
    v22 = "split";
  }
  v30 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v30, "split");
LABEL_10:
  v25 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v25, "https://www.gnu.org/software/coreutils/");
LABEL_11:
  v26 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v26, v22);
LABEL_3:
  exit(status);
}

__int64 sub_4050E0()
{
  int *v0; // rax
  int *v1; // rbx
  __int64 result; // rax
  char *v3; // rax
  const char *v4; // rbp
  const char *v5; // rax

  if ( (unsigned int)sub_409110(stdout) )
  {
    v0 = __errno_location();
    v1 = v0;
    if ( !byte_60E768 || *v0 != 32 )
    {
      v3 = dcgettext(0LL, "write error", 5);
      v4 = v3;
      if ( qword_60E770 )
      {
        v5 = (const char *)sub_406E10();
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
  result = sub_409110(stderr);
  if ( (_DWORD)result )
    goto LABEL_8;
  return result;
}

_BYTE *__fastcall sub_405180(_BYTE *a1)
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

size_t __fastcall sub_4051E0(const char *a1)
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

__int64 __fastcall sub_405210(const char *a1, char a2, unsigned int a3)
{
  __int64 v3; // rdx
  int v4; // eax

  v3 = 0LL;
  if ( (a2 & 0x40) != 0 )
    v3 = a3;
  v4 = open(a1, a2, v3);
  return sub_4070A0(v4);
}

__int64 __fastcall sub_405260(int fd2, char *file, int oflag, unsigned int a4)
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

__int64 __fastcall sub_4052D0(int fd, char *buf, size_t n)
{
  size_t v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax

  if ( !n )
    return 0LL;
  v4 = n;
  v5 = 0LL;
  do
  {
    v6 = sub_407040(fd, buf, v4);
    if ( v6 == -1 )
      break;
    if ( !v6 )
    {
      *__errno_location() = 28;
      return v5;
    }
    v5 += v6;
    buf += v6;
    v4 -= v6;
  }
  while ( v4 );
  return v5;
}

__int64 __fastcall sub_405350(unsigned __int64 a1, __int64 a2)
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

char *__fastcall sub_4053A0(const char *a1)
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
  qword_60E778 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405440(char *msgid, int a2)
{
  char *v2; // rbx
  _BYTE *v4; // rax
  bool v5; // zf
  const char *v6; // rbx

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return v2;
  v4 = (_BYTE *)sub_4091D0();
  if ( (*v4 & 0xDF) == 85 )
  {
    if ( (v4[1] & 0xDF) == 84 && (v4[2] & 0xDF) == 70 && v4[3] == 45 && v4[4] == 56 && !v4[5] )
    {
      v5 = *v2 == 96;
      v2 = (char *)&unk_40AD19;
      if ( !v5 )
        return (char *)&unk_40AD0E;
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
    v2 = (char *)&unk_40AD15;
    if ( !v5 )
      return (char *)&unk_40AD12;
    return v2;
  }
  v6 = "\"";
  if ( a2 != 9 )
    return "'";
  return (char *)v6;
}

unsigned __int64 __fastcall sub_405540(
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
                return sub_405540((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_405540((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_408D50((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_405540((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_405440("`", a5);
        v51 = sub_405440("'", a5);
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

unsigned __int64 __fastcall sub_405540(
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
                return sub_405540((int)v9, v83, a3, v16, 5, a6, a7, (__int64)a8, a9);
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
              return sub_405540((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        v25 = (const unsigned __int16 **)sub_408D50((wchar_t *)&wc, (char *)v44 + v17 + a3);
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
      return sub_405540((int)v9, v10, a3, v13, v30, a6 & 0xFFFFFFFD, 0LL, (__int64)a8, a9);
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
        a8 = sub_405440("`", a5);
        v51 = sub_405440("'", a5);
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

_BYTE *__fastcall sub_406770(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v8 = (__m128i *)off_60E2F8;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_60E310 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_4078E0(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_60E2F8 == &xmmword_60E300 )
    {
      v8 = (__m128i *)sub_4076F0(0LL, v10);
      off_60E2F8 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_60E300);
    }
    else
    {
      off_60E2F8 = (void *)sub_4076F0(off_60E2F8, v10);
      v8 = (__m128i *)off_60E2F8;
    }
    memset(&v8[dword_60E310], 0, 16LL * ((int)a1 + 1 - dword_60E310));
    dword_60E310 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_405540(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_60E780 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_407690(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_405540(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

_BYTE *__fastcall sub_406770(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
  v8 = (__m128i *)off_60E2F8;
  v9 = v6;
  v21 = *v6;
  if ( (int)a1 < 0 )
    abort();
  if ( dword_60E310 <= (int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_4078E0(a1, a2, v7);
    v10 = 16LL * ((int)a1 + 1);
    if ( off_60E2F8 == &xmmword_60E300 )
    {
      v8 = (__m128i *)sub_4076F0(0LL, v10);
      off_60E2F8 = v8;
      *v8 = _mm_load_si128((const __m128i *)&xmmword_60E300);
    }
    else
    {
      off_60E2F8 = (void *)sub_4076F0(off_60E2F8, v10);
      v8 = (__m128i *)off_60E2F8;
    }
    memset(&v8[dword_60E310], 0, 16LL * ((int)a1 + 1 - dword_60E310));
    dword_60E310 = a1 + 1;
  }
  v11 = (unsigned __int64 *)&v8[(int)a1];
  v12 = (_BYTE *)v11[1];
  v22 = *(_DWORD *)(a4 + 4) | 1;
  v19 = *v11;
  v13 = sub_405540(v12, *v11, a2, a3, *(_DWORD *)a4, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  if ( v19 <= v13 )
  {
    v14 = v13 + 1;
    *v11 = v13 + 1;
    if ( v12 != (_BYTE *)&unk_60E780 )
    {
      v20 = v13 + 1;
      free(v12);
      v14 = v20;
    }
    v15 = (_BYTE *)sub_407690(v14);
    v16 = *(_DWORD *)a4;
    v11[1] = (unsigned __int64)v15;
    v12 = v15;
    sub_405540(v15, v14, a2, a3, v16, v22, a4 + 8, *(char **)(a4 + 40), *(char **)(a4 + 48));
  }
  *v9 = v21;
  return v12;
}

__int64 __fastcall sub_406910(__int128 *a1)
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
    v1 = &xmmword_60E880;
  result = sub_407890(v1, 0x38uLL);
  *v4 = v3;
  return result;
}

unsigned __int64 __fastcall sub_406A00(_BYTE *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int128 *a5)
{
  __int128 *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  int *v9; // rbp
  unsigned __int64 result; // rax

  v6 = a5;
  if ( !a5 )
    v6 = &xmmword_60E880;
  v7 = __errno_location();
  v8 = *v7;
  v9 = v7;
  result = sub_405540(
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

_BYTE *__fastcall sub_406A80(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int128 *a4)
{
  __int128 *v5; // rbx
  int *v6; // r13
  int v7; // ebp
  int v9; // [rsp+Ch] [rbp-5Ch]
  _BYTE *v10; // [rsp+10h] [rbp-58h]
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v5 = a4;
  if ( !a4 )
    v5 = &xmmword_60E880;
  v6 = __errno_location();
  v7 = *((_DWORD *)v5 + 1) | (a3 == 0LL);
  v9 = *v6;
  v11 = sub_405540(0LL, 0LL, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  v10 = (_BYTE *)sub_407690(v11 + 1);
  sub_405540(v10, v11 + 1, a1, a2, *(_DWORD *)v5, v7, (__int64)v5 + 8, *((char **)v5 + 5), *((char **)v5 + 6));
  *v6 = v9;
  if ( a3 )
    *a3 = v11;
  return v10;
}

void sub_406B80()
{
  __int128 *v0; // r12
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi
  void *v4; // rdi

  v0 = (__int128 *)off_60E2F8;
  if ( dword_60E310 > 1 )
  {
    v1 = (void **)((char *)off_60E2F8 + 24);
    v2 = (void **)((char *)off_60E2F8 + 16 * (unsigned int)(dword_60E310 - 2) + 40);
    do
    {
      v3 = *v1;
      v1 += 2;
      free(v3);
    }
    while ( v1 != v2 );
  }
  v4 = (void *)*((_QWORD *)v0 + 1);
  if ( v4 != &unk_60E780 )
  {
    free(v4);
    *(_QWORD *)&xmmword_60E300 = 256LL;
    *((_QWORD *)&xmmword_60E300 + 1) = &unk_60E780;
  }
  if ( v0 != &xmmword_60E300 )
  {
    free(v0);
    off_60E2F8 = &xmmword_60E300;
  }
  dword_60E310 = 1;
}

_BYTE *__fastcall sub_406C90(__int64 a1, int a2, __int64 a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_406C90(__int64 a1, int a2, __int64 a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_406D00(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_406770(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_406D00(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
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
  return sub_406770(a1, a3, a4, (__int64)v5);
}

_BYTE *__fastcall sub_406D70(int a1, __int64 a2)
{
  return sub_406C90(0LL, a1, a2);
}

_BYTE *__fastcall sub_406D90(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  _DWORD *v3; // r8
  __int128 v5[3]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v6 = qword_60E8B0;
  v5[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E880);
  v5[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E890);
  v3 = (_DWORD *)v5 + (a3 >> 5) + 2;
  v5[2] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E8A0);
  *v3 ^= (((*v3 >> (a3 & 0x1F)) & 1) == 0) << (a3 & 0x1F);
  return sub_406770(0LL, a1, a2, (__int64)v5);
}

_BYTE *__fastcall sub_406E10(__int64 a1)
{
  return sub_406D90(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406E40(__int64 a1, int a2, __int64 a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_406E40(__int64 a1, int a2, __int64 a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)v4);
}

_BYTE *__fastcall sub_406EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int128 v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+20h] [rbp-28h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6[0] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E880);
  v6[1] = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E890);
  si128 = _mm_load_si128((const __m128i *)&xmmword_60E8A0);
  v8 = qword_60E8B0;
  LODWORD(v6[0]) = 10;
  if ( !a2 || !a3 )
    abort();
  si128.m128i_i64[1] = a2;
  v8 = a3;
  return sub_406770(a1, a4, a5, (__int64)v6);
}

_BYTE *__fastcall sub_406FC0(__int64 a1)
{
  return sub_406770(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E2C0);
}

ssize_t __fastcall sub_406FE0(int fd, void *buf, size_t nbytes)
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

ssize_t __fastcall sub_407040(int fd, void *buf, size_t n)
{
  ssize_t v4; // rbp
  int v5; // eax

  while ( 1 )
  {
    v4 = write(fd, buf, n);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( v5 != 22 || n <= 0x7FFFE000 )
        return v4;
      n = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_4070A0(unsigned int fd)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  int *v3; // rax
  int v4; // r13d
  int *v5; // rbp

  if ( fd > 2 )
    return fd;
  v2 = sub_409740();
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  close(fd);
  result = v2;
  *v5 = v4;
  return result;
}

__int64 __fastcall sub_4070F0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax

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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_4070F0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rbx
  char *v11; // rax
  const char *v13; // rsi
  __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  char *v17; // rax
  __int64 v18; // rbx
  char *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  char *v22; // rax

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
  switch ( a6 )
  {
    case 0LL:
      abort();
    case 1LL:
      v14 = *a5;
      v15 = dcgettext(0LL, "Written by %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v15, v14);
    case 2LL:
      v16 = *a5;
      v17 = dcgettext(0LL, "Written by %s and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v17, v16);
    case 3LL:
      v18 = *a5;
      v19 = dcgettext(0LL, "Written by %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v19, v18);
    case 4LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\nand %s.\n", 5);
      goto LABEL_13;
    case 5LL:
      v20 = a5[3];
      v21 = *a5;
      v22 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, and %s.\n", 5);
LABEL_13:
      __fprintf_chk(stream, 1LL, v22, v21);
      return v20;
    case 6LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 7LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, and %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 8LL:
      v10 = *a5;
      v11 = dcgettext(0LL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n", 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
    case 9LL:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
      v10 = *a5;
      goto LABEL_8;
    default:
      v13 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
      v10 = *a5;
LABEL_8:
      v11 = dcgettext(0LL, v13, 5);
      return __fprintf_chk(stream, 1LL, v11, v10);
  }
}

__int64 __fastcall sub_4074F0(FILE *a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
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
        return sub_4070F0(a1, a2, a3, a4, v12, i);
      continue;
    }
    v9 = (__int64 *)*((_QWORD *)a5 + 1);
    *((_QWORD *)a5 + 1) = v9 + 1;
    v10 = *v9;
    v12[i] = *v9;
    if ( !v10 )
      break;
  }
  return sub_4070F0(a1, a2, a3, a4, v12, i);
}

__int64 __fastcall sub_407550(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4070F0(a1, a2, a3, a4, v15, i);
      continue;
    }
    v12 = (__int64 *)v7;
    v7 += 8;
    v13 = *v12;
    v15[i] = v13;
    if ( !v13 )
      break;
  }
  return sub_4070F0(a1, a2, a3, a4, v15, i);
}

int sub_407610()
{
  char *v0; // rax
  char *v1; // rax
  FILE *v2; // rbx
  char *v3; // rax

  v0 = dcgettext(0LL, "\nReport bugs to: %s\n", 5);
  __printf_chk(1LL, v0, "bug-coreutils@gnu.org");
  v1 = dcgettext(0LL, "%s home page: <%s>\n", 5);
  __printf_chk(1LL, v1, &unk_409B0F);
  v2 = stdout;
  v3 = dcgettext(0LL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5);
  return fputs_unlocked(v3, v2);
}

void *__fastcall sub_407690(size_t a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rdx

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4078E0(a1, a2, v3);
  }
  return result;
}

// attributes: thunk
void *__fastcall sub_4076E0(size_t a1, __int64 a2)
{
  return sub_407690(a1, a2);
}

void *__fastcall sub_4076F0(void *a1, size_t a2)
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
        sub_4078E0(a1, a2, v3);
    }
  }
  return result;
}

void *__fastcall sub_407840(size_t n, __int64 a2)
{
  void *v2; // rax

  v2 = sub_407690(n, a2);
  return memset(v2, 0, n);
}

__int64 __fastcall sub_407860(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int128 v2; // rax

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), !is_mul_ok(a2, a1))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_4078E0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_407890(void *src, size_t n)
{
  void *v2; // rax

  v2 = sub_407690(n, n);
  return memcpy(v2, src, n);
}

void *__fastcall sub_4078C0(char *src)
{
  size_t v1; // rax

  v1 = strlen(src);
  return sub_407890(src, v1 + 1);
}

noreturn void  sub_4078E0()
{
  char *v0; // rax

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_407920(
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
  v11 = sub_407A20(a1);
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
  v14 = sub_406FC0((__int64)a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", a6, v14);
  return v19;
}

unsigned __int64 __fastcall sub_4079F0(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  return sub_407920(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_407A20(char *nptr, char **a2, unsigned int a3, __int64 *a4, const char *a5)
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

int __fastcall sub_407E60(FILE *stream)
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
  if ( !(unsigned int)sub_407EE0(stream) )
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

int __fastcall sub_407EE0(FILE *stream)
{
  if ( !stream || !__freading(stream) || (stream->_flags & 0x100) == 0 )
    return fflush(stream);
  sub_407F20(stream, 0LL, 1LL);
  return fflush(stream);
}

int __fastcall sub_407F20(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_407F80(__int64 a1, int *a2)
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

__int64 __fastcall sub_408060(
        int a1,
        __int64 *a2,
        const char *a3,
        char **a4,
        _DWORD *a5,
        int a6,
        int *a7,
        int a8,
        __int64 a9)
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
  __int64 v28; // rbp
  char *v29; // rax
  __int64 v30; // rbp
  char *v31; // rax
  FILE *v32; // rdi
  char **v33; // rbx
  _BYTE *v34; // rbp
  __int64 v35; // r12
  __int64 v36; // rbp
  char *v37; // rax
  char *s1; // [rsp+10h] [rbp-78h]
  char *s1a; // [rsp+10h] [rbp-78h]
  _BYTE *ptr; // [rsp+18h] [rbp-70h]
  int v45; // [rsp+38h] [rbp-50h]
  char v46; // [rsp+3Fh] [rbp-49h]
  int v48; // [rsp+44h] [rbp-44h]
  int v49; // [rsp+48h] [rbp-40h]

  v9 = (const char *)*((_QWORD *)a7 + 4);
  v10 = (char *)v9;
  v46 = *v9;
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
    if ( !a6 || *(_BYTE *)(a2[*a7] + 1) == 45 || (v18 = strchr(a3, v46), result = 0xFFFFFFFFLL, !v18) )
    {
      if ( a8 )
      {
        v24 = *a2;
        v25 = dcgettext(0LL, "%s: unrecognized option '%s%s'\n", 5);
        __fprintf_chk(stderr, 1LL, v25, v24);
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
  v48 = -1;
  v15 = s1;
  v16 = 0LL;
  v45 = 0;
  v49 = 0;
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
        && !v45 )
      {
        if ( a8 )
        {
          if ( ptr )
            goto LABEL_19;
          ptr = calloc((int)v13 + 1, 1uLL);
          if ( ptr )
          {
            v49 = 1;
            ptr[v48] = 1;
LABEL_19:
            ptr[v16] = 1;
            goto LABEL_20;
          }
          v45 = 1;
        }
        else
        {
          v45 = 1;
          if ( ptr )
            goto LABEL_19;
        }
      }
    }
    else
    {
      v48 = v16;
      v12 = v17;
    }
LABEL_20:
    v17 += 4;
    v15 = *v17;
    ++v16;
  }
  while ( *v17 );
  v10 = s1a;
  if ( ptr || v45 )
  {
    if ( a8 )
    {
      if ( v45 )
      {
        v26 = *a2;
        v27 = dcgettext(0LL, "%s: option '%s%s' is ambiguous\n", 5);
        __fprintf_chk(stderr, 1LL, v27, v26);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
      else
      {
        flockfile(stderr);
        v30 = *a2;
        v31 = dcgettext(0LL, "%s: option '%s%s' is ambiguous; possibilities:", 5);
        __fprintf_chk(stderr, 1LL, v31, v30);
        v32 = stderr;
        v33 = a4;
        v34 = ptr;
        v35 = (__int64)&ptr[v13 + 1];
        do
        {
          if ( *v34 )
          {
            __fprintf_chk(v32, 1LL, " '%s%s'", a9);
            v32 = stderr;
          }
          ++v34;
          v33 += 4;
        }
        while ( (_BYTE *)v35 != v34 );
        fputc(10, v32);
        funlockfile(stderr);
        v9 = (const char *)*((_QWORD *)a7 + 4);
      }
    }
    if ( v49 )
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
    LODWORD(v13) = v48;
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
        v28 = *a2;
        v29 = dcgettext(0LL, "%s: option '%s%s' doesn't allow an argument\n", 5);
        __fprintf_chk(stderr, 1LL, v29, v28);
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
          v36 = *a2;
          v37 = dcgettext(0LL, "%s: option '%s%s' requires an argument\n", 5);
          __fprintf_chk(stderr, 1LL, v37, v36);
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

__int64 __fastcall sub_408680(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int *a7, int a8)
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
        sub_407F80((__int64)a2, a7);
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
        sub_407F80((__int64)a2, a7);
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
            return (unsigned int)sub_408060(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"--");
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v17 + 2) || (v49 = a6, v31 = strchr(v12, v30), a6 = v49, !v31) )
            {
              *((_QWORD *)a7 + 4) = v17 + 1;
              v21 = sub_408060(a1, a2, v12, a4, a5, a6, a7, v8, (__int64)"-");
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
        return (unsigned int)sub_408060(a1, a2, v12, a4, a5, 0, a7, v8, (__int64)"-W ");
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
        __fprintf_chk(stderr, 1LL, v44, v43);
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
            __fprintf_chk(stderr, 1LL, v42, v41);
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
      __fprintf_chk(stderr, 1LL, v40, v39);
    }
    a7[2] = v21;
    return 63;
  }
  return v21;
}

__int64 __fastcall sub_408C50(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax

  dword_60E8C0 = dword_60E31C;
  dword_60E8C4 = dword_60E318;
  result = sub_408680(a1, a2, a3, a4, a5, a6, &dword_60E8C0, a7);
  dword_60E31C = dword_60E8C0;
  s1 = (char *)qword_60E8D0;
  dword_60E314 = dword_60E8C8;
  return result;
}

__int64 __fastcall sub_408CB0(int a1, __int64 *a2, const char *a3)
{
  return sub_408C50(a1, a2, a3, 0LL, 0LL, 0, 1);
}

__int64 __fastcall sub_408CD0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_408C50(a1, a2, a3, a4, a5, 0, 0);
}

__int64 __fastcall sub_408CF0(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408680(a1, a2, a3, a4, a5, 0, a6, 0);
}

__int64 __fastcall sub_408D10(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5)
{
  return sub_408C50(a1, a2, a3, a4, a5, 1, 0);
}

__int64 __fastcall sub_408D30(int a1, __int64 *a2, const char *a3, char **a4, _DWORD *a5, int *a6)
{
  return sub_408680(a1, a2, a3, a4, a5, 1, a6, 0);
}

size_t __fastcall sub_408D50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409170(0LL) )
  {
    v4 = 1LL;
    *v5 = *(unsigned __int8 *)v6;
  }
  return v4;
}

_BYTE *__fastcall sub_408DD0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

__int64 __fastcall sub_408EE0(char *s2, _DWORD *a2)
{
  const char *v2; // r13
  __int64 v5; // rbx
  __int64 v7; // rax
  int v8; // r13d
  int v9; // ebx
  char *endptr[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = nptr;
  v5 = 0LL;
  if ( (unsigned int)(*s2 - 48) > 9 )
  {
    do
    {
      if ( !strcmp(v2, s2) )
      {
        LODWORD(v7) = dword_60E320[3 * v5];
        goto LABEL_6;
      }
      v5 = (unsigned int)(v5 + 1);
      v2 += 12;
    }
    while ( (_DWORD)v5 != 35 );
    v8 = __libc_current_sigrtmin();
    v9 = __libc_current_sigrtmax();
    if ( v8 > 0 && !memcmp(s2, "RTMIN", 5uLL) )
    {
      v7 = strtol(s2 + 5, endptr, 10);
      if ( *endptr[0] || v7 < 0 || v7 > v9 - v8 )
        goto LABEL_9;
      LODWORD(v7) = v8 + v7;
    }
    else
    {
      if ( v9 <= 0 )
        goto LABEL_9;
      if ( memcmp(s2, "RTMAX", 5uLL) )
        goto LABEL_9;
      v7 = strtol(s2 + 5, endptr, 10);
      if ( *endptr[0] || v7 < v8 - v9 || v7 > 0 )
        goto LABEL_9;
      LODWORD(v7) = v9 + v7;
    }
LABEL_6:
    *a2 = v7;
    return (unsigned int)((int)v7 >> 31);
  }
  v7 = strtol(s2, endptr, 10);
  if ( !*endptr[0] && v7 <= 64 )
    goto LABEL_6;
LABEL_9:
  *a2 = -1;
  return 0xFFFFFFFFLL;
}

__int64 __fastcall sub_409040(int a1, char *a2)
{
  int *v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r12d
  int v6; // eax

  v2 = dword_60E320;
  v3 = 0LL;
  do
  {
    if ( *v2 == a1 )
    {
      strcpy(a2, &nptr[12 * v3]);
      return 0LL;
    }
    v3 = (unsigned int)(v3 + 1);
    v2 += 3;
  }
  while ( (_DWORD)v3 != 35 );
  v5 = __libc_current_sigrtmin();
  v6 = __libc_current_sigrtmax();
  if ( a1 < v5 || a1 > v6 )
    return 0xFFFFFFFFLL;
  if ( v5 + ((v6 - v5) >> 1) >= a1 )
  {
    strcpy(a2, "RTMIN");
  }
  else
  {
    strcpy(a2, "RTMAX");
    v5 = v6;
  }
  result = (unsigned int)(a1 - v5);
  if ( a1 != v5 )
  {
    __sprintf_chk(a2 + 5, 1LL, -1LL, "%+d", (unsigned int)result);
    return 0LL;
  }
  return result;
}

int __fastcall sub_409110(FILE *stream)
{
  size_t v1; // r12
  int v2; // ebx
  int result; // eax

  v1 = __fpending(stream);
  v2 = stream->_flags & 0x20;
  result = sub_407E60(stream);
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

bool __fastcall sub_409170(int a1)
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

const char *sub_4091D0()
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
  v1 = qword_60E8F8;
  v2 = v0;
  if ( !v0 )
    v2 = "";
  if ( !qword_60E8F8 )
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
          qword_60E8F8 = v1;
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
                sub_407E60(v60);
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
            sub_407E60(v39);
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

__int64 __fastcall sub_409740(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6, char a7)
{
  return sub_409750(a1, 0, 3, a4, a5, a6, a7);
}

__int64 __fastcall sub_409750(int a1, int a2, __int64 a3, int a4, int a5, int a6)
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
    if ( dword_60E900 < 0 )
    {
      v6 = sub_409750(a1, 0, a3, a4, a5, a6);
      if ( v6 >= 0 && dword_60E900 == -1 )
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
        v6 = sub_409750(a1, 0, v16, v13, v14, v15);
        if ( v6 >= 0 )
        {
          dword_60E900 = -1;
          goto LABEL_8;
        }
      }
      else
      {
        dword_60E900 = 1;
      }
    }
    return (unsigned int)v6;
  }
  return (unsigned int)fcntl(a1, a2, a3);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409900(void (__fastcall *a1)(void *))
{
  void *v1; // rdx

  v1 = 0LL;
  if ( &qword_60E288 )
    v1 = (void *)qword_60E288;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409918(__int64 a1, __int64 a2, __int64 a3)
{
  void (**i)(void); // rbx

  for ( i = (void (**)(void))&qword_60DE30; *i != (void (*)(void))-1LL; --i )
    (*i)();
  return a3;
}
