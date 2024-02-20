#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
__int64 __fastcall main(unsigned int a1, char **a2, char **a3)
{
  char *v3; // r15@1
  int *v4; // r13@1
  char *v5; // rbp@1
  char **v6; // rbx@1
  char **v7; // rsi@2
  signed int v8; // er14@2
  int v9; // eax@4
  __int64 v10; // rdx@4
  __int64 v11; // rcx@4
  __int64 v12; // r8@4
  char *v13; // r14@12
  int v14; // eax@12
  const char *v15; // rsi@14
  __int64 v16; // rdx@14
  __int64 v17; // rcx@14
  __int64 v18; // r8@14
  char *v19; // rax@23
  unsigned __int64 v20; // rax@23
  char *v21; // rax@27
  size_t v22; // rax@27
  char *v23; // rax@33
  unsigned __int64 v24; // rax@33
  char *v25; // rax@35
  __int64 v26; // rdx@35
  __int64 v27; // rcx@35
  __int64 v28; // r8@35
  char *v29; // rsi@40
  char *v30; // r14@41
  __int64 v31; // rdx@42
  __int64 v32; // rcx@42
  char *i; // rax@44
  char *v34; // rax@51
  unsigned __int64 v35; // rax@51
  char *v36; // rax@64
  size_t v37; // rax@64
  const unsigned __int16 *v38; // rcx@66
  char *j; // rax@66
  char *v40; // r14@68
  __int64 v41; // rdx@68
  bool v42; // cf@68
  bool v43; // zf@68
  const char *v44; // rdi@69
  signed __int64 v45; // rcx@69
  char *v46; // rsi@69
  char *v47; // r14@74
  char *v48; // rax@75
  unsigned __int64 v49; // rax@75
  char *v50; // rax@76
  unsigned __int64 v51; // rax@76
  unsigned __int64 v52; // r12@86
  signed __int64 v53; // rdi@89
  int v54; // eax@92
  signed __int64 v55; // rsi@93
  char *v56; // rcx@93
  char *v57; // rdx@94
  const char *v58; // rsi@96
  char *v59; // rbx@97
  sigset_t *v60; // rsi@99
  __blksize_t v61; // rax@101
  unsigned __int64 v62; // rbx@104
  signed __int64 v63; // rdi@104
  __int64 v64; // rax@104
  char *v65; // rax@110
  unsigned __int64 v66; // rax@110
  __int64 v67; // rdx@113
  unsigned __int64 v68; // r9@115
  unsigned __int64 v69; // rsi@116
  unsigned __int64 v70; // rcx@116
  __int64 v71; // rdi@116
  int v72; // eax@123
  unsigned __int64 v73; // rsi@123
  unsigned __int64 v74; // r9@124
  __off_t v75; // rbx@127
  unsigned __int64 v76; // rax@130
  __int64 v77; // rax@131
  unsigned __int64 v78; // r15@139
  char v79; // r12@139
  int *v80; // rbx@141
  signed __int64 v81; // rcx@141
  int *v82; // rax@142
  __int64 v83; // rdi@144
  __int64 v84; // rax@146
  char *v85; // rbx@148
  __int64 v86; // rdx@149
  _BYTE *v87; // r8@149
  __int64 v88; // rdi@153
  char *v89; // rsi@154
  char *v90; // r15@156
  char *v91; // rsi@159
  signed __int64 v92; // r12@159
  char *v93; // rax@164
  char *v94; // rsi@165
  char *v95; // rdi@165
  char v96; // dl@166
  unsigned __int64 v97; // r10@173
  unsigned __int64 v98; // rbx@174
  unsigned __int64 v99; // rax@176
  signed __int64 v100; // r11@176
  char *v101; // r10@180
  unsigned __int8 v102; // bl@180
  unsigned __int64 v103; // r8@182
  unsigned __int64 v104; // rax@184
  __int64 v105; // rax@188
  signed __int64 v106; // rcx@189
  char *v107; // rbp@193
  char v108; // bl@193
  unsigned __int8 v109; // al@196
  signed __int64 v110; // ST68_8@202
  unsigned __int64 v111; // ST48_8@202
  signed __int64 v112; // ST40_8@202
  char *v113; // rax@206
  char *v114; // rbx@206
  __int64 v115; // rax@207
  __int64 v116; // rax@209
  signed __int64 v117; // rax@215
  __int64 v118; // rax@218
  bool v119; // al@223
  char v120; // al@224
  char v121; // al@231
  int *v123; // rax@239
  __int64 v124; // rax@242
  char *v125; // rax@244
  int *v126; // rax@249
  __int64 v127; // rax@252
  int *v128; // rax@256
  __int64 v129; // rdi@259
  signed __int64 v130; // ST68_8@192
  unsigned __int64 v131; // ST48_8@192
  signed __int64 v132; // ST40_8@192
  unsigned __int64 v133; // rbx@271
  char *v134; // rbp@272
  unsigned __int64 v135; // r12@272
  __int64 v136; // rsi@273
  signed __int64 v137; // ST68_8@280
  signed __int64 v138; // rbx@280
  unsigned __int64 v139; // ST48_8@280
  __int64 v140; // rax@280
  char *v141; // rbx@281
  int *v142; // rax@281
  unsigned __int64 v143; // rsi@284
  signed __int64 v144; // rbx@284
  unsigned __int64 v145; // rax@288
  size_t v146; // rbp@292
  int *v147; // rax@295
  __int64 v148; // rax@297
  __off_t v149; // rax@300
  __off_t v150; // r14@301
  unsigned __int64 v151; // rbp@301
  __off_t v152; // rbx@302
  __off_t v153; // rax@304
  char *v154; // rax@311
  char *v155; // rbx@311
  int *v156; // rax@311
  __off_t v157; // rsi@313
  __off_t v158; // rax@313
  __int64 v159; // rax@314
  __int64 v160; // rbx@314
  int *v161; // rax@314
  __int64 v162; // rax@317
  __int64 v163; // rbx@317
  int *v164; // rax@317
  char **v165; // rax@319
  char *v166; // rax@322
  unsigned __int64 v167; // r12@326
  __int64 v168; // rax@331
  unsigned int v169; // ST20_4@332
  __int64 v170; // rax@332
  __int64 v171; // rbx@332
  char *v172; // rax@332
  __int64 v173; // rax@334
  int v174; // edx@334
  const char *v175; // rsi@334
  __int64 v176; // rbx@334
  char *v177; // rax@335
  __int64 v178; // rax@338
  __int64 v179; // rdx@338
  __int64 v180; // rcx@338
  __int64 v181; // r8@338
  __int64 v182; // rax@338
  char *v183; // rax@338
  char *v184; // rax@341
  __int64 v185; // rax@342
  __int64 v186; // rbx@342
  char *v187; // rax@342
  __int64 v188; // rax@343
  __int64 v189; // rax@344
  __int64 v190; // rbx@344
  int *v191; // rax@344
  __int64 v192; // rax@345
  __int64 v193; // rbp@345
  char *v194; // rbx@345
  int *v195; // rax@345
  int *v196; // rax@346
  __int64 v197; // rax@348
  __int64 v198; // rbx@348
  int *v199; // rax@348
  char *v200; // rax@357
  __int64 v201; // rax@358
  __int64 v202; // rax@359
  __int64 v203; // rbx@359
  char *v204; // rax@359
  char *v205; // rax@361
  __int64 v206; // rax@362
  __int64 v207; // rbx@362
  int *v208; // rax@362
  __int64 v209; // rax@363
  __int64 v210; // rbx@363
  int *v211; // rax@363
  char *v212; // rax@364
  int *v213; // rax@364
  unsigned __int64 offset; // [sp+8h] [bp-140h]@1
  unsigned __int64 v215; // [sp+10h] [bp-138h]@1
  __int64 v216; // [sp+10h] [bp-138h]@140
  char *v217; // [sp+10h] [bp-138h]@145
  char *ptr; // [sp+18h] [bp-130h]@0
  unsigned __int64 v219; // [sp+20h] [bp-128h]@0
  unsigned __int64 v220; // [sp+20h] [bp-128h]@186
  size_t nbytes; // [sp+28h] [bp-120h]@1
  int *v222; // [sp+30h] [bp-118h]@0
  char *v223; // [sp+30h] [bp-118h]@186
  signed __int64 v224; // [sp+38h] [bp-110h]@186
  char v225; // [sp+38h] [bp-110h]@208
  _BYTE *v226; // [sp+38h] [bp-110h]@243
  char *v227; // [sp+40h] [bp-108h]@0
  unsigned __int64 v228; // [sp+48h] [bp-100h]@1
  char *s; // [sp+50h] [bp-F8h]@0
  char v230; // [sp+58h] [bp-F0h]@208
  unsigned __int64 v231; // [sp+60h] [bp-E8h]@182
  char v232; // [sp+6Eh] [bp-DAh]@189
  unsigned __int8 v233; // [sp+6Fh] [bp-D9h]@0
  unsigned __int64 v234; // [sp+70h] [bp-D8h]@106

  v3 = 0LL;
  v4 = 0LL;
  v5 = (char *)a1;
  v6 = a2;
  v215 = getpagesize();
  sub_4053A0(*a2);
  setlocale(6, "");
  bindtextdomain(
    "coreutils",
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  textdomain("coreutils");
  sub_409900(
    sub_4050E0,
    "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
  qword_60E5F0 = "-";
  src = "x";
  offset = 0LL;
  v228 = 0LL;
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
            sub_407550((char)stdout);
            exit(0);
          }
          if ( v9 == -130 )
            sub_404CF0(0);
          goto LABEL_323;
        }
        if ( !(_DWORD)v4 )
          goto LABEL_368;
        if ( (_DWORD)v4 != 4 )
          goto LABEL_333;
        if ( !(_DWORD)v3 || (_DWORD)v3 == v8 )
        {
          if ( offset > 0x1999999999999999LL || (v67 = v9 - 48, v67 + 10 * offset < offset) )
          {
LABEL_332:
            v169 = v12;
            LODWORD(v170) = sub_405350(offset, &v234);
            v171 = v170;
            v172 = dcgettext(0LL, "line count option -%s%c... is too large", 5);
            error(1, 0, v172, v171, v169);
LABEL_333:
            v58 = "cannot split in more than one way";
LABEL_322:
            v166 = dcgettext(0LL, v58, 5);
            error(0, 0, v166);
LABEL_323:
            sub_404CF0(1);
          }
          offset = v67 + 10 * offset;
          v3 = (char *)(unsigned int)v8;
        }
        else
        {
LABEL_368:
          v3 = (char *)(unsigned int)v8;
          v4 = (int *)4;
          offset = v9 - 48;
        }
      }
      else if ( v9 == 97 )
      {
        v36 = dcgettext(0LL, "invalid suffix length", 5);
        LODWORD(v37) = sub_4079F0(s1, 0LL, 0x1FFFFFFFFFFFFFFFLL, "", v36, 0LL);
        qword_60E608 = v37;
      }
      else if ( v9 <= 97 )
      {
        if ( v9 != 67 )
          goto LABEL_323;
        if ( (_DWORD)v4 )
          goto LABEL_333;
        v4 = (int *)2;
        v34 = dcgettext(0LL, "invalid number of bytes", 5);
        LODWORD(v35) = sub_4079F0(s1, 1LL, 0x7FFFFFFFFFFFFFFFLL, "bEGKkMmPTYZ0", v34, 0LL);
        offset = v35;
      }
      else
      {
        if ( v9 != 98 )
        {
          if ( v9 != 100 )
            goto LABEL_323;
          v29 = "0123456789";
          goto LABEL_41;
        }
        if ( (_DWORD)v4 )
          goto LABEL_333;
        v4 = (int *)1;
        v23 = dcgettext(0LL, "invalid number of bytes", 5);
        LODWORD(v24) = sub_4079F0(s1, 1LL, 0x7FFFFFFFFFFFFFFFLL, "bEGKkMmPTYZ0", v23, 0LL);
        offset = v24;
      }
    }
    else if ( v9 == 120 )
    {
      v29 = "0123456789abcdef";
LABEL_41:
      v30 = s1;
      LODWORD(ptr) = v9;
      off_60E298 = v29;
      if ( s1 )
      {
        v219 = strlen(s1);
        if ( v219 != strspn(s1, v29) )
        {
          LODWORD(v173) = sub_406FC0(v30, v29, v31, v32, (unsigned int)ptr);
          v174 = 5;
          v175 = "%s: invalid start value for hexadecimal suffix";
          v176 = v173;
          if ( (_DWORD)ptr == 100 )
            goto LABEL_339;
          goto LABEL_335;
        }
        if ( *v30 == 48 )
        {
          for ( i = v30 + 1; *i; ++i )
          {
            s1 = i;
            v30 = i;
            if ( *i != 48 )
              break;
          }
        }
        nptr = v30;
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
          goto LABEL_323;
        byte_60E542 = 1;
      }
      else if ( v9 == 130 )
      {
        v21 = dcgettext(0LL, "invalid IO block size", 5);
        LODWORD(v22) = sub_4079F0(s1, 1LL, ~v215, "bEGKkMmPTYZ0", v21, 0LL);
        nbytes = v22;
      }
      else
      {
        if ( v9 != 131 )
          goto LABEL_323;
        v13 = s1;
        LODWORD(v25) = sub_405180(s1, v6, v10, v11, 131LL);
        if ( v13 != v25 )
          goto LABEL_343;
        qword_60E5F8 = v13;
      }
    }
    else if ( v9 == 110 )
    {
      if ( (_DWORD)v4 )
        goto LABEL_333;
      v38 = *__ctype_b_loc();
      for ( j = s1; ; s1 = j )
      {
        v40 = j++;
        v41 = (unsigned __int8)*v40;
        v42 = 0;
        v43 = (HIBYTE(v38[v41]) & 0x20) == 0;
        if ( !(HIBYTE(v38[v41]) & 0x20) )
          break;
      }
      v44 = "r/";
      v45 = 2LL;
      v46 = v40;
      do
      {
        if ( !v45 )
          break;
        v42 = (unsigned __int8)*v46 < *v44;
        v43 = *v46++ == *v44++;
        --v45;
      }
      while ( v43 );
      if ( (!v42 && !v43) == v42 )
      {
        v4 = (int *)7;
        s1 = v40 + 2;
      }
      else
      {
        v4 = (int *)5;
        if ( !strncmp(v40, "l/", 2uLL) )
        {
          v4 = (int *)6;
          s1 = v40 + 2;
        }
      }
      v47 = strchr(s1, 47);
      if ( v47 )
      {
        v48 = dcgettext(0LL, "invalid number of chunks", 5);
        LODWORD(v49) = sub_4079F0(v47 + 1, 1LL, -1LL, "", v48, 0LL);
        offset = v49;
        if ( v47 != s1 )
        {
          *v47 = 0;
          v50 = dcgettext(0LL, "invalid chunk number", 5);
          LODWORD(v51) = sub_4079F0(s1, 1LL, offset, "", v50, 0LL);
          v228 = v51;
        }
      }
      else
      {
        v65 = dcgettext(0LL, "invalid number of chunks", 5);
        LODWORD(v66) = sub_4079F0(s1, 1LL, -1LL, "", v65, 0LL);
        offset = v66;
      }
    }
    else if ( v9 <= 110 )
    {
      if ( v9 != 108 )
        goto LABEL_323;
      if ( (_DWORD)v4 )
        goto LABEL_333;
      v4 = (int *)3;
      v19 = dcgettext(0LL, "invalid number of lines", 5);
      LODWORD(v20) = sub_4079F0(s1, 1LL, -1LL, "", v19, 0LL);
      offset = v20;
    }
    else if ( v9 == 116 )
    {
      v13 = s1;
      v14 = *s1;
      if ( !*s1 )
      {
        v205 = dcgettext(0LL, "empty record separator", 5);
        error(1, 0, v205);
LABEL_362:
        LODWORD(v206) = sub_406E40(0LL, 3LL, qword_60E5F0);
        v207 = v206;
        v208 = __errno_location();
        error(1, *v208, "%s", v207);
LABEL_363:
        LODWORD(v209) = sub_406E40(0LL, 3LL, qword_60E5F0);
        v210 = v209;
        v211 = __errno_location();
        error(1, *v211, "%s", v210);
        goto LABEL_364;
      }
      if ( s1[1] )
      {
        v15 = "\\0";
        if ( strcmp(s1, "\\0") )
          goto LABEL_342;
        v14 = 0;
      }
      if ( c >= 0 && c != v14 )
      {
        v184 = dcgettext(0LL, "multiple separator characters specified", 5);
        v15 = 0LL;
        error(1, 0, v184);
LABEL_342:
        LODWORD(v185) = sub_406FC0(v13, v15, v16, v17, v18);
        v186 = v185;
        v187 = dcgettext(0LL, "multi-character separator %s", 5);
        v7 = 0LL;
        error(1, 0, v187, v186);
LABEL_343:
        LODWORD(v188) = sub_406FC0(v13, v7, v26, v27, v28);
        v175 = "invalid suffix %s, contains directory separator";
        v176 = v188;
LABEL_335:
        v177 = dcgettext(0LL, v175, 5);
        goto LABEL_336;
      }
      c = v14;
    }
    else
    {
      if ( v9 != 117 )
        goto LABEL_323;
      byte_60E540 = 1;
    }
  }
  if ( v228 && qword_60E760 )
  {
    v58 = "--filter does not process a chunk extracted to stdout";
    goto LABEL_322;
  }
  if ( (_DWORD)v4 )
  {
    if ( !offset )
    {
      LODWORD(v202) = sub_406FC0("0", v6, v10, v11, (unsigned int)v9);
      v203 = v202;
      v204 = dcgettext(0LL, "invalid number of lines", 5);
      error(0, 0, "%s: %s", v204, v203);
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
  v52 = (unsigned int)((_DWORD)v4 - 5);
  if ( nptr )
  {
    byte_60E2A0 = 0;
    if ( (unsigned int)v52 > 2 )
      goto LABEL_88;
    v72 = sub_407A20(nptr);
    v73 = offset;
    v68 = offset;
    if ( !v72 )
    {
      v74 = v234;
      if ( ~offset >= v234 && v234 < offset )
LABEL_320:
        v68 = v73 + v74;
      else
        v68 = offset;
    }
LABEL_116:
    v69 = strlen(off_60E298);
    v70 = v68 / v69;
    LOBYTE(v12) = v68 % v69 != 0;
    v71 = 0LL;
    if ( v69 <= v68 )
    {
      while ( 1 )
      {
        ++v71;
        if ( v69 > v70 )
          break;
        v70 /= v69;
      }
    }
    v12 = (unsigned __int8)v12;
    byte_60E2A0 = 0;
    v13 = (char *)((unsigned __int8)v12 + v71);
    if ( qword_60E608 )
    {
      if ( (unsigned __int64)v13 <= qword_60E608 )
        goto LABEL_122;
      v200 = dcgettext(0LL, "the suffix length needs to be at least %lu", 5);
      v55 = 0LL;
      error(1, 0, v200, v13);
LABEL_358:
      LODWORD(v201) = sub_406FC0(v6[v55 + 2], v55 * 8, v57, v56, v12);
      v175 = "extra operand %s";
      v176 = v201;
      goto LABEL_335;
    }
LABEL_89:
    v53 = 2LL;
    if ( (unsigned __int64)v13 >= 2 )
      v53 = (signed __int64)v13;
    qword_60E608 = v53;
  }
  else
  {
    v68 = offset;
    if ( (unsigned int)v52 <= 2 )
      goto LABEL_116;
LABEL_88:
    v13 = 0LL;
    if ( !qword_60E608 )
      goto LABEL_89;
LABEL_122:
    byte_60E2A0 = 0;
  }
  v54 = dword_60E31C;
  if ( dword_60E31C < (signed int)v5 )
  {
    v55 = dword_60E31C;
    v56 = v6[dword_60E31C++];
    qword_60E5F0 = v56;
    if ( v54 + 1 < (signed int)v5 )
    {
      v57 = v6[v55 + 1];
      dword_60E31C = v54 + 2;
      src = v57;
      if ( v54 + 2 < (signed int)v5 )
        goto LABEL_358;
    }
  }
  if ( nptr )
  {
    v58 = "numerical suffix start value is too large for the suffix length";
    if ( strlen(nptr) > qword_60E608 )
      goto LABEL_322;
  }
  v59 = qword_60E5F0;
  if ( strcmp(qword_60E5F0, "-") && (signed int)sub_405260(0, v59, 0) < 0 )
    goto LABEL_345;
  v60 = 0LL;
  if ( __fxstat(1, 0, &stat_buf) )
  {
    LODWORD(v189) = sub_406E40(0LL, 3LL, qword_60E5F0);
    v190 = v189;
    v191 = __errno_location();
    error(1, *v191, "%s", v190);
LABEL_345:
    LODWORD(v192) = sub_406D70(4LL, qword_60E5F0);
    v193 = v192;
    v194 = dcgettext(0LL, "cannot open %s for reading", 5);
    v195 = __errno_location();
    error(1, *v195, v194, v193);
    goto LABEL_346;
  }
  if ( !nbytes )
  {
    v61 = 0x20000LL;
    if ( (unsigned __int64)(stat_buf.st_blksize - 0x20000) <= 0x1FFFFFFFFFFE0000LL )
      v61 = stat_buf.st_blksize;
    nbytes = v61;
  }
  v62 = v215;
  v5 = (char *)-1;
  v63 = v215 + nbytes;
  LODWORD(v64) = sub_407690(v215 + nbytes, 0LL);
  v215 = 0x7FFFFFFFFFFFFFFFLL;
  s = (char *)(v64 + v62 - 1 - (v64 + v62 - 1) % v62);
  if ( (unsigned int)v52 <= 1 )
  {
    v52 = 0LL;
    v75 = lseek(0, 0LL, 1);
    if ( v75 >= 0 )
    {
      v13 = s;
      while ( 1 )
      {
        v63 = 0LL;
        v60 = (sigset_t *)&s[v52];
        v77 = sub_406FE0(0, &s[v52], nbytes - v52);
        if ( !v77 )
          goto LABEL_132;
        if ( v77 == -1 )
          goto LABEL_311;
        v76 = v52 + v77;
        v52 = v76;
        if ( nbytes <= v76 )
          goto LABEL_301;
      }
    }
LABEL_346:
    v196 = __errno_location();
    if ( *v196 == 29 )
      *v196 = 0;
    goto LABEL_311;
  }
LABEL_105:
  if ( qword_60E760 )
  {
    sigemptyset(&set);
    sigaction(13, 0LL, (struct sigaction *)&v234);
    if ( v234 != 1 )
      sigaddset(&set, 13);
    v60 = &set;
    v63 = 0LL;
    sigprocmask(0, &set, &oset);
  }
  v4 = (int *)(unsigned int)((_DWORD)v4 - 2);
  switch ( (_DWORD)v4 )
  {
    case 1:
    case 2:
      v78 = offset;
      v13 = 0LL;
      v79 = 1;
      while ( 1 )
      {
        v216 = sub_406FE0(0, s, nbytes);
        if ( v216 == -1 )
          goto LABEL_362;
        v5 = (char *)(unsigned int)c;
        v80 = (int *)&s[v216];
        v4 = (int *)s;
        v81 = (signed __int64)s;
        s[v216] = c;
        while ( 1 )
        {
          LODWORD(v82) = sub_408DD0(v81, (unsigned int)v5, (char *)v80 + -v81 + 1);
          if ( v80 == v82 )
            break;
          ++v13;
          v81 = (signed __int64)v82 + 1;
          if ( (unsigned __int64)v13 >= v78 )
          {
            v83 = (unsigned __int8)v79;
            offset = (unsigned __int64)v82 + 1;
            v13 = 0LL;
            v79 = 1;
            sub_4049A0(v83, v4, v81 - (_QWORD)v4);
            v81 = offset;
            v5 = (char *)(unsigned int)c;
            v4 = (int *)offset;
          }
        }
        if ( v80 != v4 )
        {
          v129 = (unsigned __int8)v79;
          v79 = 0;
          sub_4049A0(v129, v4, (char *)v80 - (char *)v4);
        }
        if ( !v216 )
          goto LABEL_234;
      }
    case 0:
      LOBYTE(v217) = 0;
      v52 = 0LL;
      v4 = 0LL;
      v219 = 0LL;
      ptr = 0LL;
      goto LABEL_146;
    case 4:
      if ( v228 > offset || v215 < offset )
        __assert_fail("n && k <= n && n <= file_size", "src/split.c", 0x361u, "lines_chunk_split");
      v97 = v215 / offset;
      if ( v228 <= 1 )
        goto LABEL_312;
      v52 = v228 - 1;
      v219 = v215 / offset;
      v98 = (v228 - 1) * v97 - 1;
      v4 = (int *)v98;
      if ( (unsigned __int64)v5 > v98 )
      {
        v5 -= v98;
        memmove(s, &s[v98], (size_t)v5);
        ptr = (char *)v98;
        v97 = v215 / offset;
        goto LABEL_176;
      }
      v157 = v98 - (_QWORD)v5;
      v5 = (char *)-1;
      v158 = lseek(0, v157, 1);
      ptr = (char *)v98;
      v97 = v215 / offset;
      if ( v158 < 0 )
      {
        LODWORD(v159) = sub_406E40(0LL, 3LL, qword_60E5F0);
        v160 = v159;
        v161 = __errno_location();
        error(1, *v161, "%s", v160);
        goto LABEL_315;
      }
LABEL_176:
      v233 = 0;
      v13 = (char *)v228;
      LOBYTE(v219) = 1;
      v3 = (char *)v97;
      v99 = (unsigned __int64)v5;
      v100 = v215 - 1;
LABEL_177:
      if ( (signed __int64)v215 <= (signed __int64)ptr )
        goto LABEL_326;
      if ( v99 == -1LL )
        goto LABEL_318;
LABEL_179:
      if ( v99 )
      {
        v233 = 0;
        v101 = v3;
        v5 = s;
        v102 = v219;
        if ( v215 - (unsigned __int64)ptr <= v99 )
          v99 = v215 - (_QWORD)ptr;
        v103 = offset;
        v231 = v99;
        v3 = &s[v99];
        while ( 1 )
        {
          v99 = -1LL;
          if ( v3 == v5 )
          {
            LOBYTE(v219) = v102;
            v3 = v101;
            goto LABEL_177;
          }
          v104 = (char *)v4 - ptr;
          if ( (char *)v4 - ptr < 0 )
            v104 = 0LL;
          v224 = v100;
          v223 = v101;
          v220 = v103;
          if ( v104 > v231 )
            v104 = v231;
          LODWORD(v105) = sub_408DD0(&v5[v104], (unsigned int)c, v231 - v104);
          v103 = v220;
          v101 = v223;
          v100 = v224;
          if ( v105 )
          {
            v232 = 1;
            v106 = v105 + 1;
          }
          else
          {
            v106 = (signed __int64)v3;
            v232 = 0;
          }
          v219 = v106 - (_QWORD)v5;
          if ( (char *)v52 == v13 )
          {
            v137 = v224;
            v227 = v223;
            v138 = v106 - (_QWORD)v5;
            v139 = v103;
            v222 = (int *)v106;
            v140 = sub_4052D0(1, v5, v106 - (_QWORD)v5);
            v106 = (signed __int64)v222;
            v103 = v139;
            v101 = v227;
            v100 = v137;
            if ( v138 != v140 )
            {
              v141 = dcgettext(0LL, "write error", 5);
              v142 = __errno_location();
              error(1, *v142, "%s", v141);
LABEL_282:
              if ( v228 > offset || v215 < offset )
                goto LABEL_349;
              v143 = v215 / offset * (v228 - 1);
              v144 = v215 / offset * (v228 - 1);
              if ( v228 != offset )
                v215 = v228 * (v215 / offset);
              if ( (unsigned __int64)v5 > v143 )
              {
                v5 -= v143;
                memmove(s, &s[v143], (size_t)v5);
LABEL_288:
                v4 = (int *)nbytes;
                v145 = (unsigned __int64)v5;
                v3 = s;
                while ( 1 )
                {
                  if ( (signed __int64)v215 <= v144 )
                    goto LABEL_234;
                  if ( v145 == -1LL )
                  {
                    v145 = sub_406FE0(0, s, (size_t)v4);
                    if ( v145 == -1LL )
                      break;
                  }
                  if ( !v145 )
                    goto LABEL_234;
                  v146 = v215 - v144;
                  if ( v215 - v144 > v145 )
                    v146 = v145;
                  if ( v146 != sub_4052D0(1, s, v146) )
                  {
                    v147 = __errno_location();
                    if ( !qword_60E760 || *v147 != 32 )
                    {
                      v4 = v147;
                      LODWORD(v148) = sub_406E40(0LL, 3LL, "-");
                      error(1, *v4, "%s", v148);
                    }
                  }
                  v144 += v146;
                  v145 = -1LL;
                }
                LODWORD(v149) = sub_406E40(0LL, 3LL, qword_60E5F0);
                v75 = v149;
                v63 = 1LL;
                v60 = (sigset_t *)(unsigned int)*__errno_location();
                error(1, (int)v60, "%s", v75);
LABEL_301:
                v150 = stat_buf.st_size;
                v151 = v76;
                if ( !stat_buf.st_size )
                  goto LABEL_310;
                v152 = v76 + v75;
                if ( (stat_buf.st_mode & 0xD000) == 0x8000 && stat_buf.st_size >= v152 )
                  goto LABEL_309;
                v60 = 0LL;
                v63 = 0LL;
                v153 = lseek(0, 0LL, 2);
                v150 = v153;
                if ( v153 >= 0 )
                {
                  if ( v152 == v153 )
                    goto LABEL_309;
                  v63 = 0LL;
                  v60 = (sigset_t *)v152;
                  if ( lseek(0, v152, 0) >= 0 )
                  {
                    if ( v150 < v152 )
                      v150 = v152;
LABEL_309:
                    v13 = (char *)(v150 - v152);
                    v52 = (unsigned __int64)&v13[v151];
                    if ( &v13[v151] == (char *)0xFFFFFFFF )
                    {
LABEL_310:
                      *__errno_location() = 75;
                      goto LABEL_311;
                    }
LABEL_132:
                    if ( (v52 & 0x8000000000000000LL) == 0LL )
                    {
                      v5 = (char *)nbytes;
                      if ( v52 <= nbytes )
                        v5 = (char *)v52;
                      if ( (offset & 0x8000000000000000LL) == 0LL )
                      {
                        if ( v52 < offset )
                          v52 = offset;
                        v215 = v52;
                        goto LABEL_105;
                      }
                      LODWORD(v178) = sub_405350(offset, &v234);
                      LODWORD(v182) = sub_406FC0(v178, &v234, v179, v180, v181);
                      v176 = v182;
                      v183 = dcgettext(0LL, "invalid number of chunks", 5);
                      error(1, 75, "%s: %s", v183, v176);
LABEL_339:
                      v177 = dcgettext(0LL, "%s: invalid start value for numerical suffix", v174);
LABEL_336:
                      error(0, 0, v177, v176);
                      sub_404CF0(1);
                    }
                  }
                }
LABEL_311:
                LODWORD(v154) = sub_406E40(0LL, 3LL, qword_60E5F0);
                v5 = v154;
                v155 = dcgettext(0LL, "%s: cannot determine file size", 5);
                v156 = __errno_location();
                error(1, *v156, v155, v5);
LABEL_312:
                v4 = (int *)(v97 - 1);
                v52 = 1LL;
                ptr = 0LL;
                goto LABEL_176;
              }
              v5 = (char *)-1;
              if ( lseek(0, v143, 1) >= 0 )
                goto LABEL_288;
              LODWORD(v162) = sub_406E40(0LL, 3LL, qword_60E5F0);
              v163 = v162;
              v164 = __errno_location();
              error(1, *v164, "%s", v163);
LABEL_318:
              v222 = (int *)v100;
              v99 = sub_406FE0(0, s, nbytes);
              v100 = (signed __int64)v222;
              if ( v99 == -1LL )
              {
                LODWORD(v165) = sub_406E40(0LL, 3LL, qword_60E5F0);
                v6 = v165;
                v73 = (unsigned int)*__errno_location();
                error(1, v73, "%s", v6);
                goto LABEL_320;
              }
              goto LABEL_179;
            }
          }
          else if ( !v13 )
          {
            v130 = v224;
            v227 = v223;
            v131 = v103;
            v132 = v106;
            sub_4049A0(v102, v5, v219);
            v100 = v130;
            v101 = v227;
            v103 = v131;
            v106 = v132;
          }
          v107 = &ptr[v219];
          ptr += v219;
          v108 = v232;
          while ( (signed __int64)v107 > (signed __int64)v4 || v108 )
          {
            v109 = (v3 == (char *)v106) & (v108 ^ 1);
            if ( v109 )
              goto LABEL_264;
            if ( ++v52 > (unsigned __int64)v13 && v13 != 0LL )
              goto LABEL_234;
            v4 = (int *)((char *)v4 + (_QWORD)v101);
            if ( v52 == v103 )
              v4 = (int *)v100;
            if ( (signed __int64)v107 <= (signed __int64)v4 )
            {
              v108 = 0;
            }
            else if ( !v13 )
            {
              v110 = v100;
              v227 = v101;
              v111 = v103;
              v112 = v106;
              sub_4049A0(1LL, 0LL, 0LL);
              v106 = v112;
              v103 = v111;
              v101 = v227;
              v100 = v110;
            }
          }
          v109 = v233;
LABEL_264:
          v5 = (char *)v106;
          v231 -= v219;
          v233 = v109;
          v102 = v232;
        }
      }
LABEL_326:
      v167 = v52 - ((v233 < 1u) - 1LL);
      if ( !v228 )
      {
        while ( v167 <= offset )
        {
          ++v167;
          sub_4049A0(1LL, 0LL, 0LL);
        }
      }
      goto LABEL_234;
    case 5:
      if ( v228 )
        goto LABEL_208;
      v86 = (unsigned __int128)offset >> 59 != 0;
      if ( offset & 0x400000000000000LL || (unsigned __int128)offset >> 59 != 0 )
        goto LABEL_325;
      v5 = 0LL;
      LODWORD(v113) = sub_407690(32 * offset, v60);
      v227 = v113;
      v114 = v113;
      do
      {
        sub_403CC0();
        ++v5;
        v114 += 32;
        LODWORD(v115) = sub_4078C0(value);
        *((_DWORD *)v114 - 6) = -1;
        *((_QWORD *)v114 - 4) = v115;
        *((_QWORD *)v114 - 2) = 0LL;
        *((_DWORD *)v114 - 2) = 0;
      }
      while ( v5 != (char *)offset );
LABEL_208:
      ptr = 0LL;
      v52 = 1LL;
      v225 = 0;
      LOBYTE(v219) = 0;
      v230 = 0;
      break;
    case 3:
      if ( v228 )
        goto LABEL_282;
      sub_404AB0(v215 / offset);
      goto LABEL_234;
    default:
      sub_404AB0(offset);
      goto LABEL_234;
  }
  while ( 2 )
  {
    v116 = sub_406FE0(0, s, nbytes);
    if ( v116 == -1 )
      goto LABEL_363;
    if ( v116 )
    {
      v217 = &s[v116];
      if ( s == &s[v116] )
        continue;
      v90 = s;
LABEL_218:
      v5 = (char *)(v217 - v90);
      LODWORD(v118) = sub_408DD0(v90, (unsigned int)c, v217 - v90);
      if ( v118 )
      {
        v85 = (char *)(v118 + 1);
        v4 = (int *)1;
        v5 = (char *)(v118 + 1 - (_QWORD)v90);
      }
      else
      {
        v85 = v217;
        v4 = 0LL;
      }
      if ( !v228 )
      {
        v13 = &v227[32 * (_QWORD)ptr];
        v225 |= sub_404500(v227, ptr, offset);
        v222 = __errno_location();
        if ( !byte_60E540 )
        {
          if ( fwrite_unlocked(v90, (size_t)v5, 1uLL, *((FILE **)v13 + 2)) == 1 )
          {
            v119 = *v222 == 32 && qword_60E760 != 0;
            goto LABEL_224;
          }
LABEL_240:
          if ( *v222 != 32 || !qword_60E760 )
          {
            LODWORD(v124) = sub_406E40(0LL, 3LL, *(_QWORD *)v13);
            LOBYTE(v63) = 1;
            error(1, *v222, "%s", v124);
            while ( 1 )
            {
              v63 = (unsigned __int8)v63;
              v226 = v87;
              sub_4049A0((unsigned __int8)v63, ptr, v52);
              v4 = v222;
              v87 = v226;
              v219 = nbytes;
              if ( v52 > nbytes )
                break;
              do
              {
                while ( 1 )
                {
                  if ( !v87 )
                    goto LABEL_245;
LABEL_159:
                  v91 = v85;
                  v92 = v87 - v85 + 1;
                  v63 = v4 == 0LL;
                  v4 = (int *)((char *)v4 + v92);
                  v5 -= v92;
                  v85 += v92;
                  sub_4049A0(v63, v91, v92);
                  if ( v13 )
                  {
                    v90 -= v92;
                    LOBYTE(v217) = v90 != 0LL;
                    if ( v90 )
                      goto LABEL_161;
                    goto LABEL_365;
                  }
                  LOBYTE(v217) = v5 != 0LL;
                  if ( v5 )
                  {
                    v90 = v5;
LABEL_161:
                    v52 = 0LL;
LABEL_162:
                    if ( v219 - v52 < (unsigned __int64)v90 )
                    {
                      v60 = (sigset_t *)nbytes;
                      if ( ~nbytes < v219 )
LABEL_325:
                        sub_4078E0(v63, v60, v86);
                      v219 += nbytes;
                      LODWORD(v93) = sub_4076F0(ptr, v219);
                      ptr = v93;
                    }
                    v94 = v85;
                    v5 -= (signed __int64)v90;
                    v85 = &v85[(_QWORD)v90];
                    v95 = &ptr[v52];
                    v52 += (unsigned __int64)v90;
                    memcpy(v95, v94, (size_t)v90);
LABEL_166:
                    v96 = (char)v217;
                    if ( v13 )
                      v96 = 0;
                    if ( v13 )
                      v4 = 0LL;
                    LOBYTE(v217) = v96;
                    goto LABEL_155;
                  }
                  v52 = 0LL;
                  LOBYTE(v217) = 1;
LABEL_155:
                  if ( !v5 )
                    goto LABEL_146;
LABEL_156:
                  v222 = (int *)((char *)v4 + v52);
                  v90 = (char *)(offset - ((_QWORD)v4 + v52));
                  if ( v5 < v90 )
                    break;
                  v63 = (signed __int64)v85;
                  v13 = &v90[(_QWORD)v85 - 1];
                  v87 = memrchr(v85, c, offset - ((_QWORD)v4 + v52));
                  if ( v52 )
                    goto LABEL_150;
                }
                v63 = (signed __int64)v85;
                v13 = 0LL;
                v90 = 0LL;
                v87 = memrchr(v85, c, (size_t)v5);
              }
              while ( !v52 );
LABEL_150:
              LOBYTE(v63) = v4 == 0LL;
              if ( !v87 && !(_BYTE)v63 )
                goto LABEL_152;
            }
            v63 = (signed __int64)ptr;
            LODWORD(v125) = sub_4076F0(ptr, nbytes);
            v87 = v226;
            v219 = nbytes;
            ptr = v125;
            if ( v226 )
              goto LABEL_159;
LABEL_245:
            v52 = 0LL;
LABEL_152:
            if ( (_BYTE)v217 )
            {
              if ( v13 && v90 )
                goto LABEL_162;
              if ( !v13 && v5 )
              {
                v90 = v5;
                goto LABEL_162;
              }
              goto LABEL_166;
            }
            v88 = v4 == 0LL;
            if ( v13 )
            {
              v89 = v85;
              v5 -= (signed __int64)v90;
              v85 = &v85[(_QWORD)v90];
              sub_4049A0(v88, v89, v90);
              v4 = 0LL;
              goto LABEL_155;
            }
            v4 = (int *)((char *)v4 + (_QWORD)v5);
            sub_4049A0(v88, v85, v5);
LABEL_146:
            v84 = sub_406FE0(0, s, nbytes);
            v5 = (char *)v84;
            if ( v84 == -1 )
            {
LABEL_364:
              LODWORD(v212) = sub_406E40(0LL, 3LL, qword_60E5F0);
              v85 = v212;
              v213 = __errno_location();
              error(1, *v213, "%s", v85);
LABEL_365:
              LOBYTE(v217) = 1;
              v52 = 0LL;
              goto LABEL_166;
            }
            if ( v84 )
            {
              v85 = s;
              goto LABEL_156;
            }
            if ( v52 )
LABEL_315:
              sub_4049A0(v4 == 0LL, ptr, v52);
            free(ptr);
            goto LABEL_234;
          }
LABEL_227:
          if ( !v225 )
          {
LABEL_228:
            if ( (_BYTE)v4 )
            {
              if ( ++ptr == (char *)offset )
              {
                if ( !(_BYTE)v219 )
                  goto LABEL_279;
                ptr = 0LL;
                v121 = v219;
                LOBYTE(v219) = 0;
                v230 = v121;
              }
            }
            goto LABEL_217;
          }
LABEL_253:
          if ( (unsigned int)sub_407E60(*((FILE **)v13 + 2)) )
          {
            LODWORD(v168) = sub_406E40(0LL, 3LL, *(_QWORD *)v13);
            error(1, *v222, "%s", v168);
            goto LABEL_332;
          }
          *((_QWORD *)v13 + 2) = 0LL;
          *((_DWORD *)v13 + 2) = -2;
          goto LABEL_228;
        }
        v43 = v5 == (char *)sub_4052D0(*((_DWORD *)v13 + 2), v90, (size_t)v5);
        v126 = v222;
        if ( !v43 )
        {
          if ( *v222 == 32 && qword_60E760 )
            goto LABEL_227;
          LODWORD(v127) = sub_406E40(0LL, 3LL, *(_QWORD *)v13);
          error(1, *v222, "%s", v127);
          goto LABEL_253;
        }
LABEL_257:
        v119 = qword_60E760 != 0 && *v126 == 32;
LABEL_224:
        v43 = v119 == 0;
        v120 = v219;
        if ( v43 )
          v120 = 1;
        LOBYTE(v219) = v120;
        goto LABEL_227;
      }
      if ( v228 == v52 )
      {
        if ( byte_60E540 )
        {
          if ( v5 != (char *)sub_4052D0(1, v90, (size_t)v5) )
          {
            v85 = dcgettext(0LL, "write error", 5);
            v128 = __errno_location();
            error(1, *v128, "%s", v85);
            goto LABEL_257;
          }
        }
        else if ( fwrite_unlocked(v90, (size_t)v5, 1uLL, stdout) != 1 )
        {
          clearerr_unlocked(stdout);
          v85 = dcgettext(0LL, "write error", 5);
          v123 = __errno_location();
          error(1, *v123, "%s", v85);
          goto LABEL_240;
        }
      }
      if ( (_BYTE)v4 )
      {
        v117 = v52 + 1;
        v43 = offset == v52;
        v52 = 1LL;
        if ( !v43 )
          v52 = v117;
      }
LABEL_217:
      v90 = v85;
      if ( v217 == v85 )
        continue;
      goto LABEL_218;
    }
    break;
  }
  if ( !v228 )
  {
    if ( v230 )
LABEL_279:
      v133 = (signed int)offset;
    else
      v133 = (signed int)ptr;
    v134 = v227;
    v135 = 0LL;
    do
    {
      if ( v133 <= v135 && !byte_60E541 )
        sub_404500(v227, v135, offset);
      v136 = *((_DWORD *)v134 + 2);
      if ( (signed int)v136 >= 0 )
        sub_4046F0(*((_QWORD *)v134 + 2), v136, *((_DWORD *)v134 + 6), *(_QWORD *)v134);
      ++v135;
      *((_DWORD *)v134 + 2) = -2;
      v134 += 32;
    }
    while ( v135 != offset );
  }
LABEL_234:
  if ( close(0) )
  {
    LODWORD(v197) = sub_406E40(0LL, 3LL, qword_60E5F0);
    v198 = v197;
    v199 = __errno_location();
    error(1, *v199, "%s", v198);
LABEL_349:
    __assert_fail("k && n && k <= n && n <= file_size", "src/split.c", 0x3DFu, "bytes_chunk_extract");
  }
  sub_4046F0(0LL, (unsigned int)dword_60E294, (unsigned int)dword_60E758, value);
  return 0LL;
}

signed int sub_403C0B()
{
  return 6350024;
}

int sub_403C2A()
{
  return 0;
}

signed int sub_403C61()
{
  signed int result; // eax@4

  if ( !byte_60E508 )
  {
    while ( qword_60E510 < (unsigned __int64)(((&unk_60DE48 - (_UNKNOWN *)&qword_60DE40) >> 3) - 1) )
      (*(&qword_60DE40 + ++qword_60E510))();
    result = sub_403C0B();
    byte_60E508 = 1;
  }
  return result;
}

int sub_403CB8()
{
  return sub_403C2A();
}

int __fastcall sub_403CC0(char *a1, __int64 a2, signed __int64 a3)
{
  char *v3; // rbp@1
  size_t v4; // rbx@1
  char *v5; // rax@2
  _QWORD *v6; // r9@3
  char v7; // r8@3
  char *v8; // rsi@3
  char *v9; // rcx@3
  char v10; // dl@4
  __int64 v11; // r12@11
  size_t v12; // rax@12
  unsigned __int64 v13; // r13@12
  size_t v14; // rax@12
  __int64 v15; // rax@14
  __int64 v16; // rsi@14
  char *v17; // rax@15
  size_t v18; // rbx@15
  char *v19; // rbp@15
  char *v20; // rax@15
  void *v21; // r13@15
  char *v22; // rax@17
  size_t v23; // rcx@17
  __int64 v24; // rdx@17
  char *v25; // rcx@18
  size_t v26; // rbx@18
  int v27; // esi@18
  char *v28; // rax@18
  char *v29; // r13@20
  char *v30; // rbx@20
  size_t v31; // rbp@22
  size_t v32; // r12@22
  signed __int64 v33; // rcx@22
  char *v34; // rax@28

  v3 = value;
  v4 = qword_60E608;
  if ( value )
  {
    v5 = (char *)(qword_60E608 - 1);
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
    v9 = (char *)ptr + 8 * qword_60E608 - 8;
    while ( 1 )
    {
      a3 = *(_QWORD *)v9 + 1LL;
      *(_QWORD *)v9 = a3;
      if ( !v5 )
      {
        if ( v7 )
          break;
      }
      v10 = v8[a3];
      v5[(_QWORD)a1] = v10;
      if ( v10 )
        return (unsigned __int64)v5;
      *(_QWORD *)v9 = 0LL;
      v9 -= 8;
      (v5--)[(_QWORD)a1] = *v8;
      if ( v5 == (char *)-1 )
        goto LABEL_28;
    }
    if ( v8[*v6 + 1] )
    {
      LODWORD(v5) = (unsigned __int8)v8[a3];
      *a1 = (char)v5;
      if ( (_BYTE)v5 )
        return (unsigned __int64)v5;
      *(_QWORD *)v9 = 0LL;
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
      LODWORD(v17) = sub_4076F0(v3, v16);
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
  LODWORD(v22) = sub_4076F0(v3, v16);
  v21 = ptr;
  v23 = n;
  v19 = v22;
  value = v22;
  v20 = off_60E298;
  v24 = *(_QWORD *)ptr;
  v18 = n++ + 1;
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
  LODWORD(v5) = sub_407860(v26, 8LL);
  v29 = nptr;
  v30 = v5;
  ptr = v5;
  if ( nptr )
  {
    if ( v11 )
      goto LABEL_29;
    v31 = strlen(nptr);
    v32 = 8 * qword_60E608;
    LODWORD(v5) = (unsigned __int64)memcpy((void *)(qword_60E610 + qword_60E608 - v31), v29, v31);
    v33 = v31 - 1;
    if ( v31 )
    {
      v5 = &v30[v32] - 8 * v31;
      do
      {
        *(_QWORD *)&v5[8 * v33] = v29[v33] - 48;
        --v33;
      }
      while ( v33 != -1 );
    }
  }
  return (unsigned __int64)v5;
}

int __fastcall sub_403FC0(char *value)
{
  char *v1; // r12@1
  char *v2; // rsi@2
  char *v3; // rbp@2
  __pid_t v4; // eax@7
  int v5; // ebx@7
  __int64 v6; // rdi@9
  __int64 v7; // rdx@10
  unsigned __int64 v8; // rcx@10
  __int64 v9; // rax@10
  int v10; // ebx@11
  __int64 v12; // rbx@13
  int *v13; // rbx@16
  __int64 v14; // rdx@20
  __int64 v15; // rcx@20
  __int64 v16; // r8@20
  const char *v17; // rax@20
  char *v18; // rax@20
  int v19; // eax@22
  char *v20; // rax@27
  char *v21; // rbx@27
  int *v22; // rax@27
  __int64 v23; // rax@28
  __int64 v24; // rbx@28
  char *v25; // rax@28
  char *v26; // rax@29
  __int64 v27; // rax@30
  __int64 v28; // rbx@30
  char *v29; // rax@30
  signed __int64 v30; // rdx@32
  char *v31; // rbx@40
  int *v32; // rax@40
  char *v33; // rbx@41
  int *v34; // rax@41
  __int64 v35; // rax@42
  __int64 v36; // rbx@42
  char *v37; // rax@42
  int *v38; // rax@43
  char *v39; // rax@44
  char *v40; // rbx@45
  int *v41; // rax@45
  __int64 v42; // rax@46
  __int64 v43; // rbp@46
  int *v44; // rax@46
  char *v45; // rax@47
  char *v46; // rbx@48
  __int64 v47; // rsi@48
  __int64 v48; // rdx@48
  int fd[2]; // [sp+0h] [bp-A8h]@6
  __int64 v50; // [sp+8h] [bp-A0h]@24

  v1 = value;
  if ( !qword_60E760 )
    goto LABEL_21;
  v2 = value;
  v3 = getenv("SHELL");
  if ( !v3 )
    v3 = "/bin/sh";
  if ( setenv("FILE", value, 1) )
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
    if ( pipe(fd) )
      goto LABEL_45;
    v4 = fork();
    v5 = v4;
    if ( v4 )
      break;
    v12 = 0LL;
    if ( qword_60E740 )
    {
      while ( !close(*(_DWORD *)(qword_60E750 + 4 * v12)) )
      {
        if ( qword_60E740 <= (unsigned __int64)++v12 )
          goto LABEL_16;
      }
      v31 = dcgettext(0LL, "closing prior pipe", 5);
      v32 = __errno_location();
      error(1, *v32, v31);
      goto LABEL_41;
    }
LABEL_16:
    v1 = (char *)(unsigned int)close(fd[1]);
    v13 = __errno_location();
    if ( (_DWORD)v1 )
      goto LABEL_44;
    if ( fd[0] )
    {
      if ( dup2(fd[0], 0) )
        goto LABEL_47;
      if ( close(fd[0]) )
      {
        v26 = dcgettext(0LL, "closing input pipe", 5);
        value = (char *)1;
        error(1, *v13, v26);
LABEL_30:
        LODWORD(v27) = sub_406D70(4LL, value);
        v28 = v27;
        v29 = dcgettext(0LL, "creating file %s\n", 5);
        __fprintf_chk(stdout, 1LL, v29, v28);
        goto LABEL_22;
      }
    }
    sigprocmask(2, &oset, 0LL);
    v1 = (char *)qword_60E760;
    LODWORD(v17) = sub_405180(v3, &oset, v14, v15, v16);
    execl(v3, v17, "-c", v1, 0LL);
    v18 = dcgettext(0LL, "failed to run command: \"%s -c %s\"", 5);
    value = (char *)1;
    error(1, *v13, v18, v3, v1);
LABEL_21:
    if ( byte_60E542 )
      goto LABEL_30;
LABEL_22:
    v19 = sub_405210((char)v1);
    v10 = v19;
    if ( v19 < 0 )
      return v10;
    if ( __fxstat(1, v19, (struct stat *)fd) )
      goto LABEL_46;
    if ( stat_buf.st_ino == v50 && stat_buf.st_dev == *(_QWORD *)fd )
      goto LABEL_42;
    if ( !ftruncate(v10, 0LL) )
      return v10;
    LODWORD(v20) = sub_406E40(0LL, 3LL, v1);
    v3 = v20;
    v21 = dcgettext(0LL, "%s: error truncating", 5);
    v22 = __errno_location();
    error(1, *v22, v21, v3);
LABEL_28:
    LODWORD(v23) = sub_406E40(0LL, 3LL, v1);
    v24 = v23;
    v25 = dcgettext(0LL, "executing with FILE=%s\n", 5);
    v2 = (char *)1;
    __fprintf_chk(stdout, 1LL, v25, v24);
  }
  if ( v4 == -1 )
    goto LABEL_43;
  v6 = (unsigned int)fd[0];
  if ( close(fd[0]) )
  {
LABEL_41:
    v33 = dcgettext(0LL, "failed to close input pipe", 5);
    v34 = __errno_location();
    error(1, *v34, v33);
LABEL_42:
    LODWORD(v35) = sub_406D70(4LL, v1);
    v36 = v35;
    v37 = dcgettext(0LL, "%s would overwrite input; aborting", 5);
    error(1, 0, v37, v36);
LABEL_43:
    v13 = (int *)dcgettext(0LL, "fork system call failed", 5);
    v38 = __errno_location();
    error(1, *v38, (const char *)v13);
LABEL_44:
    v39 = dcgettext(0LL, "closing output pipe", 5);
    error(1, *v13, v39);
LABEL_45:
    v40 = dcgettext(0LL, "failed to create pipe", 5);
    v41 = __errno_location();
    error(1, *v41, v40);
LABEL_46:
    LODWORD(v42) = sub_406D70(4LL, v1);
    v43 = v42;
    v13 = (int *)dcgettext(0LL, "failed to stat %s", 5);
    v44 = __errno_location();
    error(1, *v44, (const char *)v13, v43);
LABEL_47:
    v45 = dcgettext(0LL, "moving input pipe", 5);
    error(1, *v13, v45);
    goto LABEL_48;
  }
  v7 = qword_60E740;
  v8 = qword_60E748;
  dword_60E758 = v5;
  v9 = qword_60E750;
  if ( qword_60E740 == qword_60E748 )
  {
    if ( qword_60E750 )
    {
      v30 = 1537228672809129300LL;
      if ( (unsigned __int64)qword_60E748 <= 0x1555555555555554LL )
      {
        v8 = qword_60E748 + ((unsigned __int64)qword_60E748 >> 1) + 1;
        v2 = (char *)(4 * v8);
LABEL_34:
        qword_60E748 = v8;
        LODWORD(v9) = sub_4076F0(qword_60E750, v2);
        v7 = qword_60E740;
        qword_60E750 = v9;
        goto LABEL_11;
      }
    }
    else
    {
      if ( !qword_60E748 )
      {
        v2 = (char *)128;
        v8 = 32LL;
        goto LABEL_34;
      }
      v30 = (unsigned __int64)qword_60E748 >> 62 != 0;
      v2 = (char *)(4 * qword_60E748);
      if ( !(qword_60E748 & 0x2000000000000000LL) && (unsigned __int64)qword_60E748 >> 62 == 0 )
        goto LABEL_34;
    }
    sub_4078E0(v6, v2, v30);
  }
LABEL_11:
  qword_60E740 = v7 + 1;
  *(_DWORD *)(v9 + 4 * v7) = fd[1];
  return fd[1];
}

int __fastcall sub_404500(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r13@1
  signed __int64 v4; // rbp@1
  int v5; // eax@1
  signed __int64 v7; // rbx@3
  signed __int64 v8; // r14@3
  __int64 v9; // r12@3
  char *v10; // rdi@5
  int v11; // eax@6
  int *v12; // r8@7
  signed __int64 v13; // rax@9
  int v14; // eax@14
  FILE *v15; // rax@16
  int v16; // eax@17
  int *v17; // ST08_8@18
  __int64 v18; // rax@18
  __int64 v19; // rax@19
  __int64 v20; // rax@20
  __int64 v21; // rax@21
  __int64 v22; // rbx@21
  __int64 v23; // rsi@21
  __int64 v24; // rdx@21
  __int64 v25; // rcx@21
  int *v26; // [sp+8h] [bp-40h]@13

  v3 = a1 + 32 * a2;
  v4 = 0LL;
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 >= 0 )
    return v4;
  v7 = a2 - 1;
  v8 = a3 - 1;
  v9 = a1;
  if ( !a2 )
    v7 = a3 - 1;
  v10 = *(char **)v3;
  if ( v5 == -1 )
    goto LABEL_15;
LABEL_6:
  v11 = sub_405210((char)v10);
  if ( v11 >= 0 )
  {
LABEL_16:
    *(_DWORD *)(v3 + 8) = v11;
    v15 = fdopen(v11, "a");
    *(_QWORD *)(v3 + 16) = v15;
    if ( v15 )
    {
      v16 = dword_60E758;
      dword_60E758 = 0;
      *(_DWORD *)(v3 + 24) = v16;
      return v4;
    }
  }
  else
  {
    while ( 1 )
    {
      v12 = __errno_location();
      if ( (unsigned int)(*v12 - 23) > 1 )
        break;
      while ( 1 )
      {
        v4 = v9 + 32 * v7;
        if ( *(_DWORD *)(v4 + 8) >= 0 )
          break;
        v13 = v7 - 1;
        if ( !v7 )
          v13 = v8;
        v7 = v13;
        if ( v13 == a2 )
        {
          v17 = v12;
          LODWORD(v18) = sub_406E40(0LL, 3LL, *(_QWORD *)v3);
          error(1, *v17, "%s", v18);
          goto LABEL_19;
        }
      }
      v26 = v12;
      if ( (unsigned int)sub_407E60(*(FILE **)(v4 + 16)) )
        goto LABEL_20;
      *(_DWORD *)(v4 + 8) = -2;
      v14 = *(_DWORD *)(v3 + 8);
      *(_QWORD *)(v4 + 16) = 0LL;
      v10 = *(char **)v3;
      v4 = 1LL;
      if ( v14 != -1 )
        goto LABEL_6;
LABEL_15:
      v11 = sub_403FC0(v10);
      if ( v11 >= 0 )
        goto LABEL_16;
    }
LABEL_19:
    v26 = v12;
    LODWORD(v19) = sub_406E40(0LL, 3LL, *(_QWORD *)v3);
    error(1, *v26, "%s", v19);
LABEL_20:
    LODWORD(v20) = sub_406E40(0LL, 3LL, *(_QWORD *)v4);
    error(1, *v26, "%s", v20);
  }
  LODWORD(v21) = sub_406E40(0LL, 3LL, *(_QWORD *)v3);
  v22 = v21;
  v23 = (unsigned int)*__errno_location();
  error(1, v23, "%s", v22);
  return sub_4046F0(1LL, v23, v24, v25);
}

void __fastcall sub_4046F0(FILE *a1, int a2, __pid_t a3, __int64 a4)
{
  __pid_t v4; // er12@1
  __int64 v5; // rbx@1
  int *v6; // rax@3
  int *v7; // r13@3
  __int64 v8; // rax@5
  __int64 v9; // rdx@9
  __int64 v10; // rdi@9
  __int64 v11; // rax@9
  _DWORD *v12; // rcx@10
  __int64 v13; // rax@16
  int *v14; // rax@16
  int *v15; // rbp@18
  __int64 v16; // r12@21
  __int64 v17; // rax@21
  __int64 v18; // rbx@21
  char *v19; // rax@21
  int v20; // eax@23
  int v21; // ebp@25
  __int64 v22; // r12@26
  __int64 v23; // rax@26
  __int64 v24; // rbx@26
  char *v25; // rax@26
  char *v26; // rax@28
  int v27; // ST0C_4@30
  char *v28; // rax@30
  __int64 v29; // rdx@30
  int stat_loc; // [sp+1Ch] [bp-4Ch]@17
  char v31; // [sp+20h] [bp-48h]@20

  v4 = a3;
  v5 = a4;
  if ( a1 )
  {
    if ( (unsigned int)sub_407E60(a1) )
    {
      v6 = __errno_location();
      v7 = v6;
      if ( !qword_60E760 || *v6 != 32 )
      {
        LODWORD(v8) = sub_406E40(0LL, 3LL, v5);
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
      LODWORD(v13) = sub_406E40(0LL, 3LL, v5);
      v5 = v13;
      v14 = __errno_location();
      error(1, *v14, "%s", v5);
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
      v20 = *(_DWORD *)(qword_60E750 + 4 * v10);
      qword_60E740 = v10;
      *v12 = v20;
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
  if ( v4 <= 0 )
    return;
LABEL_17:
  stat_loc = 0;
  if ( waitpid(v4, &stat_loc, 0) == -1 )
  {
    v15 = __errno_location();
    if ( *v15 != 10 )
    {
      v26 = dcgettext(0LL, "waiting for child process", 5);
      error(1, *v15, v26);
      goto LABEL_29;
    }
  }
  LODWORD(v15) = stat_loc & 0x7F;
  if ( (char)((_BYTE)v15 + 1) <= 1 )
  {
    if ( stat_loc & 0x7F )
    {
      v27 = stat_loc;
      v28 = dcgettext(0LL, "unknown status from command (0x%X)", 5);
      error(1, 0, v28, (unsigned int)v27);
      sub_4049A0(1LL, 0LL, v29);
    }
    else
    {
      v21 = BYTE1(stat_loc);
      if ( BYTE1(stat_loc) )
      {
        v22 = qword_60E760;
        LODWORD(v23) = sub_406E40(0LL, 3LL, v5);
        v24 = v23;
        v25 = dcgettext(0LL, "with FILE=%s, exit %d from command: %s", 5);
        error(v21, 0, v25, v24, (unsigned int)v21, v22);
      }
    }
  }
  else if ( (_DWORD)v15 != 13 )
  {
    if ( !sub_409040(stat_loc & 0x7F, &v31) )
    {
LABEL_21:
      v16 = qword_60E760;
      LODWORD(v17) = sub_406E40(0LL, 3LL, v5);
      v18 = v17;
      v19 = dcgettext(0LL, "with FILE=%s, signal %s from command: %s", 5);
      error((_DWORD)v15 + 128, 0, v19, v18, &v31, v16);
      return;
    }
LABEL_29:
    __sprintf_chk(&v31, 1LL, 19LL, "%d", (unsigned int)v15);
    goto LABEL_21;
  }
}

__int64 __fastcall sub_4049A0(char a1, void *a2, size_t a3)
{
  void *v3; // rbp@1
  size_t v4; // rbx@1
  __int64 v5; // rsi@4
  signed __int64 v6; // rdx@4
  int v7; // edi@4
  int *v8; // rbx@6
  __int64 result; // rax@7
  __int64 v10; // rax@8
  __int64 v11; // rax@12
  __int64 v12; // rbx@12
  int *v13; // rax@12

  v3 = a2;
  v4 = a3;
  if ( a1 )
  {
    if ( !(a3 | (unsigned __int64)a2) && byte_60E541 )
      return 1LL;
    v5 = (unsigned int)dword_60E294;
    sub_4046F0(0LL, dword_60E294, dword_60E758, (__int64)value);
    sub_403CC0(0LL, v5, v6);
    v7 = sub_403FC0(value);
    dword_60E294 = v7;
    if ( v7 < 0 )
    {
      LODWORD(v11) = sub_406E40(0LL, 3LL, value);
      v12 = v11;
      v13 = __errno_location();
      error(1, *v13, "%s", v12);
      return sub_404AB0(1LL);
    }
  }
  else
  {
    v7 = dword_60E294;
  }
  if ( sub_4052D0(v7, v3, v4) == v4 )
    return 1LL;
  v8 = __errno_location();
  if ( !qword_60E760 || (result = 0LL, *v8 != 32) )
  {
    LODWORD(v10) = sub_406E40(0LL, 3LL, value);
    error(1, *v8, "%s", v10);
    return 1LL;
  }
  return result;
}

void __fastcall sub_404AB0(__off_t offset, char *a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // r14@1
  unsigned __int64 v6; // r12@1
  char v7; // bp@1
  char v8; // bl@1
  size_t v9; // r13@2
  char *v10; // r9@3
  bool v11; // r11@3
  unsigned __int64 v12; // ST10_8@8
  bool v13; // ST1E_1@8
  char *v14; // ST08_8@8
  char v15; // al@8
  unsigned __int64 v16; // ST08_8@12
  unsigned __int64 v17; // rax@12
  unsigned __int64 v18; // ST08_8@19
  int v19; // eax@19
  unsigned __int64 v20; // ST08_8@21
  __off_t v21; // rax@21
  signed __int64 v22; // rbx@25
  unsigned __int64 v23; // ST08_8@28
  __int64 v24; // rax@30
  __int64 v25; // rbx@30
  int *v26; // rax@30
  bool v27; // [sp+1Fh] [bp-49h]@2
  size_t nbytes; // [sp+28h] [bp-40h]@1

  v5 = 0LL;
  v6 = offset;
  v7 = 1;
  v8 = 1;
  nbytes = a3;
  if ( a4 == -1LL )
    goto LABEL_11;
  v9 = a4;
  v27 = a4 < a3;
  if ( a4 < offset )
    goto LABEL_14;
LABEL_3:
  v10 = a2;
  v11 = a5 == 0;
  do
  {
    v7 |= v8;
    if ( v7 )
    {
      v12 = a5;
      v13 = v11;
      v14 = v10;
      v15 = sub_4049A0(v8, v10, v6);
      a5 = v12;
      v11 = v13;
      v7 = v15;
      v10 = v14;
    }
    v5 += (unsigned __int8)v8;
    v8 = v11 || v5 < a5;
    if ( !v11 && v5 >= a5 && !v7 )
      return;
    v9 -= v6;
    v10 += v6;
    v6 = offset;
  }
  while ( offset <= v9 );
  if ( v9 )
    goto LABEL_19;
  while ( !v27 )
  {
LABEL_11:
    if ( !v7 )
    {
      v20 = a5;
      v21 = lseek(0, v6, 1);
      a5 = v20;
      if ( v21 != -1 )
      {
        v6 = offset;
        if ( v21 != -1 )
          v8 = 1;
      }
    }
    v16 = a5;
    v17 = sub_406FE0(0, a2, nbytes);
    a5 = v16;
    v9 = v17;
    if ( v17 == -1LL )
    {
      LODWORD(v24) = sub_406E40(0LL, 3LL, qword_60E5F0);
      v25 = v24;
      v26 = __errno_location();
      error(1, *v26, "%s", v25);
      sub_404CF0(1);
    }
    v27 = v17 == 0;
    if ( v17 >= v6 )
      goto LABEL_3;
LABEL_14:
    if ( v9 )
    {
      if ( !((unsigned __int8)v8 | (unsigned __int8)v7) )
      {
        v7 = 0;
        v8 = a5 == v5;
        if ( a5 == v5 )
          return;
        goto LABEL_20;
      }
      v10 = a2;
LABEL_19:
      v18 = a5;
      v19 = sub_4049A0(v8, v10, v9);
      a5 = v18;
      v7 = v19;
      v5 += (unsigned __int8)v8;
      v8 = (v19 ^ 1) & (v18 == v5);
      if ( v8 )
        return;
LABEL_20:
      v6 -= v9;
    }
  }
  v22 = v5 + 1;
  if ( v5 < a5 )
  {
    while ( 1 )
    {
      v23 = a5;
      sub_4049A0(1, 0LL, 0LL);
      a5 = v23;
      if ( v23 == v22 )
        break;
      ++v22;
    }
  }
}

noreturn void __fastcall  sub_404CF0(int status)
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
  char *v11; // rax@4
  FILE *v12; // rbp@4
  char *v13; // rax@4
  FILE *v14; // rbp@4
  char *v15; // rax@4
  FILE *v16; // rbp@4
  char *v17; // rax@4
  FILE *v18; // rbp@4
  char *v19; // rax@4
  FILE *v20; // rbp@4
  char *v21; // rax@4
  __int64 *v22; // rax@4
  _BYTE *v23; // rdi@5
  bool v24; // cf@5
  bool v25; // zf@5
  const char *v26; // rsi@6
  signed __int64 v27; // rcx@6
  const char *v28; // rbp@10
  char *v29; // rax@11
  char *v30; // rax@11
  char *v31; // rax@13
  char *v32; // rax@14
  char *v33; // rax@15
  char *v34; // rax@15
  char *v35; // rax@17
  char *v36; // rax@19
  const char *v37; // [sp+0h] [bp-88h]@4
  const char *v38; // [sp+8h] [bp-80h]@4
  const char *v39; // [sp+10h] [bp-78h]@4
  const char *v40; // [sp+18h] [bp-70h]@4
  const char *v41; // [sp+20h] [bp-68h]@4
  const char *v42; // [sp+28h] [bp-60h]@4
  const char *v43; // [sp+30h] [bp-58h]@4
  const char *v44; // [sp+38h] [bp-50h]@4
  const char *v45; // [sp+40h] [bp-48h]@4
  const char *v46; // [sp+48h] [bp-40h]@4
  const char *v47; // [sp+50h] [bp-38h]@4
  const char *v48; // [sp+58h] [bp-30h]@4
  __int64 v49; // [sp+60h] [bp-28h]@4
  __int64 v50; // [sp+68h] [bp-20h]@4

  v1 = status;
  v2 = qword_60E778;
  if ( status )
  {
    v3 = dcgettext(0LL, "Try '%s --help' for more information.\n", 5);
    __fprintf_chk(stderr, 1LL, v3, v2);
    goto LABEL_3;
  }
  v4 = dcgettext(0LL, "Usage: %s [OPTION]... [FILE [PREFIX]]\n", 5);
  __printf_chk(1LL, v4, v2);
  v5 = stdout;
  v6 = dcgettext(
         0LL,
         "Output pieces of FILE to PREFIXaa, PREFIXab, ...;\ndefault size is 1000 lines, and default PREFIX is 'x'.\n",
         5);
  fputs_unlocked(v6, v5);
  v7 = stdout;
  v8 = dcgettext(0LL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5);
  fputs_unlocked(v8, v7);
  v9 = stdout;
  v10 = dcgettext(0LL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
  fputs_unlocked(v10, v9);
  v11 = dcgettext(
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
  __fprintf_chk(stdout, 1LL, v11, 2LL);
  v12 = stdout;
  v13 = dcgettext(
          0LL,
          "      --verbose           print a diagnostic just before each\n"
          "                            output file is opened\n",
          5);
  fputs_unlocked(v13, v12);
  v14 = stdout;
  v15 = dcgettext(0LL, "      --help     display this help and exit\n", 5);
  fputs_unlocked(v15, v14);
  v16 = stdout;
  v17 = dcgettext(0LL, "      --version  output version information and exit\n", 5);
  fputs_unlocked(v17, v16);
  v18 = stdout;
  v19 = dcgettext(
          0LL,
          "\n"
          "The SIZE argument is an integer and optional unit (example: 10K is 10*1024).\n"
          "Units are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n",
          5);
  fputs_unlocked(v19, v18);
  v20 = stdout;
  v21 = dcgettext(
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
  fputs_unlocked(v21, v20);
  v37 = "[";
  v22 = (__int64 *)&v37;
  v38 = "test invocation";
  v39 = "coreutils";
  v40 = "Multi-call invocation";
  v41 = "sha224sum";
  v42 = "sha2 utilities";
  v43 = "sha256sum";
  v44 = "sha2 utilities";
  v45 = "sha384sum";
  v46 = "sha2 utilities";
  v47 = "sha512sum";
  v48 = "sha2 utilities";
  v49 = 0LL;
  v50 = 0LL;
  do
  {
    v22 += 2;
    v23 = (_BYTE *)*v22;
    v24 = 0;
    v25 = *v22 == 0;
    if ( !*v22 )
      break;
    v26 = "split";
    v27 = 6LL;
    do
    {
      if ( !v27 )
        break;
      v24 = (const unsigned __int8)*v26 < *v23;
      v25 = *v26++ == *v23++;
      --v27;
    }
    while ( v25 );
  }
  while ( (!v24 && !v25) != v24 );
  v28 = (const char *)v22[1];
  if ( v28 )
  {
    v29 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v29, &unk_409B0F);
    v30 = setlocale(5, 0LL);
    if ( !v30 || !strncmp(v30, "en_", 3uLL) )
      goto LABEL_13;
  }
  else
  {
    v33 = dcgettext(0LL, "\n%s online help: <%s>\n", 5);
    __printf_chk(1LL, v33, &unk_409B0F);
    v34 = setlocale(5, 0LL);
    if ( !v34 || !strncmp(v34, "en_", 3uLL) )
    {
      v28 = "split";
      v35 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
      __printf_chk(1LL, v35, "https://www.gnu.org/software/coreutils/");
      goto LABEL_14;
    }
    v28 = "split";
  }
  v36 = dcgettext(0LL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5);
  __printf_chk(1LL, v36, "split");
LABEL_13:
  v31 = dcgettext(0LL, "Full documentation at: <%s%s>\n", 5);
  __printf_chk(1LL, v31, "https://www.gnu.org/software/coreutils/");
LABEL_14:
  v32 = dcgettext(0LL, "or available locally via: info '(coreutils) %s%s'\n", 5);
  __printf_chk(1LL, v32, v28);
LABEL_3:
  exit(v1);
}

__int64 sub_4050E0()
{
  int *v0; // rax@2
  int *v1; // rbx@2
  __int64 result; // rax@4
  char *v3; // rax@6
  char *v4; // rbp@6
  __int64 v5; // rax@7

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
        LODWORD(v5) = sub_406E10(qword_60E770, "write error");
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

__int64 __fastcall sub_405210(const char *a1, char a2, __int64 a3)
{
  __int64 v3; // rdx@1
  int v4; // eax@3
  __int64 v6; // [sp+30h] [bp-28h]@1

  v6 = a3;
  v3 = 0LL;
  if ( a2 & 0x40 )
    v3 = (unsigned int)v6;
  v4 = open(a1, a2, v3);
  return sub_4070A0(v4);
}

__int64 __fastcall sub_405260(int fd2, char *file, int oflag, unsigned int a4)
{
  __int64 result; // rax@1
  int v5; // ebx@1
  int v6; // er12@4
  int *v7; // rax@4
  int v8; // er13@4
  int *v9; // rbp@4

  LODWORD(result) = open(file, oflag, a4);
  v5 = result;
  if ( fd2 != (_DWORD)result && (signed int)result >= 0 )
  {
    v6 = dup2(result, fd2);
    v7 = __errno_location();
    v8 = *v7;
    v9 = v7;
    close(v5);
    result = (unsigned int)v6;
    *v9 = v8;
  }
  else
  {
    result = (unsigned int)result;
  }
  return result;
}

__int64 __fastcall sub_4052D0(int fd, void *buf, size_t n)
{
  char *v3; // rbp@2
  size_t v4; // rbx@2
  __int64 v5; // r12@2
  __int64 v6; // rax@5

  if ( n )
  {
    v3 = (char *)buf;
    v4 = n;
    v5 = 0LL;
    do
    {
      v6 = sub_407040(fd, v3, v4);
      if ( v6 == -1 )
        break;
      if ( !v6 )
      {
        *__errno_location() = 28;
        return v5;
      }
      v5 += v6;
      v3 += v6;
      v4 -= v6;
    }
    while ( v4 );
  }
  else
  {
    v5 = 0LL;
  }
  return v5;
}

signed __int64 __fastcall sub_405350(unsigned __int64 a1, __int64 a2)
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

char *__fastcall sub_4053A0(const char *a1)
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
  qword_60E778 = v1;
  program_invocation_name = v1;
  return result;
}

char *__fastcall sub_405440(char *msgid, int a2)
{
  const char *v2; // rbx@1
  __int64 v4; // rax@3
  bool v5; // zf@9
  char *v6; // rbx@23

  v2 = dcgettext(0LL, msgid, 5);
  if ( msgid != v2 )
    return (char *)v2;
  LODWORD(v4) = sub_4091D0(0LL);
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

unsigned __int64 __fastcall sub_405540(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_405440("`", v11);
        v58 = sub_405440("'", v11);
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
            return sub_405540((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_405540((__int64)v9, v79, s);
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
                return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
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
            return sub_405540((__int64)v9, v10, s);
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
            return sub_405540((__int64)v9, v10, s);
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
            return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
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
          return sub_405540((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_405540((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_408D50((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_405540((__int64)v9, v10, s);
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
      return sub_405540((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

unsigned __int64 __fastcall sub_405540(_BYTE *a1, unsigned __int64 a2, char *a3, unsigned __int64 a4, int a5, char a6, __int64 a7, char *a8, char *a9)
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
        a8 = sub_405440("`", v11);
        v58 = sub_405440("'", v11);
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
            return sub_405540((__int64)v9, v10, s);
          v45 = !v82 && v44;
          if ( v45 )
          {
            if ( v83 )
            {
              if ( v70 )
                return sub_405540((__int64)v9, v79, s);
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
                return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
            goto LABEL_29;
          case 7:
            LOBYTE(v28) = 97;
LABEL_78:
            if ( !v82 )
              goto LABEL_79;
            return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
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
            return sub_405540((__int64)v9, v10, s);
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
            return sub_405540((__int64)v9, v10, s);
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
            return sub_405540((__int64)v9, v10, s);
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
              return sub_405540((__int64)v9, v10, s);
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
          return sub_405540((__int64)v9, v10, s);
        case 13:
          LOBYTE(v28) = 13;
          v34 = 114;
LABEL_104:
          LOBYTE(v13) = v19 == 2;
          v69 = v19 == 2 && v82;
          if ( v69 )
            return sub_405540((__int64)v9, v10, s);
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
        v33 = (const unsigned __int16 **)sub_408D50((wchar_t *)&wc, (char *)v51 + v18 + (_QWORD)s);
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
                  return sub_405540((__int64)v9, v10, s);
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
      return sub_405540((__int64)v9, v10, s);
    default:
      abort();
      return result;
  }
}

_BYTE *__fastcall sub_406770(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_60E2F8;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60E310 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_4078E0(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_60E2F8 == &xmmword_60E300 )
    {
      LODWORD(v21) = sub_4076F0(0LL, v10);
      v8 = v21;
      off_60E2F8 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E300);
    }
    else
    {
      LODWORD(v11) = sub_4076F0(off_60E2F8, v10);
      off_60E2F8 = v11;
      v8 = v11;
    }
    memset(&v8[dword_60E310], 0, 16LL * ((signed int)a1 + 1 - dword_60E310));
    dword_60E310 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_405540(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_60E780 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_407690(v16, v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_405540(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_406770(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4)
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
  v8 = off_60E2F8;
  v9 = v6;
  v23 = *v6;
  if ( (signed int)a1 < 0 )
    abort();
  if ( dword_60E310 <= (signed int)a1 )
  {
    if ( (_DWORD)a1 == 0x7FFFFFFF )
      sub_4078E0(a1, a2, v7);
    v10 = 16LL * ((signed int)a1 + 1);
    if ( off_60E2F8 == &xmmword_60E300 )
    {
      LODWORD(v21) = sub_4076F0(0LL, v10);
      v8 = v21;
      off_60E2F8 = v21;
      *v21 = (__int128)_mm_load_si128((const __m128i *)&xmmword_60E300);
    }
    else
    {
      LODWORD(v11) = sub_4076F0(off_60E2F8, v10);
      off_60E2F8 = v11;
      v8 = v11;
    }
    memset(&v8[dword_60E310], 0, 16LL * ((signed int)a1 + 1 - dword_60E310));
    dword_60E310 = a1 + 1;
  }
  v12 = (signed __int64)&v8[(signed int)a1];
  v13 = *(_BYTE **)(v12 + 8);
  v24 = *(_DWORD *)(v5 + 4) | 1;
  v14 = *(_QWORD *)v12;
  v15 = sub_405540(v13, *(_QWORD *)v12, v22, v4, *(_DWORD *)v5, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  if ( v14 <= v15 )
  {
    v16 = v15 + 1;
    *(_QWORD *)v12 = v15 + 1;
    if ( (_UNKNOWN *)v13 != &unk_60E780 )
    {
      v17 = v15 + 1;
      free(v13);
      v16 = v17;
    }
    LODWORD(v18) = sub_407690(v16, v16);
    v19 = *(_DWORD *)v5;
    *(_QWORD *)(v12 + 8) = v18;
    v13 = v18;
    sub_405540(v18, v16, v22, v4, v19, v24, v5 + 8, *(char **)(v5 + 40), *(char **)(v5 + 48));
  }
  *v9 = v23;
  return v13;
}

_BYTE *__fastcall sub_406C90(__int64 a1, int a2, char *a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406C90(__int64 a1, int a2, char *a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406D70(int a1, char *a2)
{
  return sub_406C90(0LL, a1, a2);
}

_BYTE *__fastcall sub_406D90(char *a1, unsigned __int64 a2, unsigned __int8 a3)
{
  __m128i v4; // [sp+0h] [bp-48h]@1
  __m128i v5; // [sp+10h] [bp-38h]@1
  __m128i v6; // [sp+20h] [bp-28h]@1
  __int64 v7; // [sp+30h] [bp-18h]@1

  v7 = qword_60E8B0;
  v4 = _mm_load_si128((const __m128i *)&xmmword_60E880);
  v5 = _mm_load_si128((const __m128i *)&xmmword_60E890);
  v6 = _mm_load_si128((const __m128i *)&xmmword_60E8A0);
  v4.m128i_i32[(a3 >> 5) + 2] ^= (~(unsigned __int8)((unsigned __int32)v4.m128i_i32[(a3 >> 5) + 2] >> (a3 & 0x1F)) & 1) << (a3 & 0x1F);
  return sub_406770(0LL, a1, a2, (__int64)&v4);
}

_BYTE *__fastcall sub_406E10(char *a1)
{
  return sub_406D90(a1, 0xFFFFFFFFFFFFFFFFLL, 0x3Au);
}

_BYTE *__fastcall sub_406E40(__int64 a1, int a2, char *a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406E40(__int64 a1, int a2, char *a3)
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
  return sub_406770(a1, a3, 0xFFFFFFFFFFFFFFFFLL, (__int64)&v4);
}

_BYTE *__fastcall sub_406FC0(char *a1)
{
  return sub_406770(0LL, a1, 0xFFFFFFFFFFFFFFFFLL, (__int64)&unk_60E2C0);
}

__int64 __fastcall sub_406FE0(int fd, void *buf, size_t nbytes)
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

__int64 __fastcall sub_407040(int fd, void *buf, size_t n)
{
  unsigned __int64 v3; // rbx@1
  ssize_t v4; // rbp@2
  int v5; // eax@3

  v3 = n;
  while ( 1 )
  {
    v4 = write(fd, buf, v3);
    if ( v4 >= 0 )
      break;
    v5 = *__errno_location();
    if ( v5 != 4 )
    {
      if ( v5 != 22 || v3 <= 0x7FFFE000 )
        return v4;
      v3 = 2147475456LL;
    }
  }
  return v4;
}

__int64 __fastcall sub_4070A0(int fd)
{
  __int64 result; // rax@2
  int v2; // er12@3
  int *v3; // rax@3
  int v4; // er13@3
  int *v5; // rbp@3

  if ( (unsigned int)fd <= 2 )
  {
    v2 = sub_409740();
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

int __fastcall sub_4070F0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_4070F0(FILE *stream, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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

int __fastcall sub_407550(FILE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
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
        return sub_4070F0(a1, a2, a3, a4, (__int64)v15, v9);
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
  return sub_4070F0(a1, a2, a3, a4, (__int64)v15, v9);
}

void *__fastcall sub_407690(size_t a1, __int64 a2)
{
  void *result; // rax@1
  __int64 v3; // rdx@1

  result = malloc(a1);
  if ( !result )
  {
    if ( a1 )
      sub_4078E0(a1, a2, v3);
  }
  return result;
}

void *__fastcall sub_4076F0(void *a1, size_t a2)
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
        sub_4078E0(a1, a2, v3);
    }
  }
  return result;
}

__int64 __fastcall sub_407860(size_t a1, size_t a2)
{
  unsigned __int128 v2; // ax@1

  v2 = a2 * (unsigned __int128)a1;
  BYTE8(v2) = *((_QWORD *)&v2 + 1) != 0LL;
  if ( (v2 & 0x8000000000000000LL) != 0LL
    || (*((_QWORD *)&v2 + 1) = BYTE8(v2), BYTE8(v2))
    || (*(_QWORD *)&v2 = calloc(a1, a2), !(_QWORD)v2) )
  {
    sub_4078E0(a1, a2, *((_QWORD *)&v2 + 1));
  }
  return v2;
}

void *__fastcall sub_407890(const void *a1, size_t a2)
{
  void *v2; // rax@1

  v2 = sub_407690(a2, a2);
  return memcpy(v2, a1, a2);
}

void *__fastcall sub_4078C0(const char *a1)
{
  size_t v1; // rax@1

  v1 = strlen(a1);
  return sub_407890(a1, v1 + 1);
}

noreturn void  sub_4078E0()
{
  char *v0; // rax@1

  v0 = dcgettext(0LL, "memory exhausted", 5);
  error(status, 0, "%s", v0);
  abort();
}

unsigned __int64 __fastcall sub_407920(char *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
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
    if ( v19 >= v8 && v19 <= v7 )
      return v12;
    v13 = __errno_location();
    *v13 = v19 < 0x40000000 ? 34 : 75;
  }
  v14 = sub_406FC0(a1);
  v15 = *v13;
  if ( *v13 == 22 )
    v15 = 0;
  if ( !a7 )
    v10 = 1;
  error(v10, v15, "%s: %s", v9, v14);
  return v19;
}

unsigned __int64 __fastcall sub_4079F0(char *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, int a6)
{
  return sub_407920(a1, 10LL, a2, a3, a4, a5, a6);
}

__int64 __fastcall sub_407A20(char *nptr, char **a2, unsigned int a3, unsigned __int64 *a4, const char *a5)
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

int __fastcall sub_407E60(FILE *stream)
{
  int *v1; // rax@4
  int v2; // er12@4
  int *v3; // rbp@4
  int result; // eax@4
  int v5; // eax@7

  if ( fileno(stream) < 0 || __freading(stream) && (v5 = fileno(stream), lseek(v5, 0LL, 1) == -1) || !sub_407EE0(stream) )
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

int __fastcall sub_407EE0(FILE *a1)
{
  int result; // eax@4

  if ( a1 && __freading(a1) && a1->_flags & 0x100 )
  {
    sub_407F20(a1, 0LL, 1LL);
    result = fflush(a1);
  }
  else
  {
    result = fflush(a1);
  }
  return result;
}

int __fastcall sub_407F20(FILE *a1, __off_t a2, int a3)
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

__int64 __fastcall sub_407F80(__int64 a1, __int64 a2)
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

signed __int64 __fastcall sub_408060(int a1, __int64 *a2, char *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8, __int64 a9)
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

__int64 __fastcall sub_408680(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, __int64 a7, int a8)
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
        sub_407F80(a2, a7);
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
        sub_407F80((__int64)v11, a7);
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
            v40 = sub_408060(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"--");
            goto LABEL_72;
          }
          if ( a6 )
          {
            if ( *(_BYTE *)(v21 + 2) || (v37 = a6, v38 = strchr(v12, v36), a6 = v37, !v38) )
            {
              *(_QWORD *)(a7 + 32) = v21 + 1;
              v26 = sub_408060(v10, v11, v12, v53, v54, a6, a7, v8, (__int64)"-");
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
        v40 = sub_408060(v10, v11, v12, v53, v54, 0, a7, v8, (__int64)"-W ");
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

__int64 __fastcall sub_408C50(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5, int a6, int a7)
{
  __int64 result; // rax@1

  dword_60E8C0 = dword_60E31C;
  dword_60E8C4 = dword_60E318;
  result = sub_408680(a1, a2, a3, a4, a5, a6, (__int64)&dword_60E8C0, a7);
  dword_60E31C = dword_60E8C0;
  s1 = (char *)qword_60E8D0;
  dword_60E314 = dword_60E8C8;
  return result;
}

__int64 __fastcall sub_408CD0(signed int a1, __int64 a2, _BYTE *a3, char **a4, _DWORD *a5)
{
  return sub_408C50(a1, a2, a3, a4, a5, 0, 0);
}

size_t __fastcall sub_408D50(wchar_t *pwc, char *s, size_t a3, mbstate_t *a4)
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
  if ( v4 > 0xFFFFFFFFFFFFFFFDLL && !(unsigned __int8)sub_409170(0LL, v6) )
  {
    v4 = 1LL;
    *v5 = (unsigned __int8)*v6;
  }
  return v4;
}

_BYTE *__fastcall sub_408DD0(_BYTE *a1, __int16 a2, unsigned __int64 a3)
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

signed __int64 __fastcall sub_409040(int a1, __int64 a2)
{
  int *v2; // rcx@1
  __int64 v3; // rdx@1
  signed __int64 result; // rax@4
  int v5; // er12@6
  int v6; // eax@6

  v2 = &dword_60E320;
  v3 = 0LL;
  do
  {
    if ( *v2 == a1 )
    {
      strcpy((char *)a2, &aHup[12 * v3]);
      return 0LL;
    }
    v3 = (unsigned int)(v3 + 1);
    v2 += 3;
  }
  while ( (_DWORD)v3 != 35 );
  v5 = __libc_current_sigrtmin();
  v6 = __libc_current_sigrtmax();
  if ( a1 < v5 || a1 > v6 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( v5 + ((v6 - v5) >> 1) >= a1 )
    {
      *(_DWORD *)a2 = 1229804626;
      *(_WORD *)(a2 + 4) = 78;
    }
    else
    {
      *(_DWORD *)a2 = 1095586898;
      v5 = v6;
      *(_WORD *)(a2 + 4) = 88;
    }
    result = (unsigned int)(a1 - v5);
    if ( a1 != v5 )
    {
      __sprintf_chk(a2 + 5, 1LL, -1LL, "%+d", (unsigned int)result);
      result = 0LL;
    }
  }
  return result;
}

int __fastcall sub_409110(FILE *stream)
{
  size_t v1; // r12@1
  int v2; // ebx@1
  int result; // eax@1

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

bool __fastcall sub_409170(int a1)
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

const char *sub_4091D0()
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
          v1 = "%s: invalid option -- '%c'\n" + 27;
LABEL_20:
          qword_60E8F8 = v1;
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
                sub_407E60(v61);
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
            sub_407E60(v40);
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

__int64 __fastcall sub_409740(char a1)
{
  return sub_409750(a1);
}

__int64 __fastcall sub_409750(char a1, int a2, __int64 a3, __int64 a4)
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
    if ( dword_60E900 < 0 )
    {
      v4 = sub_409750(a1);
      if ( v4 >= 0 && dword_60E900 == -1 )
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
        dword_60E900 = 1;
      }
      else
      {
        v4 = sub_409750(a1);
        if ( v4 >= 0 )
        {
          dword_60E900 = -1;
          goto LABEL_8;
        }
      }
    }
    return (unsigned int)v4;
  }
  return (unsigned int)fcntl(a1, a2, v11);
}

void init(void)
{
  init_proc();
}

void fini(void)
{
  ;
}

int __fastcall sub_409900(__int64 a1)
{
  __int64 v1; // rdx@1

  v1 = 0LL;
  if ( &unk_60E288 )
    v1 = unk_60E288;
  return __cxa_atexit(a1, 0LL, v1);
}

__int64 __fastcall sub_409918(__int64 a1, __int64 a2, __int64 a3)
{
  void (**v3)(void); // rbx@1
  __int64 v5; // [sp-8h] [bp-10h]@1

  v3 = (void (**)(void))&unk_60DE30;
  v5 = a3;
  while ( *v3 != (void (*)(void))-1 )
  {
    (*v3)();
    --v3;
  }
  return v5;
}
